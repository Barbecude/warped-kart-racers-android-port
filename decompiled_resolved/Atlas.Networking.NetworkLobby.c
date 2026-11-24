// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.NetworkLobby

// ============================================================
// RVA: 0x14a7988 | Atlas.Networking.NetworkLobby.get_LastSessionId
// ============================================================

void Atlas_Networking_NetworkLobby__get_LastSessionId(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  param_1[5] = *(undefined8 *)(param_2 + 0x58);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  return;
}



// ============================================================
// RVA: 0x14a799c | Atlas.Networking.NetworkLobby.set_LastSessionId
// ============================================================

void Atlas_Networking_NetworkLobby__set_LastSessionId(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  *(undefined8 *)(param_1 + 0x58) = param_2[5];
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  return;
}



// ============================================================
// RVA: 0x14a79b0 | Atlas.Networking.NetworkLobby.get_HasMatchStarted
// ============================================================

undefined1 Atlas_Networking_NetworkLobby__get_HasMatchStarted(long param_1)

{
  return *(undefined1 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x14a79b8 | Atlas.Networking.NetworkLobby.get_RemotePlayers
// ============================================================

undefined8 Atlas_Networking_NetworkLobby__get_RemotePlayers(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x14a79c0 | Atlas.Networking.NetworkLobby.set_RemotePlayers
// ============================================================

void Atlas_Networking_NetworkLobby__set_RemotePlayers(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  return;
}



// ============================================================
// RVA: 0x14a79c8 | Atlas.Networking.NetworkLobby.get_LocalPlayer
// ============================================================

void Atlas_Networking_NetworkLobby__get_LocalPlayer(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  uVar3 = *(undefined8 *)(param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  param_1[1] = *(undefined8 *)(param_2 + 0xe0);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x130);
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  uVar4 = *(undefined8 *)(param_2 + 0x140);
  uVar3 = *(undefined8 *)(param_2 + 0x138);
  uVar7 = *(undefined8 *)(param_2 + 0x110);
  uVar6 = *(undefined8 *)(param_2 + 0x108);
  uVar5 = *(undefined8 *)(param_2 + 0x118);
  param_1[9] = *(undefined8 *)(param_2 + 0x120);
  param_1[8] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x148);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  return;
}



// ============================================================
// RVA: 0x14a79fc | Atlas.Networking.NetworkLobby.set_LocalPlayer
// ============================================================

void Atlas_Networking_NetworkLobby__set_LocalPlayer(long param_1,undefined8 param_2)

{
  _memmove(param_1 + 0xd8,param_2,0x78);
  return;
}



// ============================================================
// RVA: 0x14a7a18 | Atlas.Networking.NetworkLobby.get_AiPlayers
// ============================================================

undefined8 Atlas_Networking_NetworkLobby__get_AiPlayers(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



// ============================================================
// RVA: 0x14a7a20 | Atlas.Networking.NetworkLobby.set_AiPlayers
// ============================================================

void Atlas_Networking_NetworkLobby__set_AiPlayers(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x150) = param_2;
  return;
}



// ============================================================
// RVA: 0x14a7a28 | Atlas.Networking.NetworkLobby.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014a7bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014a7bd8) */
/* WARNING: Removing unreachable block (ram,0x014a7bf0) */
/* WARNING: Removing unreachable block (ram,0x014a7c0c) */
/* WARNING: Removing unreachable block (ram,0x014a7c14) */
/* WARNING: Removing unreachable block (ram,0x014a7c64) */
/* WARNING: Removing unreachable block (ram,0x014a7c70) */
/* WARNING: Removing unreachable block (ram,0x014a7c7c) */
/* WARNING: Removing unreachable block (ram,0x014a7c84) */
/* WARNING: Removing unreachable block (ram,0x014a7cc0) */
/* WARNING: Removing unreachable block (ram,0x014a7cd0) */
/* WARNING: Removing unreachable block (ram,0x014a7cdc) */
/* WARNING: Removing unreachable block (ram,0x014a7ce4) */
/* WARNING: Removing unreachable block (ram,0x014a7d28) */
/* WARNING: Removing unreachable block (ram,0x014a7d38) */
/* WARNING: Removing unreachable block (ram,0x014a7d44) */
/* WARNING: Removing unreachable block (ram,0x014a7d4c) */
/* WARNING: Removing unreachable block (ram,0x014a7d88) */
/* WARNING: Removing unreachable block (ram,0x014a7d98) */
/* WARNING: Removing unreachable block (ram,0x014a7da4) */
/* WARNING: Removing unreachable block (ram,0x014a7dac) */
/* WARNING: Removing unreachable block (ram,0x014a7df8) */
/* WARNING: Removing unreachable block (ram,0x014a7e08) */
/* WARNING: Removing unreachable block (ram,0x014a7e14) */
/* WARNING: Removing unreachable block (ram,0x014a7e1c) */
/* WARNING: Removing unreachable block (ram,0x014a7e5c) */
/* WARNING: Removing unreachable block (ram,0x014a7e68) */
/* WARNING: Removing unreachable block (ram,0x014a7e74) */
/* WARNING: Removing unreachable block (ram,0x014a7e7c) */
/* WARNING: Removing unreachable block (ram,0x014a7eb8) */
/* WARNING: Removing unreachable block (ram,0x014a7ec8) */
/* WARNING: Removing unreachable block (ram,0x014a7ed4) */
/* WARNING: Removing unreachable block (ram,0x014a7edc) */
/* WARNING: Removing unreachable block (ram,0x014a7f18) */
/* WARNING: Removing unreachable block (ram,0x014a7f28) */
/* WARNING: Removing unreachable block (ram,0x014a7f34) */
/* WARNING: Removing unreachable block (ram,0x014a7f3c) */
/* WARNING: Removing unreachable block (ram,0x014a7f7c) */
/* WARNING: Removing unreachable block (ram,0x014a7f88) */
/* WARNING: Removing unreachable block (ram,0x014a7f94) */
/* WARNING: Removing unreachable block (ram,0x014a7f9c) */
/* WARNING: Removing unreachable block (ram,0x014a7fdc) */
/* WARNING: Removing unreachable block (ram,0x014a7fe8) */
/* WARNING: Removing unreachable block (ram,0x014a7ff4) */
/* WARNING: Removing unreachable block (ram,0x014a7ffc) */
/* WARNING: Removing unreachable block (ram,0x014a8038) */
/* WARNING: Removing unreachable block (ram,0x014a8048) */
/* WARNING: Removing unreachable block (ram,0x014a810c) */

void Atlas_Networking_NetworkLobby__Init(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4a5f & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d55158);
    func_0x00f78a20(0x3d55198);
    func_0x00f78a20(0x3d3b4b0);
    func_0x00f78a20(0x3d3b4f0);
    func_0x00f78a20(0x3d1dc30);
    func_0x00f78a20(0x3d1dc38);
    func_0x00f78a20(0x3d23758);
    func_0x00f78a20(0x3d5ac60);
    func_0x00f78a20(0x3d5ac68);
    func_0x00f78a20(0x3d5ac70);
    func_0x00f78a20(0x3d5ac78);
    func_0x00f78a20(0x3d5ac80);
    func_0x00f78a20(0x3d5ac88);
    func_0x00f78a20(0x3d5ac90);
    func_0x00f78a20(0x3d5ac98);
    func_0x00f78a20(0x3d5aca0);
    func_0x00f78a20(0x3d5aca8);
    func_0x00f78a20(0x3d5acb0);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4a5f = 1;
  }
  if (param_2 == 0) {
    func_0x00f78af4();
    func_0x00f78e5c();
    ___stack_chk_fail();
  }
  else {
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55198);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    func_0x00f78aec(/*Atlas.Networking.NetworkLobbySessionData_TypeInfo*/ uRam0000000003d23758);
  }
  return;
}



// ============================================================
// RVA: 0x14a821c | Atlas.Networking.NetworkLobby.ForceUpdateCachedPlayer
// ============================================================

void Atlas_Networking_NetworkLobby__ForceUpdateCachedPlayer(undefined8 param_1)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  if ((bRam0000000003eb4a70 & 1) == 0) {
    func_0x00f78a20(0x3d52240);
    bRam0000000003eb4a70 = 1;
  }
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_50 = 0;
  uStack_68 = param_1;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_d0,0);
  uStack_70 = uStack_b8;
  uStack_78 = uStack_c0;
  uStack_80 = uStack_c8;
  uStack_88 = uStack_d0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_a8 = uStack_c8;
  uStack_b0 = uStack_d0;
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<NetworkLobby.<ForceUpdateCachedPlayer>d__64>*/ func_0x0182c6c0(&uStack_b0,&uStack_90,uRam0000000003d52240);
  return;
}



// ============================================================
// RVA: 0x14a82e4 | Atlas.Networking.NetworkLobby.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a8858 | Atlas.Networking.NetworkLobby.Clear
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a8a50 | Atlas.Networking.NetworkLobby.Update
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a9418 | Atlas.Networking.NetworkLobby.SetLocalPlayerReady
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a94b8 | Atlas.Networking.NetworkLobby.FormatDisplayName
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a9524 | Atlas.Networking.NetworkLobby.EnableSinglePlayerFallback
// ============================================================

void Atlas_Networking_NetworkLobby__EnableSinglePlayerFallback(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x99) = param_2;
  return;
}



// ============================================================
// RVA: 0x14a952c | Atlas.Networking.NetworkLobby.IsSinglePlayerFallbackEnabled
// ============================================================

undefined1 Atlas_Networking_NetworkLobby__IsSinglePlayerFallbackEnabled(long param_1)

{
  return *(undefined1 *)(param_1 + 0x99);
}



// ============================================================
// RVA: 0x14a9534 | Atlas.Networking.NetworkLobby.IsHostConfigValid
// ============================================================

undefined1 Atlas_Networking_NetworkLobby__IsHostConfigValid(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa9);
}



// ============================================================
// RVA: 0x14a953c | Atlas.Networking.NetworkLobby.GetHostConfig
// ============================================================

void Atlas_Networking_NetworkLobby__GetHostConfig(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[1] = *(undefined8 *)(param_2 + 0x80);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x88);
  return;
}



// ============================================================
// RVA: 0x14a9550 | Atlas.Networking.NetworkLobby.SetHostConfig
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a9570 | Atlas.Networking.NetworkLobby.SetLocalPlayerVisuals
// ============================================================

/* WARNING: Possible PIC construction at 0x014a9678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014a9bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014a967c) */
/* WARNING: Removing unreachable block (ram,0x014a9bc0) */
/* WARNING: Removing unreachable block (ram,0x014a9c08) */
/* WARNING: Removing unreachable block (ram,0x014a9c30) */
/* WARNING: Removing unreachable block (ram,0x014a9c7c) */
/* WARNING: Removing unreachable block (ram,0x014a9cd0) */
/* WARNING: Removing unreachable block (ram,0x014a9d6c) */
/* WARNING: Removing unreachable block (ram,0x014a9d78) */
/* WARNING: Removing unreachable block (ram,0x014a9d80) */
/* WARNING: Removing unreachable block (ram,0x014a9d9c) */
/* WARNING: Removing unreachable block (ram,0x014a9dd0) */
/* WARNING: Removing unreachable block (ram,0x014a9dd8) */
/* WARNING: Removing unreachable block (ram,0x014a9ce8) */
/* WARNING: Removing unreachable block (ram,0x014a9cfc) */
/* WARNING: Removing unreachable block (ram,0x014a9d28) */
/* WARNING: Removing unreachable block (ram,0x014a9d48) */
/* WARNING: Removing unreachable block (ram,0x014a9d0c) */
/* WARNING: Removing unreachable block (ram,0x014a9c8c) */

ulong Atlas_Networking_NetworkLobby__SetLocalPlayerVisuals
                (ulong param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int extraout_w1;
  uint uVar9;
  long lVar10;
  undefined8 *extraout_x8;
  long lVar11;
  undefined8 unaff_x21;
  ulong uVar12;
  long unaff_x22;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_750;
  undefined4 uStack_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  int iStack_734;
  undefined8 uStack_730;
  int iStack_728;
  undefined4 uStack_724;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  int iStack_6c0;
  undefined4 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 auStack_660 [4];
  undefined8 uStack_640;
  undefined4 uStack_634;
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
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5a8;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  ulong uStack_550;
  undefined8 uStack_548;
  undefined1 ****ppppuStack_540;
  undefined *puStack_538;
  undefined4 uStack_4a8;
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
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  undefined1 ***pppuStack_360;
  undefined *puStack_358;
  int iStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined2 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_198;
  uint uStack_194;
  undefined1 *puStack_140;
  undefined *puStack_138;
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_40 = *(undefined8 *)(param_1 + 0x148);
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  *(undefined8 *)(param_1 + 0x130) = uStack_58;
  *(undefined8 *)(param_1 + 0x128) = uStack_60;
  *(undefined8 *)(param_1 + 0x140) = uStack_48;
  *(undefined8 *)(param_1 + 0x138) = uStack_50;
  *(undefined8 *)(param_1 + 0x148) = uStack_40;
  *(undefined8 *)(param_1 + 0xe0) = uStack_a8;
  *(undefined8 *)(param_1 + 0xd8) = uStack_b0;
  *(undefined8 *)(param_1 + 0xf0) = uStack_98;
  *(undefined8 *)(param_1 + 0xe8) = uStack_a0;
  *(undefined8 *)(param_1 + 0x100) = uStack_88;
  *(undefined8 *)(param_1 + 0xf8) = uStack_90;
  *(undefined8 *)(param_1 + 0x110) = uStack_78;
  *(undefined8 *)(param_1 + 0x108) = uStack_80;
  *(undefined8 *)(param_1 + 0x120) = uStack_68;
  *(undefined8 *)(param_1 + 0x118) = uStack_70;
  if ((*(char *)(param_1 + 0x99) != '\0') || (*(long *)(param_1 + 0x70) == 0)) {
    return param_1;
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x70) + 0x30);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*plVar4 + 0x938))(plVar4,*(undefined8 *)(*plVar4 + 0x940));
  if (iVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x9c);
  }
  auVar22._8_8_ = &uStack_130;
  auVar22._0_8_ = *(long *)(param_1 + 0x90);
  if (*(long *)(param_1 + 0x90) == 0) {
    puVar15 = &Atlas_Networking_NetworkLobbySessionData__SetLocalPlayerSessionData;
    auVar22 = func_0x00f78af4();
  }
  else {
    uStack_e8 = *(undefined8 *)(param_1 + 0x120);
    uStack_f0 = *(undefined8 *)(param_1 + 0x118);
    uStack_d8 = *(undefined8 *)(param_1 + 0x130);
    uStack_e0 = *(undefined8 *)(param_1 + 0x128);
    uStack_c8 = *(undefined8 *)(param_1 + 0x140);
    uStack_d0 = *(undefined8 *)(param_1 + 0x138);
    uStack_c0 = *(undefined8 *)(param_1 + 0x148);
    uStack_128 = *(undefined8 *)(param_1 + 0xe0);
    uStack_130 = *(undefined8 *)(param_1 + 0xd8);
    uStack_118 = *(undefined8 *)(param_1 + 0xf0);
    uStack_120 = *(undefined8 *)(param_1 + 0xe8);
    uStack_108 = *(undefined8 *)(param_1 + 0x100);
    uStack_110 = *(undefined8 *)(param_1 + 0xf8);
    uStack_f8 = *(undefined8 *)(param_1 + 0x110);
    uStack_100 = *(undefined8 *)(param_1 + 0x108);
    param_3 = uVar9 & 0xff;
    param_4 = 0;
    puVar15 = &UNK_014a967c;
  }
  lVar10 = auVar22._8_8_;
  lVar11 = auVar22._0_8_;
  puStack_140 = &stack0xfffffffffffffff0;
  puStack_138 = puVar15;
  if (*(long *)(lVar11 + 0x20) != 0) {
    uStack_198 = param_4;
    uStack_194 = param_3;
    /*FlatBuffers.ByteBuffer$$Reset*/ func_0x016cc1bc(*(long *)(lVar11 + 0x20),0);
    unaff_x22 = lVar10;
    if (*(long *)(lVar11 + 0x28) != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(*(long *)(lVar11 + 0x28),0);
      unaff_x23 = *(undefined8 *)(lVar11 + 0x28);
      unaff_x24 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(lVar11,*(undefined8 *)(lVar10 + 0x30));
      unaff_x25 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(lVar11,*(undefined8 *)(lVar10 + 0x38));
      unaff_x26 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(lVar11,*(undefined8 *)(lVar10 + 0x40));
      unaff_x27 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(lVar11,*(undefined8 *)(lVar10 + 0x48));
      unaff_x28 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(lVar11,*(undefined8 *)(lVar10 + 0x50));
      uVar5 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(lVar11,*(undefined8 *)(lVar10 + 0x58));
      unaff_x21 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(lVar11,*(undefined8 *)(lVar10 + 0x60));
      uStack_1b0 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(lVar11,*(undefined8 *)(lVar10 + 0x68));
      uStack_1a8 = 0;
      uVar3 = /*Core.Networking.SessionKartVisuals$$CreateSessionKartVisuals*/ func_0x01662364(unaff_x23,unaff_x24,unaff_x25,unaff_x26,unaff_x27,unaff_x28,uVar5,
                              unaff_x21);
      /*Core.Networking.ClientSessionInfo$$StartClientSessionInfo*/ func_0x01653b8c(*(undefined8 *)(lVar11 + 0x28),0);
      /*Core.Networking.ClientSessionInfo$$AddVisuals*/ func_0x01653ad4(*(undefined8 *)(lVar11 + 0x28),uVar3,0);
      /*Core.Networking.ClientSessionInfo$$AddIsReady*/ func_0x01653af8(*(undefined8 *)(lVar11 + 0x28),*(char *)(lVar10 + 0x72) != '\0',0);
      /*Core.Networking.ClientSessionInfo$$AddIsInLobby*/ func_0x01653b1c(*(undefined8 *)(lVar11 + 0x28),*(char *)(lVar10 + 0x71) != '\0',0);
      param_1 = /*Core.Networking.ClientSessionInfo$$EndClientSessionInfo*/ func_0x01653b40(*(undefined8 *)(lVar11 + 0x28),0);
      /*Core.Networking.SessionInfo$$StartSessionInfo*/ func_0x01662044(*(undefined8 *)(lVar11 + 0x28),0);
      /*Core.Networking.SessionInfo$$AddGameType*/ func_0x01661fd4(*(undefined8 *)(lVar11 + 0x28),uStack_194,0);
      /*Core.Networking.SessionInfo$$AddClientInfo*/ func_0x01661fb0(*(undefined8 *)(lVar11 + 0x28),param_1 & 0xffffffff,0);
      uVar5 = /*Core.Networking.SessionInfo$$EndSessionInfo*/ func_0x01661ff8(*(undefined8 *)(lVar11 + 0x28),0);
      if (*(long *)(lVar11 + 0x28) != 0) {
        /*FlatBuffers.FlatBufferBuilder$$Finish*/ func_0x016cef90(*(long *)(lVar11 + 0x28),uVar5,0);
        if (*(long *)(lVar11 + 0x28) != 0) {
          unaff_x21 = /*FlatBuffers.FlatBufferBuilder$$CopyByteArray*/ func_0x016cd9b8(*(long *)(lVar11 + 0x28),*(undefined8 *)(lVar11 + 0x30),0);
          lVar10 = *(long *)(lVar11 + 0x30);
          if (lVar10 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if (*(int *)(lVar10 + 0x18) != 0) {
              lVar6 = lVar10 + 0x20;
            }
          }
          if (*(long *)(lVar11 + 0x10) != 0) {
            plVar4 = *(long **)(*(long *)(lVar11 + 0x10) + 0x30);
            uVar5 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar6,0);
            lVar11 = 0;
            if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014a98b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar7 = (**(code **)(*plVar4 + 0x8d8))
                                (plVar4,uVar5,unaff_x21,uStack_198,*(undefined8 *)(*plVar4 + 0x8e0))
              ;
              return uVar7;
            }
          }
        }
      }
    }
  }
  auVar22 = func_0x00f78af4();
  uVar7 = auVar22._0_8_;
  puStack_1b8 = &Atlas_Networking_NetworkLobby__GetLoadoutFromSyncId;
  puVar13 = (undefined8 *)0x3eb4000;
  uVar8 = uVar7;
  uStack_1f0 = unaff_x24;
  uStack_1e8 = unaff_x23;
  lStack_1e0 = unaff_x22;
  uStack_1d8 = unaff_x21;
  lStack_1d0 = lVar11;
  uStack_1c8 = param_1;
  ppuStack_1c0 = &puStack_140;
  if ((bRam0000000003eb4a63 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b4a0);
    uVar8 = func_0x00f78a20(0x3d3b4a8);
    bRam0000000003eb4a63 = 1;
  }
  uStack_200 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  iVar2 = auVar22._8_4_;
  if (*(int *)(uVar7 + 0xf4) == iVar2) {
    uVar16 = *(undefined8 *)(uVar7 + 0x110);
    uVar5 = *(undefined8 *)(uVar7 + 0x108);
    uVar18 = *(undefined8 *)(uVar7 + 0x120);
    uVar17 = *(undefined8 *)(uVar7 + 0x118);
    uVar19 = *(undefined8 *)(uVar7 + 0x128);
    uVar21 = *(undefined8 *)(uVar7 + 0x140);
    uVar20 = *(undefined8 *)(uVar7 + 0x138);
    extraout_x8[5] = *(undefined8 *)(uVar7 + 0x130);
    extraout_x8[4] = uVar19;
    extraout_x8[7] = uVar21;
    extraout_x8[6] = uVar20;
    extraout_x8[3] = uVar18;
    extraout_x8[2] = uVar17;
  }
  else {
    if (*(long *)(uVar7 + 0xd0) == 0) goto code_r0x014a9aac;
    /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_280,*(long *)(uVar7 + 0xd0),uRam0000000003d3b4c0);
    puVar13 = &uStack_240;
    unaff_x23 = 0x3d32b50;
    do {
      uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_280,uRam0000000003d32b50);
      if ((uVar8 & 1) == 0) {
        iStack_2d0 = 0x65;
        goto code_r0x014a99f4;
      }
    } while (uStack_258._4_4_ != iVar2);
    uStack_2b8 = uStack_238;
    uStack_2c0 = uStack_240;
    uStack_2a8 = uStack_228;
    uStack_2b0 = uStack_230;
    uStack_298 = uStack_218;
    uStack_2a0 = uStack_220;
    uStack_288 = uStack_208;
    uStack_290 = uStack_210;
    iStack_2d0 = 0xa3;
code_r0x014a99f4:
    uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_280,uRam0000000003d32b48);
    if (iStack_2d0 == 0x65) {
      uStack_2c8 = 0;
    }
    else if (iStack_2d0 == 0xa3) {
      extraout_x8[1] = uStack_2b8;
      *extraout_x8 = uStack_2c0;
      extraout_x8[3] = uStack_2a8;
      extraout_x8[2] = uStack_2b0;
code_r0x014a9a7c:
      extraout_x8[5] = uStack_298;
      extraout_x8[4] = uStack_2a0;
      extraout_x8[7] = uStack_288;
      extraout_x8[6] = uStack_290;
      return uVar8;
    }
    while (*(char *)(uVar7 + 0xa9) != '\0') {
      lVar11 = *(long *)(uVar7 + 0x88);
      uVar7 = 0;
      if (lVar11 != 0) {
        uVar9 = iVar2 - 1;
        if ((long)(ulong)uVar9 < (long)(int)*(uint *)(lVar11 + 0x18)) {
          if (*(uint *)(lVar11 + 0x18) <= uVar9) {
            uVar8 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar11 = *(long *)(lVar11 + 0x10) + (long)(int)uVar9 * 0x40;
          uVar5 = *(undefined8 *)(lVar11 + 0x20);
          uVar17 = *(undefined8 *)(lVar11 + 0x38);
          uVar16 = *(undefined8 *)(lVar11 + 0x30);
          extraout_x8[1] = *(undefined8 *)(lVar11 + 0x28);
          *extraout_x8 = uVar5;
          extraout_x8[3] = uVar17;
          extraout_x8[2] = uVar16;
          uStack_298 = *(undefined8 *)(lVar11 + 0x48);
          uStack_2a0 = *(undefined8 *)(lVar11 + 0x40);
          uStack_288 = *(undefined8 *)(lVar11 + 0x58);
          uStack_290 = *(undefined8 *)(lVar11 + 0x50);
          goto code_r0x014a9a7c;
        }
        break;
      }
code_r0x014a9aac:
      auVar23 = func_0x00f78af4();
      if (auVar23._8_4_ != 1) {
        uVar8 = __Unwind_Resume();
        puStack_358 = &Atlas_Networking_NetworkLobby__GetNetworkPlayerList;
        ppppuStack_540 = &pppuStack_360;
        puVar14 = (undefined8 *)0x3eb4000;
        uStack_3b0 = unaff_x28;
        uStack_3a8 = unaff_x27;
        uStack_3a0 = unaff_x26;
        uStack_398 = unaff_x25;
        uStack_390 = unaff_x24;
        uStack_388 = unaff_x23;
        puStack_380 = puVar13;
        uStack_378 = auVar22._8_8_;
        uStack_370 = uVar7;
        pppuStack_360 = &ppuStack_1c0;
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
        uStack_3f0 = 0;
        uStack_408 = 0;
        uStack_410 = 0;
        uStack_3f8 = 0;
        uStack_400 = 0;
        uStack_428 = 0;
        uStack_430 = 0;
        uStack_418 = 0;
        uStack_420 = 0;
        uStack_448 = 0;
        uStack_450 = 0;
        uStack_438 = 0;
        uStack_440 = 0;
        uStack_468 = 0;
        uStack_470 = 0;
        uStack_458 = 0;
        uStack_460 = 0;
        uStack_488 = 0;
        uStack_490 = 0;
        uStack_478 = 0;
        uStack_480 = 0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_4a8 = 0;
        uStack_560 = 0x3eb4000;
        uStack_558 = 0x3d3b4f0;
        uStack_548 = 0x3d1dc38;
        puStack_538 = &UNK_014a9bc0;
        lStack_5a8 = *(long *)PTR_03a5d648;
        lVar11 = 0x3eb4000;
        uVar7 = uVar8;
        uStack_590 = unaff_x28;
        uStack_588 = unaff_x27;
        uStack_580 = unaff_x26;
        uStack_578 = unaff_x25;
        uStack_570 = unaff_x24;
        uStack_568 = unaff_x23;
        uStack_550 = uVar8;
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
          uVar7 = func_0x00f78a20(0x3d1df80);
          bRam0000000003eb4a65 = 1;
        }
        if (*(int *)(uVar8 + 0x100) != 0) goto code_r0x014a9ed4;
        lVar11 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
        /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(lVar11,8,uRam0000000003d3c6b8);
        if (lVar11 == 0) goto code_r0x014aa1ac;
        /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar11,*(undefined4 *)(uVar8 + 0xf4),uRam0000000003d3c6c0);
        if (*(long *)(uVar8 + 0xd0) == 0) goto code_r0x014aa1ac;
        puVar14 = &uStack_5d0;
        /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_750,*(long *)(uVar8 + 0xd0),uRam0000000003d3b4c0);
        uStack_5f8 = uStack_6e8;
        uStack_600 = uStack_6f0;
        uStack_5e8 = uStack_6d8;
        uStack_5f0 = uStack_6e0;
        uStack_5e0 = uStack_6d0;
        uStack_634 = uStack_724;
        uStack_640 = uStack_730;
        uStack_628 = uStack_718;
        uStack_630 = uStack_720;
        uStack_618 = uStack_708;
        uStack_620 = uStack_710;
        uStack_608 = uStack_6f8;
        uStack_610 = uStack_700;
        auStack_660[0] = uStack_750;
        goto code_r0x014a9fa0;
      }
      uVar8 = func_0x032ff0c0(auVar23._0_8_,auVar23._8_8_,&uStack_280);
    }
    uVar5 = 0;
    uVar16 = 0;
    extraout_x8[5] = 0;
    extraout_x8[4] = 0;
    extraout_x8[7] = 0;
    extraout_x8[6] = 0;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
  }
  extraout_x8[1] = uVar16;
  *extraout_x8 = uVar5;
  return uVar8;
code_r0x014a9fa0:
  uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(auStack_660,uRam0000000003d32b50);
  if ((uVar7 & 1) == 0) {
    iStack_6c0 = 0x84;
code_r0x014a9fd8:
    uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(auStack_660,uRam0000000003d32b48);
    if (iStack_6c0 != 0x15e) {
      if (iStack_6c0 != 0x84) goto code_r0x014aa008;
      uStack_6b8 = 0;
      goto code_r0x014aa008;
    }
code_r0x014a9ed4:
    if (*(long *)PTR_03a5d648 == lStack_5a8) {
      return uVar7;
    }
    do {
      ___stack_chk_fail();
      if (extraout_w1 != 1) {
code_r0x014aa1f0:
        lVar11 = __Unwind_Resume();
        return (ulong)*(uint *)(lVar11 + 0x9c);
      }
      plVar4 = (long *)___cxa_begin_catch();
      lVar10 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(auStack_660,uRam0000000003d32b48);
      if (lVar10 != 0) {
        func_0x00f78ac0(lVar10,0);
        goto code_r0x014aa1f0;
      }
code_r0x014aa008:
      uVar7 = /*System.Collections.Generic.List<uint>$$Sort*/ func_0x02480280(lVar11,uRam0000000003d3c6e0);
      if (*(long *)(uVar8 + 0x150) != 0) {
        iVar2 = *(int *)(*(long *)(uVar8 + 0x150) + 0x18) + 1;
        uVar9 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar9) {
          lVar10 = 0;
          do {
            if (uVar9 <= (uint)lVar10) {
              uVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*(int *)(*(long *)(lVar11 + 0x10) + lVar10 * 4 + 0x20) == *(int *)(uVar8 + 0xf4)) {
              *(uint *)(uVar8 + 0x100) = iVar2 + (uint)lVar10;
              break;
            }
            uVar9 = *(uint *)(lVar11 + 0x18);
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < (int)uVar9);
        }
        lVar10 = *(long *)(uVar8 + 0xd0);
        if (lVar10 != 0) {
          uVar12 = 0;
          do {
            if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar12) goto code_r0x014a9ed4;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) {
              uVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar10 = *(long *)(lVar10 + 0x10) + uVar12 * 0x78;
            uStack_5c8 = *(undefined8 *)(lVar10 + 0x28);
            uStack_5d0 = *(undefined8 *)(lVar10 + 0x20);
            uVar5 = *(undefined8 *)(lVar10 + 0x2c);
            *(undefined8 *)((long)puVar14 + 0x14) = *(undefined8 *)(lVar10 + 0x34);
            *(undefined8 *)((long)puVar14 + 0xc) = uVar5;
            iVar1 = *(int *)(lVar10 + 0x3c);
            uVar5 = *(undefined8 *)(lVar10 + 0x40);
            uVar3 = *(undefined4 *)(lVar10 + 0x4c);
            uStack_688 = *(undefined8 *)(lVar10 + 0x78);
            uStack_690 = *(undefined8 *)(lVar10 + 0x70);
            uStack_678 = *(undefined8 *)(lVar10 + 0x88);
            uStack_680 = *(undefined8 *)(lVar10 + 0x80);
            uStack_670 = *(undefined8 *)(lVar10 + 0x90);
            uStack_6a8 = *(undefined8 *)(lVar10 + 0x58);
            uStack_6b0 = *(undefined8 *)(lVar10 + 0x50);
            uStack_698 = *(undefined8 *)(lVar10 + 0x68);
            uStack_6a0 = *(undefined8 *)(lVar10 + 0x60);
            uVar9 = *(uint *)(lVar11 + 0x18);
            if (0 < (int)uVar9) {
              lVar10 = 0;
              do {
                if (uVar9 <= (uint)lVar10) {
                  uVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                if (*(int *)(*(long *)(lVar11 + 0x10) + lVar10 * 4 + 0x20) == iVar1) {
                  if (*(long *)(uVar8 + 0xd0) == 0) goto code_r0x014aa1ac;
                  iStack_728 = iVar2 + (uint)lVar10;
                  uStack_748 = (undefined4)uStack_5c8;
                  uStack_750 = uStack_5d0;
                  uStack_73c = (undefined4)*(undefined8 *)((long)puVar14 + 0x14);
                  uStack_738 = (undefined4)((ulong)*(undefined8 *)((long)puVar14 + 0x14) >> 0x20);
                  uStack_744 = (undefined4)*(undefined8 *)((long)puVar14 + 0xc);
                  uStack_740 = (undefined4)((ulong)*(undefined8 *)((long)puVar14 + 0xc) >> 0x20);
                  uStack_6f8 = uStack_688;
                  uStack_700 = uStack_690;
                  uStack_6e8 = uStack_678;
                  uStack_6f0 = uStack_680;
                  uStack_6e0 = uStack_670;
                  uStack_718 = uStack_6a8;
                  uStack_720 = uStack_6b0;
                  uStack_708 = uStack_698;
                  uStack_710 = uStack_6a0;
                  iStack_734 = iVar1;
                  uStack_730 = uVar5;
                  uStack_724 = uVar3;
                  uVar7 = /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$set_Item*/ func_0x024107e0(*(long *)(uVar8 + 0xd0),uVar12,&uStack_750,
                                          uRam0000000003d3b4e8);
                  break;
                }
                uVar9 = *(uint *)(lVar11 + 0x18);
                lVar10 = lVar10 + 1;
              } while ((int)lVar10 < (int)uVar9);
            }
            uVar12 = uVar12 + 1;
            lVar10 = *(long *)(uVar8 + 0xd0);
          } while (lVar10 != 0);
        }
      }
code_r0x014aa1ac:
      func_0x00f78af4();
    } while( true );
  }
  if ((int)uStack_628 != 0) {
    iStack_6c0 = 0x15e;
    goto code_r0x014a9fd8;
  }
  /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar11,uStack_634,uRam0000000003d3c6c0);
  goto code_r0x014a9fa0;
}



// ============================================================
// RVA: 0x14a98b8 | Atlas.Networking.NetworkLobby.GetLoadoutFromSyncId
// ============================================================

/* WARNING: Possible PIC construction at 0x014a9bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014a9bc0) */
/* WARNING: Removing unreachable block (ram,0x014a9c08) */
/* WARNING: Removing unreachable block (ram,0x014a9c30) */
/* WARNING: Removing unreachable block (ram,0x014a9c7c) */
/* WARNING: Removing unreachable block (ram,0x014a9cd0) */
/* WARNING: Removing unreachable block (ram,0x014a9d6c) */
/* WARNING: Removing unreachable block (ram,0x014a9d78) */
/* WARNING: Removing unreachable block (ram,0x014a9d80) */
/* WARNING: Removing unreachable block (ram,0x014a9d9c) */
/* WARNING: Removing unreachable block (ram,0x014a9dd0) */
/* WARNING: Removing unreachable block (ram,0x014a9dd8) */
/* WARNING: Removing unreachable block (ram,0x014a9ce8) */
/* WARNING: Removing unreachable block (ram,0x014a9cfc) */
/* WARNING: Removing unreachable block (ram,0x014a9d28) */
/* WARNING: Removing unreachable block (ram,0x014a9d48) */
/* WARNING: Removing unreachable block (ram,0x014a9d0c) */
/* WARNING: Removing unreachable block (ram,0x014a9c8c) */

ulong Atlas_Networking_NetworkLobby__GetLoadoutFromSyncId
                (undefined8 *param_1,ulong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  int iStack_584;
  undefined8 uStack_580;
  int iStack_578;
  undefined4 uStack_574;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  int iStack_510;
  undefined4 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 auStack_4b0 [4];
  undefined8 uStack_490;
  undefined4 uStack_484;
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
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_3f8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  uVar4 = param_2;
  if ((bRam0000000003eb4a63 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b4a0);
    uVar4 = func_0x00f78a20(0x3d3b4a8);
    bRam0000000003eb4a63 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (*(int *)(param_2 + 0xf4) == param_3) {
    uVar13 = *(undefined8 *)(param_2 + 0x110);
    uVar12 = *(undefined8 *)(param_2 + 0x108);
    uVar15 = *(undefined8 *)(param_2 + 0x120);
    uVar14 = *(undefined8 *)(param_2 + 0x118);
    uVar16 = *(undefined8 *)(param_2 + 0x128);
    uVar18 = *(undefined8 *)(param_2 + 0x140);
    uVar17 = *(undefined8 *)(param_2 + 0x138);
    param_1[5] = *(undefined8 *)(param_2 + 0x130);
    param_1[4] = uVar16;
    param_1[7] = uVar18;
    param_1[6] = uVar17;
    param_1[3] = uVar15;
    param_1[2] = uVar14;
  }
  else {
    if (*(long *)(param_2 + 0xd0) == 0) goto code_r0x014a9aac;
    /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_d0,*(long *)(param_2 + 0xd0),uRam0000000003d3b4c0);
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_d0,uRam0000000003d32b50);
      if ((uVar4 & 1) == 0) {
        iVar7 = 0x65;
        goto code_r0x014a99f4;
      }
    } while (uStack_a8._4_4_ != param_3);
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    iVar7 = 0xa3;
code_r0x014a99f4:
    uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_d0,uRam0000000003d32b48);
    if ((iVar7 != 0x65) && (iVar7 == 0xa3)) {
      param_1[1] = uStack_108;
      *param_1 = uStack_110;
      param_1[3] = uStack_f8;
      param_1[2] = uStack_100;
code_r0x014a9a7c:
      param_1[5] = uStack_e8;
      param_1[4] = uStack_f0;
      param_1[7] = uStack_d8;
      param_1[6] = uStack_e0;
      return uVar4;
    }
    while (*(char *)(param_2 + 0xa9) != '\0') {
      lVar8 = *(long *)(param_2 + 0x88);
      param_2 = 0;
      if (lVar8 != 0) {
        uVar3 = param_3 - 1;
        if ((long)(ulong)uVar3 < (long)(int)*(uint *)(lVar8 + 0x18)) {
          if (*(uint *)(lVar8 + 0x18) <= uVar3) {
            uVar4 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(lVar8 + 0x10) + (long)(int)uVar3 * 0x40;
          uVar12 = *(undefined8 *)(lVar8 + 0x20);
          uVar14 = *(undefined8 *)(lVar8 + 0x38);
          uVar13 = *(undefined8 *)(lVar8 + 0x30);
          param_1[1] = *(undefined8 *)(lVar8 + 0x28);
          *param_1 = uVar12;
          param_1[3] = uVar14;
          param_1[2] = uVar13;
          uStack_e8 = *(undefined8 *)(lVar8 + 0x48);
          uStack_f0 = *(undefined8 *)(lVar8 + 0x40);
          uStack_d8 = *(undefined8 *)(lVar8 + 0x58);
          uStack_e0 = *(undefined8 *)(lVar8 + 0x50);
          goto code_r0x014a9a7c;
        }
        break;
      }
code_r0x014a9aac:
      auVar19 = func_0x00f78af4();
      if (auVar19._8_4_ != 1) {
        uVar4 = __Unwind_Resume();
        puVar11 = (undefined8 *)0x3eb4000;
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
        lStack_3f8 = *(long *)PTR_03a5d648;
        lVar8 = 0x3eb4000;
        uVar5 = uVar4;
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
          uVar5 = func_0x00f78a20(0x3d1df80);
          bRam0000000003eb4a65 = 1;
        }
        if (*(int *)(uVar4 + 0x100) != 0) goto code_r0x014a9ed4;
        lVar8 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
        /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(lVar8,8,uRam0000000003d3c6b8);
        if (lVar8 == 0) goto code_r0x014aa1ac;
        /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar8,*(undefined4 *)(uVar4 + 0xf4),uRam0000000003d3c6c0);
        if (*(long *)(uVar4 + 0xd0) == 0) goto code_r0x014aa1ac;
        puVar11 = &uStack_420;
        /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_5a0,*(long *)(uVar4 + 0xd0),uRam0000000003d3b4c0);
        uStack_448 = uStack_538;
        uStack_450 = uStack_540;
        uStack_438 = uStack_528;
        uStack_440 = uStack_530;
        uStack_430 = uStack_520;
        uStack_484 = uStack_574;
        uStack_490 = uStack_580;
        uStack_478 = uStack_568;
        uStack_480 = uStack_570;
        uStack_468 = uStack_558;
        uStack_470 = uStack_560;
        uStack_458 = uStack_548;
        uStack_460 = uStack_550;
        auStack_4b0[0] = uStack_5a0;
        goto code_r0x014a9fa0;
      }
      uVar4 = func_0x032ff0c0(auVar19._0_8_,auVar19._8_8_,&uStack_d0);
    }
    uVar12 = 0;
    uVar13 = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  param_1[1] = uVar13;
  *param_1 = uVar12;
  return uVar4;
code_r0x014a9fa0:
  uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(auStack_4b0,uRam0000000003d32b50);
  if ((uVar5 & 1) == 0) {
    iStack_510 = 0x84;
code_r0x014a9fd8:
    uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(auStack_4b0,uRam0000000003d32b48);
    if (iStack_510 != 0x15e) {
      if (iStack_510 != 0x84) goto code_r0x014aa008;
      uStack_508 = 0;
      goto code_r0x014aa008;
    }
code_r0x014a9ed4:
    if (*(long *)PTR_03a5d648 == lStack_3f8) {
      return uVar5;
    }
    do {
      ___stack_chk_fail();
      if (extraout_w1 != 1) {
code_r0x014aa1f0:
        lVar8 = __Unwind_Resume();
        return (ulong)*(uint *)(lVar8 + 0x9c);
      }
      plVar6 = (long *)___cxa_begin_catch();
      lVar10 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(auStack_4b0,uRam0000000003d32b48);
      if (lVar10 != 0) {
        func_0x00f78ac0(lVar10,0);
        goto code_r0x014aa1f0;
      }
code_r0x014aa008:
      uVar5 = /*System.Collections.Generic.List<uint>$$Sort*/ func_0x02480280(lVar8,uRam0000000003d3c6e0);
      if (*(long *)(uVar4 + 0x150) != 0) {
        iVar7 = *(int *)(*(long *)(uVar4 + 0x150) + 0x18) + 1;
        uVar3 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar3) {
          lVar10 = 0;
          do {
            if (uVar3 <= (uint)lVar10) {
              uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*(int *)(*(long *)(lVar8 + 0x10) + lVar10 * 4 + 0x20) == *(int *)(uVar4 + 0xf4)) {
              *(uint *)(uVar4 + 0x100) = iVar7 + (uint)lVar10;
              break;
            }
            uVar3 = *(uint *)(lVar8 + 0x18);
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < (int)uVar3);
        }
        lVar10 = *(long *)(uVar4 + 0xd0);
        if (lVar10 != 0) {
          uVar9 = 0;
          do {
            if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar9) goto code_r0x014a9ed4;
            if (*(uint *)(lVar10 + 0x18) <= uVar9) {
              uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar10 = *(long *)(lVar10 + 0x10) + uVar9 * 0x78;
            uStack_418 = *(undefined8 *)(lVar10 + 0x28);
            uStack_420 = *(undefined8 *)(lVar10 + 0x20);
            uVar12 = *(undefined8 *)(lVar10 + 0x2c);
            *(undefined8 *)((long)puVar11 + 0x14) = *(undefined8 *)(lVar10 + 0x34);
            *(undefined8 *)((long)puVar11 + 0xc) = uVar12;
            iVar1 = *(int *)(lVar10 + 0x3c);
            uVar12 = *(undefined8 *)(lVar10 + 0x40);
            uVar2 = *(undefined4 *)(lVar10 + 0x4c);
            uStack_4d8 = *(undefined8 *)(lVar10 + 0x78);
            uStack_4e0 = *(undefined8 *)(lVar10 + 0x70);
            uStack_4c8 = *(undefined8 *)(lVar10 + 0x88);
            uStack_4d0 = *(undefined8 *)(lVar10 + 0x80);
            uStack_4c0 = *(undefined8 *)(lVar10 + 0x90);
            uStack_4f8 = *(undefined8 *)(lVar10 + 0x58);
            uStack_500 = *(undefined8 *)(lVar10 + 0x50);
            uStack_4e8 = *(undefined8 *)(lVar10 + 0x68);
            uStack_4f0 = *(undefined8 *)(lVar10 + 0x60);
            uVar3 = *(uint *)(lVar8 + 0x18);
            if (0 < (int)uVar3) {
              lVar10 = 0;
              do {
                if (uVar3 <= (uint)lVar10) {
                  uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                if (*(int *)(*(long *)(lVar8 + 0x10) + lVar10 * 4 + 0x20) == iVar1) {
                  if (*(long *)(uVar4 + 0xd0) == 0) goto code_r0x014aa1ac;
                  iStack_578 = iVar7 + (uint)lVar10;
                  uStack_598 = (undefined4)uStack_418;
                  uStack_5a0 = uStack_420;
                  uStack_58c = (undefined4)*(undefined8 *)((long)puVar11 + 0x14);
                  uStack_588 = (undefined4)((ulong)*(undefined8 *)((long)puVar11 + 0x14) >> 0x20);
                  uStack_594 = (undefined4)*(undefined8 *)((long)puVar11 + 0xc);
                  uStack_590 = (undefined4)((ulong)*(undefined8 *)((long)puVar11 + 0xc) >> 0x20);
                  uStack_548 = uStack_4d8;
                  uStack_550 = uStack_4e0;
                  uStack_538 = uStack_4c8;
                  uStack_540 = uStack_4d0;
                  uStack_530 = uStack_4c0;
                  uStack_568 = uStack_4f8;
                  uStack_570 = uStack_500;
                  uStack_558 = uStack_4e8;
                  uStack_560 = uStack_4f0;
                  iStack_584 = iVar1;
                  uStack_580 = uVar12;
                  uStack_574 = uVar2;
                  uVar5 = /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$set_Item*/ func_0x024107e0(*(long *)(uVar4 + 0xd0),uVar9,&uStack_5a0,
                                          uRam0000000003d3b4e8);
                  break;
                }
                uVar3 = *(uint *)(lVar8 + 0x18);
                lVar10 = lVar10 + 1;
              } while ((int)lVar10 < (int)uVar3);
            }
            uVar9 = uVar9 + 1;
            lVar10 = *(long *)(uVar4 + 0xd0);
          } while (lVar10 != 0);
        }
      }
code_r0x014aa1ac:
      func_0x00f78af4();
    } while( true );
  }
  if ((int)uStack_478 != 0) {
    iStack_510 = 0x15e;
    goto code_r0x014a9fd8;
  }
  /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar8,uStack_484,uRam0000000003d3c6c0);
  goto code_r0x014a9fa0;
}



// ============================================================
// RVA: 0x14a9ac8 | Atlas.Networking.NetworkLobby.GetNetworkPlayerList
// ============================================================

/* WARNING: Possible PIC construction at 0x014a9bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014a9bc0) */
/* WARNING: Removing unreachable block (ram,0x014a9c08) */
/* WARNING: Removing unreachable block (ram,0x014a9c30) */
/* WARNING: Removing unreachable block (ram,0x014a9c7c) */
/* WARNING: Removing unreachable block (ram,0x014a9cd0) */
/* WARNING: Removing unreachable block (ram,0x014a9d6c) */
/* WARNING: Removing unreachable block (ram,0x014a9d78) */
/* WARNING: Removing unreachable block (ram,0x014a9d80) */
/* WARNING: Removing unreachable block (ram,0x014a9d9c) */
/* WARNING: Removing unreachable block (ram,0x014a9dd0) */
/* WARNING: Removing unreachable block (ram,0x014a9dd8) */
/* WARNING: Removing unreachable block (ram,0x014a9ce8) */
/* WARNING: Removing unreachable block (ram,0x014a9cfc) */
/* WARNING: Removing unreachable block (ram,0x014a9d28) */
/* WARNING: Removing unreachable block (ram,0x014a9d48) */
/* WARNING: Removing unreachable block (ram,0x014a9d0c) */
/* WARNING: Removing unreachable block (ram,0x014a9c8c) */

ulong Atlas_Networking_NetworkLobby__GetNetworkPlayerList(ulong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  int iStack_3e4;
  undefined8 uStack_3e0;
  int iStack_3d8;
  undefined4 uStack_3d4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  int iStack_370;
  undefined4 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 auStack_310 [4];
  undefined8 uStack_2f0;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_258;
  
  puVar10 = (undefined8 *)0x3eb4000;
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
  lStack_258 = *(long *)PTR_03a5d648;
  lVar7 = 0x3eb4000;
  uVar5 = param_1;
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
    uVar5 = func_0x00f78a20(0x3d1df80);
    bRam0000000003eb4a65 = 1;
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    lVar7 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
    /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(lVar7,8,uRam0000000003d3c6b8);
    if (lVar7 == 0) goto code_r0x014aa1ac;
    /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar7,*(undefined4 *)(param_1 + 0xf4),uRam0000000003d3c6c0);
    if (*(long *)(param_1 + 0xd0) == 0) goto code_r0x014aa1ac;
    puVar10 = &uStack_280;
    /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_400,*(long *)(param_1 + 0xd0),uRam0000000003d3b4c0);
    uStack_2a8 = uStack_398;
    uStack_2b0 = uStack_3a0;
    uStack_298 = uStack_388;
    uStack_2a0 = uStack_390;
    uStack_290 = uStack_380;
    uStack_2e4 = uStack_3d4;
    uStack_2f0 = uStack_3e0;
    uStack_2d8 = uStack_3c8;
    uStack_2e0 = uStack_3d0;
    uStack_2c8 = uStack_3b8;
    uStack_2d0 = uStack_3c0;
    uStack_2b8 = uStack_3a8;
    uStack_2c0 = uStack_3b0;
    auStack_310[0] = uStack_400;
    while (uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(auStack_310,uRam0000000003d32b50), (uVar5 & 1) != 0) {
      if ((int)uStack_2d8 != 0) {
        iStack_370 = 0x15e;
        goto code_r0x014a9fd8;
      }
      /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar7,uStack_2e4,uRam0000000003d3c6c0);
    }
    iStack_370 = 0x84;
code_r0x014a9fd8:
    uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(auStack_310,uRam0000000003d32b48);
    if (iStack_370 != 0x15e) {
      if (iStack_370 != 0x84) goto code_r0x014aa008;
      uStack_368 = 0;
      goto code_r0x014aa008;
    }
  }
code_r0x014a9ed4:
  if (*(long *)PTR_03a5d648 == lStack_258) {
    return uVar5;
  }
  do {
    ___stack_chk_fail();
    if (extraout_w1 != 1) {
code_r0x014aa1f0:
      lVar7 = __Unwind_Resume();
      return (ulong)*(uint *)(lVar7 + 0x9c);
    }
    plVar6 = (long *)___cxa_begin_catch();
    lVar9 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(auStack_310,uRam0000000003d32b48);
    if (lVar9 != 0) {
      func_0x00f78ac0(lVar9,0);
      goto code_r0x014aa1f0;
    }
code_r0x014aa008:
    uVar5 = /*System.Collections.Generic.List<uint>$$Sort*/ func_0x02480280(lVar7,uRam0000000003d3c6e0);
    if (*(long *)(param_1 + 0x150) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x150) + 0x18) + 1;
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar2) {
        lVar9 = 0;
        do {
          if (uVar2 <= (uint)lVar9) {
            uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(int *)(*(long *)(lVar7 + 0x10) + lVar9 * 4 + 0x20) == *(int *)(param_1 + 0xf4)) {
            *(uint *)(param_1 + 0x100) = iVar1 + (uint)lVar9;
            break;
          }
          uVar2 = *(uint *)(lVar7 + 0x18);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar2);
      }
      lVar9 = *(long *)(param_1 + 0xd0);
      if (lVar9 != 0) {
        uVar8 = 0;
        do {
          if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar8) goto code_r0x014a9ed4;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) {
            uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar9 = *(long *)(lVar9 + 0x10) + uVar8 * 0x78;
          uStack_278 = *(undefined8 *)(lVar9 + 0x28);
          uStack_280 = *(undefined8 *)(lVar9 + 0x20);
          uVar11 = *(undefined8 *)(lVar9 + 0x2c);
          *(undefined8 *)((long)puVar10 + 0x14) = *(undefined8 *)(lVar9 + 0x34);
          *(undefined8 *)((long)puVar10 + 0xc) = uVar11;
          iVar3 = *(int *)(lVar9 + 0x3c);
          uVar11 = *(undefined8 *)(lVar9 + 0x40);
          uVar4 = *(undefined4 *)(lVar9 + 0x4c);
          uStack_338 = *(undefined8 *)(lVar9 + 0x78);
          uStack_340 = *(undefined8 *)(lVar9 + 0x70);
          uStack_328 = *(undefined8 *)(lVar9 + 0x88);
          uStack_330 = *(undefined8 *)(lVar9 + 0x80);
          uStack_320 = *(undefined8 *)(lVar9 + 0x90);
          uStack_358 = *(undefined8 *)(lVar9 + 0x58);
          uStack_360 = *(undefined8 *)(lVar9 + 0x50);
          uStack_348 = *(undefined8 *)(lVar9 + 0x68);
          uStack_350 = *(undefined8 *)(lVar9 + 0x60);
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (0 < (int)uVar2) {
            lVar9 = 0;
            do {
              if (uVar2 <= (uint)lVar9) {
                uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (*(int *)(*(long *)(lVar7 + 0x10) + lVar9 * 4 + 0x20) == iVar3) {
                if (*(long *)(param_1 + 0xd0) == 0) goto code_r0x014aa1ac;
                iStack_3d8 = iVar1 + (uint)lVar9;
                uStack_3f8 = (undefined4)uStack_278;
                uStack_400 = uStack_280;
                uStack_3ec = (undefined4)*(undefined8 *)((long)puVar10 + 0x14);
                uStack_3e8 = (undefined4)((ulong)*(undefined8 *)((long)puVar10 + 0x14) >> 0x20);
                uStack_3f4 = (undefined4)*(undefined8 *)((long)puVar10 + 0xc);
                uStack_3f0 = (undefined4)((ulong)*(undefined8 *)((long)puVar10 + 0xc) >> 0x20);
                uStack_3a8 = uStack_338;
                uStack_3b0 = uStack_340;
                uStack_398 = uStack_328;
                uStack_3a0 = uStack_330;
                uStack_390 = uStack_320;
                uStack_3c8 = uStack_358;
                uStack_3d0 = uStack_360;
                uStack_3b8 = uStack_348;
                uStack_3c0 = uStack_350;
                iStack_3e4 = iVar3;
                uStack_3e0 = uVar11;
                uStack_3d4 = uVar4;
                uVar5 = /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$set_Item*/ func_0x024107e0(*(long *)(param_1 + 0xd0),uVar8,&uStack_400,
                                        uRam0000000003d3b4e8);
                break;
              }
              uVar2 = *(uint *)(lVar7 + 0x18);
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < (int)uVar2);
          }
          uVar8 = uVar8 + 1;
          lVar9 = *(long *)(param_1 + 0xd0);
        } while (lVar9 != 0);
      }
    }
code_r0x014aa1ac:
    func_0x00f78af4();
  } while( true );
}



// ============================================================
// RVA: 0x14a9ddc | Atlas.Networking.NetworkLobby.GenerateFallbackSyncIds
// ============================================================

ulong Atlas_Networking_NetworkLobby__GenerateFallbackSyncIds(ulong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *unaff_x22;
  undefined8 uVar10;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  int iStack_204;
  undefined8 uStack_200;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  int iStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 auStack_130 [4];
  undefined8 uStack_110;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_78;
  
  lStack_78 = *(long *)PTR_03a5d648;
  lVar7 = 0x3eb4000;
  uVar5 = param_1;
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
    uVar5 = func_0x00f78a20(0x3d1df80);
    bRam0000000003eb4a65 = 1;
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    lVar7 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
    /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(lVar7,8,uRam0000000003d3c6b8);
    if (lVar7 == 0) goto code_r0x014aa1ac;
    /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar7,*(undefined4 *)(param_1 + 0xf4),uRam0000000003d3c6c0);
    if (*(long *)(param_1 + 0xd0) == 0) goto code_r0x014aa1ac;
    unaff_x22 = &uStack_a0;
    /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_220,*(long *)(param_1 + 0xd0),uRam0000000003d3b4c0);
    uStack_c8 = uStack_1b8;
    uStack_d0 = uStack_1c0;
    uStack_b8 = uStack_1a8;
    uStack_c0 = uStack_1b0;
    uStack_b0 = uStack_1a0;
    uStack_104 = uStack_1f4;
    uStack_110 = uStack_200;
    uStack_f8 = uStack_1e8;
    uStack_100 = uStack_1f0;
    uStack_e8 = uStack_1d8;
    uStack_f0 = uStack_1e0;
    uStack_d8 = uStack_1c8;
    uStack_e0 = uStack_1d0;
    auStack_130[0] = uStack_220;
    while (uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(auStack_130,uRam0000000003d32b50), (uVar5 & 1) != 0) {
      if ((int)uStack_f8 != 0) {
        iStack_190 = 0x15e;
        goto code_r0x014a9fd8;
      }
      /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar7,uStack_104,uRam0000000003d3c6c0);
    }
    iStack_190 = 0x84;
code_r0x014a9fd8:
    uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(auStack_130,uRam0000000003d32b48);
    if (iStack_190 != 0x15e) {
      if (iStack_190 != 0x84) goto code_r0x014aa008;
      uStack_188 = 0;
      goto code_r0x014aa008;
    }
  }
code_r0x014a9ed4:
  if (*(long *)PTR_03a5d648 == lStack_78) {
    return uVar5;
  }
  do {
    ___stack_chk_fail();
    if (extraout_w1 != 1) {
code_r0x014aa1f0:
      lVar7 = __Unwind_Resume();
      return (ulong)*(uint *)(lVar7 + 0x9c);
    }
    plVar6 = (long *)___cxa_begin_catch();
    lVar9 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(auStack_130,uRam0000000003d32b48);
    if (lVar9 != 0) {
      func_0x00f78ac0(lVar9,0);
      goto code_r0x014aa1f0;
    }
code_r0x014aa008:
    uVar5 = /*System.Collections.Generic.List<uint>$$Sort*/ func_0x02480280(lVar7,uRam0000000003d3c6e0);
    if (*(long *)(param_1 + 0x150) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x150) + 0x18) + 1;
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar2) {
        lVar9 = 0;
        do {
          if (uVar2 <= (uint)lVar9) {
            uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(int *)(*(long *)(lVar7 + 0x10) + lVar9 * 4 + 0x20) == *(int *)(param_1 + 0xf4)) {
            *(uint *)(param_1 + 0x100) = iVar1 + (uint)lVar9;
            break;
          }
          uVar2 = *(uint *)(lVar7 + 0x18);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar2);
      }
      lVar9 = *(long *)(param_1 + 0xd0);
      if (lVar9 != 0) {
        uVar8 = 0;
        do {
          if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar8) goto code_r0x014a9ed4;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) {
            uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar9 = *(long *)(lVar9 + 0x10) + uVar8 * 0x78;
          uStack_98 = *(undefined8 *)(lVar9 + 0x28);
          uStack_a0 = *(undefined8 *)(lVar9 + 0x20);
          uVar10 = *(undefined8 *)(lVar9 + 0x2c);
          *(undefined8 *)((long)unaff_x22 + 0x14) = *(undefined8 *)(lVar9 + 0x34);
          *(undefined8 *)((long)unaff_x22 + 0xc) = uVar10;
          iVar3 = *(int *)(lVar9 + 0x3c);
          uVar10 = *(undefined8 *)(lVar9 + 0x40);
          uVar4 = *(undefined4 *)(lVar9 + 0x4c);
          uStack_158 = *(undefined8 *)(lVar9 + 0x78);
          uStack_160 = *(undefined8 *)(lVar9 + 0x70);
          uStack_148 = *(undefined8 *)(lVar9 + 0x88);
          uStack_150 = *(undefined8 *)(lVar9 + 0x80);
          uStack_140 = *(undefined8 *)(lVar9 + 0x90);
          uStack_178 = *(undefined8 *)(lVar9 + 0x58);
          uStack_180 = *(undefined8 *)(lVar9 + 0x50);
          uStack_168 = *(undefined8 *)(lVar9 + 0x68);
          uStack_170 = *(undefined8 *)(lVar9 + 0x60);
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (0 < (int)uVar2) {
            lVar9 = 0;
            do {
              if (uVar2 <= (uint)lVar9) {
                uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (*(int *)(*(long *)(lVar7 + 0x10) + lVar9 * 4 + 0x20) == iVar3) {
                if (*(long *)(param_1 + 0xd0) == 0) goto code_r0x014aa1ac;
                iStack_1f8 = iVar1 + (uint)lVar9;
                uStack_218 = (undefined4)uStack_98;
                uStack_220 = uStack_a0;
                uStack_20c = (undefined4)*(undefined8 *)((long)unaff_x22 + 0x14);
                uStack_208 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0x14) >> 0x20);
                uStack_214 = (undefined4)*(undefined8 *)((long)unaff_x22 + 0xc);
                uStack_210 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
                uStack_1c8 = uStack_158;
                uStack_1d0 = uStack_160;
                uStack_1b8 = uStack_148;
                uStack_1c0 = uStack_150;
                uStack_1b0 = uStack_140;
                uStack_1e8 = uStack_178;
                uStack_1f0 = uStack_180;
                uStack_1d8 = uStack_168;
                uStack_1e0 = uStack_170;
                iStack_204 = iVar3;
                uStack_200 = uVar10;
                uStack_1f4 = uVar4;
                uVar5 = /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$set_Item*/ func_0x024107e0(*(long *)(param_1 + 0xd0),uVar8,&uStack_220,
                                        uRam0000000003d3b4e8);
                break;
              }
              uVar2 = *(uint *)(lVar7 + 0x18);
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < (int)uVar2);
          }
          uVar8 = uVar8 + 1;
          lVar9 = *(long *)(param_1 + 0xd0);
        } while (lVar9 != 0);
      }
    }
code_r0x014aa1ac:
    func_0x00f78af4();
  } while( true );
}



// ============================================================
// RVA: 0x14aa1f4 | Atlas.Networking.NetworkLobby.GetLobbyGameType
// ============================================================

undefined4 Atlas_Networking_NetworkLobby__GetLobbyGameType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



// ============================================================
// RVA: 0x14aa1fc | Atlas.Networking.NetworkLobby.SetLobbyGameType
// ============================================================

ulong Atlas_Networking_NetworkLobby__SetLobbyGameType(ulong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auStack_310 [16];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
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
  long lStack_1d0;
  ulong uStack_1c8;
  undefined1 ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  undefined1 auStack_130 [16];
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  int iStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_2 == 0) {
    return param_1;
  }
  *(int *)(param_1 + 0x9c) = param_2;
  if (*(long *)(param_1 + 0x70) == 0) {
    return param_1;
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x70) + 0x30);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  uVar4 = (**(code **)(*plVar3 + 0x938))(plVar3,*(undefined8 *)(*plVar3 + 0x940));
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (plVar3 = *(long **)(*(long *)(param_1 + 0x70) + 0x30), plVar3 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0x348))(plVar3,*(undefined8 *)(*plVar3 + 0x350));
    if ((uVar4 & 1) != 0) {
      return uVar4;
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      uStack_98 = *(undefined8 *)(param_1 + 0xe0);
      uStack_a0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_88 = *(undefined8 *)(param_1 + 0xf0);
      uStack_90 = *(undefined8 *)(param_1 + 0xe8);
      uStack_48 = *(undefined8 *)(param_1 + 0x130);
      uStack_50 = *(undefined8 *)(param_1 + 0x128);
      uStack_38 = *(undefined8 *)(param_1 + 0x140);
      uStack_40 = *(undefined8 *)(param_1 + 0x138);
      uStack_68 = *(undefined8 *)(param_1 + 0x110);
      uStack_70 = *(undefined8 *)(param_1 + 0x108);
      uStack_58 = *(undefined8 *)(param_1 + 0x120);
      uStack_60 = *(undefined8 *)(param_1 + 0x118);
      uStack_78 = *(undefined8 *)(param_1 + 0x100);
      uStack_80 = *(undefined8 *)(param_1 + 0xf8);
      uStack_30 = *(undefined8 *)(param_1 + 0x148);
      uVar4 = /*Atlas.Networking.NetworkLobbySessionData$$SetLocalPlayerSessionData*/ func_0x014a9684(*(long *)(param_1 + 0x90),&uStack_a0,*(undefined1 *)(param_1 + 0x9c),1
                             );
      return uVar4;
    }
  }
  auVar11 = func_0x00f78af4();
  lVar5 = auVar11._0_8_;
  puStack_a8 = &Atlas_Networking_NetworkLobby__SetAi;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a66 & 1) == 0) {
    func_0x00f78a20(0x3d3b508);
    func_0x00f78a20(0x3d3b518);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4a66 = 1;
  }
  uVar4 = *(ulong *)(lVar5 + 0x150);
  if (uVar4 != 0) {
    if (0 < *(int *)(uVar4 + 0x18)) {
      uVar4 = /*System.Collections.Generic.List<NetworkPlayer>$$Clear*/ func_0x02413dcc(uVar4,uRam0000000003d3b518);
    }
    uVar2 = 2;
    if (param_3 == 0) {
      uVar2 = 3;
    }
    if (0 < auVar11._8_4_) {
      iVar1 = 0;
      do {
        if (*(long *)(lVar5 + 0x150) == 0) goto code_r0x014aa3c8;
        iVar1 = iVar1 + 1;
        uStack_110 = /*STR('')*/ uRam0000000003d65d08;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_108 = uVar2;
        iStack_104 = iVar1;
        uVar4 = /*System.Collections.Generic.List<NetworkPlayer>$$Add*/ func_0x02413ab4(*(long *)(lVar5 + 0x150),&uStack_110,uRam0000000003d3b508);
      } while (auVar11._8_4_ != iVar1);
    }
    return uVar4;
  }
code_r0x014aa3c8:
  auVar12 = func_0x00f78af4();
  uStack_1c8 = auVar12._0_8_;
  puStack_118 = &Atlas_Networking_NetworkLobby__SetLocalPlayerInLobby;
  if ((((uint)(*(char *)(uStack_1c8 + 0x149) != '\0') == auVar12._8_4_) ||
      (*(char *)(uStack_1c8 + 0x149) = auVar12[8], *(char *)(uStack_1c8 + 0x99) != '\0')) ||
     (*(long *)(uStack_1c8 + 0x70) == 0)) {
    return uStack_1c8;
  }
  plVar3 = *(long **)(*(long *)(uStack_1c8 + 0x70) + 0x30);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  ppuStack_120 = &puStack_b0;
  auStack_130 = auVar11;
  iVar1 = (**(code **)(*plVar3 + 0x938))(plVar3,*(undefined8 *)(*plVar3 + 0x940));
  if (iVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(uStack_1c8 + 0x9c);
  }
  if (*(long *)(uStack_1c8 + 0x90) != 0) {
    uStack_168 = *(undefined8 *)(uStack_1c8 + 0x120);
    uStack_170 = *(undefined8 *)(uStack_1c8 + 0x118);
    uStack_158 = *(undefined8 *)(uStack_1c8 + 0x130);
    uStack_160 = *(undefined8 *)(uStack_1c8 + 0x128);
    uStack_148 = *(undefined8 *)(uStack_1c8 + 0x140);
    uStack_150 = *(undefined8 *)(uStack_1c8 + 0x138);
    uStack_140 = *(undefined8 *)(uStack_1c8 + 0x148);
    uStack_1a8 = *(undefined8 *)(uStack_1c8 + 0xe0);
    uStack_1b0 = *(undefined8 *)(uStack_1c8 + 0xd8);
    uStack_198 = *(undefined8 *)(uStack_1c8 + 0xf0);
    uStack_1a0 = *(undefined8 *)(uStack_1c8 + 0xe8);
    uStack_188 = *(undefined8 *)(uStack_1c8 + 0x100);
    uStack_190 = *(undefined8 *)(uStack_1c8 + 0xf8);
    uStack_178 = *(undefined8 *)(uStack_1c8 + 0x110);
    uStack_180 = *(undefined8 *)(uStack_1c8 + 0x108);
    uVar4 = /*Atlas.Networking.NetworkLobbySessionData$$SetLocalPlayerSessionData*/ func_0x014a9684(*(long *)(uStack_1c8 + 0x90),&uStack_1b0,uVar9 & 0xff,0);
    return uVar4;
  }
  lVar6 = func_0x00f78af4();
  puStack_1b8 = &Atlas_Networking_NetworkLobby__AllPlayersInLobby;
  lStack_1d0 = lVar5;
  pppuStack_1c0 = &ppuStack_120;
  if ((bRam0000000003eb4a67 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    bRam0000000003eb4a67 = 1;
  }
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  if (*(char *)(lVar6 + 0x149) == '\0') {
    return 0;
  }
  if (*(long *)(lVar6 + 0xd0) != 0) {
    /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_260,*(long *)(lVar6 + 0xd0),uRam0000000003d3b4c0);
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_260,uRam0000000003d32b50);
      if ((uVar4 & 1) == 0) {
        iVar1 = 0x48;
        goto code_r0x014aa55c;
      }
    } while (uStack_1e0._1_1_ != '\0');
    iVar1 = 0x4a;
code_r0x014aa55c:
    /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_260,uRam0000000003d32b48);
    return (ulong)(iVar1 != 0x4a);
  }
  auVar11 = func_0x00f78af4();
  if (auVar11._8_4_ == 1) {
    func_0x032ff10c(auVar11._0_8_,auVar11._8_8_,&uStack_260);
    return 1;
  }
  auVar11 = __Unwind_Resume();
  lVar5 = auVar11._8_8_;
  uVar7 = auVar11._0_8_;
  uVar4 = uVar7;
  if ((bRam0000000003eb4a68 & 1) == 0) {
    func_0x00f78a20(0x3d3ebe8);
    func_0x00f78a20(0x3d3ebf0);
    uVar4 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4a68 = 1;
  }
  auStack_310._0_8_ = 0;
  auStack_310._8_8_ = 0;
  auVar11 = ZEXT816(0);
  uStack_2d8 = *(undefined8 *)(uVar7 + 0x130);
  uStack_2e0 = *(undefined8 *)(uVar7 + 0x128);
  uStack_2c8 = *(undefined8 *)(uVar7 + 0x140);
  uStack_2d0 = *(undefined8 *)(uVar7 + 0x138);
  uStack_2f8 = *(undefined8 *)(uVar7 + 0x110);
  uStack_300 = *(undefined8 *)(uVar7 + 0x108);
  uStack_2e8 = *(undefined8 *)(uVar7 + 0x120);
  uStack_2f0 = *(undefined8 *)(uVar7 + 0x118);
  lVar6 = lVar5;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    if (*(char *)(uVar7 + 0xc0) == '\0') {
      uVar10 = *(ulong *)(uVar7 + 0xf8);
      goto code_r0x014aa68c;
    }
    lVar6 = uVar7 + 0xb0;
  }
  auStack_310 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar6,uRam0000000003d3ebf0);
  uVar8 = /*Core.Services.Player$$get_DisplayName*/ func_0x0167e308(auStack_310,0);
  uVar4 = Atlas_Networking_NetworkLobby__FormatDisplayName(uVar8,uVar8);
  uVar10 = uVar4;
  auVar11 = auStack_310;
code_r0x014aa68c:
  uVar8 = /*STR('')*/ uRam0000000003d65d08;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    *(undefined8 *)(uVar7 + 0xd8) = 0;
    *(undefined8 *)(uVar7 + 0xe0) = 0;
    *(undefined8 *)(uVar7 + 0xe8) = uVar8;
    *(undefined8 *)(uVar7 + 0xf0) = 0;
    *(ulong *)(uVar7 + 0xf8) = uVar10;
    *(undefined8 *)(uVar7 + 0x100) = 0;
    *(undefined8 *)(uVar7 + 0x110) = uStack_2f8;
    *(undefined8 *)(uVar7 + 0x108) = uStack_300;
    *(undefined8 *)(uVar7 + 0x120) = uStack_2e8;
    *(undefined8 *)(uVar7 + 0x118) = uStack_2f0;
    *(undefined8 *)(uVar7 + 0x130) = uStack_2d8;
    *(undefined8 *)(uVar7 + 0x128) = uStack_2e0;
    *(undefined8 *)(uVar7 + 0x140) = uStack_2c8;
    *(undefined8 *)(uVar7 + 0x138) = uStack_2d0;
    *(undefined1 *)(uVar7 + 0x148) = 1;
    *(bool *)(uVar7 + 0x149) = *(char *)(uVar7 + 0x149) != '\0';
  }
  else {
    auStack_310 = auVar11;
    auVar11 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar5,uRam0000000003d3ebf0);
    auStack_310 = auVar11;
    uVar8 = /*Core.Services.Player$$get_Id*/ func_0x0167e3f0(auStack_310,0);
    auVar11 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar5,uRam0000000003d3ebf0);
    auStack_310 = auVar11;
    uVar2 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(auStack_310,0);
    auVar11 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar5,uRam0000000003d3ebf0);
    uVar4 = auVar11._0_8_;
    *(undefined1 (*) [16])(uVar7 + 0xd8) = auVar11;
    *(undefined8 *)(uVar7 + 0xe8) = uVar8;
    *(undefined4 *)(uVar7 + 0xf0) = 0;
    *(undefined4 *)(uVar7 + 0xf4) = uVar2;
    *(ulong *)(uVar7 + 0xf8) = uVar10;
    *(undefined8 *)(uVar7 + 0x100) = 0;
    *(undefined8 *)(uVar7 + 0x110) = uStack_2f8;
    *(undefined8 *)(uVar7 + 0x108) = uStack_300;
    *(undefined8 *)(uVar7 + 0x120) = uStack_2e8;
    *(undefined8 *)(uVar7 + 0x118) = uStack_2f0;
    *(undefined8 *)(uVar7 + 0x130) = uStack_2d8;
    *(undefined8 *)(uVar7 + 0x128) = uStack_2e0;
    *(undefined8 *)(uVar7 + 0x140) = uStack_2c8;
    *(undefined8 *)(uVar7 + 0x138) = uStack_2d0;
    *(undefined1 *)(uVar7 + 0x148) = 1;
    *(bool *)(uVar7 + 0x149) = *(char *)(uVar7 + 0x149) != '\0';
  }
  *(undefined2 *)(uVar7 + 0x14e) = 0;
  *(undefined4 *)(uVar7 + 0x14a) = 0;
  return uVar4;
}



// ============================================================
// RVA: 0x14aa2bc | Atlas.Networking.NetworkLobby.SetAi
// ============================================================

ulong Atlas_Networking_NetworkLobby__SetAi(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  long lStack_130;
  ulong uStack_128;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4a66 & 1) == 0) {
    func_0x00f78a20(0x3d3b508);
    func_0x00f78a20(0x3d3b518);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4a66 = 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x150);
  if (uVar3 != 0) {
    if (0 < *(int *)(uVar3 + 0x18)) {
      uVar3 = /*System.Collections.Generic.List<NetworkPlayer>$$Clear*/ func_0x02413dcc(uVar3,uRam0000000003d3b518);
    }
    uVar2 = 2;
    if (param_3 == 0) {
      uVar2 = 3;
    }
    if (0 < (int)param_2) {
      iVar1 = 0;
      do {
        if (*(long *)(param_1 + 0x150) == 0) goto LAB_014aa3c8;
        iVar1 = iVar1 + 1;
        uStack_70 = /*STR('')*/ uRam0000000003d65d08;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_68 = uVar2;
        iStack_64 = iVar1;
        uVar3 = /*System.Collections.Generic.List<NetworkPlayer>$$Add*/ func_0x02413ab4(*(long *)(param_1 + 0x150),&uStack_70,uRam0000000003d3b508);
      } while ((int)param_2 != iVar1);
    }
    return uVar3;
  }
LAB_014aa3c8:
  auVar12 = func_0x00f78af4();
  uStack_128 = auVar12._0_8_;
  puStack_78 = &Atlas_Networking_NetworkLobby__SetLocalPlayerInLobby;
  if ((((uint)(*(char *)(uStack_128 + 0x149) != '\0') == auVar12._8_4_) ||
      (*(char *)(uStack_128 + 0x149) = auVar12[8], *(char *)(uStack_128 + 0x99) != '\0')) ||
     (*(long *)(uStack_128 + 0x70) == 0)) {
    return uStack_128;
  }
  plVar4 = *(long **)(*(long *)(uStack_128 + 0x70) + 0x30);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  lStack_90 = param_1;
  uStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  iVar1 = (**(code **)(*plVar4 + 0x938))(plVar4,*(undefined8 *)(*plVar4 + 0x940));
  if (iVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(uStack_128 + 0x9c);
  }
  if (*(long *)(uStack_128 + 0x90) != 0) {
    uStack_c8 = *(undefined8 *)(uStack_128 + 0x120);
    uStack_d0 = *(undefined8 *)(uStack_128 + 0x118);
    uStack_b8 = *(undefined8 *)(uStack_128 + 0x130);
    uStack_c0 = *(undefined8 *)(uStack_128 + 0x128);
    uStack_a8 = *(undefined8 *)(uStack_128 + 0x140);
    uStack_b0 = *(undefined8 *)(uStack_128 + 0x138);
    uStack_a0 = *(undefined8 *)(uStack_128 + 0x148);
    uStack_108 = *(undefined8 *)(uStack_128 + 0xe0);
    uStack_110 = *(undefined8 *)(uStack_128 + 0xd8);
    uStack_f8 = *(undefined8 *)(uStack_128 + 0xf0);
    uStack_100 = *(undefined8 *)(uStack_128 + 0xe8);
    uStack_e8 = *(undefined8 *)(uStack_128 + 0x100);
    uStack_f0 = *(undefined8 *)(uStack_128 + 0xf8);
    uStack_d8 = *(undefined8 *)(uStack_128 + 0x110);
    uStack_e0 = *(undefined8 *)(uStack_128 + 0x108);
    uVar3 = /*Atlas.Networking.NetworkLobbySessionData$$SetLocalPlayerSessionData*/ func_0x014a9684(*(long *)(uStack_128 + 0x90),&uStack_110,uVar9 & 0xff,0);
    return uVar3;
  }
  lVar5 = func_0x00f78af4();
  puStack_118 = &Atlas_Networking_NetworkLobby__AllPlayersInLobby;
  lStack_130 = param_1;
  ppuStack_120 = &puStack_80;
  if ((bRam0000000003eb4a67 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    bRam0000000003eb4a67 = 1;
  }
  uStack_140 = 0;
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
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  if (*(char *)(lVar5 + 0x149) == '\0') {
    return 0;
  }
  if (*(long *)(lVar5 + 0xd0) != 0) {
    /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_1c0,*(long *)(lVar5 + 0xd0),uRam0000000003d3b4c0);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_1c0,uRam0000000003d32b50);
      if ((uVar3 & 1) == 0) {
        iVar1 = 0x48;
        goto code_r0x014aa55c;
      }
    } while (uStack_140._1_1_ != '\0');
    iVar1 = 0x4a;
code_r0x014aa55c:
    /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_1c0,uRam0000000003d32b48);
    return (ulong)(iVar1 != 0x4a);
  }
  auVar11 = func_0x00f78af4();
  if (auVar11._8_4_ == 1) {
    func_0x032ff10c(auVar11._0_8_,auVar11._8_8_,&uStack_1c0);
    return 1;
  }
  auVar11 = __Unwind_Resume();
  lVar5 = auVar11._8_8_;
  uVar6 = auVar11._0_8_;
  uVar3 = uVar6;
  if ((bRam0000000003eb4a68 & 1) == 0) {
    func_0x00f78a20(0x3d3ebe8);
    func_0x00f78a20(0x3d3ebf0);
    uVar3 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4a68 = 1;
  }
  auStack_270._0_8_ = 0;
  auStack_270._8_8_ = 0;
  auVar11 = ZEXT816(0);
  uStack_238 = *(undefined8 *)(uVar6 + 0x130);
  uStack_240 = *(undefined8 *)(uVar6 + 0x128);
  uStack_228 = *(undefined8 *)(uVar6 + 0x140);
  uStack_230 = *(undefined8 *)(uVar6 + 0x138);
  uStack_258 = *(undefined8 *)(uVar6 + 0x110);
  uStack_260 = *(undefined8 *)(uVar6 + 0x108);
  uStack_248 = *(undefined8 *)(uVar6 + 0x120);
  uStack_250 = *(undefined8 *)(uVar6 + 0x118);
  lVar7 = lVar5;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    if (*(char *)(uVar6 + 0xc0) == '\0') {
      uVar10 = *(ulong *)(uVar6 + 0xf8);
      goto code_r0x014aa68c;
    }
    lVar7 = uVar6 + 0xb0;
  }
  auStack_270 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar7,uRam0000000003d3ebf0);
  uVar8 = /*Core.Services.Player$$get_DisplayName*/ func_0x0167e308(auStack_270,0);
  uVar3 = Atlas_Networking_NetworkLobby__FormatDisplayName(uVar8,uVar8);
  uVar10 = uVar3;
  auVar11 = auStack_270;
code_r0x014aa68c:
  uVar8 = /*STR('')*/ uRam0000000003d65d08;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    *(undefined8 *)(uVar6 + 0xd8) = 0;
    *(undefined8 *)(uVar6 + 0xe0) = 0;
    *(undefined8 *)(uVar6 + 0xe8) = uVar8;
    *(undefined8 *)(uVar6 + 0xf0) = 0;
    *(ulong *)(uVar6 + 0xf8) = uVar10;
    *(undefined8 *)(uVar6 + 0x100) = 0;
    *(undefined8 *)(uVar6 + 0x110) = uStack_258;
    *(undefined8 *)(uVar6 + 0x108) = uStack_260;
    *(undefined8 *)(uVar6 + 0x120) = uStack_248;
    *(undefined8 *)(uVar6 + 0x118) = uStack_250;
    *(undefined8 *)(uVar6 + 0x130) = uStack_238;
    *(undefined8 *)(uVar6 + 0x128) = uStack_240;
    *(undefined8 *)(uVar6 + 0x140) = uStack_228;
    *(undefined8 *)(uVar6 + 0x138) = uStack_230;
    *(undefined1 *)(uVar6 + 0x148) = 1;
    *(bool *)(uVar6 + 0x149) = *(char *)(uVar6 + 0x149) != '\0';
  }
  else {
    auStack_270 = auVar11;
    auVar11 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar5,uRam0000000003d3ebf0);
    auStack_270 = auVar11;
    uVar8 = /*Core.Services.Player$$get_Id*/ func_0x0167e3f0(auStack_270,0);
    auVar11 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar5,uRam0000000003d3ebf0);
    auStack_270 = auVar11;
    uVar2 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(auStack_270,0);
    auVar11 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar5,uRam0000000003d3ebf0);
    uVar3 = auVar11._0_8_;
    *(undefined1 (*) [16])(uVar6 + 0xd8) = auVar11;
    *(undefined8 *)(uVar6 + 0xe8) = uVar8;
    *(undefined4 *)(uVar6 + 0xf0) = 0;
    *(undefined4 *)(uVar6 + 0xf4) = uVar2;
    *(ulong *)(uVar6 + 0xf8) = uVar10;
    *(undefined8 *)(uVar6 + 0x100) = 0;
    *(undefined8 *)(uVar6 + 0x110) = uStack_258;
    *(undefined8 *)(uVar6 + 0x108) = uStack_260;
    *(undefined8 *)(uVar6 + 0x120) = uStack_248;
    *(undefined8 *)(uVar6 + 0x118) = uStack_250;
    *(undefined8 *)(uVar6 + 0x130) = uStack_238;
    *(undefined8 *)(uVar6 + 0x128) = uStack_240;
    *(undefined8 *)(uVar6 + 0x140) = uStack_228;
    *(undefined8 *)(uVar6 + 0x138) = uStack_230;
    *(undefined1 *)(uVar6 + 0x148) = 1;
    *(bool *)(uVar6 + 0x149) = *(char *)(uVar6 + 0x149) != '\0';
  }
  *(undefined2 *)(uVar6 + 0x14e) = 0;
  *(undefined4 *)(uVar6 + 0x14a) = 0;
  return uVar3;
}



// ============================================================
// RVA: 0x14aa3cc | Atlas.Networking.NetworkLobby.SetLocalPlayerInLobby
// ============================================================

ulong Atlas_Networking_NetworkLobby__SetLocalPlayerInLobby(ulong param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((((*(char *)(param_1 + 0x149) != '\0') == param_2) ||
      (*(char *)(param_1 + 0x149) = (char)param_2, *(char *)(param_1 + 0x99) != '\0')) ||
     (*(long *)(param_1 + 0x70) == 0)) {
    return param_1;
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x70) + 0x30);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*plVar3 + 0x938))(plVar3,*(undefined8 *)(*plVar3 + 0x940));
  if (iVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x9c);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x120);
    uStack_60 = *(undefined8 *)(param_1 + 0x118);
    uStack_48 = *(undefined8 *)(param_1 + 0x130);
    uStack_50 = *(undefined8 *)(param_1 + 0x128);
    uStack_38 = *(undefined8 *)(param_1 + 0x140);
    uStack_40 = *(undefined8 *)(param_1 + 0x138);
    uStack_30 = *(undefined8 *)(param_1 + 0x148);
    uStack_98 = *(undefined8 *)(param_1 + 0xe0);
    uStack_a0 = *(undefined8 *)(param_1 + 0xd8);
    uStack_88 = *(undefined8 *)(param_1 + 0xf0);
    uStack_90 = *(undefined8 *)(param_1 + 0xe8);
    uStack_78 = *(undefined8 *)(param_1 + 0x100);
    uStack_80 = *(undefined8 *)(param_1 + 0xf8);
    uStack_68 = *(undefined8 *)(param_1 + 0x110);
    uStack_70 = *(undefined8 *)(param_1 + 0x108);
    uVar4 = /*Atlas.Networking.NetworkLobbySessionData$$SetLocalPlayerSessionData*/ func_0x014a9684(*(long *)(param_1 + 0x90),&uStack_a0,uVar9 & 0xff,0);
    return uVar4;
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4a67 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    bRam0000000003eb4a67 = 1;
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
  if (*(char *)(lVar5 + 0x149) == '\0') {
    return 0;
  }
  if (*(long *)(lVar5 + 0xd0) != 0) {
    /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_150,*(long *)(lVar5 + 0xd0),uRam0000000003d3b4c0);
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_150,uRam0000000003d32b50);
      if ((uVar4 & 1) == 0) {
        iVar1 = 0x48;
        goto code_r0x014aa55c;
      }
    } while (uStack_d0._1_1_ != '\0');
    iVar1 = 0x4a;
code_r0x014aa55c:
    /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_150,uRam0000000003d32b48);
    return (ulong)(iVar1 != 0x4a);
  }
  auVar11 = func_0x00f78af4();
  if (auVar11._8_4_ == 1) {
    func_0x032ff10c(auVar11._0_8_,auVar11._8_8_,&uStack_150);
    return 1;
  }
  auVar11 = __Unwind_Resume();
  lVar5 = auVar11._8_8_;
  uVar6 = auVar11._0_8_;
  uVar4 = uVar6;
  if ((bRam0000000003eb4a68 & 1) == 0) {
    func_0x00f78a20(0x3d3ebe8);
    func_0x00f78a20(0x3d3ebf0);
    uVar4 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4a68 = 1;
  }
  auStack_200._0_8_ = 0;
  auStack_200._8_8_ = 0;
  auVar11 = ZEXT816(0);
  uStack_1c8 = *(undefined8 *)(uVar6 + 0x130);
  uStack_1d0 = *(undefined8 *)(uVar6 + 0x128);
  uStack_1b8 = *(undefined8 *)(uVar6 + 0x140);
  uStack_1c0 = *(undefined8 *)(uVar6 + 0x138);
  uStack_1e8 = *(undefined8 *)(uVar6 + 0x110);
  uStack_1f0 = *(undefined8 *)(uVar6 + 0x108);
  uStack_1d8 = *(undefined8 *)(uVar6 + 0x120);
  uStack_1e0 = *(undefined8 *)(uVar6 + 0x118);
  lVar7 = lVar5;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    if (*(char *)(uVar6 + 0xc0) == '\0') {
      uVar10 = *(ulong *)(uVar6 + 0xf8);
      goto code_r0x014aa68c;
    }
    lVar7 = uVar6 + 0xb0;
  }
  auStack_200 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar7,uRam0000000003d3ebf0);
  uVar8 = /*Core.Services.Player$$get_DisplayName*/ func_0x0167e308(auStack_200,0);
  uVar4 = Atlas_Networking_NetworkLobby__FormatDisplayName(uVar8,uVar8);
  uVar10 = uVar4;
  auVar11 = auStack_200;
code_r0x014aa68c:
  uVar8 = /*STR('')*/ uRam0000000003d65d08;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    *(undefined8 *)(uVar6 + 0xd8) = 0;
    *(undefined8 *)(uVar6 + 0xe0) = 0;
    *(undefined8 *)(uVar6 + 0xe8) = uVar8;
    *(undefined8 *)(uVar6 + 0xf0) = 0;
    *(ulong *)(uVar6 + 0xf8) = uVar10;
    *(undefined8 *)(uVar6 + 0x100) = 0;
    *(undefined8 *)(uVar6 + 0x110) = uStack_1e8;
    *(undefined8 *)(uVar6 + 0x108) = uStack_1f0;
    *(undefined8 *)(uVar6 + 0x120) = uStack_1d8;
    *(undefined8 *)(uVar6 + 0x118) = uStack_1e0;
    *(undefined8 *)(uVar6 + 0x130) = uStack_1c8;
    *(undefined8 *)(uVar6 + 0x128) = uStack_1d0;
    *(undefined8 *)(uVar6 + 0x140) = uStack_1b8;
    *(undefined8 *)(uVar6 + 0x138) = uStack_1c0;
    *(undefined1 *)(uVar6 + 0x148) = 1;
    *(bool *)(uVar6 + 0x149) = *(char *)(uVar6 + 0x149) != '\0';
  }
  else {
    auStack_200 = auVar11;
    auVar11 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar5,uRam0000000003d3ebf0);
    auStack_200 = auVar11;
    uVar8 = /*Core.Services.Player$$get_Id*/ func_0x0167e3f0(auStack_200,0);
    auVar11 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar5,uRam0000000003d3ebf0);
    auStack_200 = auVar11;
    uVar2 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(auStack_200,0);
    auVar11 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar5,uRam0000000003d3ebf0);
    uVar4 = auVar11._0_8_;
    *(undefined1 (*) [16])(uVar6 + 0xd8) = auVar11;
    *(undefined8 *)(uVar6 + 0xe8) = uVar8;
    *(undefined4 *)(uVar6 + 0xf0) = 0;
    *(undefined4 *)(uVar6 + 0xf4) = uVar2;
    *(ulong *)(uVar6 + 0xf8) = uVar10;
    *(undefined8 *)(uVar6 + 0x100) = 0;
    *(undefined8 *)(uVar6 + 0x110) = uStack_1e8;
    *(undefined8 *)(uVar6 + 0x108) = uStack_1f0;
    *(undefined8 *)(uVar6 + 0x120) = uStack_1d8;
    *(undefined8 *)(uVar6 + 0x118) = uStack_1e0;
    *(undefined8 *)(uVar6 + 0x130) = uStack_1c8;
    *(undefined8 *)(uVar6 + 0x128) = uStack_1d0;
    *(undefined8 *)(uVar6 + 0x140) = uStack_1b8;
    *(undefined8 *)(uVar6 + 0x138) = uStack_1c0;
    *(undefined1 *)(uVar6 + 0x148) = 1;
    *(bool *)(uVar6 + 0x149) = *(char *)(uVar6 + 0x149) != '\0';
  }
  *(undefined2 *)(uVar6 + 0x14e) = 0;
  *(undefined4 *)(uVar6 + 0x14a) = 0;
  return uVar4;
}



// ============================================================
// RVA: 0x14aa48c | Atlas.Networking.NetworkLobby.AllPlayersInLobby
// ============================================================

ulong Atlas_Networking_NetworkLobby__AllPlayersInLobby(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000003eb4a67 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    bRam0000000003eb4a67 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(char *)(param_1 + 0x149) == '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_b0,*(long *)(param_1 + 0xd0),uRam0000000003d3b4c0);
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_b0,uRam0000000003d32b50);
      if ((uVar2 & 1) == 0) {
        iVar7 = 0x48;
        goto LAB_014aa55c;
      }
    } while (uStack_30._1_1_ != '\0');
    iVar7 = 0x4a;
LAB_014aa55c:
    /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_b0,uRam0000000003d32b48);
    return (ulong)(iVar7 != 0x4a);
  }
  auVar9 = func_0x00f78af4();
  if (auVar9._8_4_ == 1) {
    func_0x032ff10c(auVar9._0_8_,auVar9._8_8_,&uStack_b0);
    return 1;
  }
  auVar9 = __Unwind_Resume();
  lVar6 = auVar9._8_8_;
  uVar3 = auVar9._0_8_;
  uVar2 = uVar3;
  if ((bRam0000000003eb4a68 & 1) == 0) {
    func_0x00f78a20(0x3d3ebe8);
    func_0x00f78a20(0x3d3ebf0);
    uVar2 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4a68 = 1;
  }
  auStack_160._0_8_ = 0;
  auStack_160._8_8_ = 0;
  auVar9 = ZEXT816(0);
  uStack_128 = *(undefined8 *)(uVar3 + 0x130);
  uStack_130 = *(undefined8 *)(uVar3 + 0x128);
  uStack_118 = *(undefined8 *)(uVar3 + 0x140);
  uStack_120 = *(undefined8 *)(uVar3 + 0x138);
  uStack_148 = *(undefined8 *)(uVar3 + 0x110);
  uStack_150 = *(undefined8 *)(uVar3 + 0x108);
  uStack_138 = *(undefined8 *)(uVar3 + 0x120);
  uStack_140 = *(undefined8 *)(uVar3 + 0x118);
  lVar4 = lVar6;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    if (*(char *)(uVar3 + 0xc0) == '\0') {
      uVar8 = *(ulong *)(uVar3 + 0xf8);
      goto code_r0x014aa68c;
    }
    lVar4 = uVar3 + 0xb0;
  }
  auStack_160 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar4,uRam0000000003d3ebf0);
  uVar5 = /*Core.Services.Player$$get_DisplayName*/ func_0x0167e308(auStack_160,0);
  uVar2 = Atlas_Networking_NetworkLobby__FormatDisplayName(uVar5,uVar5);
  uVar8 = uVar2;
  auVar9 = auStack_160;
code_r0x014aa68c:
  uVar5 = /*STR('')*/ uRam0000000003d65d08;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    *(undefined8 *)(uVar3 + 0xd8) = 0;
    *(undefined8 *)(uVar3 + 0xe0) = 0;
    *(undefined8 *)(uVar3 + 0xe8) = uVar5;
    *(undefined8 *)(uVar3 + 0xf0) = 0;
    *(ulong *)(uVar3 + 0xf8) = uVar8;
    *(undefined8 *)(uVar3 + 0x100) = 0;
    *(undefined8 *)(uVar3 + 0x110) = uStack_148;
    *(undefined8 *)(uVar3 + 0x108) = uStack_150;
    *(undefined8 *)(uVar3 + 0x120) = uStack_138;
    *(undefined8 *)(uVar3 + 0x118) = uStack_140;
    *(undefined8 *)(uVar3 + 0x130) = uStack_128;
    *(undefined8 *)(uVar3 + 0x128) = uStack_130;
    *(undefined8 *)(uVar3 + 0x140) = uStack_118;
    *(undefined8 *)(uVar3 + 0x138) = uStack_120;
    *(undefined1 *)(uVar3 + 0x148) = 1;
    *(bool *)(uVar3 + 0x149) = *(char *)(uVar3 + 0x149) != '\0';
  }
  else {
    auStack_160 = auVar9;
    auVar9 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar6,uRam0000000003d3ebf0);
    auStack_160 = auVar9;
    uVar5 = /*Core.Services.Player$$get_Id*/ func_0x0167e3f0(auStack_160,0);
    auVar9 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar6,uRam0000000003d3ebf0);
    auStack_160 = auVar9;
    uVar1 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(auStack_160,0);
    auVar9 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar6,uRam0000000003d3ebf0);
    uVar2 = auVar9._0_8_;
    *(undefined1 (*) [16])(uVar3 + 0xd8) = auVar9;
    *(undefined8 *)(uVar3 + 0xe8) = uVar5;
    *(undefined4 *)(uVar3 + 0xf0) = 0;
    *(undefined4 *)(uVar3 + 0xf4) = uVar1;
    *(ulong *)(uVar3 + 0xf8) = uVar8;
    *(undefined8 *)(uVar3 + 0x100) = 0;
    *(undefined8 *)(uVar3 + 0x110) = uStack_148;
    *(undefined8 *)(uVar3 + 0x108) = uStack_150;
    *(undefined8 *)(uVar3 + 0x120) = uStack_138;
    *(undefined8 *)(uVar3 + 0x118) = uStack_140;
    *(undefined8 *)(uVar3 + 0x130) = uStack_128;
    *(undefined8 *)(uVar3 + 0x128) = uStack_130;
    *(undefined8 *)(uVar3 + 0x140) = uStack_118;
    *(undefined8 *)(uVar3 + 0x138) = uStack_120;
    *(undefined1 *)(uVar3 + 0x148) = 1;
    *(bool *)(uVar3 + 0x149) = *(char *)(uVar3 + 0x149) != '\0';
  }
  *(undefined2 *)(uVar3 + 0x14e) = 0;
  *(undefined4 *)(uVar3 + 0x14a) = 0;
  return uVar2;
}



// ============================================================
// RVA: 0x14aa5a8 | Atlas.Networking.NetworkLobby.SetLocalPlayer
// ============================================================

void Atlas_Networking_NetworkLobby__SetLocalPlayer(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4a68 & 1) == 0) {
    func_0x00f78a20(0x3d3ebe8);
    func_0x00f78a20(0x3d3ebf0);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4a68 = 1;
  }
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auVar5 = ZEXT816(0);
  uStack_68 = *(undefined8 *)(param_1 + 0x130);
  uStack_70 = *(undefined8 *)(param_1 + 0x128);
  uStack_58 = *(undefined8 *)(param_1 + 0x140);
  uStack_60 = *(undefined8 *)(param_1 + 0x138);
  uStack_88 = *(undefined8 *)(param_1 + 0x110);
  uStack_90 = *(undefined8 *)(param_1 + 0x108);
  uStack_78 = *(undefined8 *)(param_1 + 0x120);
  uStack_80 = *(undefined8 *)(param_1 + 0x118);
  lVar2 = param_2;
  if (*(char *)(param_2 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0xc0) == '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0xf8);
      goto code_r0x014aa68c;
    }
    lVar2 = param_1 + 0xb0;
  }
  auStack_a0 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(lVar2,uRam0000000003d3ebf0);
  uVar3 = /*Core.Services.Player$$get_DisplayName*/ func_0x0167e308(auStack_a0,0);
  uVar3 = Atlas_Networking_NetworkLobby__FormatDisplayName(uVar3,uVar3);
  auVar5 = auStack_a0;
code_r0x014aa68c:
  uVar4 = /*STR('')*/ uRam0000000003d65d08;
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = uVar3;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = uStack_88;
    *(undefined8 *)(param_1 + 0x108) = uStack_90;
    *(undefined8 *)(param_1 + 0x120) = uStack_78;
    *(undefined8 *)(param_1 + 0x118) = uStack_80;
    *(undefined8 *)(param_1 + 0x130) = uStack_68;
    *(undefined8 *)(param_1 + 0x128) = uStack_70;
    *(undefined8 *)(param_1 + 0x140) = uStack_58;
    *(undefined8 *)(param_1 + 0x138) = uStack_60;
    *(undefined1 *)(param_1 + 0x148) = 1;
    *(bool *)(param_1 + 0x149) = *(char *)(param_1 + 0x149) != '\0';
  }
  else {
    auStack_a0 = auVar5;
    auVar5 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(param_2,uRam0000000003d3ebf0);
    auStack_a0 = auVar5;
    uVar4 = /*Core.Services.Player$$get_Id*/ func_0x0167e3f0(auStack_a0,0);
    auVar5 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(param_2,uRam0000000003d3ebf0);
    auStack_a0 = auVar5;
    uVar1 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(auStack_a0,0);
    auVar5 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(param_2,uRam0000000003d3ebf0);
    *(undefined1 (*) [16])(param_1 + 0xd8) = auVar5;
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = uVar1;
    *(undefined8 *)(param_1 + 0xf8) = uVar3;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = uStack_88;
    *(undefined8 *)(param_1 + 0x108) = uStack_90;
    *(undefined8 *)(param_1 + 0x120) = uStack_78;
    *(undefined8 *)(param_1 + 0x118) = uStack_80;
    *(undefined8 *)(param_1 + 0x130) = uStack_68;
    *(undefined8 *)(param_1 + 0x128) = uStack_70;
    *(undefined8 *)(param_1 + 0x140) = uStack_58;
    *(undefined8 *)(param_1 + 0x138) = uStack_60;
    *(undefined1 *)(param_1 + 0x148) = 1;
    *(bool *)(param_1 + 0x149) = *(char *)(param_1 + 0x149) != '\0';
  }
  *(undefined2 *)(param_1 + 0x14e) = 0;
  *(undefined4 *)(param_1 + 0x14a) = 0;
  return;
}



// ============================================================
// RVA: 0x14aa794 | Atlas.Networking.NetworkLobby.OnMatchStarted
// ============================================================

void Atlas_Networking_NetworkLobby__OnMatchStarted(long param_1)

{
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



// ============================================================
// RVA: 0x14aa7a0 | Atlas.Networking.NetworkLobby.SetNetworkPlayerOnLobbyData
// ============================================================

void Atlas_Networking_NetworkLobby__SetNetworkPlayerOnLobbyData
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  uVar2 = /*Core.Services.Player$$get_Id*/ func_0x0167e3f0(&uStack_40,0);
  uVar1 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_40,0);
  uVar3 = /*Core.Services.Player$$get_DisplayName*/ func_0x0167e308(&uStack_40,0);
  uVar3 = Atlas_Networking_NetworkLobby__FormatDisplayName(uVar3,uVar3);
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  param_1[2] = uVar3;
  param_1[3] = 0;
  return;
}



// ============================================================
// RVA: 0x14aa814 | Atlas.Networking.NetworkLobby.OnSessionPlayerConnected
// ============================================================

void Atlas_Networking_NetworkLobby__OnSessionPlayerConnected
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *unaff_x21;
  ulong uVar4;
  long lVar5;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  if ((bRam0000000003eb4a6a & 1) == 0) {
    func_0x00f78a20(0x3d3b4b8);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d3b4e0);
    bRam0000000003eb4a6a = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 != 0) {
    uVar4 = 0;
    unaff_x21 = (undefined8 *)0x3d3b4b8;
    lVar5 = 0x20;
    do {
      if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar4) goto LAB_014aa908;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      _memmove(&uStack_150,*(long *)(lVar3 + 0x10) + lVar5,0x78);
      iVar1 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_150,0);
      iVar2 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_d0,0);
      if (iVar1 == iVar2) {
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = *(long *)(param_1 + 0xd0);
      lVar5 = lVar5 + 0x78;
    } while (lVar3 != 0);
  }
  do {
    func_0x00f78af4();
LAB_014aa908:
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_150 = uStack_d0;
    uStack_148 = uStack_c8;
    Atlas_Networking_NetworkLobby__SetNetworkPlayerOnLobbyData(&uStack_170);
    uStack_138 = uStack_168;
    uStack_140 = uStack_170;
    uStack_128 = uStack_158;
    uStack_130 = uStack_160;
    if ((bRam0000000003eb4a5e & 1) == 0) {
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb4a5e = 1;
    }
    uStack_120 = /*STR('')*/ uRam0000000003d65d08;
    uStack_118 = /*STR('')*/ uRam0000000003d65d08;
    uStack_110 = /*STR('')*/ uRam0000000003d65d08;
    uStack_108 = /*STR('')*/ uRam0000000003d65d08;
    uStack_100 = /*STR('')*/ uRam0000000003d65d08;
    uStack_f8 = /*STR('')*/ uRam0000000003d65d08;
    uStack_f0 = /*STR('')*/ uRam0000000003d65d08;
    uStack_e8 = /*STR('')*/ uRam0000000003d65d08;
    uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
  } while (*(long *)(param_1 + 0xd0) == 0);
  uStack_78 = /*STR('')*/ uRam0000000003d65d08;
  uStack_80 = /*STR('')*/ uRam0000000003d65d08;
  uStack_68 = /*STR('')*/ uRam0000000003d65d08;
  uStack_70 = /*STR('')*/ uRam0000000003d65d08;
  uStack_58 = /*STR('')*/ uRam0000000003d65d08;
  uStack_60 = /*STR('')*/ uRam0000000003d65d08;
  uStack_50 = uStack_e0;
  uStack_b8 = uStack_148;
  uStack_c0 = uStack_150;
  uStack_a8 = uStack_138;
  uStack_b0 = uStack_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_88 = /*STR('')*/ uRam0000000003d65d08;
  uStack_90 = /*STR('')*/ uRam0000000003d65d08;
  /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$Add*/ func_0x02410bb4(*(long *)(param_1 + 0xd0),&uStack_c0,*unaff_x21);
  /*Atlas.Networking.NetworkLobby$$VerifyOwnSessionData*/ func_0x014aa9d4(param_1);
  return;
}



// ============================================================
// RVA: 0x14aa9d4 | Atlas.Networking.NetworkLobby.VerifyOwnSessionData
// ============================================================

void Atlas_Networking_NetworkLobby__VerifyOwnSessionData
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
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
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
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
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
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
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  
  if (*(char *)(param_1 + 0xab) == '\0') {
    uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
    uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
    uStack_98 = *(undefined8 *)(param_1 + 0xf0);
    uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
    uStack_58 = *(undefined8 *)(param_1 + 0x130);
    uStack_60 = *(undefined8 *)(param_1 + 0x128);
    uStack_48 = *(undefined8 *)(param_1 + 0x140);
    uStack_50 = *(undefined8 *)(param_1 + 0x138);
    uStack_78 = *(undefined8 *)(param_1 + 0x110);
    uStack_80 = *(undefined8 *)(param_1 + 0x108);
    uStack_68 = *(undefined8 *)(param_1 + 0x120);
    uStack_70 = *(undefined8 *)(param_1 + 0x118);
    uStack_88 = *(undefined8 *)(param_1 + 0x100);
    uStack_90 = *(undefined8 *)(param_1 + 0xf8);
    uStack_40 = *(undefined8 *)(param_1 + 0x148);
    iVar2 = Atlas_Networking_NetworkLoadout__IsFullySet(&uStack_80);
    if (iVar2 != 0) {
      lVar8 = *(long *)(param_1 + 0x90);
      uStack_1e8 = *(undefined8 *)(param_1 + 0x120);
      uStack_1f0 = *(undefined8 *)(param_1 + 0x118);
      uStack_1d8 = *(undefined8 *)(param_1 + 0x130);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x128);
      uStack_1c8 = *(undefined8 *)(param_1 + 0x140);
      uStack_1d0 = *(undefined8 *)(param_1 + 0x138);
      uStack_1c0 = *(undefined8 *)(param_1 + 0x148);
      uStack_228 = *(undefined8 *)(param_1 + 0xe0);
      uStack_230 = *(undefined8 *)(param_1 + 0xd8);
      uStack_218 = *(undefined8 *)(param_1 + 0xf0);
      uStack_220 = *(undefined8 *)(param_1 + 0xe8);
      uStack_208 = *(undefined8 *)(param_1 + 0x100);
      uStack_210 = *(undefined8 *)(param_1 + 0xf8);
      uStack_1f8 = *(undefined8 *)(param_1 + 0x110);
      uStack_200 = *(undefined8 *)(param_1 + 0x108);
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (plVar4 = *(long **)(*(long *)(param_1 + 0x70) + 0x30), plVar4 != (long *)0x0)) {
        uVar5 = (**(code **)(*plVar4 + 0x938))(plVar4,*(undefined8 *)(*plVar4 + 0x940));
        uStack_168 = uStack_1e8;
        uStack_170 = uStack_1f0;
        uStack_158 = uStack_1d8;
        uStack_160 = uStack_1e0;
        uStack_148 = uStack_1c8;
        uStack_150 = uStack_1d0;
        uStack_140 = uStack_1c0;
        uStack_1a8 = uStack_228;
        uStack_1b0 = uStack_230;
        uStack_198 = uStack_218;
        uStack_1a0 = uStack_220;
        uStack_188 = uStack_208;
        uStack_190 = uStack_210;
        uStack_178 = uStack_1f8;
        uStack_180 = uStack_200;
        if ((uVar5 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          uStack_e8 = uStack_1e8;
          uStack_f0 = uStack_1f0;
          uStack_d8 = uStack_1d8;
          uStack_e0 = uStack_1e0;
          uStack_c8 = uStack_1c8;
          uStack_d0 = uStack_1d0;
          uStack_c0 = uStack_1c0;
          uStack_128 = uStack_228;
          uStack_130 = uStack_230;
          uStack_118 = uStack_218;
          uStack_120 = uStack_220;
          uStack_108 = uStack_208;
          uStack_110 = uStack_210;
          uStack_f8 = uStack_1f8;
          uStack_100 = uStack_200;
          uVar6 = *(uint *)(param_1 + 0x9c);
        }
        if (lVar8 != 0) {
          uStack_268 = uStack_1e8;
          uStack_270 = uStack_1f0;
          uStack_258 = uStack_1d8;
          uStack_260 = uStack_1e0;
          uStack_248 = uStack_1c8;
          uStack_250 = uStack_1d0;
          uStack_240 = uStack_1c0;
          uStack_2a8 = uStack_228;
          uStack_2b0 = uStack_230;
          uStack_298 = uStack_218;
          uStack_2a0 = uStack_220;
          uStack_288 = uStack_208;
          uStack_290 = uStack_210;
          uStack_278 = uStack_1f8;
          uStack_280 = uStack_200;
          uVar1 = /*Atlas.Networking.NetworkLobbySessionData$$VerifyOwnSessionData*/ func_0x014abf0c(lVar8,&uStack_2b0,uVar6 & 0xff);
          *(undefined1 *)(param_1 + 0xab) = uVar1;
          return;
        }
      }
      auVar22 = func_0x00f78af4();
      uStack_380 = auVar22._8_8_;
      lVar8 = auVar22._0_8_;
      uVar5 = 0x3eb4000;
      uStack_378 = param_3;
      if ((bRam0000000003eb4a6b & 1) == 0) {
        func_0x00f78a20(0x3d3b4d0);
        func_0x00f78a20(0x3d3b4d8);
        func_0x00f78a20(0x3d3b4e0);
        func_0x00f78a20(0x3d3b4e8);
        bRam0000000003eb4a6b = 1;
      }
      uStack_390 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      lVar9 = *(long *)(lVar8 + 0xd0);
      if (lVar9 != 0) {
        unaff_x22 = 0;
        uVar5 = 0;
        do {
          if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar5) {
            return;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar5) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          _memmove(&uStack_400,*(long *)(lVar9 + 0x10) + unaff_x22 + 0x20,0x78);
          iVar2 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_400,0);
          iVar3 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_380,0);
          if (iVar2 == iVar3) goto code_r0x014aac74;
          uVar5 = uVar5 + 1;
          lVar9 = *(long *)(lVar8 + 0xd0);
          unaff_x22 = unaff_x22 + 0x78;
        } while (lVar9 != 0);
      }
      do {
        while( true ) {
          func_0x00f78af4();
code_r0x014aac74:
          lVar9 = *(long *)(lVar8 + 0xd0);
          if (*(char *)(lVar8 + 200) == '\0') break;
          if (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x18) <= (uint)uVar5) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar9 = *(long *)(lVar9 + 0x10) + unaff_x22;
            uVar14 = *(undefined8 *)(lVar9 + 0x28);
            uVar11 = *(undefined8 *)(lVar9 + 0x20);
            unaff_x22 = *(long *)(lVar9 + 0x30);
            uVar10 = *(undefined8 *)(lVar9 + 0x40);
            uVar21 = *(undefined8 *)(lVar9 + 0x48);
            uVar15 = *(undefined8 *)(lVar9 + 0x78);
            uVar12 = *(undefined8 *)(lVar9 + 0x70);
            uVar19 = *(undefined8 *)(lVar9 + 0x88);
            uVar17 = *(undefined8 *)(lVar9 + 0x80);
            uVar7 = *(undefined8 *)(lVar9 + 0x90);
            uVar20 = *(undefined8 *)(lVar9 + 0x58);
            uVar18 = *(undefined8 *)(lVar9 + 0x50);
            uVar16 = *(undefined8 *)(lVar9 + 0x68);
            uVar13 = *(undefined8 *)(lVar9 + 0x60);
            if ((*(long *)(lVar8 + 0x70) != 0) &&
               (plVar4 = *(long **)(*(long *)(lVar8 + 0x70) + 0x30), plVar4 != (long *)0x0)) {
              iVar2 = (**(code **)(*plVar4 + 0x938))(plVar4,*(undefined8 *)(*plVar4 + 0x940));
              if (*(long *)(lVar8 + 0xd0) != 0) {
                uStack_358 = 2;
                if (iVar2 == 0) {
                  uStack_358 = 3;
                }
                uStack_354 = (undefined4)uVar21;
                uStack_370 = uVar11;
                uStack_368 = uVar14;
                lStack_360 = unaff_x22;
                uStack_350 = uVar10;
                uStack_348 = uVar21;
                uStack_340 = uVar18;
                uStack_338 = uVar20;
                uStack_330 = uVar13;
                uStack_328 = uVar16;
                uStack_320 = uVar12;
                uStack_318 = uVar15;
                uStack_310 = uVar17;
                uStack_308 = uVar19;
                uStack_300 = uVar7;
                /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$set_Item*/ func_0x024107e0(*(long *)(lVar8 + 0xd0),uVar5,&uStack_370,uRam0000000003d3b4e8);
                return;
              }
            }
          }
        }
      } while (lVar9 == 0);
      /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$RemoveAt*/ func_0x024127d8(lVar9,uVar5,uRam0000000003d3b4d0);
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14aab74 | Atlas.Networking.NetworkLobby.OnSessionPlayerDisconnected
// ============================================================

void Atlas_Networking_NetworkLobby__OnSessionPlayerDisconnected
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  
  uVar5 = 0x3eb4000;
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  if ((bRam0000000003eb4a6b & 1) == 0) {
    func_0x00f78a20(0x3d3b4d0);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d3b4e0);
    func_0x00f78a20(0x3d3b4e8);
    bRam0000000003eb4a6b = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lVar6 = *(long *)(param_1 + 0xd0);
  if (lVar6 != 0) {
    unaff_x22 = 0;
    uVar5 = 0;
    do {
      if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar5) {
        return;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      _memmove(&uStack_150,*(long *)(lVar6 + 0x10) + unaff_x22 + 0x20,0x78);
      iVar1 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_150,0);
      iVar2 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_d0,0);
      if (iVar1 == iVar2) goto LAB_014aac74;
      uVar5 = uVar5 + 1;
      lVar6 = *(long *)(param_1 + 0xd0);
      unaff_x22 = unaff_x22 + 0x78;
    } while (lVar6 != 0);
  }
  do {
    while( true ) {
      func_0x00f78af4();
LAB_014aac74:
      lVar6 = *(long *)(param_1 + 0xd0);
      if (*(char *)(param_1 + 200) == '\0') break;
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= (uint)uVar5) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar6 = *(long *)(lVar6 + 0x10) + unaff_x22;
        uVar11 = *(undefined8 *)(lVar6 + 0x28);
        uVar8 = *(undefined8 *)(lVar6 + 0x20);
        unaff_x22 = *(long *)(lVar6 + 0x30);
        uVar7 = *(undefined8 *)(lVar6 + 0x40);
        uVar18 = *(undefined8 *)(lVar6 + 0x48);
        uVar12 = *(undefined8 *)(lVar6 + 0x78);
        uVar9 = *(undefined8 *)(lVar6 + 0x70);
        uVar16 = *(undefined8 *)(lVar6 + 0x88);
        uVar14 = *(undefined8 *)(lVar6 + 0x80);
        uVar4 = *(undefined8 *)(lVar6 + 0x90);
        uVar17 = *(undefined8 *)(lVar6 + 0x58);
        uVar15 = *(undefined8 *)(lVar6 + 0x50);
        uVar13 = *(undefined8 *)(lVar6 + 0x68);
        uVar10 = *(undefined8 *)(lVar6 + 0x60);
        if ((*(long *)(param_1 + 0x70) != 0) &&
           (plVar3 = *(long **)(*(long *)(param_1 + 0x70) + 0x30), plVar3 != (long *)0x0)) {
          iVar1 = (**(code **)(*plVar3 + 0x938))(plVar3,*(undefined8 *)(*plVar3 + 0x940));
          if (*(long *)(param_1 + 0xd0) != 0) {
            uStack_a8 = 2;
            if (iVar1 == 0) {
              uStack_a8 = 3;
            }
            uStack_a4 = (undefined4)uVar18;
            uStack_c0 = uVar8;
            uStack_b8 = uVar11;
            lStack_b0 = unaff_x22;
            uStack_a0 = uVar7;
            uStack_98 = uVar18;
            uStack_90 = uVar15;
            uStack_88 = uVar17;
            uStack_80 = uVar10;
            uStack_78 = uVar13;
            uStack_70 = uVar9;
            uStack_68 = uVar12;
            uStack_60 = uVar14;
            uStack_58 = uVar16;
            uStack_50 = uVar4;
            /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$set_Item*/ func_0x024107e0(*(long *)(param_1 + 0xd0),uVar5,&uStack_c0,uRam0000000003d3b4e8);
            return;
          }
        }
      }
    }
  } while (lVar6 == 0);
  /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$RemoveAt*/ func_0x024127d8(lVar6,uVar5,uRam0000000003d3b4d0);
  return;
}



// ============================================================
// RVA: 0x14aad90 | Atlas.Networking.NetworkLobby.OnSessionPlayerActive
// ============================================================

void Atlas_Networking_NetworkLobby__OnSessionPlayerActive
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  uVar3 = 0x3eb4000;
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  if ((bRam0000000003eb4a6c & 1) == 0) {
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d3b4e0);
    func_0x00f78a20(0x3d3b4e8);
    bRam0000000003eb4a6c = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lVar4 = *(long *)(param_1 + 0xd0);
  if (lVar4 != 0) {
    uVar3 = 0;
    lVar5 = 0x20;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar3) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      _memmove(&uStack_150,*(long *)(lVar4 + 0x10) + lVar5,0x78);
      iVar1 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_150,0);
      iVar2 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_d0,0);
      if (iVar1 == iVar2) goto LAB_014aae7c;
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(param_1 + 0xd0);
      lVar5 = lVar5 + 0x78;
    } while (lVar4 != 0);
  }
  do {
    func_0x00f78af4();
LAB_014aae7c:
    uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
  } while (*(long *)(param_1 + 0xd0) == 0);
  uStack_78 = uStack_108;
  uStack_80 = uStack_110;
  uStack_68 = uStack_f8;
  uStack_70 = uStack_100;
  uStack_58 = uStack_e8;
  uStack_60 = uStack_f0;
  uStack_50 = uStack_e0;
  uStack_b8 = uStack_148;
  uStack_c0 = uStack_150;
  uStack_a8 = uStack_138;
  uStack_b0 = uStack_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$set_Item*/ func_0x024107e0(*(long *)(param_1 + 0xd0),uVar3,&uStack_c0,uRam0000000003d3b4e8);
  return;
}



// ============================================================
// RVA: 0x14aaee4 | Atlas.Networking.NetworkLobby.OnGroupLeaderChanged
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Networking_NetworkLobby__OnGroupLeaderChanged
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
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
  ulong uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  long lVar5;
  
  if ((bRam0000000003eb4a6d & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5ac58);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d25710);
    bRam0000000003eb4a6d = 1;
  }
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x70) + 0x30), plVar2 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x858))(plVar2,*(undefined8 *)(*plVar2 + 0x860));
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858(_UNK_033f8478,0);
    if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UniRx.Async.UniTask$$Delay*/ func_0x02f9b778(uVar3,0,4,0,0);
    uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar4,param_1,uRam0000000003d5ac58,0);
    puStack_40 = (undefined1 *)/*UniRx.Async.UniTaskExtensions$$ContinueWith*/ func_0x02fa3354(uVar3,uVar4,0);
    if ((bRam0000000003ebc80c & 1) == 0) {
      func_0x00f78a20(0x3d52168,0);
      bRam0000000003ebc80c = 1;
    }
    puStack_38 = (undefined *)0x0;
    lStack_48 = 0;
    uStack_50 = 0xffffffff;
    /*UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder$$Start<UniTaskExtensions.<ForgetCore>d__19>*/ func_0x018297f4(&stack0xffffffffffffffa8,&uStack_50,uRam0000000003d52168);
    return 0;
  }
  auVar9 = func_0x00f78af4();
  uStack_100 = auVar9._8_8_;
  lVar5 = auVar9._0_8_;
  uStack_50 = 0x3eb4000;
  puStack_38 = &Atlas_Networking_NetworkLobby__OnSessionPlayerInactive;
  uVar6 = 0x3eb4000;
  uStack_f8 = param_3;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a6e & 1) == 0) {
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d3b4e0);
    uVar3 = func_0x00f78a20(0x3d3b4e8);
    auVar9._8_8_ = uStack_100;
    auVar9._0_8_ = uVar3;
    bRam0000000003eb4a6e = 1;
  }
  uStack_100 = auVar9._8_8_;
  uStack_110 = 0;
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
  uStack_178 = 0;
  uStack_180 = 0;
  lVar7 = *(long *)(lVar5 + 0xd0);
  if (lVar7 != 0) {
    uVar6 = 0;
    lVar8 = 0x20;
    do {
      uStack_100 = auVar9._8_8_;
      if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar6) {
        return auVar9._0_8_;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      _memmove(&uStack_180,*(long *)(lVar7 + 0x10) + lVar8,0x78);
      iVar1 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_180,0);
      uVar3 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_100,0);
      auVar9._8_8_ = uStack_100;
      auVar9._0_8_ = uVar3;
      if (iVar1 == (int)uVar3) goto code_r0x014ab120;
      uVar6 = uVar6 + 1;
      lVar7 = *(long *)(lVar5 + 0xd0);
      lVar8 = lVar8 + 0x78;
    } while (lVar7 != 0);
  }
  do {
    func_0x00f78af4();
code_r0x014ab120:
    uStack_110 = uStack_110 & 0xffffffffffffff00;
  } while (*(long *)(lVar5 + 0xd0) == 0);
  uStack_a8 = uStack_138;
  uStack_b0 = uStack_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  uStack_80 = uStack_110;
  uStack_e8 = uStack_178;
  uStack_f0 = uStack_180;
  uStack_d8 = uStack_168;
  uStack_e0 = uStack_170;
  uStack_c8 = uStack_158;
  uStack_d0 = uStack_160;
  uStack_b8 = uStack_148;
  uStack_c0 = uStack_150;
  uVar3 = /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$set_Item*/ func_0x024107e0(*(long *)(lVar5 + 0xd0),uVar6,&uStack_f0,uRam0000000003d3b4e8);
  return uVar3;
}



// ============================================================
// RVA: 0x14ab034 | Atlas.Networking.NetworkLobby.OnSessionPlayerInactive
// ============================================================

void Atlas_Networking_NetworkLobby__OnSessionPlayerInactive
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
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
  ulong uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  ulong uStack_50;
  
  uVar3 = 0x3eb4000;
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  if ((bRam0000000003eb4a6e & 1) == 0) {
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d3b4e0);
    func_0x00f78a20(0x3d3b4e8);
    bRam0000000003eb4a6e = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lVar4 = *(long *)(param_1 + 0xd0);
  if (lVar4 != 0) {
    uVar3 = 0;
    lVar5 = 0x20;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar3) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      _memmove(&uStack_150,*(long *)(lVar4 + 0x10) + lVar5,0x78);
      iVar1 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_150,0);
      iVar2 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_d0,0);
      if (iVar1 == iVar2) goto LAB_014ab120;
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(param_1 + 0xd0);
      lVar5 = lVar5 + 0x78;
    } while (lVar4 != 0);
  }
  do {
    func_0x00f78af4();
LAB_014ab120:
    uStack_e0 = uStack_e0 & 0xffffffffffffff00;
  } while (*(long *)(param_1 + 0xd0) == 0);
  uStack_78 = uStack_108;
  uStack_80 = uStack_110;
  uStack_68 = uStack_f8;
  uStack_70 = uStack_100;
  uStack_58 = uStack_e8;
  uStack_60 = uStack_f0;
  uStack_50 = uStack_e0;
  uStack_b8 = uStack_148;
  uStack_c0 = uStack_150;
  uStack_a8 = uStack_138;
  uStack_b0 = uStack_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$set_Item*/ func_0x024107e0(*(long *)(param_1 + 0xd0),uVar3,&uStack_c0,uRam0000000003d3b4e8);
  return;
}



// ============================================================
// RVA: 0x14ab184 | Atlas.Networking.NetworkLobby.OnSessionOtherPlayerDataUpdated
// ============================================================

/* WARNING: Possible PIC construction at 0x014ab304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ab308) */
/* WARNING: Removing unreachable block (ram,0x014ab310) */
/* WARNING: Removing unreachable block (ram,0x014ab318) */
/* WARNING: Removing unreachable block (ram,0x014ab328) */
/* WARNING: Removing unreachable block (ram,0x014ab334) */
/* WARNING: Removing unreachable block (ram,0x014ab378) */
/* WARNING: Removing unreachable block (ram,0x014ab3f4) */
/* WARNING: Removing unreachable block (ram,0x014ab404) */
/* WARNING: Removing unreachable block (ram,0x014ab40c) */
/* WARNING: Removing unreachable block (ram,0x014ab410) */
/* WARNING: Removing unreachable block (ram,0x014ab480) */
/* WARNING: Removing unreachable block (ram,0x014ab488) */
/* WARNING: Removing unreachable block (ram,0x014ab4a8) */
/* WARNING: Removing unreachable block (ram,0x014ab4d4) */
/* WARNING: Removing unreachable block (ram,0x014ab4dc) */
/* WARNING: Removing unreachable block (ram,0x014ab4f0) */
/* WARNING: Removing unreachable block (ram,0x014ab4f8) */
/* WARNING: Removing unreachable block (ram,0x014ab518) */
/* WARNING: Removing unreachable block (ram,0x014ab520) */
/* WARNING: Removing unreachable block (ram,0x014ab528) */
/* WARNING: Removing unreachable block (ram,0x014ab53c) */
/* WARNING: Removing unreachable block (ram,0x014ab544) */

void Atlas_Networking_NetworkLobby__OnSessionOtherPlayerDataUpdated
               (long param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4,
               undefined1 *param_5,undefined8 *param_6,undefined1 *param_7,undefined2 *param_8)

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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar15;
  undefined4 uVar16;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long *plVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long unaff_x22;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_4e0 [16];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4c0;
  undefined1 auStack_4b0 [16];
  undefined1 auStack_4a0 [16];
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulong uStack_480;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong uStack_460;
  undefined1 auStack_450 [16];
  undefined1 auStack_440 [16];
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong uStack_420;
  undefined1 auStack_418 [16];
  uint uStack_404;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined4 *puStack_2d0;
  undefined8 uStack_240;
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
  undefined4 uStack_1c8;
  undefined2 uStack_1c2;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_151;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  uVar30 = 0x3eb4000;
  uStack_150 = param_2;
  puStack_148 = param_3;
  if ((bRam0000000003eb4a6f & 1) == 0) {
    func_0x00f78a20(0x3d2a1f0);
    func_0x00f78a20(0x3d2a200);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d3b4e0);
    func_0x00f78a20(0x3d3b4e8);
    bRam0000000003eb4a6f = 1;
  }
  uStack_151 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1a1 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1c2 = 0;
  uStack_1c8 = 0;
  lVar32 = *(long *)(param_1 + 0xd0);
  if (lVar32 != 0) {
    unaff_x22 = 0;
    uVar30 = 0;
    do {
      if ((int)*(uint *)(lVar32 + 0x18) <= (int)uVar30) {
        if (*(long *)PTR_03a5d648 == lStack_48) {
          return;
        }
        auVar34 = ___stack_chk_fail();
        goto code_r0x014ab57c;
      }
      if (*(uint *)(lVar32 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      iVar15 = *(int *)(*(long *)(lVar32 + 0x10) + unaff_x22 + 0x3c);
      iVar14 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_150,0);
      if (iVar15 == iVar14) goto LAB_014ab288;
      uVar30 = uVar30 + 1;
      lVar32 = *(long *)(param_1 + 0xd0);
      unaff_x22 = unaff_x22 + 0x78;
    } while (lVar32 != 0);
  }
  do {
    do {
      func_0x00f78af4();
LAB_014ab288:
      lVar32 = *(long *)(param_1 + 0xd0);
    } while (lVar32 == 0);
    lVar33 = *(long *)(param_1 + 0x90);
    if (*(uint *)(lVar32 + 0x18) <= uVar30) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
  } while (lVar33 == 0);
  lVar32 = *(long *)(lVar32 + 0x10) + unaff_x22;
  uStack_1f8 = *(undefined8 *)(lVar32 + 0x68);
  uStack_200 = *(undefined8 *)(lVar32 + 0x60);
  uStack_1e8 = *(undefined8 *)(lVar32 + 0x78);
  uStack_1f0 = *(undefined8 *)(lVar32 + 0x70);
  uStack_1d8 = *(undefined8 *)(lVar32 + 0x88);
  uStack_1e0 = *(undefined8 *)(lVar32 + 0x80);
  uStack_1d0 = *(undefined8 *)(lVar32 + 0x90);
  uStack_238 = *(undefined8 *)(lVar32 + 0x28);
  uStack_240 = *(undefined8 *)(lVar32 + 0x20);
  uStack_228 = *(undefined8 *)(lVar32 + 0x38);
  uStack_230 = *(undefined8 *)(lVar32 + 0x30);
  uStack_218 = *(undefined8 *)(lVar32 + 0x48);
  uStack_220 = *(undefined8 *)(lVar32 + 0x40);
  uStack_208 = *(undefined8 *)(lVar32 + 0x58);
  uStack_210 = *(undefined8 *)(lVar32 + 0x50);
  puStack_2d0 = &uStack_1c8;
  auVar34._8_8_ = &uStack_240;
  auVar34._0_8_ = lVar33;
  param_3 = &uStack_151;
  param_4 = &uStack_1a0;
  param_5 = &uStack_1a1;
  param_6 = &uStack_1c0;
  param_7 = (undefined1 *)((long)&uStack_1c2 + 1);
  param_8 = &uStack_1c2;
code_r0x014ab57c:
  lVar32 = auVar34._0_8_;
  lStack_340 = *(long *)PTR_03a5d648;
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
  auStack_418._0_8_ = 0;
  auStack_418._8_8_ = 0;
  uStack_430 = 0;
  uStack_428 = 0;
  uStack_420 = 0;
  auStack_440._0_8_ = 0;
  auStack_440._8_8_ = 0;
  auStack_450._0_8_ = 0;
  auStack_450._8_8_ = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_490 = 0;
  uStack_488 = 0;
  uStack_480 = 0;
  auStack_4a0._0_8_ = 0;
  auStack_4a0._8_8_ = 0;
  auStack_4b0._0_8_ = 0;
  auStack_4b0._8_8_ = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  auStack_4e0._0_8_ = 0;
  auStack_4e0._8_8_ = 0;
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
  *(undefined1 *)param_8 = 0;
  *puStack_2d0 = 0;
  lVar33 = *(long *)(lVar32 + 0x30);
  if (lVar33 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = 0;
    if (*(int *)(lVar33 + 0x18) != 0) {
      lVar31 = lVar33 + 0x20;
    }
  }
  uStack_404 = 0;
  if (*(long *)(lVar32 + 0x10) == 0) {
code_r0x014abd50:
    func_0x00f78af4();
  }
  else {
    plVar29 = *(long **)(*(long *)(lVar32 + 0x10) + 0x30);
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    /*Unity.Collections.FixedString64Bytes$$.ctor*/ func_0x02fd8608(&uStack_400,*(undefined8 *)(auVar34._8_8_ + 0x10),0);
    uVar20 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar31,0);
    if (plVar29 == (long *)0x0) goto code_r0x014abd50;
    uStack_378 = uStack_3f8;
    uStack_380 = uStack_400;
    uStack_368 = uStack_3e8;
    uStack_370 = uStack_3f0;
    uStack_358 = uStack_3d8;
    uStack_360 = uStack_3e0;
    uStack_348 = uStack_3c8;
    uStack_350 = uStack_3d0;
    iVar15 = (**(code **)(*plVar29 + 0x918))
                       (plVar29,&uStack_380,uVar20,&uStack_404,*(undefined8 *)(*plVar29 + 0x920));
    auVar11._8_8_ = auStack_4e0._8_8_;
    auVar11._0_8_ = auStack_4e0._0_8_;
    auVar10._8_8_ = auStack_4e0._8_8_;
    auVar10._0_8_ = auStack_4e0._0_8_;
    auVar9._8_8_ = auStack_4b0._8_8_;
    auVar9._0_8_ = auStack_4b0._0_8_;
    auVar8._8_8_ = auStack_4b0._8_8_;
    auVar8._0_8_ = auStack_4b0._0_8_;
    auVar7._8_8_ = auStack_4a0._8_8_;
    auVar7._0_8_ = auStack_4a0._0_8_;
    auVar6._8_8_ = auStack_4a0._8_8_;
    auVar6._0_8_ = auStack_4a0._0_8_;
    auVar5._8_8_ = auStack_418._8_8_;
    auVar5._0_8_ = auStack_418._0_8_;
    auVar4._8_8_ = auStack_418._8_8_;
    auVar4._0_8_ = auStack_418._0_8_;
    auVar3._8_8_ = auStack_440._8_8_;
    auVar3._0_8_ = auStack_440._0_8_;
    auVar2._8_8_ = auStack_440._8_8_;
    auVar2._0_8_ = auStack_440._0_8_;
    auVar1._8_8_ = auStack_450._8_8_;
    auVar1._0_8_ = auStack_450._0_8_;
    auVar35._8_8_ = auStack_450._8_8_;
    auVar35._0_8_ = auStack_450._0_8_;
    if (iVar15 == 0) {
      if (*(long *)(lVar32 + 0x30) != 0) {
        auStack_450 = auVar35;
        auStack_440 = auVar2;
        auStack_418 = auVar4;
        auStack_4a0 = auVar6;
        auStack_4b0 = auVar8;
        auStack_4e0 = auVar10;
        if ((uStack_404 == 0) ||
           (auStack_450 = auVar1, auStack_440 = auVar3, auStack_418 = auVar5, auStack_4a0 = auVar7,
           auStack_4b0 = auVar9, auStack_4e0 = auVar11,
           (long)*(int *)(*(long *)(lVar32 + 0x30) + 0x18) <= (long)(ulong)uStack_404))
        goto code_r0x014ab750;
        if (*(long *)(lVar32 + 0x20) != 0) {
          /*FlatBuffers.ByteBuffer$$Reset*/ func_0x016cc1bc(*(long *)(lVar32 + 0x20),0);
          if (*(long *)(lVar32 + 0x20) != 0) {
            /*FlatBuffers.ByteBuffer$$PutByteArray*/ func_0x016ccf1c(*(long *)(lVar32 + 0x20),uStack_404,*(undefined8 *)(lVar32 + 0x30),0);
            auStack_418 = /*Core.Networking.SessionInfo$$GetRootAsSessionInfo*/ func_0x01661d0c(*(undefined8 *)(lVar32 + 0x20),0);
            uVar16 = /*Core.Networking.SessionInfo$$get_GameType*/ func_0x01661d7c(auStack_418,0);
            *puStack_2d0 = uVar16;
            /*Core.Networking.SessionInfo$$get_ClientInfo*/ func_0x01661dd0(&uStack_380,auStack_418,0);
            uStack_428 = uStack_378;
            uStack_430 = uStack_380;
            uStack_420 = uStack_370;
            if ((uStack_370 & 0xff) != 0) {
              /*Core.Networking.SessionInfo$$get_ClientInfo*/ func_0x01661dd0(&uStack_380,auStack_418,0);
              uStack_428 = uStack_378;
              uStack_430 = uStack_380;
              uStack_420 = uStack_370;
              auStack_450 = /*System.Nullable<ClientSessionInfo>$$get_Value*/ func_0x0261ccb0(&uStack_430,uRam0000000003d3e660);
              /*Core.Networking.ClientSessionInfo$$get_Visuals*/ func_0x016539ac(&uStack_380,auStack_450,0);
              uStack_468 = uStack_378;
              uStack_470 = uStack_380;
              uStack_460 = uStack_370;
              auStack_440 = /*System.Nullable<SessionKartVisuals>$$get_Value*/ func_0x02660df4(&uStack_470,uRam0000000003d3ed08);
              /*Core.Networking.SessionInfo$$get_ClientInfo*/ func_0x01661dd0(&uStack_380,auStack_418,0);
              uStack_428 = uStack_378;
              uStack_430 = uStack_380;
              uStack_420 = uStack_370;
              auVar35 = /*System.Nullable<ClientSessionInfo>$$get_Value*/ func_0x0261ccb0(&uStack_430,uRam0000000003d3e660);
              auStack_450 = auVar35;
              uVar13 = /*Core.Networking.ClientSessionInfo$$get_IsReady*/ func_0x01653958(auStack_450,0);
              *param_7 = uVar13;
              /*Core.Networking.SessionInfo$$get_ClientInfo*/ func_0x01661dd0(&uStack_380,auStack_418,0);
              uStack_428 = uStack_378;
              uStack_430 = uStack_380;
              uStack_420 = uStack_370;
              auVar35 = /*System.Nullable<ClientSessionInfo>$$get_Value*/ func_0x0261ccb0(&uStack_430,uRam0000000003d3e660);
              auStack_450 = auVar35;
              uVar13 = /*Core.Networking.ClientSessionInfo$$get_IsInLobby*/ func_0x01653904(auStack_450,0);
              *(undefined1 *)param_8 = uVar13;
              uVar20 = /*Core.Networking.SessionKartVisuals$$get_Kart*/ func_0x01662118(auStack_440,0);
              uVar20 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar20);
              uVar21 = /*Core.Networking.SessionKartVisuals$$get_Character*/ func_0x016620c4(auStack_440,0);
              uVar21 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar21);
              uVar22 = /*Core.Networking.SessionKartVisuals$$get_Antenna*/ func_0x016621c0(auStack_440,0);
              uVar22 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar22);
              uVar23 = /*Core.Networking.SessionKartVisuals$$get_Glider*/ func_0x0166216c(auStack_440,0);
              uVar23 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar23);
              uVar24 = /*Core.Networking.SessionKartVisuals$$get_Wheels*/ func_0x01662214(auStack_440,0);
              uVar24 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar24);
              uVar25 = /*Core.Networking.SessionKartVisuals$$get_Extra1*/ func_0x01662268(auStack_440,0);
              uVar25 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar25);
              uVar26 = /*Core.Networking.SessionKartVisuals$$get_Extra2*/ func_0x016622bc(auStack_440,0);
              uVar26 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar26);
              uVar27 = /*Core.Networking.SessionKartVisuals$$get_Extra3*/ func_0x01662310(auStack_440,0);
              uVar27 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar27);
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
            /*Core.Networking.SessionInfo$$get_HostInfo*/ func_0x01661e78(&uStack_380,auStack_418,0);
            if ((char)uStack_370 != '\0') {
              if (*(long *)(lVar32 + 0x10) == 0) {
                func_0x00f78af4();
                goto code_r0x014abef4;
              }
              plVar29 = *(long **)(*(long *)(lVar32 + 0x10) + 0x30);
              /*Unity.Collections.FixedString64Bytes$$op_Implicit*/ func_0x02fd8c8c(&uStack_380,*(undefined8 *)(auVar34._8_8_ + 0x10),0);
              uStack_3f8 = uStack_378;
              uStack_400 = uStack_380;
              uStack_3e8 = uStack_368;
              uStack_3f0 = uStack_370;
              uStack_3d8 = uStack_358;
              uStack_3e0 = uStack_360;
              uStack_3c8 = uStack_348;
              uStack_3d0 = uStack_350;
              if (plVar29 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014abef4;
              }
              uVar28 = (**(code **)(*plVar29 + 0x948))
                                 (plVar29,&uStack_380,*(undefined8 *)(*plVar29 + 0x950));
              if ((uVar28 & 1) != 0) {
                /*Core.Networking.SessionInfo$$get_HostInfo*/ func_0x01661e78(&uStack_380,auStack_418,0);
                uStack_488 = uStack_378;
                uStack_490 = uStack_380;
                uStack_480 = uStack_370;
                auStack_4b0 = /*System.Nullable<HostSessionInfo>$$get_Value*/ func_0x02654584(&uStack_490,uRam0000000003d3e8e8);
                /*Core.Networking.HostSessionInfo$$get_HostConfig*/ func_0x01656404(&uStack_380,auStack_4b0,0);
                uStack_4c8 = uStack_378;
                uStack_4d0 = uStack_380;
                uStack_4c0 = uStack_370;
                auStack_4a0 = /*System.Nullable<HostConfig>$$get_Value*/ func_0x026528d8(&uStack_4d0,uRam0000000003d3e8b0);
                if (*(long *)(lVar32 + 0x10) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014abef4;
                }
                plVar29 = *(long **)(*(long *)(lVar32 + 0x10) + 0x30);
                if (plVar29 == (long *)0x0) {
                  func_0x00f78af4();
                  goto code_r0x014abef4;
                }
                (**(code **)(*plVar29 + 0x888))
                          (&uStack_380,plVar29,*(undefined8 *)(*plVar29 + 0x890));
                uStack_3b8 = uStack_378;
                uStack_3c0 = uStack_380;
                uStack_3a8 = uStack_368;
                uStack_3b0 = uStack_370;
                uStack_398 = uStack_358;
                uStack_3a0 = uStack_360;
                uStack_388 = uStack_348;
                uStack_390 = uStack_350;
                uVar20 = /*Unity.Collections.FixedString64Bytes$$ToString*/ func_0x02fd8584(&uStack_3c0,0);
                uVar21 = /*Core.Networking.HostConfig$$get_SessionId*/ func_0x0165510c(auStack_4a0,0);
                uVar28 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar21,uVar20,0);
                if ((uVar28 & 1) == 0) {
                  lVar33 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkLoadout>_TypeInfo*/ uRam0000000003d1dc28);
                  /*System.Collections.Generic.List<NetworkLoadout>$$.ctor*/ func_0x0240d09c(lVar33,uRam0000000003d3b480);
                  iVar15 = 0;
                  while( true ) {
                    auVar34 = /*System.Nullable<HostSessionInfo>$$get_Value*/ func_0x02654584(&uStack_490,uRam0000000003d3e8e8);
                    auStack_4b0 = auVar34;
                    iVar14 = /*Core.Networking.HostSessionInfo$$get_AiVisualsLength*/ func_0x01656564(auStack_4b0,0);
                    if (iVar14 <= iVar15) break;
                    auVar34 = /*System.Nullable<HostSessionInfo>$$get_Value*/ func_0x02654584(&uStack_490,uRam0000000003d3e8e8);
                    auStack_4b0 = auVar34;
                    /*Core.Networking.HostSessionInfo$$AiVisuals*/ func_0x016564ac(&uStack_380,auStack_4b0,iVar15,0);
                    uStack_468 = uStack_378;
                    uStack_470 = uStack_380;
                    uStack_460 = uStack_370;
                    auVar34 = /*System.Nullable<SessionKartVisuals>$$get_Value*/ func_0x02660df4(&uStack_470,uRam0000000003d3ed08);
                    auStack_4e0 = auVar34;
                    uVar20 = /*Core.Networking.SessionKartVisuals$$get_Kart*/ func_0x01662118(auStack_4e0,0);
                    uVar20 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar20);
                    uVar21 = /*Core.Networking.SessionKartVisuals$$get_Character*/ func_0x016620c4(auStack_4e0,0);
                    uVar21 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar21);
                    uVar22 = /*Core.Networking.SessionKartVisuals$$get_Antenna*/ func_0x016621c0(auStack_4e0,0);
                    uVar22 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar22);
                    uVar23 = /*Core.Networking.SessionKartVisuals$$get_Glider*/ func_0x0166216c(auStack_4e0,0);
                    uVar28 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar23);
                    uVar23 = /*Core.Networking.SessionKartVisuals$$get_Wheels*/ func_0x01662214(auStack_4e0,0);
                    uVar23 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar23);
                    uVar24 = /*Core.Networking.SessionKartVisuals$$get_Extra1*/ func_0x01662268(auStack_4e0,0);
                    uVar24 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar24);
                    uVar25 = /*Core.Networking.SessionKartVisuals$$get_Extra2*/ func_0x016622bc(auStack_4e0,0);
                    uVar25 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar25);
                    uVar26 = /*Core.Networking.SessionKartVisuals$$get_Extra3*/ func_0x01662310(auStack_4e0,0);
                    uVar26 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(lVar32,uVar26);
                    if (lVar33 == 0) goto code_r0x014abd58;
                    uStack_380 = uVar21;
                    uStack_378 = uVar20;
                    uStack_370 = uVar28;
                    uStack_368 = uVar22;
                    uStack_360 = uVar23;
                    uStack_358 = uVar24;
                    uStack_350 = uVar25;
                    uStack_348 = uVar26;
                    /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar33,&uStack_380,uRam0000000003d3b490);
                    iVar15 = iVar15 + 1;
                  }
                  uVar16 = /*Core.Networking.HostConfig$$get_NumberOfAi*/ func_0x016552f0(auStack_4a0,0);
                  uVar17 = /*Core.Networking.HostConfig$$get_TimeLimit*/ func_0x01655248(auStack_4a0,0);
                  uVar18 = /*Core.Networking.HostConfig$$get_NumberOfLaps*/ func_0x0165529c(auStack_4a0,0);
                  uVar19 = /*Core.Networking.HostConfig$$get_MapKey*/ func_0x016551f4(auStack_4a0,0);
                  *(undefined4 *)param_6 = uVar19;
                  *(undefined4 *)((long)param_6 + 4) = uVar17;
                  *(undefined4 *)(param_6 + 1) = uVar18;
                  *(undefined4 *)((long)param_6 + 0xc) = uVar16;
                  param_6[2] = lVar33;
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
    if (*(long *)PTR_03a5d648 == lStack_340) {
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
// RVA: 0x14abfe8 | Atlas.Networking.NetworkLobby.OnPlayerAuthenticated
// ============================================================

void Atlas_Networking_NetworkLobby__OnPlayerAuthenticated
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4a71 & 1) == 0) {
    func_0x00f78a20(0x3d3ebe0);
    bRam0000000003eb4a71 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(&uStack_58,param_2,param_3,uRam0000000003d3ebe0);
  *(undefined8 *)(param_1 + 0xb8) = uStack_50;
  *(undefined8 *)(param_1 + 0xb0) = uStack_58;
  *(undefined8 *)(param_1 + 0xc0) = uStack_48;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(&uStack_70,param_2,param_3,uRam0000000003d3ebe0);
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uStack_80 = uStack_60;
  Atlas_Networking_NetworkLobby__SetLocalPlayer(param_1,&uStack_90);
  return;
}



// ============================================================
// RVA: 0x14ac0b0 | Atlas.Networking.NetworkLobby.OnLocalPlayerAuthenticated
// ============================================================

void Atlas_Networking_NetworkLobby__OnLocalPlayerAuthenticated
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4a72 & 1) == 0) {
    func_0x00f78a20(0x3d3ebe0);
    bRam0000000003eb4a72 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(&uStack_58,param_2,param_3,uRam0000000003d3ebe0);
  *(undefined8 *)(param_1 + 0xb8) = uStack_50;
  *(undefined8 *)(param_1 + 0xb0) = uStack_58;
  *(undefined8 *)(param_1 + 0xc0) = uStack_48;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(&uStack_70,param_2,param_3,uRam0000000003d3ebe0);
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uStack_80 = uStack_60;
  Atlas_Networking_NetworkLobby__SetLocalPlayer(param_1,&uStack_90);
  return;
}



// ============================================================
// RVA: 0x14ac178 | Atlas.Networking.NetworkLobby.OnSessionJoined
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14ac208 | Atlas.Networking.NetworkLobby.ResetReady
// ============================================================

/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */

ulong Atlas_Networking_NetworkLobby__ResetReady
                (ulong param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                undefined1 *param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar7;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong extraout_x1;
  long *plVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  long lVar25;
  int *piVar26;
  undefined8 uVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  ulong uVar31;
  uint uVar32;
  undefined8 *puVar33;
  code *pcVar34;
  undefined8 uVar35;
  undefined8 **ppuVar36;
  undefined8 unaff_x26;
  undefined1 ***pppuVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  undefined1 ******ppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  long *plStack_1a8;
  undefined1 *****pppppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 ****ppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 ***pppuStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)(param_1 + 0x14a) == '\0') {
    return param_1;
  }
  *(undefined1 *)(param_1 + 0x14a) = 0;
  if ((*(char *)(param_1 + 0x99) != '\0') || (*(long *)(param_1 + 0x70) == 0)) {
    return param_1;
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x70) + 0x30);
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  uVar10 = (**(code **)(*plVar9 + 0x938))(plVar9,*(undefined8 *)(*plVar9 + 0x940));
  if ((uVar10 & 1) != 0) {
    return uVar10;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x120);
    uStack_60 = *(undefined8 *)(param_1 + 0x118);
    uStack_48 = *(undefined8 *)(param_1 + 0x130);
    uStack_50 = *(undefined8 *)(param_1 + 0x128);
    uStack_38 = *(undefined8 *)(param_1 + 0x140);
    uStack_40 = *(undefined8 *)(param_1 + 0x138);
    uStack_30 = *(undefined8 *)(param_1 + 0x148);
    uStack_98 = *(undefined8 *)(param_1 + 0xe0);
    uStack_a0 = *(undefined8 *)(param_1 + 0xd8);
    uStack_88 = *(undefined8 *)(param_1 + 0xf0);
    uStack_90 = *(undefined8 *)(param_1 + 0xe8);
    uStack_78 = *(undefined8 *)(param_1 + 0x100);
    uStack_80 = *(undefined8 *)(param_1 + 0xf8);
    uStack_68 = *(undefined8 *)(param_1 + 0x110);
    uStack_70 = *(undefined8 *)(param_1 + 0x108);
    uVar10 = /*Atlas.Networking.NetworkLobbySessionData$$SetLocalPlayerSessionData*/ func_0x014a9684(*(long *)(param_1 + 0x90),&uStack_a0,0,0);
    return uVar10;
  }
  func_0x00f78af4();
  pcStack_a8 = Atlas_Networking_NetworkLobby__FormatDisplayName;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a69 & 1) == 0) {
    func_0x00f78a20(0x3d230d0);
    bRam0000000003eb4a69 = 1;
  }
  if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb57c1 & 1) == 0) {
    func_0x00f78a20(0x3d230d0,0);
    func_0x00f78a20(0x3d24040);
    bRam0000000003eb57c1 = 1;
  }
  if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*Core.Localisation.LocalisationManager$$DoesStringContainArabic*/ func_0x0164ff20(extraout_x1);
  if (iVar6 == 0) {
    return extraout_x1;
  }
  if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar29 = **(long **)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8);
  auVar40._8_8_ = lVar29;
  auVar40._0_8_ = extraout_x1;
  if (lVar29 == 0) {
    puVar38 = &RTLTMPro_RTLSupport__FixRTL;
    auVar40 = func_0x00f78af4();
  }
  else {
    *(undefined4 *)(lVar29 + 0x10) = 0;
    if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = (long *)((long)&MACH_HEADER.magic + 1);
    param_4 = 1;
    param_5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    puVar38 = &UNK_01650270;
  }
  uVar20 = auVar40._8_8_;
  puVar33 = auVar40._0_8_;
  uVar35 = 0x3eb5000;
  plVar9 = param_3;
  ppuStack_e0 = &puStack_b0;
  puStack_d8 = puVar38;
  if ((bRam0000000003eb57d3 & 1) == 0) {
    func_0x00f78a20(0x3d21be0);
    func_0x00f78a20(0x3d22f20);
    func_0x00f78a20(0x3d24040);
    func_0x00f78a20(0x3d25070);
    bRam0000000003eb57d3 = 1;
  }
  if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (**(long **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) != 0) {
    /*RTLTMPro.FastStringBuilder$$SetValue*/ func_0x0164c410(**(long **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8),puVar33);
    uVar35 = **(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8);
    if (((*(ushort *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x26 = 0x3d22f20;
    /*RTLTMPro.TashkeelFixer$$RemoveTashkeel*/ func_0x01651a44(uVar35);
    uVar16 = **(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8);
    uVar35 = (*(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8))[1];
    if (((*(ushort *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*RTLTMPro.GlyphFixer$$Fix*/ func_0x0164d17c(uVar16,uVar35,param_5,param_3,param_4);
    /*RTLTMPro.TashkeelFixer$$RestoreTashkeel*/ func_0x01651c28(*(undefined8 *)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) + 8));
    /*RTLTMPro.TashkeelFixer$$FixShaddaCombinations*/ func_0x01651d7c(*(undefined8 *)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) + 8));
    puVar33 = *(undefined8 **)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) + 8);
    if (((*(ushort *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar9 = param_3;
    /*RTLTMPro.LigatureFixer$$Fix*/ func_0x0164e8bc(puVar33,uVar20,param_3,param_4,param_5);
    if ((int)param_4 != 0) {
      /*RTLTMPro.RichTextFixer$$Fix*/ func_0x01651f48(uVar20);
    }
    uVar10 = /*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040;
    if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar10 = /*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040;
    }
    /*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 = uVar10;
    if (**(long **)(uVar10 + 0xb8) != 0) {
      *(undefined4 *)(**(long **)(uVar10 + 0xb8) + 0x10) = 0;
      return uVar10;
    }
  }
  uVar10 = func_0x00f78af4();
  puStack_138 = &Core_Localisation_LocalisationManager__GetLanguageCode;
  uStack_150 = param_4;
  uStack_148 = uVar20;
  pppuStack_140 = &ppuStack_e0;
  if (uVar10 != 0) {
    uVar11 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(uVar10,0x2d,0);
    if ((int)uVar11 < 1) {
      return uVar10;
    }
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar10;
    puVar3 = &stack0xfffffffffffffed0;
    uVar20 = uStack_148;
    uVar16 = uStack_150;
    pppuVar37 = pppuStack_140;
    puVar38 = puStack_138;
    do {
      puVar22 = auVar41._8_8_;
      uVar10 = auVar41._0_8_;
      *(long **)(puVar3 + -0x30) = param_3;
      *(undefined1 **)(puVar3 + -0x28) = param_5;
      *(undefined8 *)(puVar3 + -0x20) = uVar16;
      *(undefined8 *)(puVar3 + -0x18) = uVar20;
      *(undefined1 ****)(puVar3 + -0x10) = pppuVar37;
      *(undefined **)(puVar3 + -8) = puVar38;
      pppuVar37 = (undefined1 ***)(puVar3 + -0x10);
      param_3 = (long *)0x3eb9000;
      if ((bRam0000000003eb944b & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb944b = 1;
      }
      iVar6 = auVar41._8_4_;
      if (iVar6 < 0) {
        uVar20 = 0x3d72d20;
code_r0x029cbcb4:
        uVar20 = func_0x00f78a24(uVar20);
        uVar20 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar20,0);
        func_0x00f78a24(0x3d1fcf8);
        uVar16 = func_0x00f78aec();
        uVar17 = 0x3d7b9d0;
      }
      else {
        iVar7 = *(int *)(uVar10 + 0x10);
        if (iVar7 < iVar6) {
          uVar20 = 0x3d7b9e8;
          goto code_r0x029cbcb4;
        }
        iVar28 = (int)uVar11;
        if (iVar28 < 0) {
          uVar20 = 0x3d6f480;
        }
        else {
          if (iVar6 <= iVar7 - iVar28) goto code_r0x029cbc4c;
          uVar20 = 0x3d6ddc8;
        }
        uVar20 = func_0x00f78a24(uVar20);
        uVar20 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar20,0);
        func_0x00f78a24(0x3d1fcf8);
        uVar16 = func_0x00f78aec();
        uVar17 = 0x3d7a280;
      }
      uVar17 = func_0x00f78a24(uVar17);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar16,uVar17,uVar20,0);
      uVar17 = func_0x00f78a24(0x3d5dbb0);
      puVar38 = &System_String__Substring;
      auVar41 = func_0x00f78ac0(uVar16,uVar17);
      uVar11 = (ulong)(uint)(*(int *)(auVar41._0_8_ + 0x10) - auVar41._8_4_);
      puVar3 = puVar3 + -0x30;
      param_5 = puVar22;
    } while( true );
  }
  auVar40 = func_0x00f78af4();
  lVar29 = auVar40._0_8_;
  puStack_158 = &Core_Localisation_LocalisationManager__TryGetTimeFormatOverrideString;
  uVar16 = 0x3eb5000;
  plVar21 = plVar9;
  uStack_190 = uVar35;
  puStack_188 = puVar33;
  plStack_180 = param_3;
  puStack_178 = param_5;
  uStack_170 = param_4;
  uStack_168 = uVar20;
  ppppuStack_160 = &pppuStack_140;
  if ((bRam0000000003eb57c2 & 1) == 0) {
    func_0x00f78a20(0x3d6d5c0);
    func_0x00f78a20(0x3d7a030);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c2 = 1;
  }
  plVar12 = *(long **)(lVar29 + 0x68);
  if ((plVar12 != (long *)0x0) &&
     (lVar13 = (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240)),
     lVar13 != 0)) {
    uVar16 = /*System.Globalization.DateTimeFormatInfo$$get_ShortTimePattern*/ func_0x02a93380(lVar13,0);
    plVar12 = *(long **)(lVar29 + 0x68);
    if ((plVar12 != (long *)0x0) &&
       (lVar13 = (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240)),
       lVar13 != 0)) {
      puVar33 = (undefined8 *)/*System.Globalization.DateTimeFormatInfo$$get_ShortDatePattern*/ func_0x02a932e0(lVar13,0);
      if (*(long *)(lVar29 + 0x58) != 0) {
        plVar21 = (long *)((long)&MACH_HEADER.cputype + 1);
        uVar10 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar29 + 0x58),/*STR('ar')*/ uRam0000000003d77c80,5,0);
        uVar20 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
        if ((int)uVar10 != 0) {
code_r0x016505f8:
          *auVar40._8_8_ = uVar20;
          *plVar9 = (long)puVar33;
          return uVar10;
        }
        if (*(long *)(lVar29 + 0x58) != 0) {
          uVar10 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar29 + 0x58),/*STR('ko')*/ uRam0000000003d7a030,5,0);
          uVar20 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
          if ((int)uVar10 == 0) {
            uVar20 = uVar16;
          }
          goto code_r0x016505f8;
        }
      }
    }
  }
  lVar29 = func_0x00f78af4();
  puStack_198 = &Core_Localisation_LocalisationManager__GenerateSupportedLanguageList;
  uVar10 = 0x3d3bf88;
  uStack_1d0 = uVar35;
  puStack_1c8 = puVar33;
  uStack_1c0 = uVar16;
  plStack_1a8 = plVar9;
  pppppuStack_1a0 = &ppppuStack_160;
  auStack_1b8 = auVar40;
  if ((bRam0000000003eb57c3 & 1) == 0) {
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    bRam0000000003eb57c3 = 1;
  }
  uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar11,uRam0000000003d3bf88);
  lVar29 = *(long *)(lVar29 + 0x20);
  uVar20 = 0x3d1de30;
  if (lVar29 != 0) {
    if (0 < (int)*(ulong *)(lVar29 + 0x18)) {
      uVar10 = 0;
      uVar31 = *(ulong *)(lVar29 + 0x18) & 0xffffffff;
      puVar33 = (undefined8 *)(lVar29 + 0x20);
      do {
        if (uVar31 <= uVar10) {
          uVar20 = func_0x00f78b24();
          func_0x00f78ac0(uVar20,0);
          uVar20 = 0x3d3bfa0;
          goto code_r0x01650704;
        }
        uVar20 = 0x3d3bfa0;
        if (uVar11 == 0) goto code_r0x01650704;
        plVar21 = plRam0000000003d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(uVar11,*puVar33);
        uVar10 = uVar10 + 1;
        uVar31 = (ulong)*(uint *)(lVar29 + 0x18);
        puVar33 = puVar33 + 3;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar29 + 0x18));
    }
    return uVar11;
  }
code_r0x01650704:
  auVar40 = func_0x00f78af4();
  lVar15 = auVar40._8_8_;
  lVar13 = auVar40._0_8_;
  uStack_218 = 0x3d24040;
  puStack_1d8 = &Core_Localisation_LocalisationManager__Set;
  uStack_220 = unaff_x26;
  uStack_210 = uVar35;
  puStack_208 = puVar33;
  uStack_200 = uVar20;
  uStack_1f8 = uVar10;
  lStack_1f0 = lVar29;
  uStack_1e8 = uVar11;
  ppppppuStack_1e0 = &pppppuStack_1a0;
  if ((bRam0000000003eb57c4 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d2fe40);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c4 = 1;
  }
  if (*(long *)(lVar13 + 0x70) != 0) {
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(lVar13 + 0x70),uRam0000000003d2fe40);
    if (lVar15 != 0) {
      uVar10 = (ulong)*(uint *)(lVar15 + 0x18);
      if (0 < (int)*(uint *)(lVar15 + 0x18)) {
        uVar11 = 0;
        uVar31 = uVar10 - 1;
        while( true ) {
          if (uVar10 <= uVar11) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar29 = plVar21[1];
          if (lVar29 == 0) goto code_r0x016508d8;
          uVar35 = *(undefined8 *)(*(long *)(lVar15 + 0x10) + uVar11 * 8 + 0x20);
          if (*(uint *)(lVar29 + 0x18) <= uVar11) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(lVar13 + 0x70) == 0) goto code_r0x016508d8;
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(lVar13 + 0x70),uVar35,
                          *(undefined8 *)(*(long *)(lVar29 + 0x10) + uVar11 * 8 + 0x20),
                          uRam0000000003d2fe80);
          if (uVar31 == uVar11) break;
          uVar10 = (ulong)*(uint *)(lVar15 + 0x18);
          uVar11 = uVar11 + 1;
        }
      }
      *(long *)(lVar13 + 0x58) = *plVar21;
      if (*plVar21 != 0) {
        uVar5 = /*System.String$$Equals*/ func_0x029caa48(*plVar21,/*STR('ar')*/ uRam0000000003d77c80,5,0);
        *(undefined1 *)(lVar13 + 0x61) = uVar5;
        *(undefined1 *)(lVar13 + 0x60) = uVar5;
        uVar20 = *(undefined8 *)(lVar13 + 0x58);
        uVar35 = func_0x00f78aec(/*System.Globalization.CultureInfo_TypeInfo*/ uRam0000000003d20b50);
        /*System.Globalization.CultureInfo$$.ctor*/ func_0x02a811d4(uVar35,uVar20,0);
        *(undefined8 *)(lVar13 + 0x68) = uVar35;
        puVar33 = *(undefined8 **)(lVar13 + 0x10);
        if (puVar33 == (undefined8 *)0x0) {
          return 0;
        }
        plVar21 = (long *)*plVar21;
        puStack_228 = puVar33;
        lVar29 = puVar33[0xd];
        if (lVar29 == 0) {
          ppuVar36 = &puStack_228;
          lVar13 = 1;
        }
        else {
          lVar13 = *(long *)(lVar29 + 0x18);
          if (lVar13 == 0) {
            return (ulong)puVar33;
          }
          ppuVar36 = (undefined8 **)(lVar29 + 0x20);
        }
        lVar29 = 0;
        do {
          puVar23 = ppuVar36[lVar29];
          pcVar34 = (code *)puVar23[2];
          plVar9 = (long *)puVar23[4];
          lVar15 = puVar23[5];
          if (*(short *)(lVar15 + 0x48) == -1) {
            func_0x00f78ad8(lVar15);
          }
          iVar6 = func_0x00f78a4c(lVar15);
          bVar4 = *(char *)(lVar15 + 0x4a) == '\x01';
          if (iVar6 == 0) {
            if (bVar4) {
              if (plVar9 == (long *)0x0) {
code_r0x01e480c8:
                uVar10 = (*pcVar34)(plVar21,lVar15);
              }
              else {
                if (((*(short *)(lVar15 + 0x48) == -1) || ((*(byte *)(*plVar9 + 0x115) & 1) != 0))
                   || (puVar33[3] == 0)) goto code_r0x01e47fc0;
                iVar6 = func_0x00f78a44(lVar15);
                iVar7 = func_0x00f78ec0(lVar15);
                if (iVar6 == 0) {
                  uVar1 = *(ushort *)(lVar15 + 0x48);
                  if (iVar7 == 0) {
                    lVar15 = *plVar9 + (ulong)uVar1 * 0x10;
                    uVar10 = (**(code **)(lVar15 + 0x138))
                                       (plVar9,plVar21,*(undefined8 *)(lVar15 + 0x140));
                    goto code_r0x01e480d4;
                  }
                  lVar15 = func_0x00f78a48(lVar15);
                  lVar25 = *plVar9;
                  uVar10 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar10 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == lVar15) {
                        puVar23 = (undefined8 *)
                                  (lVar25 + (long)(int)(*piVar26 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x01e48260;
                      }
                      piVar26 = piVar26 + 4;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  puVar23 = (undefined8 *)func_0x00fac1f0(plVar9,lVar15,(ulong)uVar1);
code_r0x01e48260:
                  pcVar34 = (code *)*puVar23;
                  puVar23 = (undefined8 *)puVar23[1];
                }
                else {
                  if (iVar7 == 0) {
                    uVar35 = *(undefined8 *)
                              (*plVar9 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar25 = *plVar9;
                    uVar10 = (ulong)*(ushort *)(lVar25 + 0x12a);
                    if (uVar10 != 0) {
                      piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar15 + 0x18)) {
                          lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar15 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e48238;
                        }
                        piVar26 = piVar26 + 4;
                        uVar10 = uVar10 - 1;
                      } while (uVar10 != 0);
                    }
                    lVar25 = func_0x00fac1f0(plVar9);
code_r0x01e48238:
                    uVar35 = *(undefined8 *)(lVar25 + 8);
                  }
                  puVar23 = (undefined8 *)func_0x00f78acc(uVar35,lVar15);
                  pcVar34 = (code *)*puVar23;
                }
                uVar10 = (*pcVar34)(plVar9,plVar21,puVar23);
              }
            }
            else {
              if ((*(short *)(lVar15 + 0x48) == -1) || (puVar33[3] == 0)) goto code_r0x01e480c8;
              iVar6 = func_0x00f78a44(lVar15);
              iVar7 = func_0x00f78ec0(lVar15);
              if (iVar6 == 0) {
                uVar1 = *(ushort *)(lVar15 + 0x48);
                if (iVar7 == 0) {
                  lVar15 = *plVar21 + (ulong)uVar1 * 0x10;
                  uVar10 = (**(code **)(lVar15 + 0x138))(plVar21,*(undefined8 *)(lVar15 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar15 = func_0x00f78a48(lVar15);
                lVar25 = *plVar21;
                uVar10 = (ulong)*(ushort *)(lVar25 + 0x12a);
                if (uVar10 != 0) {
                  piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == lVar15) {
                      puVar23 = (undefined8 *)
                                (lVar25 + (long)(int)(*piVar26 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e481fc;
                    }
                    piVar26 = piVar26 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                puVar23 = (undefined8 *)func_0x00fac1f0(plVar21,lVar15,(ulong)uVar1);
code_r0x01e481fc:
                pcVar34 = (code *)*puVar23;
                puVar23 = (undefined8 *)puVar23[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar35 = *(undefined8 *)
                            (*plVar21 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar25 = *plVar21;
                  uVar10 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar10 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar15 + 0x18)) {
                        lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e481d4;
                      }
                      piVar26 = piVar26 + 4;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  lVar25 = func_0x00fac1f0(plVar21);
code_r0x01e481d4:
                  uVar35 = *(undefined8 *)(lVar25 + 8);
                }
                puVar23 = (undefined8 *)func_0x00f78acc(uVar35,lVar15);
                pcVar34 = (code *)*puVar23;
              }
              uVar10 = (*pcVar34)(plVar21,puVar23);
            }
          }
          else {
            if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
            uVar10 = (*pcVar34)(plVar9,plVar21,lVar15);
          }
code_r0x01e480d4:
          lVar29 = lVar29 + 1;
          if (lVar29 == lVar13) {
            return uVar10;
          }
        } while( true );
      }
    }
  }
code_r0x016508d8:
  auVar40 = func_0x00f78af4();
  uVar11 = auVar40._0_8_;
  puStack_228 = (undefined8 *)
                &Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings;
  uVar10 = uVar11;
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    uVar10 = func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((*(long *)(uVar11 + 0x38) != 0) &&
     (lVar29 = *(long *)(*(long *)(uVar11 + 0x38) + 0x20), lVar29 != 0)) {
    uVar24 = *(uint *)(lVar29 + 0x18);
    if (0 < (int)uVar24) {
      uVar8 = 0;
      do {
        if (uVar24 <= uVar8) goto code_r0x01650b78;
        plVar9 = *(long **)(uVar11 + 0x40);
        if (plVar9 == (long *)0x0) goto code_r0x01650b74;
        lVar13 = lVar29 + (long)(int)uVar8 * 0x10;
        lVar15 = *(long *)(lVar13 + 0x20);
        lVar13 = *(long *)(lVar13 + 0x28);
        if (lVar15 != 0) {
          uVar10 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar9 + 0x40));
          if (uVar10 == 0) goto code_r0x01650b80;
        }
        if (*(uint *)(plVar9 + 3) <= uVar8) goto code_r0x01650b78;
        plVar9[(long)(int)uVar8 + 4] = lVar15;
        if (lVar13 == 0) goto code_r0x01650b74;
        uVar24 = *(uint *)(lVar13 + 0x18);
        if (0 < (int)uVar24) {
          uVar32 = 0;
          do {
            if (uVar24 <= uVar32) goto code_r0x01650b78;
            lVar25 = lVar13 + (long)(int)uVar32 * 0x10;
            lVar14 = *(long *)(lVar25 + 0x20);
            if (lVar14 == 0) goto code_r0x01650b74;
            lVar25 = *(long *)(lVar25 + 0x28);
            uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar14,auVar40._8_8_,5,0);
            if ((int)uVar10 != 0) {
              if ((lVar25 == 0) || (*(long *)(lVar25 + 0x138) == 0)) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar25 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar25 + 0x138) == 0) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar25 + 0x138),lVar15,uRam0000000003d3c138);
              plVar9 = *(long **)(uVar11 + 0x40);
              if (plVar9 == (long *)0x0) goto code_r0x01650b74;
              uVar10 = func_0x00f78adc(lVar25,*(undefined8 *)(*plVar9 + 0x40));
              if (uVar10 == 0) goto code_r0x01650b80;
              if (*(uint *)(plVar9 + 3) <= uVar8) goto code_r0x01650b78;
              plVar9[(long)(int)uVar8 + 4] = lVar25;
            }
            uVar32 = uVar32 + 1;
            uVar24 = *(uint *)(lVar13 + 0x18);
          } while ((int)uVar32 < (int)uVar24);
        }
        uVar8 = uVar8 + 1;
        uVar24 = *(uint *)(lVar29 + 0x18);
      } while ((int)uVar8 < (int)uVar24);
    }
    if ((*(long *)(uVar11 + 0x38) != 0) &&
       (lVar29 = *(long *)(*(long *)(uVar11 + 0x38) + 0x28), lVar29 != 0)) {
      uVar24 = *(uint *)(lVar29 + 0x18);
      if (0 < (int)uVar24) {
        uVar8 = 0;
        do {
          if (uVar24 <= uVar8) goto code_r0x01650b78;
          plVar9 = *(long **)(uVar11 + 0x48);
          if (plVar9 == (long *)0x0) goto code_r0x01650b74;
          lVar13 = lVar29 + (long)(int)uVar8 * 0x10;
          lVar15 = *(long *)(lVar13 + 0x20);
          lVar13 = *(long *)(lVar13 + 0x28);
          if (lVar15 != 0) {
            uVar10 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar9 + 0x40));
            if (uVar10 == 0) goto code_r0x01650b80;
          }
          if (*(uint *)(plVar9 + 3) <= uVar8) goto code_r0x01650b78;
          plVar9[(long)(int)uVar8 + 4] = lVar15;
          if (lVar13 == 0) goto code_r0x01650b74;
          uVar24 = *(uint *)(lVar13 + 0x18);
          if (0 < (int)uVar24) {
            uVar32 = 0;
            do {
              if (uVar24 <= uVar32) goto code_r0x01650b78;
              lVar15 = lVar13 + (long)(int)uVar32 * 0x10;
              lVar25 = *(long *)(lVar15 + 0x20);
              if (lVar25 == 0) goto code_r0x01650b74;
              lVar15 = *(long *)(lVar15 + 0x28);
              uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar25,auVar40._8_8_,5,0);
              if ((int)uVar10 != 0) {
                plVar9 = *(long **)(uVar11 + 0x48);
                if (plVar9 == (long *)0x0) goto code_r0x01650b74;
                if (lVar15 != 0) {
                  uVar10 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar9 + 0x40));
                  if (uVar10 == 0) goto code_r0x01650b80;
                }
                if (*(uint *)(plVar9 + 3) <= uVar8) goto code_r0x01650b78;
                plVar9[(long)(int)uVar8 + 4] = lVar15;
              }
              uVar32 = uVar32 + 1;
              uVar24 = *(uint *)(lVar13 + 0x18);
            } while ((int)uVar32 < (int)uVar24);
          }
          uVar8 = uVar8 + 1;
          uVar24 = *(uint *)(lVar29 + 0x18);
        } while ((int)uVar8 < (int)uVar24);
      }
      return uVar10;
    }
  }
code_r0x01650b74:
  func_0x00f78af4();
code_r0x01650b78:
  uVar35 = func_0x00f78b24();
code_r0x01650b84:
  uVar10 = func_0x00f78ac0(uVar35,0);
  return uVar10;
code_r0x029cc070:
  uVar20 = func_0x00f78b24();
  func_0x00f78ac0(uVar20,0);
  puVar33 = puVar23;
code_r0x029cc07c:
  auVar41._8_8_ = lVar29;
  auVar41._0_8_ = uVar31;
  puVar38 = &System_String__TrimStart;
  auVar40 = func_0x00f78af4();
  uVar18 = auVar40._0_8_;
  if ((auVar40._8_8_ == 0) || (*(long *)(auVar40._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  puVar23 = (undefined8 *)0x0;
  puVar3 = puVar3 + -0x40;
  uVar10 = uVar19;
  auVar2 = auVar40;
  goto System_String__TrimHelper;
code_r0x01650b80:
  uVar35 = func_0x00f78b14();
  goto code_r0x01650b84;
code_r0x029cbc4c:
  if (iVar28 == 0) {
    uVar10 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar6 != 0) || (iVar7 != iVar28)) {
    uVar20 = *(undefined8 *)(puVar3 + -0x10);
    uVar39 = *(undefined8 *)(puVar3 + -8);
    uVar16 = *(undefined8 *)(puVar3 + -0x20);
    uVar10 = *(ulong *)(puVar3 + -0x18);
    uVar17 = *(undefined8 *)(puVar3 + -0x30);
    uVar27 = *(undefined8 *)(puVar3 + -0x28);
System_String__InternalSubString:
    uVar31 = auVar41._0_8_;
    auVar2._8_8_ = auVar41._8_8_;
    auVar2._0_8_ = uVar10;
    *(undefined8 *)(puVar3 + -0x30) = uVar17;
    *(undefined8 *)(puVar3 + -0x28) = uVar27;
    *(undefined8 *)(puVar3 + -0x20) = uVar16;
    *(ulong *)(puVar3 + -0x18) = uVar10;
    *(undefined8 *)(puVar3 + -0x10) = uVar20;
    *(undefined8 *)(puVar3 + -8) = uVar39;
    puVar22 = puVar3 + -0x10;
    uVar18 = func_0x00f834ac(uVar11);
    if (uVar18 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar18 + 0x14,uVar31 + (long)auVar41._8_4_ * 2 + 0x14,(int)uVar11 << 1,0);
      return uVar18;
    }
    puVar38 = &System_String__Trim;
    auVar40 = func_0x00f78af4();
    uVar18 = auVar40._0_8_;
    if ((auVar40._8_8_ != 0) && (*(long *)(auVar40._8_8_ + 0x18) != 0)) {
      puVar23 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      puVar3 = puVar3 + -0x30;
      auVar2 = auVar40;
System_String__TrimHelper:
      lVar29 = auVar2._8_8_;
      uVar19 = auVar2._0_8_;
      *(undefined8 *)(puVar3 + -0x40) = uVar35;
      *(undefined8 **)(puVar3 + -0x38) = puVar33;
      *(undefined1 (*) [16])(puVar3 + -0x30) = auVar41;
      *(ulong *)(puVar3 + -0x20) = uVar11;
      *(ulong *)(puVar3 + -0x18) = uVar10;
      *(undefined1 **)(puVar3 + -0x10) = puVar22;
      *(undefined **)(puVar3 + -8) = puVar38;
      puVar22 = puVar3 + -0x10;
      uVar24 = *(uint *)(uVar19 + 0x10);
      uVar11 = (ulong)uVar24;
      if ((int)puVar23 == 1) {
        uVar31 = 0;
        puVar23 = puVar33;
code_r0x029cbfd8:
        do {
          uVar24 = (int)uVar11 - 1;
          uVar11 = (ulong)uVar24;
          if ((int)uVar24 < (int)uVar31) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar19,uVar11);
          puVar33 = puVar23;
          if (lVar29 == 0) goto code_r0x029cc07c;
          iVar6 = *(int *)(lVar29 + 0x18);
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar28 = 0;
            do {
              if (iVar6 == iVar28) goto code_r0x029cc070;
              iVar7 = iVar28;
            } while ((*(ushort *)(lVar29 + (long)iVar28 * 2 + 0x20) != uVar8) &&
                    (iVar28 = iVar28 + 1, iVar7 = iVar6, iVar6 != iVar28));
          }
        } while (iVar7 != iVar6);
      }
      else {
        if ((int)uVar24 < 1) {
          uVar31 = 0;
        }
        else {
          uVar31 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar19,uVar31);
            puVar33 = puVar23;
            if (lVar29 == 0) goto code_r0x029cc07c;
            iVar6 = *(int *)(lVar29 + 0x18);
            if (iVar6 < 1) {
              iVar7 = 0;
            }
            else {
              iVar28 = 0;
              do {
                if (iVar6 == iVar28) goto code_r0x029cc070;
                iVar7 = iVar28;
              } while ((*(ushort *)(lVar29 + (long)iVar28 * 2 + 0x20) != uVar8) &&
                      (iVar28 = iVar28 + 1, iVar7 = iVar6, iVar6 != iVar28));
            }
          } while ((iVar7 != iVar6) &&
                  (uVar8 = (int)uVar31 + 1, uVar31 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(uVar19 + 0x10)));
        }
        if ((int)puVar23 != 0) {
          uVar11 = (ulong)*(uint *)(uVar19 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar24 = uVar24 - 1;
      }
      uVar20 = *(undefined8 *)(puVar3 + -0x10);
      uVar39 = *(undefined8 *)(puVar3 + -8);
      uVar16 = *(undefined8 *)(puVar3 + -0x20);
      uVar27 = *(undefined8 *)(puVar3 + -0x18);
      uVar17 = *(undefined8 *)(puVar3 + -0x30);
      uVar30 = *(undefined8 *)(puVar3 + -0x28);
      uVar35 = *(undefined8 *)(puVar3 + -0x40);
      puVar33 = *(undefined8 **)(puVar3 + -0x38);
      uVar18 = uVar19;
      goto System_String__CreateTrimmedString;
    }
    iVar6 = 2;
    puVar3 = puVar3 + -0x30;
    goto System_String__TrimHelper;
  }
  return uVar10;
code_r0x029cc094:
  iVar6 = 0;
  puVar3 = puVar3 + -0x40;
System_String__TrimHelper:
  *(undefined8 *)(puVar3 + -0x40) = uVar35;
  *(undefined8 **)(puVar3 + -0x38) = puVar33;
  *(ulong *)(puVar3 + -0x30) = uVar31;
  *(long *)(puVar3 + -0x28) = auVar2._8_8_;
  *(ulong *)(puVar3 + -0x20) = uVar11;
  *(long *)(puVar3 + -0x18) = auVar2._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar22;
  *(undefined **)(puVar3 + -8) = puVar38;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar24 = *(uint *)(uVar18 + 0x10);
  if (iVar6 == 1) {
    uVar31 = 0;
  }
  else {
    if ((int)uVar24 < 1) {
      uVar31 = 0;
    }
    else {
      uVar31 = 0;
      do {
        uVar35 = /*System.String$$get_Chars*/ func_0x029c5420(uVar18,uVar31);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar35,0);
        if ((uVar10 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar18,uVar31);
          break;
        }
        uVar8 = (int)uVar31 + 1;
        uVar31 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(uVar18 + 0x10));
    }
    if (iVar6 == 0) {
      uVar24 = uVar24 - 1;
      goto code_r0x029cbf04;
    }
    uVar24 = *(uint *)(uVar18 + 0x10);
  }
  do {
    uVar24 = uVar24 - 1;
    if ((int)uVar24 < (int)uVar31) goto code_r0x029cbf04;
    uVar35 = /*System.String$$get_Chars*/ func_0x029c5420(uVar18,uVar24);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar35,0);
  } while ((uVar10 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar18,uVar31);
code_r0x029cbf04:
  uVar20 = *(undefined8 *)(puVar3 + -0x10);
  uVar39 = *(undefined8 *)(puVar3 + -8);
  uVar16 = *(undefined8 *)(puVar3 + -0x20);
  uVar27 = *(undefined8 *)(puVar3 + -0x18);
  uVar17 = *(undefined8 *)(puVar3 + -0x30);
  uVar30 = *(undefined8 *)(puVar3 + -0x28);
  uVar35 = *(undefined8 *)(puVar3 + -0x40);
  puVar33 = *(undefined8 **)(puVar3 + -0x38);
System_String__CreateTrimmedString:
  auVar41._8_8_ = uVar31;
  auVar41._0_8_ = uVar18;
  *(undefined8 *)(puVar3 + -0x30) = uVar17;
  *(undefined8 *)(puVar3 + -0x28) = uVar30;
  *(undefined8 *)(puVar3 + -0x20) = uVar16;
  *(undefined8 *)(puVar3 + -0x18) = uVar27;
  *(undefined8 *)(puVar3 + -0x10) = uVar20;
  *(undefined8 *)(puVar3 + -8) = uVar39;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar24 = (uVar24 - (int)uVar31) + 1;
  uVar11 = (ulong)uVar24;
  if (uVar24 != *(uint *)(uVar18 + 0x10)) {
    if (uVar24 != 0) {
      uVar20 = *(undefined8 *)(puVar3 + -0x10);
      uVar39 = *(undefined8 *)(puVar3 + -8);
      uVar16 = *(undefined8 *)(puVar3 + -0x20);
      uVar10 = *(ulong *)(puVar3 + -0x18);
      uVar17 = *(undefined8 *)(puVar3 + -0x30);
      uVar27 = *(undefined8 *)(puVar3 + -0x28);
      goto System_String__InternalSubString;
    }
    uVar18 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return uVar18;
}



// ============================================================
// RVA: 0x14ac21c | Atlas.Networking.NetworkLobby.OnMatchLeft
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14ac278 | Atlas.Networking.NetworkLobby..ctor
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14ac558 | Atlas.Networking.NetworkLobby.<OnGroupLeaderChanged>b__60_0
// ============================================================
// [DECOMPILE_FAILED]

