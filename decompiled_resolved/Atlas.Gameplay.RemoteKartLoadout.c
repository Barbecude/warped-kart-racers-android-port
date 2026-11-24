// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.RemoteKartLoadout

// ============================================================
// RVA: 0x14e0630 | Atlas.Gameplay.RemoteKartLoadout.FromNetworkLobbyPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x014e0a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fe374) */
/* WARNING: Removing unreachable block (ram,0x014fe3e4) */
/* WARNING: Removing unreachable block (ram,0x014fe384) */
/* WARNING: Removing unreachable block (ram,0x014e0a18) */
/* WARNING: Removing unreachable block (ram,0x014e0a1c) */
/* WARNING: Removing unreachable block (ram,0x015c31c4) */
/* WARNING: Removing unreachable block (ram,0x015c321c) */
/* WARNING: Removing unreachable block (ram,0x015c3278) */
/* WARNING: Removing unreachable block (ram,0x015c3280) */
/* WARNING: Removing unreachable block (ram,0x015c3288) */
/* WARNING: Removing unreachable block (ram,0x015c3294) */
/* WARNING: Removing unreachable block (ram,0x015c329c) */
/* WARNING: Removing unreachable block (ram,0x015c32b4) */
/* WARNING: Removing unreachable block (ram,0x015c32bc) */
/* WARNING: Removing unreachable block (ram,0x015c32c0) */
/* WARNING: Removing unreachable block (ram,0x015c32d4) */
/* WARNING: Removing unreachable block (ram,0x015c32dc) */
/* WARNING: Removing unreachable block (ram,0x015c32e4) */
/* WARNING: Removing unreachable block (ram,0x015c3310) */
/* WARNING: Removing unreachable block (ram,0x015c3318) */
/* WARNING: Removing unreachable block (ram,0x015c3320) */
/* WARNING: Removing unreachable block (ram,0x015c3344) */
/* WARNING: Removing unreachable block (ram,0x015c334c) */
/* WARNING: Removing unreachable block (ram,0x015c3350) */
/* WARNING: Removing unreachable block (ram,0x015c3364) */
/* WARNING: Removing unreachable block (ram,0x015c3368) */
/* WARNING: Removing unreachable block (ram,0x015c337c) */
/* WARNING: Removing unreachable block (ram,0x015c33a0) */
/* WARNING: Removing unreachable block (ram,0x015c33a8) */
/* WARNING: Removing unreachable block (ram,0x015c33f4) */
/* WARNING: Removing unreachable block (ram,0x015c3404) */
/* WARNING: Removing unreachable block (ram,0x015c3410) */
/* WARNING: Removing unreachable block (ram,0x015c3418) */
/* WARNING: Removing unreachable block (ram,0x015c3424) */
/* WARNING: Removing unreachable block (ram,0x015c3444) */
/* WARNING: Removing unreachable block (ram,0x015c3458) */
/* WARNING: Removing unreachable block (ram,0x015c3460) */
/* WARNING: Removing unreachable block (ram,0x015c3478) */
/* WARNING: Removing unreachable block (ram,0x015c3498) */
/* WARNING: Removing unreachable block (ram,0x015c34a0) */
/* WARNING: Removing unreachable block (ram,0x015c34a4) */
/* WARNING: Removing unreachable block (ram,0x015c34a8) */
/* WARNING: Removing unreachable block (ram,0x015c34ac) */
/* WARNING: Removing unreachable block (ram,0x015c34b0) */
/* WARNING: Removing unreachable block (ram,0x015c34b4) */
/* WARNING: Removing unreachable block (ram,0x015c34bc) */
/* WARNING: Removing unreachable block (ram,0x015c34c0) */
/* WARNING: Removing unreachable block (ram,0x015c34c8) */
/* WARNING: Removing unreachable block (ram,0x015c3508) */
/* WARNING: Removing unreachable block (ram,0x015c353c) */
/* WARNING: Removing unreachable block (ram,0x015c3554) */
/* WARNING: Removing unreachable block (ram,0x015c3580) */
/* WARNING: Removing unreachable block (ram,0x015c3598) */
/* WARNING: Removing unreachable block (ram,0x015c35c4) */
/* WARNING: Removing unreachable block (ram,0x015c35dc) */
/* WARNING: Removing unreachable block (ram,0x015c3608) */
/* WARNING: Removing unreachable block (ram,0x015c3620) */
/* WARNING: Removing unreachable block (ram,0x015c3650) */
/* WARNING: Removing unreachable block (ram,0x015c3680) */
/* WARNING: Removing unreachable block (ram,0x015c3694) */
/* WARNING: Removing unreachable block (ram,0x015c36a0) */
/* WARNING: Removing unreachable block (ram,0x015c36a8) */
/* WARNING: Removing unreachable block (ram,0x015c36b0) */
/* WARNING: Removing unreachable block (ram,0x015c36cc) */
/* WARNING: Removing unreachable block (ram,0x015c36d8) */
/* WARNING: Removing unreachable block (ram,0x015c36e0) */
/* WARNING: Removing unreachable block (ram,0x015c36f0) */
/* WARNING: Removing unreachable block (ram,0x015c36f8) */
/* WARNING: Removing unreachable block (ram,0x015c36fc) */
/* WARNING: Removing unreachable block (ram,0x03250f64) */
/* WARNING: Removing unreachable block (ram,0x03250f80) */
/* WARNING: Removing unreachable block (ram,0x03250f94) */
/* WARNING: Removing unreachable block (ram,0x015c3628) */
/* WARNING: Removing unreachable block (ram,0x0145b93c) */
/* WARNING: Removing unreachable block (ram,0x0145b96c) */
/* WARNING: Removing unreachable block (ram,0x0145b9b0) */
/* WARNING: Removing unreachable block (ram,0x0145b9b4) */
/* WARNING: Removing unreachable block (ram,0x0145b9cc) */
/* WARNING: Removing unreachable block (ram,0x0145bac4) */
/* WARNING: Removing unreachable block (ram,0x0145b9d8) */
/* WARNING: Removing unreachable block (ram,0x0145b9ec) */
/* WARNING: Removing unreachable block (ram,0x0145b9f4) */
/* WARNING: Removing unreachable block (ram,0x0145b9fc) */
/* WARNING: Removing unreachable block (ram,0x0145ba04) */
/* WARNING: Removing unreachable block (ram,0x0145bae0) */
/* WARNING: Removing unreachable block (ram,0x0145bb04) */
/* WARNING: Removing unreachable block (ram,0x0145bb18) */
/* WARNING: Removing unreachable block (ram,0x0145bb88) */
/* WARNING: Removing unreachable block (ram,0x0145bb20) */
/* WARNING: Removing unreachable block (ram,0x0145bb38) */
/* WARNING: Removing unreachable block (ram,0x0145bb98) */
/* WARNING: Removing unreachable block (ram,0x0145bba4) */
/* WARNING: Removing unreachable block (ram,0x0145bb40) */
/* WARNING: Removing unreachable block (ram,0x0145bbac) */
/* WARNING: Removing unreachable block (ram,0x0145bbd4) */
/* WARNING: Removing unreachable block (ram,0x0145bbe8) */
/* WARNING: Removing unreachable block (ram,0x0145bbec) */
/* WARNING: Removing unreachable block (ram,0x0145bc6c) */
/* WARNING: Removing unreachable block (ram,0x0145bbfc) */
/* WARNING: Removing unreachable block (ram,0x0145bc14) */
/* WARNING: Removing unreachable block (ram,0x0145bc1c) */
/* WARNING: Removing unreachable block (ram,0x0145bc24) */
/* WARNING: Removing unreachable block (ram,0x0145bc2c) */
/* WARNING: Removing unreachable block (ram,0x0145bc7c) */
/* WARNING: Removing unreachable block (ram,0x0145bcb0) */
/* WARNING: Removing unreachable block (ram,0x0145bcf4) */
/* WARNING: Removing unreachable block (ram,0x0145bcf8) */
/* WARNING: Removing unreachable block (ram,0x0145bd10) */
/* WARNING: Removing unreachable block (ram,0x0145be08) */
/* WARNING: Removing unreachable block (ram,0x0145bd1c) */
/* WARNING: Removing unreachable block (ram,0x0145bd30) */
/* WARNING: Removing unreachable block (ram,0x0145bd38) */
/* WARNING: Removing unreachable block (ram,0x0145bd40) */
/* WARNING: Removing unreachable block (ram,0x0145bd48) */
/* WARNING: Removing unreachable block (ram,0x0145be24) */
/* WARNING: Removing unreachable block (ram,0x0145be58) */
/* WARNING: Removing unreachable block (ram,0x0145be9c) */
/* WARNING: Removing unreachable block (ram,0x0145bea0) */
/* WARNING: Removing unreachable block (ram,0x0145beb8) */
/* WARNING: Removing unreachable block (ram,0x0145bfb0) */
/* WARNING: Removing unreachable block (ram,0x0145bec4) */
/* WARNING: Removing unreachable block (ram,0x0145bed8) */
/* WARNING: Removing unreachable block (ram,0x0145bee0) */
/* WARNING: Removing unreachable block (ram,0x0145bee8) */
/* WARNING: Removing unreachable block (ram,0x0145bef0) */
/* WARNING: Removing unreachable block (ram,0x0145bfcc) */
/* WARNING: Removing unreachable block (ram,0x0145bffc) */
/* WARNING: Removing unreachable block (ram,0x0145c010) */
/* WARNING: Removing unreachable block (ram,0x0145c014) */
/* WARNING: Removing unreachable block (ram,0x0145c024) */
/* WARNING: Removing unreachable block (ram,0x0145c034) */
/* WARNING: Removing unreachable block (ram,0x0145c03c) */
/* WARNING: Removing unreachable block (ram,0x0145c048) */
/* WARNING: Removing unreachable block (ram,0x0145c054) */
/* WARNING: Removing unreachable block (ram,0x0145c068) */
/* WARNING: Removing unreachable block (ram,0x0145c070) */
/* WARNING: Removing unreachable block (ram,0x0145c078) */
/* WARNING: Removing unreachable block (ram,0x0145c080) */
/* WARNING: Removing unreachable block (ram,0x0145c084) */
/* WARNING: Removing unreachable block (ram,0x0145c088) */
/* WARNING: Removing unreachable block (ram,0x0145c08c) */
/* WARNING: Removing unreachable block (ram,0x0145c090) */
/* WARNING: Removing unreachable block (ram,0x0145c094) */
/* WARNING: Removing unreachable block (ram,0x0145c09c) */
/* WARNING: Removing unreachable block (ram,0x0145c0a8) */
/* WARNING: Removing unreachable block (ram,0x0145c0b0) */
/* WARNING: Removing unreachable block (ram,0x0145c0bc) */
/* WARNING: Removing unreachable block (ram,0x0145c0c0) */
/* WARNING: Removing unreachable block (ram,0x0145c0c4) */
/* WARNING: Removing unreachable block (ram,0x0145c0c8) */
/* WARNING: Removing unreachable block (ram,0x0145c138) */
/* WARNING: Removing unreachable block (ram,0x0145c148) */
/* WARNING: Removing unreachable block (ram,0x0145c150) */
/* WARNING: Removing unreachable block (ram,0x0145c158) */
/* WARNING: Removing unreachable block (ram,0x0145c160) */
/* WARNING: Removing unreachable block (ram,0x0145c164) */
/* WARNING: Removing unreachable block (ram,0x0145c0e0) */
/* WARNING: Removing unreachable block (ram,0x0145c18c) */
/* WARNING: Removing unreachable block (ram,0x0145c19c) */
/* WARNING: Removing unreachable block (ram,0x0145c1a4) */
/* WARNING: Removing unreachable block (ram,0x0145c1a8) */
/* WARNING: Removing unreachable block (ram,0x0145c1ac) */
/* WARNING: Removing unreachable block (ram,0x0145c0e8) */
/* WARNING: Removing unreachable block (ram,0x0145c0ec) */
/* WARNING: Removing unreachable block (ram,0x0145c0fc) */
/* WARNING: Removing unreachable block (ram,0x0145c104) */
/* WARNING: Removing unreachable block (ram,0x0145c108) */
/* WARNING: Removing unreachable block (ram,0x0145c21c) */
/* WARNING: Removing unreachable block (ram,0x0145c24c) */
/* WARNING: Removing unreachable block (ram,0x0145c26c) */
/* WARNING: Removing unreachable block (ram,0x0145c280) */
/* WARNING: Removing unreachable block (ram,0x0145c288) */
/* WARNING: Removing unreachable block (ram,0x0145c28c) */
/* WARNING: Removing unreachable block (ram,0x0145c2a4) */
/* WARNING: Removing unreachable block (ram,0x0145c2ac) */
/* WARNING: Removing unreachable block (ram,0x0145c2b4) */
/* WARNING: Removing unreachable block (ram,0x0145c2bc) */
/* WARNING: Removing unreachable block (ram,0x0145c2c0) */
/* WARNING: Removing unreachable block (ram,0x0145c2c8) */
/* WARNING: Removing unreachable block (ram,0x0145c2cc) */
/* WARNING: Removing unreachable block (ram,0x0145c2dc) */
/* WARNING: Removing unreachable block (ram,0x0145c2e0) */
/* WARNING: Removing unreachable block (ram,0x0145c2e8) */
/* WARNING: Removing unreachable block (ram,0x0145c2ec) */
/* WARNING: Removing unreachable block (ram,0x0145c10c) */
/* WARNING: Removing unreachable block (ram,0x0145c1d4) */
/* WARNING: Removing unreachable block (ram,0x0145c1e0) */
/* WARNING: Removing unreachable block (ram,0x0145c1ec) */
/* WARNING: Removing unreachable block (ram,0x0145c1f4) */
/* WARNING: Removing unreachable block (ram,0x0145c1fc) */
/* WARNING: Removing unreachable block (ram,0x0145c208) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145bc30) */
/* WARNING: Removing unreachable block (ram,0x0145bb48) */
/* WARNING: Removing unreachable block (ram,0x014fe2a8) */
/* WARNING: Removing unreachable block (ram,0x014fe2f8) */
/* WARNING: Removing unreachable block (ram,0x014fe330) */
/* WARNING: Removing unreachable block (ram,0x014fe3a0) */
/* WARNING: Removing unreachable block (ram,0x014fe3a4) */
/* WARNING: Removing unreachable block (ram,0x014fe334) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x014fe428) */
/* WARNING: Removing unreachable block (ram,0x014fe470) */
/* WARNING: Removing unreachable block (ram,0x014fe484) */
/* WARNING: Removing unreachable block (ram,0x014fe48c) */
/* WARNING: Removing unreachable block (ram,0x014fe494) */
/* WARNING: Removing unreachable block (ram,0x014fe49c) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe5a4) */
/* WARNING: Removing unreachable block (ram,0x014fe5e8) */
/* WARNING: Removing unreachable block (ram,0x014fe650) */
/* WARNING: Removing unreachable block (ram,0x014fe664) */
/* WARNING: Removing unreachable block (ram,0x014fe66c) */
/* WARNING: Removing unreachable block (ram,0x014fe670) */
/* WARNING: Removing unreachable block (ram,0x014fe6a4) */
/* WARNING: Removing unreachable block (ram,0x014fe6b8) */
/* WARNING: Removing unreachable block (ram,0x014fe6c0) */
/* WARNING: Removing unreachable block (ram,0x014fe6c8) */
/* WARNING: Removing unreachable block (ram,0x014fe7e4) */
/* WARNING: Removing unreachable block (ram,0x014fe6e0) */
/* WARNING: Removing unreachable block (ram,0x014fe6e4) */
/* WARNING: Removing unreachable block (ram,0x014fe720) */
/* WARNING: Removing unreachable block (ram,0x014fe724) */
/* WARNING: Removing unreachable block (ram,0x014fe7ec) */
/* WARNING: Removing unreachable block (ram,0x014fe800) */
/* WARNING: Removing unreachable block (ram,0x014fe808) */
/* WARNING: Removing unreachable block (ram,0x014fe820) */
/* WARNING: Removing unreachable block (ram,0x014fe828) */
/* WARNING: Removing unreachable block (ram,0x014fe84c) */
/* WARNING: Removing unreachable block (ram,0x014fe85c) */
/* WARNING: Removing unreachable block (ram,0x014fe844) */
/* WARNING: Removing unreachable block (ram,0x014fe860) */
/* WARNING: Removing unreachable block (ram,0x014fe864) */
/* WARNING: Removing unreachable block (ram,0x014fe898) */
/* WARNING: Removing unreachable block (ram,0x014fe8a0) */
/* WARNING: Removing unreachable block (ram,0x014fe8f8) */
/* WARNING: Removing unreachable block (ram,0x014fe8a8) */
/* WARNING: Removing unreachable block (ram,0x014fe8d4) */
/* WARNING: Removing unreachable block (ram,0x014fe8b8) */
/* WARNING: Removing unreachable block (ram,0x014fe86c) */
/* WARNING: Removing unreachable block (ram,0x014fe890) */
/* WARNING: Removing unreachable block (ram,0x014fe8dc) */
/* WARNING: Removing unreachable block (ram,0x014fe874) */
/* WARNING: Removing unreachable block (ram,0x014fe888) */
/* WARNING: Removing unreachable block (ram,0x014fe878) */
/* WARNING: Removing unreachable block (ram,0x014fe734) */
/* WARNING: Removing unreachable block (ram,0x014fe8f0) */
/* WARNING: Removing unreachable block (ram,0x014fe73c) */
/* WARNING: Removing unreachable block (ram,0x014fe74c) */
/* WARNING: Removing unreachable block (ram,0x014fe754) */
/* WARNING: Removing unreachable block (ram,0x014fe75c) */
/* WARNING: Removing unreachable block (ram,0x014fe774) */
/* WARNING: Removing unreachable block (ram,0x014fe784) */
/* WARNING: Removing unreachable block (ram,0x014fe788) */
/* WARNING: Removing unreachable block (ram,0x014fe78c) */
/* WARNING: Removing unreachable block (ram,0x014fe8fc) */
/* WARNING: Removing unreachable block (ram,0x014fe900) */
/* WARNING: Removing unreachable block (ram,0x014fe7a8) */
/* WARNING: Removing unreachable block (ram,0x014fe680) */
/* WARNING: Removing unreachable block (ram,0x014fe684) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe584) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x014fe588) */
/* WARNING: Removing unreachable block (ram,0x015c32ec) */
/* WARNING: Removing unreachable block (ram,0x014fe40c) */
/* WARNING: Recovered jumptable eliminated as dead code */

long * Atlas_Gameplay_RemoteKartLoadout__FromNetworkLobbyPlayer(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if ((bRam0000000003eb4bda & 1) == 0) {
    func_0x00f78a20(0x3d3bb50);
    func_0x00f78a20(0x3d3bb58);
    func_0x00f78a20(0x3d3bb48);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d3b4e0);
    func_0x00f78a20(0x3d1dd40);
    bRam0000000003eb4bda = 1;
  }
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    lVar6 = func_0x00f78aec(/*System.Collections.Generic.List<RemoteKartLoadout>_TypeInfo*/ uRam0000000003d1dd40);
    /*System.Collections.Generic.List<RemoteKartLoadout>$$.ctor*/ func_0x0244a37c(lVar6,uVar1,uRam0000000003d3bb48);
    uVar9 = (ulong)*(uint *)(param_1 + 0x18);
    if (0 < (int)*(uint *)(param_1 + 0x18)) {
      lVar12 = 0;
      uVar14 = 0;
      do {
        if ((uVar9 & 0xffffffff) <= uVar14) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar10 = *(long *)(param_1 + 0x10) + lVar12;
        uStack_f0 = *(undefined8 *)(lVar10 + 0x90);
        uStack_1a8 = *(undefined8 *)(lVar10 + 0x88);
        uStack_1b0 = *(undefined8 *)(lVar10 + 0x80);
        uStack_1c8 = *(undefined8 *)(lVar10 + 0x68);
        uStack_1d0 = *(undefined8 *)(lVar10 + 0x60);
        uStack_1b8 = *(undefined8 *)(lVar10 + 0x78);
        uStack_1c0 = *(undefined8 *)(lVar10 + 0x70);
        uStack_158 = *(undefined8 *)(lVar10 + 0x28);
        uStack_160 = *(undefined8 *)(lVar10 + 0x20);
        uStack_148 = *(undefined8 *)(lVar10 + 0x38);
        uStack_150 = *(undefined8 *)(lVar10 + 0x30);
        uStack_138 = *(undefined8 *)(lVar10 + 0x48);
        uStack_140 = *(undefined8 *)(lVar10 + 0x40);
        uStack_1d8 = *(undefined8 *)(lVar10 + 0x58);
        uStack_1e0 = *(undefined8 *)(lVar10 + 0x50);
        uStack_130 = uStack_1e0;
        uStack_128 = uStack_1d8;
        uStack_120 = uStack_1d0;
        uStack_118 = uStack_1c8;
        uStack_110 = uStack_1c0;
        uStack_108 = uStack_1b8;
        uStack_100 = uStack_1b0;
        uStack_f8 = uStack_1a8;
        Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(&uStack_1a0,&uStack_1e0,0);
        uStack_d8 = uStack_198;
        uStack_e0 = uStack_1a0;
        uStack_c8 = uStack_188;
        uStack_d0 = uStack_190;
        uStack_b8 = uStack_178;
        uStack_c0 = uStack_180;
        uStack_a8 = uStack_168;
        uStack_b0 = uStack_170;
        uVar9 = (ulong)*(uint *)(param_1 + 0x18);
        if (uVar9 <= uVar14) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar9 = (ulong)*(uint *)(param_1 + 0x18);
        }
        lVar10 = *(long *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(lVar10 + lVar12 + 0x3c);
        if (uVar9 <= uVar14) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar10 = *(long *)(param_1 + 0x10);
        }
        if (lVar6 == 0) goto LAB_014e0824;
        uStack_5c = *(undefined4 *)(lVar10 + lVar12 + 0x48);
        uStack_98 = uStack_d8;
        uStack_a0 = uStack_e0;
        uStack_88 = uStack_c8;
        uStack_90 = uStack_d0;
        uStack_78 = uStack_b8;
        uStack_80 = uStack_c0;
        uStack_68 = uStack_a8;
        uStack_70 = uStack_b0;
        uStack_60 = uVar1;
        /*System.Collections.Generic.List<RemoteKartLoadout>$$Add*/ func_0x0244b020(lVar6,&uStack_a0,uRam0000000003d3bb50);
        uVar14 = uVar14 + 1;
        uVar9 = (ulong)*(int *)(param_1 + 0x18);
        lVar12 = lVar12 + 0x78;
      } while ((long)uVar14 < (long)uVar9);
LAB_014e07f4:
      plVar7 = (long *)/*System.Collections.Generic.List<RemoteKartLoadout>$$AsReadOnly*/ func_0x0244b314(lVar6,uRam0000000003d3bb58);
      return plVar7;
    }
    if (lVar6 != 0) goto LAB_014e07f4;
  }
LAB_014e0824:
  auVar15 = func_0x00f78af4();
  lVar12 = auVar15._8_8_;
  lVar6 = auVar15._0_8_;
  if ((bRam0000000003eb4bdb & 1) == 0) {
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bdb = 1;
  }
  uVar13 = *(undefined8 *)(lVar6 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  if (*(long *)(lVar6 + 0x18) != 0) {
    lVar10 = *(long *)(*(long *)(lVar6 + 0x18) + 0x18);
    if (lVar10 == 0) {
      return plVar7;
    }
    if (*(long *)(lVar10 + 0x18) == 0) {
      return plVar7;
    }
    if (lVar12 != 0) {
      uVar13 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar12,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar7 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
      if ((int)plVar7 == 0) {
        return plVar7;
      }
      lVar12 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar12,0);
      if ((lVar12 != 0) &&
         (plVar7 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar12,uRam0000000003d534a0), plVar7 != (long *)0x0)) {
        lVar12 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x014e0998;
            }
            piVar11 = piVar11 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8,0);
code_r0x014e0998:
        plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        if (*(byte *)(*plVar7 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) {
          return plVar7;
        }
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78) {
          return plVar7;
        }
        if (plVar7 != (long *)0x0) {
          plVar7 = (long *)Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(plVar7,0);
          if (((ulong)plVar7 & 1) != 0) {
            return plVar7;
          }
          lVar6 = *(long *)(lVar6 + 0x18);
          if (lVar6 != 0) goto code_r0x014e0a98;
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
code_r0x014e0a98:
  lVar12 = *(long *)(lVar6 + 0x18);
  iVar2 = *(int *)(lVar6 + 0x20);
  *(int *)(lVar6 + 0x20) = iVar2 + 1;
  if (lVar12 == 0) {
    func_0x00f78af4();
  }
  else {
    uVar3 = *(uint *)(lVar12 + 0x18);
    iVar5 = 0;
    if (uVar3 != 0) {
      iVar5 = iVar2 / (int)uVar3;
    }
    uVar4 = iVar2 - iVar5 * uVar3;
    if (uVar4 < uVar3) {
      return *(long **)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
    }
  }
  uVar13 = func_0x00f78b24();
  plVar7 = (long *)func_0x00f78ac0(uVar13,0);
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return plVar7;
}



