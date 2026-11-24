// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.UpdateHolder

// ============================================================
// RVA: 0x165b368 | Core.Networking.UpdateHolder.CreateUpdateHolder
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016ced00) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016cea8c) */
/* WARNING: Removing unreachable block (ram,0x016cea9c) */
/* WARNING: Removing unreachable block (ram,0x016ceaa0) */
/* WARNING: Removing unreachable block (ram,0x016ceaa8) */
/* WARNING: Removing unreachable block (ram,0x016ceab0) */
/* WARNING: Removing unreachable block (ram,0x016ceabc) */
/* WARNING: Removing unreachable block (ram,0x016ceac8) */
/* WARNING: Removing unreachable block (ram,0x016ceacc) */
/* WARNING: Removing unreachable block (ram,0x016ceadc) */
/* WARNING: Removing unreachable block (ram,0x016ceae8) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016ceb30) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016ced84) */
/* WARNING: Removing unreachable block (ram,0x016ced88) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x0165b394) */
/* WARNING: Removing unreachable block (ram,0x016627d0) */
/* WARNING: Removing unreachable block (ram,0x016627ec) */
/* WARNING: Removing unreachable block (ram,0x01662800) */
/* WARNING: Removing unreachable block (ram,0x01662818) */
/* WARNING: Removing unreachable block (ram,0x0166282c) */
/* WARNING: Removing unreachable block (ram,0x01662820) */
/* WARNING: Removing unreachable block (ram,0x01662804) */
/* WARNING: Removing unreachable block (ram,0x0165b5d0) */
/* WARNING: Removing unreachable block (ram,0x01656e18) */
/* WARNING: Removing unreachable block (ram,0x01656e34) */
/* WARNING: Removing unreachable block (ram,0x01656e48) */
/* WARNING: Removing unreachable block (ram,0x01656e60) */
/* WARNING: Removing unreachable block (ram,0x01656e74) */
/* WARNING: Removing unreachable block (ram,0x01656e68) */
/* WARNING: Removing unreachable block (ram,0x01656e4c) */
/* WARNING: Removing unreachable block (ram,0x016cea24) */
/* WARNING: Removing unreachable block (ram,0x016cea4c) */
/* WARNING: Removing unreachable block (ram,0x016cea60) */
/* WARNING: Removing unreachable block (ram,0x016ced94) */
/* WARNING: Removing unreachable block (ram,0x016cee00) */
/* WARNING: Removing unreachable block (ram,0x016cee08) */
/* WARNING: Removing unreachable block (ram,0x016cee58) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee5c) */
/* WARNING: Removing unreachable block (ram,0x016ceed8) */
/* WARNING: Removing unreachable block (ram,0x016ceef4) */
/* WARNING: Removing unreachable block (ram,0x016ceef8) */
/* WARNING: Removing unreachable block (ram,0x016cef58) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016cef70) */
/* WARNING: Removing unreachable block (ram,0x016cef8c) */
/* WARNING: Removing unreachable block (ram,0x016cef90) */
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_UpdateHolder__CreateUpdateHolder
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 **ppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  short sVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int extraout_w1;
  undefined8 uVar15;
  long extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar16;
  char cVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long unaff_x22;
  ulong uVar22;
  undefined8 *******pppppppuVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulong uStack_2d0;
  long lStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined1 ***pppuStack_2b0;
  undefined *puStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined1 **ppuStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined1 *puStack_270;
  undefined *puStack_268;
  undefined1 *puStack_260;
  undefined *puStack_258;
  undefined8 ******ppppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 ******ppppppuStack_1a0;
  code *pcStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 ******ppppppuStack_180;
  code *pcStack_178;
  undefined8 ******ppppppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 ******ppppppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 ******ppppppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 ******ppppppuStack_b0;
  code *pcStack_a8;
  undefined8 ******ppppppuStack_70;
  code *pcStack_68;
  undefined8 ******ppppppuStack_40;
  code *pcStack_38;
  
  auVar27._8_8_ = uStack_c0;
  auVar27._0_8_ = uStack_b8;
  auVar30._8_8_ = param_1;
  auVar30._0_8_ = param_1;
  puVar6 = (undefined8 *)&stack0xffffffffffffffd0;
  if (param_1 == 0) {
    auVar30 = func_0x00f78af4();
    lVar20 = auVar30._8_8_;
    pcStack_38 = Core_Networking_NetworkServicesOutput__WriteToHost;
    if (lVar20 == 0) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      if (*(int *)(lVar20 + 0x18) != 0) {
        lVar19 = lVar20 + 0x20;
      }
    }
    lVar20 = *(long *)(auVar30._0_8_ + 0x10);
    uVar9 = param_3;
    uVar18 = param_4;
    ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
    if (lVar20 != 0) {
      plVar21 = *(long **)(lVar20 + 0x30);
      uVar15 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar19,0);
      if (plVar21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (**(code **)(*plVar21 + 0x278))
                          (plVar21,uVar15,param_3,param_4,*(undefined8 *)(*plVar21 + 0x280));
        return uVar9;
      }
    }
    param_4 = uVar18;
    auVar27 = func_0x00f78af4();
    param_2 = auVar27._8_8_;
    puVar6 = (undefined8 *)&stack0xffffffffffffff60;
    pcStack_68 = Core_Networking_NetworkServicesOutput__WriteCarData;
    unaff_x22 = 0x3eb5000;
    param_3 = uVar9;
    ppppppuStack_70 = &ppppppuStack_40;
    if ((bRam0000000003eb5830 & 1) == 0) {
      func_0x00f78a20(0x3d3b3e0);
      func_0x00f78a20(0x3d3b3e8);
      bRam0000000003eb5830 = 1;
    }
    if ((param_2 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0), uVar9 == 0)) {
      func_0x00f78af4();
      auVar30._8_8_ = extraout_x1;
      auVar30._0_8_ = extraout_x1;
      puVar6 = &uStack_d0;
      uStack_d0 = 0x3eb5000;
      pcStack_a8 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer;
      pppppppuVar23 = &ppppppuStack_b0;
      uStack_c8 = uVar9;
      ppppppuStack_b0 = &ppppppuStack_70;
      if (extraout_x1 == 0) {
        uStack_c0 = param_2;
        uStack_b8 = auVar27._0_8_;
        auVar30 = func_0x00f78af4();
        lVar20 = auVar30._8_8_;
        uStack_100 = 0x3eb5000;
        pcStack_d8 = Core_Networking_NetworkServicesOutput__WriteToOtherPlayers;
        if (lVar20 == 0) {
          lVar19 = 0;
        }
        else {
          lVar19 = 0;
          if (*(int *)(lVar20 + 0x18) != 0) {
            lVar19 = lVar20 + 0x20;
          }
        }
        lVar20 = *(long *)(auVar30._0_8_ + 0x10);
        uVar18 = param_3;
        uVar22 = param_4;
        uStack_f8 = uVar9;
        ppppppuStack_e0 = pppppppuVar23;
        if (lVar20 != 0) {
          plVar21 = *(long **)(lVar20 + 0x30);
          uStack_f0 = param_2;
          uStack_e8 = auVar27._0_8_;
          uVar15 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar19,0);
          auVar27._8_8_ = uStack_f0;
          auVar27._0_8_ = uStack_e8;
          uVar9 = 0;
          if (plVar21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar9 = (**(code **)(*plVar21 + 0x248))
                              (plVar21,uVar15,param_3,param_4,*(undefined8 *)(*plVar21 + 0x250));
            return uVar9;
          }
        }
        uStack_f0 = auVar27._8_8_;
        uStack_e8 = auVar27._0_8_;
        cVar17 = (char)uVar22;
        func_0x00f78af4();
        uStack_130 = 0x3eb5000;
        pcStack_108 = Core_Networking_NetworkServicesOutput__WriteVoteToHost;
        uStack_128 = uVar9;
        uStack_120 = param_3;
        uStack_118 = param_4;
        ppppppuStack_110 = &ppppppuStack_e0;
        if (extraout_x1_00 == 0) {
          pcVar25 = Core_Networking_NetworkVote__ToFlatBuffer;
          auVar30 = func_0x00f78af4();
          uVar9 = auVar30._8_8_;
          puVar11 = auVar30._0_8_;
          uVar18 = (ulong)*puVar11;
          lVar20 = (long)(short)puVar11[1];
          uVar22 = (ulong)(char)puVar11[2];
        }
        else {
          /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(extraout_x1_00,0);
          lVar20 = (long)(uVar18 << 0x10) >> 0x30;
          uVar22 = (ulong)(uint)(int)cVar17;
          pcVar25 = (code *)0x165b6c4;
          uVar9 = extraout_x1_00;
        }
        lVar19 = lVar20;
        ppppppuStack_140 = &ppppppuStack_110;
        pcStack_138 = pcVar25;
        if ((bRam0000000003eb5873 & 1) == 0) {
          func_0x00f78a20(0x3d3f298);
          bRam0000000003eb5873 = 1;
        }
        if (uVar9 == 0) {
          lVar10 = func_0x00f78af4();
          pcStack_178 = Core_Networking_NetworkVoteUpdate__Clear;
          uStack_190 = uVar18;
          uStack_188 = uVar9;
          ppppppuStack_180 = &ppppppuStack_140;
          if ((bRam0000000003eb5862 & 1) == 0) {
            func_0x00f78a20(0x3d3b670);
            bRam0000000003eb5862 = 1;
          }
          uVar9 = *(ulong *)(lVar10 + 0x10);
          if (uVar9 != 0) {
            uVar18 = uVar9;
            if (0 < *(int *)(uVar9 + 0x18)) {
              uVar18 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar9 + 0x10),0,*(int *)(uVar9 + 0x18),0);
              *(undefined4 *)(uVar9 + 0x18) = 0;
            }
            *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
            return uVar18;
          }
          auVar30 = func_0x00f78af4();
          uStack_1f0 = auVar30._8_8_;
          uVar15 = auVar30._0_8_;
          pcStack_198 = Core_Networking_NetworkVoteUpdate__Set;
          lStack_1e8 = lVar19;
          ppppppuStack_1a0 = &ppppppuStack_180;
          if ((bRam0000000003eb5863 & 1) == 0) {
            func_0x00f78a20(0x3d3b660);
            func_0x00f78a20(0x3d3ee80);
            bRam0000000003eb5863 = 1;
          }
          uStack_220 = 0;
          uStack_218 = 0;
          uStack_210 = 0;
          Core_Networking_NetworkVoteUpdate__Clear(uVar15);
          uVar9 = Core_Networking_HostVoteUpdate__get_VotesLength(&uStack_1f0);
          if ((int)uVar9 < 1) {
            return uVar9;
          }
          Core_Networking_HostVoteUpdate__Votes(&uStack_238,&uStack_1f0,0);
          uStack_218 = uStack_230;
          uStack_220 = uStack_238;
          uStack_210 = uStack_228;
          auVar28 = /*System.Nullable<Vote>$$get_Value*/ func_0x026650f8(&uStack_220,uRam0000000003d3ee80);
          ppppppuStack_250 = &ppppppuStack_1a0;
          auStack_200 = auVar28;
          if (auVar28._8_8_ == 0) {
            puVar11 = (uint *)func_0x00f78af4();
            puStack_260 = (undefined1 *)&ppppppuStack_250;
            pppppppuVar23 = &ppppppuStack_250;
            puStack_248 = &Core_Networking_Vote__get_SyncId;
            if (*(long *)(puVar11 + 2) == 0) {
              piVar12 = (int *)func_0x00f78af4();
              puStack_258 = &Core_Networking_Vote__get_Data;
              if (*(long *)(piVar12 + 2) == 0) {
                piVar12 = (int *)func_0x00f78af4();
                puStack_280 = (undefined1 *)&puStack_270;
                puStack_268 = &Core_Networking_Vote__get_Type;
                lVar19 = *(long *)(piVar12 + 2);
                if (lVar19 == 0) {
                  puStack_270 = (undefined1 *)&puStack_260;
                  auVar30 = func_0x00f78af4();
                  pppuStack_2b0 = (undefined1 ***)0x3d3ee80;
                  puStack_2a8 = (undefined *)0x3eb5000;
                  ppuStack_290 = (undefined1 **)0x0;
                  pcStack_278 = Core_Networking_NetworkVoteUpdate__Set;
                  uStack_2a0 = uVar22;
                  uStack_298 = lVar20;
                  puStack_288 = (undefined *)uVar15;
                  ppuVar3 = &puStack_270;
                  if ((bRam0000000003eb5864 & 1) == 0) {
                    func_0x00f78a20(0x3d32bd8);
                    func_0x00f78a20(0x3d32be0);
                    func_0x00f78a20(0x3d32be8);
                    func_0x00f78a20(0x3d3b660);
                    func_0x00f78a20(0x3d3b680);
                    bRam0000000003eb5864 = 1;
                    ppuVar3 = (undefined1 **)puStack_280;
                  }
                  puStack_280 = (undefined1 *)ppuVar3;
                  lStack_2c8 = 0;
                  uStack_2d0 = 0;
                  auStack_2c0._8_8_ = 0;
                  auStack_2c0._0_8_ = 0;
                  Core_Networking_NetworkVoteUpdate__Clear(auVar30._0_8_);
                  if (auVar30._8_8_ == 0) {
                    func_0x00f78af4();
                    if (extraout_w1 == 1) {
                      plVar21 = (long *)___cxa_begin_catch();
                      lVar20 = *plVar21;
                      ___cxa_end_catch();
                      uVar9 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&uStack_2d0,uRam0000000003eb5000);
                      if (lVar20 == 0) {
                        return uVar9;
                      }
                      func_0x00f78ac0(lVar20,0);
                    }
                    lVar20 = __Unwind_Resume();
                    return *(ulong *)(lVar20 + 8);
                  }
                  /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(&uStack_2d0,auVar30._8_8_,uRam0000000003d3b680);
                  while( true ) {
                    uVar9 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(&uStack_2d0,uRam0000000003d32be0);
                    if ((uVar9 & 1) == 0) {
                      uVar9 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&uStack_2d0,uRam0000000003d32bd8);
                      return uVar9;
                    }
                    lVar20 = *(long *)(auVar30._0_8_ + 0x10);
                    if (lVar20 == 0) break;
                    /*System.Collections.Generic.List<NetworkVote>$$Add*/ func_0x0242193c(lVar20,auStack_2c0._0_8_,auStack_2c0._8_8_ & 0xffffffff,
                                    uRam0000000003d3b660);
                  }
                  func_0x00f78af4();
                    /* WARNING: Does not return */
                  pcVar25 = (code *)SoftwareBreakpoint(1,0x1661cc4);
                  (*pcVar25)();
                }
                uVar1 = *piVar12 + 6;
                puStack_280 = (undefined1 *)0x0;
                puStack_268 = &Core_Networking_Vote__get_Type;
                pcStack_278 = (code *)uVar15;
                puStack_270 = (undefined1 *)&puStack_260;
                /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar19,(ulong)uVar1,1);
                if ((*(long *)(lVar19 + 0x10) == 0) ||
                   (lVar10 = *(long *)(*(long *)(lVar19 + 0x10) + 0x10), lVar10 == 0)) {
                  func_0x00f78af4();
                }
                else if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  return (long)*(char *)(lVar10 + (int)uVar1 + 0x20);
                }
                uVar15 = func_0x00f78b24();
                auVar30 = func_0x00f78ac0(uVar15,0);
                puStack_288 = &FlatBuffers_ByteBuffer__Get;
                uVar15 = 1;
                uStack_2a0 = lVar19;
                uStack_298 = (ulong)uVar1;
                ppuStack_290 = &puStack_270;
                /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar30._0_8_,auVar30._8_8_,1);
                lVar19 = *(long *)(auVar30._0_8_ + 0x10);
                if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x10), lVar19 == 0)) {
                  func_0x00f78af4();
                }
                else if (auVar30._8_4_ < *(uint *)(lVar19 + 0x18)) {
                  return (ulong)*(byte *)(lVar19 + (int)auVar30._8_4_ + 0x20);
                }
                uVar24 = func_0x00f78b24();
                auVar27 = func_0x00f78ac0(uVar24,0);
                pppppppuVar4 = (undefined8 *******)&uStack_2d0;
                puStack_2a8 = &FlatBuffers_ByteBuffer__GetStringUTF8;
                pppppppuVar23 = (undefined8 *******)&pppuStack_2b0;
                uStack_2d0 = uVar22;
                lStack_2c8 = lVar20;
                pppuStack_2b0 = &ppuStack_290;
                auStack_2c0 = auVar30;
                plVar21 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
                lVar20 = *(long *)(auVar27._0_8_ + 0x10);
                if ((lVar20 != 0) && (plVar21 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar9 = (**(code **)(*plVar21 + 0x348))
                                    (plVar21,*(undefined8 *)(lVar20 + 0x10),auVar27._8_8_,uVar15,
                                     *(undefined8 *)(*plVar21 + 0x350));
                  return uVar9;
                }
                puVar26 = &FlatBuffers_ByteBuffer__GetShort;
                auVar29 = func_0x00f78af4();
              }
              else {
                auVar29._8_4_ = *piVar12 + 4;
                auVar29._0_8_ = *(long *)(piVar12 + 2);
                auVar29._12_4_ = 0;
                pppppppuVar4 = &ppppppuStack_250;
                puVar26 = &Core_Networking_Vote__get_Data;
                puStack_260 = (undefined1 *)&ppppppuStack_250;
              }
              *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar23;
              *(undefined **)((long)pppppppuVar4 + -8) = puVar26;
              sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar29._0_8_,auVar29._8_8_,2);
              return (ulong)(uint)(int)sVar8;
            }
            auVar28._4_4_ = 0;
            auVar28._0_4_ = *puVar11;
            auVar28._8_8_ = *(long *)(puVar11 + 2);
            puStack_248 = &Core_Networking_Vote__get_SyncId;
          }
          else {
            puStack_248 = (undefined *)0x1661acc;
          }
          uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar28._8_8_,auVar28._0_8_,4);
          return uVar9;
        }
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar9,4,8,0);
        /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(uVar9,1,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar9,uVar22,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar9,lVar20,0);
        /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar9,uVar18,0);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar9;
        puVar5 = &uStack_130;
        pppppppuVar23 = (undefined8 *******)ppppppuStack_140;
        pcVar25 = pcStack_138;
        goto code_r0x016cda04;
      }
      uVar15 = 2;
      uVar24 = 0x165b5d0;
      param_2 = param_4;
    }
    else {
      Core_Networking_HostCarUpdate__StartCarsVector(param_2,*(undefined4 *)(uVar9 + 0x18));
      uVar18 = (ulong)*(uint *)(uVar9 + 0x18);
      if (0 < (int)*(uint *)(uVar9 + 0x18)) {
        unaff_x22 = 0;
        uVar22 = 0;
        do {
          if ((uVar18 & 0xffffffff) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar20 = *(long *)(uVar9 + 0x10) + unaff_x22;
          param_4 = (ulong)*(uint *)(lVar20 + 0x28);
          Core_Networking_Car__CreateCar
                    (param_2,*(undefined4 *)(lVar20 + 0x20),(long)*(char *)(lVar20 + 0x25));
          uVar22 = uVar22 + 1;
          uVar18 = (ulong)*(int *)(uVar9 + 0x18);
          unaff_x22 = unaff_x22 + 0x20;
        } while ((long)uVar22 < (long)uVar18);
      }
      param_3 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(param_2,0);
      auVar2._8_8_ = uStack_c0;
      auVar2._0_8_ = uStack_b8;
      uVar15 = 1;
      uVar24 = 0x165b524;
      pppppppuVar23 = &ppppppuStack_70;
      auVar30 = auVar27;
      auVar27 = auVar2;
    }
  }
  else {
    uVar15 = 2;
    uVar24 = 0x165b394;
    pppppppuVar23 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  uStack_c0 = auVar27._8_8_;
  uStack_b8 = auVar27._0_8_;
  lVar20 = auVar30._8_8_;
  puVar5 = (undefined8 *)((long)puVar6 + -0x30);
  *(long *)((long)puVar6 + -0x30) = unaff_x22;
  *(ulong *)((long)puVar6 + -0x28) = param_3;
  *(ulong *)((long)puVar6 + -0x20) = param_2;
  *(long *)((long)puVar6 + -0x18) = auVar30._0_8_;
  *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar23;
  *(undefined8 *)((long)puVar6 + -8) = uVar24;
  pppppppuVar23 = (undefined8 *******)((long)puVar6 + -0x10);
  uVar24 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,uVar15,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar20);
  if (*(long *)(lVar20 + 0x28) == 0) {
    puVar26 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar31 = func_0x00f78af4();
    puVar7 = (undefined1 *)((long)puVar6 + -0x30);
    while( true ) {
      puVar5 = (undefined8 *)(puVar7 + -0x20);
      *(undefined8 *)(puVar7 + -0x20) = uVar15;
      *(long *)(puVar7 + -0x18) = lVar20;
      *(undefined8 ********)(puVar7 + -0x10) = pppppppuVar23;
      *(undefined **)(puVar7 + -8) = puVar26;
      if (auVar31._8_4_ < *(int *)(auVar31._0_8_ + 0x30)) break;
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar14);
      func_0x00f78af4();
      uVar14 = func_0x00f78b24();
      auVar31 = func_0x00f78ac0(uVar14,0);
      uVar9 = auVar31._0_8_;
      *(long *)(puVar7 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar7 + -0x48) = uVar24;
      *(undefined8 *)(puVar7 + -0x40) = uVar15;
      *(undefined8 *)(puVar7 + -0x38) = uVar13;
      *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar16 == (int)param_4) && (*(char *)(uVar9 + 0x48) == '\0')) {
        return uVar9;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar9,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar9,uVar16);
      pppppppuVar23 = *(undefined8 ********)(puVar7 + -0x30);
      puVar26 = *(undefined **)(puVar7 + -0x28);
      uVar15 = *(undefined8 *)(puVar7 + -0x40);
      lVar20 = *(long *)(puVar7 + -0x38);
      unaff_x22 = *(long *)(puVar7 + -0x50);
      uVar24 = *(undefined8 *)(puVar7 + -0x48);
      puVar7 = puVar7 + -0x20;
    }
    pppppppuVar23 = (undefined8 *******)(puVar7 + -0x10);
    pcVar25 = (code *)&UNK_016ce3a4;
  }
  else {
    uVar24 = extraout_x1_01;
    if (*(int *)(*(long *)(lVar20 + 0x28) + 0x18) < 0) {
      auVar30 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar15);
      uVar24 = auVar30._8_8_;
      *(long *)(lVar20 + 0x28) = auVar30._0_8_;
    }
    auVar31._8_8_ = uVar24;
    auVar31._0_8_ = lVar20;
    *(undefined4 *)(lVar20 + 0x30) = 0;
    pcVar25 = (code *)&UNK_016ce320;
  }
code_r0x016cda04:
  lVar20 = auVar31._0_8_;
  *(undefined8 ********)((long)puVar5 + -0x10) = pppppppuVar23;
  *(code **)((long)puVar5 + -8) = pcVar25;
  if ((*(long *)(lVar20 + 0x18) != 0) &&
     (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
    return (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
  }
  lVar20 = func_0x00f78af4(lVar20,auVar31._8_8_);
  return (ulong)*(byte *)(lVar20 + 0x48);
}



// ============================================================
// RVA: 0x16625c0 | Core.Networking.UpdateHolder.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_UpdateHolder__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x16625c8 | Core.Networking.UpdateHolder.GetRootAsUpdateHolder
// ============================================================

undefined1  [16] Core_Networking_UpdateHolder__GetRootAsUpdateHolder(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  
  uVar3 = 0;
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar4._4_4_ = 0;
    auVar4._0_4_ = *(int *)(param_1 + 0x18) + iVar1;
    auVar4._8_8_ = param_1;
    return auVar4;
  }
  auVar6 = func_0x00f78af4();
  puVar2 = auVar6._0_8_;
  *(int *)puVar2 = auVar6._8_4_;
  puVar2[1] = uVar3;
  auVar5._0_8_ = *puVar2;
  auVar5._8_8_ = uVar3;
  return auVar5;
}



// ============================================================
// RVA: 0x16625d4 | Core.Networking.UpdateHolder.GetRootAsUpdateHolder
// ============================================================

undefined1  [16]
Core_Networking_UpdateHolder__GetRootAsUpdateHolder(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar3._0_8_ = param_2 & 0xffffffff00000000 | (ulong)(uint)(*(int *)(param_1 + 0x18) + iVar1);
    auVar3._8_8_ = param_1;
    return auVar3;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._0_8_;
  *(int *)puVar2 = auVar5._8_4_;
  puVar2[1] = param_3;
  auVar4._0_8_ = *puVar2;
  auVar4._8_8_ = param_3;
  return auVar4;
}



// ============================================================
// RVA: 0x1662618 | Core.Networking.UpdateHolder.__assign
// ============================================================

undefined1  [16]
Core_Networking_UpdateHolder____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x166262c | Core.Networking.UpdateHolder.__init
// ============================================================

void Core_Networking_UpdateHolder____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1662638 | Core.Networking.UpdateHolder.get_Host
// ============================================================

void Core_Networking_UpdateHolder__get_Host(ulong *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb586a & 1) == 0) {
    func_0x00f78a20(0x3d3e8f8);
    bRam0000000003eb586a = 1;
  }
  iVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,4,0);
  if (iVar1 != 0) {
    uVar2 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(param_2,*param_2 + iVar1,0);
    uVar3 = *(ulong *)(param_2 + 2);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = uVar2 & 0xffffffff;
    param_1[1] = uVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x16626e0 | Core.Networking.UpdateHolder.get_Client
// ============================================================

void Core_Networking_UpdateHolder__get_Client(ulong *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb586b & 1) == 0) {
    func_0x00f78a20(0x3d3e670);
    bRam0000000003eb586b = 1;
  }
  iVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,6,0);
  if (iVar1 != 0) {
    uVar2 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(param_2,*param_2 + iVar1,0);
    uVar3 = *(ulong *)(param_2 + 2);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = uVar2 & 0xffffffff;
    param_1[1] = uVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x1662788 | Core.Networking.UpdateHolder.AddClient
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_UpdateHolder__AddClient
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 unaff_x19;
  int iVar16;
  undefined8 unaff_x20;
  long lVar17;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined1 ***pppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_d0 [4];
  undefined1 auStack_b0 [12];
  int iStack_a4;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  if (param_1 == 0) {
    puVar2 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_UpdateHolder__AddHost;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      puStack_18 = &Core_Networking_UpdateHolder__AddHost;
      puStack_20 = &stack0xfffffffffffffff0;
      lVar9 = func_0x00f78af4();
      puStack_28 = &Core_Networking_UpdateHolder__EndUpdateHolder;
      puStack_30 = (undefined1 *)&puStack_20;
      if ((bRam0000000003eb586c & 1) == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78a20(0x3d3f270);
        bRam0000000003eb586c = 1;
      }
      if (lVar9 == 0) {
        lVar9 = func_0x00f78af4();
        if (lVar9 == 0) {
          lVar9 = func_0x00f78af4();
          return *(ulong *)(lVar9 + 8);
        }
        uVar11 = 0;
        puVar2 = &stack0xffffffffffffff90;
        puVar19 = &stack0xffffffffffffffb0;
        lVar17 = 2;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
        if (*(long *)(lVar9 + 0x28) != 0) {
          if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 2) {
            uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
            *(undefined8 *)(lVar9 + 0x28) = uVar11;
          }
          *(undefined4 *)(lVar9 + 0x30) = 2;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          *(int *)(lVar9 + 0x34) = (int)uVar10;
          return uVar10;
        }
        puVar21 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar23 = func_0x00f78af4();
        goto code_r0x016ce380;
      }
      uVar10 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar9 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar9,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
        unaff_x21 = (ulong)*(uint *)(lVar9 + 0x30);
        uVar12 = *(uint *)(lVar9 + 0x30) - 1;
        if (-2 < (int)uVar12) {
          uVar12 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar12;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar16 = (int)uVar10;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar17 = *(long *)(lVar9 + 0x28);
          if (lVar17 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar17 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar18 = unaff_x22 - 8;
          if (*(uint *)(lVar17 + 0x18) <= uVar18) goto code_r0x016ced88;
          iVar7 = *(int *)(lVar17 + unaff_x22 * 4);
          sVar3 = 0;
          if (iVar7 != 0) {
            sVar3 = (short)uVar10 - (short)iVar7;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
          lVar17 = *(long *)(lVar9 + 0x28);
          if (lVar17 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar17 + 0x18) <= uVar18) goto code_r0x016ced88;
          *(undefined4 *)(lVar17 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar12 = uVar1;
        } while (0 < (long)uVar18);
code_r0x016ceb30:
        uVar6 = *(undefined4 *)(lVar9 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
        uVar12 = uVar12 * 2 + 6;
        unaff_x21 = (ulong)uVar12;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar12);
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
        if (0 < (int)*(uint *)(lVar9 + 0x40)) {
          uVar18 = 0;
          do {
            lVar17 = *(long *)(lVar9 + 0x18);
            if (((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) ||
               (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar12 = *(uint *)(lVar9 + 0x10);
            unaff_x22 = (ulong)uVar12;
            sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,unaff_x21,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
            if (sVar3 == sVar4) {
              if (sVar3 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar9 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
                iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
                if (iVar7 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar9 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar16;
                *(int *)(lVar9 + 0x10) = iVar8;
                iVar7 = iVar7 - iVar16;
                goto code_r0x016ced3c;
              }
              iVar7 = 2;
              while( true ) {
                if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
                sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar1 + iVar7,2);
                if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar12 + iVar7,2);
                if (sVar4 != sVar5) break;
                iVar7 = iVar7 + 2;
                if (sVar3 <= iVar7) goto code_r0x016cec64;
              }
            }
            uVar18 = uVar18 + 1;
            unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
          } while ((long)uVar18 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar9 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar17 = *(long *)(lVar9 + 0x38);
            if (lVar17 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar17,unaff_x21,*(undefined4 *)(lVar17 + 0x18),0);
            *(ulong *)(lVar9 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
          }
          uVar12 = (uint)unaff_x22;
          *(uint *)(lVar9 + 0x40) = uVar12 + 1;
          uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar6;
            unaff_x21 = *(ulong *)(lVar9 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
              iVar8 = iVar8 - iVar16;
              iVar7 = iVar7 - iVar16;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
              *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
              return uVar10;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar11 = func_0x00f78b24();
        func_0x00f78ac0(uVar11,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6cea8);
      iVar16 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a30);
      auVar24 = func_0x00f78ac0(uVar11,uVar13);
      puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar20 = &ppuStack_80;
      lVar9 = *(long *)(auVar24._0_8_ + 0x18);
      iStack_a4 = iVar16;
      uStack_a0 = unaff_x22;
      uStack_98 = unaff_x21;
      uStack_90 = uVar10;
      uStack_88 = uVar11;
      ppuStack_80 = &puStack_30;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
        iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar24._8_4_;
        iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
        lVar9 = *(long *)(auVar24._0_8_ + 0x18);
        if (lVar9 != 0) {
          uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,(iVar7 - iVar8) + iVar16,2);
          if ((uVar10 & 0xffff) != 0) {
            return uVar10;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
      uVar13 = func_0x00f78a24(0x3d6ce88);
      uVar14 = func_0x00f78a24(0x3d66338);
      lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar11,uVar14,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar13 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
      uVar11 = func_0x00f78a24(0x3d56a50);
      puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar22 = func_0x00f78ac0(uVar10,uVar11);
      puVar2 = auStack_b0;
      do {
        uVar18 = auVar22._8_8_;
        lVar17 = auVar22._0_8_;
        *(ulong *)(puVar2 + -0x20) = uVar10;
        *(long *)(puVar2 + -0x18) = lVar9;
        *(undefined1 ****)(puVar2 + -0x10) = pppuVar20;
        *(undefined **)(puVar2 + -8) = puVar21;
        pppuVar20 = (undefined1 ***)(puVar2 + -0x10);
        if ((int)uVar13 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),4);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar18);
code_r0x016cef70:
          if (*(long *)(lVar17 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x18) = *(undefined4 *)(lVar17 + 0x10);
            return uVar10;
          }
        }
        else if (lVar17 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar18);
          if ((*(long *)(lVar17 + 0x18) != 0) &&
             (lVar9 = *(long *)(*(long *)(lVar17 + 0x18) + 0x10), lVar9 != 0)) {
            uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar17 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,uVar18);
            goto code_r0x016cef70;
          }
        }
        puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar22 = func_0x00f78af4();
        uVar13 = 0;
        puVar2 = puVar2 + -0x20;
        lVar9 = lVar17;
        uVar10 = uVar18;
      } while( true );
    }
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
    puVar2 = (undefined1 *)register0x00000008;
  }
  uVar11 = auVar22._8_8_;
  uVar10 = auVar22._0_8_;
  auVar23._8_8_ = uVar13;
  auVar23._0_8_ = uVar10;
  param_4 = 0;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((auVar22._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
    return uVar10;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar10,uVar11,uVar11,0,0);
  puVar19 = *(undefined1 **)(puVar2 + -0x10);
  puVar21 = *(undefined **)(puVar2 + -8);
  lVar17 = *(long *)(puVar2 + -0x20);
  lVar9 = *(long *)(puVar2 + -0x18);
code_r0x016ce380:
  do {
    uVar13 = auVar23._8_8_;
    *(long *)(puVar2 + -0x20) = lVar17;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(undefined **)(puVar2 + -8) = puVar21;
    uVar12 = auVar23._8_4_;
    if ((int)uVar12 < *(int *)(auVar23._0_8_ + 0x30)) {
      lVar17 = *(long *)(auVar23._0_8_ + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar14 = uVar11;
      if (lVar17 == 0) goto code_r0x016ce410;
      if (uVar12 < *(uint *)(lVar17 + 0x18)) {
        *(int *)(lVar17 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar11);
      uVar11 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar11);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar11 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar11,0);
    uVar10 = auVar23._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(ulong *)(puVar2 + -0x48) = unaff_x21;
    *(long *)(puVar2 + -0x40) = lVar17;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar14 == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,uVar14);
    puVar19 = *(undefined1 **)(puVar2 + -0x30);
    puVar21 = *(undefined **)(puVar2 + -0x28);
    lVar17 = *(long *)(puVar2 + -0x40);
    lVar9 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    unaff_x21 = *(ulong *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x16627ac | Core.Networking.UpdateHolder.AddHost
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_UpdateHolder__AddHost
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 uVar16;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 **ppuVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_c0 [4];
  undefined1 auStack_a0 [12];
  int iStack_94;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar16 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    puVar2 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      uVar12 = (uint)uVar16;
      if ((int)uVar12 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar13 = param_2;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        uVar11 = uVar16;
        if (uVar12 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar16 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d6ceb8);
        uVar13 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar11);
        uVar11 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar16,uVar11);
code_r0x016ce410:
        func_0x00f78af4();
        uVar11 = uVar16;
      }
      uVar16 = func_0x00f78b24();
      auVar21 = func_0x00f78ac0(uVar16,0);
      uVar16 = auVar21._8_8_;
      param_1 = auVar21._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(ulong *)(puVar2 + -0x48) = unaff_x21;
      *(long *)(puVar2 + -0x40) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x38) = uVar11;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar13 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      param_2 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar13);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x30);
      unaff_x30 = *(undefined **)(puVar2 + -0x28);
      unaff_x20 = *(long *)(puVar2 + -0x40);
      unaff_x19 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      unaff_x21 = *(ulong *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb586c & 1) == 0) {
    func_0x00f78a20(0x3d3f270);
    bRam0000000003eb586c = 1;
  }
  if (lVar9 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    param_2 = 0;
    puVar2 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xffffffffffffffc0;
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 2) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 2;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar10;
      return uVar10;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar21 = func_0x00f78af4();
    uVar16 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
    goto code_r0x016ce380;
  }
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar9 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar9,0);
    uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
    unaff_x21 = (ulong)*(uint *)(lVar9 + 0x30);
    uVar12 = *(uint *)(lVar9 + 0x30) - 1;
    if (-2 < (int)uVar12) {
      uVar12 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar12;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar14 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar18 = unaff_x22 - 8;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      iVar7 = *(int *)(lVar14 + unaff_x22 * 4);
      sVar3 = 0;
      if (iVar7 != 0) {
        sVar3 = (short)uVar10 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar12 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar9 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
    uVar12 = uVar12 * 2 + 6;
    unaff_x21 = (ulong)uVar12;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar12);
    unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
    if (0 < (int)*(uint *)(lVar9 + 0x40)) {
      uVar18 = 0;
      do {
        lVar14 = *(long *)(lVar9 + 0x18);
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
           (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar12 = *(uint *)(lVar9 + 0x10);
        unaff_x22 = (ulong)uVar12;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
        if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
        if (sVar3 == sVar4) {
          if (sVar3 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar9 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
            iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
            if (iVar7 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar9 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar7 = iVar7 - iVar17;
            goto code_r0x016ced3c;
          }
          iVar7 = 2;
          while( true ) {
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar1 + iVar7,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar12 + iVar7,2);
            if (sVar4 != sVar5) break;
            iVar7 = iVar7 + 2;
            if (sVar3 <= iVar7) goto code_r0x016cec64;
          }
        }
        uVar18 = uVar18 + 1;
        unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
      } while ((long)uVar18 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar9 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar14 = *(long *)(lVar9 + 0x38);
        if (lVar14 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
        *(ulong *)(lVar9 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
      }
      uVar12 = (uint)unaff_x22;
      *(uint *)(lVar9 + 0x40) = uVar12 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar6;
        unaff_x21 = *(ulong *)(lVar9 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          iVar8 = iVar8 - iVar17;
          iVar7 = iVar7 - iVar17;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
          *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
          return uVar10;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar16 = func_0x00f78aec();
  uVar13 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar13);
  uVar13 = func_0x00f78a24(0x3d56a30);
  auVar22 = func_0x00f78ac0(uVar16,uVar13);
  puStack_68 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar19 = &puStack_70;
  lVar9 = *(long *)(auVar22._0_8_ + 0x18);
  iStack_94 = iVar17;
  uStack_90 = unaff_x22;
  uStack_88 = unaff_x21;
  uStack_80 = uVar10;
  uStack_78 = uVar16;
  puStack_70 = &stack0xffffffffffffffe0;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar22._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
    lVar9 = *(long *)(auVar22._0_8_ + 0x18);
    if (lVar9 != 0) {
      uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,(iVar7 - iVar8) + iVar17,2);
      if ((uVar10 & 0xffff) != 0) {
        return uVar10;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_94,0);
  uVar13 = func_0x00f78a24(0x3d6ce88);
  uVar11 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar11,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar13 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
  uVar16 = func_0x00f78a24(0x3d56a50);
  puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar21 = func_0x00f78ac0(uVar10,uVar16);
  puVar2 = auStack_a0;
  do {
    uVar18 = auVar21._8_8_;
    lVar14 = auVar21._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar19;
    *(undefined **)(puVar2 + -8) = puVar20;
    ppuVar19 = (undefined1 **)(puVar2 + -0x10);
    if ((int)uVar13 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar14 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
        return uVar10;
      }
    }
    else if (lVar14 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
      if ((*(long *)(lVar14 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar9 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar14 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar21 = func_0x00f78af4();
    uVar13 = 0;
    puVar2 = puVar2 + -0x20;
    lVar9 = lVar14;
    uVar10 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x16627d0 | Core.Networking.UpdateHolder.EndUpdateHolder
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_UpdateHolder__EndUpdateHolder
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_b0 [5];
  int iStack_84;
  ulong auStack_80 [4];
  undefined *apuStack_60 [2];
  
  if ((bRam0000000003eb586c & 1) == 0) {
    func_0x00f78a20(0x3d3f270);
    bRam0000000003eb586c = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 2;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 2) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 2;
      uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
      *(int *)(lVar15 + 0x34) = (int)uVar18;
      return uVar18;
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar23 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffb0;
    do {
      uVar12 = auVar23._8_8_;
      *(long *)(puVar2 + -0x20) = lVar16;
      *(long *)(puVar2 + -0x18) = lVar15;
      *(undefined1 **)(puVar2 + -0x10) = puVar20;
      *(undefined **)(puVar2 + -8) = puVar22;
      uVar13 = auVar23._8_4_;
      if ((int)uVar13 < *(int *)(auVar23._0_8_ + 0x30)) {
        lVar16 = *(long *)(auVar23._0_8_ + 0x28);
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar14 = uVar11;
        if (lVar16 == 0) goto code_r0x016ce410;
        if (uVar13 < *(uint *)(lVar16 + 0x18)) {
          *(int *)(lVar16 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar18;
          return uVar18;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar12 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d6ceb8);
        uVar14 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar12,uVar11);
        uVar11 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar12,uVar11);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar11 = func_0x00f78b24();
      auVar23 = func_0x00f78ac0(uVar11,0);
      uVar18 = auVar23._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x48) = uVar10;
      *(long *)(puVar2 + -0x40) = lVar16;
      *(undefined8 *)(puVar2 + -0x38) = uVar12;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar14 == (int)param_4) && (*(char *)(uVar18 + 0x48) == '\0')) {
        return uVar18;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar18,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar18,uVar14);
      puVar20 = *(undefined1 **)(puVar2 + -0x30);
      puVar22 = *(undefined **)(puVar2 + -0x28);
      lVar16 = *(long *)(puVar2 + -0x40);
      lVar15 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      uVar10 = *(undefined8 *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  uVar18 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(param_1 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,0);
    uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    unaff_x21 = (ulong)*(uint *)(param_1 + 0x30);
    uVar13 = *(uint *)(param_1 + 0x30) - 1;
    if (-2 < (int)uVar13) {
      uVar13 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar13;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar18;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar15 = *(long *)(param_1 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar19 = unaff_x22 - 8;
      if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
      iVar8 = *(int *)(lVar15 + unaff_x22 * 4);
      sVar4 = 0;
      if (iVar8 != 0) {
        sVar4 = (short)uVar18 - (short)iVar8;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)sVar4);
      lVar15 = *(long *)(param_1 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
      *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar13 = uVar1;
    } while (0 < (long)uVar19);
code_r0x016ceb30:
    uVar7 = *(undefined4 *)(param_1 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)((short)uVar18 - (short)uVar7));
    uVar13 = uVar13 * 2 + 6;
    unaff_x21 = (ulong)uVar13;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)uVar13);
    unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      uVar19 = 0;
      do {
        lVar15 = *(long *)(param_1 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar16 = *(long *)(param_1 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar13 = *(uint *)(param_1 + 0x10);
        unaff_x22 = (ulong)uVar13;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
        if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),unaff_x22,2);
        if (sVar4 == sVar5) {
          if (sVar4 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(param_1 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
            iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
            if (iVar8 == 0) {
              unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(param_1 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
            *(int *)(param_1 + 0x10) = iVar9;
            iVar8 = iVar8 - iVar17;
            goto code_r0x016ced3c;
          }
          iVar8 = 2;
          while( true ) {
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar1 + iVar8,2);
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar13 + iVar8,2);
            if (sVar5 != sVar6) break;
            iVar8 = iVar8 + 2;
            if (sVar4 <= iVar8) goto code_r0x016cec64;
          }
        }
        uVar19 = uVar19 + 1;
        unaff_x22 = (ulong)*(int *)(param_1 + 0x40);
      } while ((long)uVar19 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(param_1 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar15 = *(long *)(param_1 + 0x38);
        if (lVar15 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
        *(ulong *)(param_1 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
      }
      uVar13 = (uint)unaff_x22;
      *(uint *)(param_1 + 0x40) = uVar13 + 1;
      uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar7;
        unaff_x21 = *(ulong *)(param_1 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
          iVar9 = iVar9 - iVar17;
          iVar8 = iVar8 - iVar17;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
          *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
          return uVar18;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar10 = func_0x00f78b24();
    func_0x00f78ac0(uVar10,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar11 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,uVar11);
  uVar11 = func_0x00f78a24(0x3d56a30);
  auVar24 = func_0x00f78ac0(uVar10,uVar11);
  apuStack_60[1] = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar21 = apuStack_60;
  lVar15 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_84 = iVar17;
  auStack_80[0] = unaff_x22;
  auStack_80[1] = unaff_x21;
  auStack_80[2] = uVar18;
  auStack_80[3] = uVar10;
  apuStack_60[0] = &stack0xfffffffffffffff0;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar8 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar24._8_4_;
    iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar8,4);
    lVar15 = *(long *)(auVar24._0_8_ + 0x18);
    if (lVar15 != 0) {
      uVar18 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar8 - iVar9) + iVar17,2);
      if ((uVar18 & 0xffff) != 0) {
        return uVar18;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_84,0);
  uVar11 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar10,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar18 = func_0x00f78aec();
  uVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,lVar15);
  uVar10 = func_0x00f78a24(0x3d56a50);
  puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar23 = func_0x00f78ac0(uVar18,uVar10);
  puVar3 = auStack_b0 + 4;
  do {
    uVar19 = auVar23._8_8_;
    lVar16 = auVar23._0_8_;
    *(ulong *)((long)puVar3 + -0x20) = uVar18;
    *(long *)((long)puVar3 + -0x18) = lVar15;
    *(undefined ***)((long)puVar3 + -0x10) = ppuVar21;
    *(undefined **)((long)puVar3 + -8) = puVar22;
    ppuVar21 = (undefined **)((long)puVar3 + -0x10);
    if ((int)uVar11 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),4);
      uVar18 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
code_r0x016cef70:
      if (*(long *)(lVar16 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18) = *(undefined4 *)(lVar16 + 0x10);
        return uVar18;
      }
    }
    else if (lVar16 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (lVar15 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar15 != 0)) {
        uVar19 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar16 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
        goto code_r0x016cef70;
      }
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar23 = func_0x00f78af4();
    uVar11 = 0;
    puVar3 = (ulong *)((long)puVar3 + -0x20);
    lVar15 = lVar16;
    uVar18 = uVar19;
  } while( true );
}



// ============================================================
// RVA: 0x166281c | Core.Networking.UpdateHolder.StartUpdateHolder
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Networking_UpdateHolder__StartUpdateHolder
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  long alStack_80 [10];
  
  if (param_1 == 0) {
    lVar7 = func_0x00f78af4();
    return *(long *)(lVar7 + 8);
  }
  uVar5 = 0;
  puVar9 = &stack0xfffffffffffffff0;
  lVar7 = 2;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 2) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 2;
    lVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    *(int *)(param_1 + 0x34) = (int)lVar7;
    return lVar7;
  }
  puVar10 = &FlatBuffers_FlatBufferBuilder__Slot;
  auVar11 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffd0;
  do {
    uVar3 = auVar11._8_8_;
    *(long *)(puVar1 + -0x20) = lVar7;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    uVar4 = auVar11._8_4_;
    if ((int)uVar4 < *(int *)(auVar11._0_8_ + 0x30)) {
      lVar7 = *(long *)(auVar11._0_8_ + 0x28);
      lVar2 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar6 = uVar5;
      if (lVar7 == 0) goto code_r0x016ce410;
      if (uVar4 < *(uint *)(lVar7 + 0x18)) {
        *(int *)(lVar7 + (long)(int)uVar4 * 4 + 0x20) = (int)lVar2;
        return lVar2;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar3 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d6ceb8);
      uVar6 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar3,uVar5);
      uVar5 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar3,uVar5);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar5 = func_0x00f78b24();
    auVar11 = func_0x00f78ac0(uVar5,0);
    lVar2 = auVar11._0_8_;
    *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x48) = uVar8;
    *(long *)(puVar1 + -0x40) = lVar7;
    *(undefined8 *)(puVar1 + -0x38) = uVar3;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar6 == param_4) && (*(char *)(lVar2 + 0x48) == '\0')) {
      return lVar2;
    }
    uVar5 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar2,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(lVar2,uVar6);
    puVar9 = *(undefined1 **)(puVar1 + -0x30);
    puVar10 = *(undefined **)(puVar1 + -0x28);
    lVar7 = *(long *)(puVar1 + -0x40);
    param_1 = *(long *)(puVar1 + -0x38);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x50);
    uVar8 = *(undefined8 *)(puVar1 + -0x48);
    puVar1 = puVar1 + -0x20;
  } while( true );
}



