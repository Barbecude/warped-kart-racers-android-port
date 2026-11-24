// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkServicesOutput

// ============================================================
// RVA: 0x165b11c | Core.Networking.NetworkServicesOutput.Init
// ============================================================

void Core_Networking_NetworkServicesOutput__Init(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb582e & 1) == 0) {
    func_0x00f78a20(0x3d1eda0);
    bRam0000000003eb582e = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar1 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,0x400);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x165b180 | Core.Networking.NetworkServicesOutput.WriteCarDataToHost
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165b338) */
/* WARNING: Removing unreachable block (ram,0x01653f1c) */
/* WARNING: Removing unreachable block (ram,0x01653f38) */
/* WARNING: Removing unreachable block (ram,0x01653f4c) */
/* WARNING: Removing unreachable block (ram,0x01653f64) */
/* WARNING: Removing unreachable block (ram,0x01653f78) */
/* WARNING: Removing unreachable block (ram,0x01653f6c) */
/* WARNING: Removing unreachable block (ram,0x01653f50) */
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
/* WARNING: Removing unreachable block (ram,0x0165b5d0) */
/* WARNING: Removing unreachable block (ram,0x01656e18) */
/* WARNING: Removing unreachable block (ram,0x01656e34) */
/* WARNING: Removing unreachable block (ram,0x01656e48) */
/* WARNING: Removing unreachable block (ram,0x01656e60) */
/* WARNING: Removing unreachable block (ram,0x01656e74) */
/* WARNING: Removing unreachable block (ram,0x01656e68) */
/* WARNING: Removing unreachable block (ram,0x01656e4c) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b6fc) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b548) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b2c0) */
/* WARNING: Removing unreachable block (ram,0x0165b2a0) */
/* WARNING: Removing unreachable block (ram,0x0165b27c) */
/* WARNING: Removing unreachable block (ram,0x0165b394) */
/* WARNING: Removing unreachable block (ram,0x016627d0) */
/* WARNING: Removing unreachable block (ram,0x016627ec) */
/* WARNING: Removing unreachable block (ram,0x01662800) */
/* WARNING: Removing unreachable block (ram,0x01662818) */
/* WARNING: Removing unreachable block (ram,0x0166282c) */
/* WARNING: Removing unreachable block (ram,0x01662820) */
/* WARNING: Removing unreachable block (ram,0x01662804) */
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

ulong Core_Networking_NetworkServicesOutput__WriteCarDataToHost
                (long param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 ***pppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  uint *puVar6;
  
  auVar27._8_8_ = param_2;
  auVar27._0_8_ = param_2;
  puVar3 = (ulong *)&stack0xffffffffffffffb0;
  uVar21 = 0x3eb5000;
  uVar5 = param_3;
  if ((bRam0000000003eb582f & 1) == 0) {
    func_0x00f78a20(0x3d3b3e0);
    func_0x00f78a20(0x3d3b3e8);
    bRam0000000003eb582f = 1;
  }
  if (param_3 == 0) {
LAB_0165b304:
    func_0x00f78af4();
    auVar25._8_8_ = lStack_140;
    auVar25._0_8_ = lStack_138;
    auVar27._8_8_ = param_4;
    auVar27._0_8_ = extraout_x1;
    puVar3 = &uStack_80;
    puStack_58 = &Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer;
    uStack_80 = uVar21;
    uStack_78 = param_3;
    lStack_70 = param_2;
    lStack_68 = param_1;
    ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
    if (extraout_x1 == 0) {
      auVar27 = func_0x00f78af4();
      auVar25._8_8_ = lStack_140;
      auVar25._0_8_ = lStack_138;
      lVar16 = auVar27._0_8_;
      puVar3 = &uStack_b0;
      puStack_88 = &Core_Networking_UpdateHolder__CreateUpdateHolder;
      pppuVar23 = &ppuStack_90;
      uStack_b0 = uVar21;
      uStack_a8 = param_3;
      lStack_a0 = param_2;
      lStack_98 = param_1;
      ppuStack_90 = &ppuStack_60;
      if (lVar16 == 0) {
        auVar27 = func_0x00f78af4();
        lVar16 = auVar27._8_8_;
        puStack_b8 = &Core_Networking_NetworkServicesOutput__WriteToHost;
        if (lVar16 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = 0;
          if (*(int *)(lVar16 + 0x18) != 0) {
            lVar17 = lVar16 + 0x20;
          }
        }
        lVar16 = *(long *)(auVar27._0_8_ + 0x10);
        uVar15 = uVar5;
        uVar13 = param_4;
        uStack_e0 = uVar21;
        uStack_d8 = param_3;
        lStack_d0 = param_2;
        lStack_c8 = param_1;
        ppuStack_c0 = pppuVar23;
        if (lVar16 != 0) {
          plVar19 = *(long **)(lVar16 + 0x30);
          uVar10 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar17,0);
          param_3 = 0;
          if (plVar19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar21 = (**(code **)(*plVar19 + 0x278))
                               (plVar19,uVar10,uVar5,param_4,*(undefined8 *)(*plVar19 + 0x280));
            return uVar21;
          }
        }
        auVar25 = func_0x00f78af4();
        lVar17 = auVar25._8_8_;
        auVar27._8_8_ = lVar17;
        auVar27._0_8_ = lVar17;
        lVar16 = auVar25._0_8_;
        puVar3 = &uStack_120;
        puStack_e8 = &Core_Networking_NetworkServicesOutput__WriteCarData;
        uVar22 = 0x3eb5000;
        uVar11 = uVar15;
        uStack_120 = unaff_x24;
        lStack_118 = unaff_x23;
        uStack_110 = uVar21;
        uStack_108 = param_3;
        uStack_100 = uVar5;
        uStack_f8 = param_4;
        ppuStack_f0 = &ppuStack_c0;
        if ((bRam0000000003eb5830 & 1) == 0) {
          func_0x00f78a20(0x3d3b3e0);
          func_0x00f78a20(0x3d3b3e8);
          bRam0000000003eb5830 = 1;
        }
        param_4 = uVar13;
        if ((lVar17 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar17,0), uVar15 == 0)) {
          func_0x00f78af4();
          auVar27._8_8_ = param_4;
          auVar27._0_8_ = extraout_x1_00;
          puVar3 = &uStack_150;
          uStack_150 = 0x3eb5000;
          puStack_128 = &Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer;
          uStack_148 = uVar15;
          ppuStack_130 = &ppuStack_f0;
          if (extraout_x1_00 == 0) {
            lStack_140 = lVar17;
            lStack_138 = lVar16;
            auVar27 = func_0x00f78af4();
            lVar18 = auVar27._8_8_;
            uStack_180 = 0x3eb5000;
            puStack_158 = &Core_Networking_NetworkServicesOutput__WriteToOtherPlayers;
            if (lVar18 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = 0;
              if (*(int *)(lVar18 + 0x18) != 0) {
                lVar7 = lVar18 + 0x20;
              }
            }
            lVar18 = *(long *)(auVar27._0_8_ + 0x10);
            uVar21 = uVar11;
            uVar5 = param_4;
            uStack_178 = uVar15;
            ppuStack_160 = &ppuStack_130;
            if (lVar18 != 0) {
              plVar19 = *(long **)(lVar18 + 0x30);
              lStack_170 = lVar17;
              lStack_168 = lVar16;
              uVar10 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar7,0);
              auVar25._8_8_ = lStack_170;
              auVar25._0_8_ = lStack_168;
              uVar15 = 0;
              if (plVar19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar21 = (**(code **)(*plVar19 + 0x248))
                                   (plVar19,uVar10,uVar11,param_4,*(undefined8 *)(*plVar19 + 0x250))
                ;
                return uVar21;
              }
            }
            lStack_170 = auVar25._8_8_;
            lStack_168 = auVar25._0_8_;
            auVar26 = func_0x00f78af4();
            uVar13 = auVar26._8_8_;
            uStack_1b0 = 0x3eb5000;
            puStack_188 = &Core_Networking_NetworkServicesOutput__WriteVoteToHost;
            uStack_1a8 = uVar15;
            uStack_1a0 = uVar11;
            uStack_198 = param_4;
            ppuStack_190 = &ppuStack_160;
            if (uVar13 == 0) {
              puVar24 = &Core_Networking_NetworkVote__ToFlatBuffer;
              auVar27 = func_0x00f78af4();
              auVar26._8_8_ = auVar27._8_8_;
              auVar26._0_8_ = param_4;
              puVar6 = auVar27._0_8_;
              uVar21 = (ulong)*puVar6;
              lVar16 = (long)(short)puVar6[1];
              uVar14 = (ulong)(char)puVar6[2];
            }
            else {
              /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar13,0);
              lVar16 = (long)(uVar21 << 0x10) >> 0x30;
              uVar14 = (ulong)(uint)(int)(char)uVar5;
              puVar24 = &UNK_0165b6c4;
              uVar11 = uVar13;
              uVar15 = uVar21;
              uVar22 = uVar5;
            }
            uVar5 = auVar26._8_8_;
            uStack_1c8 = auVar26._0_8_;
            pppuVar23 = &ppuStack_1c0;
            lVar17 = lVar16;
            uStack_1f0 = unaff_x24;
            lStack_1e8 = unaff_x23;
            uStack_1e0 = uVar22;
            uStack_1d8 = uVar15;
            uStack_1d0 = uVar11;
            ppuStack_1c0 = &ppuStack_190;
            puStack_1b8 = puVar24;
            if ((bRam0000000003eb5873 & 1) == 0) {
              func_0x00f78a20(0x3d3f298);
              bRam0000000003eb5873 = 1;
            }
            if (uVar5 == 0) {
              puVar24 = &Core_Networking_NetworkVoteUpdate__Clear;
              lVar7 = func_0x00f78af4();
              lVar18 = 0;
              puVar1 = &uStack_1f0;
              while( true ) {
                *(ulong *)((long)puVar1 + -0x20) = uVar21;
                *(long *)((long)puVar1 + -0x18) = lVar18;
                *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar23;
                *(undefined **)((long)puVar1 + -8) = puVar24;
                if ((bRam0000000003eb5862 & 1) == 0) {
                  func_0x00f78a20(0x3d3b670);
                  bRam0000000003eb5862 = 1;
                }
                uVar21 = *(ulong *)(lVar7 + 0x10);
                if (uVar21 != 0) break;
                auVar27 = func_0x00f78af4();
                lVar18 = auVar27._0_8_;
                *(undefined8 *)((long)puVar1 + -0x70) = unaff_x26;
                *(ulong *)((long)puVar1 + -0x68) = unaff_x25;
                *(ulong *)((long)puVar1 + -0x60) = unaff_x24;
                *(undefined8 *)((long)puVar1 + -0x58) = 0x3eb5000;
                *(ulong *)((long)puVar1 + -0x50) = uVar14;
                *(long *)((long)puVar1 + -0x48) = lVar16;
                *(undefined8 *)((long)puVar1 + -0x40) = 0x3eb5000;
                *(long *)((long)puVar1 + -0x38) = lVar7;
                *(undefined1 **)((long)puVar1 + -0x30) = (undefined1 *)((long)puVar1 + -0x10);
                *(undefined **)((long)puVar1 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
                pppuVar23 = (undefined8 ***)((long)puVar1 + -0x30);
                *(long *)((long)puVar1 + -0x80) = auVar27._8_8_;
                *(long *)((long)puVar1 + -0x78) = lVar17;
                uVar21 = 0x3eb5000;
                if ((bRam0000000003eb5863 & 1) == 0) {
                  func_0x00f78a20(0x3d3b660);
                  func_0x00f78a20(0x3d3ee80);
                  bRam0000000003eb5863 = 1;
                }
                *(undefined8 *)((long)puVar1 + -0xb0) = 0;
                *(undefined8 *)((long)puVar1 + -0xa8) = 0;
                *(undefined8 *)((long)puVar1 + -0xa0) = 0;
                puVar24 = &UNK_01661a5c;
                puVar1 = (ulong *)((long)puVar1 + -0xd0);
                lVar7 = lVar18;
              }
              *(undefined8 *)((long)puVar1 + -0x20) = *(undefined8 *)((long)puVar1 + -0x20);
              *(undefined8 *)((long)puVar1 + -0x18) = *(undefined8 *)((long)puVar1 + -0x18);
              *(undefined8 *)((long)puVar1 + -0x10) = *(undefined8 *)((long)puVar1 + -0x10);
              *(undefined8 *)((long)puVar1 + -8) = *(undefined8 *)((long)puVar1 + -8);
              uVar5 = uVar21;
              if (0 < *(int *)(uVar21 + 0x18)) {
                uVar5 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar21 + 0x10),0,*(int *)(uVar21 + 0x18),0);
                *(undefined4 *)(uVar21 + 0x18) = 0;
              }
              *(int *)(uVar21 + 0x1c) = *(int *)(uVar21 + 0x1c) + 1;
              return uVar5;
            }
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar5,4,8,0);
            /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(uVar5,1,0);
            /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar5,uVar14,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar5,lVar16,0);
            /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar5,uVar21,0);
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar5;
            puVar2 = &uStack_1b0;
            pppuVar23 = (undefined8 ***)ppuStack_1c0;
            puVar24 = puStack_1b8;
            goto code_r0x016cda04;
          }
          uVar10 = 2;
          puVar24 = &UNK_0165b5d0;
          lVar16 = extraout_x1_00;
          uVar5 = uVar11;
          uVar21 = uVar22;
          pppuVar23 = &ppuStack_130;
        }
        else {
          Core_Networking_HostCarUpdate__StartCarsVector(lVar17,*(undefined4 *)(uVar15 + 0x18));
          uVar21 = (ulong)*(uint *)(uVar15 + 0x18);
          if (0 < (int)*(uint *)(uVar15 + 0x18)) {
            uVar22 = 0;
            uVar5 = 0;
            do {
              if ((uVar21 & 0xffffffff) <= uVar5) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar18 = *(long *)(uVar15 + 0x10) + uVar22;
              param_4 = (ulong)*(uint *)(lVar18 + 0x28);
              Core_Networking_Car__CreateCar
                        (lVar17,*(undefined4 *)(lVar18 + 0x20),(long)*(char *)(lVar18 + 0x25));
              uVar5 = uVar5 + 1;
              uVar21 = (ulong)*(int *)(uVar15 + 0x18);
              uVar22 = uVar22 + 0x20;
            } while ((long)uVar5 < (long)uVar21);
          }
          uVar5 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(lVar17,0);
          auVar25._8_8_ = lStack_140;
          auVar25._0_8_ = lStack_138;
          uVar10 = 1;
          puVar24 = &UNK_0165b524;
          uVar21 = uVar22;
          pppuVar23 = &ppuStack_f0;
        }
      }
      else {
        uVar10 = 2;
        puVar24 = &UNK_0165b394;
      }
    }
    else {
      uVar10 = 2;
      puVar24 = &UNK_0165b338;
      lVar16 = extraout_x1;
      pppuVar23 = &ppuStack_60;
    }
  }
  else {
    uVar15 = (ulong)*(uint *)(param_3 + 0x18);
    if ((int)*(uint *)(param_3 + 0x18) < 1) {
      unaff_x25 = 0;
      uVar21 = 0;
    }
    else {
      unaff_x23 = 0;
      uVar21 = 0;
      unaff_x25 = 0;
      unaff_x24 = 0;
      do {
        if ((uVar15 & 0xffffffff) <= unaff_x24) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(param_3 + 0x10);
        if (*(char *)(lVar16 + unaff_x23 + 0x24) != '\0') {
          if (*(uint *)(param_3 + 0x18) <= unaff_x24) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar16 = *(long *)(param_3 + 0x10);
          }
          unaff_x25 = (ulong)*(byte *)(lVar16 + unaff_x23 + 0x25);
          uVar21 = (ulong)*(uint *)(lVar16 + unaff_x23 + 0x28);
        }
        unaff_x24 = unaff_x24 + 1;
        uVar15 = (ulong)*(int *)(param_3 + 0x18);
        unaff_x23 = unaff_x23 + 0x20;
      } while ((long)unaff_x24 < (long)uVar15);
    }
    if (param_2 == 0) goto LAB_0165b304;
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0);
    uVar5 = Core_Networking_CarBase__CreateCarBase(param_2,(int)(char)unaff_x25,uVar21);
    auVar25._8_8_ = lStack_140;
    auVar25._0_8_ = lStack_138;
    uVar10 = 1;
    puVar24 = (undefined *)0x165b27c;
    lVar16 = param_1;
    pppuVar23 = (undefined8 ***)&stack0xfffffffffffffff0;
  }
  lStack_140 = auVar25._8_8_;
  lStack_138 = auVar25._0_8_;
  lVar17 = auVar27._0_8_;
  puVar2 = (undefined8 *)((long)puVar3 + -0x30);
  *(ulong *)((long)puVar3 + -0x30) = uVar21;
  *(ulong *)((long)puVar3 + -0x28) = uVar5;
  *(long *)((long)puVar3 + -0x20) = auVar27._8_8_;
  *(long *)((long)puVar3 + -0x18) = lVar16;
  *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar23;
  *(undefined **)((long)puVar3 + -8) = puVar24;
  pppuVar23 = (undefined8 ***)((long)puVar3 + -0x10);
  uVar20 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,uVar10,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar17);
  if (*(long *)(lVar17 + 0x28) == 0) {
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar28 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)puVar3 + -0x30);
    while( true ) {
      puVar2 = (undefined8 *)(puVar4 + -0x20);
      *(undefined8 *)(puVar4 + -0x20) = uVar10;
      *(long *)(puVar4 + -0x18) = lVar17;
      *(undefined8 ****)(puVar4 + -0x10) = pppuVar23;
      *(undefined **)(puVar4 + -8) = puVar24;
      pppuVar23 = (undefined8 ***)(puVar4 + -0x10);
      if (auVar28._8_4_ < *(int *)(auVar28._0_8_ + 0x30)) break;
      func_0x00f78a24(0x3d22738);
      uVar8 = func_0x00f78aec();
      uVar9 = func_0x00f78a24(0x3d6ceb8);
      uVar12 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar8,uVar9);
      uVar9 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar8,uVar9);
      func_0x00f78af4();
      uVar9 = func_0x00f78b24();
      auVar28 = func_0x00f78ac0(uVar9,0);
      uVar5 = auVar28._0_8_;
      *(ulong *)(puVar4 + -0x50) = uVar21;
      *(undefined8 *)(puVar4 + -0x48) = uVar20;
      *(undefined8 *)(puVar4 + -0x40) = uVar10;
      *(undefined8 *)(puVar4 + -0x38) = uVar8;
      *(undefined8 ****)(puVar4 + -0x30) = pppuVar23;
      *(undefined **)(puVar4 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar12 == (int)param_4) && (*(char *)(uVar5 + 0x48) == '\0')) {
        return uVar5;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar5,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar5,uVar12);
      pppuVar23 = *(undefined8 ****)(puVar4 + -0x30);
      puVar24 = *(undefined **)(puVar4 + -0x28);
      uVar10 = *(undefined8 *)(puVar4 + -0x40);
      lVar17 = *(long *)(puVar4 + -0x38);
      uVar21 = *(ulong *)(puVar4 + -0x50);
      uVar20 = *(undefined8 *)(puVar4 + -0x48);
      puVar4 = puVar4 + -0x20;
    }
    puVar24 = &UNK_016ce3a4;
  }
  else {
    uVar20 = extraout_x1_01;
    if (*(int *)(*(long *)(lVar17 + 0x28) + 0x18) < 0) {
      auVar27 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar10);
      uVar20 = auVar27._8_8_;
      *(long *)(lVar17 + 0x28) = auVar27._0_8_;
    }
    auVar28._8_8_ = uVar20;
    auVar28._0_8_ = lVar17;
    *(undefined4 *)(lVar17 + 0x30) = 0;
    puVar24 = &UNK_016ce320;
  }
code_r0x016cda04:
  lVar16 = auVar28._0_8_;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar23;
  *(undefined **)((long)puVar2 + -8) = puVar24;
  if ((*(long *)(lVar16 + 0x18) != 0) &&
     (lVar17 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar17 != 0)) {
    return (ulong)(uint)(*(int *)(lVar17 + 0x18) - *(int *)(lVar16 + 0x10));
  }
  lVar16 = func_0x00f78af4(lVar16,auVar28._8_8_);
  return (ulong)*(byte *)(lVar16 + 0x48);
}



// ============================================================
// RVA: 0x165b308 | Core.Networking.NetworkServicesOutput.ClientUpdateHolderToFlatBuffer
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x0165b70c) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b548) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b394) */
/* WARNING: Removing unreachable block (ram,0x016627d0) */
/* WARNING: Removing unreachable block (ram,0x016627ec) */
/* WARNING: Removing unreachable block (ram,0x01662800) */
/* WARNING: Removing unreachable block (ram,0x01662818) */
/* WARNING: Removing unreachable block (ram,0x0166282c) */
/* WARNING: Removing unreachable block (ram,0x01662820) */
/* WARNING: Removing unreachable block (ram,0x01662804) */
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
/* WARNING: Removing unreachable block (ram,0x0165b338) */
/* WARNING: Removing unreachable block (ram,0x01653f1c) */
/* WARNING: Removing unreachable block (ram,0x01653f38) */
/* WARNING: Removing unreachable block (ram,0x01653f4c) */
/* WARNING: Removing unreachable block (ram,0x01653f64) */
/* WARNING: Removing unreachable block (ram,0x01653f78) */
/* WARNING: Removing unreachable block (ram,0x01653f6c) */
/* WARNING: Removing unreachable block (ram,0x01653f50) */
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

ulong Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                (undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long unaff_x22;
  ulong uVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ***pppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  auVar21._8_8_ = lStack_f0;
  auVar21._0_8_ = lStack_e8;
  auVar22._8_8_ = param_4;
  auVar22._0_8_ = param_2;
  puVar3 = (undefined8 *)&stack0xffffffffffffffd0;
  if (param_2 == 0) {
    auVar22 = func_0x00f78af4();
    auVar21._8_8_ = lStack_f0;
    auVar21._0_8_ = lStack_e8;
    param_2 = auVar22._0_8_;
    puVar3 = (undefined8 *)&stack0xffffffffffffffa0;
    puStack_38 = &Core_Networking_UpdateHolder__CreateUpdateHolder;
    ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
    if (param_2 == 0) {
      auVar22 = func_0x00f78af4();
      lVar14 = auVar22._8_8_;
      puStack_68 = &Core_Networking_NetworkServicesOutput__WriteToHost;
      if (lVar14 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(int *)(lVar14 + 0x18) != 0) {
          lVar15 = lVar14 + 0x20;
        }
      }
      lVar14 = *(long *)(auVar22._0_8_ + 0x10);
      uVar4 = param_3;
      uVar12 = param_4;
      ppuStack_70 = &ppuStack_40;
      if (lVar14 != 0) {
        plVar16 = *(long **)(lVar14 + 0x30);
        uVar9 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar15,0);
        if (plVar16 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar16 + 0x278))
                            (plVar16,uVar9,param_3,param_4,*(undefined8 *)(*plVar16 + 0x280));
          return uVar4;
        }
      }
      param_4 = uVar12;
      auVar21 = func_0x00f78af4();
      lVar14 = auVar21._8_8_;
      auVar22._8_8_ = lVar14;
      auVar22._0_8_ = lVar14;
      param_2 = auVar21._0_8_;
      puVar3 = (undefined8 *)&stack0xffffffffffffff30;
      puStack_98 = &Core_Networking_NetworkServicesOutput__WriteCarData;
      unaff_x22 = 0x3eb5000;
      param_3 = uVar4;
      ppuStack_a0 = &ppuStack_70;
      if ((bRam0000000003eb5830 & 1) == 0) {
        func_0x00f78a20(0x3d3b3e0);
        func_0x00f78a20(0x3d3b3e8);
        bRam0000000003eb5830 = 1;
      }
      if ((lVar14 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar14,0), uVar4 == 0)) {
        func_0x00f78af4();
        auVar22._8_8_ = param_4;
        auVar22._0_8_ = extraout_x1;
        puVar3 = &uStack_100;
        uStack_100 = 0x3eb5000;
        puStack_d8 = &Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer;
        pppuVar19 = &ppuStack_e0;
        uStack_f8 = uVar4;
        ppuStack_e0 = &ppuStack_a0;
        if (extraout_x1 == 0) {
          lStack_f0 = lVar14;
          lStack_e8 = param_2;
          auVar22 = func_0x00f78af4();
          lVar15 = auVar22._8_8_;
          uStack_130 = 0x3eb5000;
          puStack_108 = &Core_Networking_NetworkServicesOutput__WriteToOtherPlayers;
          if (lVar15 == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = 0;
            if (*(int *)(lVar15 + 0x18) != 0) {
              lVar13 = lVar15 + 0x20;
            }
          }
          lVar15 = *(long *)(auVar22._0_8_ + 0x10);
          uVar12 = param_3;
          uVar18 = param_4;
          uStack_128 = uVar4;
          ppuStack_110 = pppuVar19;
          if (lVar15 != 0) {
            plVar16 = *(long **)(lVar15 + 0x30);
            lStack_120 = lVar14;
            lStack_118 = param_2;
            uVar9 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar13,0);
            auVar21._8_8_ = lStack_120;
            auVar21._0_8_ = lStack_118;
            uVar4 = 0;
            if (plVar16 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar4 = (**(code **)(*plVar16 + 0x248))
                                (plVar16,uVar9,param_3,param_4,*(undefined8 *)(*plVar16 + 0x250));
              return uVar4;
            }
          }
          lStack_120 = auVar21._8_8_;
          lStack_118 = auVar21._0_8_;
          cVar11 = (char)uVar18;
          func_0x00f78af4();
          uStack_160 = 0x3eb5000;
          puStack_138 = &Core_Networking_NetworkServicesOutput__WriteVoteToHost;
          uStack_158 = uVar4;
          uStack_150 = param_3;
          uStack_148 = param_4;
          ppuStack_140 = &ppuStack_110;
          if (extraout_x1_00 == 0) {
            puVar20 = &Core_Networking_NetworkVote__ToFlatBuffer;
            auVar22 = func_0x00f78af4();
            uVar4 = auVar22._8_8_;
            puVar5 = auVar22._0_8_;
            uVar12 = (ulong)*puVar5;
            lVar14 = (long)(short)puVar5[1];
            uVar18 = (ulong)(char)puVar5[2];
          }
          else {
            /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(extraout_x1_00,0);
            lVar14 = (long)(uVar12 << 0x10) >> 0x30;
            uVar18 = (ulong)(uint)(int)cVar11;
            puVar20 = &UNK_0165b6c4;
            uVar4 = extraout_x1_00;
          }
          pppuVar19 = &ppuStack_170;
          lVar15 = lVar14;
          ppuStack_170 = &ppuStack_140;
          puStack_168 = puVar20;
          if ((bRam0000000003eb5873 & 1) == 0) {
            func_0x00f78a20(0x3d3f298);
            bRam0000000003eb5873 = 1;
          }
          if (uVar4 == 0) {
            puVar20 = &Core_Networking_NetworkVoteUpdate__Clear;
            lVar6 = func_0x00f78af4();
            lVar13 = 0;
            puVar1 = &stack0xfffffffffffffe60;
            while( true ) {
              *(ulong *)(puVar1 + -0x20) = uVar12;
              *(long *)(puVar1 + -0x18) = lVar13;
              *(undefined8 ****)(puVar1 + -0x10) = pppuVar19;
              *(undefined **)(puVar1 + -8) = puVar20;
              if ((bRam0000000003eb5862 & 1) == 0) {
                func_0x00f78a20(0x3d3b670);
                bRam0000000003eb5862 = 1;
              }
              uVar4 = *(ulong *)(lVar6 + 0x10);
              if (uVar4 != 0) break;
              auVar22 = func_0x00f78af4();
              lVar13 = auVar22._0_8_;
              *(undefined8 *)(puVar1 + -0x70) = unaff_x26;
              *(undefined8 *)(puVar1 + -0x68) = unaff_x25;
              *(undefined8 *)(puVar1 + -0x60) = unaff_x24;
              *(undefined8 *)(puVar1 + -0x58) = 0x3eb5000;
              *(ulong *)(puVar1 + -0x50) = uVar18;
              *(long *)(puVar1 + -0x48) = lVar14;
              *(undefined8 *)(puVar1 + -0x40) = 0x3eb5000;
              *(long *)(puVar1 + -0x38) = lVar6;
              *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
              *(undefined **)(puVar1 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
              pppuVar19 = (undefined8 ***)(puVar1 + -0x30);
              *(long *)(puVar1 + -0x80) = auVar22._8_8_;
              *(long *)(puVar1 + -0x78) = lVar15;
              uVar12 = 0x3eb5000;
              if ((bRam0000000003eb5863 & 1) == 0) {
                func_0x00f78a20(0x3d3b660);
                func_0x00f78a20(0x3d3ee80);
                bRam0000000003eb5863 = 1;
              }
              *(undefined8 *)(puVar1 + -0xb0) = 0;
              *(undefined8 *)(puVar1 + -0xa8) = 0;
              *(undefined8 *)(puVar1 + -0xa0) = 0;
              puVar20 = &UNK_01661a5c;
              puVar1 = puVar1 + -0xd0;
              lVar6 = lVar13;
            }
            *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
            *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
            *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
            *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
            uVar12 = uVar4;
            if (0 < *(int *)(uVar4 + 0x18)) {
              uVar12 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar4 + 0x10),0,*(int *)(uVar4 + 0x18),0);
              *(undefined4 *)(uVar4 + 0x18) = 0;
            }
            *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
            return uVar12;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar4,4,8,0);
          /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(uVar4,1,0);
          /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar4,uVar18,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar4,lVar14,0);
          /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar4,uVar12,0);
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar4;
          puVar2 = &uStack_160;
          pppuVar19 = (undefined8 ***)ppuStack_170;
          puVar20 = puStack_168;
          goto code_r0x016cda04;
        }
        uVar9 = 2;
        puVar20 = &UNK_0165b5d0;
        param_2 = extraout_x1;
      }
      else {
        Core_Networking_HostCarUpdate__StartCarsVector(lVar14,*(undefined4 *)(uVar4 + 0x18));
        uVar12 = (ulong)*(uint *)(uVar4 + 0x18);
        if (0 < (int)*(uint *)(uVar4 + 0x18)) {
          unaff_x22 = 0;
          uVar18 = 0;
          do {
            if ((uVar12 & 0xffffffff) <= uVar18) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar15 = *(long *)(uVar4 + 0x10) + unaff_x22;
            param_4 = (ulong)*(uint *)(lVar15 + 0x28);
            Core_Networking_Car__CreateCar
                      (lVar14,*(undefined4 *)(lVar15 + 0x20),(long)*(char *)(lVar15 + 0x25));
            uVar18 = uVar18 + 1;
            uVar12 = (ulong)*(int *)(uVar4 + 0x18);
            unaff_x22 = unaff_x22 + 0x20;
          } while ((long)uVar18 < (long)uVar12);
        }
        param_3 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(lVar14,0);
        auVar21._8_8_ = lStack_f0;
        auVar21._0_8_ = lStack_e8;
        uVar9 = 1;
        puVar20 = &UNK_0165b524;
        pppuVar19 = &ppuStack_a0;
      }
    }
    else {
      uVar9 = 2;
      puVar20 = &UNK_0165b394;
      pppuVar19 = &ppuStack_40;
    }
  }
  else {
    uVar9 = 2;
    puVar20 = (undefined *)0x165b338;
    pppuVar19 = (undefined8 ***)&stack0xfffffffffffffff0;
  }
  lStack_f0 = auVar21._8_8_;
  lStack_e8 = auVar21._0_8_;
  lVar14 = auVar22._0_8_;
  puVar2 = (undefined8 *)((long)puVar3 + -0x30);
  *(long *)((long)puVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)puVar3 + -0x28) = param_3;
  *(long *)((long)puVar3 + -0x20) = auVar22._8_8_;
  *(long *)((long)puVar3 + -0x18) = param_2;
  *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar19;
  *(undefined **)((long)puVar3 + -8) = puVar20;
  pppuVar19 = (undefined8 ***)((long)puVar3 + -0x10);
  uVar17 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,uVar9,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar14);
  if (*(long *)(lVar14 + 0x28) == 0) {
    puVar20 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar23 = func_0x00f78af4();
    puVar1 = (undefined1 *)((long)puVar3 + -0x30);
    while( true ) {
      puVar2 = (undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x20) = uVar9;
      *(long *)(puVar1 + -0x18) = lVar14;
      *(undefined8 ****)(puVar1 + -0x10) = pppuVar19;
      *(undefined **)(puVar1 + -8) = puVar20;
      if (auVar23._8_4_ < *(int *)(auVar23._0_8_ + 0x30)) break;
      func_0x00f78a24(0x3d22738);
      uVar7 = func_0x00f78aec();
      uVar8 = func_0x00f78a24(0x3d6ceb8);
      uVar10 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar7,uVar8);
      uVar8 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar7,uVar8);
      func_0x00f78af4();
      uVar8 = func_0x00f78b24();
      auVar23 = func_0x00f78ac0(uVar8,0);
      uVar4 = auVar23._0_8_;
      *(long *)(puVar1 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x48) = uVar17;
      *(undefined8 *)(puVar1 + -0x40) = uVar9;
      *(undefined8 *)(puVar1 + -0x38) = uVar7;
      *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar10 == (int)param_4) && (*(char *)(uVar4 + 0x48) == '\0')) {
        return uVar4;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar4,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar4,uVar10);
      pppuVar19 = *(undefined8 ****)(puVar1 + -0x30);
      puVar20 = *(undefined **)(puVar1 + -0x28);
      uVar9 = *(undefined8 *)(puVar1 + -0x40);
      lVar14 = *(long *)(puVar1 + -0x38);
      unaff_x22 = *(long *)(puVar1 + -0x50);
      uVar17 = *(undefined8 *)(puVar1 + -0x48);
      puVar1 = puVar1 + -0x20;
    }
    pppuVar19 = (undefined8 ***)(puVar1 + -0x10);
    puVar20 = &UNK_016ce3a4;
  }
  else {
    uVar17 = extraout_x1_01;
    if (*(int *)(*(long *)(lVar14 + 0x28) + 0x18) < 0) {
      auVar22 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar9);
      uVar17 = auVar22._8_8_;
      *(long *)(lVar14 + 0x28) = auVar22._0_8_;
    }
    auVar23._8_8_ = uVar17;
    auVar23._0_8_ = lVar14;
    *(undefined4 *)(lVar14 + 0x30) = 0;
    puVar20 = &UNK_016ce320;
  }
code_r0x016cda04:
  lVar14 = auVar23._0_8_;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar19;
  *(undefined **)((long)puVar2 + -8) = puVar20;
  if ((*(long *)(lVar14 + 0x18) != 0) &&
     (lVar15 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar15 != 0)) {
    return (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar14 + 0x10));
  }
  lVar14 = func_0x00f78af4(lVar14,auVar23._8_8_);
  return (ulong)*(byte *)(lVar14 + 0x48);
}



// ============================================================
// RVA: 0x165b3c4 | Core.Networking.NetworkServicesOutput.WriteToHost
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b548) */
/* WARNING: Removing unreachable block (ram,0x016cef90) */
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
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkServicesOutput__WriteToHost
                (long param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ***pppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  if (param_2 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = 0;
    if (*(int *)(param_2 + 0x18) != 0) {
      lVar21 = param_2 + 0x20;
    }
  }
  uVar6 = param_3;
  uVar13 = param_4;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar19 = *(long **)(*(long *)(param_1 + 0x10) + 0x30);
    uVar5 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar21,0);
    if (plVar19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*plVar19 + 0x278))
                        (plVar19,uVar5,param_3,param_4,*(undefined8 *)(*plVar19 + 0x280));
      return uVar6;
    }
  }
  auVar25 = func_0x00f78af4();
  uVar18 = auVar25._8_8_;
  puVar4 = (undefined8 *)&stack0xffffffffffffff90;
  puStack_38 = &Core_Networking_NetworkServicesOutput__WriteCarData;
  lVar21 = 0x3eb5000;
  uVar15 = uVar6;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5830 & 1) == 0) {
    func_0x00f78a20(0x3d3b3e0);
    func_0x00f78a20(0x3d3b3e8);
    bRam0000000003eb5830 = 1;
  }
  if ((uVar18 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar18,0), uVar6 == 0)) {
    func_0x00f78af4();
    auVar26._8_8_ = extraout_x1;
    auVar26._0_8_ = extraout_x1;
    puVar4 = &uStack_a0;
    uStack_a0 = 0x3eb5000;
    puStack_78 = &Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer;
    pppuVar23 = &ppuStack_80;
    uStack_98 = uVar6;
    ppuStack_80 = &puStack_40;
    if (extraout_x1 == 0) {
      uStack_90 = uVar18;
      uStack_88 = auVar25._0_8_;
      auVar26 = func_0x00f78af4();
      lVar21 = auVar26._8_8_;
      uStack_d0 = 0x3eb5000;
      puStack_a8 = &Core_Networking_NetworkServicesOutput__WriteToOtherPlayers;
      if (lVar21 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = 0;
        if (*(int *)(lVar21 + 0x18) != 0) {
          lVar16 = lVar21 + 0x20;
        }
      }
      lVar21 = *(long *)(auVar26._0_8_ + 0x10);
      uVar22 = uVar15;
      uVar14 = uVar13;
      uStack_c8 = uVar6;
      ppuStack_b0 = pppuVar23;
      if (lVar21 != 0) {
        plVar19 = *(long **)(lVar21 + 0x30);
        uStack_c0 = uVar18;
        uStack_b8 = auVar25._0_8_;
        uVar5 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar16,0);
        auVar25._8_8_ = uStack_c0;
        auVar25._0_8_ = uStack_b8;
        uVar6 = 0;
        if (plVar19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(*plVar19 + 0x248))
                            (plVar19,uVar5,uVar15,uVar13,*(undefined8 *)(*plVar19 + 0x250));
          return uVar6;
        }
      }
      uStack_c0 = auVar25._8_8_;
      uStack_b8 = auVar25._0_8_;
      cVar12 = (char)uVar14;
      func_0x00f78af4();
      uStack_100 = 0x3eb5000;
      puStack_d8 = &Core_Networking_NetworkServicesOutput__WriteVoteToHost;
      uStack_f8 = uVar6;
      uStack_f0 = uVar15;
      uStack_e8 = uVar13;
      ppuStack_e0 = &ppuStack_b0;
      if (extraout_x1_00 == 0) {
        puVar24 = &Core_Networking_NetworkVote__ToFlatBuffer;
        auVar25 = func_0x00f78af4();
        uVar6 = auVar25._8_8_;
        puVar7 = auVar25._0_8_;
        uVar22 = (ulong)*puVar7;
        lVar21 = (long)(short)puVar7[1];
        uVar13 = (ulong)(char)puVar7[2];
      }
      else {
        /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(extraout_x1_00,0);
        lVar21 = (long)(uVar22 << 0x10) >> 0x30;
        uVar13 = (ulong)(uint)(int)cVar12;
        puVar24 = &UNK_0165b6c4;
        uVar6 = extraout_x1_00;
      }
      pppuVar23 = &ppuStack_110;
      lVar16 = lVar21;
      ppuStack_110 = &ppuStack_e0;
      puStack_108 = puVar24;
      if ((bRam0000000003eb5873 & 1) == 0) {
        func_0x00f78a20(0x3d3f298);
        bRam0000000003eb5873 = 1;
      }
      if (uVar6 == 0) {
        puVar24 = &Core_Networking_NetworkVoteUpdate__Clear;
        lVar8 = func_0x00f78af4();
        lVar17 = 0;
        puVar2 = &stack0xfffffffffffffec0;
        while( true ) {
          *(ulong *)(puVar2 + -0x20) = uVar22;
          *(long *)(puVar2 + -0x18) = lVar17;
          *(undefined8 ****)(puVar2 + -0x10) = pppuVar23;
          *(undefined **)(puVar2 + -8) = puVar24;
          if ((bRam0000000003eb5862 & 1) == 0) {
            func_0x00f78a20(0x3d3b670);
            bRam0000000003eb5862 = 1;
          }
          uVar6 = *(ulong *)(lVar8 + 0x10);
          if (uVar6 != 0) break;
          auVar25 = func_0x00f78af4();
          lVar17 = auVar25._0_8_;
          *(undefined8 *)(puVar2 + -0x70) = unaff_x26;
          *(undefined8 *)(puVar2 + -0x68) = unaff_x25;
          *(undefined8 *)(puVar2 + -0x60) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x58) = 0x3eb5000;
          *(ulong *)(puVar2 + -0x50) = uVar13;
          *(long *)(puVar2 + -0x48) = lVar21;
          *(undefined8 *)(puVar2 + -0x40) = 0x3eb5000;
          *(long *)(puVar2 + -0x38) = lVar8;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
          pppuVar23 = (undefined8 ***)(puVar2 + -0x30);
          *(long *)(puVar2 + -0x80) = auVar25._8_8_;
          *(long *)(puVar2 + -0x78) = lVar16;
          uVar22 = 0x3eb5000;
          if ((bRam0000000003eb5863 & 1) == 0) {
            func_0x00f78a20(0x3d3b660);
            func_0x00f78a20(0x3d3ee80);
            bRam0000000003eb5863 = 1;
          }
          *(undefined8 *)(puVar2 + -0xb0) = 0;
          *(undefined8 *)(puVar2 + -0xa8) = 0;
          *(undefined8 *)(puVar2 + -0xa0) = 0;
          puVar24 = &UNK_01661a5c;
          puVar2 = puVar2 + -0xd0;
          lVar8 = lVar17;
        }
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        uVar13 = uVar6;
        if (0 < *(int *)(uVar6 + 0x18)) {
          uVar13 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar6 + 0x10),0,*(int *)(uVar6 + 0x18),0);
          *(undefined4 *)(uVar6 + 0x18) = 0;
        }
        *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
        return uVar13;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar6,4,8,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(uVar6,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar6,uVar13,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar6,lVar21,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar6,uVar22,0);
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar6;
      puVar3 = &uStack_100;
      pppuVar23 = (undefined8 ***)ppuStack_110;
      puVar24 = puStack_108;
      goto code_r0x016cda04;
    }
    uVar5 = 2;
    puVar24 = &UNK_0165b5d0;
    uVar18 = uVar13;
  }
  else {
    Core_Networking_HostCarUpdate__StartCarsVector(uVar18,*(undefined4 *)(uVar6 + 0x18));
    uVar15 = (ulong)*(uint *)(uVar6 + 0x18);
    if (0 < (int)*(uint *)(uVar6 + 0x18)) {
      lVar21 = 0;
      uVar22 = 0;
      do {
        if ((uVar15 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(uVar6 + 0x10) + lVar21;
        uVar13 = (ulong)*(uint *)(lVar16 + 0x28);
        Core_Networking_Car__CreateCar
                  (uVar18,*(undefined4 *)(lVar16 + 0x20),(long)*(char *)(lVar16 + 0x25));
        uVar22 = uVar22 + 1;
        uVar15 = (ulong)*(int *)(uVar6 + 0x18);
        lVar21 = lVar21 + 0x20;
      } while ((long)uVar22 < (long)uVar15);
    }
    uVar15 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(uVar18,0);
    auVar1._8_8_ = uStack_90;
    auVar1._0_8_ = uStack_88;
    uVar5 = 1;
    puVar24 = &UNK_0165b524;
    pppuVar23 = (undefined8 ***)&puStack_40;
    auVar26 = auVar25;
    auVar25 = auVar1;
  }
  uStack_90 = auVar25._8_8_;
  uStack_88 = auVar25._0_8_;
  lVar16 = auVar26._8_8_;
  puVar3 = (undefined8 *)((long)puVar4 + -0x30);
  *(long *)((long)puVar4 + -0x30) = lVar21;
  *(ulong *)((long)puVar4 + -0x28) = uVar15;
  *(ulong *)((long)puVar4 + -0x20) = uVar18;
  *(long *)((long)puVar4 + -0x18) = auVar26._0_8_;
  *(undefined8 ****)((long)puVar4 + -0x10) = pppuVar23;
  *(undefined **)((long)puVar4 + -8) = puVar24;
  pppuVar23 = (undefined8 ***)((long)puVar4 + -0x10);
  uVar20 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,uVar5,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar16);
  if (*(long *)(lVar16 + 0x28) == 0) {
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar27 = func_0x00f78af4();
    puVar2 = (undefined1 *)((long)puVar4 + -0x30);
    while( true ) {
      puVar3 = (undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x20) = uVar5;
      *(long *)(puVar2 + -0x18) = lVar16;
      *(undefined8 ****)(puVar2 + -0x10) = pppuVar23;
      *(undefined **)(puVar2 + -8) = puVar24;
      pppuVar23 = (undefined8 ***)(puVar2 + -0x10);
      if (auVar27._8_4_ < *(int *)(auVar27._0_8_ + 0x30)) break;
      func_0x00f78a24(0x3d22738);
      uVar9 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d6ceb8);
      uVar11 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar9,uVar10);
      uVar10 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar9,uVar10);
      func_0x00f78af4();
      uVar10 = func_0x00f78b24();
      auVar27 = func_0x00f78ac0(uVar10,0);
      uVar6 = auVar27._0_8_;
      *(long *)(puVar2 + -0x50) = lVar21;
      *(undefined8 *)(puVar2 + -0x48) = uVar20;
      *(undefined8 *)(puVar2 + -0x40) = uVar5;
      *(undefined8 *)(puVar2 + -0x38) = uVar9;
      *(undefined8 ****)(puVar2 + -0x30) = pppuVar23;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar11 == (int)uVar13) && (*(char *)(uVar6 + 0x48) == '\0')) {
        return uVar6;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar6,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar6,uVar11);
      pppuVar23 = *(undefined8 ****)(puVar2 + -0x30);
      puVar24 = *(undefined **)(puVar2 + -0x28);
      uVar5 = *(undefined8 *)(puVar2 + -0x40);
      lVar16 = *(long *)(puVar2 + -0x38);
      lVar21 = *(long *)(puVar2 + -0x50);
      uVar20 = *(undefined8 *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    }
    puVar24 = &UNK_016ce3a4;
  }
  else {
    uVar20 = extraout_x1_01;
    if (*(int *)(*(long *)(lVar16 + 0x28) + 0x18) < 0) {
      auVar25 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar5);
      uVar20 = auVar25._8_8_;
      *(long *)(lVar16 + 0x28) = auVar25._0_8_;
    }
    auVar27._8_8_ = uVar20;
    auVar27._0_8_ = lVar16;
    *(undefined4 *)(lVar16 + 0x30) = 0;
    puVar24 = &UNK_016ce320;
  }
code_r0x016cda04:
  lVar21 = auVar27._0_8_;
  *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar23;
  *(undefined **)((long)puVar3 + -8) = puVar24;
  if ((*(long *)(lVar21 + 0x18) != 0) &&
     (lVar16 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar16 != 0)) {
    return (ulong)(uint)(*(int *)(lVar16 + 0x18) - *(int *)(lVar21 + 0x10));
  }
  lVar21 = func_0x00f78af4(lVar21,auVar27._8_8_);
  return (ulong)*(byte *)(lVar21 + 0x48);
}



// ============================================================
// RVA: 0x165b444 | Core.Networking.NetworkServicesOutput.WriteCarData
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b548) */
/* WARNING: Removing unreachable block (ram,0x016cef90) */
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
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkServicesOutput__WriteCarData
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ***pppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  uint *puVar4;
  
  puVar3 = (undefined8 *)&stack0xffffffffffffffc0;
  lVar17 = 0x3eb5000;
  uVar12 = param_3;
  if ((bRam0000000003eb5830 & 1) == 0) {
    func_0x00f78a20(0x3d3b3e0);
    func_0x00f78a20(0x3d3b3e8);
    bRam0000000003eb5830 = 1;
  }
  if ((param_2 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0), param_3 == 0)) {
    func_0x00f78af4();
    puVar3 = &uStack_70;
    uStack_70 = 0x3eb5000;
    puStack_48 = &Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer;
    pppuVar19 = &ppuStack_50;
    uStack_68 = param_3;
    uStack_60 = param_2;
    uStack_58 = param_1;
    ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
    if (extraout_x1 == 0) {
      auVar21 = func_0x00f78af4();
      lVar17 = auVar21._8_8_;
      uStack_a0 = 0x3eb5000;
      puStack_78 = &Core_Networking_NetworkServicesOutput__WriteToOtherPlayers;
      if (lVar17 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        if (*(int *)(lVar17 + 0x18) != 0) {
          lVar13 = lVar17 + 0x20;
        }
      }
      lVar17 = *(long *)(auVar21._0_8_ + 0x10);
      uVar18 = uVar12;
      uVar11 = param_4;
      uStack_98 = param_3;
      uStack_90 = param_2;
      uStack_88 = param_1;
      ppuStack_80 = pppuVar19;
      if (lVar17 != 0) {
        plVar15 = *(long **)(lVar17 + 0x30);
        uVar8 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar13,0);
        param_3 = 0;
        if (plVar15 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar12 = (**(code **)(*plVar15 + 0x248))
                             (plVar15,uVar8,uVar12,param_4,*(undefined8 *)(*plVar15 + 0x250));
          return uVar12;
        }
      }
      cVar10 = (char)uVar11;
      func_0x00f78af4();
      uStack_d0 = 0x3eb5000;
      puStack_a8 = &Core_Networking_NetworkServicesOutput__WriteVoteToHost;
      uStack_c8 = param_3;
      uStack_c0 = uVar12;
      uStack_b8 = param_4;
      ppuStack_b0 = &ppuStack_80;
      if (extraout_x1_00 == 0) {
        puVar20 = &Core_Networking_NetworkVote__ToFlatBuffer;
        auVar21 = func_0x00f78af4();
        uVar12 = auVar21._8_8_;
        puVar4 = auVar21._0_8_;
        uVar18 = (ulong)*puVar4;
        lVar17 = (long)(short)puVar4[1];
        uVar11 = (ulong)(char)puVar4[2];
      }
      else {
        /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(extraout_x1_00,0);
        lVar17 = (long)(uVar18 << 0x10) >> 0x30;
        uVar11 = (ulong)(uint)(int)cVar10;
        puVar20 = &UNK_0165b6c4;
        uVar12 = extraout_x1_00;
      }
      pppuVar19 = &ppuStack_e0;
      lVar13 = lVar17;
      ppuStack_e0 = &ppuStack_b0;
      puStack_d8 = puVar20;
      if ((bRam0000000003eb5873 & 1) == 0) {
        func_0x00f78a20(0x3d3f298);
        bRam0000000003eb5873 = 1;
      }
      if (uVar12 == 0) {
        puVar20 = &Core_Networking_NetworkVoteUpdate__Clear;
        lVar5 = func_0x00f78af4();
        lVar14 = 0;
        puVar1 = &stack0xfffffffffffffef0;
        while( true ) {
          *(ulong *)(puVar1 + -0x20) = uVar18;
          *(long *)(puVar1 + -0x18) = lVar14;
          *(undefined8 ****)(puVar1 + -0x10) = pppuVar19;
          *(undefined **)(puVar1 + -8) = puVar20;
          if ((bRam0000000003eb5862 & 1) == 0) {
            func_0x00f78a20(0x3d3b670);
            bRam0000000003eb5862 = 1;
          }
          uVar12 = *(ulong *)(lVar5 + 0x10);
          if (uVar12 != 0) break;
          auVar21 = func_0x00f78af4();
          lVar14 = auVar21._0_8_;
          *(undefined8 *)(puVar1 + -0x70) = unaff_x26;
          *(undefined8 *)(puVar1 + -0x68) = unaff_x25;
          *(undefined8 *)(puVar1 + -0x60) = unaff_x24;
          *(undefined8 *)(puVar1 + -0x58) = 0x3eb5000;
          *(ulong *)(puVar1 + -0x50) = uVar11;
          *(long *)(puVar1 + -0x48) = lVar17;
          *(undefined8 *)(puVar1 + -0x40) = 0x3eb5000;
          *(long *)(puVar1 + -0x38) = lVar5;
          *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
          *(undefined **)(puVar1 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
          pppuVar19 = (undefined8 ***)(puVar1 + -0x30);
          *(long *)(puVar1 + -0x80) = auVar21._8_8_;
          *(long *)(puVar1 + -0x78) = lVar13;
          uVar18 = 0x3eb5000;
          if ((bRam0000000003eb5863 & 1) == 0) {
            func_0x00f78a20(0x3d3b660);
            func_0x00f78a20(0x3d3ee80);
            bRam0000000003eb5863 = 1;
          }
          *(undefined8 *)(puVar1 + -0xb0) = 0;
          *(undefined8 *)(puVar1 + -0xa8) = 0;
          *(undefined8 *)(puVar1 + -0xa0) = 0;
          puVar20 = &UNK_01661a5c;
          puVar1 = puVar1 + -0xd0;
          lVar5 = lVar14;
        }
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        uVar18 = uVar12;
        if (0 < *(int *)(uVar12 + 0x18)) {
          uVar18 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar12 + 0x10),0,*(int *)(uVar12 + 0x18),0);
          *(undefined4 *)(uVar12 + 0x18) = 0;
        }
        *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
        return uVar18;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,8,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(uVar12,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar12,uVar11,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar12,lVar17,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar12,uVar18,0);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar12;
      puVar2 = &uStack_d0;
      pppuVar19 = (undefined8 ***)ppuStack_e0;
      puVar20 = puStack_d8;
      goto code_r0x016cda04;
    }
    uVar8 = 2;
    puVar20 = &UNK_0165b5d0;
    param_2 = extraout_x1;
    param_1 = extraout_x1;
    uVar18 = param_4;
  }
  else {
    Core_Networking_HostCarUpdate__StartCarsVector(param_2,*(undefined4 *)(param_3 + 0x18));
    uVar12 = (ulong)*(uint *)(param_3 + 0x18);
    if (0 < (int)*(uint *)(param_3 + 0x18)) {
      lVar17 = 0;
      uVar18 = 0;
      do {
        if ((uVar12 & 0xffffffff) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar13 = *(long *)(param_3 + 0x10) + lVar17;
        param_4 = (ulong)*(uint *)(lVar13 + 0x28);
        Core_Networking_Car__CreateCar
                  (param_2,*(undefined4 *)(lVar13 + 0x20),(long)*(char *)(lVar13 + 0x25));
        uVar18 = uVar18 + 1;
        uVar12 = (ulong)*(int *)(param_3 + 0x18);
        lVar17 = lVar17 + 0x20;
      } while ((long)uVar18 < (long)uVar12);
    }
    uVar12 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(param_2,0);
    uVar8 = 1;
    puVar20 = (undefined *)0x165b524;
    uVar18 = param_2;
    pppuVar19 = (undefined8 ***)&stack0xfffffffffffffff0;
  }
  puVar2 = (undefined8 *)((long)puVar3 + -0x30);
  *(long *)((long)puVar3 + -0x30) = lVar17;
  *(ulong *)((long)puVar3 + -0x28) = uVar12;
  *(ulong *)((long)puVar3 + -0x20) = uVar18;
  *(ulong *)((long)puVar3 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar19;
  *(undefined **)((long)puVar3 + -8) = puVar20;
  pppuVar19 = (undefined8 ***)((long)puVar3 + -0x10);
  uVar16 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,uVar8,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_2);
  if (*(long *)(param_2 + 0x28) == 0) {
    puVar20 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar21 = func_0x00f78af4();
    puVar1 = (undefined1 *)((long)puVar3 + -0x30);
    while( true ) {
      puVar2 = (undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x20) = uVar8;
      *(ulong *)(puVar1 + -0x18) = param_2;
      *(undefined8 ****)(puVar1 + -0x10) = pppuVar19;
      *(undefined **)(puVar1 + -8) = puVar20;
      pppuVar19 = (undefined8 ***)(puVar1 + -0x10);
      if (auVar21._8_4_ < *(int *)(auVar21._0_8_ + 0x30)) break;
      func_0x00f78a24(0x3d22738);
      uVar6 = func_0x00f78aec();
      uVar7 = func_0x00f78a24(0x3d6ceb8);
      uVar9 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar6,uVar7);
      uVar7 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar6,uVar7);
      func_0x00f78af4();
      uVar7 = func_0x00f78b24();
      auVar21 = func_0x00f78ac0(uVar7,0);
      uVar12 = auVar21._0_8_;
      *(long *)(puVar1 + -0x50) = lVar17;
      *(undefined8 *)(puVar1 + -0x48) = uVar16;
      *(undefined8 *)(puVar1 + -0x40) = uVar8;
      *(undefined8 *)(puVar1 + -0x38) = uVar6;
      *(undefined8 ****)(puVar1 + -0x30) = pppuVar19;
      *(undefined **)(puVar1 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar9 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar9);
      pppuVar19 = *(undefined8 ****)(puVar1 + -0x30);
      puVar20 = *(undefined **)(puVar1 + -0x28);
      uVar8 = *(undefined8 *)(puVar1 + -0x40);
      param_2 = *(ulong *)(puVar1 + -0x38);
      lVar17 = *(long *)(puVar1 + -0x50);
      uVar16 = *(undefined8 *)(puVar1 + -0x48);
      puVar1 = puVar1 + -0x20;
    }
    puVar20 = &UNK_016ce3a4;
  }
  else {
    uVar16 = extraout_x1_01;
    if (*(int *)(*(long *)(param_2 + 0x28) + 0x18) < 0) {
      auVar21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar8);
      uVar16 = auVar21._8_8_;
      *(long *)(param_2 + 0x28) = auVar21._0_8_;
    }
    auVar21._8_8_ = uVar16;
    auVar21._0_8_ = param_2;
    *(undefined4 *)(param_2 + 0x30) = 0;
    puVar20 = &UNK_016ce320;
  }
code_r0x016cda04:
  lVar17 = auVar21._0_8_;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar19;
  *(undefined **)((long)puVar2 + -8) = puVar20;
  if ((*(long *)(lVar17 + 0x18) != 0) &&
     (lVar13 = *(long *)(*(long *)(lVar17 + 0x18) + 0x10), lVar13 != 0)) {
    return (ulong)(uint)(*(int *)(lVar13 + 0x18) - *(int *)(lVar17 + 0x10));
  }
  lVar17 = func_0x00f78af4(lVar17,auVar21._8_8_);
  return (ulong)*(byte *)(lVar17 + 0x48);
}



// ============================================================
// RVA: 0x165b5a0 | Core.Networking.NetworkServicesOutput.HostUpdateHolderToFlatBuffer
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
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
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                (undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x1;
  undefined8 extraout_x1_00;
  long lVar8;
  undefined8 uVar9;
  char cVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 unaff_x21;
  long *plVar15;
  undefined8 uVar16;
  undefined8 unaff_x22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ****ppppuVar17;
  undefined1 ***pppuVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 ***apppuStack_b0 [4];
  undefined8 uStack_88;
  long lStack_78;
  undefined1 ***apppuStack_70 [2];
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  
  ppuStack_40 = (undefined1 **)&stack0xfffffffffffffff0;
  if (param_2 == 0) {
    auVar20 = func_0x00f78af4();
    lVar12 = auVar20._8_8_;
    puStack_38 = &Core_Networking_NetworkServicesOutput__WriteToOtherPlayers;
    if (lVar12 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*(int *)(lVar12 + 0x18) != 0) {
        lVar8 = lVar12 + 0x20;
      }
    }
    lVar12 = *(long *)(auVar20._0_8_ + 0x10);
    uVar3 = param_3;
    uVar6 = param_4;
    if (lVar12 != 0) {
      plVar15 = *(long **)(lVar12 + 0x30);
      uVar14 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar8,0);
      unaff_x21 = 0;
      if (plVar15 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar15 + 0x248))
                          (plVar15,uVar14,param_3,param_4,*(undefined8 *)(*plVar15 + 0x250));
        return uVar3;
      }
    }
    cVar10 = (char)uVar6;
    func_0x00f78af4();
    apppuStack_70[1] = (undefined1 ***)&Core_Networking_NetworkServicesOutput__WriteVoteToHost;
    uStack_88 = unaff_x21;
    apppuStack_70[0] = &ppuStack_40;
    if (extraout_x1 == 0) {
      puVar19 = &Core_Networking_NetworkVote__ToFlatBuffer;
      auVar20 = func_0x00f78af4();
      param_2 = auVar20._8_8_;
      puVar4 = auVar20._0_8_;
      uVar3 = (ulong)*puVar4;
      lVar12 = (long)(short)puVar4[1];
      uVar11 = (ulong)(char)puVar4[2];
    }
    else {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(extraout_x1,0);
      lVar12 = (long)(uVar3 << 0x10) >> 0x30;
      uVar11 = (ulong)(uint)(int)cVar10;
      puVar19 = &UNK_0165b6c4;
      param_2 = extraout_x1;
    }
    ppppuVar17 = apppuStack_b0 + 2;
    lVar8 = lVar12;
    apppuStack_b0[2] = (undefined1 ***)apppuStack_70;
    apppuStack_b0[3] = (undefined1 ***)puVar19;
    if ((bRam0000000003eb5873 & 1) == 0) {
      func_0x00f78a20(0x3d3f298);
      bRam0000000003eb5873 = 1;
    }
    if (param_2 == 0) {
      puVar19 = &Core_Networking_NetworkVoteUpdate__Clear;
      lVar5 = func_0x00f78af4();
      lVar13 = 0;
      puVar1 = &stack0xffffffffffffff30;
      while( true ) {
        *(ulong *)(puVar1 + -0x20) = uVar3;
        *(long *)(puVar1 + -0x18) = lVar13;
        *(undefined1 *****)(puVar1 + -0x10) = ppppuVar17;
        *(undefined **)(puVar1 + -8) = puVar19;
        if ((bRam0000000003eb5862 & 1) == 0) {
          func_0x00f78a20(0x3d3b670);
          bRam0000000003eb5862 = 1;
        }
        uVar3 = *(ulong *)(lVar5 + 0x10);
        if (uVar3 != 0) break;
        auVar20 = func_0x00f78af4();
        lVar13 = auVar20._0_8_;
        *(undefined8 *)(puVar1 + -0x70) = unaff_x26;
        *(undefined8 *)(puVar1 + -0x68) = unaff_x25;
        *(undefined8 *)(puVar1 + -0x60) = unaff_x24;
        *(undefined8 *)(puVar1 + -0x58) = 0x3eb5000;
        *(ulong *)(puVar1 + -0x50) = uVar11;
        *(long *)(puVar1 + -0x48) = lVar12;
        *(undefined8 *)(puVar1 + -0x40) = 0x3eb5000;
        *(long *)(puVar1 + -0x38) = lVar5;
        *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
        *(undefined **)(puVar1 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
        ppppuVar17 = (undefined1 ****)(puVar1 + -0x30);
        *(long *)(puVar1 + -0x80) = auVar20._8_8_;
        *(long *)(puVar1 + -0x78) = lVar8;
        uVar3 = 0x3eb5000;
        if ((bRam0000000003eb5863 & 1) == 0) {
          func_0x00f78a20(0x3d3b660);
          func_0x00f78a20(0x3d3ee80);
          bRam0000000003eb5863 = 1;
        }
        *(undefined8 *)(puVar1 + -0xb0) = 0;
        *(undefined8 *)(puVar1 + -0xa8) = 0;
        *(undefined8 *)(puVar1 + -0xa0) = 0;
        puVar19 = &UNK_01661a5c;
        puVar1 = puVar1 + -0xd0;
        lVar5 = lVar13;
      }
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      uVar11 = uVar3;
      if (0 < *(int *)(uVar3 + 0x18)) {
        uVar11 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar3 + 0x10),0,*(int *)(uVar3 + 0x18),0);
        *(undefined4 *)(uVar3 + 0x18) = 0;
      }
      *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
      return uVar11;
    }
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,8,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,1,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_2,uVar11,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,lVar12,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_2,uVar3,0);
    uVar6 = 0;
    puVar2 = &stack0xffffffffffffff70;
    ppppuVar17 = (undefined1 ****)apppuStack_b0[2];
    pppuVar18 = apppuStack_b0[3];
  }
  else {
    puVar2 = &stack0xffffffffffffffa0;
    puStack_38 = (undefined *)0x165b5d0;
    ppppuVar17 = (undefined1 ****)&ppuStack_40;
    uVar14 = 2;
    uVar16 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,2,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_2);
    if (*(long *)(param_2 + 0x28) == 0) {
      puVar19 = &FlatBuffers_FlatBufferBuilder__Slot;
      auVar20 = func_0x00f78af4();
      puVar1 = &stack0xffffffffffffffa0;
      lVar12 = param_2;
      while( true ) {
        uVar6 = auVar20._8_8_;
        param_2 = auVar20._0_8_;
        puVar2 = puVar1 + -0x20;
        *(undefined8 *)(puVar1 + -0x20) = uVar14;
        *(long *)(puVar1 + -0x18) = lVar12;
        *(undefined1 *****)(puVar1 + -0x10) = ppppuVar17;
        *(undefined **)(puVar1 + -8) = puVar19;
        if (auVar20._8_4_ < *(int *)(param_2 + 0x30)) break;
        func_0x00f78a24(0x3d22738);
        uVar6 = func_0x00f78aec();
        uVar7 = func_0x00f78a24(0x3d6ceb8);
        uVar9 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar6,uVar7);
        uVar7 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar6,uVar7);
        func_0x00f78af4();
        uVar7 = func_0x00f78b24();
        auVar20 = func_0x00f78ac0(uVar7,0);
        uVar3 = auVar20._0_8_;
        *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
        *(undefined8 *)(puVar1 + -0x48) = uVar16;
        *(undefined8 *)(puVar1 + -0x40) = uVar14;
        *(undefined8 *)(puVar1 + -0x38) = uVar6;
        *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
        *(undefined **)(puVar1 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
        if (((int)uVar9 == (int)param_4) && (*(char *)(uVar3 + 0x48) == '\0')) {
          return uVar3;
        }
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar3,1,0);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar3,uVar9);
        ppppuVar17 = *(undefined1 *****)(puVar1 + -0x30);
        puVar19 = *(undefined **)(puVar1 + -0x28);
        uVar14 = *(undefined8 *)(puVar1 + -0x40);
        lVar12 = *(long *)(puVar1 + -0x38);
        unaff_x22 = *(undefined8 *)(puVar1 + -0x50);
        uVar16 = *(undefined8 *)(puVar1 + -0x48);
        puVar1 = puVar1 + -0x20;
      }
      ppppuVar17 = (undefined1 ****)(puVar1 + -0x10);
      pppuVar18 = (undefined1 ***)&UNK_016ce3a4;
    }
    else {
      uVar6 = extraout_x1_00;
      if (*(int *)(*(long *)(param_2 + 0x28) + 0x18) < 2) {
        auVar20 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        uVar6 = auVar20._8_8_;
        *(long *)(param_2 + 0x28) = auVar20._0_8_;
      }
      *(undefined4 *)(param_2 + 0x30) = 2;
      pppuVar18 = (undefined1 ***)&UNK_016ce320;
    }
  }
  *(undefined1 *****)(puVar2 + -0x10) = ppppuVar17;
  *(undefined1 ****)(puVar2 + -8) = pppuVar18;
  if ((*(long *)(param_2 + 0x18) != 0) &&
     (lVar12 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar12 != 0)) {
    return (ulong)(uint)(*(int *)(lVar12 + 0x18) - *(int *)(param_2 + 0x10));
  }
  lVar12 = func_0x00f78af4(param_2,uVar6);
  return (ulong)*(byte *)(lVar12 + 0x48);
}



// ============================================================
// RVA: 0x165b600 | Core.Networking.NetworkServicesOutput.WriteToOtherPlayers
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x016ce2a4) */
/* WARNING: Removing unreachable block (ram,0x016ce2c8) */
/* WARNING: Removing unreachable block (ram,0x016ce2dc) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Removing unreachable block (ram,0x016ce2e0) */
/* WARNING: Removing unreachable block (ram,0x016ce37c) */
/* WARNING: Removing unreachable block (ram,0x016ce380) */
/* WARNING: Removing unreachable block (ram,0x016ce3c8) */
/* WARNING: Removing unreachable block (ram,0x016ce410) */
/* WARNING: Removing unreachable block (ram,0x016ce414) */
/* WARNING: Removing unreachable block (ram,0x016ce444) */
/* WARNING: Removing unreachable block (ram,0x016ce45c) */
/* WARNING: Removing unreachable block (ram,0x016ce44c) */
/* WARNING: Removing unreachable block (ram,0x016ce398) */
/* WARNING: Removing unreachable block (ram,0x016ce2f0) */
/* WARNING: Removing unreachable block (ram,0x016ce2fc) */
/* WARNING: Removing unreachable block (ram,0x016ce314) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x016cef90) */
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
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */

ulong Core_Networking_NetworkServicesOutput__WriteToOtherPlayers
                (long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long extraout_x1;
  long lVar7;
  long lVar8;
  char cVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ***pppuVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(int *)(param_2 + 0x18) != 0) {
      lVar7 = param_2 + 0x20;
    }
  }
  uVar3 = param_3;
  uVar10 = param_4;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x30);
    uVar2 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar7,0);
    if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165b678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar12 + 0x248))
                        (plVar12,uVar2,param_3,param_4,*(undefined8 *)(*plVar12 + 0x250));
      return uVar3;
    }
  }
  cVar9 = (char)uVar10;
  func_0x00f78af4();
  puStack_38 = &Core_Networking_NetworkServicesOutput__WriteVoteToHost;
  puStack_40 = &stack0xfffffffffffffff0;
  if (extraout_x1 == 0) {
    puVar14 = &Core_Networking_NetworkVote__ToFlatBuffer;
    auVar15 = func_0x00f78af4();
    lVar5 = auVar15._8_8_;
    puVar4 = auVar15._0_8_;
    uVar3 = (ulong)*puVar4;
    lVar7 = (long)(short)puVar4[1];
    uVar11 = (ulong)(char)puVar4[2];
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(extraout_x1,0);
    lVar7 = (long)(uVar3 << 0x10) >> 0x30;
    uVar11 = (ulong)(uint)(int)cVar9;
    puVar14 = &UNK_0165b6c4;
    lVar5 = extraout_x1;
  }
  pppuVar13 = &ppuStack_70;
  lVar8 = lVar7;
  ppuStack_70 = &puStack_40;
  puStack_68 = puVar14;
  if ((bRam0000000003eb5873 & 1) == 0) {
    func_0x00f78a20(0x3d3f298);
    bRam0000000003eb5873 = 1;
  }
  if (lVar5 == 0) {
    puVar14 = &Core_Networking_NetworkVoteUpdate__Clear;
    lVar6 = func_0x00f78af4();
    lVar5 = 0;
    puVar1 = &stack0xffffffffffffff60;
    while( true ) {
      *(ulong *)(puVar1 + -0x20) = uVar3;
      *(long *)(puVar1 + -0x18) = lVar5;
      *(undefined1 ****)(puVar1 + -0x10) = pppuVar13;
      *(undefined **)(puVar1 + -8) = puVar14;
      if ((bRam0000000003eb5862 & 1) == 0) {
        func_0x00f78a20(0x3d3b670);
        bRam0000000003eb5862 = 1;
      }
      uVar3 = *(ulong *)(lVar6 + 0x10);
      if (uVar3 != 0) break;
      auVar15 = func_0x00f78af4();
      lVar5 = auVar15._0_8_;
      *(undefined8 *)(puVar1 + -0x70) = unaff_x26;
      *(undefined8 *)(puVar1 + -0x68) = unaff_x25;
      *(undefined8 *)(puVar1 + -0x60) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x58) = 0x3eb5000;
      *(ulong *)(puVar1 + -0x50) = uVar11;
      *(long *)(puVar1 + -0x48) = lVar7;
      *(undefined8 *)(puVar1 + -0x40) = 0x3eb5000;
      *(long *)(puVar1 + -0x38) = lVar6;
      *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
      pppuVar13 = (undefined1 ***)(puVar1 + -0x30);
      *(long *)(puVar1 + -0x80) = auVar15._8_8_;
      *(long *)(puVar1 + -0x78) = lVar8;
      uVar3 = 0x3eb5000;
      if ((bRam0000000003eb5863 & 1) == 0) {
        func_0x00f78a20(0x3d3b660);
        func_0x00f78a20(0x3d3ee80);
        bRam0000000003eb5863 = 1;
      }
      *(undefined8 *)(puVar1 + -0xb0) = 0;
      *(undefined8 *)(puVar1 + -0xa8) = 0;
      *(undefined8 *)(puVar1 + -0xa0) = 0;
      puVar14 = &UNK_01661a5c;
      puVar1 = puVar1 + -0xd0;
      lVar6 = lVar5;
    }
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    uVar11 = uVar3;
    if (0 < *(int *)(uVar3 + 0x18)) {
      uVar11 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar3 + 0x10),0,*(int *)(uVar3 + 0x18),0);
      *(undefined4 *)(uVar3 + 0x18) = 0;
    }
    *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
    return uVar11;
  }
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar5,4,8,0);
  /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar5,1,0);
  /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(lVar5,uVar11,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar5,lVar7,0);
  /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(lVar5,uVar3,0);
  if ((*(long *)(lVar5 + 0x18) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar5 + 0x18) + 0x10), lVar7 != 0)) {
    return (ulong)(uint)(*(int *)(lVar7 + 0x18) - *(int *)(lVar5 + 0x10));
  }
  lVar7 = func_0x00f78af4(lVar5,0);
  return (ulong)*(byte *)(lVar7 + 0x48);
}



// ============================================================
// RVA: 0x165b680 | Core.Networking.NetworkServicesOutput.WriteVoteToHost
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x016ce2a4) */
/* WARNING: Removing unreachable block (ram,0x016ce2c8) */
/* WARNING: Removing unreachable block (ram,0x016ce2dc) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Removing unreachable block (ram,0x016ce2e0) */
/* WARNING: Removing unreachable block (ram,0x016ce37c) */
/* WARNING: Removing unreachable block (ram,0x016ce380) */
/* WARNING: Removing unreachable block (ram,0x016ce3c8) */
/* WARNING: Removing unreachable block (ram,0x016ce410) */
/* WARNING: Removing unreachable block (ram,0x016ce414) */
/* WARNING: Removing unreachable block (ram,0x016ce444) */
/* WARNING: Removing unreachable block (ram,0x016ce45c) */
/* WARNING: Removing unreachable block (ram,0x016ce44c) */
/* WARNING: Removing unreachable block (ram,0x016ce398) */
/* WARNING: Removing unreachable block (ram,0x016ce2f0) */
/* WARNING: Removing unreachable block (ram,0x016ce2fc) */
/* WARNING: Removing unreachable block (ram,0x016ce314) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x016cef90) */
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
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */

ulong Core_Networking_NetworkServicesOutput__WriteVoteToHost
                (undefined8 param_1,long param_2,ulong param_3,char param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_2 == 0) {
    puVar10 = &Core_Networking_NetworkVote__ToFlatBuffer;
    auVar11 = func_0x00f78af4();
    param_2 = auVar11._8_8_;
    puVar2 = auVar11._0_8_;
    param_3 = (ulong)*puVar2;
    lVar5 = (long)(short)puVar2[1];
    uVar7 = (ulong)(char)puVar2[2];
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0);
    lVar5 = (long)(param_3 << 0x10) >> 0x30;
    uVar7 = (ulong)(uint)(int)param_4;
    puVar10 = (undefined *)0x165b6c4;
  }
  ppuVar9 = &puStack_40;
  lVar6 = lVar5;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar10;
  if ((bRam0000000003eb5873 & 1) == 0) {
    func_0x00f78a20(0x3d3f298);
    bRam0000000003eb5873 = 1;
  }
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,8,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,1,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_2,uVar7,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,lVar5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_2,param_3,0);
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar5 != 0)) {
      return (ulong)(uint)(*(int *)(lVar5 + 0x18) - *(int *)(param_2 + 0x10));
    }
    lVar5 = func_0x00f78af4(param_2,0);
    return (ulong)*(byte *)(lVar5 + 0x48);
  }
  puVar10 = &Core_Networking_NetworkVoteUpdate__Clear;
  lVar3 = func_0x00f78af4();
  lVar8 = 0;
  puVar1 = &stack0xffffffffffffff90;
  while( true ) {
    *(ulong *)(puVar1 + -0x20) = param_3;
    *(long *)(puVar1 + -0x18) = lVar8;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    if ((bRam0000000003eb5862 & 1) == 0) {
      func_0x00f78a20(0x3d3b670);
      bRam0000000003eb5862 = 1;
    }
    uVar4 = *(ulong *)(lVar3 + 0x10);
    if (uVar4 != 0) break;
    auVar11 = func_0x00f78af4();
    lVar8 = auVar11._0_8_;
    *(undefined8 *)(puVar1 + -0x70) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x68) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x60) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x58) = 0x3eb5000;
    *(ulong *)(puVar1 + -0x50) = uVar7;
    *(long *)(puVar1 + -0x48) = lVar5;
    *(undefined8 *)(puVar1 + -0x40) = 0x3eb5000;
    *(long *)(puVar1 + -0x38) = lVar3;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
    ppuVar9 = (undefined1 **)(puVar1 + -0x30);
    *(long *)(puVar1 + -0x80) = auVar11._8_8_;
    *(long *)(puVar1 + -0x78) = lVar6;
    param_3 = 0x3eb5000;
    if ((bRam0000000003eb5863 & 1) == 0) {
      func_0x00f78a20(0x3d3b660);
      func_0x00f78a20(0x3d3ee80);
      bRam0000000003eb5863 = 1;
    }
    *(undefined8 *)(puVar1 + -0xb0) = 0;
    *(undefined8 *)(puVar1 + -0xa8) = 0;
    *(undefined8 *)(puVar1 + -0xa0) = 0;
    puVar10 = &UNK_01661a5c;
    puVar1 = puVar1 + -0xd0;
    lVar3 = lVar8;
  }
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  uVar7 = uVar4;
  if (0 < *(int *)(uVar4 + 0x18)) {
    uVar7 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar4 + 0x10),0,*(int *)(uVar4 + 0x18),0);
    *(undefined4 *)(uVar4 + 0x18) = 0;
  }
  *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
  return uVar7;
}



// ============================================================
// RVA: 0x165b768 | Core.Networking.NetworkServicesOutput.WriteStartVoting
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165bb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165bb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165bb34) */
/* WARNING: Removing unreachable block (ram,0x0165b9fc) */
/* WARNING: Removing unreachable block (ram,0x0165b9b8) */
/* WARNING: Removing unreachable block (ram,0x0165b984) */
/* WARNING: Removing unreachable block (ram,0x0165b8a4) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b7f8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x0165bb8c) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkServicesOutput__WriteStartVoting
                (undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5
                ,undefined8 param_6,undefined4 *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ****ppppuVar23;
  undefined *puVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong auStack_130 [3];
  undefined1 uStack_114;
  undefined8 uStack_118;
  ulong auStack_110 [2];
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = param_1;
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0);
    uVar10 = Core_Networking_HostVoteStart__CreateHostVoteStart
                       (param_2,param_3,param_4,param_5,param_6,*param_7);
    uVar9 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                      (uVar10,param_2,2,uVar10);
    uVar11 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_2,uVar9,0);
    puVar24 = (undefined *)0x165b7f8;
    puVar8 = (undefined8 *)&stack0xffffffffffffffb0;
    ppppuVar23 = (undefined8 ****)&stack0xfffffffffffffff0;
    goto FlatBuffers_FlatBufferBuilder__Finish;
  }
  auVar28 = func_0x00f78af4();
  param_2 = auVar28._8_8_;
  puVar8 = (undefined8 *)&stack0xffffffffffffff80;
  puStack_58 = &Core_Networking_NetworkServicesOutput__WriteVoteResult;
  ppppuVar23 = &pppuStack_60;
  pppuStack_60 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0);
    uVar10 = Core_Networking_HostVoteResult__CreateHostVoteResult(param_2,param_3,param_4);
    uVar9 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                      (uVar10,param_2,4,uVar10);
    uVar11 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_2,uVar9,0);
    puVar24 = &UNK_0165b8a4;
    goto FlatBuffers_FlatBufferBuilder__Finish;
  }
  auVar30 = func_0x00f78af4();
  uVar11 = auVar30._8_8_;
  uStack_d8 = auVar30._0_8_;
  puStack_88 = &Core_Networking_NetworkServicesOutput__WriteVote;
  uVar10 = 0x3eb5000;
  lVar14 = param_3;
  pppuStack_90 = ppppuVar23;
  if ((bRam0000000003eb5831 & 1) == 0) {
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b690);
    bRam0000000003eb5831 = 1;
  }
  lStack_e8 = param_3;
  uStack_e0 = uVar11;
  pppuStack_d0 = &pppuStack_90;
  if ((uVar11 != 0) && (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar11,0), param_3 != 0)) {
    Core_Networking_HostVoteUpdate__StartVotesVector(uVar11,*(undefined4 *)(param_3 + 0x18));
    if (*(int *)(param_3 + 0x18) < 1) {
      lStack_e8 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(uVar11,0);
      puVar6 = &stack0xffffffffffffff10;
      uStack_f0 = 0x3eb5000;
      puStack_c8 = &UNK_0165b9b8;
      ppppuVar23 = &pppuStack_d0;
      uVar21 = 1;
      uVar22 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,1,0);
        auVar30._8_8_ = uStack_e0;
        auVar30._0_8_ = uStack_d8;
        bRam0000000003eb5cd7 = 1;
      }
      uStack_e0 = auVar30._8_8_;
      uStack_d8 = auVar30._0_8_;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(uVar11);
      if (*(long *)(uVar11 + 0x28) == 0) {
        puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar29 = func_0x00f78af4();
        puVar7 = (undefined1 *)&stack0xffffffffffffff10;
        while( true ) {
          puVar6 = (undefined8 *)(puVar7 + -0x20);
          *(undefined8 *)(puVar7 + -0x20) = uVar21;
          *(ulong *)(puVar7 + -0x18) = uVar11;
          *(undefined8 *****)(puVar7 + -0x10) = ppppuVar23;
          *(undefined **)(puVar7 + -8) = puVar24;
          if (auVar29._8_4_ < *(int *)(auVar29._0_8_ + 0x30)) break;
          func_0x00f78a24(0x3d22738);
          uVar15 = func_0x00f78aec();
          uVar16 = func_0x00f78a24(0x3d6ceb8);
          uVar18 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar16);
          uVar16 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar15,uVar16);
          func_0x00f78af4();
          uVar16 = func_0x00f78b24();
          auVar29 = func_0x00f78ac0(uVar16,0);
          uVar11 = auVar29._0_8_;
          *(undefined8 *)(puVar7 + -0x50) = uVar10;
          *(undefined8 *)(puVar7 + -0x48) = uVar22;
          *(undefined8 *)(puVar7 + -0x40) = uVar21;
          *(undefined8 *)(puVar7 + -0x38) = uVar15;
          *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
          if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
            return uVar11;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1,0);
          /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
          ppppuVar23 = *(undefined8 *****)(puVar7 + -0x30);
          puVar24 = *(undefined **)(puVar7 + -0x28);
          uVar21 = *(undefined8 *)(puVar7 + -0x40);
          uVar11 = *(ulong *)(puVar7 + -0x38);
          uVar10 = *(undefined8 *)(puVar7 + -0x50);
          uVar22 = *(undefined8 *)(puVar7 + -0x48);
          puVar7 = puVar7 + -0x20;
        }
        ppppuVar23 = (undefined8 ****)(puVar7 + -0x10);
        puVar24 = &UNK_016ce3a4;
      }
      else {
        uVar10 = extraout_x1;
        if (*(int *)(*(long *)(uVar11 + 0x28) + 0x18) < 1) {
          auVar28 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
          uVar10 = auVar28._8_8_;
          *(long *)(uVar11 + 0x28) = auVar28._0_8_;
        }
        auVar29._8_8_ = uVar10;
        auVar29._0_8_ = uVar11;
        *(undefined4 *)(uVar11 + 0x30) = 1;
        puVar24 = &UNK_016ce320;
      }
    }
    else {
      if (*(int *)(param_3 + 0x18) == 0) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar14 = *(long *)(param_3 + 0x10);
      lVar19 = (long)*(short *)(lVar14 + 0x24);
      uVar17 = (ulong)*(uint *)(lVar14 + 0x20);
      cVar4 = *(char *)(lVar14 + 0x28);
      uStack_f0 = 0;
      puStack_c8 = &UNK_0165b984;
      ppppuVar23 = &pppuStack_d0;
      lVar14 = lVar19;
      if ((bRam0000000003eb5873 & 1) == 0) {
        func_0x00f78a20(0x3d3f298);
        auVar30._8_8_ = uStack_e0;
        auVar30._0_8_ = uStack_d8;
        bRam0000000003eb5873 = 1;
      }
      uStack_e0 = auVar30._8_8_;
      uStack_d8 = auVar30._0_8_;
      if (uVar11 == 0) {
        puVar24 = &Core_Networking_NetworkVoteUpdate__Clear;
        lVar13 = func_0x00f78af4();
        lVar20 = 0;
        puVar7 = &stack0xffffffffffffff00;
        while( true ) {
          *(ulong *)(puVar7 + -0x20) = uVar17;
          *(long *)(puVar7 + -0x18) = lVar20;
          *(undefined8 *****)(puVar7 + -0x10) = ppppuVar23;
          *(undefined **)(puVar7 + -8) = puVar24;
          if ((bRam0000000003eb5862 & 1) == 0) {
            func_0x00f78a20(0x3d3b670);
            bRam0000000003eb5862 = 1;
          }
          uVar11 = *(ulong *)(lVar13 + 0x10);
          if (uVar11 != 0) break;
          auVar28 = func_0x00f78af4();
          lVar20 = auVar28._0_8_;
          *(undefined8 *)(puVar7 + -0x70) = unaff_x26;
          *(undefined8 *)(puVar7 + -0x68) = unaff_x25;
          *(undefined8 *)(puVar7 + -0x60) = unaff_x24;
          *(undefined8 *)(puVar7 + -0x58) = 0x3eb5000;
          *(long *)(puVar7 + -0x50) = (long)cVar4;
          *(long *)(puVar7 + -0x48) = lVar19;
          *(undefined8 *)(puVar7 + -0x40) = 0x3eb5000;
          *(long *)(puVar7 + -0x38) = lVar13;
          *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
          ppppuVar23 = (undefined8 ****)(puVar7 + -0x30);
          *(long *)(puVar7 + -0x80) = auVar28._8_8_;
          *(long *)(puVar7 + -0x78) = lVar14;
          uVar17 = 0x3eb5000;
          if ((bRam0000000003eb5863 & 1) == 0) {
            func_0x00f78a20(0x3d3b660);
            func_0x00f78a20(0x3d3ee80);
            bRam0000000003eb5863 = 1;
          }
          *(undefined8 *)(puVar7 + -0xb0) = 0;
          *(undefined8 *)(puVar7 + -0xa8) = 0;
          *(undefined8 *)(puVar7 + -0xa0) = 0;
          puVar24 = &UNK_01661a5c;
          puVar7 = puVar7 + -0xd0;
          lVar13 = lVar20;
        }
        *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
        *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
        *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
        *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
        uVar17 = uVar11;
        if (0 < *(int *)(uVar11 + 0x18)) {
          uVar17 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar11 + 0x10),0,*(int *)(uVar11 + 0x18),0);
          *(undefined4 *)(uVar11 + 0x18) = 0;
        }
        *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
        return uVar17;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,8,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(uVar11,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar11,(long)cVar4,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,lVar19,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar11,uVar17,0);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar11;
      puVar6 = (undefined8 *)&stack0xffffffffffffff40;
      ppppuVar23 = (undefined8 ****)pppuStack_d0;
      puVar24 = puStack_c8;
    }
    goto code_r0x016cda04;
  }
  auVar28 = func_0x00f78af4();
  param_2 = auVar28._8_8_;
  puVar8 = &uStack_150;
  uStack_f0 = 0x3eb5000;
  puStack_c8 = &Core_Networking_NetworkServicesOutput__WriteUsableToAllFromClient;
  ppppuVar23 = &pppuStack_d0;
  if ((bRam0000000003eb5832 & 1) == 0) {
    func_0x00f78a20(0x3d32bc0);
    func_0x00f78a20(0x3d32bc8);
    func_0x00f78a20(0x3d32bd0);
    func_0x00f78a20(0x3d3b640);
    func_0x00f78a20(0x3d3b648);
    auVar30._8_8_ = uStack_e0;
    auVar30._0_8_ = uStack_d8;
    bRam0000000003eb5832 = 1;
  }
  uStack_e0 = auVar30._8_8_;
  uStack_d8 = auVar30._0_8_;
  auStack_110[0] = 0;
  auStack_130[1] = 0;
  auStack_130[0] = 0;
  uStack_118 = 0;
  auStack_130[2] = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if ((param_2 == 0) ||
     (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0), auVar30._8_8_ = uStack_e0, auVar30._0_8_ = uStack_d8, lVar14 == 0)
     ) {
    uStack_e0 = auVar30._8_8_;
    uStack_d8 = auVar30._0_8_;
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar12 = (long *)___cxa_begin_catch();
      lVar14 = *plVar12;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$Dispose*/ func_0x01f6e320(&uStack_150,uRam0000000003eb5000);
      if (lVar14 == 0) goto code_r0x0165bb44;
      func_0x00f78ac0(lVar14,0);
    }
    puVar24 = &Core_Networking_NetworkUsable__ToUsableBaseFlatBuffer;
    auVar28 = __Unwind_Resume();
    param_2 = auVar28._8_8_;
    lVar14 = auVar28._0_8_;
    uVar25 = (undefined1)*(undefined4 *)(lVar14 + 0x28);
    uVar26 = (undefined1)*(undefined4 *)(lVar14 + 0x2c);
    uVar27 = (undefined1)*(undefined4 *)(lVar14 + 0x30);
    uVar1 = *(undefined1 *)(lVar14 + 4);
    uVar2 = *(undefined1 *)(lVar14 + 6);
    sVar5 = *(short *)(lVar14 + 8);
    uVar3 = *(undefined1 *)(lVar14 + 10);
    uVar9 = *(undefined4 *)(lVar14 + 0x10);
  }
  else {
    Core_Networking_ClientUsable__StartUsablesVector(param_2,*(undefined4 *)(lVar14 + 0x18));
    /*System.Collections.Generic.List<NetworkUsable>$$GetEnumerator*/ func_0x0241f7c4(&uStack_150,lVar14,uRam0000000003d3b640);
    uVar11 = /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$MoveNext*/ func_0x01f6e324(&uStack_150,uRam0000000003d32bc8);
    if ((uVar11 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$Dispose*/ func_0x01f6e320(&uStack_150,uRam0000000003d32bc0);
code_r0x0165bb44:
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(param_2,0);
      uVar10 = Core_Networking_ClientUsable__CreateClientUsable(param_2,uVar9);
      uVar9 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                        (uVar10,param_2,3,uVar10);
      uVar11 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_2,0,uVar9);
      puVar24 = &UNK_0165bb8c;
FlatBuffers_FlatBufferBuilder__Finish:
      while( true ) {
        uVar17 = uVar11;
        lVar14 = auVar28._8_8_;
        *(ulong *)((long)puVar8 + -0x20) = param_2;
        *(long *)((long)puVar8 + -0x18) = auVar28._0_8_;
        *(undefined8 *****)((long)puVar8 + -0x10) = ppppuVar23;
        *(undefined **)((long)puVar8 + -8) = puVar24;
        ppppuVar23 = (undefined8 ****)((long)puVar8 + -0x10);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
        uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar17);
        if (*(long *)(lVar14 + 0x18) != 0) break;
        puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar30 = func_0x00f78af4();
        auVar28._8_8_ = auVar30._0_8_;
        auVar28._0_8_ = lVar14;
        puVar8 = (undefined8 *)((long)puVar8 + -0x20);
        uVar11 = auVar30._8_8_;
        param_2 = uVar17;
      }
      *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
      return uVar11;
    }
    uVar25 = (undefined1)uStack_118;
    puVar24 = &UNK_0165bb34;
    uVar1 = uStack_140._4_1_;
    uVar2 = uStack_140._6_1_;
    sVar5 = (short)uStack_138;
    uVar3 = uStack_138._2_1_;
    uVar9 = (undefined4)auStack_130[0];
    uVar27 = (undefined1)auStack_110[0];
    uVar26 = uStack_114;
  }
  if ((bRam0000000003eb586e & 1) == 0) {
    func_0x00f78a20(0x3d3f280);
    bRam0000000003eb586e = 1;
  }
  if (param_2 == 0) {
    auVar31 = func_0x00f78af4();
    return (ulong)(((uint)*auVar31._0_8_ & auVar31._8_4_) != 0);
  }
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x18,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar9,0);
  /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
  /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar3,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,(long)sVar5,0);
  /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar2,0);
  /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar1,0);
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0xc,0);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar27,param_2,0);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar26,param_2,0);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar25,param_2,0);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2;
  puVar6 = &uStack_150;
code_r0x016cda04:
  lVar14 = auVar29._0_8_;
  *(undefined8 *****)((long)puVar6 + -0x10) = ppppuVar23;
  *(undefined **)((long)puVar6 + -8) = puVar24;
  if ((*(long *)(lVar14 + 0x18) != 0) &&
     (lVar19 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar19 != 0)) {
    return (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar14 + 0x10));
  }
  lVar14 = func_0x00f78af4(lVar14,auVar29._8_8_);
  return (ulong)*(byte *)(lVar14 + 0x48);
}



// ============================================================
// RVA: 0x165b834 | Core.Networking.NetworkServicesOutput.WriteVoteResult
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165bb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165bb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165bb34) */
/* WARNING: Removing unreachable block (ram,0x0165b9fc) */
/* WARNING: Removing unreachable block (ram,0x0165b9b8) */
/* WARNING: Removing unreachable block (ram,0x0165b984) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b8a4) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x0165bb8c) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkServicesOutput__WriteVoteResult
                (undefined8 param_1,ulong param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ****ppppuVar23;
  undefined *puVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong auStack_e0 [3];
  undefined1 uStack_c4;
  undefined8 uStack_c8;
  ulong auStack_c0 [2];
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = param_1;
  ppppuVar23 = (undefined8 ****)&stack0xfffffffffffffff0;
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0);
    uVar10 = Core_Networking_HostVoteResult__CreateHostVoteResult(param_2,param_3,param_4);
    uVar9 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                      (uVar10,param_2,4,uVar10);
    uVar11 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_2,uVar9,0);
    puVar24 = (undefined *)0x165b8a4;
    puVar8 = (undefined8 *)&stack0xffffffffffffffd0;
    goto FlatBuffers_FlatBufferBuilder__Finish;
  }
  auVar30 = func_0x00f78af4();
  uVar11 = auVar30._8_8_;
  uStack_88 = auVar30._0_8_;
  puStack_38 = &Core_Networking_NetworkServicesOutput__WriteVote;
  uVar10 = 0x3eb5000;
  lVar14 = param_3;
  pppuStack_40 = ppppuVar23;
  if ((bRam0000000003eb5831 & 1) == 0) {
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b690);
    bRam0000000003eb5831 = 1;
  }
  lStack_98 = param_3;
  uStack_90 = uVar11;
  pppuStack_80 = &pppuStack_40;
  if ((uVar11 != 0) && (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar11,0), param_3 != 0)) {
    Core_Networking_HostVoteUpdate__StartVotesVector(uVar11,*(undefined4 *)(param_3 + 0x18));
    if (*(int *)(param_3 + 0x18) < 1) {
      lStack_98 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(uVar11,0);
      puVar6 = &stack0xffffffffffffff60;
      uStack_a0 = 0x3eb5000;
      puStack_78 = &UNK_0165b9b8;
      ppppuVar23 = &pppuStack_80;
      uVar21 = 1;
      uVar22 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,1,0);
        auVar30._8_8_ = uStack_90;
        auVar30._0_8_ = uStack_88;
        bRam0000000003eb5cd7 = 1;
      }
      uStack_90 = auVar30._8_8_;
      uStack_88 = auVar30._0_8_;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(uVar11);
      if (*(long *)(uVar11 + 0x28) == 0) {
        puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar29 = func_0x00f78af4();
        puVar7 = (undefined1 *)&stack0xffffffffffffff60;
        while( true ) {
          puVar6 = (undefined8 *)(puVar7 + -0x20);
          *(undefined8 *)(puVar7 + -0x20) = uVar21;
          *(ulong *)(puVar7 + -0x18) = uVar11;
          *(undefined8 *****)(puVar7 + -0x10) = ppppuVar23;
          *(undefined **)(puVar7 + -8) = puVar24;
          if (auVar29._8_4_ < *(int *)(auVar29._0_8_ + 0x30)) break;
          func_0x00f78a24(0x3d22738);
          uVar15 = func_0x00f78aec();
          uVar16 = func_0x00f78a24(0x3d6ceb8);
          uVar18 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar16);
          uVar16 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar15,uVar16);
          func_0x00f78af4();
          uVar16 = func_0x00f78b24();
          auVar29 = func_0x00f78ac0(uVar16,0);
          uVar11 = auVar29._0_8_;
          *(undefined8 *)(puVar7 + -0x50) = uVar10;
          *(undefined8 *)(puVar7 + -0x48) = uVar22;
          *(undefined8 *)(puVar7 + -0x40) = uVar21;
          *(undefined8 *)(puVar7 + -0x38) = uVar15;
          *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
          if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
            return uVar11;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1,0);
          /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
          ppppuVar23 = *(undefined8 *****)(puVar7 + -0x30);
          puVar24 = *(undefined **)(puVar7 + -0x28);
          uVar21 = *(undefined8 *)(puVar7 + -0x40);
          uVar11 = *(ulong *)(puVar7 + -0x38);
          uVar10 = *(undefined8 *)(puVar7 + -0x50);
          uVar22 = *(undefined8 *)(puVar7 + -0x48);
          puVar7 = puVar7 + -0x20;
        }
        ppppuVar23 = (undefined8 ****)(puVar7 + -0x10);
        puVar24 = &UNK_016ce3a4;
      }
      else {
        uVar10 = extraout_x1;
        if (*(int *)(*(long *)(uVar11 + 0x28) + 0x18) < 1) {
          auVar28 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
          uVar10 = auVar28._8_8_;
          *(long *)(uVar11 + 0x28) = auVar28._0_8_;
        }
        auVar29._8_8_ = uVar10;
        auVar29._0_8_ = uVar11;
        *(undefined4 *)(uVar11 + 0x30) = 1;
        puVar24 = &UNK_016ce320;
      }
    }
    else {
      if (*(int *)(param_3 + 0x18) == 0) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar14 = *(long *)(param_3 + 0x10);
      lVar19 = (long)*(short *)(lVar14 + 0x24);
      uVar17 = (ulong)*(uint *)(lVar14 + 0x20);
      cVar4 = *(char *)(lVar14 + 0x28);
      uStack_a0 = 0;
      puStack_78 = &UNK_0165b984;
      ppppuVar23 = &pppuStack_80;
      lVar14 = lVar19;
      if ((bRam0000000003eb5873 & 1) == 0) {
        func_0x00f78a20(0x3d3f298);
        auVar30._8_8_ = uStack_90;
        auVar30._0_8_ = uStack_88;
        bRam0000000003eb5873 = 1;
      }
      uStack_90 = auVar30._8_8_;
      uStack_88 = auVar30._0_8_;
      if (uVar11 == 0) {
        puVar24 = &Core_Networking_NetworkVoteUpdate__Clear;
        lVar13 = func_0x00f78af4();
        lVar20 = 0;
        puVar7 = &stack0xffffffffffffff50;
        while( true ) {
          *(ulong *)(puVar7 + -0x20) = uVar17;
          *(long *)(puVar7 + -0x18) = lVar20;
          *(undefined8 *****)(puVar7 + -0x10) = ppppuVar23;
          *(undefined **)(puVar7 + -8) = puVar24;
          if ((bRam0000000003eb5862 & 1) == 0) {
            func_0x00f78a20(0x3d3b670);
            bRam0000000003eb5862 = 1;
          }
          uVar11 = *(ulong *)(lVar13 + 0x10);
          if (uVar11 != 0) break;
          auVar28 = func_0x00f78af4();
          lVar20 = auVar28._0_8_;
          *(undefined8 *)(puVar7 + -0x70) = unaff_x26;
          *(undefined8 *)(puVar7 + -0x68) = unaff_x25;
          *(undefined8 *)(puVar7 + -0x60) = unaff_x24;
          *(undefined8 *)(puVar7 + -0x58) = 0x3eb5000;
          *(long *)(puVar7 + -0x50) = (long)cVar4;
          *(long *)(puVar7 + -0x48) = lVar19;
          *(undefined8 *)(puVar7 + -0x40) = 0x3eb5000;
          *(long *)(puVar7 + -0x38) = lVar13;
          *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
          ppppuVar23 = (undefined8 ****)(puVar7 + -0x30);
          *(long *)(puVar7 + -0x80) = auVar28._8_8_;
          *(long *)(puVar7 + -0x78) = lVar14;
          uVar17 = 0x3eb5000;
          if ((bRam0000000003eb5863 & 1) == 0) {
            func_0x00f78a20(0x3d3b660);
            func_0x00f78a20(0x3d3ee80);
            bRam0000000003eb5863 = 1;
          }
          *(undefined8 *)(puVar7 + -0xb0) = 0;
          *(undefined8 *)(puVar7 + -0xa8) = 0;
          *(undefined8 *)(puVar7 + -0xa0) = 0;
          puVar24 = &UNK_01661a5c;
          puVar7 = puVar7 + -0xd0;
          lVar13 = lVar20;
        }
        *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
        *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
        *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
        *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
        uVar17 = uVar11;
        if (0 < *(int *)(uVar11 + 0x18)) {
          uVar17 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar11 + 0x10),0,*(int *)(uVar11 + 0x18),0);
          *(undefined4 *)(uVar11 + 0x18) = 0;
        }
        *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
        return uVar17;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,8,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(uVar11,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar11,(long)cVar4,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,lVar19,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar11,uVar17,0);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar11;
      puVar6 = (undefined8 *)&stack0xffffffffffffff90;
      ppppuVar23 = (undefined8 ****)pppuStack_80;
      puVar24 = puStack_78;
    }
    goto code_r0x016cda04;
  }
  auVar28 = func_0x00f78af4();
  param_2 = auVar28._8_8_;
  puVar8 = &uStack_100;
  uStack_a0 = 0x3eb5000;
  puStack_78 = &Core_Networking_NetworkServicesOutput__WriteUsableToAllFromClient;
  ppppuVar23 = &pppuStack_80;
  if ((bRam0000000003eb5832 & 1) == 0) {
    func_0x00f78a20(0x3d32bc0);
    func_0x00f78a20(0x3d32bc8);
    func_0x00f78a20(0x3d32bd0);
    func_0x00f78a20(0x3d3b640);
    func_0x00f78a20(0x3d3b648);
    auVar30._8_8_ = uStack_90;
    auVar30._0_8_ = uStack_88;
    bRam0000000003eb5832 = 1;
  }
  uStack_90 = auVar30._8_8_;
  uStack_88 = auVar30._0_8_;
  auStack_c0[0] = 0;
  auStack_e0[1] = 0;
  auStack_e0[0] = 0;
  uStack_c8 = 0;
  auStack_e0[2] = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if ((param_2 == 0) ||
     (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0), auVar30._8_8_ = uStack_90, auVar30._0_8_ = uStack_88, lVar14 == 0)
     ) {
    uStack_90 = auVar30._8_8_;
    uStack_88 = auVar30._0_8_;
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar12 = (long *)___cxa_begin_catch();
      lVar14 = *plVar12;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$Dispose*/ func_0x01f6e320(&uStack_100,uRam0000000003eb5000);
      if (lVar14 == 0) goto code_r0x0165bb44;
      func_0x00f78ac0(lVar14,0);
    }
    puVar24 = &Core_Networking_NetworkUsable__ToUsableBaseFlatBuffer;
    auVar28 = __Unwind_Resume();
    param_2 = auVar28._8_8_;
    lVar14 = auVar28._0_8_;
    uVar25 = (undefined1)*(undefined4 *)(lVar14 + 0x28);
    uVar26 = (undefined1)*(undefined4 *)(lVar14 + 0x2c);
    uVar27 = (undefined1)*(undefined4 *)(lVar14 + 0x30);
    uVar1 = *(undefined1 *)(lVar14 + 4);
    uVar2 = *(undefined1 *)(lVar14 + 6);
    sVar5 = *(short *)(lVar14 + 8);
    uVar3 = *(undefined1 *)(lVar14 + 10);
    uVar9 = *(undefined4 *)(lVar14 + 0x10);
  }
  else {
    Core_Networking_ClientUsable__StartUsablesVector(param_2,*(undefined4 *)(lVar14 + 0x18));
    /*System.Collections.Generic.List<NetworkUsable>$$GetEnumerator*/ func_0x0241f7c4(&uStack_100,lVar14,uRam0000000003d3b640);
    uVar11 = /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$MoveNext*/ func_0x01f6e324(&uStack_100,uRam0000000003d32bc8);
    if ((uVar11 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$Dispose*/ func_0x01f6e320(&uStack_100,uRam0000000003d32bc0);
code_r0x0165bb44:
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(param_2,0);
      uVar10 = Core_Networking_ClientUsable__CreateClientUsable(param_2,uVar9);
      uVar9 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                        (uVar10,param_2,3,uVar10);
      uVar11 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_2,0,uVar9);
      puVar24 = &UNK_0165bb8c;
FlatBuffers_FlatBufferBuilder__Finish:
      while( true ) {
        uVar17 = uVar11;
        lVar14 = auVar28._8_8_;
        *(ulong *)((long)puVar8 + -0x20) = param_2;
        *(long *)((long)puVar8 + -0x18) = auVar28._0_8_;
        *(undefined8 *****)((long)puVar8 + -0x10) = ppppuVar23;
        *(undefined **)((long)puVar8 + -8) = puVar24;
        ppppuVar23 = (undefined8 ****)((long)puVar8 + -0x10);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
        uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar17);
        if (*(long *)(lVar14 + 0x18) != 0) break;
        puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar30 = func_0x00f78af4();
        auVar28._8_8_ = auVar30._0_8_;
        auVar28._0_8_ = lVar14;
        puVar8 = (undefined8 *)((long)puVar8 + -0x20);
        uVar11 = auVar30._8_8_;
        param_2 = uVar17;
      }
      *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
      return uVar11;
    }
    uVar25 = (undefined1)uStack_c8;
    puVar24 = &UNK_0165bb34;
    uVar1 = uStack_f0._4_1_;
    uVar2 = uStack_f0._6_1_;
    sVar5 = (short)uStack_e8;
    uVar3 = uStack_e8._2_1_;
    uVar9 = (undefined4)auStack_e0[0];
    uVar27 = (undefined1)auStack_c0[0];
    uVar26 = uStack_c4;
  }
  if ((bRam0000000003eb586e & 1) == 0) {
    func_0x00f78a20(0x3d3f280);
    bRam0000000003eb586e = 1;
  }
  if (param_2 == 0) {
    auVar31 = func_0x00f78af4();
    return (ulong)(((uint)*auVar31._0_8_ & auVar31._8_4_) != 0);
  }
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x18,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar9,0);
  /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
  /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar3,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,(long)sVar5,0);
  /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar2,0);
  /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar1,0);
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0xc,0);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar27,param_2,0);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar26,param_2,0);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar25,param_2,0);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2;
  puVar6 = &uStack_100;
code_r0x016cda04:
  lVar14 = auVar29._0_8_;
  *(undefined8 *****)((long)puVar6 + -0x10) = ppppuVar23;
  *(undefined **)((long)puVar6 + -8) = puVar24;
  if ((*(long *)(lVar14 + 0x18) != 0) &&
     (lVar19 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar19 != 0)) {
    return (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar14 + 0x10));
  }
  lVar14 = func_0x00f78af4(lVar14,auVar29._8_8_);
  return (ulong)*(byte *)(lVar14 + 0x48);
}



// ============================================================
// RVA: 0x165b8d8 | Core.Networking.NetworkServicesOutput.WriteVote
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165bb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165bb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165bb34) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b9fc) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x0165b9b8) */
/* WARNING: Removing unreachable block (ram,0x0165b984) */
/* WARNING: Removing unreachable block (ram,0x0165bb8c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */

ulong Core_Networking_NetworkServicesOutput__WriteVote
                (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int extraout_w1;
  ulong uVar16;
  undefined8 extraout_x1;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *****pppppuVar24;
  undefined *puVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  long alStack_f0 [6];
  undefined1 uStack_bc;
  undefined1 uStack_ba;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long alStack_b0 [3];
  undefined1 uStack_94;
  undefined8 uStack_98;
  long alStack_90 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  
  uVar23 = 0x3eb5000;
  lVar19 = param_3;
  if ((bRam0000000003eb5831 & 1) == 0) {
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b690);
    bRam0000000003eb5831 = 1;
  }
  lStack_68 = param_3;
  lStack_60 = param_2;
  uStack_58 = param_1;
  ppppuStack_50 = (undefined8 ****)&stack0xfffffffffffffff0;
  if ((param_2 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0), param_3 == 0)) {
    auVar29 = func_0x00f78af4();
    param_2 = auVar29._8_8_;
    plVar9 = alStack_f0 + 4;
    uStack_70 = 0x3eb5000;
    puStack_48 = &Core_Networking_NetworkServicesOutput__WriteUsableToAllFromClient;
    pppppuVar24 = &ppppuStack_50;
    if ((bRam0000000003eb5832 & 1) == 0) {
      func_0x00f78a20(0x3d32bc0);
      func_0x00f78a20(0x3d32bc8);
      func_0x00f78a20(0x3d32bd0);
      func_0x00f78a20(0x3d3b640);
      func_0x00f78a20(0x3d3b648);
      bRam0000000003eb5832 = 1;
    }
    alStack_90[0] = 0;
    alStack_b0[1] = 0;
    alStack_b0[0] = 0;
    uStack_98 = 0;
    alStack_b0[2] = 0;
    alStack_f0[5] = 0;
    alStack_f0[4] = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    if ((param_2 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0), lVar19 == 0)) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar11 = (long *)___cxa_begin_catch();
        lVar19 = *plVar11;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$Dispose*/ func_0x01f6e320(alStack_f0 + 4,uRam0000000003eb5000);
        if (lVar19 == 0) goto code_r0x0165bb44;
        func_0x00f78ac0(lVar19,0);
      }
      puVar25 = &Core_Networking_NetworkUsable__ToUsableBaseFlatBuffer;
      auVar29 = __Unwind_Resume();
      param_2 = auVar29._8_8_;
      lVar19 = auVar29._0_8_;
      uVar26 = (undefined1)*(undefined4 *)(lVar19 + 0x28);
      uVar27 = (undefined1)*(undefined4 *)(lVar19 + 0x2c);
      uVar28 = (undefined1)*(undefined4 *)(lVar19 + 0x30);
      uVar1 = *(undefined1 *)(lVar19 + 4);
      uVar2 = *(undefined1 *)(lVar19 + 6);
      sVar5 = *(short *)(lVar19 + 8);
      uVar3 = *(undefined1 *)(lVar19 + 10);
      uVar10 = *(undefined4 *)(lVar19 + 0x10);
    }
    else {
      Core_Networking_ClientUsable__StartUsablesVector(param_2,*(undefined4 *)(lVar19 + 0x18));
      /*System.Collections.Generic.List<NetworkUsable>$$GetEnumerator*/ func_0x0241f7c4(alStack_f0 + 4,lVar19,uRam0000000003d3b640);
      uVar16 = /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$MoveNext*/ func_0x01f6e324(alStack_f0 + 4,uRam0000000003d32bc8);
      if ((uVar16 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$Dispose*/ func_0x01f6e320(alStack_f0 + 4,uRam0000000003d32bc0);
code_r0x0165bb44:
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(param_2,0);
        uVar23 = Core_Networking_ClientUsable__CreateClientUsable(param_2,uVar10);
        uVar10 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                           (uVar23,param_2,3,uVar23);
        lVar19 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_2,0,uVar10);
        puVar25 = &UNK_0165bb8c;
        while( true ) {
          lVar17 = lVar19;
          lVar19 = auVar29._8_8_;
          *(long *)((long)plVar9 + -0x20) = param_2;
          *(long *)((long)plVar9 + -0x18) = auVar29._0_8_;
          *(undefined8 ******)((long)plVar9 + -0x10) = pppppuVar24;
          *(undefined **)((long)plVar9 + -8) = puVar25;
          pppppuVar24 = (undefined8 *****)((long)plVar9 + -0x10);
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
          uVar16 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,lVar17);
          if (*(long *)(lVar19 + 0x18) != 0) break;
          puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar30 = func_0x00f78af4();
          auVar29._8_8_ = auVar30._0_8_;
          auVar29._0_8_ = lVar19;
          plVar9 = (long *)((long)plVar9 + -0x20);
          lVar19 = auVar30._8_8_;
          param_2 = lVar17;
        }
        *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) = *(undefined4 *)(lVar19 + 0x10);
        return uVar16;
      }
      uVar26 = (undefined1)uStack_98;
      puVar25 = &UNK_0165bb34;
      uVar1 = uStack_bc;
      uVar2 = uStack_ba;
      sVar5 = (short)uStack_b8;
      uVar3 = uStack_b8._2_1_;
      uVar10 = (undefined4)alStack_b0[0];
      uVar28 = (undefined1)alStack_90[0];
      uVar27 = uStack_94;
    }
    if ((bRam0000000003eb586e & 1) == 0) {
      func_0x00f78a20(0x3d3f280);
      bRam0000000003eb586e = 1;
    }
    if (param_2 == 0) {
      auVar31 = func_0x00f78af4();
      return (ulong)(((uint)*auVar31._0_8_ & auVar31._8_4_) != 0);
    }
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar10,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,(long)sVar5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar1,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar28,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar27,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar26,param_2,0);
    uVar13 = 0;
    plVar7 = alStack_f0 + 4;
  }
  else {
    Core_Networking_HostVoteUpdate__StartVotesVector(param_2,*(undefined4 *)(param_3 + 0x18));
    if (*(int *)(param_3 + 0x18) < 1) {
      lStack_68 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(param_2,0);
      plVar7 = &uStack_70;
      uStack_70 = 0x3eb5000;
      puStack_48 = (undefined *)0x165b9b8;
      pppppuVar24 = &ppppuStack_50;
      uVar21 = 1;
      uVar22 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,1,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_2);
      if (*(long *)(param_2 + 0x28) == 0) {
        puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar29 = func_0x00f78af4();
        puVar8 = &uStack_70;
        lVar19 = param_2;
        while( true ) {
          uVar13 = auVar29._8_8_;
          param_2 = auVar29._0_8_;
          plVar7 = (long *)((long)puVar8 + -0x20);
          *(undefined8 *)((long)puVar8 + -0x20) = uVar21;
          *(long *)((long)puVar8 + -0x18) = lVar19;
          *(undefined8 ******)((long)puVar8 + -0x10) = pppppuVar24;
          *(undefined **)((long)puVar8 + -8) = puVar25;
          if (auVar29._8_4_ < *(int *)(param_2 + 0x30)) break;
          func_0x00f78a24(0x3d22738);
          uVar13 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d6ceb8);
          uVar18 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar14);
          uVar14 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar13,uVar14);
          func_0x00f78af4();
          uVar14 = func_0x00f78b24();
          auVar29 = func_0x00f78ac0(uVar14,0);
          uVar16 = auVar29._0_8_;
          *(undefined8 *)((long)puVar8 + -0x50) = uVar23;
          *(undefined8 *)((long)puVar8 + -0x48) = uVar22;
          *(undefined8 *)((long)puVar8 + -0x40) = uVar21;
          *(undefined8 *)((long)puVar8 + -0x38) = uVar13;
          *(undefined8 ******)((long)puVar8 + -0x30) = (undefined8 *****)((long)puVar8 + -0x10);
          *(undefined **)((long)puVar8 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
          if (((int)uVar18 == (int)param_4) && (*(char *)(uVar16 + 0x48) == '\0')) {
            return uVar16;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,1,0);
          /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar16,uVar18);
          pppppuVar24 = *(undefined8 ******)((long)puVar8 + -0x30);
          puVar25 = *(undefined **)((long)puVar8 + -0x28);
          uVar21 = *(undefined8 *)((long)puVar8 + -0x40);
          lVar19 = *(long *)((long)puVar8 + -0x38);
          uVar23 = *(undefined8 *)((long)puVar8 + -0x50);
          uVar22 = *(undefined8 *)((long)puVar8 + -0x48);
          puVar8 = (undefined8 *)((long)puVar8 + -0x20);
        }
        pppppuVar24 = (undefined8 *****)((long)puVar8 + -0x10);
        puVar25 = &UNK_016ce3a4;
      }
      else {
        uVar13 = extraout_x1;
        if (*(int *)(*(long *)(param_2 + 0x28) + 0x18) < 1) {
          auVar29 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
          uVar13 = auVar29._8_8_;
          *(long *)(param_2 + 0x28) = auVar29._0_8_;
        }
        *(undefined4 *)(param_2 + 0x30) = 1;
        puVar25 = &UNK_016ce320;
      }
    }
    else {
      if (*(int *)(param_3 + 0x18) == 0) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar19 = *(long *)(param_3 + 0x10);
      lVar17 = (long)*(short *)(lVar19 + 0x24);
      uVar16 = (ulong)*(uint *)(lVar19 + 0x20);
      cVar4 = *(char *)(lVar19 + 0x28);
      uStack_70 = 0;
      puStack_48 = (undefined *)0x165b984;
      pppppuVar24 = &ppppuStack_50;
      lVar19 = lVar17;
      if ((bRam0000000003eb5873 & 1) == 0) {
        func_0x00f78a20(0x3d3f298);
        bRam0000000003eb5873 = 1;
      }
      if (param_2 == 0) {
        puVar25 = &Core_Networking_NetworkVoteUpdate__Clear;
        lVar12 = func_0x00f78af4();
        lVar20 = 0;
        puVar6 = &stack0xffffffffffffff80;
        while( true ) {
          *(ulong *)(puVar6 + -0x20) = uVar16;
          *(long *)(puVar6 + -0x18) = lVar20;
          *(undefined8 ******)(puVar6 + -0x10) = pppppuVar24;
          *(undefined **)(puVar6 + -8) = puVar25;
          if ((bRam0000000003eb5862 & 1) == 0) {
            func_0x00f78a20(0x3d3b670);
            bRam0000000003eb5862 = 1;
          }
          uVar16 = *(ulong *)(lVar12 + 0x10);
          if (uVar16 != 0) break;
          auVar29 = func_0x00f78af4();
          lVar20 = auVar29._0_8_;
          *(undefined8 *)(puVar6 + -0x70) = unaff_x26;
          *(undefined8 *)(puVar6 + -0x68) = unaff_x25;
          *(undefined8 *)(puVar6 + -0x60) = unaff_x24;
          *(undefined8 *)(puVar6 + -0x58) = 0x3eb5000;
          *(long *)(puVar6 + -0x50) = (long)cVar4;
          *(long *)(puVar6 + -0x48) = lVar17;
          *(undefined8 *)(puVar6 + -0x40) = 0x3eb5000;
          *(long *)(puVar6 + -0x38) = lVar12;
          *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
          *(undefined **)(puVar6 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
          pppppuVar24 = (undefined8 *****)(puVar6 + -0x30);
          *(long *)(puVar6 + -0x80) = auVar29._8_8_;
          *(long *)(puVar6 + -0x78) = lVar19;
          uVar16 = 0x3eb5000;
          if ((bRam0000000003eb5863 & 1) == 0) {
            func_0x00f78a20(0x3d3b660);
            func_0x00f78a20(0x3d3ee80);
            bRam0000000003eb5863 = 1;
          }
          *(undefined8 *)(puVar6 + -0xb0) = 0;
          *(undefined8 *)(puVar6 + -0xa8) = 0;
          *(undefined8 *)(puVar6 + -0xa0) = 0;
          puVar25 = &UNK_01661a5c;
          puVar6 = puVar6 + -0xd0;
          lVar12 = lVar20;
        }
        *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
        *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
        *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        uVar15 = uVar16;
        if (0 < *(int *)(uVar16 + 0x18)) {
          uVar15 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar16 + 0x10),0,*(int *)(uVar16 + 0x18),0);
          *(undefined4 *)(uVar16 + 0x18) = 0;
        }
        *(int *)(uVar16 + 0x1c) = *(int *)(uVar16 + 0x1c) + 1;
        return uVar15;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,8,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_2,(long)cVar4,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,lVar17,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_2,uVar16,0);
      uVar13 = 0;
      plVar7 = (long *)&stack0xffffffffffffffc0;
      pppppuVar24 = (undefined8 *****)ppppuStack_50;
      puVar25 = puStack_48;
    }
  }
  *(undefined8 ******)((long)plVar7 + -0x10) = pppppuVar24;
  *(undefined **)((long)plVar7 + -8) = puVar25;
  if ((*(long *)(param_2 + 0x18) != 0) &&
     (lVar19 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar19 != 0)) {
    return (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(param_2 + 0x10));
  }
  lVar19 = func_0x00f78af4(param_2,uVar13);
  return (ulong)*(byte *)(lVar19 + 0x48);
}



// ============================================================
// RVA: 0x165ba34 | Core.Networking.NetworkServicesOutput.WriteUsableToAllFromClient
// ============================================================

/* WARNING: Possible PIC construction at 0x0165bb30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165bb34) */

ulong Core_Networking_NetworkServicesOutput__WriteUsableToAllFromClient
                (long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int extraout_w1;
  long lVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb5832 & 1) == 0) {
    func_0x00f78a20(0x3d32bc0);
    func_0x00f78a20(0x3d32bc8);
    func_0x00f78a20(0x3d32bd0);
    func_0x00f78a20(0x3d3b640);
    func_0x00f78a20(0x3d3b648);
    bRam0000000003eb5832 = 1;
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
  if ((param_2 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0), param_3 == 0)) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar8 = (long *)___cxa_begin_catch();
      lVar9 = *plVar8;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$Dispose*/ func_0x01f6e320(&uStack_90,uRam0000000003eb5000);
      if (lVar9 == 0) goto code_r0x0165bb44;
      func_0x00f78ac0(lVar9,0);
    }
    auVar13 = __Unwind_Resume();
    param_2 = auVar13._8_8_;
    lVar9 = auVar13._0_8_;
    uVar10 = (undefined1)*(undefined4 *)(lVar9 + 0x28);
    uVar11 = (undefined1)*(undefined4 *)(lVar9 + 0x2c);
    uVar12 = (undefined1)*(undefined4 *)(lVar9 + 0x30);
    uVar1 = *(undefined1 *)(lVar9 + 4);
    uVar2 = *(undefined1 *)(lVar9 + 6);
    sVar4 = *(short *)(lVar9 + 8);
    uVar3 = *(undefined1 *)(lVar9 + 10);
    uVar5 = *(undefined4 *)(lVar9 + 0x10);
  }
  else {
    Core_Networking_ClientUsable__StartUsablesVector(param_2,*(undefined4 *)(param_3 + 0x18));
    /*System.Collections.Generic.List<NetworkUsable>$$GetEnumerator*/ func_0x0241f7c4(&uStack_90,param_3,uRam0000000003d3b640);
    uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$MoveNext*/ func_0x01f6e324(&uStack_90,uRam0000000003d32bc8);
    if ((uVar6 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$Dispose*/ func_0x01f6e320(&uStack_90,uRam0000000003d32bc0);
code_r0x0165bb44:
      uVar5 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(param_2,0);
      uVar7 = Core_Networking_ClientUsable__CreateClientUsable(param_2,uVar5);
      uVar5 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                        (uVar7,param_2,3,uVar7);
      uVar7 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_2,0,uVar5);
      /*FlatBuffers.FlatBufferBuilder$$Finish*/ func_0x016cef90(param_2,uVar7,0);
      uVar7 = /*FlatBuffers.FlatBufferBuilder$$CopyByteArray*/ func_0x016cd9b8(param_2,*(undefined8 *)(param_1 + 0x18),0);
      uVar6 = Core_Networking_NetworkServicesOutput__WriteToOtherPlayers
                        (param_1,*(undefined8 *)(param_1 + 0x18),uVar7,1);
      return uVar6;
    }
    uVar10 = (undefined1)uStack_58;
    uVar1 = uStack_80._4_1_;
    uVar2 = uStack_80._6_1_;
    sVar4 = (short)uStack_78;
    uVar3 = uStack_78._2_1_;
    uVar5 = (undefined4)uStack_70;
    uVar12 = (undefined1)uStack_50;
    uVar11 = uStack_58._4_1_;
  }
  if ((bRam0000000003eb586e & 1) == 0) {
    func_0x00f78a20(0x3d3f280);
    bRam0000000003eb586e = 1;
  }
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar5,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,(long)sVar4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar1,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar12,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar11,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar10,param_2,0);
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar9 != 0)) {
      return (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(param_2 + 0x10));
    }
    lVar9 = func_0x00f78af4(param_2,0);
    return (ulong)*(byte *)(lVar9 + 0x48);
  }
  auVar14 = func_0x00f78af4();
  return (ulong)(((uint)*auVar14._0_8_ & auVar14._8_4_) != 0);
}



// ============================================================
// RVA: 0x165bc2c | Core.Networking.NetworkServicesOutput.WriteUsableToAllFromHost
// ============================================================

/* WARNING: Possible PIC construction at 0x0165bd34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165bd38) */

ulong Core_Networking_NetworkServicesOutput__WriteUsableToAllFromHost
                (ulong param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 *puVar11;
  int extraout_w1;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 ****ppppuVar19;
  undefined *puVar20;
  undefined1 uVar21;
  undefined1 extraout_b0;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar6 = &uStack_90;
  uVar8 = param_1;
  if ((bRam0000000003eb5833 & 1) == 0) {
    func_0x00f78a20(0x3d32bc0);
    func_0x00f78a20(0x3d32bc8);
    func_0x00f78a20(0x3d32bd0);
    func_0x00f78a20(0x3d3b640);
    uVar8 = func_0x00f78a20(0x3d3b648);
    bRam0000000003eb5833 = 1;
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
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x18) == 0) {
      return uVar8;
    }
    if (param_2 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0);
      Core_Networking_HostUsable__StartUsablesVector(param_2,*(undefined4 *)(param_3 + 0x18));
      /*System.Collections.Generic.List<NetworkUsable>$$GetEnumerator*/ func_0x0241f7c4(&uStack_90,param_3,uRam0000000003d3b640);
      uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$MoveNext*/ func_0x01f6e324(&uStack_90,uRam0000000003d32bc8);
      if ((uVar8 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$Dispose*/ func_0x01f6e320(&uStack_90,uRam0000000003d32bc0);
        goto code_r0x0165bd48;
      }
      uVar21 = (undefined1)uStack_58;
      puVar20 = (undefined *)0x165bd38;
      uVar7 = (undefined4)uStack_80;
      bVar2 = uStack_80._4_1_;
      bVar3 = uStack_80._6_1_;
      sVar5 = (short)uStack_78;
      bVar4 = uStack_78._2_1_;
      uVar1 = (undefined4)uStack_70;
      uVar24 = (undefined1)uStack_50;
      uVar22 = uStack_58._4_1_;
      goto code_r0x0166160c;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar18 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkUsable>$$Dispose*/ func_0x01f6e320(&uStack_90,uRam0000000003eb5000);
    if (lVar18 == 0) {
code_r0x0165bd48:
      uVar7 = /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(param_2,0);
      uVar9 = Core_Networking_HostUsable__CreateHostUsable(param_2,uVar7);
      uVar7 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                        (uVar9,param_2,7,uVar9);
      uVar9 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_2,uVar7,0);
      /*FlatBuffers.FlatBufferBuilder$$Finish*/ func_0x016cef90(param_2,uVar9,0);
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$CopyByteArray*/ func_0x016cd9b8(param_2,*(undefined8 *)(param_1 + 0x18),0);
      uVar8 = Core_Networking_NetworkServicesOutput__WriteToOtherPlayers
                        (param_1,*(undefined8 *)(param_1 + 0x18),uVar9,1);
      return uVar8;
    }
    func_0x00f78ac0(lVar18,0);
  }
  puVar20 = &Core_Networking_NetworkUsable__ToUsableFlatBuffer;
  auVar26 = __Unwind_Resume();
  param_2 = auVar26._8_8_;
  puVar11 = auVar26._0_8_;
  uVar7 = *puVar11;
  uVar21 = (undefined1)puVar11[10];
  uVar22 = (undefined1)puVar11[0xb];
  uVar24 = (undefined1)puVar11[0xc];
  bVar2 = *(byte *)(puVar11 + 1);
  bVar3 = *(byte *)((long)puVar11 + 6);
  sVar5 = *(short *)(puVar11 + 2);
  bVar4 = *(byte *)((long)puVar11 + 10);
  uVar1 = puVar11[4];
code_r0x0166160c:
  uVar16 = (ulong)bVar4;
  lVar15 = (long)sVar5;
  uVar13 = (ulong)bVar3;
  uVar12 = (ulong)bVar2;
  ppppuVar19 = &pppuStack_a0;
  uVar8 = uVar12;
  uVar14 = uVar13;
  lVar18 = lVar15;
  uVar17 = uVar16;
  pppuStack_a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  puStack_98 = puVar20;
  uVar25 = uVar24;
  uVar23 = uVar22;
  if ((bRam0000000003eb586d & 1) == 0) {
    func_0x00f78a20(0x3d3f278);
    bRam0000000003eb586d = 1;
  }
  if (param_2 == 0) {
    auVar26 = func_0x00f78af4();
    param_2 = auVar26._0_8_;
    if ((bRam0000000003eb586e & 1) == 0) {
      func_0x00f78a20(0x3d3f280);
      bRam0000000003eb586e = 1;
    }
    if (param_2 == 0) {
      auVar27 = func_0x00f78af4();
      return (ulong)(((uint)*auVar27._0_8_ & auVar27._8_4_) != 0);
    }
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar17,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,lVar18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,uVar14,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar8,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,auVar26._8_8_,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar25,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar23,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_b0,param_2,0);
    puVar20 = &Core_Networking_UsableBase__CreateUsableBase;
    puVar6 = (undefined8 *)&stack0xffffffffffffff00;
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x1c,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar1,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar16,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,lVar15,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar13,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar12,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar24,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar22,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar21,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_2,uVar7,0);
    ppppuVar19 = (undefined8 ****)pppuStack_a0;
    puVar20 = puStack_98;
  }
  *(undefined8 *****)((long)puVar6 + -0x10) = ppppuVar19;
  *(undefined **)((long)puVar6 + -8) = puVar20;
  if ((*(long *)(param_2 + 0x18) != 0) &&
     (lVar18 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar18 != 0)) {
    return (ulong)(uint)(*(int *)(lVar18 + 0x18) - *(int *)(param_2 + 0x10));
  }
  lVar18 = func_0x00f78af4(param_2,0);
  return (ulong)*(byte *)(lVar18 + 0x48);
}



// ============================================================
// RVA: 0x165be34 | Core.Networking.NetworkServicesOutput.WriteUsableRequestToHost
// ============================================================

/* WARNING: Possible PIC construction at 0x0165be98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165bf5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165bfb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165ca7c) */
/* WARNING: Removing unreachable block (ram,0x0165ca14) */
/* WARNING: Removing unreachable block (ram,0x0165ca38) */
/* WARNING: Removing unreachable block (ram,0x0165ca44) */
/* WARNING: Removing unreachable block (ram,0x0165c944) */
/* WARNING: Removing unreachable block (ram,0x0165c9c0) */
/* WARNING: Removing unreachable block (ram,0x0165c9cc) */
/* WARNING: Removing unreachable block (ram,0x0165c9e8) */
/* WARNING: Removing unreachable block (ram,0x0165c90c) */
/* WARNING: Removing unreachable block (ram,0x0165c774) */
/* WARNING: Removing unreachable block (ram,0x0165c724) */
/* WARNING: Removing unreachable block (ram,0x0165c4ac) */
/* WARNING: Removing unreachable block (ram,0x0165c448) */
/* WARNING: Removing unreachable block (ram,0x0165c2e0) */
/* WARNING: Removing unreachable block (ram,0x0165c228) */
/* WARNING: Removing unreachable block (ram,0x0165c1e4) */
/* WARNING: Removing unreachable block (ram,0x0165c158) */
/* WARNING: Removing unreachable block (ram,0x0165c114) */
/* WARNING: Removing unreachable block (ram,0x0165bf60) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165be9c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619a8) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */

ulong Core_Networking_NetworkServicesOutput__WriteUsableRequestToHost
                (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,uint *param_6,uint *param_7,uint *param_8,undefined8 *param_9)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint **ppuVar4;
  undefined1 *puVar5;
  uint **ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  uint *puVar16;
  undefined8 uVar17;
  uint *puVar18;
  uint *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 ****ppppuVar24;
  undefined *puVar25;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint *puStack_430;
  uint *puStack_428;
  undefined8 uStack_420;
  ulong uStack_418;
  undefined8 ***pppuStack_410;
  undefined *puStack_408;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  uint *puStack_380;
  uint *puStack_378;
  long lStack_370;
  long lStack_368;
  uint *puStack_360;
  undefined4 uStack_354;
  undefined8 ***pppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  uint *puStack_200;
  undefined8 *puStack_1f8;
  uint *puStack_1f0;
  uint *puStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  uint *puStack_1d0;
  undefined8 *puStack_1c8;
  uint *puStack_1c0;
  uint *puStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  uint *puStack_1a0;
  undefined8 *puStack_198;
  uint *puStack_190;
  uint *puStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  uint *puStack_120;
  long lStack_118;
  uint *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [136];
  long lStack_68;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  auVar27._8_8_ = param_6;
  auVar27._0_8_ = param_5;
  if (param_6 != (uint *)0x0) {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_6,0);
    uVar9 = Core_Networking_ClientRequestUsable__CreateClientRequestUsable(param_6,param_7);
    uVar7 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                      (uVar9,param_6,5,uVar9);
    puVar10 = (uint *)/*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_6,0,uVar7);
    puVar25 = (undefined *)0x165be9c;
    ppuVar6 = (uint **)&stack0xffffffffffffffd0;
    param_7 = param_6;
    ppppuVar24 = (undefined8 ****)&stack0xfffffffffffffff0;
    goto FlatBuffers_FlatBufferBuilder__Finish;
  }
  auVar27 = func_0x00f78af4();
  lVar12 = auVar27._8_8_;
  ppuVar6 = (uint **)auStack_f0;
  puStack_38 = &Core_Networking_NetworkServicesOutput__WriteUsableResponseToPlayer;
  ppppuVar24 = &pppuStack_40;
  lStack_68 = *(long *)PTR_03a5d648;
  puVar10 = param_7;
  puVar19 = param_8;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  uVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)param_7,0);
  if ((uVar15 & 1) == 0) {
    if (lVar12 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0);
      uVar9 = Core_Networking_HostUsableResponse__CreateHostUsableResponse(lVar12,param_8);
      uVar7 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                        (uVar9,lVar12,8,uVar9);
      puVar10 = (uint *)/*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(lVar12,uVar7,0);
      puVar25 = &UNK_0165bf60;
      goto FlatBuffers_FlatBufferBuilder__Finish;
    }
  }
  else {
    if (*(long *)PTR_03a5d648 == lStack_68) {
      return uVar15;
    }
    ___stack_chk_fail();
  }
  auVar29 = func_0x00f78af4();
  lVar20 = auVar29._8_8_;
  puVar11 = (uint *)&uStack_170;
  puStack_f8 = &Core_Networking_NetworkServicesOutput__WriteToSingleOtherPlayer;
  lStack_128 = *(long *)PTR_03a5d648;
  if (lVar20 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = 0;
    if (*(int *)(lVar20 + 0x18) != 0) {
      lVar22 = lVar20 + 0x20;
    }
  }
  lVar20 = *(long *)(auVar29._0_8_ + 0x10);
  puVar16 = puVar10;
  puVar18 = puVar19;
  puStack_120 = param_8;
  puStack_110 = param_7;
  pppuStack_100 = ppppuVar24;
  if (lVar20 == 0) {
code_r0x0165c0b4:
    puVar11 = puVar18;
    lStack_118 = auVar27._8_8_;
    uStack_108 = auVar27._0_8_;
    func_0x00f78af4();
  }
  else {
    param_8 = *(uint **)(lVar20 + 0x30);
    lStack_118 = lVar12;
    uStack_108 = auVar27._0_8_;
    uVar9 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar22,0);
    auVar27._8_8_ = lStack_118;
    auVar27._0_8_ = uStack_108;
    if (param_8 == (uint *)0x0) goto code_r0x0165c0b4;
    uStack_168 = param_9[1];
    uStack_170 = *param_9;
    uStack_158 = param_9[3];
    uStack_160 = param_9[2];
    uStack_148 = param_9[5];
    uStack_150 = param_9[4];
    uStack_138 = param_9[7];
    param_2 = param_9[6];
    puVar16 = puVar10;
    uStack_140 = param_2;
    uVar15 = (**(code **)(*(long *)param_8 + 600))
                       (param_8,uVar9,puVar10,&uStack_170,puVar19,
                        *(undefined8 *)(*(long *)param_8 + 0x260));
    if (*(long *)PTR_03a5d648 == lStack_128) {
      return uVar15;
    }
  }
  auVar29 = ___stack_chk_fail();
  lVar12 = auVar29._8_8_;
  puStack_178 = &Core_Networking_NetworkServicesOutput__WriteGameModeDataToHost;
  puStack_1a0 = param_8;
  puStack_198 = param_9;
  puStack_190 = puVar10;
  puStack_188 = puVar19;
  pppuStack_180 = &pppuStack_100;
  if (lVar12 == 0) {
    auVar29 = func_0x00f78af4();
    lVar12 = auVar29._8_8_;
    puStack_1a8 = &Core_Networking_NetworkServicesOutput__WriteGameMode;
    puStack_1d0 = param_8;
    puStack_1c8 = param_9;
    puStack_1c0 = puVar10;
    puStack_1b8 = puVar19;
    pppuStack_1b0 = &pppuStack_180;
    if (lVar12 == 0) {
      auVar27 = func_0x00f78af4();
      param_7 = auVar27._8_8_;
      ppuVar6 = &puStack_200;
      puStack_1d8 = &Core_Networking_NetworkServicesOutput__WriteEventStandingToHost;
      ppppuVar24 = &pppuStack_1e0;
      puStack_200 = param_8;
      puStack_1f8 = param_9;
      puStack_1f0 = puVar10;
      puStack_1e8 = puVar19;
      pppuStack_1e0 = &pppuStack_1b0;
      if (param_7 != (uint *)0x0) {
        /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_7,0);
        uVar7 = Core_Networking_EventStanding__CreateEventStanding
                          (puVar16[8],param_7,*puVar16,(char)puVar16[1],puVar16[2],(char)puVar16[9])
        ;
        uVar9 = Core_Networking_ClientStanding__CreateClientStanding(param_7,uVar7);
        uVar7 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                          (uVar9,param_7,6,uVar9);
        puVar10 = (uint *)/*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_7,0,uVar7);
        puVar25 = &UNK_0165c2e0;
        goto FlatBuffers_FlatBufferBuilder__Finish;
      }
      auVar29 = func_0x00f78af4();
      lVar12 = auVar29._8_8_;
      puStack_208 = &Core_Networking_NetworkServicesOutput__WriteEventStanding;
      puVar10 = puVar16;
      puVar19 = puVar11;
      pppuStack_210 = ppppuVar24;
      if ((bRam0000000003eb5834 & 1) == 0) {
        func_0x00f78a20(0x3d3b448);
        func_0x00f78a20(0x3d3b450);
        func_0x00f78a20(0x3d1ec38);
        bRam0000000003eb5834 = 1;
      }
      if ((lVar12 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0), puVar16 == (uint *)0x0)) {
code_r0x0165c4e4:
        func_0x00f78af4();
code_r0x0165c4e8:
        uVar9 = func_0x00f78b24();
        auVar29 = func_0x00f78ac0(uVar9,0);
        lVar12 = auVar29._8_8_;
        puStack_258 = &Core_Networking_NetworkServicesOutput__WriteEventResult;
        puVar16 = puVar10;
        puVar18 = puVar19;
        pppuStack_260 = &pppuStack_210;
        if ((bRam0000000003eb5835 & 1) == 0) {
          func_0x00f78a20(0x3d3b5d0);
          func_0x00f78a20(0x3d3b410);
          func_0x00f78a20(0x3d3b5d8);
          func_0x00f78a20(0x3d3b418);
          func_0x00f78a20(0x3d1ec28);
          func_0x00f78a20(0x3d1ec30);
          bRam0000000003eb5835 = 1;
        }
        uVar7 = (undefined4)param_2;
        if (lVar12 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0);
          uVar7 = (undefined4)param_2;
          if (puVar10 != (uint *)0x0) {
            Core_Networking_HostEventResults__StartRoundScoresVector(lVar12,puVar10[6]);
            lVar20 = func_0x00f78a34(/*FlatBuffers.Offset<EventScore>[]_TypeInfo*/ uRam0000000003d1ec30,puVar10[6]);
            uVar15 = (ulong)puVar10[6];
            if (0 < (int)puVar10[6]) {
              lVar22 = 0;
              uVar23 = 0;
              do {
                if ((uVar15 & 0xffffffff) <= uVar23) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar1 = *(long *)(puVar10 + 4) + lVar22;
                puVar16 = (uint *)(long)*(short *)(lVar1 + 0x24);
                puVar18 = (uint *)(ulong)*(byte *)(lVar1 + 0x28);
                uVar8 = Core_Networking_EventScore__CreateEventScore
                                  (lVar12,*(undefined4 *)(lVar1 + 0x20));
                uVar7 = (undefined4)param_2;
                if (lVar20 == 0) goto code_r0x0165c7b0;
                if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x0165c7b4;
                *(undefined4 *)(lVar20 + 0x20 + uVar23 * 4) = uVar8;
                uVar23 = uVar23 + 1;
                uVar15 = (ulong)(int)puVar10[6];
                lVar22 = lVar22 + 0xc;
              } while ((long)uVar23 < (long)uVar15);
            }
            param_8 = (uint *)Core_Networking_HostEventResults__CreateRoundScoresVector
                                        (lVar12,lVar20);
            uVar7 = (undefined4)param_2;
            if (puVar19 != (uint *)0x0) {
              Core_Networking_HostEventResults__StartStandingsVector(lVar12,puVar19[6]);
              lVar20 = func_0x00f78a34(/*FlatBuffers.Offset<EventFinishStanding>[]_TypeInfo*/ uRam0000000003d1ec28,puVar19[6]);
              uVar15 = (ulong)puVar19[6];
              if (0 < (int)puVar19[6]) {
                uVar23 = 0;
                lVar22 = 0x24;
                do {
                  if ((uVar15 & 0xffffffff) <= uVar23) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  puVar5 = (undefined1 *)(*(long *)(puVar19 + 4) + lVar22);
                  puVar18 = (uint *)(ulong)*(uint *)(puVar5 + 4);
                  uVar7 = Core_Networking_EventStanding__CreateEventStanding
                                    (*(undefined4 *)(puVar5 + 0x1c),lVar12,
                                     *(undefined4 *)(puVar5 + -4),*puVar5,puVar18,
                                     puVar5[0x20] != '\0');
                  if (puVar19[6] <= uVar23) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  puVar16 = (uint *)(long)*(short *)(*(long *)(puVar19 + 4) + lVar22 + 0x24);
                  uVar8 = Core_Networking_EventFinishStanding__CreateEventFinishStanding
                                    (lVar12,uVar7);
                  uVar7 = (undefined4)param_2;
                  puVar10 = param_8;
                  if (lVar20 == 0) goto code_r0x0165c7b0;
                  if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x0165c7b4;
                  *(undefined4 *)(lVar20 + 0x20 + uVar23 * 4) = uVar8;
                  uVar23 = uVar23 + 1;
                  uVar15 = (ulong)(int)puVar19[6];
                  lVar22 = lVar22 + 0x30;
                } while ((long)uVar23 < (long)uVar15);
              }
              puVar11 = (uint *)Core_Networking_HostEventResults__CreateStandingsVector
                                          (lVar12,lVar20);
              uVar9 = 2;
              puVar25 = &UNK_0165c724;
              ppuVar6 = (uint **)&stack0xfffffffffffffd50;
              ppppuVar24 = &pppuStack_260;
              goto code_r0x016ce2a4;
            }
          }
        }
code_r0x0165c7b0:
        func_0x00f78af4();
code_r0x0165c7b4:
        uVar9 = func_0x00f78b24();
        auVar27 = func_0x00f78ac0(uVar9,0);
        uVar15 = auVar27._8_8_;
        puVar11 = auVar27._0_8_;
        ppuVar6 = &puStack_380;
        ppuVar4 = &puStack_380;
        puStack_2b8 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationState;
        ppppuVar24 = &pppuStack_2c0;
        auVar29._8_8_ = uVar15;
        auVar29._0_8_ = 0x3eb5000;
        puStack_360 = puVar16;
        pppuStack_2c0 = &pppuStack_260;
        if ((bRam0000000003eb5836 & 1) == 0) {
          func_0x00f78a20(0x3d3b300);
          func_0x00f78a20(0x3d3b308);
          func_0x00f78a20(0x3d1ec48);
          bRam0000000003eb5836 = 1;
        }
        if (uVar15 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar15,0);
          if (*(long *)(puStack_360 + 8) != 0) {
            uVar2 = *(uint *)(*(long *)(puStack_360 + 8) + 0x18);
            param_8 = (uint *)(ulong)uVar2;
            if ((int)uVar2 < 1) {
              uVar9 = 3;
              puVar25 = &UNK_0165ca14;
            }
            else {
              puStack_378 = puVar11;
              Core_Networking_HostMigration__StartCarsVector(uVar15,param_8);
              lStack_368 = func_0x00f78a34(/*FlatBuffers.Offset<MigrationCar>[]_TypeInfo*/ uRam0000000003d1ec48,param_8);
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar15;
              auVar29 = auVar3 << 0x40;
              puVar10 = (uint *)0x0;
              lStack_368 = lStack_368 + 0x20;
              lStack_370 = (long)param_8 * 0x50;
              lVar12 = *(long *)(puStack_360 + 8);
              puVar11 = (uint *)0x0;
              puStack_380 = param_8;
              if (lVar12 == 0) goto code_r0x0165cacc;
              if (*(int *)(lVar12 + 0x18) == 0) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              puVar11 = (uint *)(ulong)*(byte *)(*(long *)(lVar12 + 0x10) + 0x6c);
              uStack_354 = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x68);
              uVar9 = 10;
              puVar25 = &UNK_0165c90c;
              ppuVar6 = &puStack_380;
              param_8 = puVar10;
            }
            goto code_r0x016ce2a4;
          }
        }
code_r0x0165cacc:
        func_0x00f78af4();
        uVar9 = func_0x00f78b24();
        uVar15 = func_0x00f78ac0(uVar9,0);
        puStack_388 = &Core_Networking_Vec3__CreateVec3;
        uVar8 = param_3;
        uVar26 = uVar7;
        pppuStack_390 = ppppuVar24;
        if ((bRam0000000003eb5871 & 1) == 0) {
          func_0x00f78a20(0x3d3f288);
          bRam0000000003eb5871 = 1;
        }
        if (uVar15 == 0) {
          uVar15 = func_0x00f78af4();
          puStack_3c8 = &Core_Networking_Vec4__CreateVec4;
          pppuStack_3d0 = &pppuStack_390;
          if ((bRam0000000003eb5872 & 1) == 0) {
            func_0x00f78a20(0x3d3f290);
            bRam0000000003eb5872 = 1;
          }
          if (uVar15 == 0) {
            auVar27 = func_0x00f78af4();
            param_7 = auVar27._8_8_;
            ppuVar6 = &puStack_430;
            uStack_420 = 0x3eb5000;
            puStack_408 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
            ppppuVar24 = &pppuStack_410;
            puStack_430 = puVar10;
            puStack_428 = puVar11;
            uStack_418 = uVar15;
            pppuStack_410 = &pppuStack_3d0;
            if (param_7 == (uint *)0x0) {
              uVar15 = func_0x00f78af4();
              return uVar15;
            }
            /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_7,0);
            uVar9 = Core_Networking_HostMigrationDone__CreateHostMigrationDone
                              (param_7,*puVar16,puVar18);
            uVar7 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                              (uVar9,param_7,0xb,uVar9);
            puVar10 = (uint *)/*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_7,uVar7,0);
            puVar25 = &UNK_0165ccb8;
FlatBuffers_FlatBufferBuilder__Finish:
            while( true ) {
              puVar19 = puVar10;
              lVar12 = auVar27._8_8_;
              *(uint **)((long)ppuVar6 + -0x20) = param_7;
              *(long *)((long)ppuVar6 + -0x18) = auVar27._0_8_;
              *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar24;
              *(undefined **)((long)ppuVar6 + -8) = puVar25;
              ppppuVar24 = (undefined8 ****)((long)ppuVar6 + -0x10);
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,*(undefined4 *)(lVar12 + 0x20),4);
              uVar15 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar12,puVar19);
              if (*(long *)(lVar12 + 0x18) != 0) break;
              puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar29 = func_0x00f78af4();
              auVar27._8_8_ = auVar29._0_8_;
              auVar27._0_8_ = lVar12;
              ppuVar6 = (uint **)((long)ppuVar6 + -0x20);
              puVar10 = auVar29._8_8_;
              param_7 = puVar19;
            }
            *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x18) = *(undefined4 *)(lVar12 + 0x10);
            return uVar15;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar15,4,0x10,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_4,uVar15,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar8,uVar15,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar26,uVar15,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar15,0);
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar15;
          ppuVar4 = (uint **)&stack0xfffffffffffffc40;
          ppppuVar24 = (undefined8 ****)pppuStack_3d0;
          puVar25 = puStack_3c8;
        }
        else {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar15,4,0xc,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,uVar15,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar7,uVar15,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_d0 & 0xffffffff,uVar15,0);
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar15;
          ppppuVar24 = (undefined8 ****)pppuStack_390;
          puVar25 = puStack_388;
        }
        goto code_r0x016cda04;
      }
      Core_Networking_HostStanding__StartStandingsVector(lVar12,puVar16[6]);
      lVar20 = func_0x00f78a34(/*FlatBuffers.Offset<EventStanding>[]_TypeInfo*/ uRam0000000003d1ec38,puVar16[6]);
      uVar15 = (ulong)puVar16[6];
      puVar18 = puVar19;
      if (0 < (int)puVar16[6]) {
        lVar22 = 0;
        uVar23 = 0;
        do {
          if ((uVar15 & 0xffffffff) <= uVar23) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar1 = *(long *)(puVar16 + 4) + lVar22;
          puVar10 = (uint *)(ulong)*(byte *)(lVar1 + 0x24);
          puVar19 = (uint *)(ulong)*(uint *)(lVar1 + 0x28);
          uVar7 = Core_Networking_EventStanding__CreateEventStanding
                            (*(undefined4 *)(lVar1 + 0x40),lVar12,*(undefined4 *)(lVar1 + 0x20),
                             puVar10,puVar19,*(char *)(lVar1 + 0x44) != '\0');
          if (lVar20 == 0) goto code_r0x0165c4e4;
          if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x0165c4e8;
          *(undefined4 *)(lVar20 + 0x20 + uVar23 * 4) = uVar7;
          uVar23 = uVar23 + 1;
          uVar15 = (ulong)(int)puVar16[6];
          lVar22 = lVar22 + 0x28;
          puVar18 = puVar19;
        } while ((long)uVar23 < (long)uVar15);
      }
      param_8 = (uint *)Core_Networking_HostStanding__CreateStandingsVector(lVar12,lVar20);
      uVar9 = 3;
      puVar25 = &UNK_0165c448;
      ppuVar6 = (uint **)&stack0xfffffffffffffdb0;
      ppppuVar24 = &pppuStack_210;
    }
    else {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0);
      puVar18 = (uint *)(ulong)*puVar16;
      puVar11 = (uint *)Core_Networking_GameMode__CreateGameMode
                                  (lVar12,(long)(char)puVar16[1],puVar16[2],puVar18,(char)puVar16[8]
                                  );
      uVar9 = 1;
      puVar25 = &UNK_0165c1e4;
      ppuVar6 = &puStack_1d0;
      ppppuVar24 = &pppuStack_1b0;
    }
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0);
    puVar18 = (uint *)(ulong)*puVar16;
    puVar11 = (uint *)Core_Networking_GameMode__CreateGameMode
                                (lVar12,(long)(char)puVar16[1],puVar16[2],puVar18,(char)puVar16[8]);
    uVar9 = 1;
    puVar25 = &UNK_0165c114;
    ppuVar6 = &puStack_1a0;
    ppppuVar24 = &pppuStack_180;
  }
code_r0x016ce2a4:
  lVar12 = auVar29._8_8_;
  ppuVar4 = (uint **)((long)ppuVar6 + -0x30);
  *(uint **)((long)ppuVar6 + -0x30) = param_8;
  *(uint **)((long)ppuVar6 + -0x28) = puVar11;
  *(long *)((long)ppuVar6 + -0x20) = lVar12;
  *(long *)((long)ppuVar6 + -0x18) = auVar29._0_8_;
  *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar24;
  *(undefined **)((long)ppuVar6 + -8) = puVar25;
  ppppuVar24 = (undefined8 ****)((long)ppuVar6 + -0x10);
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,uVar9,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar12);
  if (*(long *)(lVar12 + 0x28) == 0) {
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar28 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)ppuVar6 + -0x30);
    while( true ) {
      ppuVar4 = (uint **)(puVar5 + -0x20);
      *(undefined8 *)(puVar5 + -0x20) = uVar9;
      *(long *)(puVar5 + -0x18) = lVar12;
      *(undefined8 *****)(puVar5 + -0x10) = ppppuVar24;
      *(undefined **)(puVar5 + -8) = puVar25;
      if (auVar28._8_4_ < *(int *)(auVar28._0_8_ + 0x30)) break;
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar17 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar14);
      func_0x00f78af4();
      uVar14 = func_0x00f78b24();
      auVar28 = func_0x00f78ac0(uVar14,0);
      uVar15 = auVar28._0_8_;
      *(uint **)(puVar5 + -0x50) = param_8;
      *(undefined8 *)(puVar5 + -0x48) = uVar21;
      *(undefined8 *)(puVar5 + -0x40) = uVar9;
      *(undefined8 *)(puVar5 + -0x38) = uVar13;
      *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar17 == (int)puVar18) && (*(char *)(uVar15 + 0x48) == '\0')) {
        return uVar15;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar15,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar15,uVar17);
      ppppuVar24 = *(undefined8 *****)(puVar5 + -0x30);
      puVar25 = *(undefined **)(puVar5 + -0x28);
      uVar9 = *(undefined8 *)(puVar5 + -0x40);
      lVar12 = *(long *)(puVar5 + -0x38);
      param_8 = *(uint **)(puVar5 + -0x50);
      uVar21 = *(undefined8 *)(puVar5 + -0x48);
      puVar5 = puVar5 + -0x20;
    }
    ppppuVar24 = (undefined8 ****)(puVar5 + -0x10);
    puVar25 = &UNK_016ce3a4;
  }
  else {
    uVar21 = extraout_x1;
    if (*(int *)(*(long *)(lVar12 + 0x28) + 0x18) < 0) {
      auVar27 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar9);
      uVar21 = auVar27._8_8_;
      *(long *)(lVar12 + 0x28) = auVar27._0_8_;
    }
    auVar28._8_8_ = uVar21;
    auVar28._0_8_ = lVar12;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    puVar25 = &UNK_016ce320;
  }
code_r0x016cda04:
  lVar12 = auVar28._0_8_;
  *(undefined8 *****)((long)ppuVar4 + -0x10) = ppppuVar24;
  *(undefined **)((long)ppuVar4 + -8) = puVar25;
  if ((*(long *)(lVar12 + 0x18) != 0) &&
     (lVar20 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar20 != 0)) {
    return (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar12 + 0x10));
  }
  lVar12 = func_0x00f78af4(lVar12,auVar28._8_8_);
  return (ulong)*(byte *)(lVar12 + 0x48);
}



// ============================================================
// RVA: 0x165bed0 | Core.Networking.NetworkServicesOutput.WriteUsableResponseToPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x0165bf5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165bfb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165ca7c) */
/* WARNING: Removing unreachable block (ram,0x0165ca14) */
/* WARNING: Removing unreachable block (ram,0x0165ca38) */
/* WARNING: Removing unreachable block (ram,0x0165ca44) */
/* WARNING: Removing unreachable block (ram,0x0165c944) */
/* WARNING: Removing unreachable block (ram,0x0165c9c0) */
/* WARNING: Removing unreachable block (ram,0x0165c9cc) */
/* WARNING: Removing unreachable block (ram,0x0165c9e8) */
/* WARNING: Removing unreachable block (ram,0x0165c90c) */
/* WARNING: Removing unreachable block (ram,0x0165c774) */
/* WARNING: Removing unreachable block (ram,0x0165c724) */
/* WARNING: Removing unreachable block (ram,0x0165c4ac) */
/* WARNING: Removing unreachable block (ram,0x0165c448) */
/* WARNING: Removing unreachable block (ram,0x0165c2e0) */
/* WARNING: Removing unreachable block (ram,0x0165c228) */
/* WARNING: Removing unreachable block (ram,0x0165c1e4) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165c158) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165c114) */
/* WARNING: Removing unreachable block (ram,0x0165bf60) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619a8) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */

ulong Core_Networking_NetworkServicesOutput__WriteUsableResponseToPlayer
                (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,long param_6,uint *param_7,uint *param_8,undefined8 *param_9)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint **ppuVar4;
  undefined1 *puVar5;
  uint **ppuVar6;
  undefined4 uVar7;
  ulong uVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined4 uVar8;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  uint *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 ****ppppuVar24;
  undefined *puVar25;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint *puStack_400;
  uint *puStack_3f8;
  undefined8 uStack_3f0;
  ulong uStack_3e8;
  undefined8 ***pppuStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_360;
  undefined *puStack_358;
  uint *puStack_350;
  uint *puStack_348;
  long lStack_340;
  long lStack_338;
  uint *puStack_330;
  undefined4 uStack_324;
  undefined8 ***pppuStack_290;
  undefined *puStack_288;
  undefined8 ***pppuStack_230;
  undefined *puStack_228;
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  uint *puStack_1d0;
  undefined8 *puStack_1c8;
  uint *puStack_1c0;
  uint *puStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  uint *puStack_1a0;
  undefined8 *puStack_198;
  uint *puStack_190;
  uint *puStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  uint *puStack_170;
  undefined8 *puStack_168;
  uint *puStack_160;
  uint *puStack_158;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  uint *puStack_f0;
  long lStack_e8;
  uint *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [136];
  long lStack_38;
  
  auVar27._8_8_ = param_6;
  auVar27._0_8_ = param_5;
  ppppuVar24 = (undefined8 ****)&stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR_03a5d648;
  puVar11 = param_7;
  puVar18 = param_8;
  uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)param_7,0);
  if ((uVar9 & 1) == 0) {
    if (param_6 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_6,0);
      uVar10 = Core_Networking_HostUsableResponse__CreateHostUsableResponse(param_6,param_8);
      uVar7 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                        (uVar10,param_6,8,uVar10);
      puVar11 = (uint *)/*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_6,uVar7,0);
      puVar25 = (undefined *)0x165bf60;
      ppuVar6 = (uint **)auStack_c0;
      goto FlatBuffers_FlatBufferBuilder__Finish;
    }
  }
  else {
    if (*(long *)PTR_03a5d648 == lStack_38) {
      return uVar9;
    }
    ___stack_chk_fail();
  }
  auVar27 = func_0x00f78af4();
  lVar20 = auVar27._8_8_;
  puVar12 = (uint *)&uStack_140;
  puStack_c8 = &Core_Networking_NetworkServicesOutput__WriteToSingleOtherPlayer;
  lStack_f8 = *(long *)PTR_03a5d648;
  if (lVar20 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    if (*(int *)(lVar20 + 0x18) != 0) {
      lVar19 = lVar20 + 0x20;
    }
  }
  lVar20 = *(long *)(auVar27._0_8_ + 0x10);
  puVar15 = puVar11;
  puVar17 = puVar18;
  puStack_f0 = param_8;
  lStack_e8 = param_6;
  puStack_e0 = param_7;
  uStack_d8 = param_5;
  pppuStack_d0 = ppppuVar24;
  if (lVar20 == 0) {
code_r0x0165c0b4:
    puVar12 = puVar17;
    func_0x00f78af4();
  }
  else {
    param_8 = *(uint **)(lVar20 + 0x30);
    uVar10 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar19,0);
    if (param_8 == (uint *)0x0) goto code_r0x0165c0b4;
    uStack_138 = param_9[1];
    uStack_140 = *param_9;
    uStack_128 = param_9[3];
    uStack_130 = param_9[2];
    uStack_118 = param_9[5];
    uStack_120 = param_9[4];
    uStack_108 = param_9[7];
    param_2 = param_9[6];
    puVar15 = puVar11;
    uStack_110 = param_2;
    uVar9 = (**(code **)(*(long *)param_8 + 600))
                      (param_8,uVar10,puVar11,&uStack_140,puVar18,
                       *(undefined8 *)(*(long *)param_8 + 0x260));
    if (*(long *)PTR_03a5d648 == lStack_f8) {
      return uVar9;
    }
  }
  auVar28 = ___stack_chk_fail();
  lVar20 = auVar28._8_8_;
  puStack_148 = &Core_Networking_NetworkServicesOutput__WriteGameModeDataToHost;
  puStack_170 = param_8;
  puStack_168 = param_9;
  puStack_160 = puVar11;
  puStack_158 = puVar18;
  pppuStack_150 = &pppuStack_d0;
  if (lVar20 == 0) {
    auVar28 = func_0x00f78af4();
    lVar20 = auVar28._8_8_;
    puStack_178 = &Core_Networking_NetworkServicesOutput__WriteGameMode;
    puStack_1a0 = param_8;
    puStack_198 = param_9;
    puStack_190 = puVar11;
    puStack_188 = puVar18;
    pppuStack_180 = &pppuStack_150;
    if (lVar20 == 0) {
      auVar27 = func_0x00f78af4();
      param_7 = auVar27._8_8_;
      ppuVar6 = &puStack_1d0;
      puStack_1a8 = &Core_Networking_NetworkServicesOutput__WriteEventStandingToHost;
      ppppuVar24 = &pppuStack_1b0;
      puStack_1d0 = param_8;
      puStack_1c8 = param_9;
      puStack_1c0 = puVar11;
      puStack_1b8 = puVar18;
      pppuStack_1b0 = &pppuStack_180;
      if (param_7 != (uint *)0x0) {
        /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_7,0);
        uVar7 = Core_Networking_EventStanding__CreateEventStanding
                          (puVar15[8],param_7,*puVar15,(char)puVar15[1],puVar15[2],(char)puVar15[9])
        ;
        uVar10 = Core_Networking_ClientStanding__CreateClientStanding(param_7,uVar7);
        uVar7 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                          (uVar10,param_7,6,uVar10);
        puVar11 = (uint *)/*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_7,0,uVar7);
        puVar25 = &UNK_0165c2e0;
        goto FlatBuffers_FlatBufferBuilder__Finish;
      }
      auVar28 = func_0x00f78af4();
      lVar20 = auVar28._8_8_;
      puStack_1d8 = &Core_Networking_NetworkServicesOutput__WriteEventStanding;
      puVar11 = puVar15;
      puVar18 = puVar12;
      pppuStack_1e0 = ppppuVar24;
      if ((bRam0000000003eb5834 & 1) == 0) {
        func_0x00f78a20(0x3d3b448);
        func_0x00f78a20(0x3d3b450);
        func_0x00f78a20(0x3d1ec38);
        bRam0000000003eb5834 = 1;
      }
      if ((lVar20 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar20,0), puVar15 == (uint *)0x0)) {
code_r0x0165c4e4:
        func_0x00f78af4();
code_r0x0165c4e8:
        uVar10 = func_0x00f78b24();
        auVar28 = func_0x00f78ac0(uVar10,0);
        lVar20 = auVar28._8_8_;
        puStack_228 = &Core_Networking_NetworkServicesOutput__WriteEventResult;
        puVar15 = puVar11;
        puVar17 = puVar18;
        pppuStack_230 = &pppuStack_1e0;
        if ((bRam0000000003eb5835 & 1) == 0) {
          func_0x00f78a20(0x3d3b5d0);
          func_0x00f78a20(0x3d3b410);
          func_0x00f78a20(0x3d3b5d8);
          func_0x00f78a20(0x3d3b418);
          func_0x00f78a20(0x3d1ec28);
          func_0x00f78a20(0x3d1ec30);
          bRam0000000003eb5835 = 1;
        }
        uVar7 = (undefined4)param_2;
        if (lVar20 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar20,0);
          uVar7 = (undefined4)param_2;
          if (puVar11 != (uint *)0x0) {
            Core_Networking_HostEventResults__StartRoundScoresVector(lVar20,puVar11[6]);
            lVar19 = func_0x00f78a34(/*FlatBuffers.Offset<EventScore>[]_TypeInfo*/ uRam0000000003d1ec30,puVar11[6]);
            uVar9 = (ulong)puVar11[6];
            if (0 < (int)puVar11[6]) {
              lVar22 = 0;
              uVar23 = 0;
              do {
                if ((uVar9 & 0xffffffff) <= uVar23) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar1 = *(long *)(puVar11 + 4) + lVar22;
                puVar15 = (uint *)(long)*(short *)(lVar1 + 0x24);
                puVar17 = (uint *)(ulong)*(byte *)(lVar1 + 0x28);
                uVar8 = Core_Networking_EventScore__CreateEventScore
                                  (lVar20,*(undefined4 *)(lVar1 + 0x20));
                uVar7 = (undefined4)param_2;
                if (lVar19 == 0) goto code_r0x0165c7b0;
                if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x0165c7b4;
                *(undefined4 *)(lVar19 + 0x20 + uVar23 * 4) = uVar8;
                uVar23 = uVar23 + 1;
                uVar9 = (ulong)(int)puVar11[6];
                lVar22 = lVar22 + 0xc;
              } while ((long)uVar23 < (long)uVar9);
            }
            param_8 = (uint *)Core_Networking_HostEventResults__CreateRoundScoresVector
                                        (lVar20,lVar19);
            uVar7 = (undefined4)param_2;
            if (puVar18 != (uint *)0x0) {
              Core_Networking_HostEventResults__StartStandingsVector(lVar20,puVar18[6]);
              lVar19 = func_0x00f78a34(/*FlatBuffers.Offset<EventFinishStanding>[]_TypeInfo*/ uRam0000000003d1ec28,puVar18[6]);
              uVar9 = (ulong)puVar18[6];
              if (0 < (int)puVar18[6]) {
                uVar23 = 0;
                lVar22 = 0x24;
                do {
                  if ((uVar9 & 0xffffffff) <= uVar23) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  puVar5 = (undefined1 *)(*(long *)(puVar18 + 4) + lVar22);
                  puVar17 = (uint *)(ulong)*(uint *)(puVar5 + 4);
                  uVar7 = Core_Networking_EventStanding__CreateEventStanding
                                    (*(undefined4 *)(puVar5 + 0x1c),lVar20,
                                     *(undefined4 *)(puVar5 + -4),*puVar5,puVar17,
                                     puVar5[0x20] != '\0');
                  if (puVar18[6] <= uVar23) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  puVar15 = (uint *)(long)*(short *)(*(long *)(puVar18 + 4) + lVar22 + 0x24);
                  uVar8 = Core_Networking_EventFinishStanding__CreateEventFinishStanding
                                    (lVar20,uVar7);
                  uVar7 = (undefined4)param_2;
                  puVar11 = param_8;
                  if (lVar19 == 0) goto code_r0x0165c7b0;
                  if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x0165c7b4;
                  *(undefined4 *)(lVar19 + 0x20 + uVar23 * 4) = uVar8;
                  uVar23 = uVar23 + 1;
                  uVar9 = (ulong)(int)puVar18[6];
                  lVar22 = lVar22 + 0x30;
                } while ((long)uVar23 < (long)uVar9);
              }
              puVar12 = (uint *)Core_Networking_HostEventResults__CreateStandingsVector
                                          (lVar20,lVar19);
              uVar10 = 2;
              puVar25 = &UNK_0165c724;
              ppuVar6 = (uint **)&stack0xfffffffffffffd80;
              ppppuVar24 = &pppuStack_230;
              goto code_r0x016ce2a4;
            }
          }
        }
code_r0x0165c7b0:
        func_0x00f78af4();
code_r0x0165c7b4:
        uVar10 = func_0x00f78b24();
        auVar27 = func_0x00f78ac0(uVar10,0);
        uVar9 = auVar27._8_8_;
        puVar12 = auVar27._0_8_;
        ppuVar6 = &puStack_350;
        ppuVar4 = &puStack_350;
        puStack_288 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationState;
        ppppuVar24 = &pppuStack_290;
        auVar28._8_8_ = uVar9;
        auVar28._0_8_ = 0x3eb5000;
        puStack_330 = puVar15;
        pppuStack_290 = &pppuStack_230;
        if ((bRam0000000003eb5836 & 1) == 0) {
          func_0x00f78a20(0x3d3b300);
          func_0x00f78a20(0x3d3b308);
          func_0x00f78a20(0x3d1ec48);
          bRam0000000003eb5836 = 1;
        }
        if (uVar9 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar9,0);
          if (*(long *)(puStack_330 + 8) != 0) {
            uVar2 = *(uint *)(*(long *)(puStack_330 + 8) + 0x18);
            param_8 = (uint *)(ulong)uVar2;
            if ((int)uVar2 < 1) {
              uVar10 = 3;
              puVar25 = &UNK_0165ca14;
            }
            else {
              puStack_348 = puVar12;
              Core_Networking_HostMigration__StartCarsVector(uVar9,param_8);
              lStack_338 = func_0x00f78a34(/*FlatBuffers.Offset<MigrationCar>[]_TypeInfo*/ uRam0000000003d1ec48,param_8);
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar9;
              auVar28 = auVar3 << 0x40;
              puVar11 = (uint *)0x0;
              lStack_338 = lStack_338 + 0x20;
              lStack_340 = (long)param_8 * 0x50;
              lVar20 = *(long *)(puStack_330 + 8);
              puVar12 = (uint *)0x0;
              puStack_350 = param_8;
              if (lVar20 == 0) goto code_r0x0165cacc;
              if (*(int *)(lVar20 + 0x18) == 0) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              puVar12 = (uint *)(ulong)*(byte *)(*(long *)(lVar20 + 0x10) + 0x6c);
              uStack_324 = *(undefined4 *)(*(long *)(lVar20 + 0x10) + 0x68);
              uVar10 = 10;
              puVar25 = &UNK_0165c90c;
              ppuVar6 = &puStack_350;
              param_8 = puVar11;
            }
            goto code_r0x016ce2a4;
          }
        }
code_r0x0165cacc:
        func_0x00f78af4();
        uVar10 = func_0x00f78b24();
        uVar9 = func_0x00f78ac0(uVar10,0);
        puStack_358 = &Core_Networking_Vec3__CreateVec3;
        uVar8 = param_3;
        uVar26 = uVar7;
        pppuStack_360 = ppppuVar24;
        if ((bRam0000000003eb5871 & 1) == 0) {
          func_0x00f78a20(0x3d3f288);
          bRam0000000003eb5871 = 1;
        }
        if (uVar9 == 0) {
          uVar9 = func_0x00f78af4();
          puStack_398 = &Core_Networking_Vec4__CreateVec4;
          pppuStack_3a0 = &pppuStack_360;
          if ((bRam0000000003eb5872 & 1) == 0) {
            func_0x00f78a20(0x3d3f290);
            bRam0000000003eb5872 = 1;
          }
          if (uVar9 == 0) {
            auVar27 = func_0x00f78af4();
            param_7 = auVar27._8_8_;
            ppuVar6 = &puStack_400;
            uStack_3f0 = 0x3eb5000;
            puStack_3d8 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
            ppppuVar24 = &pppuStack_3e0;
            puStack_400 = puVar11;
            puStack_3f8 = puVar12;
            uStack_3e8 = uVar9;
            pppuStack_3e0 = &pppuStack_3a0;
            if (param_7 == (uint *)0x0) {
              uVar9 = func_0x00f78af4();
              return uVar9;
            }
            /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_7,0);
            uVar10 = Core_Networking_HostMigrationDone__CreateHostMigrationDone
                               (param_7,*puVar15,puVar17);
            uVar7 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                              (uVar10,param_7,0xb,uVar10);
            puVar11 = (uint *)/*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_7,uVar7,0);
            puVar25 = &UNK_0165ccb8;
FlatBuffers_FlatBufferBuilder__Finish:
            while( true ) {
              puVar18 = puVar11;
              lVar20 = auVar27._8_8_;
              *(uint **)((long)ppuVar6 + -0x20) = param_7;
              *(long *)((long)ppuVar6 + -0x18) = auVar27._0_8_;
              *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar24;
              *(undefined **)((long)ppuVar6 + -8) = puVar25;
              ppppuVar24 = (undefined8 ****)((long)ppuVar6 + -0x10);
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
              uVar9 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,puVar18);
              if (*(long *)(lVar20 + 0x18) != 0) break;
              puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar28 = func_0x00f78af4();
              auVar27._8_8_ = auVar28._0_8_;
              auVar27._0_8_ = lVar20;
              ppuVar6 = (uint **)((long)ppuVar6 + -0x20);
              puVar11 = auVar28._8_8_;
              param_7 = puVar18;
            }
            *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
            return uVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar9,4,0x10,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_4,uVar9,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar8,uVar9,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar26,uVar9,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar9,0);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar9;
          ppuVar4 = (uint **)&stack0xfffffffffffffc70;
          ppppuVar24 = (undefined8 ****)pppuStack_3a0;
          puVar25 = puStack_398;
        }
        else {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar9,4,0xc,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,uVar9,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar7,uVar9,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_d0 & 0xffffffff,uVar9,0);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar9;
          ppppuVar24 = (undefined8 ****)pppuStack_360;
          puVar25 = puStack_358;
        }
        goto code_r0x016cda04;
      }
      Core_Networking_HostStanding__StartStandingsVector(lVar20,puVar15[6]);
      lVar19 = func_0x00f78a34(/*FlatBuffers.Offset<EventStanding>[]_TypeInfo*/ uRam0000000003d1ec38,puVar15[6]);
      uVar9 = (ulong)puVar15[6];
      puVar17 = puVar18;
      if (0 < (int)puVar15[6]) {
        lVar22 = 0;
        uVar23 = 0;
        do {
          if ((uVar9 & 0xffffffff) <= uVar23) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar1 = *(long *)(puVar15 + 4) + lVar22;
          puVar11 = (uint *)(ulong)*(byte *)(lVar1 + 0x24);
          puVar18 = (uint *)(ulong)*(uint *)(lVar1 + 0x28);
          uVar7 = Core_Networking_EventStanding__CreateEventStanding
                            (*(undefined4 *)(lVar1 + 0x40),lVar20,*(undefined4 *)(lVar1 + 0x20),
                             puVar11,puVar18,*(char *)(lVar1 + 0x44) != '\0');
          if (lVar19 == 0) goto code_r0x0165c4e4;
          if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x0165c4e8;
          *(undefined4 *)(lVar19 + 0x20 + uVar23 * 4) = uVar7;
          uVar23 = uVar23 + 1;
          uVar9 = (ulong)(int)puVar15[6];
          lVar22 = lVar22 + 0x28;
          puVar17 = puVar18;
        } while ((long)uVar23 < (long)uVar9);
      }
      param_8 = (uint *)Core_Networking_HostStanding__CreateStandingsVector(lVar20,lVar19);
      uVar10 = 3;
      puVar25 = &UNK_0165c448;
      ppuVar6 = (uint **)&stack0xfffffffffffffde0;
      ppppuVar24 = &pppuStack_1e0;
    }
    else {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar20,0);
      puVar17 = (uint *)(ulong)*puVar15;
      puVar12 = (uint *)Core_Networking_GameMode__CreateGameMode
                                  (lVar20,(long)(char)puVar15[1],puVar15[2],puVar17,(char)puVar15[8]
                                  );
      uVar10 = 1;
      puVar25 = &UNK_0165c1e4;
      ppuVar6 = &puStack_1a0;
      ppppuVar24 = &pppuStack_180;
    }
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar20,0);
    puVar17 = (uint *)(ulong)*puVar15;
    puVar12 = (uint *)Core_Networking_GameMode__CreateGameMode
                                (lVar20,(long)(char)puVar15[1],puVar15[2],puVar17,(char)puVar15[8]);
    uVar10 = 1;
    puVar25 = &UNK_0165c114;
    ppuVar6 = &puStack_170;
    ppppuVar24 = &pppuStack_150;
  }
code_r0x016ce2a4:
  lVar20 = auVar28._8_8_;
  ppuVar4 = (uint **)((long)ppuVar6 + -0x30);
  *(uint **)((long)ppuVar6 + -0x30) = param_8;
  *(uint **)((long)ppuVar6 + -0x28) = puVar12;
  *(long *)((long)ppuVar6 + -0x20) = lVar20;
  *(long *)((long)ppuVar6 + -0x18) = auVar28._0_8_;
  *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar24;
  *(undefined **)((long)ppuVar6 + -8) = puVar25;
  ppppuVar24 = (undefined8 ****)((long)ppuVar6 + -0x10);
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,uVar10,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar20);
  if (*(long *)(lVar20 + 0x28) == 0) {
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar29 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)ppuVar6 + -0x30);
    while( true ) {
      ppuVar4 = (uint **)(puVar5 + -0x20);
      *(undefined8 *)(puVar5 + -0x20) = uVar10;
      *(long *)(puVar5 + -0x18) = lVar20;
      *(undefined8 *****)(puVar5 + -0x10) = ppppuVar24;
      *(undefined **)(puVar5 + -8) = puVar25;
      if (auVar29._8_4_ < *(int *)(auVar29._0_8_ + 0x30)) break;
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar14);
      func_0x00f78af4();
      uVar14 = func_0x00f78b24();
      auVar29 = func_0x00f78ac0(uVar14,0);
      uVar9 = auVar29._0_8_;
      *(uint **)(puVar5 + -0x50) = param_8;
      *(undefined8 *)(puVar5 + -0x48) = uVar21;
      *(undefined8 *)(puVar5 + -0x40) = uVar10;
      *(undefined8 *)(puVar5 + -0x38) = uVar13;
      *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar16 == (int)puVar17) && (*(char *)(uVar9 + 0x48) == '\0')) {
        return uVar9;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar9,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar9,uVar16);
      ppppuVar24 = *(undefined8 *****)(puVar5 + -0x30);
      puVar25 = *(undefined **)(puVar5 + -0x28);
      uVar10 = *(undefined8 *)(puVar5 + -0x40);
      lVar20 = *(long *)(puVar5 + -0x38);
      param_8 = *(uint **)(puVar5 + -0x50);
      uVar21 = *(undefined8 *)(puVar5 + -0x48);
      puVar5 = puVar5 + -0x20;
    }
    ppppuVar24 = (undefined8 ****)(puVar5 + -0x10);
    puVar25 = &UNK_016ce3a4;
  }
  else {
    uVar21 = extraout_x1;
    if (*(int *)(*(long *)(lVar20 + 0x28) + 0x18) < 0) {
      auVar27 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar10);
      uVar21 = auVar27._8_8_;
      *(long *)(lVar20 + 0x28) = auVar27._0_8_;
    }
    auVar29._8_8_ = uVar21;
    auVar29._0_8_ = lVar20;
    *(undefined4 *)(lVar20 + 0x30) = 0;
    puVar25 = &UNK_016ce320;
  }
code_r0x016cda04:
  lVar20 = auVar29._0_8_;
  *(undefined8 *****)((long)ppuVar4 + -0x10) = ppppuVar24;
  *(undefined **)((long)ppuVar4 + -8) = puVar25;
  if ((*(long *)(lVar20 + 0x18) != 0) &&
     (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
    return (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
  }
  lVar20 = func_0x00f78af4(lVar20,auVar29._8_8_);
  return (ulong)*(byte *)(lVar20 + 0x48);
}



// ============================================================
// RVA: 0x165bfec | Core.Networking.NetworkServicesOutput.WriteToSingleOtherPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x0165c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165ca7c) */
/* WARNING: Removing unreachable block (ram,0x0165ca14) */
/* WARNING: Removing unreachable block (ram,0x0165ca38) */
/* WARNING: Removing unreachable block (ram,0x0165ca44) */
/* WARNING: Removing unreachable block (ram,0x0165c944) */
/* WARNING: Removing unreachable block (ram,0x0165c9c0) */
/* WARNING: Removing unreachable block (ram,0x0165c9cc) */
/* WARNING: Removing unreachable block (ram,0x0165c9e8) */
/* WARNING: Removing unreachable block (ram,0x0165c90c) */
/* WARNING: Removing unreachable block (ram,0x0165c774) */
/* WARNING: Removing unreachable block (ram,0x0165c724) */
/* WARNING: Removing unreachable block (ram,0x0165c4ac) */
/* WARNING: Removing unreachable block (ram,0x0165c448) */
/* WARNING: Removing unreachable block (ram,0x0165c2e0) */
/* WARNING: Removing unreachable block (ram,0x0165c228) */
/* WARNING: Removing unreachable block (ram,0x0165c1e4) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165c158) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165c114) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619a8) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */

ulong Core_Networking_NetworkServicesOutput__WriteToSingleOtherPlayer
                (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,undefined4 param_4,
                long param_5,long param_6,uint *param_7,undefined1 *param_8,undefined8 *param_9)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint **ppuVar5;
  uint **ppuVar6;
  undefined4 uVar7;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 uVar8;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  uint *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined8 uVar21;
  uint *unaff_x22;
  long lVar22;
  ulong uVar23;
  undefined8 ****ppppuVar24;
  undefined *puVar25;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint *puStack_340;
  undefined1 *puStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  undefined8 ***pppuStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2a0;
  undefined *puStack_298;
  uint *puStack_290;
  undefined1 *puStack_288;
  long lStack_280;
  long lStack_278;
  uint *puStack_270;
  undefined4 uStack_264;
  undefined8 ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  uint *puStack_110;
  undefined8 *puStack_108;
  uint *puStack_100;
  undefined1 *puStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  uint *puStack_e0;
  undefined8 *puStack_d8;
  uint *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  uint *puStack_b0;
  undefined8 *puStack_a8;
  uint *puStack_a0;
  undefined1 *puStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  puVar11 = &uStack_80;
  lStack_38 = *(long *)PTR_03a5d648;
  if (param_6 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(int *)(param_6 + 0x18) != 0) {
      lVar12 = param_6 + 0x20;
    }
  }
  puVar16 = param_7;
  puVar19 = param_8;
  if (*(long *)(param_5 + 0x10) == 0) {
code_r0x0165c0b4:
    puVar11 = (undefined8 *)puVar19;
    func_0x00f78af4();
  }
  else {
    unaff_x22 = *(uint **)(*(long *)(param_5 + 0x10) + 0x30);
    uVar9 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar12,0);
    if (unaff_x22 == (uint *)0x0) goto code_r0x0165c0b4;
    uStack_78 = param_9[1];
    uStack_80 = *param_9;
    uStack_68 = param_9[3];
    uStack_70 = param_9[2];
    uStack_58 = param_9[5];
    uStack_60 = param_9[4];
    uStack_48 = param_9[7];
    param_2 = param_9[6];
    puVar16 = param_7;
    uStack_50 = param_2;
    uVar10 = (**(code **)(*(long *)unaff_x22 + 600))
                       (unaff_x22,uVar9,param_7,&uStack_80,param_8,
                        *(undefined8 *)(*(long *)unaff_x22 + 0x260));
    if (*(long *)PTR_03a5d648 == lStack_38) {
      return uVar10;
    }
  }
  auVar27 = ___stack_chk_fail();
  lVar12 = auVar27._8_8_;
  puStack_88 = &Core_Networking_NetworkServicesOutput__WriteGameModeDataToHost;
  puStack_b0 = unaff_x22;
  puStack_a8 = param_9;
  puStack_a0 = param_7;
  puStack_98 = param_8;
  ppuStack_90 = (undefined8 **)&stack0xfffffffffffffff0;
  if (lVar12 == 0) {
    auVar27 = func_0x00f78af4();
    lVar12 = auVar27._8_8_;
    puStack_b8 = &Core_Networking_NetworkServicesOutput__WriteGameMode;
    puStack_e0 = unaff_x22;
    puStack_d8 = param_9;
    puStack_d0 = param_7;
    puStack_c8 = param_8;
    pppuStack_c0 = &ppuStack_90;
    if (lVar12 == 0) {
      auVar28 = func_0x00f78af4();
      lVar12 = auVar28._8_8_;
      ppuVar6 = &puStack_110;
      puStack_e8 = &Core_Networking_NetworkServicesOutput__WriteEventStandingToHost;
      ppppuVar24 = &pppuStack_f0;
      puStack_110 = unaff_x22;
      puStack_108 = param_9;
      puStack_100 = param_7;
      puStack_f8 = param_8;
      pppuStack_f0 = &pppuStack_c0;
      if (lVar12 != 0) {
        /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0);
        uVar7 = Core_Networking_EventStanding__CreateEventStanding
                          (puVar16[8],lVar12,*puVar16,(char)puVar16[1],puVar16[2],(char)puVar16[9]);
        uVar9 = Core_Networking_ClientStanding__CreateClientStanding(lVar12,uVar7);
        uVar7 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                          (uVar9,lVar12,6,uVar9);
        lVar20 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(lVar12,0,uVar7);
        puVar25 = &UNK_0165c2e0;
        goto FlatBuffers_FlatBufferBuilder__Finish;
      }
      auVar27 = func_0x00f78af4();
      lVar12 = auVar27._8_8_;
      puStack_118 = &Core_Networking_NetworkServicesOutput__WriteEventStanding;
      puVar15 = puVar16;
      puVar19 = (undefined1 *)puVar11;
      pppuStack_120 = ppppuVar24;
      if ((bRam0000000003eb5834 & 1) == 0) {
        func_0x00f78a20(0x3d3b448);
        func_0x00f78a20(0x3d3b450);
        func_0x00f78a20(0x3d1ec38);
        bRam0000000003eb5834 = 1;
      }
      if ((lVar12 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0), puVar16 == (uint *)0x0)) {
code_r0x0165c4e4:
        func_0x00f78af4();
code_r0x0165c4e8:
        uVar9 = func_0x00f78b24();
        auVar27 = func_0x00f78ac0(uVar9,0);
        lVar12 = auVar27._8_8_;
        puStack_168 = &Core_Networking_NetworkServicesOutput__WriteEventResult;
        puVar16 = puVar15;
        puVar18 = puVar19;
        pppuStack_170 = &pppuStack_120;
        if ((bRam0000000003eb5835 & 1) == 0) {
          func_0x00f78a20(0x3d3b5d0);
          func_0x00f78a20(0x3d3b410);
          func_0x00f78a20(0x3d3b5d8);
          func_0x00f78a20(0x3d3b418);
          func_0x00f78a20(0x3d1ec28);
          func_0x00f78a20(0x3d1ec30);
          bRam0000000003eb5835 = 1;
        }
        uVar7 = (undefined4)param_2;
        if (lVar12 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0);
          uVar7 = (undefined4)param_2;
          if (puVar15 != (uint *)0x0) {
            Core_Networking_HostEventResults__StartRoundScoresVector(lVar12,puVar15[6]);
            lVar20 = func_0x00f78a34(/*FlatBuffers.Offset<EventScore>[]_TypeInfo*/ uRam0000000003d1ec30,puVar15[6]);
            uVar10 = (ulong)puVar15[6];
            if (0 < (int)puVar15[6]) {
              lVar22 = 0;
              uVar23 = 0;
              do {
                if ((uVar10 & 0xffffffff) <= uVar23) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar1 = *(long *)(puVar15 + 4) + lVar22;
                puVar16 = (uint *)(long)*(short *)(lVar1 + 0x24);
                puVar18 = (undefined1 *)(ulong)*(byte *)(lVar1 + 0x28);
                uVar8 = Core_Networking_EventScore__CreateEventScore
                                  (lVar12,*(undefined4 *)(lVar1 + 0x20));
                uVar7 = (undefined4)param_2;
                if (lVar20 == 0) goto code_r0x0165c7b0;
                if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x0165c7b4;
                *(undefined4 *)(lVar20 + 0x20 + uVar23 * 4) = uVar8;
                uVar23 = uVar23 + 1;
                uVar10 = (ulong)(int)puVar15[6];
                lVar22 = lVar22 + 0xc;
              } while ((long)uVar23 < (long)uVar10);
            }
            unaff_x22 = (uint *)Core_Networking_HostEventResults__CreateRoundScoresVector
                                          (lVar12,lVar20);
            uVar7 = (undefined4)param_2;
            if (puVar19 != (undefined1 *)0x0) {
              Core_Networking_HostEventResults__StartStandingsVector
                        (lVar12,*(undefined4 *)(puVar19 + 0x18));
              lVar20 = func_0x00f78a34(/*FlatBuffers.Offset<EventFinishStanding>[]_TypeInfo*/ uRam0000000003d1ec28,*(undefined4 *)(puVar19 + 0x18));
              uVar10 = (ulong)*(uint *)(puVar19 + 0x18);
              if (0 < (int)*(uint *)(puVar19 + 0x18)) {
                uVar23 = 0;
                lVar22 = 0x24;
                do {
                  if ((uVar10 & 0xffffffff) <= uVar23) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  puVar2 = (undefined1 *)(*(long *)(puVar19 + 0x10) + lVar22);
                  puVar18 = (undefined1 *)(ulong)*(uint *)(puVar2 + 4);
                  uVar7 = Core_Networking_EventStanding__CreateEventStanding
                                    (*(undefined4 *)(puVar2 + 0x1c),lVar12,
                                     *(undefined4 *)(puVar2 + -4),*puVar2,puVar18,
                                     puVar2[0x20] != '\0');
                  if (*(uint *)(puVar19 + 0x18) <= uVar23) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  puVar16 = (uint *)(long)*(short *)(*(long *)(puVar19 + 0x10) + lVar22 + 0x24);
                  uVar8 = Core_Networking_EventFinishStanding__CreateEventFinishStanding
                                    (lVar12,uVar7);
                  uVar7 = (undefined4)param_2;
                  puVar15 = unaff_x22;
                  if (lVar20 == 0) goto code_r0x0165c7b0;
                  if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x0165c7b4;
                  *(undefined4 *)(lVar20 + 0x20 + uVar23 * 4) = uVar8;
                  uVar23 = uVar23 + 1;
                  uVar10 = (ulong)*(int *)(puVar19 + 0x18);
                  lVar22 = lVar22 + 0x30;
                } while ((long)uVar23 < (long)uVar10);
              }
              puVar11 = (undefined8 *)
                        Core_Networking_HostEventResults__CreateStandingsVector(lVar12,lVar20);
              uVar9 = 2;
              puVar25 = &UNK_0165c724;
              ppuVar6 = (uint **)&stack0xfffffffffffffe40;
              ppppuVar24 = &pppuStack_170;
              goto code_r0x016ce2a4;
            }
          }
        }
code_r0x0165c7b0:
        func_0x00f78af4();
code_r0x0165c7b4:
        uVar9 = func_0x00f78b24();
        auVar27 = func_0x00f78ac0(uVar9,0);
        uVar10 = auVar27._8_8_;
        puVar11 = auVar27._0_8_;
        ppuVar6 = &puStack_290;
        ppuVar5 = &puStack_290;
        puStack_1c8 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationState;
        ppppuVar24 = &pppuStack_1d0;
        auVar27._8_8_ = uVar10;
        auVar27._0_8_ = 0x3eb5000;
        puStack_270 = puVar16;
        pppuStack_1d0 = &pppuStack_170;
        if ((bRam0000000003eb5836 & 1) == 0) {
          func_0x00f78a20(0x3d3b300);
          func_0x00f78a20(0x3d3b308);
          func_0x00f78a20(0x3d1ec48);
          bRam0000000003eb5836 = 1;
        }
        if (uVar10 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar10,0);
          if (*(long *)(puStack_270 + 8) != 0) {
            uVar3 = *(uint *)(*(long *)(puStack_270 + 8) + 0x18);
            unaff_x22 = (uint *)(ulong)uVar3;
            if ((int)uVar3 < 1) {
              uVar9 = 3;
              puVar25 = &UNK_0165ca14;
            }
            else {
              puStack_288 = (undefined1 *)puVar11;
              Core_Networking_HostMigration__StartCarsVector(uVar10,unaff_x22);
              lStack_278 = func_0x00f78a34(/*FlatBuffers.Offset<MigrationCar>[]_TypeInfo*/ uRam0000000003d1ec48,unaff_x22);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar10;
              auVar27 = auVar4 << 0x40;
              puVar15 = (uint *)0x0;
              lStack_278 = lStack_278 + 0x20;
              lStack_280 = (long)unaff_x22 * 0x50;
              lVar12 = *(long *)(puStack_270 + 8);
              puVar11 = (undefined8 *)0x0;
              puStack_290 = unaff_x22;
              if (lVar12 == 0) goto code_r0x0165cacc;
              if (*(int *)(lVar12 + 0x18) == 0) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              puVar11 = (undefined8 *)(ulong)*(byte *)(*(long *)(lVar12 + 0x10) + 0x6c);
              uStack_264 = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x68);
              uVar9 = 10;
              puVar25 = &UNK_0165c90c;
              ppuVar6 = &puStack_290;
              unaff_x22 = puVar15;
            }
            goto code_r0x016ce2a4;
          }
        }
code_r0x0165cacc:
        func_0x00f78af4();
        uVar9 = func_0x00f78b24();
        uVar10 = func_0x00f78ac0(uVar9,0);
        puStack_298 = &Core_Networking_Vec3__CreateVec3;
        uVar8 = param_3;
        uVar26 = uVar7;
        pppuStack_2a0 = ppppuVar24;
        if ((bRam0000000003eb5871 & 1) == 0) {
          func_0x00f78a20(0x3d3f288);
          bRam0000000003eb5871 = 1;
        }
        if (uVar10 == 0) {
          uVar10 = func_0x00f78af4();
          puStack_2d8 = &Core_Networking_Vec4__CreateVec4;
          pppuStack_2e0 = &pppuStack_2a0;
          if ((bRam0000000003eb5872 & 1) == 0) {
            func_0x00f78a20(0x3d3f290);
            bRam0000000003eb5872 = 1;
          }
          if (uVar10 == 0) {
            auVar28 = func_0x00f78af4();
            lVar12 = auVar28._8_8_;
            ppuVar6 = &puStack_340;
            uStack_330 = 0x3eb5000;
            puStack_318 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
            ppppuVar24 = &pppuStack_320;
            puStack_340 = puVar15;
            puStack_338 = (undefined1 *)puVar11;
            uStack_328 = uVar10;
            pppuStack_320 = &pppuStack_2e0;
            if (lVar12 == 0) {
              uVar10 = func_0x00f78af4();
              return uVar10;
            }
            /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0);
            uVar9 = Core_Networking_HostMigrationDone__CreateHostMigrationDone
                              (lVar12,*puVar16,puVar18);
            uVar7 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                              (uVar9,lVar12,0xb,uVar9);
            lVar20 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(lVar12,uVar7,0);
            puVar25 = &UNK_0165ccb8;
FlatBuffers_FlatBufferBuilder__Finish:
            while( true ) {
              lVar22 = lVar20;
              lVar20 = auVar28._8_8_;
              *(long *)((long)ppuVar6 + -0x20) = lVar12;
              *(long *)((long)ppuVar6 + -0x18) = auVar28._0_8_;
              *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar24;
              *(undefined **)((long)ppuVar6 + -8) = puVar25;
              ppppuVar24 = (undefined8 ****)((long)ppuVar6 + -0x10);
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,lVar22);
              if (*(long *)(lVar20 + 0x18) != 0) break;
              puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar27 = func_0x00f78af4();
              auVar28._8_8_ = auVar27._0_8_;
              auVar28._0_8_ = lVar20;
              ppuVar6 = (uint **)((long)ppuVar6 + -0x20);
              lVar20 = auVar27._8_8_;
              lVar12 = lVar22;
            }
            *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
            return uVar10;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,4,0x10,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_4,uVar10,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar8,uVar10,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar26,uVar10,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar10,0);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar10;
          ppuVar5 = (uint **)&stack0xfffffffffffffd30;
          ppppuVar24 = (undefined8 ****)pppuStack_2e0;
          puVar25 = puStack_2d8;
        }
        else {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,4,0xc,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,uVar10,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar7,uVar10,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_d0 & 0xffffffff,uVar10,0);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar10;
          ppppuVar24 = (undefined8 ****)pppuStack_2a0;
          puVar25 = puStack_298;
        }
        goto code_r0x016cda04;
      }
      Core_Networking_HostStanding__StartStandingsVector(lVar12,puVar16[6]);
      lVar20 = func_0x00f78a34(/*FlatBuffers.Offset<EventStanding>[]_TypeInfo*/ uRam0000000003d1ec38,puVar16[6]);
      uVar10 = (ulong)puVar16[6];
      puVar18 = puVar19;
      if (0 < (int)puVar16[6]) {
        lVar22 = 0;
        uVar23 = 0;
        do {
          if ((uVar10 & 0xffffffff) <= uVar23) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar1 = *(long *)(puVar16 + 4) + lVar22;
          puVar15 = (uint *)(ulong)*(byte *)(lVar1 + 0x24);
          puVar19 = (undefined1 *)(ulong)*(uint *)(lVar1 + 0x28);
          uVar7 = Core_Networking_EventStanding__CreateEventStanding
                            (*(undefined4 *)(lVar1 + 0x40),lVar12,*(undefined4 *)(lVar1 + 0x20),
                             puVar15,puVar19,*(char *)(lVar1 + 0x44) != '\0');
          if (lVar20 == 0) goto code_r0x0165c4e4;
          if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x0165c4e8;
          *(undefined4 *)(lVar20 + 0x20 + uVar23 * 4) = uVar7;
          uVar23 = uVar23 + 1;
          uVar10 = (ulong)(int)puVar16[6];
          lVar22 = lVar22 + 0x28;
          puVar18 = puVar19;
        } while ((long)uVar23 < (long)uVar10);
      }
      unaff_x22 = (uint *)Core_Networking_HostStanding__CreateStandingsVector(lVar12,lVar20);
      uVar9 = 3;
      puVar25 = &UNK_0165c448;
      ppuVar6 = (uint **)&stack0xfffffffffffffea0;
      ppppuVar24 = &pppuStack_120;
    }
    else {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0);
      puVar18 = (undefined1 *)(ulong)*puVar16;
      puVar11 = (undefined8 *)
                Core_Networking_GameMode__CreateGameMode
                          (lVar12,(long)(char)puVar16[1],puVar16[2],puVar18,(char)puVar16[8]);
      uVar9 = 1;
      puVar25 = &UNK_0165c1e4;
      ppuVar6 = &puStack_e0;
      ppppuVar24 = &pppuStack_c0;
    }
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar12,0);
    puVar18 = (undefined1 *)(ulong)*puVar16;
    puVar11 = (undefined8 *)
              Core_Networking_GameMode__CreateGameMode
                        (lVar12,(long)(char)puVar16[1],puVar16[2],puVar18,(char)puVar16[8]);
    uVar9 = 1;
    puVar25 = &UNK_0165c114;
    ppuVar6 = &puStack_b0;
    ppppuVar24 = (undefined8 ****)&ppuStack_90;
  }
code_r0x016ce2a4:
  lVar12 = auVar27._8_8_;
  ppuVar5 = (uint **)((long)ppuVar6 + -0x30);
  *(uint **)((long)ppuVar6 + -0x30) = unaff_x22;
  *(undefined8 **)((long)ppuVar6 + -0x28) = puVar11;
  *(long *)((long)ppuVar6 + -0x20) = lVar12;
  *(long *)((long)ppuVar6 + -0x18) = auVar27._0_8_;
  *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar24;
  *(undefined **)((long)ppuVar6 + -8) = puVar25;
  ppppuVar24 = (undefined8 ****)((long)ppuVar6 + -0x10);
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,uVar9,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar12);
  if (*(long *)(lVar12 + 0x28) == 0) {
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar29 = func_0x00f78af4();
    puVar19 = (undefined1 *)((long)ppuVar6 + -0x30);
    while( true ) {
      ppuVar5 = (uint **)(puVar19 + -0x20);
      *(undefined8 *)(puVar19 + -0x20) = uVar9;
      *(long *)(puVar19 + -0x18) = lVar12;
      *(undefined8 *****)(puVar19 + -0x10) = ppppuVar24;
      *(undefined **)(puVar19 + -8) = puVar25;
      if (auVar29._8_4_ < *(int *)(auVar29._0_8_ + 0x30)) break;
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar17 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar14);
      func_0x00f78af4();
      uVar14 = func_0x00f78b24();
      auVar29 = func_0x00f78ac0(uVar14,0);
      uVar10 = auVar29._0_8_;
      *(uint **)(puVar19 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar19 + -0x48) = uVar21;
      *(undefined8 *)(puVar19 + -0x40) = uVar9;
      *(undefined8 *)(puVar19 + -0x38) = uVar13;
      *(undefined1 **)(puVar19 + -0x30) = puVar19 + -0x10;
      *(undefined **)(puVar19 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar17 == (int)puVar18) && (*(char *)(uVar10 + 0x48) == '\0')) {
        return uVar10;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,uVar17);
      ppppuVar24 = *(undefined8 *****)(puVar19 + -0x30);
      puVar25 = *(undefined **)(puVar19 + -0x28);
      uVar9 = *(undefined8 *)(puVar19 + -0x40);
      lVar12 = *(long *)(puVar19 + -0x38);
      unaff_x22 = *(uint **)(puVar19 + -0x50);
      uVar21 = *(undefined8 *)(puVar19 + -0x48);
      puVar19 = puVar19 + -0x20;
    }
    ppppuVar24 = (undefined8 ****)(puVar19 + -0x10);
    puVar25 = &UNK_016ce3a4;
  }
  else {
    uVar21 = extraout_x1;
    if (*(int *)(*(long *)(lVar12 + 0x28) + 0x18) < 0) {
      auVar27 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar9);
      uVar21 = auVar27._8_8_;
      *(long *)(lVar12 + 0x28) = auVar27._0_8_;
    }
    auVar29._8_8_ = uVar21;
    auVar29._0_8_ = lVar12;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    puVar25 = &UNK_016ce320;
  }
code_r0x016cda04:
  lVar12 = auVar29._0_8_;
  *(undefined8 *****)((long)ppuVar5 + -0x10) = ppppuVar24;
  *(undefined **)((long)ppuVar5 + -8) = puVar25;
  if ((*(long *)(lVar12 + 0x18) != 0) &&
     (lVar20 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar20 != 0)) {
    return (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar12 + 0x10));
  }
  lVar12 = func_0x00f78af4(lVar12,auVar29._8_8_);
  return (ulong)*(byte *)(lVar12 + 0x48);
}



// ============================================================
// RVA: 0x165c0bc | Core.Networking.NetworkServicesOutput.WriteGameModeDataToHost
// ============================================================

/* WARNING: Possible PIC construction at 0x0165c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165ca7c) */
/* WARNING: Removing unreachable block (ram,0x0165ca14) */
/* WARNING: Removing unreachable block (ram,0x0165ca38) */
/* WARNING: Removing unreachable block (ram,0x0165ca44) */
/* WARNING: Removing unreachable block (ram,0x0165c944) */
/* WARNING: Removing unreachable block (ram,0x0165c9c0) */
/* WARNING: Removing unreachable block (ram,0x0165c9cc) */
/* WARNING: Removing unreachable block (ram,0x0165c9e8) */
/* WARNING: Removing unreachable block (ram,0x0165c90c) */
/* WARNING: Removing unreachable block (ram,0x0165c774) */
/* WARNING: Removing unreachable block (ram,0x0165c724) */
/* WARNING: Removing unreachable block (ram,0x0165c4ac) */
/* WARNING: Removing unreachable block (ram,0x0165c448) */
/* WARNING: Removing unreachable block (ram,0x0165c2e0) */
/* WARNING: Removing unreachable block (ram,0x0165c228) */
/* WARNING: Removing unreachable block (ram,0x0165c1e4) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165c158) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165c114) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619a8) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */

ulong Core_Networking_NetworkServicesOutput__WriteGameModeDataToHost
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,long param_6,uint *param_7,ulong param_8)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint **ppuVar4;
  undefined1 *puVar5;
  uint **ppuVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  uint *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  uint *unaff_x22;
  long lVar20;
  ulong uVar21;
  undefined8 ****ppppuVar22;
  undefined *puVar23;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint *puStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_220;
  undefined *puStack_218;
  uint *puStack_210;
  ulong uStack_208;
  long lStack_200;
  long lStack_1f8;
  uint *puStack_1f0;
  undefined4 uStack_1e4;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  auVar27._8_8_ = param_6;
  auVar27._0_8_ = param_5;
  if (param_6 == 0) {
    auVar27 = func_0x00f78af4();
    lVar8 = auVar27._8_8_;
    puStack_38 = &Core_Networking_NetworkServicesOutput__WriteGameMode;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if (lVar8 == 0) {
      auVar25 = func_0x00f78af4();
      lVar8 = auVar25._8_8_;
      ppuVar6 = (uint **)&stack0xffffffffffffff70;
      puStack_68 = &Core_Networking_NetworkServicesOutput__WriteEventStandingToHost;
      ppppuVar22 = &pppuStack_70;
      pppuStack_70 = &pppuStack_40;
      if (lVar8 != 0) {
        /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0);
        uVar7 = Core_Networking_EventStanding__CreateEventStanding
                          (param_7[8],lVar8,*param_7,(char)param_7[1],param_7[2],(char)param_7[9]);
        uVar12 = Core_Networking_ClientStanding__CreateClientStanding(lVar8,uVar7);
        uVar7 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                          (uVar12,lVar8,6,uVar12);
        lVar18 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(lVar8,0,uVar7);
        puVar23 = &UNK_0165c2e0;
        goto FlatBuffers_FlatBufferBuilder__Finish;
      }
      auVar27 = func_0x00f78af4();
      lVar8 = auVar27._8_8_;
      puStack_98 = &Core_Networking_NetworkServicesOutput__WriteEventStanding;
      puVar13 = param_7;
      uVar11 = param_8;
      pppuStack_a0 = ppppuVar22;
      if ((bRam0000000003eb5834 & 1) == 0) {
        func_0x00f78a20(0x3d3b448);
        func_0x00f78a20(0x3d3b450);
        func_0x00f78a20(0x3d1ec38);
        bRam0000000003eb5834 = 1;
      }
      if ((lVar8 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0), param_7 == (uint *)0x0)) {
code_r0x0165c4e4:
        func_0x00f78af4();
code_r0x0165c4e8:
        uVar12 = func_0x00f78b24();
        auVar27 = func_0x00f78ac0(uVar12,0);
        lVar8 = auVar27._8_8_;
        puStack_e8 = &Core_Networking_NetworkServicesOutput__WriteEventResult;
        puVar14 = puVar13;
        uVar16 = uVar11;
        pppuStack_f0 = &pppuStack_a0;
        if ((bRam0000000003eb5835 & 1) == 0) {
          func_0x00f78a20(0x3d3b5d0);
          func_0x00f78a20(0x3d3b410);
          func_0x00f78a20(0x3d3b5d8);
          func_0x00f78a20(0x3d3b418);
          func_0x00f78a20(0x3d1ec28);
          func_0x00f78a20(0x3d1ec30);
          bRam0000000003eb5835 = 1;
        }
        if ((lVar8 != 0) && (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0), puVar13 != (uint *)0x0)) {
          Core_Networking_HostEventResults__StartRoundScoresVector(lVar8,puVar13[6]);
          lVar18 = func_0x00f78a34(/*FlatBuffers.Offset<EventScore>[]_TypeInfo*/ uRam0000000003d1ec30,puVar13[6]);
          uVar17 = (ulong)puVar13[6];
          if (0 < (int)puVar13[6]) {
            lVar20 = 0;
            uVar21 = 0;
            do {
              if ((uVar17 & 0xffffffff) <= uVar21) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar1 = *(long *)(puVar13 + 4) + lVar20;
              puVar14 = (uint *)(long)*(short *)(lVar1 + 0x24);
              uVar16 = (ulong)*(byte *)(lVar1 + 0x28);
              uVar7 = Core_Networking_EventScore__CreateEventScore
                                (lVar8,*(undefined4 *)(lVar1 + 0x20));
              if (lVar18 == 0) goto code_r0x0165c7b0;
              if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x0165c7b4;
              *(undefined4 *)(lVar18 + 0x20 + uVar21 * 4) = uVar7;
              uVar21 = uVar21 + 1;
              uVar17 = (ulong)(int)puVar13[6];
              lVar20 = lVar20 + 0xc;
            } while ((long)uVar21 < (long)uVar17);
          }
          unaff_x22 = (uint *)Core_Networking_HostEventResults__CreateRoundScoresVector
                                        (lVar8,lVar18);
          if (uVar11 != 0) {
            Core_Networking_HostEventResults__StartStandingsVector
                      (lVar8,*(undefined4 *)(uVar11 + 0x18));
            lVar18 = func_0x00f78a34(/*FlatBuffers.Offset<EventFinishStanding>[]_TypeInfo*/ uRam0000000003d1ec28,*(undefined4 *)(uVar11 + 0x18));
            uVar17 = (ulong)*(uint *)(uVar11 + 0x18);
            if (0 < (int)*(uint *)(uVar11 + 0x18)) {
              uVar21 = 0;
              lVar20 = 0x24;
              do {
                if ((uVar17 & 0xffffffff) <= uVar21) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                puVar5 = (undefined1 *)(*(long *)(uVar11 + 0x10) + lVar20);
                uVar16 = (ulong)*(uint *)(puVar5 + 4);
                uVar7 = Core_Networking_EventStanding__CreateEventStanding
                                  (*(undefined4 *)(puVar5 + 0x1c),lVar8,*(undefined4 *)(puVar5 + -4)
                                   ,*puVar5,uVar16,puVar5[0x20] != '\0');
                if (*(uint *)(uVar11 + 0x18) <= uVar21) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                puVar14 = (uint *)(long)*(short *)(*(long *)(uVar11 + 0x10) + lVar20 + 0x24);
                uVar7 = Core_Networking_EventFinishStanding__CreateEventFinishStanding(lVar8,uVar7);
                puVar13 = unaff_x22;
                if (lVar18 == 0) goto code_r0x0165c7b0;
                if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x0165c7b4;
                *(undefined4 *)(lVar18 + 0x20 + uVar21 * 4) = uVar7;
                uVar21 = uVar21 + 1;
                uVar17 = (ulong)*(int *)(uVar11 + 0x18);
                lVar20 = lVar20 + 0x30;
              } while ((long)uVar21 < (long)uVar17);
            }
            param_8 = Core_Networking_HostEventResults__CreateStandingsVector(lVar8,lVar18);
            uVar12 = 2;
            puVar23 = &UNK_0165c724;
            ppuVar6 = (uint **)&stack0xfffffffffffffec0;
            ppppuVar22 = &pppuStack_f0;
            goto code_r0x016ce2a4;
          }
        }
code_r0x0165c7b0:
        func_0x00f78af4();
code_r0x0165c7b4:
        uVar12 = func_0x00f78b24();
        auVar27 = func_0x00f78ac0(uVar12,0);
        uVar11 = auVar27._8_8_;
        param_8 = auVar27._0_8_;
        ppuVar6 = &puStack_210;
        puStack_148 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationState;
        ppppuVar22 = &pppuStack_150;
        auVar27._8_8_ = uVar11;
        auVar27._0_8_ = 0x3eb5000;
        puStack_1f0 = puVar14;
        pppuStack_150 = &pppuStack_f0;
        if ((bRam0000000003eb5836 & 1) == 0) {
          func_0x00f78a20(0x3d3b300);
          func_0x00f78a20(0x3d3b308);
          func_0x00f78a20(0x3d1ec48);
          bRam0000000003eb5836 = 1;
        }
        if (uVar11 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar11,0);
          if (*(long *)(puStack_1f0 + 8) != 0) {
            uVar2 = *(uint *)(*(long *)(puStack_1f0 + 8) + 0x18);
            unaff_x22 = (uint *)(ulong)uVar2;
            if ((int)uVar2 < 1) {
              uVar12 = 3;
              puVar23 = &UNK_0165ca14;
            }
            else {
              uStack_208 = param_8;
              Core_Networking_HostMigration__StartCarsVector(uVar11,unaff_x22);
              lStack_1f8 = func_0x00f78a34(/*FlatBuffers.Offset<MigrationCar>[]_TypeInfo*/ uRam0000000003d1ec48,unaff_x22);
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar11;
              auVar27 = auVar3 << 0x40;
              puVar13 = (uint *)0x0;
              lStack_1f8 = lStack_1f8 + 0x20;
              lStack_200 = (long)unaff_x22 * 0x50;
              lVar8 = *(long *)(puStack_1f0 + 8);
              param_8 = 0;
              puStack_210 = unaff_x22;
              if (lVar8 == 0) goto code_r0x0165cacc;
              if (*(int *)(lVar8 + 0x18) == 0) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              param_8 = (ulong)*(byte *)(*(long *)(lVar8 + 0x10) + 0x6c);
              uStack_1e4 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + 0x68);
              uVar12 = 10;
              puVar23 = &UNK_0165c90c;
              ppuVar6 = &puStack_210;
              unaff_x22 = puVar13;
            }
            goto code_r0x016ce2a4;
          }
        }
code_r0x0165cacc:
        func_0x00f78af4();
        uVar12 = func_0x00f78b24();
        uVar11 = func_0x00f78ac0(uVar12,0);
        puStack_218 = &Core_Networking_Vec3__CreateVec3;
        uVar7 = param_2;
        uVar24 = param_3;
        pppuStack_220 = ppppuVar22;
        if ((bRam0000000003eb5871 & 1) == 0) {
          func_0x00f78a20(0x3d3f288);
          bRam0000000003eb5871 = 1;
        }
        if (uVar11 == 0) {
          uVar11 = func_0x00f78af4();
          puStack_258 = &Core_Networking_Vec4__CreateVec4;
          pppuStack_260 = &pppuStack_220;
          if ((bRam0000000003eb5872 & 1) == 0) {
            func_0x00f78a20(0x3d3f290);
            bRam0000000003eb5872 = 1;
          }
          if (uVar11 == 0) {
            auVar25 = func_0x00f78af4();
            lVar8 = auVar25._8_8_;
            ppuVar6 = &puStack_2c0;
            uStack_2b0 = 0x3eb5000;
            puStack_298 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
            ppppuVar22 = &pppuStack_2a0;
            puStack_2c0 = puVar13;
            uStack_2b8 = param_8;
            uStack_2a8 = uVar11;
            pppuStack_2a0 = &pppuStack_260;
            if (lVar8 == 0) {
              uVar11 = func_0x00f78af4();
              return uVar11;
            }
            /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0);
            uVar12 = Core_Networking_HostMigrationDone__CreateHostMigrationDone
                               (lVar8,*puVar14,uVar16);
            uVar7 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                              (uVar12,lVar8,0xb,uVar12);
            lVar18 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(lVar8,uVar7,0);
            puVar23 = &UNK_0165ccb8;
FlatBuffers_FlatBufferBuilder__Finish:
            while( true ) {
              lVar20 = lVar18;
              lVar18 = auVar25._8_8_;
              *(long *)((long)ppuVar6 + -0x20) = lVar8;
              *(long *)((long)ppuVar6 + -0x18) = auVar25._0_8_;
              *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar22;
              *(undefined **)((long)ppuVar6 + -8) = puVar23;
              ppppuVar22 = (undefined8 ****)((long)ppuVar6 + -0x10);
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
              uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,lVar20);
              if (*(long *)(lVar18 + 0x18) != 0) break;
              puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar27 = func_0x00f78af4();
              auVar25._8_8_ = auVar27._0_8_;
              auVar25._0_8_ = lVar18;
              ppuVar6 = (uint **)((long)ppuVar6 + -0x20);
              lVar18 = auVar27._8_8_;
              lVar8 = lVar20;
            }
            *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
            return uVar11;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0x10,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_4,uVar11,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar24,uVar11,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar7,uVar11,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0_00,uVar11,0);
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar11;
          ppuVar4 = (uint **)&stack0xfffffffffffffdb0;
          ppppuVar22 = (undefined8 ****)pppuStack_260;
          puVar23 = puStack_258;
        }
        else {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0xc,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,uVar11,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_2,uVar11,0);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar11,0);
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar11;
          ppuVar4 = &puStack_210;
          ppppuVar22 = (undefined8 ****)pppuStack_220;
          puVar23 = puStack_218;
        }
        goto code_r0x016cda04;
      }
      Core_Networking_HostStanding__StartStandingsVector(lVar8,param_7[6]);
      lVar18 = func_0x00f78a34(/*FlatBuffers.Offset<EventStanding>[]_TypeInfo*/ uRam0000000003d1ec38,param_7[6]);
      uVar17 = (ulong)param_7[6];
      uVar16 = uVar11;
      if (0 < (int)param_7[6]) {
        lVar20 = 0;
        uVar21 = 0;
        do {
          if ((uVar17 & 0xffffffff) <= uVar21) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar1 = *(long *)(param_7 + 4) + lVar20;
          puVar13 = (uint *)(ulong)*(byte *)(lVar1 + 0x24);
          uVar11 = (ulong)*(uint *)(lVar1 + 0x28);
          uVar7 = Core_Networking_EventStanding__CreateEventStanding
                            (*(undefined4 *)(lVar1 + 0x40),lVar8,*(undefined4 *)(lVar1 + 0x20),
                             puVar13,uVar11,*(char *)(lVar1 + 0x44) != '\0');
          if (lVar18 == 0) goto code_r0x0165c4e4;
          if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x0165c4e8;
          *(undefined4 *)(lVar18 + 0x20 + uVar21 * 4) = uVar7;
          uVar21 = uVar21 + 1;
          uVar17 = (ulong)(int)param_7[6];
          lVar20 = lVar20 + 0x28;
          uVar16 = uVar11;
        } while ((long)uVar21 < (long)uVar17);
      }
      unaff_x22 = (uint *)Core_Networking_HostStanding__CreateStandingsVector(lVar8,lVar18);
      uVar12 = 3;
      puVar23 = &UNK_0165c448;
      ppuVar6 = (uint **)&stack0xffffffffffffff20;
      ppppuVar22 = &pppuStack_a0;
    }
    else {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0);
      uVar16 = (ulong)*param_7;
      param_8 = Core_Networking_GameMode__CreateGameMode
                          (lVar8,(long)(char)param_7[1],param_7[2],uVar16,(char)param_7[8]);
      uVar12 = 1;
      puVar23 = &UNK_0165c1e4;
      ppuVar6 = (uint **)&stack0xffffffffffffffa0;
      ppppuVar22 = &pppuStack_40;
    }
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_6,0);
    uVar16 = (ulong)*param_7;
    param_8 = Core_Networking_GameMode__CreateGameMode
                        (param_6,(long)(char)param_7[1],param_7[2],uVar16,(char)param_7[8]);
    uVar12 = 1;
    puVar23 = (undefined *)0x165c114;
    ppuVar6 = (uint **)&stack0xffffffffffffffd0;
    ppppuVar22 = (undefined8 ****)&stack0xfffffffffffffff0;
  }
code_r0x016ce2a4:
  lVar8 = auVar27._8_8_;
  ppuVar4 = (uint **)((long)ppuVar6 + -0x30);
  *(uint **)((long)ppuVar6 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar6 + -0x28) = param_8;
  *(long *)((long)ppuVar6 + -0x20) = lVar8;
  *(long *)((long)ppuVar6 + -0x18) = auVar27._0_8_;
  *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar22;
  *(undefined **)((long)ppuVar6 + -8) = puVar23;
  ppppuVar22 = (undefined8 ****)((long)ppuVar6 + -0x10);
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,uVar12,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar8);
  if (*(long *)(lVar8 + 0x28) == 0) {
    puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar26 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)ppuVar6 + -0x30);
    while( true ) {
      ppuVar4 = (uint **)(puVar5 + -0x20);
      *(undefined8 *)(puVar5 + -0x20) = uVar12;
      *(long *)(puVar5 + -0x18) = lVar8;
      *(undefined8 *****)(puVar5 + -0x10) = ppppuVar22;
      *(undefined **)(puVar5 + -8) = puVar23;
      if (auVar26._8_4_ < *(int *)(auVar26._0_8_ + 0x30)) break;
      func_0x00f78a24(0x3d22738);
      uVar9 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar9,uVar10);
      uVar10 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar9,uVar10);
      func_0x00f78af4();
      uVar10 = func_0x00f78b24();
      auVar26 = func_0x00f78ac0(uVar10,0);
      uVar11 = auVar26._0_8_;
      *(uint **)(puVar5 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x48) = uVar19;
      *(undefined8 *)(puVar5 + -0x40) = uVar12;
      *(undefined8 *)(puVar5 + -0x38) = uVar9;
      *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar15 == (int)uVar16) && (*(char *)(uVar11 + 0x48) == '\0')) {
        return uVar11;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar15);
      ppppuVar22 = *(undefined8 *****)(puVar5 + -0x30);
      puVar23 = *(undefined **)(puVar5 + -0x28);
      uVar12 = *(undefined8 *)(puVar5 + -0x40);
      lVar8 = *(long *)(puVar5 + -0x38);
      unaff_x22 = *(uint **)(puVar5 + -0x50);
      uVar19 = *(undefined8 *)(puVar5 + -0x48);
      puVar5 = puVar5 + -0x20;
    }
    ppppuVar22 = (undefined8 ****)(puVar5 + -0x10);
    puVar23 = &UNK_016ce3a4;
  }
  else {
    uVar19 = extraout_x1;
    if (*(int *)(*(long *)(lVar8 + 0x28) + 0x18) < 0) {
      auVar27 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar12);
      uVar19 = auVar27._8_8_;
      *(long *)(lVar8 + 0x28) = auVar27._0_8_;
    }
    auVar26._8_8_ = uVar19;
    auVar26._0_8_ = lVar8;
    *(undefined4 *)(lVar8 + 0x30) = 0;
    puVar23 = &UNK_016ce320;
  }
code_r0x016cda04:
  lVar8 = auVar26._0_8_;
  *(undefined8 *****)((long)ppuVar4 + -0x10) = ppppuVar22;
  *(undefined **)((long)ppuVar4 + -8) = puVar23;
  if ((*(long *)(lVar8 + 0x18) != 0) &&
     (lVar18 = *(long *)(*(long *)(lVar8 + 0x18) + 0x10), lVar18 != 0)) {
    return (ulong)(uint)(*(int *)(lVar18 + 0x18) - *(int *)(lVar8 + 0x10));
  }
  lVar8 = func_0x00f78af4(lVar8,auVar26._8_8_);
  return (ulong)*(byte *)(lVar8 + 0x48);
}



// ============================================================
// RVA: 0x165c18c | Core.Networking.NetworkServicesOutput.WriteGameMode
// ============================================================

/* WARNING: Possible PIC construction at 0x0165c1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165ca7c) */
/* WARNING: Removing unreachable block (ram,0x0165ca14) */
/* WARNING: Removing unreachable block (ram,0x0165ca38) */
/* WARNING: Removing unreachable block (ram,0x0165ca44) */
/* WARNING: Removing unreachable block (ram,0x0165c944) */
/* WARNING: Removing unreachable block (ram,0x0165c9c0) */
/* WARNING: Removing unreachable block (ram,0x0165c9cc) */
/* WARNING: Removing unreachable block (ram,0x0165c9e8) */
/* WARNING: Removing unreachable block (ram,0x0165c90c) */
/* WARNING: Removing unreachable block (ram,0x0165c774) */
/* WARNING: Removing unreachable block (ram,0x0165c724) */
/* WARNING: Removing unreachable block (ram,0x0165c4ac) */
/* WARNING: Removing unreachable block (ram,0x0165c448) */
/* WARNING: Removing unreachable block (ram,0x0165c2e0) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165c228) */
/* WARNING: Removing unreachable block (ram,0x0165c1e4) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619a8) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */

ulong Core_Networking_NetworkServicesOutput__WriteGameMode
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,long param_6,uint *param_7,ulong param_8)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint **ppuVar4;
  undefined1 *puVar5;
  uint **ppuVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  uint *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  uint *unaff_x22;
  long lVar20;
  ulong uVar21;
  undefined8 ****ppppuVar22;
  undefined *puVar23;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint *puStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 ***pppuStack_270;
  undefined *puStack_268;
  undefined8 ***pppuStack_230;
  undefined *puStack_228;
  undefined8 ***pppuStack_1f0;
  undefined *puStack_1e8;
  uint *puStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  uint *puStack_1c0;
  undefined4 uStack_1b4;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  auVar27._8_8_ = param_6;
  auVar27._0_8_ = param_5;
  if (param_6 == 0) {
    auVar25 = func_0x00f78af4();
    lVar8 = auVar25._8_8_;
    ppuVar6 = (uint **)&stack0xffffffffffffffa0;
    puStack_38 = &Core_Networking_NetworkServicesOutput__WriteEventStandingToHost;
    ppppuVar22 = &pppuStack_40;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if (lVar8 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0);
      uVar7 = Core_Networking_EventStanding__CreateEventStanding
                        (param_7[8],lVar8,*param_7,(char)param_7[1],param_7[2],(char)param_7[9]);
      uVar12 = Core_Networking_ClientStanding__CreateClientStanding(lVar8,uVar7);
      uVar7 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                        (uVar12,lVar8,6,uVar12);
      lVar18 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(lVar8,0,uVar7);
      puVar23 = &UNK_0165c2e0;
      goto FlatBuffers_FlatBufferBuilder__Finish;
    }
    auVar27 = func_0x00f78af4();
    lVar8 = auVar27._8_8_;
    puStack_68 = &Core_Networking_NetworkServicesOutput__WriteEventStanding;
    puVar13 = param_7;
    uVar11 = param_8;
    pppuStack_70 = ppppuVar22;
    if ((bRam0000000003eb5834 & 1) == 0) {
      func_0x00f78a20(0x3d3b448);
      func_0x00f78a20(0x3d3b450);
      func_0x00f78a20(0x3d1ec38);
      bRam0000000003eb5834 = 1;
    }
    if ((lVar8 == 0) || (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0), param_7 == (uint *)0x0)) {
code_r0x0165c4e4:
      func_0x00f78af4();
code_r0x0165c4e8:
      uVar12 = func_0x00f78b24();
      auVar27 = func_0x00f78ac0(uVar12,0);
      lVar8 = auVar27._8_8_;
      puStack_b8 = &Core_Networking_NetworkServicesOutput__WriteEventResult;
      puVar14 = puVar13;
      uVar16 = uVar11;
      pppuStack_c0 = &pppuStack_70;
      if ((bRam0000000003eb5835 & 1) == 0) {
        func_0x00f78a20(0x3d3b5d0);
        func_0x00f78a20(0x3d3b410);
        func_0x00f78a20(0x3d3b5d8);
        func_0x00f78a20(0x3d3b418);
        func_0x00f78a20(0x3d1ec28);
        func_0x00f78a20(0x3d1ec30);
        bRam0000000003eb5835 = 1;
      }
      if ((lVar8 != 0) && (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0), puVar13 != (uint *)0x0)) {
        Core_Networking_HostEventResults__StartRoundScoresVector(lVar8,puVar13[6]);
        lVar18 = func_0x00f78a34(/*FlatBuffers.Offset<EventScore>[]_TypeInfo*/ uRam0000000003d1ec30,puVar13[6]);
        uVar17 = (ulong)puVar13[6];
        if (0 < (int)puVar13[6]) {
          lVar20 = 0;
          uVar21 = 0;
          do {
            if ((uVar17 & 0xffffffff) <= uVar21) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar1 = *(long *)(puVar13 + 4) + lVar20;
            puVar14 = (uint *)(long)*(short *)(lVar1 + 0x24);
            uVar16 = (ulong)*(byte *)(lVar1 + 0x28);
            uVar7 = Core_Networking_EventScore__CreateEventScore
                              (lVar8,*(undefined4 *)(lVar1 + 0x20));
            if (lVar18 == 0) goto code_r0x0165c7b0;
            if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x0165c7b4;
            *(undefined4 *)(lVar18 + 0x20 + uVar21 * 4) = uVar7;
            uVar21 = uVar21 + 1;
            uVar17 = (ulong)(int)puVar13[6];
            lVar20 = lVar20 + 0xc;
          } while ((long)uVar21 < (long)uVar17);
        }
        unaff_x22 = (uint *)Core_Networking_HostEventResults__CreateRoundScoresVector(lVar8,lVar18);
        if (uVar11 != 0) {
          Core_Networking_HostEventResults__StartStandingsVector
                    (lVar8,*(undefined4 *)(uVar11 + 0x18));
          lVar18 = func_0x00f78a34(/*FlatBuffers.Offset<EventFinishStanding>[]_TypeInfo*/ uRam0000000003d1ec28,*(undefined4 *)(uVar11 + 0x18));
          uVar17 = (ulong)*(uint *)(uVar11 + 0x18);
          if (0 < (int)*(uint *)(uVar11 + 0x18)) {
            uVar21 = 0;
            lVar20 = 0x24;
            do {
              if ((uVar17 & 0xffffffff) <= uVar21) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              puVar5 = (undefined1 *)(*(long *)(uVar11 + 0x10) + lVar20);
              uVar16 = (ulong)*(uint *)(puVar5 + 4);
              uVar7 = Core_Networking_EventStanding__CreateEventStanding
                                (*(undefined4 *)(puVar5 + 0x1c),lVar8,*(undefined4 *)(puVar5 + -4),
                                 *puVar5,uVar16,puVar5[0x20] != '\0');
              if (*(uint *)(uVar11 + 0x18) <= uVar21) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              puVar14 = (uint *)(long)*(short *)(*(long *)(uVar11 + 0x10) + lVar20 + 0x24);
              uVar7 = Core_Networking_EventFinishStanding__CreateEventFinishStanding(lVar8,uVar7);
              puVar13 = unaff_x22;
              if (lVar18 == 0) goto code_r0x0165c7b0;
              if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x0165c7b4;
              *(undefined4 *)(lVar18 + 0x20 + uVar21 * 4) = uVar7;
              uVar21 = uVar21 + 1;
              uVar17 = (ulong)*(int *)(uVar11 + 0x18);
              lVar20 = lVar20 + 0x30;
            } while ((long)uVar21 < (long)uVar17);
          }
          param_8 = Core_Networking_HostEventResults__CreateStandingsVector(lVar8,lVar18);
          uVar12 = 2;
          puVar23 = &UNK_0165c724;
          ppuVar6 = (uint **)&stack0xfffffffffffffef0;
          ppppuVar22 = &pppuStack_c0;
          goto code_r0x016ce2a4;
        }
      }
code_r0x0165c7b0:
      func_0x00f78af4();
code_r0x0165c7b4:
      uVar12 = func_0x00f78b24();
      auVar27 = func_0x00f78ac0(uVar12,0);
      uVar11 = auVar27._8_8_;
      param_8 = auVar27._0_8_;
      ppuVar6 = &puStack_1e0;
      puStack_118 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationState;
      ppppuVar22 = &pppuStack_120;
      auVar27._8_8_ = uVar11;
      auVar27._0_8_ = 0x3eb5000;
      puStack_1c0 = puVar14;
      pppuStack_120 = &pppuStack_c0;
      if ((bRam0000000003eb5836 & 1) == 0) {
        func_0x00f78a20(0x3d3b300);
        func_0x00f78a20(0x3d3b308);
        func_0x00f78a20(0x3d1ec48);
        bRam0000000003eb5836 = 1;
      }
      if (uVar11 != 0) {
        /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar11,0);
        if (*(long *)(puStack_1c0 + 8) != 0) {
          uVar2 = *(uint *)(*(long *)(puStack_1c0 + 8) + 0x18);
          unaff_x22 = (uint *)(ulong)uVar2;
          if ((int)uVar2 < 1) {
            uVar12 = 3;
            puVar23 = &UNK_0165ca14;
          }
          else {
            uStack_1d8 = param_8;
            Core_Networking_HostMigration__StartCarsVector(uVar11,unaff_x22);
            lStack_1c8 = func_0x00f78a34(/*FlatBuffers.Offset<MigrationCar>[]_TypeInfo*/ uRam0000000003d1ec48,unaff_x22);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar11;
            auVar27 = auVar3 << 0x40;
            puVar13 = (uint *)0x0;
            lStack_1c8 = lStack_1c8 + 0x20;
            lStack_1d0 = (long)unaff_x22 * 0x50;
            lVar8 = *(long *)(puStack_1c0 + 8);
            param_8 = 0;
            puStack_1e0 = unaff_x22;
            if (lVar8 == 0) goto code_r0x0165cacc;
            if (*(int *)(lVar8 + 0x18) == 0) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            param_8 = (ulong)*(byte *)(*(long *)(lVar8 + 0x10) + 0x6c);
            uStack_1b4 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + 0x68);
            uVar12 = 10;
            puVar23 = &UNK_0165c90c;
            ppuVar6 = &puStack_1e0;
            unaff_x22 = puVar13;
          }
          goto code_r0x016ce2a4;
        }
      }
code_r0x0165cacc:
      func_0x00f78af4();
      uVar12 = func_0x00f78b24();
      uVar11 = func_0x00f78ac0(uVar12,0);
      puStack_1e8 = &Core_Networking_Vec3__CreateVec3;
      uVar7 = param_2;
      uVar24 = param_3;
      pppuStack_1f0 = ppppuVar22;
      if ((bRam0000000003eb5871 & 1) == 0) {
        func_0x00f78a20(0x3d3f288);
        bRam0000000003eb5871 = 1;
      }
      if (uVar11 == 0) {
        uVar11 = func_0x00f78af4();
        puStack_228 = &Core_Networking_Vec4__CreateVec4;
        pppuStack_230 = &pppuStack_1f0;
        if ((bRam0000000003eb5872 & 1) == 0) {
          func_0x00f78a20(0x3d3f290);
          bRam0000000003eb5872 = 1;
        }
        if (uVar11 == 0) {
          auVar25 = func_0x00f78af4();
          lVar8 = auVar25._8_8_;
          ppuVar6 = &puStack_290;
          uStack_280 = 0x3eb5000;
          puStack_268 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
          ppppuVar22 = &pppuStack_270;
          puStack_290 = puVar13;
          uStack_288 = param_8;
          uStack_278 = uVar11;
          pppuStack_270 = &pppuStack_230;
          if (lVar8 == 0) {
            uVar11 = func_0x00f78af4();
            return uVar11;
          }
          /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0);
          uVar12 = Core_Networking_HostMigrationDone__CreateHostMigrationDone(lVar8,*puVar14,uVar16)
          ;
          uVar7 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                            (uVar12,lVar8,0xb,uVar12);
          lVar18 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(lVar8,uVar7,0);
          puVar23 = &UNK_0165ccb8;
FlatBuffers_FlatBufferBuilder__Finish:
          while( true ) {
            lVar20 = lVar18;
            lVar18 = auVar25._8_8_;
            *(long *)((long)ppuVar6 + -0x20) = lVar8;
            *(long *)((long)ppuVar6 + -0x18) = auVar25._0_8_;
            *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar22;
            *(undefined **)((long)ppuVar6 + -8) = puVar23;
            ppppuVar22 = (undefined8 ****)((long)ppuVar6 + -0x10);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,lVar20);
            if (*(long *)(lVar18 + 0x18) != 0) break;
            puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar27 = func_0x00f78af4();
            auVar25._8_8_ = auVar27._0_8_;
            auVar25._0_8_ = lVar18;
            ppuVar6 = (uint **)((long)ppuVar6 + -0x20);
            lVar18 = auVar27._8_8_;
            lVar8 = lVar20;
          }
          *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
          return uVar11;
        }
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0x10,0);
        /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_4,uVar11,0);
        /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar24,uVar11,0);
        /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar7,uVar11,0);
        /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0_00,uVar11,0);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar11;
        ppuVar4 = (uint **)&stack0xfffffffffffffde0;
        ppppuVar22 = (undefined8 ****)pppuStack_230;
        puVar23 = puStack_228;
      }
      else {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0xc,0);
        /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,uVar11,0);
        /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_2,uVar11,0);
        /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar11,0);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar11;
        ppuVar4 = &puStack_1e0;
        ppppuVar22 = (undefined8 ****)pppuStack_1f0;
        puVar23 = puStack_1e8;
      }
      goto code_r0x016cda04;
    }
    Core_Networking_HostStanding__StartStandingsVector(lVar8,param_7[6]);
    lVar18 = func_0x00f78a34(/*FlatBuffers.Offset<EventStanding>[]_TypeInfo*/ uRam0000000003d1ec38,param_7[6]);
    uVar17 = (ulong)param_7[6];
    uVar16 = uVar11;
    if (0 < (int)param_7[6]) {
      lVar20 = 0;
      uVar21 = 0;
      do {
        if ((uVar17 & 0xffffffff) <= uVar21) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar1 = *(long *)(param_7 + 4) + lVar20;
        puVar13 = (uint *)(ulong)*(byte *)(lVar1 + 0x24);
        uVar11 = (ulong)*(uint *)(lVar1 + 0x28);
        uVar7 = Core_Networking_EventStanding__CreateEventStanding
                          (*(undefined4 *)(lVar1 + 0x40),lVar8,*(undefined4 *)(lVar1 + 0x20),puVar13
                           ,uVar11,*(char *)(lVar1 + 0x44) != '\0');
        if (lVar18 == 0) goto code_r0x0165c4e4;
        if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x0165c4e8;
        *(undefined4 *)(lVar18 + 0x20 + uVar21 * 4) = uVar7;
        uVar21 = uVar21 + 1;
        uVar17 = (ulong)(int)param_7[6];
        lVar20 = lVar20 + 0x28;
        uVar16 = uVar11;
      } while ((long)uVar21 < (long)uVar17);
    }
    unaff_x22 = (uint *)Core_Networking_HostStanding__CreateStandingsVector(lVar8,lVar18);
    uVar12 = 3;
    puVar23 = &UNK_0165c448;
    ppuVar6 = (uint **)&stack0xffffffffffffff50;
    ppppuVar22 = &pppuStack_70;
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_6,0);
    uVar16 = (ulong)*param_7;
    param_8 = Core_Networking_GameMode__CreateGameMode
                        (param_6,(long)(char)param_7[1],param_7[2],uVar16,(char)param_7[8]);
    uVar12 = 1;
    puVar23 = (undefined *)0x165c1e4;
    ppuVar6 = (uint **)&stack0xffffffffffffffd0;
    ppppuVar22 = (undefined8 ****)&stack0xfffffffffffffff0;
  }
code_r0x016ce2a4:
  lVar8 = auVar27._8_8_;
  ppuVar4 = (uint **)((long)ppuVar6 + -0x30);
  *(uint **)((long)ppuVar6 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar6 + -0x28) = param_8;
  *(long *)((long)ppuVar6 + -0x20) = lVar8;
  *(long *)((long)ppuVar6 + -0x18) = auVar27._0_8_;
  *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar22;
  *(undefined **)((long)ppuVar6 + -8) = puVar23;
  ppppuVar22 = (undefined8 ****)((long)ppuVar6 + -0x10);
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,uVar12,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar8);
  if (*(long *)(lVar8 + 0x28) == 0) {
    puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar26 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)ppuVar6 + -0x30);
    while( true ) {
      ppuVar4 = (uint **)(puVar5 + -0x20);
      *(undefined8 *)(puVar5 + -0x20) = uVar12;
      *(long *)(puVar5 + -0x18) = lVar8;
      *(undefined8 *****)(puVar5 + -0x10) = ppppuVar22;
      *(undefined **)(puVar5 + -8) = puVar23;
      if (auVar26._8_4_ < *(int *)(auVar26._0_8_ + 0x30)) break;
      func_0x00f78a24(0x3d22738);
      uVar9 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar9,uVar10);
      uVar10 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar9,uVar10);
      func_0x00f78af4();
      uVar10 = func_0x00f78b24();
      auVar26 = func_0x00f78ac0(uVar10,0);
      uVar11 = auVar26._0_8_;
      *(uint **)(puVar5 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x48) = uVar19;
      *(undefined8 *)(puVar5 + -0x40) = uVar12;
      *(undefined8 *)(puVar5 + -0x38) = uVar9;
      *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar15 == (int)uVar16) && (*(char *)(uVar11 + 0x48) == '\0')) {
        return uVar11;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1,0);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar15);
      ppppuVar22 = *(undefined8 *****)(puVar5 + -0x30);
      puVar23 = *(undefined **)(puVar5 + -0x28);
      uVar12 = *(undefined8 *)(puVar5 + -0x40);
      lVar8 = *(long *)(puVar5 + -0x38);
      unaff_x22 = *(uint **)(puVar5 + -0x50);
      uVar19 = *(undefined8 *)(puVar5 + -0x48);
      puVar5 = puVar5 + -0x20;
    }
    ppppuVar22 = (undefined8 ****)(puVar5 + -0x10);
    puVar23 = &UNK_016ce3a4;
  }
  else {
    uVar19 = extraout_x1;
    if (*(int *)(*(long *)(lVar8 + 0x28) + 0x18) < 0) {
      auVar27 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar12);
      uVar19 = auVar27._8_8_;
      *(long *)(lVar8 + 0x28) = auVar27._0_8_;
    }
    auVar26._8_8_ = uVar19;
    auVar26._0_8_ = lVar8;
    *(undefined4 *)(lVar8 + 0x30) = 0;
    puVar23 = &UNK_016ce320;
  }
code_r0x016cda04:
  lVar8 = auVar26._0_8_;
  *(undefined8 *****)((long)ppuVar4 + -0x10) = ppppuVar22;
  *(undefined **)((long)ppuVar4 + -8) = puVar23;
  if ((*(long *)(lVar8 + 0x18) != 0) &&
     (lVar18 = *(long *)(*(long *)(lVar8 + 0x18) + 0x10), lVar18 != 0)) {
    return (ulong)(uint)(*(int *)(lVar18 + 0x18) - *(int *)(lVar8 + 0x10));
  }
  lVar8 = func_0x00f78af4(lVar8,auVar26._8_8_);
  return (ulong)*(byte *)(lVar8 + 0x48);
}



// ============================================================
// RVA: 0x165c25c | Core.Networking.NetworkServicesOutput.WriteEventStandingToHost
// ============================================================

/* WARNING: Possible PIC construction at 0x0165c2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165ca7c) */
/* WARNING: Removing unreachable block (ram,0x0165ca14) */
/* WARNING: Removing unreachable block (ram,0x0165ca38) */
/* WARNING: Removing unreachable block (ram,0x0165ca44) */
/* WARNING: Removing unreachable block (ram,0x0165c944) */
/* WARNING: Removing unreachable block (ram,0x0165c9c0) */
/* WARNING: Removing unreachable block (ram,0x0165c9cc) */
/* WARNING: Removing unreachable block (ram,0x0165c9e8) */
/* WARNING: Removing unreachable block (ram,0x0165c90c) */
/* WARNING: Removing unreachable block (ram,0x0165c774) */
/* WARNING: Removing unreachable block (ram,0x0165c724) */
/* WARNING: Removing unreachable block (ram,0x0165c4ac) */
/* WARNING: Removing unreachable block (ram,0x0165c448) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165c2e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619a8) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkServicesOutput__WriteEventStandingToHost
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,long param_6,undefined4 *param_7,ulong param_8)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined4 **ppuVar4;
  undefined1 *puVar5;
  undefined4 **ppuVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  undefined *puVar24;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 *puStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined8 ***pppuStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_200;
  undefined *puStack_1f8;
  undefined8 ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined4 *puStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined4 *puStack_190;
  undefined4 uStack_184;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  auVar26._8_8_ = param_6;
  auVar26._0_8_ = param_5;
  ppppuVar23 = (undefined8 ****)&stack0xfffffffffffffff0;
  if (param_6 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_6,0);
    uVar7 = Core_Networking_EventStanding__CreateEventStanding
                      (param_7[8],param_6,*param_7,*(undefined1 *)(param_7 + 1),param_7[2],
                       *(undefined1 *)(param_7 + 9));
    uVar8 = Core_Networking_ClientStanding__CreateClientStanding(param_6,uVar7);
    uVar7 = Core_Networking_NetworkServicesOutput__ClientUpdateHolderToFlatBuffer
                      (uVar8,param_6,6,uVar8);
    lVar9 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_6,0,uVar7);
    puVar24 = (undefined *)0x165c2e0;
    ppuVar6 = (undefined4 **)&stack0xffffffffffffffd0;
    goto FlatBuffers_FlatBufferBuilder__Finish;
  }
  auVar28 = func_0x00f78af4();
  lVar9 = auVar28._8_8_;
  puStack_38 = &Core_Networking_NetworkServicesOutput__WriteEventStanding;
  puVar14 = param_7;
  uVar13 = param_8;
  pppuStack_40 = ppppuVar23;
  if ((bRam0000000003eb5834 & 1) == 0) {
    func_0x00f78a20(0x3d3b448);
    func_0x00f78a20(0x3d3b450);
    func_0x00f78a20(0x3d1ec38);
    bRam0000000003eb5834 = 1;
  }
  if ((lVar9 != 0) && (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar9,0), param_7 != (undefined4 *)0x0)) {
    Core_Networking_HostStanding__StartStandingsVector(lVar9,param_7[6]);
    lVar19 = func_0x00f78a34(/*FlatBuffers.Offset<EventStanding>[]_TypeInfo*/ uRam0000000003d1ec38,param_7[6]);
    uVar18 = (ulong)(uint)param_7[6];
    uVar17 = uVar13;
    if (0 < (int)param_7[6]) {
      lVar21 = 0;
      uVar22 = 0;
      do {
        if ((uVar18 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar1 = *(long *)(param_7 + 4) + lVar21;
        puVar14 = (undefined4 *)(ulong)*(byte *)(lVar1 + 0x24);
        uVar13 = (ulong)*(uint *)(lVar1 + 0x28);
        uVar7 = Core_Networking_EventStanding__CreateEventStanding
                          (*(undefined4 *)(lVar1 + 0x40),lVar9,*(undefined4 *)(lVar1 + 0x20),puVar14
                           ,uVar13,*(char *)(lVar1 + 0x44) != '\0');
        if (lVar19 == 0) goto code_r0x0165c4e4;
        if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_r0x0165c4e8;
        *(undefined4 *)(lVar19 + 0x20 + uVar22 * 4) = uVar7;
        uVar22 = uVar22 + 1;
        uVar18 = (ulong)(int)param_7[6];
        lVar21 = lVar21 + 0x28;
        uVar17 = uVar13;
      } while ((long)uVar22 < (long)uVar18);
    }
    puVar10 = (undefined4 *)Core_Networking_HostStanding__CreateStandingsVector(lVar9,lVar19);
    uVar8 = 3;
    puVar24 = &UNK_0165c448;
    ppuVar6 = (undefined4 **)&stack0xffffffffffffff80;
    ppppuVar23 = &pppuStack_40;
    goto code_r0x016ce2a4;
  }
code_r0x0165c4e4:
  func_0x00f78af4();
code_r0x0165c4e8:
  uVar8 = func_0x00f78b24();
  auVar28 = func_0x00f78ac0(uVar8,0);
  lVar9 = auVar28._8_8_;
  puStack_88 = &Core_Networking_NetworkServicesOutput__WriteEventResult;
  puVar15 = puVar14;
  uVar17 = uVar13;
  pppuStack_90 = &pppuStack_40;
  if ((bRam0000000003eb5835 & 1) == 0) {
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b410);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3b418);
    func_0x00f78a20(0x3d1ec28);
    func_0x00f78a20(0x3d1ec30);
    bRam0000000003eb5835 = 1;
  }
  if ((lVar9 != 0) && (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar9,0), puVar14 != (undefined4 *)0x0)) {
    Core_Networking_HostEventResults__StartRoundScoresVector(lVar9,puVar14[6]);
    lVar19 = func_0x00f78a34(/*FlatBuffers.Offset<EventScore>[]_TypeInfo*/ uRam0000000003d1ec30,puVar14[6]);
    uVar18 = (ulong)(uint)puVar14[6];
    if (0 < (int)puVar14[6]) {
      lVar21 = 0;
      uVar22 = 0;
      do {
        if ((uVar18 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar1 = *(long *)(puVar14 + 4) + lVar21;
        puVar15 = (undefined4 *)(long)*(short *)(lVar1 + 0x24);
        uVar17 = (ulong)*(byte *)(lVar1 + 0x28);
        uVar7 = Core_Networking_EventScore__CreateEventScore(lVar9,*(undefined4 *)(lVar1 + 0x20));
        if (lVar19 == 0) goto code_r0x0165c7b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_r0x0165c7b4;
        *(undefined4 *)(lVar19 + 0x20 + uVar22 * 4) = uVar7;
        uVar22 = uVar22 + 1;
        uVar18 = (ulong)(int)puVar14[6];
        lVar21 = lVar21 + 0xc;
      } while ((long)uVar22 < (long)uVar18);
    }
    puVar10 = (undefined4 *)Core_Networking_HostEventResults__CreateRoundScoresVector(lVar9,lVar19);
    if (uVar13 != 0) {
      Core_Networking_HostEventResults__StartStandingsVector(lVar9,*(undefined4 *)(uVar13 + 0x18));
      lVar19 = func_0x00f78a34(/*FlatBuffers.Offset<EventFinishStanding>[]_TypeInfo*/ uRam0000000003d1ec28,*(undefined4 *)(uVar13 + 0x18));
      uVar18 = (ulong)*(uint *)(uVar13 + 0x18);
      if (0 < (int)*(uint *)(uVar13 + 0x18)) {
        uVar22 = 0;
        lVar21 = 0x24;
        do {
          if ((uVar18 & 0xffffffff) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          puVar5 = (undefined1 *)(*(long *)(uVar13 + 0x10) + lVar21);
          uVar17 = (ulong)*(uint *)(puVar5 + 4);
          uVar7 = Core_Networking_EventStanding__CreateEventStanding
                            (*(undefined4 *)(puVar5 + 0x1c),lVar9,*(undefined4 *)(puVar5 + -4),
                             *puVar5,uVar17,puVar5[0x20] != '\0');
          if (*(uint *)(uVar13 + 0x18) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          puVar15 = (undefined4 *)(long)*(short *)(*(long *)(uVar13 + 0x10) + lVar21 + 0x24);
          uVar7 = Core_Networking_EventFinishStanding__CreateEventFinishStanding(lVar9,uVar7);
          puVar14 = puVar10;
          if (lVar19 == 0) goto code_r0x0165c7b0;
          if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_r0x0165c7b4;
          *(undefined4 *)(lVar19 + 0x20 + uVar22 * 4) = uVar7;
          uVar22 = uVar22 + 1;
          uVar18 = (ulong)*(int *)(uVar13 + 0x18);
          lVar21 = lVar21 + 0x30;
        } while ((long)uVar22 < (long)uVar18);
      }
      param_8 = Core_Networking_HostEventResults__CreateStandingsVector(lVar9,lVar19);
      uVar8 = 2;
      puVar24 = &UNK_0165c724;
      ppuVar6 = (undefined4 **)&stack0xffffffffffffff20;
      ppppuVar23 = &pppuStack_90;
      goto code_r0x016ce2a4;
    }
  }
code_r0x0165c7b0:
  func_0x00f78af4();
code_r0x0165c7b4:
  uVar8 = func_0x00f78b24();
  auVar26 = func_0x00f78ac0(uVar8,0);
  uVar13 = auVar26._8_8_;
  param_8 = auVar26._0_8_;
  ppuVar6 = &puStack_1b0;
  puStack_e8 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationState;
  ppppuVar23 = &pppuStack_f0;
  auVar28._8_8_ = uVar13;
  auVar28._0_8_ = 0x3eb5000;
  puStack_190 = puVar15;
  pppuStack_f0 = &pppuStack_90;
  if ((bRam0000000003eb5836 & 1) == 0) {
    func_0x00f78a20(0x3d3b300);
    func_0x00f78a20(0x3d3b308);
    func_0x00f78a20(0x3d1ec48);
    bRam0000000003eb5836 = 1;
  }
  if (uVar13 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar13,0);
    if (*(long *)(puStack_190 + 8) != 0) {
      uVar2 = *(uint *)(*(long *)(puStack_190 + 8) + 0x18);
      puVar10 = (undefined4 *)(ulong)uVar2;
      if ((int)uVar2 < 1) {
        uVar8 = 3;
        puVar24 = &UNK_0165ca14;
      }
      else {
        uStack_1a8 = param_8;
        Core_Networking_HostMigration__StartCarsVector(uVar13,puVar10);
        lStack_198 = func_0x00f78a34(/*FlatBuffers.Offset<MigrationCar>[]_TypeInfo*/ uRam0000000003d1ec48,puVar10);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar13;
        auVar28 = auVar3 << 0x40;
        puVar14 = (undefined4 *)0x0;
        lStack_198 = lStack_198 + 0x20;
        lStack_1a0 = (long)puVar10 * 0x50;
        lVar9 = *(long *)(puStack_190 + 8);
        param_8 = 0;
        puStack_1b0 = puVar10;
        if (lVar9 == 0) goto code_r0x0165cacc;
        if (*(int *)(lVar9 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        param_8 = (ulong)*(byte *)(*(long *)(lVar9 + 0x10) + 0x6c);
        uStack_184 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x68);
        uVar8 = 10;
        puVar24 = &UNK_0165c90c;
        ppuVar6 = &puStack_1b0;
        puVar10 = puVar14;
      }
code_r0x016ce2a4:
      lVar9 = auVar28._8_8_;
      ppuVar4 = (undefined4 **)((long)ppuVar6 + -0x30);
      *(undefined4 **)((long)ppuVar6 + -0x30) = puVar10;
      *(ulong *)((long)ppuVar6 + -0x28) = param_8;
      *(long *)((long)ppuVar6 + -0x20) = lVar9;
      *(long *)((long)ppuVar6 + -0x18) = auVar28._0_8_;
      *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar23;
      *(undefined **)((long)ppuVar6 + -8) = puVar24;
      ppppuVar23 = (undefined8 ****)((long)ppuVar6 + -0x10);
      uVar20 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,uVar8,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
      if (*(long *)(lVar9 + 0x28) == 0) {
        puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar27 = func_0x00f78af4();
        puVar5 = (undefined1 *)((long)ppuVar6 + -0x30);
        while( true ) {
          ppuVar4 = (undefined4 **)(puVar5 + -0x20);
          *(undefined8 *)(puVar5 + -0x20) = uVar8;
          *(long *)(puVar5 + -0x18) = lVar9;
          *(undefined8 *****)(puVar5 + -0x10) = ppppuVar23;
          *(undefined **)(puVar5 + -8) = puVar24;
          if (auVar27._8_4_ < *(int *)(auVar27._0_8_ + 0x30)) break;
          func_0x00f78a24(0x3d22738);
          uVar11 = func_0x00f78aec();
          uVar12 = func_0x00f78a24(0x3d6ceb8);
          uVar16 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar11,uVar12);
          uVar12 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar11,uVar12);
          func_0x00f78af4();
          uVar12 = func_0x00f78b24();
          auVar27 = func_0x00f78ac0(uVar12,0);
          uVar13 = auVar27._0_8_;
          *(undefined4 **)(puVar5 + -0x50) = puVar10;
          *(undefined8 *)(puVar5 + -0x48) = uVar20;
          *(undefined8 *)(puVar5 + -0x40) = uVar8;
          *(undefined8 *)(puVar5 + -0x38) = uVar11;
          *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
          *(undefined **)(puVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
          if (((int)uVar16 == (int)uVar17) && (*(char *)(uVar13 + 0x48) == '\0')) {
            return uVar13;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0);
          /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,uVar16);
          ppppuVar23 = *(undefined8 *****)(puVar5 + -0x30);
          puVar24 = *(undefined **)(puVar5 + -0x28);
          uVar8 = *(undefined8 *)(puVar5 + -0x40);
          lVar9 = *(long *)(puVar5 + -0x38);
          puVar10 = *(undefined4 **)(puVar5 + -0x50);
          uVar20 = *(undefined8 *)(puVar5 + -0x48);
          puVar5 = puVar5 + -0x20;
        }
        ppppuVar23 = (undefined8 ****)(puVar5 + -0x10);
        puVar24 = &UNK_016ce3a4;
      }
      else {
        uVar20 = extraout_x1;
        if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 0) {
          auVar26 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar8);
          uVar20 = auVar26._8_8_;
          *(long *)(lVar9 + 0x28) = auVar26._0_8_;
        }
        auVar27._8_8_ = uVar20;
        auVar27._0_8_ = lVar9;
        *(undefined4 *)(lVar9 + 0x30) = 0;
        puVar24 = &UNK_016ce320;
      }
      goto code_r0x016cda04;
    }
  }
code_r0x0165cacc:
  func_0x00f78af4();
  uVar8 = func_0x00f78b24();
  uVar13 = func_0x00f78ac0(uVar8,0);
  puStack_1b8 = &Core_Networking_Vec3__CreateVec3;
  uVar7 = param_2;
  uVar25 = param_3;
  pppuStack_1c0 = ppppuVar23;
  if ((bRam0000000003eb5871 & 1) == 0) {
    func_0x00f78a20(0x3d3f288);
    bRam0000000003eb5871 = 1;
  }
  if (uVar13 == 0) {
    uVar13 = func_0x00f78af4();
    puStack_1f8 = &Core_Networking_Vec4__CreateVec4;
    pppuStack_200 = &pppuStack_1c0;
    if ((bRam0000000003eb5872 & 1) == 0) {
      func_0x00f78a20(0x3d3f290);
      bRam0000000003eb5872 = 1;
    }
    if (uVar13 == 0) {
      auVar26 = func_0x00f78af4();
      param_6 = auVar26._8_8_;
      ppuVar6 = &puStack_260;
      uStack_250 = 0x3eb5000;
      puStack_238 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
      ppppuVar23 = &pppuStack_240;
      puStack_260 = puVar14;
      uStack_258 = param_8;
      uStack_248 = uVar13;
      pppuStack_240 = &pppuStack_200;
      if (param_6 == 0) {
        uVar13 = func_0x00f78af4();
        return uVar13;
      }
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_6,0);
      uVar8 = Core_Networking_HostMigrationDone__CreateHostMigrationDone(param_6,*puVar15,uVar17);
      uVar7 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                        (uVar8,param_6,0xb,uVar8);
      lVar9 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_6,uVar7,0);
      puVar24 = &UNK_0165ccb8;
FlatBuffers_FlatBufferBuilder__Finish:
      while( true ) {
        lVar19 = lVar9;
        lVar9 = auVar26._8_8_;
        *(long *)((long)ppuVar6 + -0x20) = param_6;
        *(long *)((long)ppuVar6 + -0x18) = auVar26._0_8_;
        *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar23;
        *(undefined **)((long)ppuVar6 + -8) = puVar24;
        ppppuVar23 = (undefined8 ****)((long)ppuVar6 + -0x10);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,*(undefined4 *)(lVar9 + 0x20),4);
        uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar9,lVar19);
        if (*(long *)(lVar9 + 0x18) != 0) break;
        puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar28 = func_0x00f78af4();
        auVar26._8_8_ = auVar28._0_8_;
        auVar26._0_8_ = lVar9;
        ppuVar6 = (undefined4 **)((long)ppuVar6 + -0x20);
        lVar9 = auVar28._8_8_;
        param_6 = lVar19;
      }
      *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x18) = *(undefined4 *)(lVar9 + 0x10);
      return uVar13;
    }
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0x10,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_4,uVar13,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar25,uVar13,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar7,uVar13,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0_00,uVar13,0);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar13;
    ppuVar4 = (undefined4 **)&stack0xfffffffffffffe10;
    ppppuVar23 = (undefined8 ****)pppuStack_200;
    puVar24 = puStack_1f8;
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,uVar13,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_2,uVar13,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar13,0);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar13;
    ppuVar4 = &puStack_1b0;
    ppppuVar23 = (undefined8 ****)pppuStack_1c0;
    puVar24 = puStack_1b8;
  }
code_r0x016cda04:
  lVar9 = auVar27._0_8_;
  *(undefined8 *****)((long)ppuVar4 + -0x10) = ppppuVar23;
  *(undefined **)((long)ppuVar4 + -8) = puVar24;
  if ((*(long *)(lVar9 + 0x18) != 0) &&
     (lVar19 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10), lVar19 != 0)) {
    return (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar9 + 0x10));
  }
  lVar9 = func_0x00f78af4(lVar9,auVar27._8_8_);
  return (ulong)*(byte *)(lVar9 + 0x48);
}



// ============================================================
// RVA: 0x165c314 | Core.Networking.NetworkServicesOutput.WriteEventStanding
// ============================================================

/* WARNING: Possible PIC construction at 0x0165c444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165ca7c) */
/* WARNING: Removing unreachable block (ram,0x0165ca14) */
/* WARNING: Removing unreachable block (ram,0x0165ca38) */
/* WARNING: Removing unreachable block (ram,0x0165ca44) */
/* WARNING: Removing unreachable block (ram,0x0165c944) */
/* WARNING: Removing unreachable block (ram,0x0165c9c0) */
/* WARNING: Removing unreachable block (ram,0x0165c9cc) */
/* WARNING: Removing unreachable block (ram,0x0165c9e8) */
/* WARNING: Removing unreachable block (ram,0x0165c90c) */
/* WARNING: Removing unreachable block (ram,0x0165c774) */
/* WARNING: Removing unreachable block (ram,0x0165c724) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165c4ac) */
/* WARNING: Removing unreachable block (ram,0x0165c448) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619a8) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkServicesOutput__WriteEventStanding
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,long param_6,undefined4 *param_7,ulong param_8)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined4 **ppuVar4;
  undefined1 *puVar5;
  undefined4 **ppuVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  undefined *puVar24;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long alStack_250 [4];
  undefined4 *puStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 ***pppuStack_190;
  undefined *puStack_188;
  undefined4 *puStack_180;
  ulong uStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 *puStack_160;
  undefined4 uStack_154;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  auVar28._8_8_ = param_6;
  auVar28._0_8_ = param_5;
  puVar13 = param_7;
  uVar16 = param_8;
  if ((bRam0000000003eb5834 & 1) == 0) {
    func_0x00f78a20(0x3d3b448);
    func_0x00f78a20(0x3d3b450);
    func_0x00f78a20(0x3d1ec38);
    bRam0000000003eb5834 = 1;
  }
  if ((param_6 != 0) && (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_6,0), param_7 != (undefined4 *)0x0)) {
    Core_Networking_HostStanding__StartStandingsVector(param_6,param_7[6]);
    lVar8 = func_0x00f78a34(/*FlatBuffers.Offset<EventStanding>[]_TypeInfo*/ uRam0000000003d1ec38,param_7[6]);
    uVar18 = (ulong)(uint)param_7[6];
    uVar17 = uVar16;
    if (0 < (int)param_7[6]) {
      lVar20 = 0;
      uVar22 = 0;
      do {
        if ((uVar18 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar21 = *(long *)(param_7 + 4) + lVar20;
        puVar13 = (undefined4 *)(ulong)*(byte *)(lVar21 + 0x24);
        uVar16 = (ulong)*(uint *)(lVar21 + 0x28);
        uVar7 = Core_Networking_EventStanding__CreateEventStanding
                          (*(undefined4 *)(lVar21 + 0x40),param_6,*(undefined4 *)(lVar21 + 0x20),
                           puVar13,uVar16,*(char *)(lVar21 + 0x44) != '\0');
        if (lVar8 == 0) goto LAB_0165c4e4;
        if (*(uint *)(lVar8 + 0x18) <= uVar22) goto LAB_0165c4e8;
        *(undefined4 *)(lVar8 + 0x20 + uVar22 * 4) = uVar7;
        uVar22 = uVar22 + 1;
        uVar18 = (ulong)(int)param_7[6];
        lVar20 = lVar20 + 0x28;
        uVar17 = uVar16;
      } while ((long)uVar22 < (long)uVar18);
    }
    puVar9 = (undefined4 *)Core_Networking_HostStanding__CreateStandingsVector(param_6,lVar8);
    uVar12 = 3;
    puVar24 = (undefined *)0x165c448;
    ppuVar6 = (undefined4 **)&stack0xffffffffffffffb0;
    ppppuVar23 = (undefined8 ****)&stack0xfffffffffffffff0;
    goto code_r0x016ce2a4;
  }
LAB_0165c4e4:
  func_0x00f78af4();
LAB_0165c4e8:
  uVar12 = func_0x00f78b24();
  auVar28 = func_0x00f78ac0(uVar12,0);
  lVar8 = auVar28._8_8_;
  puStack_58 = &Core_Networking_NetworkServicesOutput__WriteEventResult;
  puVar14 = puVar13;
  uVar17 = uVar16;
  pppuStack_60 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5835 & 1) == 0) {
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b410);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3b418);
    func_0x00f78a20(0x3d1ec28);
    func_0x00f78a20(0x3d1ec30);
    bRam0000000003eb5835 = 1;
  }
  if ((lVar8 != 0) && (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0), puVar13 != (undefined4 *)0x0)) {
    Core_Networking_HostEventResults__StartRoundScoresVector(lVar8,puVar13[6]);
    lVar20 = func_0x00f78a34(/*FlatBuffers.Offset<EventScore>[]_TypeInfo*/ uRam0000000003d1ec30,puVar13[6]);
    uVar18 = (ulong)(uint)puVar13[6];
    if (0 < (int)puVar13[6]) {
      lVar21 = 0;
      uVar22 = 0;
      do {
        if ((uVar18 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar1 = *(long *)(puVar13 + 4) + lVar21;
        puVar14 = (undefined4 *)(long)*(short *)(lVar1 + 0x24);
        uVar17 = (ulong)*(byte *)(lVar1 + 0x28);
        uVar7 = Core_Networking_EventScore__CreateEventScore(lVar8,*(undefined4 *)(lVar1 + 0x20));
        if (lVar20 == 0) goto code_r0x0165c7b0;
        if (*(uint *)(lVar20 + 0x18) <= uVar22) goto code_r0x0165c7b4;
        *(undefined4 *)(lVar20 + 0x20 + uVar22 * 4) = uVar7;
        uVar22 = uVar22 + 1;
        uVar18 = (ulong)(int)puVar13[6];
        lVar21 = lVar21 + 0xc;
      } while ((long)uVar22 < (long)uVar18);
    }
    puVar9 = (undefined4 *)Core_Networking_HostEventResults__CreateRoundScoresVector(lVar8,lVar20);
    if (uVar16 != 0) {
      Core_Networking_HostEventResults__StartStandingsVector(lVar8,*(undefined4 *)(uVar16 + 0x18));
      lVar20 = func_0x00f78a34(/*FlatBuffers.Offset<EventFinishStanding>[]_TypeInfo*/ uRam0000000003d1ec28,*(undefined4 *)(uVar16 + 0x18));
      uVar18 = (ulong)*(uint *)(uVar16 + 0x18);
      if (0 < (int)*(uint *)(uVar16 + 0x18)) {
        uVar22 = 0;
        lVar21 = 0x24;
        do {
          if ((uVar18 & 0xffffffff) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          puVar5 = (undefined1 *)(*(long *)(uVar16 + 0x10) + lVar21);
          uVar17 = (ulong)*(uint *)(puVar5 + 4);
          uVar7 = Core_Networking_EventStanding__CreateEventStanding
                            (*(undefined4 *)(puVar5 + 0x1c),lVar8,*(undefined4 *)(puVar5 + -4),
                             *puVar5,uVar17,puVar5[0x20] != '\0');
          if (*(uint *)(uVar16 + 0x18) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          puVar14 = (undefined4 *)(long)*(short *)(*(long *)(uVar16 + 0x10) + lVar21 + 0x24);
          uVar7 = Core_Networking_EventFinishStanding__CreateEventFinishStanding(lVar8,uVar7);
          puVar13 = puVar9;
          if (lVar20 == 0) goto code_r0x0165c7b0;
          if (*(uint *)(lVar20 + 0x18) <= uVar22) goto code_r0x0165c7b4;
          *(undefined4 *)(lVar20 + 0x20 + uVar22 * 4) = uVar7;
          uVar22 = uVar22 + 1;
          uVar18 = (ulong)*(int *)(uVar16 + 0x18);
          lVar21 = lVar21 + 0x30;
        } while ((long)uVar22 < (long)uVar18);
      }
      param_8 = Core_Networking_HostEventResults__CreateStandingsVector(lVar8,lVar20);
      uVar12 = 2;
      puVar24 = &UNK_0165c724;
      ppuVar6 = (undefined4 **)&stack0xffffffffffffff50;
      ppppuVar23 = &pppuStack_60;
      goto code_r0x016ce2a4;
    }
  }
code_r0x0165c7b0:
  func_0x00f78af4();
code_r0x0165c7b4:
  uVar12 = func_0x00f78b24();
  auVar28 = func_0x00f78ac0(uVar12,0);
  uVar16 = auVar28._8_8_;
  param_8 = auVar28._0_8_;
  ppuVar6 = &puStack_180;
  puStack_b8 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationState;
  ppppuVar23 = &pppuStack_c0;
  auVar28._8_8_ = uVar16;
  auVar28._0_8_ = 0x3eb5000;
  puStack_160 = puVar14;
  pppuStack_c0 = &pppuStack_60;
  if ((bRam0000000003eb5836 & 1) == 0) {
    func_0x00f78a20(0x3d3b300);
    func_0x00f78a20(0x3d3b308);
    func_0x00f78a20(0x3d1ec48);
    bRam0000000003eb5836 = 1;
  }
  if (uVar16 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(uVar16,0);
    if (*(long *)(puStack_160 + 8) != 0) {
      uVar2 = *(uint *)(*(long *)(puStack_160 + 8) + 0x18);
      puVar9 = (undefined4 *)(ulong)uVar2;
      if ((int)uVar2 < 1) {
        uVar12 = 3;
        puVar24 = &UNK_0165ca14;
      }
      else {
        uStack_178 = param_8;
        Core_Networking_HostMigration__StartCarsVector(uVar16,puVar9);
        lStack_168 = func_0x00f78a34(/*FlatBuffers.Offset<MigrationCar>[]_TypeInfo*/ uRam0000000003d1ec48,puVar9);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar16;
        auVar28 = auVar3 << 0x40;
        puVar13 = (undefined4 *)0x0;
        lStack_168 = lStack_168 + 0x20;
        lStack_170 = (long)puVar9 * 0x50;
        lVar8 = *(long *)(puStack_160 + 8);
        param_8 = 0;
        puStack_180 = puVar9;
        if (lVar8 == 0) goto code_r0x0165cacc;
        if (*(int *)(lVar8 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        param_8 = (ulong)*(byte *)(*(long *)(lVar8 + 0x10) + 0x6c);
        uStack_154 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + 0x68);
        uVar12 = 10;
        puVar24 = &UNK_0165c90c;
        ppuVar6 = &puStack_180;
        puVar9 = puVar13;
      }
code_r0x016ce2a4:
      lVar8 = auVar28._8_8_;
      ppuVar4 = (undefined4 **)((long)ppuVar6 + -0x30);
      *(undefined4 **)((long)ppuVar6 + -0x30) = puVar9;
      *(ulong *)((long)ppuVar6 + -0x28) = param_8;
      *(long *)((long)ppuVar6 + -0x20) = lVar8;
      *(long *)((long)ppuVar6 + -0x18) = auVar28._0_8_;
      *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar23;
      *(undefined **)((long)ppuVar6 + -8) = puVar24;
      ppppuVar23 = (undefined8 ****)((long)ppuVar6 + -0x10);
      uVar19 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,uVar12,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar8);
      if (*(long *)(lVar8 + 0x28) == 0) {
        puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar27 = func_0x00f78af4();
        puVar5 = (undefined1 *)((long)ppuVar6 + -0x30);
        while( true ) {
          ppuVar4 = (undefined4 **)(puVar5 + -0x20);
          *(undefined8 *)(puVar5 + -0x20) = uVar12;
          *(long *)(puVar5 + -0x18) = lVar8;
          *(undefined8 *****)(puVar5 + -0x10) = ppppuVar23;
          *(undefined **)(puVar5 + -8) = puVar24;
          if (auVar27._8_4_ < *(int *)(auVar27._0_8_ + 0x30)) break;
          func_0x00f78a24(0x3d22738);
          uVar10 = func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d6ceb8);
          uVar15 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar10,uVar11);
          uVar11 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar10,uVar11);
          func_0x00f78af4();
          uVar11 = func_0x00f78b24();
          auVar27 = func_0x00f78ac0(uVar11,0);
          uVar16 = auVar27._0_8_;
          *(undefined4 **)(puVar5 + -0x50) = puVar9;
          *(undefined8 *)(puVar5 + -0x48) = uVar19;
          *(undefined8 *)(puVar5 + -0x40) = uVar12;
          *(undefined8 *)(puVar5 + -0x38) = uVar10;
          *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
          *(undefined **)(puVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
          if (((int)uVar15 == (int)uVar17) && (*(char *)(uVar16 + 0x48) == '\0')) {
            return uVar16;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,1,0);
          /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar16,uVar15);
          ppppuVar23 = *(undefined8 *****)(puVar5 + -0x30);
          puVar24 = *(undefined **)(puVar5 + -0x28);
          uVar12 = *(undefined8 *)(puVar5 + -0x40);
          lVar8 = *(long *)(puVar5 + -0x38);
          puVar9 = *(undefined4 **)(puVar5 + -0x50);
          uVar19 = *(undefined8 *)(puVar5 + -0x48);
          puVar5 = puVar5 + -0x20;
        }
        ppppuVar23 = (undefined8 ****)(puVar5 + -0x10);
        puVar24 = &UNK_016ce3a4;
      }
      else {
        uVar19 = extraout_x1;
        if (*(int *)(*(long *)(lVar8 + 0x28) + 0x18) < 0) {
          auVar28 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar12);
          uVar19 = auVar28._8_8_;
          *(long *)(lVar8 + 0x28) = auVar28._0_8_;
        }
        auVar27._8_8_ = uVar19;
        auVar27._0_8_ = lVar8;
        *(undefined4 *)(lVar8 + 0x30) = 0;
        puVar24 = &UNK_016ce320;
      }
      goto code_r0x016cda04;
    }
  }
code_r0x0165cacc:
  func_0x00f78af4();
  uVar12 = func_0x00f78b24();
  uVar16 = func_0x00f78ac0(uVar12,0);
  puStack_188 = &Core_Networking_Vec3__CreateVec3;
  uVar7 = param_2;
  uVar25 = param_3;
  pppuStack_190 = ppppuVar23;
  if ((bRam0000000003eb5871 & 1) == 0) {
    func_0x00f78a20(0x3d3f288);
    bRam0000000003eb5871 = 1;
  }
  if (uVar16 == 0) {
    uVar16 = func_0x00f78af4();
    puStack_1c8 = &Core_Networking_Vec4__CreateVec4;
    pppuStack_1d0 = &pppuStack_190;
    if ((bRam0000000003eb5872 & 1) == 0) {
      func_0x00f78a20(0x3d3f290);
      bRam0000000003eb5872 = 1;
    }
    if (uVar16 == 0) {
      auVar26 = func_0x00f78af4();
      lVar8 = auVar26._8_8_;
      ppuVar6 = &puStack_230;
      uStack_220 = 0x3eb5000;
      puStack_208 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
      ppppuVar23 = &pppuStack_210;
      puStack_230 = puVar13;
      uStack_228 = param_8;
      uStack_218 = uVar16;
      pppuStack_210 = &pppuStack_1d0;
      if (lVar8 == 0) {
        uVar16 = func_0x00f78af4();
        return uVar16;
      }
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar8,0);
      uVar12 = Core_Networking_HostMigrationDone__CreateHostMigrationDone(lVar8,*puVar14,uVar17);
      uVar7 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                        (uVar12,lVar8,0xb,uVar12);
      lVar20 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(lVar8,uVar7,0);
      puVar24 = &UNK_0165ccb8;
      while( true ) {
        lVar21 = lVar20;
        lVar20 = auVar26._8_8_;
        *(long *)((long)ppuVar6 + -0x20) = lVar8;
        *(long *)((long)ppuVar6 + -0x18) = auVar26._0_8_;
        *(undefined8 *****)((long)ppuVar6 + -0x10) = ppppuVar23;
        *(undefined **)((long)ppuVar6 + -8) = puVar24;
        ppppuVar23 = (undefined8 ****)((long)ppuVar6 + -0x10);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
        uVar16 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,lVar21);
        if (*(long *)(lVar20 + 0x18) != 0) break;
        puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar28 = func_0x00f78af4();
        auVar26._8_8_ = auVar28._0_8_;
        auVar26._0_8_ = lVar20;
        ppuVar6 = (undefined4 **)((long)ppuVar6 + -0x20);
        lVar20 = auVar28._8_8_;
        lVar8 = lVar21;
      }
      *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
      return uVar16;
    }
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,4,0x10,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_4,uVar16,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar25,uVar16,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar7,uVar16,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0_00,uVar16,0);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar16;
    ppuVar4 = (undefined4 **)&stack0xfffffffffffffe40;
    ppppuVar23 = (undefined8 ****)pppuStack_1d0;
    puVar24 = puStack_1c8;
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,uVar16,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_2,uVar16,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar16,0);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar16;
    ppuVar4 = &puStack_180;
    ppppuVar23 = (undefined8 ****)pppuStack_190;
    puVar24 = puStack_188;
  }
code_r0x016cda04:
  lVar8 = auVar27._0_8_;
  *(undefined8 *****)((long)ppuVar4 + -0x10) = ppppuVar23;
  *(undefined **)((long)ppuVar4 + -8) = puVar24;
  if ((*(long *)(lVar8 + 0x18) != 0) &&
     (lVar20 = *(long *)(*(long *)(lVar8 + 0x18) + 0x10), lVar20 != 0)) {
    return (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar8 + 0x10));
  }
  lVar8 = func_0x00f78af4(lVar8,auVar27._8_8_);
  return (ulong)*(byte *)(lVar8 + 0x48);
}



// ============================================================
// RVA: 0x165c4f4 | Core.Networking.NetworkServicesOutput.WriteEventResult
// ============================================================

/* WARNING: Possible PIC construction at 0x0165c720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165ca7c) */
/* WARNING: Removing unreachable block (ram,0x0165ca14) */
/* WARNING: Removing unreachable block (ram,0x0165ca38) */
/* WARNING: Removing unreachable block (ram,0x0165ca44) */
/* WARNING: Removing unreachable block (ram,0x0165c944) */
/* WARNING: Removing unreachable block (ram,0x0165c9c0) */
/* WARNING: Removing unreachable block (ram,0x0165c9cc) */
/* WARNING: Removing unreachable block (ram,0x0165c9e8) */
/* WARNING: Removing unreachable block (ram,0x0165c90c) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165c774) */
/* WARNING: Removing unreachable block (ram,0x0165c724) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619a8) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkServicesOutput__WriteEventResult
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,long param_6,undefined4 *param_7,ulong param_8)

{
  uint uVar1;
  undefined4 **ppuVar2;
  undefined1 *puVar3;
  undefined4 **ppuVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  long lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 ****ppppuVar19;
  undefined *puVar20;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long alStack_200 [4];
  undefined4 *puStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 ***pppuStack_140;
  undefined *puStack_138;
  undefined4 *puStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  undefined4 *puStack_110;
  undefined4 uStack_104;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  
  puVar12 = param_7;
  uVar14 = param_8;
  if ((bRam0000000003eb5835 & 1) == 0) {
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b410);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3b418);
    func_0x00f78a20(0x3d1ec28);
    func_0x00f78a20(0x3d1ec30);
    bRam0000000003eb5835 = 1;
  }
  if ((param_6 != 0) && (/*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_6,0), param_7 != (undefined4 *)0x0)) {
    Core_Networking_HostEventResults__StartRoundScoresVector(param_6,param_7[6]);
    lVar6 = func_0x00f78a34(/*FlatBuffers.Offset<EventScore>[]_TypeInfo*/ uRam0000000003d1ec30,param_7[6]);
    uVar15 = (ulong)(uint)param_7[6];
    if (0 < (int)param_7[6]) {
      lVar17 = 0;
      uVar18 = 0;
      do {
        if ((uVar15 & 0xffffffff) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar11 = *(long *)(param_7 + 4) + lVar17;
        puVar12 = (undefined4 *)(long)*(short *)(lVar11 + 0x24);
        uVar14 = (ulong)*(byte *)(lVar11 + 0x28);
        uVar5 = Core_Networking_EventScore__CreateEventScore(param_6,*(undefined4 *)(lVar11 + 0x20))
        ;
        if (lVar6 == 0) goto LAB_0165c7b0;
        if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_0165c7b4;
        *(undefined4 *)(lVar6 + 0x20 + uVar18 * 4) = uVar5;
        uVar18 = uVar18 + 1;
        uVar15 = (ulong)(int)param_7[6];
        lVar17 = lVar17 + 0xc;
      } while ((long)uVar18 < (long)uVar15);
    }
    puVar7 = (undefined4 *)Core_Networking_HostEventResults__CreateRoundScoresVector(param_6,lVar6);
    if (param_8 == 0) goto LAB_0165c7b0;
    Core_Networking_HostEventResults__StartStandingsVector(param_6,*(undefined4 *)(param_8 + 0x18));
    lVar6 = func_0x00f78a34(/*FlatBuffers.Offset<EventFinishStanding>[]_TypeInfo*/ uRam0000000003d1ec28,*(undefined4 *)(param_8 + 0x18));
    uVar15 = (ulong)*(uint *)(param_8 + 0x18);
    if (0 < (int)*(uint *)(param_8 + 0x18)) {
      uVar18 = 0;
      lVar17 = 0x24;
      do {
        if ((uVar15 & 0xffffffff) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar3 = (undefined1 *)(*(long *)(param_8 + 0x10) + lVar17);
        uVar14 = (ulong)*(uint *)(puVar3 + 4);
        uVar5 = Core_Networking_EventStanding__CreateEventStanding
                          (*(undefined4 *)(puVar3 + 0x1c),param_6,*(undefined4 *)(puVar3 + -4),
                           *puVar3,uVar14,puVar3[0x20] != '\0');
        if (*(uint *)(param_8 + 0x18) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar12 = (undefined4 *)(long)*(short *)(*(long *)(param_8 + 0x10) + lVar17 + 0x24);
        uVar5 = Core_Networking_EventFinishStanding__CreateEventFinishStanding(param_6,uVar5);
        param_7 = puVar7;
        if (lVar6 == 0) goto LAB_0165c7b0;
        if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_0165c7b4;
        *(undefined4 *)(lVar6 + 0x20 + uVar18 * 4) = uVar5;
        uVar18 = uVar18 + 1;
        uVar15 = (ulong)*(int *)(param_8 + 0x18);
        lVar17 = lVar17 + 0x30;
      } while ((long)uVar18 < (long)uVar15);
    }
    uVar15 = Core_Networking_HostEventResults__CreateStandingsVector(param_6,lVar6);
    uVar10 = 2;
    puVar20 = (undefined *)0x165c724;
    ppuVar4 = (undefined4 **)&stack0xffffffffffffffa0;
    ppppuVar19 = (undefined8 ****)&stack0xfffffffffffffff0;
    goto code_r0x016ce2a4;
  }
LAB_0165c7b0:
  func_0x00f78af4();
LAB_0165c7b4:
  uVar10 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar10,0);
  param_6 = auVar23._8_8_;
  uVar15 = auVar23._0_8_;
  ppuVar4 = &puStack_130;
  puStack_68 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationState;
  ppppuVar19 = &pppuStack_70;
  param_5 = 0x3eb5000;
  puStack_110 = puVar12;
  pppuStack_70 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5836 & 1) == 0) {
    func_0x00f78a20(0x3d3b300);
    func_0x00f78a20(0x3d3b308);
    func_0x00f78a20(0x3d1ec48);
    bRam0000000003eb5836 = 1;
  }
  if (param_6 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_6,0);
    if (*(long *)(puStack_110 + 8) != 0) {
      uVar1 = *(uint *)(*(long *)(puStack_110 + 8) + 0x18);
      puVar7 = (undefined4 *)(ulong)uVar1;
      if ((int)uVar1 < 1) {
        uVar10 = 3;
        puVar20 = &UNK_0165ca14;
      }
      else {
        uStack_128 = uVar15;
        Core_Networking_HostMigration__StartCarsVector(param_6,puVar7);
        lStack_118 = func_0x00f78a34(/*FlatBuffers.Offset<MigrationCar>[]_TypeInfo*/ uRam0000000003d1ec48,puVar7);
        param_5 = 0;
        param_7 = (undefined4 *)0x0;
        lStack_118 = lStack_118 + 0x20;
        lStack_120 = (long)puVar7 * 0x50;
        lVar6 = *(long *)(puStack_110 + 8);
        uVar15 = 0;
        puStack_130 = puVar7;
        if (lVar6 == 0) goto code_r0x0165cacc;
        if (*(int *)(lVar6 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar15 = (ulong)*(byte *)(*(long *)(lVar6 + 0x10) + 0x6c);
        uStack_104 = *(undefined4 *)(*(long *)(lVar6 + 0x10) + 0x68);
        uVar10 = 10;
        puVar20 = &UNK_0165c90c;
        ppuVar4 = &puStack_130;
        puVar7 = param_7;
      }
code_r0x016ce2a4:
      ppuVar2 = (undefined4 **)((long)ppuVar4 + -0x30);
      *(undefined4 **)((long)ppuVar4 + -0x30) = puVar7;
      *(ulong *)((long)ppuVar4 + -0x28) = uVar15;
      *(long *)((long)ppuVar4 + -0x20) = param_6;
      *(undefined8 *)((long)ppuVar4 + -0x18) = param_5;
      *(undefined8 *****)((long)ppuVar4 + -0x10) = ppppuVar19;
      *(undefined **)((long)ppuVar4 + -8) = puVar20;
      ppppuVar19 = (undefined8 ****)((long)ppuVar4 + -0x10);
      uVar16 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,uVar10,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_6);
      if (*(long *)(param_6 + 0x28) == 0) {
        puVar20 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar23 = func_0x00f78af4();
        puVar3 = (undefined1 *)((long)ppuVar4 + -0x30);
        while( true ) {
          ppuVar2 = (undefined4 **)(puVar3 + -0x20);
          *(undefined8 *)(puVar3 + -0x20) = uVar10;
          *(long *)(puVar3 + -0x18) = param_6;
          *(undefined8 *****)(puVar3 + -0x10) = ppppuVar19;
          *(undefined **)(puVar3 + -8) = puVar20;
          if (auVar23._8_4_ < *(int *)(auVar23._0_8_ + 0x30)) break;
          func_0x00f78a24(0x3d22738);
          uVar8 = func_0x00f78aec();
          uVar9 = func_0x00f78a24(0x3d6ceb8);
          uVar13 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar8,uVar9);
          uVar9 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar8,uVar9);
          func_0x00f78af4();
          uVar9 = func_0x00f78b24();
          auVar23 = func_0x00f78ac0(uVar9,0);
          uVar15 = auVar23._0_8_;
          *(undefined4 **)(puVar3 + -0x50) = puVar7;
          *(undefined8 *)(puVar3 + -0x48) = uVar16;
          *(undefined8 *)(puVar3 + -0x40) = uVar10;
          *(undefined8 *)(puVar3 + -0x38) = uVar8;
          *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
          if (((int)uVar13 == (int)uVar14) && (*(char *)(uVar15 + 0x48) == '\0')) {
            return uVar15;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar15,1,0);
          /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar15,uVar13);
          ppppuVar19 = *(undefined8 *****)(puVar3 + -0x30);
          puVar20 = *(undefined **)(puVar3 + -0x28);
          uVar10 = *(undefined8 *)(puVar3 + -0x40);
          param_6 = *(long *)(puVar3 + -0x38);
          puVar7 = *(undefined4 **)(puVar3 + -0x50);
          uVar16 = *(undefined8 *)(puVar3 + -0x48);
          puVar3 = puVar3 + -0x20;
        }
        ppppuVar19 = (undefined8 ****)(puVar3 + -0x10);
        puVar20 = &UNK_016ce3a4;
      }
      else {
        uVar16 = extraout_x1;
        if (*(int *)(*(long *)(param_6 + 0x28) + 0x18) < 0) {
          auVar23 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar10);
          uVar16 = auVar23._8_8_;
          *(long *)(param_6 + 0x28) = auVar23._0_8_;
        }
        auVar23._8_8_ = uVar16;
        auVar23._0_8_ = param_6;
        *(undefined4 *)(param_6 + 0x30) = 0;
        puVar20 = &UNK_016ce320;
      }
      goto code_r0x016cda04;
    }
  }
code_r0x0165cacc:
  func_0x00f78af4();
  uVar10 = func_0x00f78b24();
  uVar18 = func_0x00f78ac0(uVar10,0);
  puStack_138 = &Core_Networking_Vec3__CreateVec3;
  uVar5 = param_2;
  uVar21 = param_3;
  pppuStack_140 = ppppuVar19;
  if ((bRam0000000003eb5871 & 1) == 0) {
    func_0x00f78a20(0x3d3f288);
    bRam0000000003eb5871 = 1;
  }
  if (uVar18 == 0) {
    uVar18 = func_0x00f78af4();
    puStack_178 = &Core_Networking_Vec4__CreateVec4;
    pppuStack_180 = &pppuStack_140;
    if ((bRam0000000003eb5872 & 1) == 0) {
      func_0x00f78a20(0x3d3f290);
      bRam0000000003eb5872 = 1;
    }
    if (uVar18 == 0) {
      auVar22 = func_0x00f78af4();
      lVar6 = auVar22._8_8_;
      ppuVar4 = &puStack_1e0;
      uStack_1d0 = 0x3eb5000;
      puStack_1b8 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
      ppppuVar19 = &pppuStack_1c0;
      puStack_1e0 = param_7;
      uStack_1d8 = uVar15;
      uStack_1c8 = uVar18;
      pppuStack_1c0 = &pppuStack_180;
      if (lVar6 == 0) {
        uVar14 = func_0x00f78af4();
        return uVar14;
      }
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar6,0);
      uVar10 = Core_Networking_HostMigrationDone__CreateHostMigrationDone(lVar6,*puVar12,uVar14);
      uVar5 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                        (uVar10,lVar6,0xb,uVar10);
      lVar17 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(lVar6,uVar5,0);
      puVar20 = &UNK_0165ccb8;
      while( true ) {
        lVar11 = lVar17;
        lVar17 = auVar22._8_8_;
        *(long *)((long)ppuVar4 + -0x20) = lVar6;
        *(long *)((long)ppuVar4 + -0x18) = auVar22._0_8_;
        *(undefined8 *****)((long)ppuVar4 + -0x10) = ppppuVar19;
        *(undefined **)((long)ppuVar4 + -8) = puVar20;
        ppppuVar19 = (undefined8 ****)((long)ppuVar4 + -0x10);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),4);
        uVar14 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,lVar11);
        if (*(long *)(lVar17 + 0x18) != 0) break;
        puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar23 = func_0x00f78af4();
        auVar22._8_8_ = auVar23._0_8_;
        auVar22._0_8_ = lVar17;
        ppuVar4 = (undefined4 **)((long)ppuVar4 + -0x20);
        lVar17 = auVar23._8_8_;
        lVar6 = lVar11;
      }
      *(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x18) = *(undefined4 *)(lVar17 + 0x10);
      return uVar14;
    }
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar18,4,0x10,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_4,uVar18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar21,uVar18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar5,uVar18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0_00,uVar18,0);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar18;
    ppuVar2 = (undefined4 **)&stack0xfffffffffffffe90;
    ppppuVar19 = (undefined8 ****)pppuStack_180;
    puVar20 = puStack_178;
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar18,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,uVar18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_2,uVar18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar18,0);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar18;
    ppuVar2 = &puStack_130;
    ppppuVar19 = (undefined8 ****)pppuStack_140;
    puVar20 = puStack_138;
  }
code_r0x016cda04:
  lVar6 = auVar23._0_8_;
  *(undefined8 *****)((long)ppuVar2 + -0x10) = ppppuVar19;
  *(undefined **)((long)ppuVar2 + -8) = puVar20;
  if ((*(long *)(lVar6 + 0x18) != 0) &&
     (lVar17 = *(long *)(*(long *)(lVar6 + 0x18) + 0x10), lVar17 != 0)) {
    return (ulong)(uint)(*(int *)(lVar17 + 0x18) - *(int *)(lVar6 + 0x10));
  }
  lVar6 = func_0x00f78af4(lVar6,auVar23._8_8_);
  return (ulong)*(byte *)(lVar6 + 0x48);
}



// ============================================================
// RVA: 0x165c7c0 | Core.Networking.NetworkServicesOutput.WriteHostMigrationState
// ============================================================

/* WARNING: Possible PIC construction at 0x0165c908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ca78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165ca7c) */
/* WARNING: Removing unreachable block (ram,0x0165ca14) */
/* WARNING: Removing unreachable block (ram,0x0165ca38) */
/* WARNING: Removing unreachable block (ram,0x0165ca44) */
/* WARNING: Removing unreachable block (ram,0x0165c944) */
/* WARNING: Removing unreachable block (ram,0x0165c9c0) */
/* WARNING: Removing unreachable block (ram,0x0165c9cc) */
/* WARNING: Removing unreachable block (ram,0x0165c9e8) */
/* WARNING: Removing unreachable block (ram,0x0165c90c) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619a8) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkServicesOutput__WriteHostMigrationState
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,long param_6,undefined4 *param_7,undefined8 param_8)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong unaff_x22;
  ulong uVar15;
  undefined8 *****pppppuVar16;
  undefined8 ****ppppuVar17;
  undefined *puVar18;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long alStack_1a0 [8];
  undefined8 ****ppppuStack_160;
  undefined *puStack_158;
  long alStack_148 [5];
  undefined8 ****appppuStack_120 [2];
  undefined8 ****ppppuStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined4 *puStack_b0;
  undefined4 uStack_a4;
  
  puVar2 = &uStack_d0;
  puStack_b0 = param_7;
  if ((bRam0000000003eb5836 & 1) == 0) {
    func_0x00f78a20(0x3d3b300);
    func_0x00f78a20(0x3d3b308);
    func_0x00f78a20(0x3d1ec48);
    bRam0000000003eb5836 = 1;
  }
  ppppuStack_e0 = (undefined8 ****)&stack0xfffffffffffffff0;
  if (param_6 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_6,0);
    if (*(long *)(puStack_b0 + 8) != 0) {
      uVar1 = *(uint *)(*(long *)(puStack_b0 + 8) + 0x18);
      uVar15 = (ulong)uVar1;
      if ((int)uVar1 < 1) {
        uVar10 = 3;
        puStack_d8 = &UNK_0165ca14;
      }
      else {
        uStack_c8 = param_5;
        Core_Networking_HostMigration__StartCarsVector(param_6,uVar15);
        lStack_b8 = func_0x00f78a34(/*FlatBuffers.Offset<MigrationCar>[]_TypeInfo*/ uRam0000000003d1ec48,uVar15);
        unaff_x22 = 0;
        lStack_b8 = lStack_b8 + 0x20;
        lStack_c0 = uVar15 * 0x50;
        lVar13 = *(long *)(puStack_b0 + 8);
        param_5 = 0;
        uStack_d0 = uVar15;
        if (lVar13 == 0) goto LAB_0165cacc;
        if (*(int *)(lVar13 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uStack_a4 = *(undefined4 *)(*(long *)(lVar13 + 0x10) + 0x68);
        uVar10 = 10;
        puStack_d8 = (undefined *)0x165c90c;
        uVar15 = unaff_x22;
      }
      puVar2 = (ulong *)&stack0xffffffffffffff00;
      pppppuVar16 = &ppppuStack_e0;
      uVar14 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,uVar10,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_6);
      if (*(long *)(param_6 + 0x28) == 0) {
        puVar18 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar20 = func_0x00f78af4();
        puVar3 = &stack0xffffffffffffff00;
        lVar13 = param_6;
        while( true ) {
          uVar7 = auVar20._8_8_;
          param_6 = auVar20._0_8_;
          puVar2 = (ulong *)(puVar3 + -0x20);
          *(undefined8 *)(puVar3 + -0x20) = uVar10;
          *(long *)(puVar3 + -0x18) = lVar13;
          *(undefined8 ******)(puVar3 + -0x10) = pppppuVar16;
          *(undefined **)(puVar3 + -8) = puVar18;
          if (auVar20._8_4_ < *(int *)(param_6 + 0x30)) break;
          func_0x00f78a24(0x3d22738);
          uVar7 = func_0x00f78aec();
          uVar8 = func_0x00f78a24(0x3d6ceb8);
          uVar12 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar7,uVar8);
          uVar8 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar7,uVar8);
          func_0x00f78af4();
          uVar8 = func_0x00f78b24();
          auVar20 = func_0x00f78ac0(uVar8,0);
          uVar9 = auVar20._0_8_;
          *(ulong *)(puVar3 + -0x50) = uVar15;
          *(undefined8 *)(puVar3 + -0x48) = uVar14;
          *(undefined8 *)(puVar3 + -0x40) = uVar10;
          *(undefined8 *)(puVar3 + -0x38) = uVar7;
          *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
          if (((int)uVar12 == (int)param_8) && (*(char *)(uVar9 + 0x48) == '\0')) {
            return uVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar9,1,0);
          /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar9,uVar12);
          pppppuVar16 = *(undefined8 ******)(puVar3 + -0x30);
          puVar18 = *(undefined **)(puVar3 + -0x28);
          uVar10 = *(undefined8 *)(puVar3 + -0x40);
          lVar13 = *(long *)(puVar3 + -0x38);
          uVar15 = *(ulong *)(puVar3 + -0x50);
          uVar14 = *(undefined8 *)(puVar3 + -0x48);
          puVar3 = puVar3 + -0x20;
        }
        pppppuVar16 = (undefined8 *****)(puVar3 + -0x10);
        ppppuVar17 = (undefined8 ****)&UNK_016ce3a4;
      }
      else {
        uVar7 = extraout_x1;
        if (*(int *)(*(long *)(param_6 + 0x28) + 0x18) < 0) {
          auVar20 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar10);
          uVar7 = auVar20._8_8_;
          *(long *)(param_6 + 0x28) = auVar20._0_8_;
        }
        *(undefined4 *)(param_6 + 0x30) = 0;
        ppppuVar17 = (undefined8 ****)&UNK_016ce320;
      }
      goto code_r0x016cda04;
    }
  }
LAB_0165cacc:
  func_0x00f78af4();
  uVar10 = func_0x00f78b24();
  param_6 = func_0x00f78ac0(uVar10,0);
  puStack_d8 = &Core_Networking_Vec3__CreateVec3;
  uVar5 = param_2;
  uVar19 = param_3;
  if ((bRam0000000003eb5871 & 1) == 0) {
    func_0x00f78a20(0x3d3f288);
    bRam0000000003eb5871 = 1;
  }
  if (param_6 == 0) {
    param_6 = func_0x00f78af4();
    appppuStack_120[1] = (undefined8 ****)&Core_Networking_Vec4__CreateVec4;
    appppuStack_120[0] = &ppppuStack_e0;
    if ((bRam0000000003eb5872 & 1) == 0) {
      func_0x00f78a20(0x3d3f290);
      bRam0000000003eb5872 = 1;
    }
    if (param_6 == 0) {
      auVar20 = func_0x00f78af4();
      lVar13 = auVar20._8_8_;
      plVar4 = alStack_1a0 + 4;
      alStack_1a0[6] = 0x3eb5000;
      puStack_158 = &Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
      pppppuVar16 = &ppppuStack_160;
      alStack_1a0[4] = unaff_x22;
      alStack_1a0[5] = param_5;
      alStack_1a0[7] = param_6;
      ppppuStack_160 = appppuStack_120;
      if (lVar13 == 0) {
        uVar15 = func_0x00f78af4();
        return uVar15;
      }
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar13,0);
      uVar10 = Core_Networking_HostMigrationDone__CreateHostMigrationDone(lVar13,*param_7,param_8);
      uVar5 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                        (uVar10,lVar13,0xb,uVar10);
      lVar6 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(lVar13,uVar5,0);
      puVar18 = &UNK_0165ccb8;
      while( true ) {
        lVar11 = lVar6;
        lVar6 = auVar20._8_8_;
        *(long *)((long)plVar4 + -0x20) = lVar13;
        *(long *)((long)plVar4 + -0x18) = auVar20._0_8_;
        *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar16;
        *(undefined **)((long)plVar4 + -8) = puVar18;
        pppppuVar16 = (undefined8 *****)((long)plVar4 + -0x10);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar6,*(undefined4 *)(lVar6 + 0x20),4);
        uVar15 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar6,lVar11);
        if (*(long *)(lVar6 + 0x18) != 0) break;
        puVar18 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar21 = func_0x00f78af4();
        auVar20._8_8_ = auVar21._0_8_;
        auVar20._0_8_ = lVar6;
        plVar4 = (long *)((long)plVar4 + -0x20);
        lVar6 = auVar21._8_8_;
        lVar13 = lVar11;
      }
      *(undefined4 *)(*(long *)(lVar6 + 0x18) + 0x18) = *(undefined4 *)(lVar6 + 0x10);
      return uVar15;
    }
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_6,4,0x10,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_4,param_6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar19,param_6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar5,param_6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0_00,param_6,0);
    uVar7 = 0;
    puVar2 = (ulong *)&stack0xfffffffffffffef0;
    pppppuVar16 = (undefined8 *****)appppuStack_120[0];
    ppppuVar17 = appppuStack_120[1];
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_6,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,param_6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_2,param_6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,param_6,0);
    uVar7 = 0;
    pppppuVar16 = (undefined8 *****)ppppuStack_e0;
    ppppuVar17 = (undefined8 ****)puStack_d8;
  }
code_r0x016cda04:
  *(undefined8 ******)((long)puVar2 + -0x10) = pppppuVar16;
  *(undefined8 *****)((long)puVar2 + -8) = ppppuVar17;
  if ((*(long *)(param_6 + 0x18) != 0) &&
     (lVar13 = *(long *)(*(long *)(param_6 + 0x18) + 0x10), lVar13 != 0)) {
    return (ulong)(uint)(*(int *)(lVar13 + 0x18) - *(int *)(param_6 + 0x10));
  }
  lVar13 = func_0x00f78af4(param_6,uVar7);
  return (ulong)*(byte *)(lVar13 + 0x48);
}



// ============================================================
// RVA: 0x165cc48 | Core.Networking.NetworkServicesOutput.WriteHostMigrationDone
// ============================================================

/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
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
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x016ce2a4) */
/* WARNING: Removing unreachable block (ram,0x016ce2c8) */
/* WARNING: Removing unreachable block (ram,0x016ce2dc) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Removing unreachable block (ram,0x016ce2e0) */
/* WARNING: Removing unreachable block (ram,0x016ce37c) */
/* WARNING: Removing unreachable block (ram,0x016ce380) */
/* WARNING: Removing unreachable block (ram,0x016ce3c8) */
/* WARNING: Removing unreachable block (ram,0x016ce410) */
/* WARNING: Removing unreachable block (ram,0x016ce414) */
/* WARNING: Removing unreachable block (ram,0x016ce444) */
/* WARNING: Removing unreachable block (ram,0x016ce45c) */
/* WARNING: Removing unreachable block (ram,0x016ce44c) */
/* WARNING: Removing unreachable block (ram,0x016ce398) */
/* WARNING: Removing unreachable block (ram,0x016ce2f0) */
/* WARNING: Removing unreachable block (ram,0x016ce2fc) */
/* WARNING: Removing unreachable block (ram,0x016ce314) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619a8) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x016cda04) */
/* WARNING: Removing unreachable block (ram,0x016cda14) */
/* WARNING: Removing unreachable block (ram,0x016cda30) */
/* WARNING: Removing unreachable block (ram,0x016cda1c) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */

void Core_Networking_NetworkServicesOutput__WriteHostMigrationDone
               (long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  long alStack_50 [4];
  undefined1 *puVar3;
  
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(param_2,0);
    uVar5 = Core_Networking_HostMigrationDone__CreateHostMigrationDone(param_2,*param_3,param_4);
    uVar4 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                      (uVar5,param_2,0xb,uVar5);
    lVar6 = /*Core.Networking.UpdateHolder$$CreateUpdateHolder*/ func_0x0165b368(param_2,uVar4,0);
    puVar10 = (undefined *)0x165ccb8;
    puVar1 = &stack0xffffffffffffffd0;
    lVar9 = param_2;
    puVar2 = (undefined1 *)register0x00000008;
    while( true ) {
      lVar8 = lVar6;
      lVar7 = param_2;
      puVar3 = puVar1;
      *(long *)(puVar3 + -0x20) = lVar9;
      *(long *)(puVar3 + -0x18) = param_1;
      *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
      *(undefined **)(puVar3 + -8) = puVar10;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar7,*(undefined4 *)(lVar7 + 0x20),4);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar7,lVar8);
      if (*(long *)(lVar7 + 0x18) != 0) break;
      puVar10 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar11 = func_0x00f78af4();
      puVar1 = puVar3 + -0x20;
      param_2 = auVar11._0_8_;
      lVar6 = auVar11._8_8_;
      param_1 = lVar7;
      lVar9 = lVar8;
      puVar2 = puVar3;
    }
    *(undefined4 *)(*(long *)(lVar7 + 0x18) + 0x18) = *(undefined4 *)(lVar7 + 0x10);
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x165ccec | Core.Networking.NetworkServicesOutput..ctor
// ============================================================

void Core_Networking_NetworkServicesOutput___ctor(void)

{
  return;
}



