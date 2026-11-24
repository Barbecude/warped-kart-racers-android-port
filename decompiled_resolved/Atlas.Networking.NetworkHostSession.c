// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.NetworkHostSession

// ============================================================
// RVA: 0x14a33cc | Atlas.Networking.NetworkHostSession.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x014a3648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014a364c) */

void Atlas_Networking_NetworkHostSession__Update
               (long param_1,undefined8 *param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int extraout_w1;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_1d0 [16];
  undefined8 *puStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  int aiStack_f0 [4];
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4a43 & 1) == 0) {
    func_0x00f78a20(0x3d29f30);
    func_0x00f78a20(0x3d2a4c0);
    func_0x00f78a20(0x3d335e8);
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d335f0);
    func_0x00f78a20(0x3d335f8);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d3b428);
    func_0x00f78a20(0x3d3b3d0);
    func_0x00f78a20(0x3d3b670);
    func_0x00f78a20(0x3d3b638);
    func_0x00f78a20(0x3d3b430);
    func_0x00f78a20(0x3d3d548);
    func_0x00f78a20(0x3d3b440);
    func_0x00f78a20(0x3d3b448);
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d3e678);
    func_0x00f78a20(0x3d3e900);
    func_0x00f78a20(0x3d3e680);
    bRam0000000003eb4a43 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  aiStack_f0[2] = 0;
  uVar9 = 0;
  /*Core.Networking.NetworkSession$$Update*/ func_0x0165ddac(param_1,param_2);
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_014a38d4;
  /*System.Collections.Generic.List<NetworkCar>$$Clear*/ func_0x02402d04(*(long *)(param_1 + 0x40),uRam0000000003d3b3d0);
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_014a38d4;
  /*System.Collections.Generic.List<NetworkUsable>$$Clear*/ func_0x0241eeec(*(long *)(param_1 + 0x48),uRam0000000003d3b638);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_014a3678;
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar5 == 0) goto LAB_014a38d4;
  puVar8 = (undefined8 *)0x3d335e8;
  /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$GetEnumerator*/ func_0x02558764(&uStack_130,lVar5,uRam0000000003d3d548);
  uStack_68 = uStack_128;
  uStack_70 = uStack_130;
  uStack_58 = uStack_118;
  uStack_60 = uStack_120;
  do {
    do {
      do {
        uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkServicesInput.NetworkData>$$MoveNext*/ func_0x01f80828(&uStack_70,uRam0000000003d335f0);
        uVar7 = uStack_60;
        if ((uVar6 & 1) == 0) {
          aiStack_f0[0] = 0xaf;
          /*System.Collections.Generic.List.Enumerator<NetworkServicesInput.NetworkData>$$Dispose*/ func_0x01f80824(&uStack_70,uRam0000000003d335e8);
          aiStack_f0[2] = 0;
          param_2 = puVar8;
          goto code_r0x014a3668;
        }
      } while ((int)uStack_60 == 0);
      auVar11 = /*Core.Networking.UpdateHolder$$GetRootAsUpdateHolder*/ func_0x016625c8(uStack_58,0);
      auStack_80 = auVar11;
      /*Core.Networking.UpdateHolder$$get_Host*/ func_0x01662638(&uStack_130,auStack_80,0);
    } while ((char)uStack_120 != '\0');
    /*Core.Networking.UpdateHolder$$get_Client*/ func_0x016626e0(&uStack_130,auStack_80,0);
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    uStack_90 = uStack_120;
  } while ((uStack_120 & 0xff) == 0);
  /*Core.Networking.UpdateHolder$$get_Client*/ func_0x016626e0(&uStack_130,auStack_80,0);
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_90 = uStack_120;
  auStack_1d0 = /*System.Nullable<ClientUpdateHolder>$$get_Value*/ func_0x0261d828(&uStack_a0,uRam0000000003d3e680);
  param_4 = uVar7 >> 0x20;
  puVar10 = (undefined *)0x14a364c;
  lVar5 = param_1;
  goto code_r0x014a395c;
  while( true ) {
    puVar8 = (undefined8 *)___cxa_begin_catch();
    puVar8 = (undefined8 *)*puVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkServicesInput.NetworkData>$$Dispose*/ func_0x01f80824(&uStack_70,*param_2);
    param_2 = puVar8;
    if (puVar8 != (undefined8 *)0x0) break;
code_r0x014a3668:
    if (*(long *)(param_1 + 0x20) != 0) {
      /*Core.Networking.NetworkServicesInput$$Clear*/ func_0x0165abe8(*(long *)(param_1 + 0x20),0);
LAB_014a3678:
      lVar5 = *(long *)(param_1 + 0x1d0);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) < 1) {
code_r0x014a3794:
          if ((*(char *)(param_1 + 0xf0) == '\0') || (*(char *)(param_1 + 0xfc) == '\0')) {
            return;
          }
          param_2 = (undefined8 *)(param_1 + 0xf8);
          /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_148,param_1,0);
          uStack_158 = *(undefined8 *)(param_1 + 0x100);
          uStack_160 = *(undefined8 *)(param_1 + 0xf8);
          uStack_150 = *(undefined8 *)(param_1 + 0x108);
          if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_178 = uStack_140;
          uStack_180 = uStack_148;
          uStack_170 = uStack_138;
          uStack_198 = uStack_158;
          uStack_1a0 = uStack_160;
          uStack_190 = uStack_150;
          uVar9 = 0;
          iVar3 = /*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314(&uStack_180,&uStack_1a0);
          if (iVar3 == 0) {
            return;
          }
          if (*(long *)(param_1 + 0x18) != 0) {
            uVar9 = *(undefined8 *)(param_1 + 0x60);
            param_4 = 0;
            /*Core.Networking.NetworkServicesOutput$$WriteVote*/ func_0x0165b8d8(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),uVar9,0);
          }
          *(undefined1 *)(param_1 + 0xf0) = 0;
          /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_148,param_1,0);
          *(undefined8 *)(param_1 + 0x100) = uStack_140;
          *param_2 = uStack_148;
          *(undefined8 *)(param_1 + 0x108) = uStack_138;
          if (*(long *)(param_1 + 0x178) != 0) {
            uVar9 = 0;
            /*Core.Networking.NetworkVoteUpdate$$Set*/ func_0x01661bb8(*(long *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x60));
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar5 != 0)) {
              uVar9 = 1;
              param_4 = uRam0000000003d2a4c0;
              /*System.Action<ReflectionProbe, ReflectionProbe.ReflectionProbeEvent>$$Invoke*/ func_0x01e6e6d8(lVar5,*(undefined8 *)(param_1 + 0x178),1,uRam0000000003d2a4c0);
              if (*(long *)(param_1 + 0x60) != 0) {
                /*System.Collections.Generic.List<NetworkVote>$$Clear*/ func_0x02421c3c(*(long *)(param_1 + 0x60),uRam0000000003d3b670);
                return;
              }
            }
          }
        }
        else {
          param_2 = (undefined8 *)0x3d32b00;
          /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_130,lVar5,uRam0000000003d3b440);
          uStack_d8 = uStack_128;
          uStack_e0 = uStack_130;
          uStack_c8 = uStack_118;
          uStack_d0 = uStack_120;
          uStack_b8 = uStack_108;
          uStack_c0 = uStack_110;
          uStack_b0 = uStack_100;
          while( true ) {
            uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_e0,uRam0000000003d32b08);
            iVar3 = aiStack_f0[2];
            if ((uVar7 & 1) == 0) break;
            if (*(long *)(param_1 + 0x70) == 0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x14a38d4);
              (*pcVar1)();
            }
            uStack_128 = uStack_c8;
            uStack_130 = uStack_d0;
            uStack_118 = uStack_b8;
            uStack_120 = uStack_c0;
            uStack_110 = uStack_b0;
            uVar9 = uRam0000000003d3b428;
            /*System.Collections.Generic.List<NetworkEventStanding>$$Add*/ func_0x02408354(*(long *)(param_1 + 0x70),&uStack_130);
          }
          bVar2 = aiStack_f0[2] != -1;
          aiStack_f0[2] = aiStack_f0[2] + 1;
          aiStack_f0[0] = 0x106;
          /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_e0,uRam0000000003d32b00);
          if ((bVar2) && (aiStack_f0[iVar3] == 0x106)) {
            aiStack_f0[2] = iVar3;
          }
          if (*(long *)(param_1 + 0x1d0) != 0) {
            /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(*(long *)(param_1 + 0x1d0),uRam0000000003d3b430);
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x70), lVar5 != 0)) {
              /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(lVar5,*(undefined8 *)(param_1 + 0x70),uRam0000000003d29f30);
              /*Atlas.Networking.NetworkHostSession$$CheckAndAdvanceFinish*/ func_0x014a3a24(param_1);
              goto code_r0x014a3794;
            }
          }
        }
      }
    }
LAB_014a38d4:
    func_0x00f78af4();
    puVar8 = param_2;
    if (extraout_w1 != 1) goto code_r0x014a3958;
  }
  func_0x00f78ac0(puVar8,0);
code_r0x014a3958:
  puVar10 = &Atlas_Networking_NetworkHostSession__OnClientUpdate;
  auVar11 = __Unwind_Resume();
  auStack_1d0._8_8_ = uVar9;
  auStack_1d0._0_8_ = auVar11._8_8_;
  lVar5 = auVar11._0_8_;
code_r0x014a395c:
  puStack_1c0 = puVar8;
  lStack_1b8 = param_1;
  puStack_1b0 = &stack0xfffffffffffffff0;
  puStack_1a8 = puVar10;
  uVar4 = /*Core.Networking.ClientUpdateHolder$$get_UpdateType*/ func_0x01653e24(auStack_1d0,0);
  switch(uVar4) {
  case 1:
    /*Atlas.Networking.NetworkHostSession$$OnClientCarUpdate*/ func_0x014a64c4(lVar5,auStack_1d0._0_8_,auStack_1d0._8_8_,param_4);
    break;
  case 2:
    /*Atlas.Networking.NetworkHostSession$$OnClientVote*/ func_0x014a6698(lVar5,auStack_1d0._0_8_,auStack_1d0._8_8_);
    break;
  case 3:
    /*Core.Networking.NetworkSession$$OnClientUsable*/ func_0x0165fe18(lVar5,auStack_1d0._0_8_,auStack_1d0._8_8_,param_4,0);
    break;
  case 4:
    /*Atlas.Networking.NetworkHostSession$$OnClientGameModeData*/ func_0x014a6d54(lVar5,auStack_1d0._0_8_,auStack_1d0._8_8_);
    break;
  case 5:
    /*Atlas.Networking.NetworkHostSession$$OnClientRequestUsable*/ func_0x014a7138(lVar5,auStack_1d0._0_8_,auStack_1d0._8_8_,param_4);
    break;
  case 6:
    /*Atlas.Networking.NetworkHostSession$$OnClientStanding*/ func_0x014a6874(lVar5,auStack_1d0._0_8_,auStack_1d0._8_8_);
  }
  return;
}



// ============================================================
// RVA: 0x14a395c | Atlas.Networking.NetworkHostSession.OnClientUpdate
// ============================================================

void Atlas_Networking_NetworkHostSession__OnClientUpdate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  uVar1 = /*Core.Networking.ClientUpdateHolder$$get_UpdateType*/ func_0x01653e24(&uStack_30,0);
  switch(uVar1) {
  case 1:
    /*Atlas.Networking.NetworkHostSession$$OnClientCarUpdate*/ func_0x014a64c4(param_1,uStack_30,uStack_28,param_4);
    break;
  case 2:
    /*Atlas.Networking.NetworkHostSession$$OnClientVote*/ func_0x014a6698(param_1,uStack_30,uStack_28);
    break;
  case 3:
    /*Core.Networking.NetworkSession$$OnClientUsable*/ func_0x0165fe18(param_1,uStack_30,uStack_28,param_4,0);
    break;
  case 4:
    /*Atlas.Networking.NetworkHostSession$$OnClientGameModeData*/ func_0x014a6d54(param_1,uStack_30,uStack_28);
    break;
  case 5:
    /*Atlas.Networking.NetworkHostSession$$OnClientRequestUsable*/ func_0x014a7138(param_1,uStack_30,uStack_28,param_4);
    break;
  case 6:
    /*Atlas.Networking.NetworkHostSession$$OnClientStanding*/ func_0x014a6874(param_1,uStack_30,uStack_28);
  }
  return;
}



// ============================================================
// RVA: 0x14a3a24 | Atlas.Networking.NetworkHostSession.CheckAndAdvanceFinish
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a43a8 | Atlas.Networking.NetworkHostSession.LateUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014a4930: Changing call to branch */

ulong Atlas_Networking_NetworkHostSession__LateUpdate(ulong param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int extraout_w1;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined4 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  code *pcVar21;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined1 *puVar22;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined8 *puStack_40;
  ulong uStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4a44 & 1) == 0) {
    func_0x00f78a20(0x3d3b3d0);
    func_0x00f78a20(0x3d3b638);
    func_0x00f78a20(0x3d3b648);
    func_0x00f78a20(0x3d3b3e0);
    bRam0000000003eb4a44 = 1;
  }
  lVar12 = *(long *)(param_1 + 0x38);
  if (lVar12 != 0) {
    if (0 < *(int *)(lVar12 + 0x18)) {
      if (*(long *)(param_1 + 0x18) != 0) {
        /*Core.Networking.NetworkServicesOutput$$WriteCarData*/ func_0x0165b444(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),lVar12,0);
        lVar12 = *(long *)(param_1 + 0x38);
        if (lVar12 == 0) goto LAB_014a4498;
      }
      /*System.Collections.Generic.List<NetworkCar>$$Clear*/ func_0x02402d04(lVar12,uRam0000000003d3b3d0);
    }
    lVar12 = *(long *)(param_1 + 0x50);
    if (lVar12 != 0) {
      if (0 < *(int *)(lVar12 + 0x18)) {
        if (*(long *)(param_1 + 0x18) != 0) {
          /*Core.Networking.NetworkServicesOutput$$WriteUsableToAllFromHost*/ func_0x0165bc2c(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),lVar12,0);
          lVar12 = *(long *)(param_1 + 0x50);
          if (lVar12 == 0) goto LAB_014a4498;
        }
        /*System.Collections.Generic.List<NetworkUsable>$$Clear*/ func_0x0241eeec(lVar12,uRam0000000003d3b638);
      }
      uVar10 = 0;
      if (*(long *)(param_1 + 0xa0) != 0) {
        uStack_38 = *(undefined8 *)(param_1 + 0x88);
        puStack_40 = *(undefined8 **)(param_1 + 0x80);
        puStack_28 = *(undefined **)(param_1 + 0x98);
        puStack_30 = *(undefined1 **)(param_1 + 0x90);
        /*Core.Networking.NetworkMigrationManager$$SetNetworkState*/ func_0x01659fd0(*(long *)(param_1 + 0xa0),&puStack_40);
        lVar12 = *(long *)(param_1 + 0xa0);
        uVar10 = extraout_x1;
        if (lVar12 != 0) {
          while( true ) {
            *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
            *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
            if ((*(char *)(lVar12 + 0x5c) == '\0') && (*(int *)(lVar12 + 0x58) == 0)) {
              lVar14 = *(long *)(lVar12 + 0x50);
              if (lVar14 == 0) goto code_r0x0165a534;
              uVar18 = 0;
              uVar17 = 0;
            }
            else {
              lVar14 = *(long *)(lVar12 + 0x50);
              if (lVar14 == 0) goto code_r0x0165a534;
              uVar17 = *(uint *)(lVar12 + 0x58);
              uVar18 = 0;
              if (uVar17 != *(int *)(lVar14 + 0x18) - 1U) {
                uVar18 = uVar17 + 1;
              }
            }
            if ((*(uint *)(lVar14 + 0x18) <= uVar18) || (*(uint *)(lVar14 + 0x18) <= uVar17)) break;
            if (*(int *)(lVar14 + 0x20 + (long)(int)uVar18 * 0x28) !=
                *(int *)(lVar14 + 0x20 + (long)(int)uVar17 * 0x28)) {
              uVar18 = uVar17;
            }
            /*Core.Networking.NetworkMigrationManager$$SetMigrationState*/ func_0x0165a1d0(lVar12,uVar18);
            uVar18 = *(int *)(lVar12 + 0x58) + 1;
            *(uint *)(lVar12 + 0x58) = uVar18;
            lVar14 = *(long *)(lVar12 + 0x50);
            if (lVar14 == 0) goto code_r0x0165a534;
            uVar17 = *(uint *)(lVar14 + 0x18);
            if (uVar18 == uVar17) {
              uVar18 = 0;
              *(undefined4 *)(lVar12 + 0x58) = 0;
              *(undefined1 *)(lVar12 + 0x5c) = *(undefined1 *)(lVar12 + 0x5d);
            }
            if (uVar17 <= uVar18) break;
            lVar14 = lVar14 + (long)(int)uVar18 * 0x28;
            unaff_x19 = (undefined8 *)(lVar14 + 0x20);
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
            unaff_x20 = 0x3eb5000;
            if ((bRam0000000003eb5827 & 1) == 0) {
              func_0x00f78a20(0x3d3b2f0);
              bRam0000000003eb5827 = 1;
            }
            *(undefined8 *)(lVar14 + 0x28) = 0;
            *unaff_x19 = 0;
            *(undefined8 *)(lVar14 + 0x38) = 0;
            *(undefined8 *)(lVar14 + 0x30) = 0;
            uVar8 = *(ulong *)(lVar14 + 0x40);
            if (uVar8 != 0) {
              *(undefined8 *)((long)register0x00000008 + -0x20) =
                   *(undefined8 *)((long)register0x00000008 + -0x20);
              *(undefined8 *)((long)register0x00000008 + -0x18) =
                   *(undefined8 *)((long)register0x00000008 + -0x18);
              *(undefined8 *)((long)register0x00000008 + -0x10) =
                   *(undefined8 *)((long)register0x00000008 + -0x10);
              *(undefined8 *)((long)register0x00000008 + -8) =
                   *(undefined8 *)((long)register0x00000008 + -8);
              uVar9 = uVar8;
              if (0 < *(int *)(uVar8 + 0x18)) {
                uVar9 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar8 + 0x10),0,*(int *)(uVar8 + 0x18),0);
                *(undefined4 *)(uVar8 + 0x18) = 0;
              }
              *(int *)(uVar8 + 0x1c) = *(int *)(uVar8 + 0x1c) + 1;
              return uVar9;
            }
            unaff_x30 = &Core_Networking_NetworkMigrationManager__CompleteFrame;
            lVar12 = func_0x00f78af4();
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
          }
          uVar10 = func_0x00f78b24();
          func_0x00f78ac0(uVar10,0);
code_r0x0165a534:
          uVar8 = func_0x00f78af4();
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
          *(long *)((long)register0x00000008 + -0x38) = lVar12;
          *(undefined1 **)((long)register0x00000008 + -0x30) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x28) =
               &Core_Networking_NetworkMigrationManager___ctor;
          if ((bRam0000000003eb5825 & 1) == 0) {
            func_0x00f78a20(0x3d1f210);
            bRam0000000003eb5825 = 1;
          }
          uVar10 = func_0x00f78a34(/*Core.Networking.NetworkMigrationState[]_TypeInfo*/ uRam0000000003d1f210,200);
          *(undefined8 *)(uVar8 + 0x50) = uVar10;
          return uVar8;
        }
      }
      auVar27 = func_0x00f78af4(0,uVar10);
      uVar18 = *auVar27._0_8_ - *auVar27._8_8_;
      if ((bRam0000000003ebfdd0 & 1) == 0) {
        func_0x00f78a20(0x3d232c0,0);
        bRam0000000003ebfdd0 = 1;
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = -uVar18;
      if (-1 < (int)uVar18) {
        uVar17 = uVar18;
      }
      return (ulong)uVar17;
    }
  }
LAB_014a4498:
  uVar11 = 0;
  auVar27 = func_0x00f78af4();
  uVar8 = auVar27._0_8_;
  puStack_40 = (undefined8 *)0x3eb4000;
  puStack_28 = &Atlas_Networking_NetworkHostSession__CastVote;
  if (*(char *)(uVar8 + 0xf0) == '\0') {
    return uVar8;
  }
  puVar13 = (undefined8 *)0x0;
  uStack_38 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  /*Atlas.Networking.NetworkHostSession$$SetVote*/ func_0x014a44e4(uVar8,CONCAT44(uVar11,*(undefined4 *)(auVar27._8_8_ + 0xc)) & 0xffffffffffff);
  puVar3 = &stack0xffffffffffffffe0;
  uVar9 = uStack_38;
  puVar20 = puStack_40;
  puVar22 = puStack_30;
  puVar23 = puStack_28;
  do {
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = puVar20;
    *(ulong *)(puVar3 + -0x18) = uVar9;
    *(undefined1 **)(puVar3 + -0x10) = puVar22;
    *(undefined **)(puVar3 + -8) = puVar23;
    uVar10 = 0x3eb4000;
    if ((bRam0000000003eb4a50 & 1) == 0) {
      func_0x00f78a20(0x3d2a250);
      func_0x00f78a20(0x3d2a4c0);
      func_0x00f78a20(0x3d3b670);
      func_0x00f78a20(0x3d3b650);
      func_0x00f78a20(0x3d3b540);
      func_0x00f78a20(0x3d3b688);
      func_0x00f78a20(0x3d3b6c0);
      func_0x00f78a20(0x3d3b6c8);
      func_0x00f78a20(0x3d3b6d0);
      func_0x00f78a20(0x3d1dc60);
      bRam0000000003eb4a50 = 1;
    }
    if (*(long *)(uVar8 + 0x18) != 0) {
      puVar13 = *(undefined8 **)(uVar8 + 0x60);
      /*Core.Networking.NetworkServicesOutput$$WriteVote*/ func_0x0165b8d8(*(long *)(uVar8 + 0x18),*(undefined8 *)(uVar8 + 0x30),puVar13,0);
    }
    if ((*(long *)(uVar8 + 0x60) != 0) && (*(long *)(uVar8 + 0x58) != 0)) {
      if (*(int *)(*(long *)(uVar8 + 0x60) + 0x18) == *(int *)(*(long *)(uVar8 + 0x58) + 0x18)) {
        *(undefined1 *)(uVar8 + 0xf0) = 0;
        /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(puVar3 + -0x50,uVar8,0);
        uVar24 = *(undefined8 *)(puVar3 + -0x50);
        *(undefined8 *)(uVar8 + 0x100) = *(undefined8 *)(puVar3 + -0x48);
        *(undefined8 *)(uVar8 + 0xf8) = uVar24;
        *(undefined8 *)(uVar8 + 0x108) = *(undefined8 *)(puVar3 + -0x40);
        if (*(long *)(uVar8 + 0x178) != 0) {
          puVar13 = (undefined8 *)0x0;
          /*Core.Networking.NetworkVoteUpdate$$Set*/ func_0x01661bb8(*(long *)(uVar8 + 0x178),*(undefined8 *)(uVar8 + 0x60));
          if ((*(long *)(uVar8 + 0x10) != 0) &&
             (lVar12 = *(long *)(*(long *)(uVar8 + 0x10) + 0x50), lVar12 != 0)) {
            puVar13 = (undefined8 *)0x0;
            /*System.Action<ReflectionProbe, ReflectionProbe.ReflectionProbeEvent>$$Invoke*/ func_0x01e6e6d8(lVar12,*(undefined8 *)(uVar8 + 0x178),0,uRam0000000003d2a4c0);
            lVar12 = *(long *)(uVar8 + 0xd0);
            if (lVar12 != 0) {
              if (*(int *)(lVar12 + 0x18) != 0) {
                lVar12 = *(long *)(lVar12 + 0x10) + (long)(*(int *)(lVar12 + 0x18) + -1) * 0x18;
                uVar10 = *(undefined8 *)(lVar12 + 0x20);
                *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(lVar12 + 0x28);
                *(undefined8 *)(puVar3 + -0x60) = uVar10;
                unaff_x21 = *(undefined8 *)(uVar8 + 0x60);
                uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVote>_TypeInfo*/ uRam0000000003d1dc60);
                puVar13 = puRam0000000003d3b650;
                /*System.Collections.Generic.List<NetworkVote>$$.ctor*/ func_0x02420e3c(uVar10,unaff_x21);
                lVar12 = *(long *)(uVar8 + 0xd0);
                if (lVar12 == 0) goto code_r0x014a4850;
                iVar5 = *(int *)(lVar12 + 0x18);
                *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x58);
                *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x60);
                *(undefined8 *)(puVar3 + -0x40) = uVar10;
                puVar13 = (undefined8 *)(puVar3 + -0x50);
                /*System.Collections.Generic.List<NetworkVoteHistory>$$set_Item*/ func_0x024241ac(lVar12,iVar5 + -1,puVar13,uRam0000000003d3b6d0);
              }
              if (*(long *)(uVar8 + 0x60) != 0) {
                uVar8 = /*System.Collections.Generic.List<NetworkVote>$$Clear*/ func_0x02421c3c(*(long *)(uVar8 + 0x60),uRam0000000003d3b670);
                return uVar8;
              }
            }
          }
        }
      }
      else if (*(long *)(uVar8 + 0x178) != 0) {
        puVar13 = (undefined8 *)0x0;
        /*Core.Networking.NetworkVoteUpdate$$Set*/ func_0x01661bb8();
        if ((*(long *)(uVar8 + 0x10) != 0) &&
           (uVar9 = *(ulong *)(*(long *)(uVar8 + 0x10) + 0x48), uVar9 != 0)) {
          plVar7 = *(long **)(uVar8 + 0x178);
          *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
          *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
          *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
          *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
          *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
          *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
          *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
          *(ulong *)(puVar3 + -0x58) = uVar9;
          lVar12 = *(long *)(uVar9 + 0x68);
          if (lVar12 == 0) {
            puVar22 = puVar3 + -0x58;
            lVar14 = 1;
          }
          else {
            lVar14 = *(long *)(lVar12 + 0x18);
            if (lVar14 == 0) {
              return uVar9;
            }
            puVar22 = (undefined1 *)(lVar12 + 0x20);
          }
          lVar12 = 0;
          break;
        }
      }
    }
code_r0x014a4850:
    auVar27 = func_0x00f78af4();
    puVar20 = auVar27._8_8_;
    uVar9 = auVar27._0_8_;
    *(undefined8 *)(puVar3 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x88) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x80) = uVar10;
    *(ulong *)(puVar3 + -0x78) = uVar8;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x68) = &Atlas_Networking_NetworkHostSession__CastVotes;
    puVar22 = puVar3 + -0x70;
    unaff_x21 = 0x3eb4000;
    uVar8 = uVar9;
    if ((bRam0000000003eb4a45 & 1) == 0) {
      func_0x00f78a20(0x3d32bd8);
      func_0x00f78a20(0x3d32be0);
      func_0x00f78a20(0x3d32be8);
      uVar8 = func_0x00f78a20(0x3d3b680);
      bRam0000000003eb4a45 = 1;
    }
    *(undefined8 *)(puVar3 + -0xa8) = 0;
    *(undefined8 *)(puVar3 + -0xb0) = 0;
    *(undefined8 *)(puVar3 + -0x98) = 0;
    *(undefined8 *)(puVar3 + -0xa0) = 0;
    if (*(char *)(uVar9 + 0xf0) == '\0') {
      return uVar8;
    }
    if (puVar20 == (undefined8 *)0x0) {
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x014a4980;
      plVar7 = (long *)___cxa_begin_catch();
      lVar12 = *plVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(puVar3 + -0xb0,uRam0000000003eb4000);
      puVar20 = (undefined8 *)0x0;
      if (lVar12 != 0) {
        func_0x00f78ac0(lVar12,0);
code_r0x014a4980:
        auVar27 = __Unwind_Resume();
        *(undefined1 **)(puVar3 + -0xc0) = puVar22;
        *(undefined **)(puVar3 + -0xb8) =
             &Atlas_Networking_NetworkHostSession__RespondToUsableRequest;
        lVar12 = *(long *)(auVar27._0_8_ + 0x18);
        uVar8 = 0;
        if (lVar12 != 0) {
          uVar10 = *(undefined8 *)(auVar27._0_8_ + 0x30);
          uVar24 = *puVar13;
          uVar26 = puVar13[3];
          uVar25 = puVar13[2];
          *(undefined8 *)(puVar3 + -0xd8) = puVar13[1];
          *(undefined8 *)(puVar3 + -0xe0) = uVar24;
          *(undefined8 *)(puVar3 + -200) = uVar26;
          *(undefined8 *)(puVar3 + -0xd0) = uVar25;
          uVar8 = /*Core.Networking.NetworkServicesOutput$$WriteUsableResponseToPlayer*/ func_0x0165bed0(lVar12,uVar10,puVar3 + -0xe0,auVar27._8_8_,0);
        }
        return uVar8;
      }
    }
    else {
      unaff_x22 = 0x3d32be0;
      unaff_x21 = 0x3d32bd8;
      /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(puVar3 + -0xb0,puVar20,uRam0000000003d3b680);
      while (uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(puVar3 + -0xb0,uRam0000000003d32be0), (uVar8 & 1) != 0) {
        puVar20 = (undefined8 *)
                  ((ulong)puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(puVar3 + -0x98));
        puVar13 = puVar20;
        /*Atlas.Networking.NetworkHostSession$$SetVote*/ func_0x014a44e4(uVar9,*(undefined8 *)(puVar3 + -0xa0));
      }
      /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(puVar3 + -0xb0,uRam0000000003d32bd8);
    }
    puVar23 = &UNK_014a4934;
    puVar3 = puVar3 + -0xb0;
    uVar8 = uVar9;
  } while( true );
code_r0x01e47f88:
  lVar15 = *(long *)(puVar22 + lVar12 * 8);
  pcVar21 = *(code **)(lVar15 + 0x10);
  plVar1 = *(long **)(lVar15 + 0x20);
  lVar15 = *(long *)(lVar15 + 0x28);
  if (*(short *)(lVar15 + 0x48) == -1) {
    func_0x00f78ad8(lVar15);
  }
  iVar5 = func_0x00f78a4c(lVar15);
  bVar4 = *(char *)(lVar15 + 0x4a) == '\x01';
  if (iVar5 == 0) {
    if (bVar4) {
      if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
        uVar8 = (*pcVar21)(plVar7,lVar15);
      }
      else {
        if (((*(short *)(lVar15 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(uVar9 + 0x18) == 0)) goto code_r0x01e47fc0;
        iVar5 = func_0x00f78a44(lVar15);
        iVar6 = func_0x00f78ec0(lVar15);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar15 + 0x48);
          if (iVar6 == 0) {
            lVar15 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar8 = (**(code **)(lVar15 + 0x138))(plVar1,plVar7,*(undefined8 *)(lVar15 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar15 = func_0x00f78a48(lVar15);
          lVar16 = *plVar1;
          uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar8 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar15) {
                puVar13 = (undefined8 *)
                          (lVar16 + (long)(int)(*piVar19 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01e48260;
              }
              piVar19 = piVar19 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar13 = (undefined8 *)func_0x00fac1f0(plVar1,lVar15,(ulong)uVar2);
code_r0x01e48260:
          pcVar21 = (code *)*puVar13;
          puVar13 = (undefined8 *)puVar13[1];
        }
        else {
          if (iVar6 == 0) {
            uVar10 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar16 = *plVar1;
            uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar8 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)(lVar15 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar15 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e48238;
                }
                piVar19 = piVar19 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            lVar16 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
            uVar10 = *(undefined8 *)(lVar16 + 8);
          }
          puVar13 = (undefined8 *)func_0x00f78acc(uVar10,lVar15);
          pcVar21 = (code *)*puVar13;
        }
        uVar8 = (*pcVar21)(plVar1,plVar7,puVar13);
      }
    }
    else {
      if ((*(short *)(lVar15 + 0x48) == -1) || (*(long *)(uVar9 + 0x18) == 0))
      goto code_r0x01e480c8;
      iVar5 = func_0x00f78a44(lVar15);
      iVar6 = func_0x00f78ec0(lVar15);
      if (iVar5 == 0) {
        uVar2 = *(ushort *)(lVar15 + 0x48);
        if (iVar6 == 0) {
          lVar15 = *plVar7 + (ulong)uVar2 * 0x10;
          uVar8 = (**(code **)(lVar15 + 0x138))(plVar7,*(undefined8 *)(lVar15 + 0x140));
          goto code_r0x01e480d4;
        }
        lVar15 = func_0x00f78a48(lVar15);
        lVar16 = *plVar7;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar8 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar13 = (undefined8 *)(lVar16 + (long)(int)(*piVar19 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x01e481fc;
            }
            piVar19 = piVar19 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar13 = (undefined8 *)func_0x00fac1f0(plVar7,lVar15,(ulong)uVar2);
code_r0x01e481fc:
        pcVar21 = (code *)*puVar13;
        puVar13 = (undefined8 *)puVar13[1];
      }
      else {
        if (iVar6 == 0) {
          uVar10 = *(undefined8 *)(*plVar7 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar16 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar8 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)(lVar15 + 0x18)) {
                lVar16 = lVar16 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar15 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e481d4;
              }
              piVar19 = piVar19 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          lVar16 = func_0x00fac1f0(plVar7);
code_r0x01e481d4:
          uVar10 = *(undefined8 *)(lVar16 + 8);
        }
        puVar13 = (undefined8 *)func_0x00f78acc(uVar10,lVar15);
        pcVar21 = (code *)*puVar13;
      }
      uVar8 = (*pcVar21)(plVar7,puVar13);
    }
  }
  else {
    if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
    uVar8 = (*pcVar21)(plVar1,plVar7,lVar15);
  }
code_r0x01e480d4:
  lVar12 = lVar12 + 1;
  if (lVar12 == lVar14) {
    return uVar8;
  }
  goto code_r0x01e47f88;
}



// ============================================================
// RVA: 0x14a449c | Atlas.Networking.NetworkHostSession.CastVote
// ============================================================

/* WARNING: Possible PIC construction at 0x014a4930: Changing call to branch */

void Atlas_Networking_NetworkHostSession__CastVote(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int extraout_w1;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  code *pcVar16;
  undefined8 unaff_x24;
  long lVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return;
  }
  puVar10 = (undefined8 *)0x0;
  /*Atlas.Networking.NetworkHostSession$$SetVote*/ func_0x014a44e4(param_1,CONCAT44(param_3,*(undefined4 *)(param_2 + 0xc)) & 0xffffffffffff);
  puVar3 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    uVar15 = 0x3eb4000;
    if ((bRam0000000003eb4a50 & 1) == 0) {
      func_0x00f78a20(0x3d2a250);
      func_0x00f78a20(0x3d2a4c0);
      func_0x00f78a20(0x3d3b670);
      func_0x00f78a20(0x3d3b650);
      func_0x00f78a20(0x3d3b540);
      func_0x00f78a20(0x3d3b688);
      func_0x00f78a20(0x3d3b6c0);
      func_0x00f78a20(0x3d3b6c8);
      func_0x00f78a20(0x3d3b6d0);
      func_0x00f78a20(0x3d1dc60);
      bRam0000000003eb4a50 = 1;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      /*Core.Networking.NetworkServicesOutput$$WriteVote*/ func_0x0165b8d8(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),puVar10,0);
    }
    if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
      if (*(int *)(*(long *)(param_1 + 0x60) + 0x18) == *(int *)(*(long *)(param_1 + 0x58) + 0x18))
      {
        *(undefined1 *)(param_1 + 0xf0) = 0;
        /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(puVar3 + -0x50,param_1,0);
        uVar18 = *(undefined8 *)(puVar3 + -0x50);
        *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(puVar3 + -0x48);
        *(undefined8 *)(param_1 + 0xf8) = uVar18;
        *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(puVar3 + -0x40);
        if (*(long *)(param_1 + 0x178) != 0) {
          puVar10 = (undefined8 *)0x0;
          /*Core.Networking.NetworkVoteUpdate$$Set*/ func_0x01661bb8(*(long *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x60));
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar7 != 0)) {
            puVar10 = (undefined8 *)0x0;
            /*System.Action<ReflectionProbe, ReflectionProbe.ReflectionProbeEvent>$$Invoke*/ func_0x01e6e6d8(lVar7,*(undefined8 *)(param_1 + 0x178),0,uRam0000000003d2a4c0);
            lVar7 = *(long *)(param_1 + 0xd0);
            if (lVar7 != 0) {
              if (*(int *)(lVar7 + 0x18) != 0) {
                lVar7 = *(long *)(lVar7 + 0x10) + (long)(*(int *)(lVar7 + 0x18) + -1) * 0x18;
                uVar15 = *(undefined8 *)(lVar7 + 0x20);
                *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(lVar7 + 0x28);
                *(undefined8 *)(puVar3 + -0x60) = uVar15;
                unaff_x21 = *(undefined8 *)(param_1 + 0x60);
                uVar15 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVote>_TypeInfo*/ uRam0000000003d1dc60);
                puVar10 = puRam0000000003d3b650;
                /*System.Collections.Generic.List<NetworkVote>$$.ctor*/ func_0x02420e3c(uVar15,unaff_x21);
                lVar7 = *(long *)(param_1 + 0xd0);
                if (lVar7 == 0) goto code_r0x014a4850;
                iVar5 = *(int *)(lVar7 + 0x18);
                *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x58);
                *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x60);
                *(undefined8 *)(puVar3 + -0x40) = uVar15;
                puVar10 = (undefined8 *)(puVar3 + -0x50);
                /*System.Collections.Generic.List<NetworkVoteHistory>$$set_Item*/ func_0x024241ac(lVar7,iVar5 + -1,puVar10,uRam0000000003d3b6d0);
              }
              if (*(long *)(param_1 + 0x60) != 0) {
                /*System.Collections.Generic.List<NetworkVote>$$Clear*/ func_0x02421c3c(*(long *)(param_1 + 0x60),uRam0000000003d3b670);
                return;
              }
            }
          }
        }
      }
      else if (*(long *)(param_1 + 0x178) != 0) {
        puVar10 = (undefined8 *)0x0;
        /*Core.Networking.NetworkVoteUpdate$$Set*/ func_0x01661bb8();
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x48), lVar7 != 0)) {
          plVar9 = *(long **)(param_1 + 0x178);
          *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
          *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
          *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
          *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
          *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
          *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
          *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
          *(long *)(puVar3 + -0x58) = lVar7;
          lVar11 = *(long *)(lVar7 + 0x68);
          if (lVar11 == 0) {
            puVar3 = puVar3 + -0x58;
            lVar17 = 1;
          }
          else {
            lVar17 = *(long *)(lVar11 + 0x18);
            if (lVar17 == 0) {
              return;
            }
            puVar3 = (undefined1 *)(lVar11 + 0x20);
          }
          lVar11 = 0;
          break;
        }
      }
    }
code_r0x014a4850:
    auVar21 = func_0x00f78af4();
    unaff_x20 = auVar21._8_8_;
    unaff_x19 = auVar21._0_8_;
    *(undefined8 *)(puVar3 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x88) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x80) = uVar15;
    *(long *)(puVar3 + -0x78) = param_1;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x68) = &Atlas_Networking_NetworkHostSession__CastVotes;
    unaff_x29 = puVar3 + -0x70;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4a45 & 1) == 0) {
      func_0x00f78a20(0x3d32bd8);
      func_0x00f78a20(0x3d32be0);
      func_0x00f78a20(0x3d32be8);
      func_0x00f78a20(0x3d3b680);
      bRam0000000003eb4a45 = 1;
    }
    *(undefined8 *)(puVar3 + -0xa8) = 0;
    *(undefined8 *)(puVar3 + -0xb0) = 0;
    *(undefined8 *)(puVar3 + -0x98) = 0;
    *(undefined8 *)(puVar3 + -0xa0) = 0;
    if (*(char *)(unaff_x19 + 0xf0) == '\0') {
      return;
    }
    if (unaff_x20 == (undefined8 *)0x0) {
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x014a4980;
      plVar9 = (long *)___cxa_begin_catch();
      lVar7 = *plVar9;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(puVar3 + -0xb0,uRam0000000003eb4000);
      unaff_x20 = (undefined8 *)0x0;
      if (lVar7 != 0) {
        func_0x00f78ac0(lVar7,0);
code_r0x014a4980:
        auVar21 = __Unwind_Resume();
        *(undefined1 **)(puVar3 + -0xc0) = unaff_x29;
        *(undefined **)(puVar3 + -0xb8) =
             &Atlas_Networking_NetworkHostSession__RespondToUsableRequest;
        lVar7 = *(long *)(auVar21._0_8_ + 0x18);
        if (lVar7 != 0) {
          uVar15 = *(undefined8 *)(auVar21._0_8_ + 0x30);
          uVar18 = *puVar10;
          uVar20 = puVar10[3];
          uVar19 = puVar10[2];
          *(undefined8 *)(puVar3 + -0xd8) = puVar10[1];
          *(undefined8 *)(puVar3 + -0xe0) = uVar18;
          *(undefined8 *)(puVar3 + -200) = uVar20;
          *(undefined8 *)(puVar3 + -0xd0) = uVar19;
          /*Core.Networking.NetworkServicesOutput$$WriteUsableResponseToPlayer*/ func_0x0165bed0(lVar7,uVar15,puVar3 + -0xe0,auVar21._8_8_,0);
        }
        return;
      }
    }
    else {
      unaff_x22 = 0x3d32be0;
      unaff_x21 = 0x3d32bd8;
      /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(puVar3 + -0xb0,unaff_x20,uRam0000000003d3b680);
      while (uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(puVar3 + -0xb0,uRam0000000003d32be0), (uVar8 & 1) != 0) {
        unaff_x20 = (undefined8 *)
                    ((ulong)unaff_x20 & 0xffffffff00000000 | (ulong)*(uint *)(puVar3 + -0x98));
        puVar10 = unaff_x20;
        /*Atlas.Networking.NetworkHostSession$$SetVote*/ func_0x014a44e4(unaff_x19,*(undefined8 *)(puVar3 + -0xa0));
      }
      /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(puVar3 + -0xb0,uRam0000000003d32bd8);
    }
    unaff_x30 = &UNK_014a4934;
    puVar3 = puVar3 + -0xb0;
    param_1 = unaff_x19;
  } while( true );
code_r0x01e47f88:
  lVar12 = *(long *)(puVar3 + lVar11 * 8);
  pcVar16 = *(code **)(lVar12 + 0x10);
  plVar1 = *(long **)(lVar12 + 0x20);
  lVar12 = *(long *)(lVar12 + 0x28);
  if (*(short *)(lVar12 + 0x48) == -1) {
    func_0x00f78ad8(lVar12);
  }
  iVar5 = func_0x00f78a4c(lVar12);
  bVar4 = *(char *)(lVar12 + 0x4a) == '\x01';
  if (iVar5 == 0) {
    if (bVar4) {
      if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
        (*pcVar16)(plVar9,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar7 + 0x18) == 0)) goto code_r0x01e47fc0;
        iVar5 = func_0x00f78a44(lVar12);
        iVar6 = func_0x00f78ec0(lVar12);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar6 == 0) {
            lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar1;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar12) {
                puVar10 = (undefined8 *)
                          (lVar13 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01e48260;
              }
              piVar14 = piVar14 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01e48260:
          pcVar16 = (code *)*puVar10;
          puVar10 = (undefined8 *)puVar10[1];
        }
        else {
          if (iVar6 == 0) {
            uVar15 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e48238;
                }
                piVar14 = piVar14 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
            uVar15 = *(undefined8 *)(lVar13 + 8);
          }
          puVar10 = (undefined8 *)func_0x00f78acc(uVar15,lVar12);
          pcVar16 = (code *)*puVar10;
        }
        (*pcVar16)(plVar1,plVar9,puVar10);
      }
    }
    else {
      if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar7 + 0x18) == 0))
      goto code_r0x01e480c8;
      iVar5 = func_0x00f78a44(lVar12);
      iVar6 = func_0x00f78ec0(lVar12);
      if (iVar5 == 0) {
        uVar2 = *(ushort *)(lVar12 + 0x48);
        if (iVar6 == 0) {
          lVar12 = *plVar9 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar9,*(undefined8 *)(lVar12 + 0x140));
          goto code_r0x01e480d4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar12) {
              puVar10 = (undefined8 *)(lVar13 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x01e481fc;
            }
            piVar14 = piVar14 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,lVar12,(ulong)uVar2);
code_r0x01e481fc:
        pcVar16 = (code *)*puVar10;
        puVar10 = (undefined8 *)puVar10[1];
      }
      else {
        if (iVar6 == 0) {
          uVar15 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e481d4;
              }
              piVar14 = piVar14 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar9);
code_r0x01e481d4:
          uVar15 = *(undefined8 *)(lVar13 + 8);
        }
        puVar10 = (undefined8 *)func_0x00f78acc(uVar15,lVar12);
        pcVar16 = (code *)*puVar10;
      }
      (*pcVar16)(plVar9,puVar10);
    }
  }
  else {
    if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
    (*pcVar16)(plVar1,plVar9,lVar12);
  }
code_r0x01e480d4:
  lVar11 = lVar11 + 1;
  if (lVar11 == lVar17) {
    return;
  }
  goto code_r0x01e47f88;
}



// ============================================================
// RVA: 0x14a44e4 | Atlas.Networking.NetworkHostSession.SetVote
// ============================================================

ulong Atlas_Networking_NetworkHostSession__SetVote
                (ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint extraout_w8;
  uint uVar7;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  ulong unaff_x26;
  undefined1 auVar13 [16];
  
  uVar2 = param_1;
  if ((bRam0000000003eb4a4b & 1) == 0) {
    func_0x00f78a20(0x3d3b660);
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b690);
    uVar2 = func_0x00f78a20(0x3d3b698);
    bRam0000000003eb4a4b = 1;
  }
  uVar10 = *(ulong *)(param_1 + 0x60);
  if (uVar10 != 0) {
    uVar8 = 0;
    unaff_x26 = 0;
    param_3 = (undefined8 *)((ulong)param_3 & 0xffffffff);
    lVar12 = 0x20;
    do {
      if ((long)(int)*(uint *)(uVar10 + 0x18) <= (long)uVar8) goto LAB_014a45d0;
      if (*(uint *)(uVar10 + 0x18) <= uVar8) {
        uVar2 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(int *)(*(long *)(uVar10 + 0x10) + lVar12) == (int)param_2) {
        if (*(long *)(param_1 + 0x60) == 0) break;
        uVar2 = /*System.Collections.Generic.List<NetworkVote>$$set_Item*/ func_0x024215cc(*(long *)(param_1 + 0x60),uVar8,param_2,param_3,uRam0000000003d3b698
                               );
        unaff_x26 = 1;
      }
      uVar8 = uVar8 + 1;
      uVar10 = *(ulong *)(param_1 + 0x60);
      lVar12 = lVar12 + 0xc;
    } while (uVar10 != 0);
  }
  uVar2 = func_0x00f78af4();
LAB_014a45d0:
  if ((unaff_x26 & 1) != 0) {
    return uVar2;
  }
  lVar12 = *(long *)(uVar10 + 0x10);
  puVar6 = param_3;
  if (lVar12 == 0) {
code_r0x024219a0:
    param_2 = unaff_x21;
    param_3 = unaff_x20;
    uVar10 = unaff_x19;
    uVar2 = func_0x00f78af4();
    lVar12 = extraout_x9;
    uVar7 = extraout_w8;
code_r0x024219a4:
    *(uint *)(uVar10 + 0x18) = uVar7 + 1;
  }
  else {
    uVar7 = *(uint *)(uVar10 + 0x18);
    uVar2 = uVar10;
    if (uVar7 != *(uint *)(lVar12 + 0x18)) goto code_r0x024219a4;
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b660 + 0x18) + 0xc0) + 0x60);
    uVar2 = (*(code *)*puVar6)(uVar10,uVar7 + 1);
    lVar12 = *(long *)(uVar10 + 0x10);
    uVar7 = *(uint *)(uVar10 + 0x18);
    *(uint *)(uVar10 + 0x18) = uVar7 + 1;
    unaff_x19 = uVar10;
    unaff_x20 = param_3;
    unaff_x21 = param_2;
    if (lVar12 == 0) goto code_r0x024219a0;
  }
  if (uVar7 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + (long)(int)uVar7 * 0xc;
    *(undefined8 *)(lVar12 + 0x20) = param_2;
    *(int *)(lVar12 + 0x28) = (int)param_3;
    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
    return uVar2;
  }
  uVar3 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar3,0);
  plVar5 = auVar13._8_8_;
  lVar12 = auVar13._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x48))(plVar5,0x14);
  if (lVar12 != 0) {
    pcVar11 = (code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x28);
    lVar9 = *(long *)(*(long *)(puVar6[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (plVar5 != (long *)0x0) {
      if (*(long *)(*plVar5 + 0x40) == *(long *)(lVar9 + 0x40)) {
        puVar4 = (undefined8 *)func_0x00f78ae4(plVar5);
        (*pcVar11)(lVar12,*puVar4,*(undefined4 *)(puVar4 + 1),
                   *(undefined8 *)(*(long *)(puVar6[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x68))(lVar12);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar5,lVar9);
      goto code_r0x02421b98;
    }
  }
  func_0x00f78af4();
code_r0x02421b98:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x2421b9c);
  (*pcVar11)();
}



// ============================================================
// RVA: 0x14a461c | Atlas.Networking.NetworkHostSession.InternalSendVotesAndCheckAdvance
// ============================================================

void Atlas_Networking_NetworkHostSession__InternalSendVotesAndCheckAdvance
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int extraout_w1;
  long lVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  
  if ((bRam0000000003eb4a50 & 1) == 0) {
    func_0x00f78a20(0x3d2a250);
    func_0x00f78a20(0x3d2a4c0);
    func_0x00f78a20(0x3d3b670);
    func_0x00f78a20(0x3d3b650);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d3b6c8);
    func_0x00f78a20(0x3d3b6d0);
    func_0x00f78a20(0x3d1dc60);
    bRam0000000003eb4a50 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    param_3 = *(undefined8 **)(param_1 + 0x60);
    /*Core.Networking.NetworkServicesOutput$$WriteVote*/ func_0x0165b8d8(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),param_3,0);
  }
  if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x18) == *(int *)(*(long *)(param_1 + 0x58) + 0x18)) {
      *(undefined1 *)(param_1 + 0xf0) = 0;
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&stack0xffffffffffffffb0,param_1,0);
      *(undefined8 *)(param_1 + 0x100) = in_stack_ffffffffffffffb8;
      *(undefined8 *)(param_1 + 0xf8) = in_stack_ffffffffffffffb0;
      *(undefined8 *)(param_1 + 0x108) = in_stack_ffffffffffffffc0;
      if (*(long *)(param_1 + 0x178) != 0) {
        param_3 = (undefined8 *)0x0;
        /*Core.Networking.NetworkVoteUpdate$$Set*/ func_0x01661bb8(*(long *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x60));
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar6 != 0)) {
          param_3 = (undefined8 *)0x0;
          /*System.Action<ReflectionProbe, ReflectionProbe.ReflectionProbeEvent>$$Invoke*/ func_0x01e6e6d8(lVar6,*(undefined8 *)(param_1 + 0x178),0,uRam0000000003d2a4c0);
          lVar6 = *(long *)(param_1 + 0xd0);
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) != 0) {
              lVar6 = *(long *)(lVar6 + 0x10) + (long)(*(int *)(lVar6 + 0x18) + -1) * 0x18;
              lStack_58 = *(long *)(lVar6 + 0x28);
              uStack_60 = *(undefined8 *)(lVar6 + 0x20);
              uVar16 = *(undefined8 *)(param_1 + 0x60);
              uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVote>_TypeInfo*/ uRam0000000003d1dc60);
              param_3 = puRam0000000003d3b650;
              /*System.Collections.Generic.List<NetworkVote>$$.ctor*/ func_0x02420e3c(uVar7,uVar16);
              lVar6 = *(long *)(param_1 + 0xd0);
              if (lVar6 == 0) goto LAB_014a4850;
              param_3 = (undefined8 *)&stack0xffffffffffffffb0;
              /*System.Collections.Generic.List<NetworkVoteHistory>$$set_Item*/ func_0x024241ac(lVar6,*(int *)(lVar6 + 0x18) + -1,param_3,uRam0000000003d3b6d0);
            }
            if (*(long *)(param_1 + 0x60) != 0) {
              /*System.Collections.Generic.List<NetworkVote>$$Clear*/ func_0x02421c3c(*(long *)(param_1 + 0x60),uRam0000000003d3b670);
              return;
            }
          }
        }
      }
    }
    else if (*(long *)(param_1 + 0x178) != 0) {
      param_3 = (undefined8 *)0x0;
      /*Core.Networking.NetworkVoteUpdate$$Set*/ func_0x01661bb8();
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x48), lVar6 != 0)) {
        plVar9 = *(long **)(param_1 + 0x178);
        lStack_58 = lVar6;
        lVar15 = *(long *)(lVar6 + 0x68);
        if (lVar15 == 0) {
          plVar19 = &lStack_58;
          lVar18 = 1;
        }
        else {
          lVar18 = *(long *)(lVar15 + 0x18);
          if (lVar18 == 0) {
            return;
          }
          plVar19 = (long *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar11 = plVar19[lVar15];
          pcVar17 = *(code **)(lVar11 + 0x10);
          plVar1 = *(long **)(lVar11 + 0x20);
          lVar11 = *(long *)(lVar11 + 0x28);
          if (*(short *)(lVar11 + 0x48) == -1) {
            func_0x00f78ad8(lVar11);
          }
          iVar4 = func_0x00f78a4c(lVar11);
          bVar3 = *(char *)(lVar11 + 0x4a) == '\x01';
          if (iVar4 == 0) {
            if (bVar3) {
              if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
                (*pcVar17)(plVar9,lVar11);
              }
              else {
                if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(lVar6 + 0x18) == 0)) goto code_r0x01e47fc0;
                iVar4 = func_0x00f78a44(lVar11);
                iVar5 = func_0x00f78ec0(lVar11);
                if (iVar4 == 0) {
                  uVar2 = *(ushort *)(lVar11 + 0x48);
                  if (iVar5 == 0) {
                    lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
                    (**(code **)(lVar11 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar11 + 0x140));
                    goto code_r0x01e480d4;
                  }
                  lVar11 = func_0x00f78a48(lVar11);
                  lVar12 = *plVar1;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
                  if (uVar14 != 0) {
                    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == lVar11) {
                        puVar10 = (undefined8 *)
                                  (lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e48260;
                      }
                      piVar13 = piVar13 + 4;
                      uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                  }
                  puVar10 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01e48260:
                  pcVar17 = (code *)*puVar10;
                  puVar10 = (undefined8 *)puVar10[1];
                }
                else {
                  if (iVar5 == 0) {
                    uVar7 = *(undefined8 *)
                             (*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar12 = *plVar1;
                    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    if (uVar14 != 0) {
                      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == *(long *)(lVar11 + 0x18)) {
                          lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar11 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e48238;
                        }
                        piVar13 = piVar13 + 4;
                        uVar14 = uVar14 - 1;
                      } while (uVar14 != 0);
                    }
                    lVar12 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
                    uVar7 = *(undefined8 *)(lVar12 + 8);
                  }
                  puVar10 = (undefined8 *)func_0x00f78acc(uVar7,lVar11);
                  pcVar17 = (code *)*puVar10;
                }
                (*pcVar17)(plVar1,plVar9,puVar10);
              }
            }
            else {
              if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar6 + 0x18) == 0))
              goto code_r0x01e480c8;
              iVar4 = func_0x00f78a44(lVar11);
              iVar5 = func_0x00f78ec0(lVar11);
              if (iVar4 == 0) {
                uVar2 = *(ushort *)(lVar11 + 0x48);
                if (iVar5 == 0) {
                  lVar11 = *plVar9 + (ulong)uVar2 * 0x10;
                  (**(code **)(lVar11 + 0x138))(plVar9,*(undefined8 *)(lVar11 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar11 = func_0x00f78a48(lVar11);
                lVar12 = *plVar9;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar14 != 0) {
                  piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == lVar11) {
                      puVar10 = (undefined8 *)
                                (lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x01e481fc;
                    }
                    piVar13 = piVar13 + 4;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
                puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,lVar11,(ulong)uVar2);
code_r0x01e481fc:
                pcVar17 = (code *)*puVar10;
                puVar10 = (undefined8 *)puVar10[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar7 = *(undefined8 *)
                           (*plVar9 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar12 = *plVar9;
                  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
                  if (uVar14 != 0) {
                    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)(lVar11 + 0x18)) {
                        lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e481d4;
                      }
                      piVar13 = piVar13 + 4;
                      uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                  }
                  lVar12 = func_0x00fac1f0(plVar9);
code_r0x01e481d4:
                  uVar7 = *(undefined8 *)(lVar12 + 8);
                }
                puVar10 = (undefined8 *)func_0x00f78acc(uVar7,lVar11);
                pcVar17 = (code *)*puVar10;
              }
              (*pcVar17)(plVar9,puVar10);
            }
          }
          else {
            if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
            (*pcVar17)(plVar1,plVar9,lVar11);
          }
code_r0x01e480d4:
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar18) {
            return;
          }
        } while( true );
      }
    }
  }
LAB_014a4850:
  auVar20 = func_0x00f78af4();
  uVar14 = auVar20._8_8_;
  lVar6 = auVar20._0_8_;
  puStack_68 = &Atlas_Networking_NetworkHostSession__CastVotes;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a45 & 1) == 0) {
    func_0x00f78a20(0x3d32bd8);
    func_0x00f78a20(0x3d32be0);
    func_0x00f78a20(0x3d32be8);
    func_0x00f78a20(0x3d3b680);
    bRam0000000003eb4a45 = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(char *)(lVar6 + 0xf0) != '\0') {
    if (uVar14 == 0) {
      func_0x00f78af4();
      if (extraout_w1 != 1) {
code_r0x014a4980:
        auVar20 = __Unwind_Resume();
        puStack_b8 = &Atlas_Networking_NetworkHostSession__RespondToUsableRequest;
        lVar6 = *(long *)(auVar20._0_8_ + 0x18);
        if (lVar6 != 0) {
          uStack_d8 = param_3[1];
          uStack_e0 = *param_3;
          uStack_c8 = param_3[3];
          uStack_d0 = param_3[2];
          ppuStack_c0 = &puStack_70;
          /*Core.Networking.NetworkServicesOutput$$WriteUsableResponseToPlayer*/ func_0x0165bed0(lVar6,*(undefined8 *)(auVar20._0_8_ + 0x30),&uStack_e0,auVar20._8_8_,0);
        }
        return;
      }
      plVar9 = (long *)___cxa_begin_catch();
      lVar15 = *plVar9;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&uStack_b0,uRam0000000003eb4000);
      if (lVar15 != 0) {
        func_0x00f78ac0(lVar15,0);
        goto code_r0x014a4980;
      }
    }
    else {
      /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(&uStack_b0,uVar14,uRam0000000003d3b680);
      while (uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(&uStack_b0,uRam0000000003d32be0), (uVar8 & 1) != 0) {
        uVar14 = uVar14 & 0xffffffff00000000 | uStack_98 & 0xffffffff;
        Atlas_Networking_NetworkHostSession__SetVote(lVar6,uStack_a0,uVar14);
      }
      /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&uStack_b0,uRam0000000003d32bd8);
    }
    Atlas_Networking_NetworkHostSession__InternalSendVotesAndCheckAdvance(lVar6);
  }
  return;
}



// ============================================================
// RVA: 0x14a4854 | Atlas.Networking.NetworkHostSession.CastVotes
// ============================================================

void Atlas_Networking_NetworkHostSession__CastVotes(long param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  int extraout_w1;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if ((bRam0000000003eb4a45 & 1) == 0) {
    func_0x00f78a20(0x3d32bd8);
    func_0x00f78a20(0x3d32be0);
    func_0x00f78a20(0x3d32be8);
    func_0x00f78a20(0x3d3b680);
    bRam0000000003eb4a45 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(char *)(param_1 + 0xf0) != '\0') {
    if (param_2 == 0) {
      func_0x00f78af4();
      if (extraout_w1 != 1) {
code_r0x014a4980:
        auVar4 = __Unwind_Resume();
        puStack_58 = &Atlas_Networking_NetworkHostSession__RespondToUsableRequest;
        lVar3 = *(long *)(auVar4._0_8_ + 0x18);
        if (lVar3 != 0) {
          uStack_78 = param_3[1];
          uStack_80 = *param_3;
          uStack_68 = param_3[3];
          uStack_70 = param_3[2];
          puStack_60 = &stack0xfffffffffffffff0;
          /*Core.Networking.NetworkServicesOutput$$WriteUsableResponseToPlayer*/ func_0x0165bed0(lVar3,*(undefined8 *)(auVar4._0_8_ + 0x30),&uStack_80,auVar4._8_8_,0);
        }
        return;
      }
      plVar2 = (long *)___cxa_begin_catch();
      lVar3 = *plVar2;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&uStack_50,uRam0000000003eb4000);
      if (lVar3 != 0) {
        func_0x00f78ac0(lVar3,0);
        goto code_r0x014a4980;
      }
    }
    else {
      /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(&uStack_50,param_2,uRam0000000003d3b680);
      while (uVar1 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(&uStack_50,uRam0000000003d32be0), (uVar1 & 1) != 0) {
        param_2 = param_2 & 0xffffffff00000000 | uStack_38 & 0xffffffff;
        Atlas_Networking_NetworkHostSession__SetVote(param_1,uStack_40,param_2);
      }
      /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&uStack_50,uRam0000000003d32bd8);
    }
    Atlas_Networking_NetworkHostSession__InternalSendVotesAndCheckAdvance(param_1);
  }
  return;
}



// ============================================================
// RVA: 0x14a4984 | Atlas.Networking.NetworkHostSession.RespondToUsableRequest
// ============================================================

void Atlas_Networking_NetworkHostSession__RespondToUsableRequest
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uStack_28 = param_3[1];
    uStack_30 = *param_3;
    uStack_18 = param_3[3];
    uStack_20 = param_3[2];
    /*Core.Networking.NetworkServicesOutput$$WriteUsableResponseToPlayer*/ func_0x0165bed0(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),&uStack_30,param_2,0);
  }
  return;
}



// ============================================================
// RVA: 0x14a49c4 | Atlas.Networking.NetworkHostSession.RequestGameModeLoaded
// ============================================================

void Atlas_Networking_NetworkHostSession__RequestGameModeLoaded(long param_1)

{
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  
  *(undefined1 *)(param_1 + 0x16b) = 1;
  /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_40,param_1,0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = uStack_34;
  uStack_64 = 1;
  /*Atlas.Networking.NetworkHostSession$$InternalGameModeLoaded*/ func_0x014a4a18(param_1,&uStack_68);
  return;
}



// ============================================================
// RVA: 0x14a4a18 | Atlas.Networking.NetworkHostSession.InternalGameModeLoaded
// ============================================================

/* WARNING: Possible PIC construction at 0x014a4cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014a4db0: Changing call to branch */

void Atlas_Networking_NetworkHostSession__InternalGameModeLoaded
               (long param_1,int *param_2,int *param_3,undefined8 *param_4,undefined8 *param_5,
               undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *extraout_x1;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  char *pcVar20;
  ulong unaff_x26;
  undefined *puVar21;
  undefined4 extraout_s0;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_510 [12];
  undefined4 uStack_504;
  undefined8 *puStack_4f0;
  ulong uStack_4e8;
  undefined1 *****pppppuStack_4e0;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined8 *puStack_460;
  int *piStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined1 ****ppppuStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
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
  undefined2 uStack_378;
  undefined2 uStack_376;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  ulong uStack_360;
  char *pcStack_358;
  ulong uStack_350;
  undefined8 *puStack_348;
  int *piStack_340;
  undefined8 *puStack_338;
  undefined1 auStack_330 [16];
  undefined1 ***pppuStack_320;
  undefined *puStack_318;
  undefined2 uStack_30c;
  undefined1 uStack_30a;
  int iStack_308;
  undefined8 uStack_304;
  undefined8 uStack_2fc;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  undefined1 uStack_2e4;
  undefined2 uStack_2e3;
  undefined1 uStack_2e1;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  long lStack_2b8;
  ulong uStack_2b0;
  char *pcStack_2a8;
  long lStack_2a0;
  undefined8 *puStack_298;
  int *piStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
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
  undefined8 uStack_1e0;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined1 uStack_1ac;
  undefined2 uStack_1ab;
  undefined1 uStack_1a9;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  int aiStack_198 [4];
  uint uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined7 uStack_138;
  undefined4 uStack_131;
  long lStack_128;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  int iStack_b0;
  undefined4 uStack_a8;
  int aiStack_a0 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb4a4f & 1) == 0) {
    func_0x00f78a20(0x3d32b18);
    func_0x00f78a20(0x3d32b20);
    func_0x00f78a20(0x3d32b28);
    func_0x00f78a20(0x3d3b468);
    func_0x00f78a20(0x3d3b478);
    bRam0000000003eb4a4f = 1;
  }
  aiStack_a0[0xc] = 0;
  aiStack_a0[0xd] = 0;
  aiStack_a0[6] = 0;
  aiStack_a0[7] = 0;
  aiStack_a0[4] = 0;
  aiStack_a0[5] = 0;
  aiStack_a0[10] = 0;
  aiStack_a0[0xb] = 0;
  aiStack_a0[8] = 0;
  aiStack_a0[9] = 0;
  aiStack_a0[2] = 0;
  aiStack_a0[3] = 0;
  aiStack_a0[0] = 0;
  aiStack_a0[1] = 0;
  if (param_2[1] == 1) {
    if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_014a4b68;
    /*System.Collections.Generic.List<NetworkGameMode>$$GetEnumerator*/ func_0x0240bc64(aiStack_a0,*(long *)(param_1 + 0x1c0),uRam0000000003d3b478);
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkGameMode>$$MoveNext*/ func_0x01f6d20c(aiStack_a0,uRam0000000003d32b20);
      if ((uVar4 & 1) == 0) {
        iStack_b0 = 0x47;
        goto LAB_014a4af0;
      }
    } while (aiStack_a0[4] != *param_2);
    iStack_b0 = 0x59;
LAB_014a4af0:
    /*System.Collections.Generic.List.Enumerator<NetworkGameMode>$$Dispose*/ func_0x01f6d208(aiStack_a0,uRam0000000003d32b18);
    if (iStack_b0 != 0x59) {
      if (iStack_b0 == 0x47) {
        uStack_a8 = 0;
      }
      while (*(long *)(param_1 + 0x1c0) == 0) {
LAB_014a4b68:
        func_0x00f78af4();
        if (extraout_w1 != 1) {
          lVar5 = __Unwind_Resume();
          puStack_b8 = &Atlas_Networking_NetworkHostSession__RequestOwnedPlayerFinished;
          pcVar20 = (char *)&uStack_1d0;
          lStack_128 = *(long *)PTR_03a5d648;
          lVar19 = 0x3eb4000;
          piVar9 = param_3;
          puVar11 = param_4;
          puVar13 = param_5;
          puStack_c0 = &stack0xfffffffffffffff0;
          if ((bRam0000000003eb4a46 & 1) == 0) {
            func_0x00f78a20(0x3d29f30);
            func_0x00f78a20(0x3d32b00);
            func_0x00f78a20(0x3d32b08);
            func_0x00f78a20(0x3d32b10);
            func_0x00f78a20(0x3d3b428);
            func_0x00f78a20(0x3d3b440);
            func_0x00f78a20(0x3d3b448);
            func_0x00f78a20(0x3d237b8);
            bRam0000000003eb4a46 = 1;
          }
          uStack_150 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_188 = 0;
          iVar3 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(extraout_x1,0);
          puVar17 = extraout_x1;
          uVar2 = uStack_188;
          if (iVar3 == 0) goto code_r0x014a4f88;
          if (*(long *)(lVar5 + 0x70) == 0) goto code_r0x014a4fc4;
          /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_1d0,*(long *)(lVar5 + 0x70),uRam0000000003d3b440);
          uStack_178 = CONCAT44(uStack_1c4,uStack_1c8);
          uStack_180 = CONCAT44(uStack_1cc,uStack_1d0);
          uStack_168 = CONCAT44(uStack_1b4,uStack_1b8);
          uStack_170 = CONCAT44(uStack_1bc,uStack_1c0);
          uStack_160 = CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,CONCAT14(uStack_1ac,uStack_1b0)));
          uStack_158 = uStack_1a8;
          uStack_150 = uStack_1a0;
          lVar19 = 0x3d32b08;
          goto code_r0x014a4ca8;
        }
        param_3 = aiStack_a0;
        func_0x032fef90();
      }
      uStack_58 = *(undefined8 *)(param_2 + 2);
      uStack_60 = *(undefined8 *)param_2;
      uStack_48 = *(undefined8 *)(param_2 + 6);
      uStack_50 = *(undefined8 *)(param_2 + 4);
      uStack_40 = *(undefined8 *)(param_2 + 8);
      /*System.Collections.Generic.List<NetworkGameMode>$$Add*/ func_0x0240b094(*(long *)(param_1 + 0x1c0),&uStack_60,uRam0000000003d3b468);
      /*Atlas.Networking.NetworkHostSession$$CheckAndAdvanceGameMode*/ func_0x014a5cd4(param_1);
    }
  }
  return;
  while( true ) {
    piVar9 = (int *)(uStack_170 & 0xffffffff);
    if ((int)uStack_170 == *(int *)((long)extraout_x1 + 0xc)) break;
code_r0x014a4ca8:
    uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_180,uRam0000000003d32b08);
    if ((uVar4 & 1) == 0) {
      aiStack_198[0] = 0x69;
      goto code_r0x014a4d00;
    }
  }
  if (*(char *)((long)param_5 + 4) == '\0') {
    aiStack_198[0] = 0x188;
code_r0x014a4d00:
    unaff_x26 = 1;
    uStack_188 = 1;
    /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_180,uRam0000000003d32b00);
    uVar2 = uStack_188;
    if (aiStack_198[0] == 0x188) goto code_r0x014a4f88;
    if (aiStack_198[0] == 0x69) {
      uStack_188 = 0;
    }
    unaff_x26 = (ulong)(aiStack_198[0] != 0x69);
    if (*(long *)(lVar5 + 0x1d0) == 0) goto code_r0x014a4fc4;
    /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_1d0,*(long *)(lVar5 + 0x1d0),uRam0000000003d3b440);
    uStack_178 = CONCAT44(uStack_1c4,uStack_1c8);
    uStack_180 = CONCAT44(uStack_1cc,uStack_1d0);
    uStack_168 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_170 = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_160 = CONCAT17(uStack_1a9,CONCAT25(uStack_1ab,CONCAT14(uStack_1ac,uStack_1b0)));
    uStack_158 = uStack_1a8;
    uStack_150 = uStack_1a0;
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_180,uRam0000000003d32b08);
      if ((uVar4 & 1) == 0) {
        uVar15 = 200;
        goto code_r0x014a4dc0;
      }
      piVar9 = (int *)(uStack_170 & 0xffffffff);
    } while ((int)uStack_170 != *(int *)((long)extraout_x1 + 0xc));
    if (*(char *)((long)param_5 + 4) == '\0') {
      uVar15 = 0x188;
code_r0x014a4dc0:
      *(undefined4 *)((ulong)aiStack_198 | unaff_x26 << 2) = uVar15;
      uStack_188 = uStack_188 + 1;
      unaff_x26 = (ulong)uStack_188;
      /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_180,uRam0000000003d32b00);
      do {
        uVar18 = uStack_188;
        if ((int)unaff_x26 == 0) {
code_r0x014a4e1c:
          uStack_188 = uVar18;
          uStack_140 = *(undefined8 *)((long)param_5 + 5);
          uStack_138 = (undefined7)*(undefined8 *)((long)param_5 + 0xd);
          uStack_131 = *(undefined4 *)((long)param_5 + 0x14);
          uVar15 = *(undefined4 *)param_5;
          cVar1 = *(char *)((long)param_5 + 4);
          if (*(char *)((long)param_5 + 4) == '\0') {
            /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_1d0,lVar5,0);
            uStack_138 = CONCAT43(uStack_1c0,uStack_1c4._1_3_);
            uStack_140 = CONCAT17((undefined1)uStack_1c4,CONCAT43(uStack_1c8,uStack_1cc._1_3_));
            uStack_131 = uStack_1bc;
            uVar15 = uStack_1d0;
            cVar1 = (char)uStack_1cc;
          }
          if (*(long *)(lVar5 + 0x1d0) != 0) {
            uStack_1d0 = *(undefined4 *)((long)puVar17 + 0xc);
            uStack_1cc = SUB84(param_3,0);
            uStack_1bc._1_3_ = (undefined3)uStack_138;
            uStack_1b8 = (undefined4)((uint7)uStack_138 >> 0x18);
            uStack_1c4._1_3_ = (undefined3)uStack_140;
            uStack_1c4 = CONCAT31(uStack_1c4._1_3_,cVar1);
            uStack_1c0 = (undefined4)((ulong)uStack_140 >> 0x18);
            uStack_1bc._0_1_ = (undefined1)((ulong)uStack_140 >> 0x38);
            uStack_1b4 = uStack_131;
            uStack_1ac = SUB81(param_4,0);
            uStack_1ab = 0;
            uStack_1a9 = 0;
            piVar9 = piRam0000000003d3b428;
            uStack_1c8 = uVar15;
            uStack_1b0 = extraout_s0;
            /*System.Collections.Generic.List<NetworkEventStanding>$$Add*/ func_0x02408354(*(long *)(lVar5 + 0x1d0),&uStack_1d0);
            uVar2 = uStack_188;
            if (((*(char *)(lVar5 + 0x114) == '\0') && (*(char *)(lVar5 + 0x168) == '\0')) &&
               (*(int *)(puVar17 + 1) == 0)) {
              puVar17 = (undefined8 *)(lVar5 + 0x110);
              /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_1d0,lVar5,0);
              if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uStack_238 = CONCAT44(uStack_1c4,uStack_1c8);
              uStack_240 = CONCAT44(uStack_1cc,uStack_1d0);
              uStack_230 = CONCAT44(uStack_1bc,uStack_1c0);
              piVar9 = (int *)0x0;
              /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_228,&uStack_240,0x1c2);
              *(undefined8 *)(lVar5 + 0x118) = uStack_220;
              *puVar17 = uStack_228;
              *(undefined8 *)(lVar5 + 0x120) = uStack_218;
              if (*(long *)(lVar5 + 0x70) == 0) goto code_r0x014a4fc4;
              uVar2 = uStack_188;
              if (0xb < *(int *)(*(long *)(lVar5 + 0x70) + 0x18)) {
                if ((*(long *)(lVar5 + 0x10) == 0) ||
                   (*(long *)(*(long *)(lVar5 + 0x10) + 0x68) == 0)) goto code_r0x014a4fc4;
                piVar9 = piRam0000000003d29f30;
                /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c();
                *(undefined1 *)(lVar5 + 0x168) = 1;
                /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_258,lVar5,0);
                *(undefined8 *)(lVar5 + 0x118) = uStack_250;
                *puVar17 = uStack_258;
                *(undefined8 *)(lVar5 + 0x120) = uStack_248;
                uVar2 = uStack_188;
              }
            }
            goto code_r0x014a4f88;
          }
code_r0x014a4fc4:
          func_0x00f78af4();
        }
        else {
          uVar2 = (int)unaff_x26 - 1;
          uVar18 = uVar2;
          if ((aiStack_198[(int)uVar2] == 200) ||
             (uVar18 = uStack_188, aiStack_198[(int)uVar2] != 0x188)) goto code_r0x014a4e1c;
code_r0x014a4f88:
          uStack_188 = uVar2;
          if (*(long *)PTR_03a5d648 == lStack_128) {
            return;
          }
        }
        ___stack_chk_fail();
        if (extraout_w1_00 != 1) {
          __Unwind_Resume();
          break;
        }
        plVar6 = (long *)___cxa_begin_catch();
        lVar19 = *plVar6;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_180,uRam0000000003d32b00);
      } while (lVar19 == 0);
      puVar21 = &Atlas_Networking_NetworkHostSession__UpdateFinish;
      auVar22 = func_0x00f78ac0(lVar19,0);
    }
    else {
      auVar22._8_8_ = *(undefined8 *)(lVar5 + 0x1d0);
      auVar22._0_8_ = lVar5;
      uStack_208 = param_5[1];
      uStack_210 = *param_5;
      uStack_200 = param_5[2];
      puVar11 = &uStack_210;
      puVar21 = &UNK_014a4db4;
      puVar13 = param_4;
    }
  }
  else {
    auVar22._8_8_ = *(undefined8 *)(lVar5 + 0x70);
    auVar22._0_8_ = lVar5;
    uStack_1e8 = param_5[1];
    uStack_1f0 = *param_5;
    uStack_1e0 = param_5[2];
    puVar11 = &uStack_1f0;
    puVar21 = &UNK_014a4cf4;
    puVar13 = param_4;
  }
  lVar16 = auVar22._8_8_;
  lStack_2b8 = *(long *)PTR_03a5d648;
  uVar4 = 0x3eb4000;
  piVar10 = piVar9;
  puVar12 = puVar11;
  puVar14 = puVar13;
  uStack_2b0 = unaff_x26;
  pcStack_2a8 = pcVar20;
  lStack_2a0 = lVar19;
  puStack_298 = param_5;
  piStack_290 = param_3;
  puStack_288 = param_4;
  puStack_280 = puVar17;
  lStack_278 = lVar5;
  ppuStack_270 = &puStack_c0;
  puStack_268 = puVar21;
  if ((bRam0000000003eb4a47 & 1) == 0) {
    func_0x00f78a20(0x3d29f30);
    func_0x00f78a20(0x3d3b448);
    func_0x00f78a20(0x3d3b450);
    func_0x00f78a20(0x3d3b458);
    bRam0000000003eb4a47 = 1;
  }
  if (lVar16 == 0) {
code_r0x014a51e8:
    func_0x00f78af4();
  }
  else {
    uVar2 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      pcVar20 = segment_command_00000020.segname;
      do {
        uVar18 = (uint)uVar4;
        if (uVar2 <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar19 = *(long *)(lVar16 + 0x10) + (long)(int)uVar18 * 0x28;
        uStack_2d8 = (undefined4)*(undefined8 *)(lVar19 + 0x2c);
        uStack_2d4 = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x2c) >> 0x20);
        uStack_2e0 = (undefined4)*(undefined8 *)(lVar19 + 0x24);
        uStack_2dc = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20);
        uStack_2c8 = (undefined4)*(undefined8 *)(lVar19 + 0x3c);
        uStack_2c4 = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x3c) >> 0x20);
        uStack_2d0 = (undefined4)*(undefined8 *)(lVar19 + 0x34);
        uStack_2cc = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x34) >> 0x20);
        if (*(int *)(lVar19 + 0x20) == (int)piVar9) {
          uStack_2d4 = (undefined4)puVar11[1];
          uStack_2d0 = (undefined4)((ulong)puVar11[1] >> 0x20);
          uStack_2dc = (undefined4)*puVar11;
          uStack_2d8 = (undefined4)((ulong)*puVar11 >> 0x20);
          uStack_2cc = (undefined4)puVar11[2];
          uStack_2c8 = (undefined4)((ulong)puVar11[2] >> 0x20);
          uStack_30c = *(undefined2 *)(lVar19 + 0x45);
          uStack_30a = *(undefined1 *)(lVar19 + 0x47);
          uStack_2fc = CONCAT44(uStack_2d4,uStack_2d8);
          uStack_304 = CONCAT44(uStack_2dc,uStack_2e0);
          uStack_2ec = CONCAT44(uStack_2c4,uStack_2c8);
          uStack_2f4 = CONCAT44(uStack_2cc,uStack_2d0);
          uStack_2e4 = SUB81(puVar13,0);
          piVar10 = &iStack_308;
          puVar12 = puRam0000000003d3b458;
          iStack_308 = (int)piVar9;
          uStack_2e3 = uStack_30c;
          uStack_2e1 = uStack_30a;
          /*System.Collections.Generic.List<NetworkEventStanding>$$set_Item*/ func_0x02407fc4(lVar16,uVar4);
          lVar19 = *(long *)(auVar22._0_8_ + 0x10);
          if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x78), lVar19 == 0))
          goto code_r0x014a51e8;
          piVar10 = piRam0000000003d29f30;
          /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(lVar19,lVar16);
          break;
        }
        uVar4 = (ulong)(uVar18 + 1);
        uVar2 = *(uint *)(lVar16 + 0x18);
      } while ((int)(uVar18 + 1) < (int)uVar2);
    }
    if (*(long *)PTR_03a5d648 == lStack_2b8) {
      return;
    }
  }
  auVar23 = ___stack_chk_fail();
  puVar17 = auVar23._8_8_;
  lVar19 = auVar23._0_8_;
  puStack_318 = &Atlas_Networking_NetworkHostSession__SetVoteOptions;
  uStack_360 = unaff_x26;
  pcStack_358 = pcVar20;
  uStack_350 = uVar4;
  puStack_348 = puVar11;
  piStack_340 = piVar9;
  puStack_338 = puVar13;
  pppuStack_320 = &ppuStack_270;
  auStack_330 = auVar22;
  if ((bRam0000000003eb4a48 & 1) == 0) {
    func_0x00f78a20(0x3d2a240);
    func_0x00f78a20(0x3d3b6b0);
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a48 = 1;
  }
  if (*(char *)(lVar19 + 0xf0) == '\0') {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_3b8,lVar19,0);
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_3e8 = uStack_3b0;
    uStack_3f0 = uStack_3b8;
    uStack_3e0 = uStack_3a8;
    /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_3d0,&uStack_3f0,param_6,0);
    uStack_398 = uStack_3c8;
    uStack_3a0 = uStack_3d0;
    uStack_390 = uStack_3c0;
    *(undefined1 *)(lVar19 + 0xf0) = 1;
    *(undefined8 *)(lVar19 + 0x100) = uStack_3c8;
    *(undefined8 *)(lVar19 + 0xf8) = uStack_3d0;
    *(undefined8 *)(lVar19 + 0x108) = uStack_3c0;
    uStack_408 = uStack_3c8;
    uStack_410 = uStack_3d0;
    uStack_400 = uStack_3c0;
    uStack_378 = 0;
    uStack_376 = 0;
    uStack_374 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_36c = 0;
    puVar11 = &uStack_410;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_380,3,puVar11,0);
    *(ulong *)(lVar19 + 0x88) = CONCAT44(uStack_374,CONCAT22(uStack_376,uStack_378));
    *(undefined8 *)(lVar19 + 0x80) = uStack_380;
    *(undefined8 *)(lVar19 + 0x98) = uStack_368;
    *(ulong *)(lVar19 + 0x90) = CONCAT44(uStack_36c,uStack_370);
    if (*(long *)(lVar19 + 0x18) != 0) {
      uStack_428 = uStack_398;
      uStack_430 = uStack_3a0;
      uStack_420 = uStack_390;
      puVar11 = puVar17;
      /*Core.Networking.NetworkServicesOutput$$WriteStartVoting*/ func_0x0165b768(*(long *)(lVar19 + 0x18),*(undefined8 *)(lVar19 + 0x30),puVar17,piVar10,
                      puVar12,puVar14,&uStack_430,0);
    }
    lVar5 = *(long *)(lVar19 + 0xd0);
    if (lVar5 != 0) {
      uStack_380 = CONCAT26((short)piVar10,CONCAT24(auVar23._8_2_,*(undefined4 *)(lVar5 + 0x18)));
      uStack_374 = 0;
      uStack_370 = 0;
      uStack_36c = 0;
      puVar11 = puRam0000000003d3b6b0;
      uStack_378 = (short)puVar12;
      uStack_376 = (short)puVar14;
      /*System.Collections.Generic.List<NetworkVoteHistory>$$Add*/ func_0x02424534(lVar5,&uStack_380);
      if ((*(long *)(lVar19 + 0x10) != 0) &&
         (lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + 0x40), lVar19 != 0)) {
        uStack_380 = CONCAT26((short)puVar14,
                              CONCAT24((short)puVar12,CONCAT22((short)piVar10,auVar23._8_2_)));
        uStack_370 = (undefined4)uStack_398;
        uStack_36c = (undefined4)((ulong)uStack_398 >> 0x20);
        uStack_378 = (undefined2)uStack_3a0;
        uStack_376 = (undefined2)((ulong)uStack_3a0 >> 0x10);
        uStack_374 = (undefined4)((ulong)uStack_3a0 >> 0x20);
        uStack_368 = uStack_390;
        /*System.Action<NetworkVoteStart>$$Invoke*/ func_0x01e47bc8(lVar19,&uStack_380,uRam0000000003d2a240);
        return;
      }
    }
    auVar22 = func_0x00f78af4();
    uVar4 = auVar22._8_8_;
    lVar19 = auVar22._0_8_;
    puStack_438 = &Atlas_Networking_NetworkHostSession__SetVoteResult;
    puStack_460 = puVar17;
    piStack_458 = piVar10;
    puStack_450 = puVar12;
    puStack_448 = puVar14;
    ppppuStack_440 = &pppuStack_320;
    if ((bRam0000000003eb4a49 & 1) == 0) {
      func_0x00f78a20(0x3d2a230);
      func_0x00f78a20(0x3d3b6c0);
      func_0x00f78a20(0x3d3b6c8);
      func_0x00f78a20(0x3d3b6d0);
      bRam0000000003eb4a49 = 1;
    }
    if (*(long *)(lVar19 + 0x18) != 0) {
      /*Core.Networking.NetworkServicesOutput$$WriteVoteResult*/ func_0x0165b834(*(long *)(lVar19 + 0x18),*(undefined8 *)(lVar19 + 0x30),uVar4,puVar11,0);
    }
    lVar5 = *(long *)(lVar19 + 0xd0);
    if (lVar5 != 0) {
      uVar8 = (ulong)(*(int *)(lVar5 + 0x18) - 1);
      if (0 < *(int *)(lVar5 + 0x18)) {
        lVar16 = *(long *)(lVar5 + 0x10) + uVar8 * 0x18;
        uStack_4a0 = *(undefined8 *)(lVar16 + 0x30);
        uStack_4b0 = *(undefined8 *)(lVar16 + 0x20);
        uStack_468 = *(undefined4 *)(lVar16 + 0x28);
        uStack_4a8 = CONCAT26((short)puVar11,CONCAT24(auVar22._8_2_,uStack_468));
        uStack_470 = uStack_4b0;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$set_Item*/ func_0x024241ac(lVar5,uVar8,&uStack_4b0,uRam0000000003d3b6d0);
      }
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_488,lVar19,0);
      uStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_4c8 = uStack_480;
      uStack_4d0 = uStack_488;
      uStack_4c0 = uStack_478;
      /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_4b0,4,&uStack_4d0,0);
      *(undefined8 *)(lVar19 + 0x88) = uStack_4a8;
      *(undefined8 *)(lVar19 + 0x80) = uStack_4b0;
      *(undefined8 *)(lVar19 + 0x98) = uStack_498;
      *(undefined8 *)(lVar19 + 0x90) = uStack_4a0;
      if ((*(long *)(lVar19 + 0x10) != 0) &&
         (lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + 0x58), lVar19 != 0)) {
        /*System.Action<NetworkVoteResult>$$Invoke*/ func_0x01e4787c(lVar19,uVar4 & 0xffff | ((ulong)puVar11 & 0xffff) << 0x10,
                        uRam0000000003d2a230);
        return;
      }
    }
    uVar7 = func_0x00f78af4();
    puStack_4d8 = &Atlas_Networking_NetworkHostSession__RequestResultsFinished;
    puStack_4f0 = puVar11;
    uStack_4e8 = uVar4;
    pppppuStack_4e0 = &ppppuStack_440;
    /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_510,uVar7,0);
    /*Atlas.Networking.NetworkHostSession$$AddAndCheckResultsDone*/ func_0x014a5590(uVar7,uStack_504);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x14a4b84 | Atlas.Networking.NetworkHostSession.RequestOwnedPlayerFinished
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a5050 | Atlas.Networking.NetworkHostSession.UpdateFinish
// ============================================================

void Atlas_Networking_NetworkHostSession__UpdateFinish
               (long param_1,long param_2,int *param_3,undefined8 *param_4,undefined8 param_5,
               undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_2b0 [12];
  undefined4 uStack_2a4;
  undefined8 *puStack_290;
  ulong uStack_288;
  undefined1 ***pppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 *puStack_200;
  int *piStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  int iStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined1 uStack_84;
  undefined2 uStack_83;
  undefined1 uStack_81;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long lStack_58;
  
  lStack_58 = *(long *)PTR_03a5d648;
  piVar7 = param_3;
  puVar9 = param_4;
  uVar3 = param_5;
  if ((bRam0000000003eb4a47 & 1) == 0) {
    func_0x00f78a20(0x3d29f30);
    func_0x00f78a20(0x3d3b448);
    func_0x00f78a20(0x3d3b450);
    func_0x00f78a20(0x3d3b458);
    bRam0000000003eb4a47 = 1;
  }
  if (param_2 == 0) {
LAB_014a51e8:
    func_0x00f78af4();
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar10 = *(long *)(param_2 + 0x10) + (long)(int)uVar12 * 0x28;
        uStack_78 = (undefined4)*(undefined8 *)(lVar10 + 0x2c);
        uStack_74 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x2c) >> 0x20);
        uStack_80 = (undefined4)*(undefined8 *)(lVar10 + 0x24);
        uStack_7c = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x24) >> 0x20);
        uStack_68 = (undefined4)*(undefined8 *)(lVar10 + 0x3c);
        uStack_64 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x3c) >> 0x20);
        uStack_70 = (undefined4)*(undefined8 *)(lVar10 + 0x34);
        uStack_6c = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x34) >> 0x20);
        if (*(int *)(lVar10 + 0x20) == (int)param_3) {
          uStack_74 = (undefined4)param_4[1];
          uStack_70 = (undefined4)((ulong)param_4[1] >> 0x20);
          uStack_7c = (undefined4)*param_4;
          uStack_78 = (undefined4)((ulong)*param_4 >> 0x20);
          uStack_6c = (undefined4)param_4[2];
          uStack_68 = (undefined4)((ulong)param_4[2] >> 0x20);
          uStack_ac = *(undefined2 *)(lVar10 + 0x45);
          uStack_aa = *(undefined1 *)(lVar10 + 0x47);
          uStack_9c = CONCAT44(uStack_74,uStack_78);
          uStack_a4 = CONCAT44(uStack_7c,uStack_80);
          uStack_8c = CONCAT44(uStack_64,uStack_68);
          uStack_94 = CONCAT44(uStack_6c,uStack_70);
          uStack_84 = (undefined1)param_5;
          piVar7 = &iStack_a8;
          puVar9 = puRam0000000003d3b458;
          iStack_a8 = (int)param_3;
          uStack_83 = uStack_ac;
          uStack_81 = uStack_aa;
          /*System.Collections.Generic.List<NetworkEventStanding>$$set_Item*/ func_0x02407fc4(param_2,uVar12);
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x78), lVar10 == 0)) goto LAB_014a51e8;
          piVar7 = piRam0000000003d29f30;
          /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(lVar10,param_2);
          break;
        }
        uVar12 = uVar12 + 1;
        uVar1 = *(uint *)(param_2 + 0x18);
      } while ((int)uVar12 < (int)uVar1);
    }
    if (*(long *)PTR_03a5d648 == lStack_58) {
      return;
    }
  }
  auVar13 = ___stack_chk_fail();
  puVar4 = auVar13._8_8_;
  lVar10 = auVar13._0_8_;
  puStack_b8 = &Atlas_Networking_NetworkHostSession__SetVoteOptions;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a48 & 1) == 0) {
    func_0x00f78a20(0x3d2a240);
    func_0x00f78a20(0x3d3b6b0);
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a48 = 1;
  }
  if (*(char *)(lVar10 + 0xf0) == '\0') {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_158,lVar10,0);
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_188 = uStack_150;
    uStack_190 = uStack_158;
    uStack_180 = uStack_148;
    /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_170,&uStack_190,param_6,0);
    uStack_138 = uStack_168;
    uStack_140 = uStack_170;
    uStack_130 = uStack_160;
    *(undefined1 *)(lVar10 + 0xf0) = 1;
    *(undefined8 *)(lVar10 + 0x100) = uStack_168;
    *(undefined8 *)(lVar10 + 0xf8) = uStack_170;
    *(undefined8 *)(lVar10 + 0x108) = uStack_160;
    uStack_1a8 = uStack_168;
    uStack_1b0 = uStack_170;
    uStack_1a0 = uStack_160;
    uStack_118 = 0;
    uStack_116 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    puVar8 = &uStack_1b0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_120,3,puVar8,0);
    *(ulong *)(lVar10 + 0x88) = CONCAT44(uStack_114,CONCAT22(uStack_116,uStack_118));
    *(undefined8 *)(lVar10 + 0x80) = uStack_120;
    *(undefined8 *)(lVar10 + 0x98) = uStack_108;
    *(ulong *)(lVar10 + 0x90) = CONCAT44(uStack_10c,uStack_110);
    if (*(long *)(lVar10 + 0x18) != 0) {
      uStack_1c8 = uStack_138;
      uStack_1d0 = uStack_140;
      uStack_1c0 = uStack_130;
      puVar8 = puVar4;
      /*Core.Networking.NetworkServicesOutput$$WriteStartVoting*/ func_0x0165b768(*(long *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x30),puVar4,piVar7,puVar9,
                      uVar3,&uStack_1d0,0);
    }
    lVar2 = *(long *)(lVar10 + 0xd0);
    if (lVar2 != 0) {
      uStack_120 = CONCAT26((short)piVar7,CONCAT24(auVar13._8_2_,*(undefined4 *)(lVar2 + 0x18)));
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      puVar8 = puRam0000000003d3b6b0;
      uStack_118 = (short)puVar9;
      uStack_116 = (short)uVar3;
      /*System.Collections.Generic.List<NetworkVoteHistory>$$Add*/ func_0x02424534(lVar2,&uStack_120);
      if ((*(long *)(lVar10 + 0x10) != 0) &&
         (lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x40), lVar10 != 0)) {
        uStack_120 = CONCAT26((short)uVar3,
                              CONCAT24((short)puVar9,CONCAT22((short)piVar7,auVar13._8_2_)));
        uStack_110 = (undefined4)uStack_138;
        uStack_10c = (undefined4)((ulong)uStack_138 >> 0x20);
        uStack_118 = (undefined2)uStack_140;
        uStack_116 = (undefined2)((ulong)uStack_140 >> 0x10);
        uStack_114 = (undefined4)((ulong)uStack_140 >> 0x20);
        uStack_108 = uStack_130;
        /*System.Action<NetworkVoteStart>$$Invoke*/ func_0x01e47bc8(lVar10,&uStack_120,uRam0000000003d2a240);
        return;
      }
    }
    auVar13 = func_0x00f78af4();
    uVar5 = auVar13._8_8_;
    lVar10 = auVar13._0_8_;
    puStack_1d8 = &Atlas_Networking_NetworkHostSession__SetVoteResult;
    puStack_200 = puVar4;
    piStack_1f8 = piVar7;
    puStack_1f0 = puVar9;
    uStack_1e8 = uVar3;
    ppuStack_1e0 = &puStack_c0;
    if ((bRam0000000003eb4a49 & 1) == 0) {
      func_0x00f78a20(0x3d2a230);
      func_0x00f78a20(0x3d3b6c0);
      func_0x00f78a20(0x3d3b6c8);
      func_0x00f78a20(0x3d3b6d0);
      bRam0000000003eb4a49 = 1;
    }
    if (*(long *)(lVar10 + 0x18) != 0) {
      /*Core.Networking.NetworkServicesOutput$$WriteVoteResult*/ func_0x0165b834(*(long *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x30),uVar5,puVar8,0);
    }
    lVar2 = *(long *)(lVar10 + 0xd0);
    if (lVar2 != 0) {
      uVar6 = (ulong)(*(int *)(lVar2 + 0x18) - 1);
      if (0 < *(int *)(lVar2 + 0x18)) {
        lVar11 = *(long *)(lVar2 + 0x10) + uVar6 * 0x18;
        uStack_240 = *(undefined8 *)(lVar11 + 0x30);
        uStack_250 = *(undefined8 *)(lVar11 + 0x20);
        uStack_208 = *(undefined4 *)(lVar11 + 0x28);
        uStack_248 = CONCAT26((short)puVar8,CONCAT24(auVar13._8_2_,uStack_208));
        uStack_210 = uStack_250;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$set_Item*/ func_0x024241ac(lVar2,uVar6,&uStack_250,uRam0000000003d3b6d0);
      }
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_228,lVar10,0);
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_268 = uStack_220;
      uStack_270 = uStack_228;
      uStack_260 = uStack_218;
      /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_250,4,&uStack_270,0);
      *(undefined8 *)(lVar10 + 0x88) = uStack_248;
      *(undefined8 *)(lVar10 + 0x80) = uStack_250;
      *(undefined8 *)(lVar10 + 0x98) = uStack_238;
      *(undefined8 *)(lVar10 + 0x90) = uStack_240;
      if ((*(long *)(lVar10 + 0x10) != 0) &&
         (lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x58), lVar10 != 0)) {
        /*System.Action<NetworkVoteResult>$$Invoke*/ func_0x01e4787c(lVar10,uVar5 & 0xffff | ((ulong)puVar8 & 0xffff) << 0x10,
                        uRam0000000003d2a230);
        return;
      }
    }
    uVar3 = func_0x00f78af4();
    puStack_278 = &Atlas_Networking_NetworkHostSession__RequestResultsFinished;
    puStack_290 = puVar8;
    uStack_288 = uVar5;
    pppuStack_280 = &ppuStack_1e0;
    /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_2b0,uVar3,0);
    /*Atlas.Networking.NetworkHostSession$$AddAndCheckResultsDone*/ func_0x014a5590(uVar3,uStack_2a4);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x14a51f0 | Atlas.Networking.NetworkHostSession.SetVoteOptions
// ============================================================

void Atlas_Networking_NetworkHostSession__SetVoteOptions
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_200 [12];
  undefined4 uStack_1f4;
  undefined8 *puStack_1e0;
  ulong uStack_1d8;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4a48 & 1) == 0) {
    func_0x00f78a20(0x3d2a240);
    func_0x00f78a20(0x3d3b6b0);
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a48 = 1;
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    return;
  }
  /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_a8,param_1,0);
  if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_d8 = uStack_a0;
  uStack_e0 = uStack_a8;
  uStack_d0 = uStack_98;
  /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_c0,&uStack_e0,param_6,0);
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_80 = uStack_b0;
  *(undefined1 *)(param_1 + 0xf0) = 1;
  *(undefined8 *)(param_1 + 0x100) = uStack_b8;
  *(undefined8 *)(param_1 + 0xf8) = uStack_c0;
  *(undefined8 *)(param_1 + 0x108) = uStack_b0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  uStack_f0 = uStack_b0;
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  puVar6 = &uStack_100;
  /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_70,3,puVar6,0);
  *(ulong *)(param_1 + 0x88) = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
  *(undefined8 *)(param_1 + 0x80) = uStack_70;
  *(undefined8 *)(param_1 + 0x98) = uStack_58;
  *(ulong *)(param_1 + 0x90) = CONCAT44(uStack_5c,uStack_60);
  if (*(long *)(param_1 + 0x18) != 0) {
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_110 = uStack_80;
    puVar6 = param_2;
    /*Core.Networking.NetworkServicesOutput$$WriteStartVoting*/ func_0x0165b768(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),param_2,param_3,
                    param_4,param_5,&uStack_120,0);
  }
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    uStack_70 = CONCAT26((short)param_3,CONCAT24((short)param_2,*(undefined4 *)(lVar1 + 0x18)));
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    puVar6 = puRam0000000003d3b6b0;
    uStack_68 = (short)param_4;
    uStack_66 = (short)param_5;
    /*System.Collections.Generic.List<NetworkVoteHistory>$$Add*/ func_0x02424534(lVar1,&uStack_70);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar1 != 0)) {
      uStack_70 = CONCAT26((short)param_5,
                           CONCAT24((short)param_4,CONCAT22((short)param_3,(short)param_2)));
      uStack_60 = (undefined4)uStack_88;
      uStack_5c = (undefined4)((ulong)uStack_88 >> 0x20);
      uStack_68 = (undefined2)uStack_90;
      uStack_66 = (undefined2)((ulong)uStack_90 >> 0x10);
      uStack_64 = (undefined4)((ulong)uStack_90 >> 0x20);
      uStack_58 = uStack_80;
      /*System.Action<NetworkVoteStart>$$Invoke*/ func_0x01e47bc8(lVar1,&uStack_70,uRam0000000003d2a240);
      return;
    }
  }
  auVar8 = func_0x00f78af4();
  uVar4 = auVar8._8_8_;
  lVar1 = auVar8._0_8_;
  puStack_128 = &Atlas_Networking_NetworkHostSession__SetVoteResult;
  puStack_150 = param_2;
  uStack_148 = param_3;
  uStack_140 = param_4;
  uStack_138 = param_5;
  puStack_130 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a49 & 1) == 0) {
    func_0x00f78a20(0x3d2a230);
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d3b6c8);
    func_0x00f78a20(0x3d3b6d0);
    bRam0000000003eb4a49 = 1;
  }
  if (*(long *)(lVar1 + 0x18) != 0) {
    /*Core.Networking.NetworkServicesOutput$$WriteVoteResult*/ func_0x0165b834(*(long *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x30),uVar4,puVar6,0);
  }
  lVar2 = *(long *)(lVar1 + 0xd0);
  if (lVar2 != 0) {
    uVar5 = (ulong)(*(int *)(lVar2 + 0x18) - 1);
    if (0 < *(int *)(lVar2 + 0x18)) {
      lVar7 = *(long *)(lVar2 + 0x10) + uVar5 * 0x18;
      uStack_190 = *(undefined8 *)(lVar7 + 0x30);
      uStack_1a0 = *(undefined8 *)(lVar7 + 0x20);
      uStack_158 = *(undefined4 *)(lVar7 + 0x28);
      uStack_198 = CONCAT26((short)puVar6,CONCAT24(auVar8._8_2_,uStack_158));
      uStack_160 = uStack_1a0;
      /*System.Collections.Generic.List<NetworkVoteHistory>$$set_Item*/ func_0x024241ac(lVar2,uVar5,&uStack_1a0,uRam0000000003d3b6d0);
    }
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_178,lVar1,0);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = uStack_170;
    uStack_1c0 = uStack_178;
    uStack_1b0 = uStack_168;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_1a0,4,&uStack_1c0,0);
    *(undefined8 *)(lVar1 + 0x88) = uStack_198;
    *(undefined8 *)(lVar1 + 0x80) = uStack_1a0;
    *(undefined8 *)(lVar1 + 0x98) = uStack_188;
    *(undefined8 *)(lVar1 + 0x90) = uStack_190;
    if ((*(long *)(lVar1 + 0x10) != 0) &&
       (lVar1 = *(long *)(*(long *)(lVar1 + 0x10) + 0x58), lVar1 != 0)) {
      /*System.Action<NetworkVoteResult>$$Invoke*/ func_0x01e4787c(lVar1,uVar4 & 0xffff | ((ulong)puVar6 & 0xffff) << 0x10,uRam0000000003d2a230);
      return;
    }
  }
  uVar3 = func_0x00f78af4();
  puStack_1c8 = &Atlas_Networking_NetworkHostSession__RequestResultsFinished;
  puStack_1e0 = puVar6;
  uStack_1d8 = uVar4;
  ppuStack_1d0 = &puStack_130;
  /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_200,uVar3,0);
  /*Atlas.Networking.NetworkHostSession$$AddAndCheckResultsDone*/ func_0x014a5590(uVar3,uStack_1f4);
  return;
}



// ============================================================
// RVA: 0x14a53f0 | Atlas.Networking.NetworkHostSession.SetVoteResult
// ============================================================

void Atlas_Networking_NetworkHostSession__SetVoteResult(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_e0 [12];
  undefined4 uStack_d4;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000003eb4a49 & 1) == 0) {
    func_0x00f78a20(0x3d2a230);
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d3b6c8);
    func_0x00f78a20(0x3d3b6d0);
    bRam0000000003eb4a49 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    /*Core.Networking.NetworkServicesOutput$$WriteVoteResult*/ func_0x0165b834(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),param_2,param_3,0);
  }
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    uVar3 = (ulong)(*(int *)(lVar1 + 0x18) - 1);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar4 = *(long *)(lVar1 + 0x10) + uVar3 * 0x18;
      uStack_70 = *(undefined8 *)(lVar4 + 0x30);
      uStack_80 = *(undefined8 *)(lVar4 + 0x20);
      uStack_38 = *(undefined4 *)(lVar4 + 0x28);
      uStack_78 = CONCAT26((short)param_3,CONCAT24((short)param_2,uStack_38));
      uStack_40 = uStack_80;
      /*System.Collections.Generic.List<NetworkVoteHistory>$$set_Item*/ func_0x024241ac(lVar1,uVar3,&uStack_80,uRam0000000003d3b6d0);
    }
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_58,param_1,0);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = uStack_50;
    uStack_a0 = uStack_58;
    uStack_90 = uStack_48;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_80,4,&uStack_a0,0);
    *(undefined8 *)(param_1 + 0x88) = uStack_78;
    *(undefined8 *)(param_1 + 0x80) = uStack_80;
    *(undefined8 *)(param_1 + 0x98) = uStack_68;
    *(undefined8 *)(param_1 + 0x90) = uStack_70;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x58), lVar1 != 0)) {
      /*System.Action<NetworkVoteResult>$$Invoke*/ func_0x01e4787c(lVar1,param_2 & 0xffff | (param_3 & 0xffff) << 0x10,uRam0000000003d2a230);
      return;
    }
  }
  uVar2 = func_0x00f78af4();
  puStack_a8 = &Atlas_Networking_NetworkHostSession__RequestResultsFinished;
  uStack_c0 = param_3;
  uStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_e0,uVar2,0);
  /*Atlas.Networking.NetworkHostSession$$AddAndCheckResultsDone*/ func_0x014a5590(uVar2,uStack_d4);
  return;
}



// ============================================================
// RVA: 0x14a5554 | Atlas.Networking.NetworkHostSession.RequestResultsFinished
// ============================================================

void Atlas_Networking_NetworkHostSession__RequestResultsFinished(undefined8 param_1)

{
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  
  /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_40,param_1,0);
  /*Atlas.Networking.NetworkHostSession$$AddAndCheckResultsDone*/ func_0x014a5590(param_1,uStack_34);
  return;
}



// ============================================================
// RVA: 0x14a5590 | Atlas.Networking.NetworkHostSession.AddAndCheckResultsDone
// ============================================================

/* WARNING: Possible PIC construction at 0x014a5698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014a57b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014a5cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014a57bc) */
/* WARNING: Removing unreachable block (ram,0x014a5cc4) */
/* WARNING: Removing unreachable block (ram,0x014a6460) */
/* WARNING: Removing unreachable block (ram,0x014a5c30) */

void Atlas_Networking_NetworkHostSession__AddAndCheckResultsDone
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong unaff_x22;
  uint uVar17;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 *unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_280 [16];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_220;
  undefined8 *puStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 **ppuStack_200;
  undefined *puStack_1f8;
  int iStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
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
  int aiStack_140 [4];
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
  undefined1 *puStack_80;
  undefined *puStack_78;
  int iStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar15 = (long *)0x3eb4000;
  if ((bRam0000000003eb4a4c & 1) == 0) {
    func_0x00f78a20(0x3d33108);
    func_0x00f78a20(0x3d33110);
    func_0x00f78a20(0x3d33118);
    func_0x00f78a20(0x3d3c6c0);
    func_0x00f78a20(0x3d3c6d0);
    bRam0000000003eb4a4c = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_80 = &stack0xfffffffffffffff0;
  if (param_1[0x39] == 0) goto LAB_014a56b4;
  unaff_x23 = 0x3d33110;
  plVar15 = (long *)0x3d3c6c0;
  unaff_x22 = 0x3d33108;
  /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc(&uStack_58,param_1[0x39],uRam0000000003d3c6d0);
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec(&uStack_58,uRam0000000003d33110);
    if ((uVar5 & 1) == 0) {
      iStack_68 = 0x33;
      goto LAB_014a5664;
    }
  } while ((int)uStack_48 != (int)param_2);
  iStack_68 = 0x45;
LAB_014a5664:
  /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8(&uStack_58,uRam0000000003d33108);
  if (iStack_68 == 0x45) {
    return;
  }
  while (param_1[0x39] == 0) {
LAB_014a56b4:
    auVar20 = func_0x00f78af4();
    if (auVar20._8_4_ != 1) {
      uVar5 = __Unwind_Resume();
      puStack_78 = &Atlas_Networking_NetworkHostSession__SendHostMigrationState;
      ppuVar18 = &puStack_80;
      uVar14 = 0x3eb4000;
      if ((bRam0000000003eb4a4a & 1) == 0) {
        func_0x00f78a20(0x3d2a210);
        func_0x00f78a20(0x3d3c6c0);
        bRam0000000003eb4a4a = 1;
      }
      if (*(long *)(uVar5 + 0x18) == 0) {
code_r0x014a5740:
        if (((*(long *)(uVar5 + 0x10) != 0) && (lVar12 = *(long *)(uVar5 + 0xa0), lVar12 != 0)) &&
           (lVar6 = *(long *)(*(long *)(uVar5 + 0x10) + 0x98), lVar6 != 0)) {
          uVar10 = *(undefined8 *)(lVar12 + 0x18);
          uStack_120 = *(undefined8 *)(lVar12 + 0x10);
          uStack_108 = *(undefined8 *)(lVar12 + 0x28);
          uStack_110 = *(undefined8 *)(lVar12 + 0x20);
          uStack_100 = *(undefined8 *)(lVar12 + 0x30);
          uStack_118 = uVar10;
          /*System.Action<NetworkMigrationState>$$Invoke*/ func_0x01e45b38(lVar6,&stack0xffffffffffffff40,uRam0000000003d2a210);
          uVar14 = *(ulong *)(uVar5 + 0x1d8);
          /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&stack0xffffffffffffff40,uVar5,0);
          if (uVar14 != 0) {
            /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(uVar14,(int)((ulong)uVar10 >> 0x20),uRam0000000003d3c6c0);
            puVar19 = &UNK_014a57bc;
            puVar16 = &uStack_120;
            uVar7 = uVar5;
code_r0x014a57d0:
            do {
              *(undefined8 *)((long)puVar16 + -0x60) = unaff_x28;
              *(ulong *)((long)puVar16 + -0x58) = unaff_x27;
              *(undefined8 **)((long)puVar16 + -0x50) = unaff_x26;
              *(undefined1 **)((long)puVar16 + -0x48) = unaff_x25;
              *(undefined8 **)((long)puVar16 + -0x40) = unaff_x24;
              *(ulong *)((long)puVar16 + -0x38) = unaff_x23;
              *(ulong *)((long)puVar16 + -0x30) = unaff_x22;
              *(long **)((long)puVar16 + -0x28) = plVar15;
              *(ulong *)((long)puVar16 + -0x20) = uVar14;
              *(ulong *)((long)puVar16 + -0x18) = uVar5;
              *(undefined1 ***)((long)puVar16 + -0x10) = ppuVar18;
              *(undefined **)((long)puVar16 + -8) = puVar19;
              puVar11 = (undefined8 *)0x3eb4000;
              if ((bRam0000000003eb4a52 & 1) == 0) {
                func_0x00f78a20(0x3d2a4b0);
                func_0x00f78a20(0x3d32b60);
                func_0x00f78a20(0x3d33108);
                func_0x00f78a20(0x3d32b68);
                func_0x00f78a20(0x3d33110);
                func_0x00f78a20(0x3d33118);
                func_0x00f78a20(0x3d32b70);
                func_0x00f78a20(0x3d3c6c8);
                func_0x00f78a20(0x3d3c6d0);
                func_0x00f78a20(0x3d3b530);
                func_0x00f78a20(0x3d237b8);
                bRam0000000003eb4a52 = 1;
              }
              *(undefined8 *)((long)puVar16 + -0x88) = 0;
              *(undefined8 *)((long)puVar16 + -0x90) = 0;
              *(undefined8 *)((long)puVar16 + -0x78) = 0;
              *(undefined8 *)((long)puVar16 + -0x80) = 0;
              *(undefined8 *)((long)puVar16 + -0x98) = 0;
              *(undefined8 *)((long)puVar16 + -0xa0) = 0;
              *(undefined8 *)((long)puVar16 + -0xc0) = 0;
              *(undefined8 *)((long)puVar16 + -0xb8) = 0;
              *(undefined8 *)((long)puVar16 + -0xb0) = 0;
              *(undefined8 *)((long)puVar16 + -0xd8) = 0;
              *(undefined8 *)((long)puVar16 + -0xd0) = 0;
              *(undefined8 *)((long)puVar16 + -200) = 0;
              *(undefined8 *)((long)puVar16 + -0xf0) = 0;
              *(undefined8 *)((long)puVar16 + -0xe8) = 0;
              *(undefined8 *)((long)puVar16 + -0xe0) = 0;
              *(undefined4 *)((long)puVar16 + -0xf8) = 0;
              uVar3 = /*Core.Networking.NetworkSession$$NumberOfRealPlayers*/ func_0x0165ec58(uVar7,0);
              *(undefined4 *)((long)puVar16 + -0x1d4) = uVar3;
              uVar14 = uVar7;
              if (*(long *)(uVar7 + 0x58) == 0) goto code_r0x014a5c40;
              unaff_x26 = (undefined8 *)0x3d32b68;
              unaff_x28 = 0x3d33110;
              /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620((undefined1 *)((long)puVar16 + -0x130),*(long *)(uVar7 + 0x58),
                              uRam0000000003d3b530);
              unaff_x23 = 0;
              *(undefined8 *)((long)puVar16 + -0x98) = *(undefined8 *)((long)puVar16 + -0x128);
              *(undefined8 *)((long)puVar16 + -0xa0) = *(undefined8 *)((long)puVar16 + -0x130);
              *(undefined8 *)((long)puVar16 + -0x88) = *(undefined8 *)((long)puVar16 + -0x118);
              *(undefined8 *)((long)puVar16 + -0x90) = *(undefined8 *)((long)puVar16 + -0x120);
              *(undefined8 *)((long)puVar16 + -0x78) = *(undefined8 *)((long)puVar16 + -0x108);
              *(undefined8 *)((long)puVar16 + -0x80) = *(undefined8 *)((long)puVar16 + -0x110);
              unaff_x25 = (undefined1 *)((long)puVar16 + -0x100);
              uVar14 = 0x5e;
              puVar11 = (undefined8 *)0x0;
              while( true ) {
                uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8((undefined1 *)((long)puVar16 + -0xa0),uRam0000000003d32b68);
                if ((uVar5 & 1) == 0) break;
                if (*(long *)(uVar7 + 0x1d8) == 0) {
                  func_0x00f78af4();
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x14a5c40);
                  (*pcVar2)();
                }
                iVar4 = *(int *)((long)puVar16 + -0x84);
                /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc((undefined1 *)((long)puVar16 + -0x130),*(long *)(uVar7 + 0x1d8),
                                uRam0000000003d3c6d0);
                *(undefined8 *)((long)puVar16 + -0xb8) = *(undefined8 *)((long)puVar16 + -0x128);
                *(undefined8 *)((long)puVar16 + -0xc0) = *(undefined8 *)((long)puVar16 + -0x130);
                *(undefined8 *)((long)puVar16 + -0xb0) = *(undefined8 *)((long)puVar16 + -0x120);
                while (uVar5 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec((undefined1 *)((long)puVar16 + -0xc0),
                                               uRam0000000003d33110), (uVar5 & 1) != 0) {
                  uVar17 = (uint)unaff_x23;
                  if (iVar4 == *(int *)((long)puVar16 + -0xb0)) {
                    uVar17 = uVar17 + 1;
                  }
                  unaff_x23 = (ulong)uVar17;
                }
                plVar15 = (long *)0x0;
                *(undefined4 *)(unaff_x25 + (long)(int)puVar11 * 4) = 0x5e;
                uVar1 = *(uint *)((long)puVar16 + -0xf8);
                uVar17 = uVar1 + 1;
                unaff_x24 = (undefined8 *)(ulong)uVar17;
                *(uint *)((long)puVar16 + -0xf8) = uVar17;
                /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8((undefined1 *)((long)puVar16 + -0xc0),uRam0000000003d33108);
                puVar11 = (undefined8 *)0x0;
                if ((uVar17 != 0) &&
                   (puVar11 = unaff_x24, *(int *)(unaff_x25 + (long)(int)uVar1 * 4) == 0x5e)) {
                  *(uint *)((long)puVar16 + -0xf8) = uVar1;
                  puVar11 = (undefined8 *)(ulong)uVar1;
                }
              }
              *(undefined4 *)((long)puVar16 + (long)(int)puVar11 * 4 + -0x100) = 0x77;
              unaff_x27 = (ulong)(*(int *)((long)puVar16 + -0xf8) + 1U);
              *(uint *)((long)puVar16 + -0xf8) = *(int *)((long)puVar16 + -0xf8) + 1U;
              /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4((undefined1 *)((long)puVar16 + -0xa0),uRam0000000003d32b60);
              unaff_x22 = uVar7;
              do {
                if (((int)unaff_x27 != 0) &&
                   (iVar4 = (int)unaff_x27 + -1,
                   *(int *)((long)puVar16 + (long)iVar4 * 4 + -0x100) == 0x77)) {
                  *(int *)((long)puVar16 + -0xf8) = iVar4;
                }
                if ((int)unaff_x23 != *(int *)((long)puVar16 + -0x1d4)) {
                  return;
                }
                /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)puVar16 + -0x130),unaff_x22,0);
                *(undefined8 *)((long)puVar16 + -0xe8) = *(undefined8 *)((long)puVar16 + -0x128);
                *(undefined8 *)((long)puVar16 + -0xf0) = *(undefined8 *)((long)puVar16 + -0x130);
                *(undefined8 *)((long)puVar16 + -0xe0) = *(undefined8 *)((long)puVar16 + -0x120);
                lVar12 = *(long *)(unaff_x22 + 0xa0);
                if (lVar12 != 0) {
                  *(undefined8 *)((long)puVar16 + -0x148) = *(undefined8 *)((long)puVar16 + -0x128);
                  *(undefined8 *)((long)puVar16 + -0x150) = *(undefined8 *)((long)puVar16 + -0x130);
                  *(undefined8 *)((long)puVar16 + -0x140) = *(undefined8 *)((long)puVar16 + -0x120);
                  iVar4 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(lVar12 + 0x38,(undefined1 *)((long)puVar16 + -0x150),0);
                  if (*(long *)(unaff_x22 + 0xa0) != 0) {
                    iVar13 = *(int *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
                    if ((iVar13 == 7) || (iVar13 == 4)) {
                      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      *(undefined8 *)((long)puVar16 + -0x168) =
                           *(undefined8 *)((long)puVar16 + -0xe8);
                      *(undefined8 *)((long)puVar16 + -0x170) =
                           *(undefined8 *)((long)puVar16 + -0xf0);
                      *(undefined8 *)((long)puVar16 + -0x160) =
                           *(undefined8 *)((long)puVar16 + -0xe0);
                      iVar13 = 3000;
                      puVar8 = (undefined1 *)((long)puVar16 + -0x170);
                      uVar10 = 3000;
                    }
                    else {
                      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      *(undefined8 *)((long)puVar16 + -0x188) =
                           *(undefined8 *)((long)puVar16 + -0xe8);
                      *(undefined8 *)((long)puVar16 + -400) = *(undefined8 *)((long)puVar16 + -0xf0)
                      ;
                      *(undefined8 *)((long)puVar16 + -0x180) =
                           *(undefined8 *)((long)puVar16 + -0xe0);
                      iVar13 = 1000;
                      puVar8 = (undefined1 *)((long)puVar16 + -400);
                      uVar10 = 1000;
                    }
                    /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c((undefined1 *)((long)puVar16 + -0xd8),puVar8,uVar10,0);
                    uVar14 = (ulong)(uint)(iVar4 + iVar13);
                    lVar12 = *(long *)(unaff_x22 + 0x18);
                    puVar11 = (undefined8 *)((long)puVar16 + -0xd8);
                    if (lVar12 != 0) {
                      uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
                      *(undefined8 *)((long)puVar16 + -0x1a8) =
                           *(undefined8 *)((long)puVar16 + -0xd0);
                      *(undefined8 *)((long)puVar16 + -0x1b0) = *puVar11;
                      *(undefined8 *)((long)puVar16 + -0x1a0) =
                           *(undefined8 *)((long)puVar16 + -200);
                      /*Core.Networking.NetworkServicesOutput$$WriteHostMigrationDone*/ func_0x0165cc48(lVar12,uVar10,(undefined1 *)((long)puVar16 + -0x1b0),uVar14,0)
                      ;
                    }
                    *(undefined8 *)((long)puVar16 + -0x1c8) = *(undefined8 *)((long)puVar16 + -0xd0)
                    ;
                    *(undefined8 *)((long)puVar16 + -0x1d0) = *puVar11;
                    *(undefined8 *)((long)puVar16 + -0x1c0) = *(undefined8 *)((long)puVar16 + -200);
                    /*Core.Networking.NetworkSession$$OnMigrationSynced*/ func_0x0165f8c4(unaff_x22,(undefined1 *)((long)puVar16 + -0x1d0),uVar14,0);
                    if ((*(long *)(unaff_x22 + 0x10) != 0) &&
                       (lVar12 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0xa0), lVar12 != 0)) {
                      *(undefined8 *)((long)puVar16 + -0x128) =
                           *(undefined8 *)((long)puVar16 + -0xd0);
                      *(undefined8 *)((long)puVar16 + -0x130) = *puVar11;
                      *(undefined8 *)((long)puVar16 + -0x120) =
                           *(undefined8 *)((long)puVar16 + -200);
                      /*System.Action<NetworkSessionTime, uint>$$Invoke*/ func_0x01e6d110(lVar12,(undefined1 *)((long)puVar16 + -0x130),uVar14,
                                      uRam0000000003d2a4b0);
                      if (*(long *)(unaff_x22 + 0x1d8) != 0) {
                        /*System.Collections.Generic.List<uint>$$Clear*/ func_0x0247eb08(*(long *)(unaff_x22 + 0x1d8),uRam0000000003d3c6c8);
                        puVar11 = *(undefined8 **)(unaff_x22 + 0xa0);
                        /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240((undefined1 *)((long)puVar16 + -0x130),unaff_x22,0);
                        if (puVar11 != (undefined8 *)0x0) {
                          uVar10 = *(undefined8 *)((long)puVar16 + -0x130);
                          puVar11[8] = *(undefined8 *)((long)puVar16 + -0x128);
                          puVar11[7] = uVar10;
                          puVar11[9] = *(undefined8 *)((long)puVar16 + -0x120);
                          return;
                        }
                      }
                    }
                  }
                }
code_r0x014a5c40:
                func_0x00f78af4();
                if (extraout_w1 != 1) goto code_r0x014a5c90;
                puVar9 = (undefined8 *)___cxa_begin_catch();
                plVar15 = (long *)*puVar9;
                ___cxa_end_catch();
                /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4((undefined1 *)((long)puVar16 + -0xa0),uRam0000000003d32b60);
              } while (plVar15 == (long *)0x0);
              func_0x00f78ac0(plVar15,0);
code_r0x014a5c90:
              uVar7 = __Unwind_Resume();
              *(ulong *)((long)puVar16 + -0x200) = uVar14;
              *(undefined8 **)((long)puVar16 + -0x1f8) = puVar11;
              *(undefined1 **)((long)puVar16 + -0x1f0) = (undefined1 *)((long)puVar16 + -0x10);
              *(undefined **)((long)puVar16 + -0x1e8) =
                   &Atlas_Networking_NetworkHostSession__OnSessionPlayerDisconnected;
              ppuVar18 = (undefined1 **)((long)puVar16 + -0x1f0);
              /*Core.Networking.NetworkSession$$OnSessionPlayerDisconnected*/ func_0x0165f26c();
              /*Atlas.Networking.NetworkHostSession$$CheckAndAdvanceGameMode*/ func_0x014a5cd4(uVar7);
              Atlas_Networking_NetworkHostSession__CheckAndAdvanceFinish(uVar7);
              puVar19 = &UNK_014a5cc4;
              puVar16 = (undefined8 *)((long)puVar16 + -0x200);
              uVar5 = uVar7;
            } while( true );
          }
        }
      }
      else {
        lVar12 = *(long *)(uVar5 + 0xa0);
        if (lVar12 != 0) {
          uStack_e8 = *(undefined8 *)(lVar12 + 0x18);
          uStack_f0 = *(undefined8 *)(lVar12 + 0x10);
          uStack_d8 = *(undefined8 *)(lVar12 + 0x28);
          uStack_e0 = *(undefined8 *)(lVar12 + 0x20);
          /*Core.Networking.NetworkServicesOutput$$WriteHostMigrationState*/ func_0x0165c7c0(*(long *)(uVar5 + 0x18),*(undefined8 *)(uVar5 + 0x30),&uStack_f0,0);
          goto code_r0x014a5740;
        }
      }
      puVar19 = &Atlas_Networking_NetworkHostSession__CheckAndAdvanceHostMigration;
      uVar7 = func_0x00f78af4();
      puVar16 = &uStack_120;
      goto code_r0x014a57d0;
    }
    func_0x032fefdc(auVar20._0_8_,auVar20._8_8_,&uStack_58);
  }
  puVar11 = (undefined8 *)*plVar15;
  /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(param_1[0x39],param_2);
  puStack_78 = &UNK_014a569c;
  puVar16 = &uStack_170;
  lVar12 = 0x3eb4000;
  if ((bRam0000000003eb4a4d & 1) == 0) {
    func_0x00f78a20(0x3d32b60);
    func_0x00f78a20(0x3d33108);
    func_0x00f78a20(0x3d32b68);
    func_0x00f78a20(0x3d33110);
    func_0x00f78a20(0x3d33118);
    func_0x00f78a20(0x3d32b70);
    func_0x00f78a20(0x3d3c6c8);
    func_0x00f78a20(0x3d3b430);
    func_0x00f78a20(0x3d3c6d0);
    func_0x00f78a20(0x3d3b530);
    bRam0000000003eb4a4d = 1;
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  aiStack_140[2] = 0;
  iStack_1ec = /*Core.Networking.NetworkSession$$NumberOfRealPlayers*/ func_0x0165ec58(param_1,0);
  if (param_1[0xb] == 0) goto code_r0x014a6470;
  /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_170,param_1[0xb],uRam0000000003d3b530);
  unaff_x23 = 0;
  uStack_108 = uStack_168;
  uStack_110 = uStack_170;
  uStack_f8 = uStack_158;
  uStack_100 = uStack_160;
  uStack_e8 = uStack_148;
  uStack_f0 = uStack_150;
  lVar12 = 0x5e;
  uVar5 = 0;
  while( true ) {
    uVar14 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_110,uRam0000000003d32b68);
    if ((uVar14 & 1) == 0) break;
    if (param_1[0x39] == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14a6470);
      (*pcVar2)();
    }
    iVar4 = uStack_f8._4_4_;
    /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc(&uStack_170,param_1[0x39],uRam0000000003d3c6d0);
    uStack_128 = uStack_168;
    uStack_130 = uStack_170;
    uStack_120 = uStack_160;
    while (uVar14 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec(&uStack_130,uRam0000000003d33110), (uVar14 & 1) != 0) {
      uVar17 = (uint)unaff_x23;
      if (iVar4 == (int)uStack_120) {
        uVar17 = uVar17 + 1;
      }
      unaff_x23 = (ulong)uVar17;
    }
    puVar16 = (undefined8 *)0x0;
    aiStack_140[(int)uVar5] = 0x5e;
    iVar4 = aiStack_140[2];
    uVar17 = aiStack_140[2] + 1;
    unaff_x22 = (ulong)uVar17;
    aiStack_140[2] = uVar17;
    /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8(&uStack_130,uRam0000000003d33108);
    uVar5 = 0;
    if ((uVar17 != 0) && (uVar5 = unaff_x22, aiStack_140[iVar4] == 0x5e)) {
      uVar5 = (ulong)(uint)iVar4;
      aiStack_140[2] = iVar4;
    }
  }
  aiStack_140[(int)uVar5] = 0x77;
  aiStack_140[2] = aiStack_140[2] + 1;
  /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_110,uRam0000000003d32b60);
  unaff_x26 = param_1;
  do {
    if ((int)unaff_x23 != iStack_1ec) {
      return;
    }
    iVar4 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(unaff_x26,0);
    if (iVar4 == 0) {
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_188,unaff_x26,0);
      uStack_1b8 = uStack_180;
      uStack_1c0 = uStack_188;
      uStack_1b0 = uStack_178;
      puVar11 = &uStack_1c0;
      uVar10 = 9;
    }
    else {
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_188,unaff_x26,0);
      uStack_198 = uStack_180;
      uStack_1a0 = uStack_188;
      uStack_190 = uStack_178;
      puVar11 = &uStack_1a0;
      uVar10 = 10;
    }
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    param_4 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_170,uVar10,puVar11,0);
    param_1 = &uStack_170;
    unaff_x26[0x11] = uStack_168;
    unaff_x26[0x10] = uStack_170;
    unaff_x26[0x13] = uStack_158;
    unaff_x26[0x12] = uStack_160;
    if (unaff_x26[0x39] != 0) {
      /*System.Collections.Generic.List<uint>$$Clear*/ func_0x0247eb08(unaff_x26[0x39],uRam0000000003d3c6c8);
      lVar12 = unaff_x26[3];
      if (lVar12 != 0) {
        puVar16 = (undefined8 *)unaff_x26[6];
        /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_170,unaff_x26,0);
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1e8 = uStack_168._4_4_;
        uStack_1e4 = 4;
        puVar11 = (undefined8 *)&uStack_1e8;
        param_4 = 0;
        /*Core.Networking.NetworkServicesOutput$$WriteGameMode*/ func_0x0165c18c(lVar12,puVar16,puVar11,0);
      }
      if ((unaff_x26[2] != 0) && (lVar6 = *(long *)(unaff_x26[2] + 0x88), lVar6 != 0)) {
        /*System.Action$$Invoke*/ func_0x02924c90(lVar6,0);
        if (unaff_x26[0x2e] != 0) {
          /*Core.Networking.NetworkEventResult$$Clear*/ func_0x01659290(unaff_x26[0x2e],0);
          if (unaff_x26[0xe] != 0) {
            param_1 = (undefined8 *)0x3d3b430;
            /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(unaff_x26[0xe],uRam0000000003d3b430);
            if (unaff_x26[0x3a] != 0) {
              /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(unaff_x26[0x3a],uRam0000000003d3b430);
              *(undefined1 *)(unaff_x26 + 0x2d) = 0;
              *(undefined1 *)(unaff_x26 + 0x30) = 0;
              *(undefined1 *)((long)unaff_x26 + 0x16a) = 0;
              return;
            }
          }
        }
      }
    }
code_r0x014a6470:
    func_0x00f78af4();
    if (extraout_w1_00 != 1) goto code_r0x014a64c0;
    puVar16 = (undefined8 *)___cxa_begin_catch();
    puVar16 = (undefined8 *)*puVar16;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_110,uRam0000000003d32b60);
  } while (puVar16 == (undefined8 *)0x0);
  func_0x00f78ac0(puVar16,0);
code_r0x014a64c0:
  auVar20 = __Unwind_Resume();
  uStack_250 = auVar20._8_8_;
  puStack_1f8 = &Atlas_Networking_NetworkHostSession__OnClientCarUpdate;
  puStack_248 = puVar11;
  uStack_220 = unaff_x22;
  puStack_218 = puVar16;
  lStack_210 = lVar12;
  puStack_208 = param_1;
  ppuStack_200 = &puStack_80;
  if ((bRam0000000003eb4a53 & 1) == 0) {
    func_0x00f78a20(0x3d53170);
    func_0x00f78a20(0x3d3b3c8);
    func_0x00f78a20(0x3d3e638);
    func_0x00f78a20(0x3d3e610);
    bRam0000000003eb4a53 = 1;
  }
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  auStack_280._0_8_ = 0;
  auStack_280._8_8_ = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  /*Core.Networking.ClientUpdateHolder$$Update<ClientCarUpdate>*/ func_0x0183792c(&uStack_240,&uStack_250,uRam0000000003d53170);
  uStack_268 = uStack_238;
  uStack_270 = uStack_240;
  uStack_260 = uStack_230;
  auStack_280 = /*System.Nullable<ClientCarUpdate>$$get_Value*/ func_0x0261bb7c(&uStack_270,uRam0000000003d3e638);
  /*Core.Networking.ClientCarUpdate$$get_Car*/ func_0x0165341c(&uStack_240,auStack_280,0);
  uStack_298 = uStack_238;
  uStack_2a0 = uStack_240;
  uStack_290 = uStack_230;
  auVar21 = /*System.Nullable<CarBase>$$get_Value*/ func_0x0261b1e8(&uStack_2a0,uRam0000000003d3e610);
  lVar12 = *(long *)(auVar20._0_8_ + 0x40);
  /*Core.Networking.NetworkCar$$FlatBufferToNetworkCar*/ func_0x01658178(&uStack_240,auVar21._0_8_,auVar21._8_8_,auVar20._0_8_,param_4,0);
  if (lVar12 != 0) {
    /*System.Collections.Generic.List<NetworkCar>$$Add*/ func_0x024029ec(lVar12,&uStack_240,uRam0000000003d3b3c8);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14a6684);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14a56d0 | Atlas.Networking.NetworkHostSession.SendHostMigrationState
// ============================================================

/* WARNING: Possible PIC construction at 0x014a57b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014a5cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014a57bc) */
/* WARNING: Removing unreachable block (ram,0x014a5cc4) */
/* WARNING: Removing unreachable block (ram,0x014a60ac) */
/* WARNING: Removing unreachable block (ram,0x014a60e0) */
/* WARNING: Removing unreachable block (ram,0x014a6160) */
/* WARNING: Removing unreachable block (ram,0x014a6190) */
/* WARNING: Removing unreachable block (ram,0x014a61e0) */
/* WARNING: Removing unreachable block (ram,0x014a62ac) */
/* WARNING: Removing unreachable block (ram,0x014a62d8) */
/* WARNING: Removing unreachable block (ram,0x014a62e4) */
/* WARNING: Removing unreachable block (ram,0x014a6334) */
/* WARNING: Removing unreachable block (ram,0x014a62f8) */
/* WARNING: Removing unreachable block (ram,0x014a636c) */
/* WARNING: Removing unreachable block (ram,0x014a6388) */
/* WARNING: Removing unreachable block (ram,0x014a63a0) */
/* WARNING: Removing unreachable block (ram,0x014a63dc) */
/* WARNING: Removing unreachable block (ram,0x014a63e4) */
/* WARNING: Removing unreachable block (ram,0x014a63ec) */
/* WARNING: Removing unreachable block (ram,0x014a63fc) */
/* WARNING: Removing unreachable block (ram,0x014a640c) */
/* WARNING: Removing unreachable block (ram,0x014a6470) */
/* WARNING: Removing unreachable block (ram,0x014a6488) */
/* WARNING: Removing unreachable block (ram,0x014a6490) */
/* WARNING: Removing unreachable block (ram,0x014a64b4) */
/* WARNING: Removing unreachable block (ram,0x014a64c0) */
/* WARNING: Removing unreachable block (ram,0x014a64f8) */
/* WARNING: Removing unreachable block (ram,0x014a6530) */
/* WARNING: Removing unreachable block (ram,0x014a6608) */
/* WARNING: Removing unreachable block (ram,0x014a6680) */
/* WARNING: Removing unreachable block (ram,0x014a65d4) */
/* WARNING: Removing unreachable block (ram,0x014a6424) */
/* WARNING: Removing unreachable block (ram,0x014a6438) */
/* WARNING: Removing unreachable block (ram,0x014a61f0) */
/* WARNING: Removing unreachable block (ram,0x014a6458) */
/* WARNING: Removing unreachable block (ram,0x014a61fc) */
/* WARNING: Removing unreachable block (ram,0x014a6224) */
/* WARNING: Removing unreachable block (ram,0x014a6244) */
/* WARNING: Removing unreachable block (ram,0x014a6460) */
/* WARNING: Removing unreachable block (ram,0x014a646c) */
/* WARNING: Removing unreachable block (ram,0x014a6268) */
/* WARNING: Removing unreachable block (ram,0x014a6270) */
/* WARNING: Removing unreachable block (ram,0x014a6284) */
/* WARNING: Removing unreachable block (ram,0x014a6234) */
/* WARNING: Removing unreachable block (ram,0x014a623c) */
/* WARNING: Removing unreachable block (ram,0x014a5c30) */

void Atlas_Networking_NetworkHostSession__SendHostMigrationState(ulong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  int extraout_w1;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long unaff_x21;
  ulong unaff_x22;
  uint uVar16;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar17;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar9 = &stack0xfffffffffffffff0;
  uVar15 = 0x3eb4000;
  if ((bRam0000000003eb4a4a & 1) == 0) {
    func_0x00f78a20(0x3d2a210);
    func_0x00f78a20(0x3d3c6c0);
    bRam0000000003eb4a4a = 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_014a5740:
    if (((*(long *)(param_1 + 0x10) != 0) && (lVar12 = *(long *)(param_1 + 0xa0), lVar12 != 0)) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x98), lVar6 != 0)) {
      uStack_a8 = *(undefined8 *)(lVar12 + 0x18);
      uStack_b0 = *(undefined8 *)(lVar12 + 0x10);
      uStack_98 = *(undefined8 *)(lVar12 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar12 + 0x20);
      uStack_90 = *(undefined8 *)(lVar12 + 0x30);
      uStack_50 = uStack_b0;
      uStack_48 = uStack_a8;
      uStack_40 = uStack_a0;
      uStack_38 = uStack_98;
      uStack_30 = uStack_90;
      /*System.Action<NetworkMigrationState>$$Invoke*/ func_0x01e45b38(lVar6,&uStack_50,uRam0000000003d2a210);
      uVar15 = *(ulong *)(param_1 + 0x1d8);
      /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_50,param_1,0);
      if (uVar15 != 0) {
        /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(uVar15,uStack_48._4_4_,uRam0000000003d3c6c0);
        puVar17 = (undefined *)0x14a57bc;
        puVar3 = &uStack_b0;
        uVar7 = param_1;
        goto code_r0x014a57d0;
      }
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0xa0);
    if (lVar12 != 0) {
      uStack_78 = *(undefined8 *)(lVar12 + 0x18);
      uStack_80 = *(undefined8 *)(lVar12 + 0x10);
      uStack_68 = *(undefined8 *)(lVar12 + 0x28);
      uStack_70 = *(undefined8 *)(lVar12 + 0x20);
      uStack_60 = *(undefined8 *)(lVar12 + 0x30);
      /*Core.Networking.NetworkServicesOutput$$WriteHostMigrationState*/ func_0x0165c7c0(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),&uStack_80,0);
      goto LAB_014a5740;
    }
  }
  puVar17 = &Atlas_Networking_NetworkHostSession__CheckAndAdvanceHostMigration;
  uVar7 = func_0x00f78af4();
  puVar3 = &uStack_b0;
code_r0x014a57d0:
  do {
    *(undefined8 *)((long)puVar3 + -0x60) = unaff_x28;
    *(ulong *)((long)puVar3 + -0x58) = unaff_x27;
    *(undefined8 *)((long)puVar3 + -0x50) = unaff_x26;
    *(undefined1 **)((long)puVar3 + -0x48) = unaff_x25;
    *(undefined8 **)((long)puVar3 + -0x40) = unaff_x24;
    *(ulong *)((long)puVar3 + -0x38) = unaff_x23;
    *(ulong *)((long)puVar3 + -0x30) = unaff_x22;
    *(long *)((long)puVar3 + -0x28) = unaff_x21;
    *(ulong *)((long)puVar3 + -0x20) = uVar15;
    *(ulong *)((long)puVar3 + -0x18) = param_1;
    *(undefined1 **)((long)puVar3 + -0x10) = puVar9;
    *(undefined **)((long)puVar3 + -8) = puVar17;
    puVar14 = (undefined8 *)0x3eb4000;
    if ((bRam0000000003eb4a52 & 1) == 0) {
      func_0x00f78a20(0x3d2a4b0);
      func_0x00f78a20(0x3d32b60);
      func_0x00f78a20(0x3d33108);
      func_0x00f78a20(0x3d32b68);
      func_0x00f78a20(0x3d33110);
      func_0x00f78a20(0x3d33118);
      func_0x00f78a20(0x3d32b70);
      func_0x00f78a20(0x3d3c6c8);
      func_0x00f78a20(0x3d3c6d0);
      func_0x00f78a20(0x3d3b530);
      func_0x00f78a20(0x3d237b8);
      bRam0000000003eb4a52 = 1;
    }
    *(undefined8 *)((long)puVar3 + -0x88) = 0;
    *(undefined8 *)((long)puVar3 + -0x90) = 0;
    *(undefined8 *)((long)puVar3 + -0x78) = 0;
    *(undefined8 *)((long)puVar3 + -0x80) = 0;
    *(undefined8 *)((long)puVar3 + -0x98) = 0;
    *(undefined8 *)((long)puVar3 + -0xa0) = 0;
    *(undefined8 *)((long)puVar3 + -0xc0) = 0;
    *(undefined8 *)((long)puVar3 + -0xb8) = 0;
    *(undefined8 *)((long)puVar3 + -0xb0) = 0;
    *(undefined8 *)((long)puVar3 + -0xd8) = 0;
    *(undefined8 *)((long)puVar3 + -0xd0) = 0;
    *(undefined8 *)((long)puVar3 + -200) = 0;
    *(undefined8 *)((long)puVar3 + -0xf0) = 0;
    *(undefined8 *)((long)puVar3 + -0xe8) = 0;
    *(undefined8 *)((long)puVar3 + -0xe0) = 0;
    *(undefined4 *)((long)puVar3 + -0xf8) = 0;
    uVar4 = /*Core.Networking.NetworkSession$$NumberOfRealPlayers*/ func_0x0165ec58(uVar7,0);
    *(undefined4 *)((long)puVar3 + -0x1d4) = uVar4;
    uVar15 = uVar7;
    if (*(long *)(uVar7 + 0x58) == 0) goto code_r0x014a5c40;
    unaff_x26 = 0x3d32b68;
    unaff_x28 = 0x3d33110;
    /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620((undefined1 *)((long)puVar3 + -0x130),*(long *)(uVar7 + 0x58),
                    uRam0000000003d3b530);
    unaff_x23 = 0;
    *(undefined8 *)((long)puVar3 + -0x98) = *(undefined8 *)((long)puVar3 + -0x128);
    *(undefined8 *)((long)puVar3 + -0xa0) = *(undefined8 *)((long)puVar3 + -0x130);
    *(undefined8 *)((long)puVar3 + -0x88) = *(undefined8 *)((long)puVar3 + -0x118);
    *(undefined8 *)((long)puVar3 + -0x90) = *(undefined8 *)((long)puVar3 + -0x120);
    *(undefined8 *)((long)puVar3 + -0x78) = *(undefined8 *)((long)puVar3 + -0x108);
    *(undefined8 *)((long)puVar3 + -0x80) = *(undefined8 *)((long)puVar3 + -0x110);
    unaff_x25 = (undefined1 *)((long)puVar3 + -0x100);
    uVar15 = 0x5e;
    puVar14 = (undefined8 *)0x0;
    while( true ) {
      uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8((undefined1 *)((long)puVar3 + -0xa0),uRam0000000003d32b68);
      if ((uVar8 & 1) == 0) break;
      if (*(long *)(uVar7 + 0x1d8) == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14a5c40);
        (*pcVar2)();
      }
      iVar5 = *(int *)((long)puVar3 + -0x84);
      /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc((undefined1 *)((long)puVar3 + -0x130),*(long *)(uVar7 + 0x1d8),
                      uRam0000000003d3c6d0);
      *(undefined8 *)((long)puVar3 + -0xb8) = *(undefined8 *)((long)puVar3 + -0x128);
      *(undefined8 *)((long)puVar3 + -0xc0) = *(undefined8 *)((long)puVar3 + -0x130);
      *(undefined8 *)((long)puVar3 + -0xb0) = *(undefined8 *)((long)puVar3 + -0x120);
      while (uVar8 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec((undefined1 *)((long)puVar3 + -0xc0),uRam0000000003d33110),
            (uVar8 & 1) != 0) {
        uVar16 = (uint)unaff_x23;
        if (iVar5 == *(int *)((long)puVar3 + -0xb0)) {
          uVar16 = uVar16 + 1;
        }
        unaff_x23 = (ulong)uVar16;
      }
      unaff_x21 = 0;
      *(undefined4 *)(unaff_x25 + (long)(int)puVar14 * 4) = 0x5e;
      uVar1 = *(uint *)((long)puVar3 + -0xf8);
      uVar16 = uVar1 + 1;
      unaff_x24 = (undefined8 *)(ulong)uVar16;
      *(uint *)((long)puVar3 + -0xf8) = uVar16;
      /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8((undefined1 *)((long)puVar3 + -0xc0),uRam0000000003d33108);
      puVar14 = (undefined8 *)0x0;
      if ((uVar16 != 0) && (puVar14 = unaff_x24, *(int *)(unaff_x25 + (long)(int)uVar1 * 4) == 0x5e)
         ) {
        *(uint *)((long)puVar3 + -0xf8) = uVar1;
        puVar14 = (undefined8 *)(ulong)uVar1;
      }
    }
    *(undefined4 *)((long)puVar3 + (long)(int)puVar14 * 4 + -0x100) = 0x77;
    unaff_x27 = (ulong)(*(int *)((long)puVar3 + -0xf8) + 1U);
    *(uint *)((long)puVar3 + -0xf8) = *(int *)((long)puVar3 + -0xf8) + 1U;
    /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4((undefined1 *)((long)puVar3 + -0xa0),uRam0000000003d32b60);
    unaff_x22 = uVar7;
    do {
      if (((int)unaff_x27 != 0) &&
         (iVar5 = (int)unaff_x27 + -1, *(int *)((long)puVar3 + (long)iVar5 * 4 + -0x100) == 0x77)) {
        *(int *)((long)puVar3 + -0xf8) = iVar5;
      }
      if ((int)unaff_x23 != *(int *)((long)puVar3 + -0x1d4)) {
        return;
      }
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)puVar3 + -0x130),unaff_x22,0);
      *(undefined8 *)((long)puVar3 + -0xe8) = *(undefined8 *)((long)puVar3 + -0x128);
      *(undefined8 *)((long)puVar3 + -0xf0) = *(undefined8 *)((long)puVar3 + -0x130);
      *(undefined8 *)((long)puVar3 + -0xe0) = *(undefined8 *)((long)puVar3 + -0x120);
      lVar12 = *(long *)(unaff_x22 + 0xa0);
      if (lVar12 != 0) {
        *(undefined8 *)((long)puVar3 + -0x148) = *(undefined8 *)((long)puVar3 + -0x128);
        *(undefined8 *)((long)puVar3 + -0x150) = *(undefined8 *)((long)puVar3 + -0x130);
        *(undefined8 *)((long)puVar3 + -0x140) = *(undefined8 *)((long)puVar3 + -0x120);
        iVar5 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(lVar12 + 0x38,(undefined1 *)((long)puVar3 + -0x150),0);
        if (*(long *)(unaff_x22 + 0xa0) != 0) {
          iVar13 = *(int *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
          if ((iVar13 == 7) || (iVar13 == 4)) {
            if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            *(undefined8 *)((long)puVar3 + -0x168) = *(undefined8 *)((long)puVar3 + -0xe8);
            *(undefined8 *)((long)puVar3 + -0x170) = *(undefined8 *)((long)puVar3 + -0xf0);
            *(undefined8 *)((long)puVar3 + -0x160) = *(undefined8 *)((long)puVar3 + -0xe0);
            iVar13 = 3000;
            puVar9 = (undefined1 *)((long)puVar3 + -0x170);
            uVar11 = 3000;
          }
          else {
            if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            *(undefined8 *)((long)puVar3 + -0x188) = *(undefined8 *)((long)puVar3 + -0xe8);
            *(undefined8 *)((long)puVar3 + -400) = *(undefined8 *)((long)puVar3 + -0xf0);
            *(undefined8 *)((long)puVar3 + -0x180) = *(undefined8 *)((long)puVar3 + -0xe0);
            iVar13 = 1000;
            puVar9 = (undefined1 *)((long)puVar3 + -400);
            uVar11 = 1000;
          }
          /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c((undefined1 *)((long)puVar3 + -0xd8),puVar9,uVar11,0);
          uVar15 = (ulong)(uint)(iVar5 + iVar13);
          lVar12 = *(long *)(unaff_x22 + 0x18);
          puVar14 = (undefined8 *)((long)puVar3 + -0xd8);
          if (lVar12 != 0) {
            uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
            *(undefined8 *)((long)puVar3 + -0x1a8) = *(undefined8 *)((long)puVar3 + -0xd0);
            *(undefined8 *)((long)puVar3 + -0x1b0) = *puVar14;
            *(undefined8 *)((long)puVar3 + -0x1a0) = *(undefined8 *)((long)puVar3 + -200);
            /*Core.Networking.NetworkServicesOutput$$WriteHostMigrationDone*/ func_0x0165cc48(lVar12,uVar11,(undefined1 *)((long)puVar3 + -0x1b0),uVar15,0);
          }
          *(undefined8 *)((long)puVar3 + -0x1c8) = *(undefined8 *)((long)puVar3 + -0xd0);
          *(undefined8 *)((long)puVar3 + -0x1d0) = *puVar14;
          *(undefined8 *)((long)puVar3 + -0x1c0) = *(undefined8 *)((long)puVar3 + -200);
          /*Core.Networking.NetworkSession$$OnMigrationSynced*/ func_0x0165f8c4(unaff_x22,(undefined1 *)((long)puVar3 + -0x1d0),uVar15,0);
          if ((*(long *)(unaff_x22 + 0x10) != 0) &&
             (lVar12 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0xa0), lVar12 != 0)) {
            *(undefined8 *)((long)puVar3 + -0x128) = *(undefined8 *)((long)puVar3 + -0xd0);
            *(undefined8 *)((long)puVar3 + -0x130) = *puVar14;
            *(undefined8 *)((long)puVar3 + -0x120) = *(undefined8 *)((long)puVar3 + -200);
            /*System.Action<NetworkSessionTime, uint>$$Invoke*/ func_0x01e6d110(lVar12,(undefined1 *)((long)puVar3 + -0x130),uVar15,uRam0000000003d2a4b0
                           );
            if (*(long *)(unaff_x22 + 0x1d8) != 0) {
              /*System.Collections.Generic.List<uint>$$Clear*/ func_0x0247eb08(*(long *)(unaff_x22 + 0x1d8),uRam0000000003d3c6c8);
              puVar14 = *(undefined8 **)(unaff_x22 + 0xa0);
              /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240((undefined1 *)((long)puVar3 + -0x130),unaff_x22,0);
              if (puVar14 != (undefined8 *)0x0) {
                uVar11 = *(undefined8 *)((long)puVar3 + -0x130);
                puVar14[8] = *(undefined8 *)((long)puVar3 + -0x128);
                puVar14[7] = uVar11;
                puVar14[9] = *(undefined8 *)((long)puVar3 + -0x120);
                return;
              }
            }
          }
        }
      }
code_r0x014a5c40:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x014a5c90;
      plVar10 = (long *)___cxa_begin_catch();
      unaff_x21 = *plVar10;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4((undefined1 *)((long)puVar3 + -0xa0),uRam0000000003d32b60);
    } while (unaff_x21 == 0);
    func_0x00f78ac0(unaff_x21,0);
code_r0x014a5c90:
    uVar7 = __Unwind_Resume();
    *(ulong *)((long)puVar3 + -0x200) = uVar15;
    *(undefined8 **)((long)puVar3 + -0x1f8) = puVar14;
    *(undefined1 **)((long)puVar3 + -0x1f0) = (undefined1 *)((long)puVar3 + -0x10);
    *(undefined **)((long)puVar3 + -0x1e8) =
         &Atlas_Networking_NetworkHostSession__OnSessionPlayerDisconnected;
    puVar9 = (undefined1 *)((long)puVar3 + -0x1f0);
    /*Core.Networking.NetworkSession$$OnSessionPlayerDisconnected*/ func_0x0165f26c();
    /*Atlas.Networking.NetworkHostSession$$CheckAndAdvanceGameMode*/ func_0x014a5cd4(uVar7);
    Atlas_Networking_NetworkHostSession__CheckAndAdvanceFinish(uVar7);
    puVar17 = &UNK_014a5cc4;
    puVar3 = (undefined8 *)((long)puVar3 + -0x200);
    param_1 = uVar7;
  } while( true );
}



// ============================================================
// RVA: 0x14a57d0 | Atlas.Networking.NetworkHostSession.CheckAndAdvanceHostMigration
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a5c94 | Atlas.Networking.NetworkHostSession.OnSessionPlayerDisconnected
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014a6460) */

void Atlas_Networking_NetworkHostSession__OnSessionPlayerDisconnected
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int extraout_w1;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x26;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined1 *puStack_190;
  undefined *puStack_188;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
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
  int aiStack_d0 [4];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar7 = 0;
  /*Core.Networking.NetworkSession$$OnSessionPlayerDisconnected*/ func_0x0165f26c();
  /*Atlas.Networking.NetworkHostSession$$CheckAndAdvanceGameMode*/ func_0x014a5cd4(param_1);
  Atlas_Networking_NetworkHostSession__CheckAndAdvanceFinish(param_1);
  Atlas_Networking_NetworkHostSession__CheckAndAdvanceHostMigration(param_1);
  puVar10 = &uStack_100;
  lVar9 = 0x3eb4000;
  if ((bRam0000000003eb4a4d & 1) == 0) {
    func_0x00f78a20(0x3d32b60);
    func_0x00f78a20(0x3d33108);
    func_0x00f78a20(0x3d32b68);
    func_0x00f78a20(0x3d33110);
    func_0x00f78a20(0x3d33118);
    func_0x00f78a20(0x3d32b70);
    func_0x00f78a20(0x3d3c6c8);
    func_0x00f78a20(0x3d3b430);
    func_0x00f78a20(0x3d3c6d0);
    func_0x00f78a20(0x3d3b530);
    bRam0000000003eb4a4d = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  aiStack_d0[2] = 0;
  iStack_17c = /*Core.Networking.NetworkSession$$NumberOfRealPlayers*/ func_0x0165ec58(param_1,0);
  if (param_1[0xb] == 0) goto code_r0x014a6470;
  /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_100,param_1[0xb],uRam0000000003d3b530);
  unaff_w23 = 0;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  lVar9 = 0x5e;
  uVar8 = 0;
  while( true ) {
    uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_a0,uRam0000000003d32b68);
    if ((uVar4 & 1) == 0) break;
    if (param_1[0x39] == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14a6470);
      (*pcVar2)();
    }
    iVar3 = uStack_88._4_4_;
    /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc(&uStack_100,param_1[0x39],uRam0000000003d3c6d0);
    uStack_b8 = uStack_f8;
    uStack_c0 = uStack_100;
    uStack_b0 = uStack_f0;
    while (uVar4 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec(&uStack_c0,uRam0000000003d33110), (uVar4 & 1) != 0) {
      if (iVar3 == (int)uStack_b0) {
        unaff_w23 = unaff_w23 + 1;
      }
    }
    puVar10 = (undefined8 *)0x0;
    aiStack_d0[(int)uVar8] = 0x5e;
    iVar3 = aiStack_d0[2];
    uVar1 = aiStack_d0[2] + 1;
    unaff_x22 = (ulong)uVar1;
    aiStack_d0[2] = uVar1;
    /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8(&uStack_c0,uRam0000000003d33108);
    uVar8 = 0;
    if ((uVar1 != 0) && (uVar8 = unaff_x22, aiStack_d0[iVar3] == 0x5e)) {
      uVar8 = (ulong)(uint)iVar3;
      aiStack_d0[2] = iVar3;
    }
  }
  aiStack_d0[(int)uVar8] = 0x77;
  aiStack_d0[2] = aiStack_d0[2] + 1;
  /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_a0,uRam0000000003d32b60);
  unaff_x26 = param_1;
  do {
    if (unaff_w23 != iStack_17c) {
      return;
    }
    iVar3 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(unaff_x26,0);
    if (iVar3 == 0) {
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_118,unaff_x26,0);
      uStack_148 = uStack_110;
      uStack_150 = uStack_118;
      uStack_140 = uStack_108;
      param_3 = &uStack_150;
      uVar6 = 9;
    }
    else {
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_118,unaff_x26,0);
      uStack_128 = uStack_110;
      uStack_130 = uStack_118;
      uStack_120 = uStack_108;
      param_3 = &uStack_130;
      uVar6 = 10;
    }
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uVar7 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_100,uVar6,param_3,0);
    param_1 = &uStack_100;
    unaff_x26[0x11] = uStack_f8;
    unaff_x26[0x10] = uStack_100;
    unaff_x26[0x13] = uStack_e8;
    unaff_x26[0x12] = uStack_f0;
    if (unaff_x26[0x39] != 0) {
      /*System.Collections.Generic.List<uint>$$Clear*/ func_0x0247eb08(unaff_x26[0x39],uRam0000000003d3c6c8);
      lVar9 = unaff_x26[3];
      if (lVar9 != 0) {
        puVar10 = (undefined8 *)unaff_x26[6];
        /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_100,unaff_x26,0);
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_178 = uStack_f8._4_4_;
        uStack_174 = 4;
        param_3 = (undefined8 *)&uStack_178;
        uVar7 = 0;
        /*Core.Networking.NetworkServicesOutput$$WriteGameMode*/ func_0x0165c18c(lVar9,puVar10,param_3,0);
      }
      if ((unaff_x26[2] != 0) && (lVar5 = *(long *)(unaff_x26[2] + 0x88), lVar5 != 0)) {
        /*System.Action$$Invoke*/ func_0x02924c90(lVar5,0);
        if (unaff_x26[0x2e] != 0) {
          /*Core.Networking.NetworkEventResult$$Clear*/ func_0x01659290(unaff_x26[0x2e],0);
          if (unaff_x26[0xe] != 0) {
            param_1 = (undefined8 *)0x3d3b430;
            /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(unaff_x26[0xe],uRam0000000003d3b430);
            if (unaff_x26[0x3a] != 0) {
              /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(unaff_x26[0x3a],uRam0000000003d3b430);
              *(undefined1 *)(unaff_x26 + 0x2d) = 0;
              *(undefined1 *)(unaff_x26 + 0x30) = 0;
              *(undefined1 *)((long)unaff_x26 + 0x16a) = 0;
              return;
            }
          }
        }
      }
    }
code_r0x014a6470:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014a64c0;
    puVar10 = (undefined8 *)___cxa_begin_catch();
    puVar10 = (undefined8 *)*puVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_a0,uRam0000000003d32b60);
  } while (puVar10 == (undefined8 *)0x0);
  func_0x00f78ac0(puVar10,0);
code_r0x014a64c0:
  auVar11 = __Unwind_Resume();
  uStack_1e0 = auVar11._8_8_;
  puStack_188 = &Atlas_Networking_NetworkHostSession__OnClientCarUpdate;
  puStack_1d8 = param_3;
  uStack_1b0 = unaff_x22;
  puStack_1a8 = puVar10;
  lStack_1a0 = lVar9;
  puStack_198 = param_1;
  puStack_190 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a53 & 1) == 0) {
    func_0x00f78a20(0x3d53170);
    func_0x00f78a20(0x3d3b3c8);
    func_0x00f78a20(0x3d3e638);
    func_0x00f78a20(0x3d3e610);
    bRam0000000003eb4a53 = 1;
  }
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  auStack_210._0_8_ = 0;
  auStack_210._8_8_ = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  /*Core.Networking.ClientUpdateHolder$$Update<ClientCarUpdate>*/ func_0x0183792c(&uStack_1d0,&uStack_1e0,uRam0000000003d53170);
  uStack_1f8 = uStack_1c8;
  uStack_200 = uStack_1d0;
  uStack_1f0 = uStack_1c0;
  auStack_210 = /*System.Nullable<ClientCarUpdate>$$get_Value*/ func_0x0261bb7c(&uStack_200,uRam0000000003d3e638);
  /*Core.Networking.ClientCarUpdate$$get_Car*/ func_0x0165341c(&uStack_1d0,auStack_210,0);
  uStack_228 = uStack_1c8;
  uStack_230 = uStack_1d0;
  uStack_220 = uStack_1c0;
  auVar12 = /*System.Nullable<CarBase>$$get_Value*/ func_0x0261b1e8(&uStack_230,uRam0000000003d3e610);
  lVar9 = *(long *)(auVar11._0_8_ + 0x40);
  /*Core.Networking.NetworkCar$$FlatBufferToNetworkCar*/ func_0x01658178(&uStack_1d0,auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,uVar7,0);
  if (lVar9 == 0) {
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x14a6684);
    (*pcVar2)();
  }
  /*System.Collections.Generic.List<NetworkCar>$$Add*/ func_0x024029ec(lVar9,&uStack_1d0,uRam0000000003d3b3c8);
  return;
}



// ============================================================
// RVA: 0x14a5cd4 | Atlas.Networking.NetworkHostSession.CheckAndAdvanceGameMode
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014a6048) */
/* WARNING: Removing unreachable block (ram,0x014a6460) */

void Atlas_Networking_NetworkHostSession__CheckAndAdvanceGameMode
               (long param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong unaff_x23;
  int *unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 auStack_400 [16];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d0;
  uint *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  long lStack_390;
  undefined8 *puStack_388;
  undefined1 **ppuStack_380;
  undefined *puStack_378;
  int iStack_36c;
  uint auStack_368 [10];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
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
  int aiStack_2c0 [4];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  int *piStack_230;
  ulong uStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  long lStack_210;
  ulong uStack_208;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
  int iStack_1ec;
  uint auStack_1e8 [2];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
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
  int aiStack_110 [4];
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar11 = &uStack_150;
  uVar6 = 0x3eb4000;
  if ((bRam0000000003eb4a51 & 1) == 0) {
    func_0x00f78a20(0x3d32b60);
    func_0x00f78a20(0x3d32b18);
    func_0x00f78a20(0x3d32b68);
    func_0x00f78a20(0x3d32b20);
    func_0x00f78a20(0x3d32b28);
    func_0x00f78a20(0x3d32b70);
    func_0x00f78a20(0x3d3b470);
    func_0x00f78a20(0x3d3b530);
    func_0x00f78a20(0x3d3b478);
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a51 = 1;
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  aiStack_110[2] = 0;
  iStack_1ec = /*Core.Networking.NetworkSession$$NumberOfRealPlayers*/ func_0x0165ec58(param_1,0);
  lVar9 = param_1;
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_014a6058;
  unaff_x25 = 0x3d32b68;
  unaff_x27 = 0x3d32b20;
  /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_150,*(long *)(param_1 + 0x58),uRam0000000003d3b530);
  unaff_x23 = 0;
  uStack_98 = uStack_148;
  uStack_a0 = uStack_150;
  uStack_88 = uStack_138;
  uStack_90 = uStack_140;
  uStack_78 = uStack_128;
  uStack_80 = uStack_130;
  unaff_x24 = aiStack_110;
  unaff_x28 = 99;
  unaff_x26 = (undefined8 *)0x0;
  while( true ) {
    uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_a0,uRam0000000003d32b68);
    if ((uVar6 & 1) == 0) break;
    if (*(long *)(param_1 + 0x1c0) == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14a6058);
      (*pcVar1)();
    }
    iVar2 = uStack_88._4_4_;
    /*System.Collections.Generic.List<NetworkGameMode>$$GetEnumerator*/ func_0x0240bc64(&uStack_150,*(long *)(param_1 + 0x1c0),uRam0000000003d3b478);
    uStack_d8 = uStack_148;
    uStack_e0 = uStack_150;
    uStack_c8 = uStack_138;
    uStack_d0 = uStack_140;
    uStack_b8 = uStack_128;
    uStack_c0 = uStack_130;
    uStack_b0 = uStack_120;
    while (uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkGameMode>$$MoveNext*/ func_0x01f6d20c(&uStack_e0,uRam0000000003d32b20), (uVar6 & 1) != 0) {
      uVar12 = (uint)unaff_x23;
      if (iVar2 == (int)uStack_d0) {
        uVar12 = uVar12 + 1;
      }
      unaff_x23 = (ulong)uVar12;
    }
    lVar9 = 0;
    unaff_x24[(int)unaff_x26] = 99;
    iVar2 = aiStack_110[2];
    uVar12 = aiStack_110[2] + 1;
    aiStack_110[2] = uVar12;
    /*System.Collections.Generic.List.Enumerator<NetworkGameMode>$$Dispose*/ func_0x01f6d208(&uStack_e0,uRam0000000003d32b18);
    unaff_x26 = (undefined8 *)0x0;
    if ((uVar12 != 0) && (unaff_x26 = (undefined8 *)(ulong)uVar12, unaff_x24[iVar2] == 99)) {
      unaff_x26 = (undefined8 *)(ulong)(uint)iVar2;
      aiStack_110[2] = iVar2;
    }
  }
  aiStack_110[(int)unaff_x26] = 0x7c;
  aiStack_110[2] = aiStack_110[2] + 1;
  /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_a0,uRam0000000003d32b60);
  do {
    if ((int)unaff_x23 != iStack_1ec) {
      return;
    }
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_168,param_1,0);
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_198 = uStack_160;
    uStack_1a0 = uStack_168;
    uStack_190 = uStack_158;
    /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_180,&uStack_1a0,0x1c2,0);
    uStack_f8 = uStack_178;
    uStack_100 = uStack_180;
    uStack_f0 = uStack_170;
    /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_150,param_1,0);
    uVar12 = uStack_148._4_4_;
    uVar6 = (ulong)uStack_148._4_4_;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    uStack_1b0 = uStack_f0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    param_3 = (uint *)&uStack_1c0;
    param_4 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_150,6,param_3,0);
    *(undefined8 *)(param_1 + 0x88) = uStack_148;
    *(undefined8 *)(param_1 + 0x80) = uStack_150;
    *(undefined8 *)(param_1 + 0x98) = uStack_138;
    *(undefined8 *)(param_1 + 0x90) = uStack_140;
    *(uint *)(param_1 + 0xa8) = uVar12;
    *(undefined4 *)(param_1 + 0xac) = 2;
    *(undefined8 *)(param_1 + 0xb8) = uStack_f8;
    *(undefined8 *)(param_1 + 0xb0) = uStack_100;
    *(undefined8 *)(param_1 + 0xc0) = uStack_f0;
    *(undefined8 *)(param_1 + 200) = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uStack_1d8 = uStack_f8;
      uStack_1e0 = uStack_100;
      auStack_1e8[0] = uVar12;
      auStack_1e8[1] = 2;
      uStack_1d0 = uStack_f0;
      uStack_1c8 = 0;
      param_3 = auStack_1e8;
      param_4 = 0;
      /*Core.Networking.NetworkServicesOutput$$WriteGameMode*/ func_0x0165c18c(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),param_3,0);
    }
    unaff_x20 = param_1;
    if (*(long *)(param_1 + 0x1c0) != 0) {
      /*System.Collections.Generic.List<NetworkGameMode>$$Clear*/ func_0x0240b3cc(*(long *)(param_1 + 0x1c0),uRam0000000003d3b470);
      *(undefined1 *)(param_1 + 0x16b) = 0;
      return;
    }
LAB_014a6058:
    param_1 = unaff_x20;
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014a60a8;
    plVar3 = (long *)___cxa_begin_catch();
    lVar9 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_a0,uRam0000000003d32b60);
  } while (lVar9 == 0);
  func_0x00f78ac0(lVar9,0);
code_r0x014a60a8:
  puVar4 = (undefined8 *)__Unwind_Resume();
  puStack_1f8 = &Atlas_Networking_NetworkHostSession__CheckResultsDone;
  puVar10 = &uStack_2f0;
  lVar8 = 0x3eb4000;
  uStack_250 = unaff_x28;
  uStack_248 = unaff_x27;
  puStack_240 = unaff_x26;
  uStack_238 = unaff_x25;
  piStack_230 = unaff_x24;
  uStack_228 = unaff_x23;
  puStack_220 = puVar11;
  lStack_218 = lVar9;
  lStack_210 = param_1;
  uStack_208 = uVar6;
  puStack_200 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a4d & 1) == 0) {
    func_0x00f78a20(0x3d32b60);
    func_0x00f78a20(0x3d33108);
    func_0x00f78a20(0x3d32b68);
    func_0x00f78a20(0x3d33110);
    func_0x00f78a20(0x3d33118);
    func_0x00f78a20(0x3d32b70);
    func_0x00f78a20(0x3d3c6c8);
    func_0x00f78a20(0x3d3b430);
    func_0x00f78a20(0x3d3c6d0);
    func_0x00f78a20(0x3d3b530);
    bRam0000000003eb4a4d = 1;
  }
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  aiStack_2c0[2] = 0;
  iStack_36c = /*Core.Networking.NetworkSession$$NumberOfRealPlayers*/ func_0x0165ec58(puVar4,0);
  if (puVar4[0xb] == 0) goto code_r0x014a6470;
  /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_2f0,puVar4[0xb],uRam0000000003d3b530);
  unaff_x23 = 0;
  uStack_288 = uStack_2e8;
  uStack_290 = uStack_2f0;
  uStack_278 = uStack_2d8;
  uStack_280 = uStack_2e0;
  uStack_268 = uStack_2c8;
  uStack_270 = uStack_2d0;
  lVar8 = 0x5e;
  puVar7 = (undefined8 *)0x0;
  while( true ) {
    uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_290,uRam0000000003d32b68);
    if ((uVar6 & 1) == 0) break;
    if (puVar4[0x39] == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14a6470);
      (*pcVar1)();
    }
    iVar2 = uStack_278._4_4_;
    /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc(&uStack_2f0,puVar4[0x39],uRam0000000003d3c6d0);
    uStack_2a8 = uStack_2e8;
    uStack_2b0 = uStack_2f0;
    uStack_2a0 = uStack_2e0;
    while (uVar6 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec(&uStack_2b0,uRam0000000003d33110), (uVar6 & 1) != 0) {
      uVar12 = (uint)unaff_x23;
      if (iVar2 == (int)uStack_2a0) {
        uVar12 = uVar12 + 1;
      }
      unaff_x23 = (ulong)uVar12;
    }
    puVar10 = (undefined8 *)0x0;
    aiStack_2c0[(int)puVar7] = 0x5e;
    iVar2 = aiStack_2c0[2];
    uVar12 = aiStack_2c0[2] + 1;
    puVar11 = (undefined8 *)(ulong)uVar12;
    aiStack_2c0[2] = uVar12;
    /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8(&uStack_2b0,uRam0000000003d33108);
    puVar7 = (undefined8 *)0x0;
    if ((uVar12 != 0) && (puVar7 = puVar11, aiStack_2c0[iVar2] == 0x5e)) {
      puVar7 = (undefined8 *)(ulong)(uint)iVar2;
      aiStack_2c0[2] = iVar2;
    }
  }
  aiStack_2c0[(int)puVar7] = 0x77;
  aiStack_2c0[2] = aiStack_2c0[2] + 1;
  /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_290,uRam0000000003d32b60);
  unaff_x26 = puVar4;
  do {
    if ((int)unaff_x23 != iStack_36c) {
      return;
    }
    iVar2 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(unaff_x26,0);
    if (iVar2 == 0) {
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_308,unaff_x26,0);
      uStack_338 = uStack_300;
      uStack_340 = uStack_308;
      uStack_330 = uStack_2f8;
      param_3 = (uint *)&uStack_340;
      uVar5 = 9;
    }
    else {
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_308,unaff_x26,0);
      uStack_318 = uStack_300;
      uStack_320 = uStack_308;
      uStack_310 = uStack_2f8;
      param_3 = (uint *)&uStack_320;
      uVar5 = 10;
    }
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    param_4 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_2f0,uVar5,param_3,0);
    puVar4 = &uStack_2f0;
    unaff_x26[0x11] = uStack_2e8;
    unaff_x26[0x10] = uStack_2f0;
    unaff_x26[0x13] = uStack_2d8;
    unaff_x26[0x12] = uStack_2e0;
    if (unaff_x26[0x39] != 0) {
      /*System.Collections.Generic.List<uint>$$Clear*/ func_0x0247eb08(unaff_x26[0x39],uRam0000000003d3c6c8);
      lVar8 = unaff_x26[3];
      if (lVar8 != 0) {
        puVar10 = (undefined8 *)unaff_x26[6];
        /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_2f0,unaff_x26,0);
        auStack_368[4] = 0;
        auStack_368[5] = 0;
        auStack_368[2] = 0;
        auStack_368[3] = 0;
        auStack_368[8] = 0;
        auStack_368[9] = 0;
        auStack_368[6] = 0;
        auStack_368[7] = 0;
        auStack_368[0] = uStack_2e8._4_4_;
        auStack_368[1] = 4;
        param_3 = auStack_368;
        param_4 = 0;
        /*Core.Networking.NetworkServicesOutput$$WriteGameMode*/ func_0x0165c18c(lVar8,puVar10,param_3,0);
      }
      if ((unaff_x26[2] != 0) && (lVar9 = *(long *)(unaff_x26[2] + 0x88), lVar9 != 0)) {
        /*System.Action$$Invoke*/ func_0x02924c90(lVar9,0);
        if (unaff_x26[0x2e] != 0) {
          /*Core.Networking.NetworkEventResult$$Clear*/ func_0x01659290(unaff_x26[0x2e],0);
          if (unaff_x26[0xe] != 0) {
            puVar4 = (undefined8 *)0x3d3b430;
            /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(unaff_x26[0xe],uRam0000000003d3b430);
            if (unaff_x26[0x3a] != 0) {
              /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(unaff_x26[0x3a],uRam0000000003d3b430);
              *(undefined1 *)(unaff_x26 + 0x2d) = 0;
              *(undefined1 *)(unaff_x26 + 0x30) = 0;
              *(undefined1 *)((long)unaff_x26 + 0x16a) = 0;
              return;
            }
          }
        }
      }
    }
code_r0x014a6470:
    func_0x00f78af4();
    if (extraout_w1_00 != 1) goto code_r0x014a64c0;
    puVar10 = (undefined8 *)___cxa_begin_catch();
    puVar10 = (undefined8 *)*puVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_290,uRam0000000003d32b60);
  } while (puVar10 == (undefined8 *)0x0);
  func_0x00f78ac0(puVar10,0);
code_r0x014a64c0:
  auVar13 = __Unwind_Resume();
  uStack_3d0 = auVar13._8_8_;
  puStack_378 = &Atlas_Networking_NetworkHostSession__OnClientCarUpdate;
  puStack_3c8 = param_3;
  puStack_3a0 = puVar11;
  puStack_398 = puVar10;
  lStack_390 = lVar8;
  puStack_388 = puVar4;
  ppuStack_380 = &puStack_200;
  if ((bRam0000000003eb4a53 & 1) == 0) {
    func_0x00f78a20(0x3d53170);
    func_0x00f78a20(0x3d3b3c8);
    func_0x00f78a20(0x3d3e638);
    func_0x00f78a20(0x3d3e610);
    bRam0000000003eb4a53 = 1;
  }
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  auStack_400._0_8_ = 0;
  auStack_400._8_8_ = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  /*Core.Networking.ClientUpdateHolder$$Update<ClientCarUpdate>*/ func_0x0183792c(&uStack_3c0,&uStack_3d0,uRam0000000003d53170);
  uStack_3e8 = uStack_3b8;
  uStack_3f0 = uStack_3c0;
  uStack_3e0 = uStack_3b0;
  auStack_400 = /*System.Nullable<ClientCarUpdate>$$get_Value*/ func_0x0261bb7c(&uStack_3f0,uRam0000000003d3e638);
  /*Core.Networking.ClientCarUpdate$$get_Car*/ func_0x0165341c(&uStack_3c0,auStack_400,0);
  uStack_418 = uStack_3b8;
  uStack_420 = uStack_3c0;
  uStack_410 = uStack_3b0;
  auVar14 = /*System.Nullable<CarBase>$$get_Value*/ func_0x0261b1e8(&uStack_420,uRam0000000003d3e610);
  lVar9 = *(long *)(auVar13._0_8_ + 0x40);
  /*Core.Networking.NetworkCar$$FlatBufferToNetworkCar*/ func_0x01658178(&uStack_3c0,auVar14._0_8_,auVar14._8_8_,auVar13._0_8_,param_4,0);
  if (lVar9 != 0) {
    /*System.Collections.Generic.List<NetworkCar>$$Add*/ func_0x024029ec(lVar9,&uStack_3c0,uRam0000000003d3b3c8);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14a6684);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14a60ac | Atlas.Networking.NetworkHostSession.CheckResultsDone
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014a6460) */

void Atlas_Networking_NetworkHostSession__CheckResultsDone
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int extraout_w1;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x26;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined1 *puStack_190;
  undefined *puStack_188;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
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
  int aiStack_d0 [4];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar9 = &uStack_100;
  lVar8 = 0x3eb4000;
  if ((bRam0000000003eb4a4d & 1) == 0) {
    func_0x00f78a20(0x3d32b60);
    func_0x00f78a20(0x3d33108);
    func_0x00f78a20(0x3d32b68);
    func_0x00f78a20(0x3d33110);
    func_0x00f78a20(0x3d33118);
    func_0x00f78a20(0x3d32b70);
    func_0x00f78a20(0x3d3c6c8);
    func_0x00f78a20(0x3d3b430);
    func_0x00f78a20(0x3d3c6d0);
    func_0x00f78a20(0x3d3b530);
    bRam0000000003eb4a4d = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  aiStack_d0[2] = 0;
  iStack_17c = /*Core.Networking.NetworkSession$$NumberOfRealPlayers*/ func_0x0165ec58(param_1,0);
  if (param_1[0xb] == 0) goto LAB_014a6470;
  /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_100,param_1[0xb],uRam0000000003d3b530);
  unaff_w23 = 0;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  lVar8 = 0x5e;
  uVar7 = 0;
  while( true ) {
    uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_a0,uRam0000000003d32b68);
    if ((uVar4 & 1) == 0) break;
    if (param_1[0x39] == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14a6470);
      (*pcVar2)();
    }
    iVar3 = uStack_88._4_4_;
    /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc(&uStack_100,param_1[0x39],uRam0000000003d3c6d0);
    uStack_b8 = uStack_f8;
    uStack_c0 = uStack_100;
    uStack_b0 = uStack_f0;
    while (uVar4 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec(&uStack_c0,uRam0000000003d33110), (uVar4 & 1) != 0) {
      if (iVar3 == (int)uStack_b0) {
        unaff_w23 = unaff_w23 + 1;
      }
    }
    puVar9 = (undefined8 *)0x0;
    aiStack_d0[(int)uVar7] = 0x5e;
    iVar3 = aiStack_d0[2];
    uVar1 = aiStack_d0[2] + 1;
    unaff_x22 = (ulong)uVar1;
    aiStack_d0[2] = uVar1;
    /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8(&uStack_c0,uRam0000000003d33108);
    uVar7 = 0;
    if ((uVar1 != 0) && (uVar7 = unaff_x22, aiStack_d0[iVar3] == 0x5e)) {
      uVar7 = (ulong)(uint)iVar3;
      aiStack_d0[2] = iVar3;
    }
  }
  aiStack_d0[(int)uVar7] = 0x77;
  aiStack_d0[2] = aiStack_d0[2] + 1;
  /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_a0,uRam0000000003d32b60);
  unaff_x26 = param_1;
  do {
    if (unaff_w23 != iStack_17c) {
      return;
    }
    iVar3 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(unaff_x26,0);
    if (iVar3 == 0) {
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_118,unaff_x26,0);
      uStack_148 = uStack_110;
      uStack_150 = uStack_118;
      uStack_140 = uStack_108;
      param_3 = &uStack_150;
      uVar6 = 9;
    }
    else {
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_118,unaff_x26,0);
      uStack_128 = uStack_110;
      uStack_130 = uStack_118;
      uStack_120 = uStack_108;
      param_3 = &uStack_130;
      uVar6 = 10;
    }
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    param_4 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_100,uVar6,param_3,0);
    param_1 = &uStack_100;
    unaff_x26[0x11] = uStack_f8;
    unaff_x26[0x10] = uStack_100;
    unaff_x26[0x13] = uStack_e8;
    unaff_x26[0x12] = uStack_f0;
    if (unaff_x26[0x39] != 0) {
      /*System.Collections.Generic.List<uint>$$Clear*/ func_0x0247eb08(unaff_x26[0x39],uRam0000000003d3c6c8);
      lVar8 = unaff_x26[3];
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)unaff_x26[6];
        /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_100,unaff_x26,0);
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_178 = uStack_f8._4_4_;
        uStack_174 = 4;
        param_3 = (undefined8 *)&uStack_178;
        param_4 = 0;
        /*Core.Networking.NetworkServicesOutput$$WriteGameMode*/ func_0x0165c18c(lVar8,puVar9,param_3,0);
      }
      if ((unaff_x26[2] != 0) && (lVar5 = *(long *)(unaff_x26[2] + 0x88), lVar5 != 0)) {
        /*System.Action$$Invoke*/ func_0x02924c90(lVar5,0);
        if (unaff_x26[0x2e] != 0) {
          /*Core.Networking.NetworkEventResult$$Clear*/ func_0x01659290(unaff_x26[0x2e],0);
          if (unaff_x26[0xe] != 0) {
            param_1 = (undefined8 *)0x3d3b430;
            /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(unaff_x26[0xe],uRam0000000003d3b430);
            if (unaff_x26[0x3a] != 0) {
              /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(unaff_x26[0x3a],uRam0000000003d3b430);
              *(undefined1 *)(unaff_x26 + 0x2d) = 0;
              *(undefined1 *)(unaff_x26 + 0x30) = 0;
              *(undefined1 *)((long)unaff_x26 + 0x16a) = 0;
              return;
            }
          }
        }
      }
    }
LAB_014a6470:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014a64c0;
    puVar9 = (undefined8 *)___cxa_begin_catch();
    puVar9 = (undefined8 *)*puVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_a0,uRam0000000003d32b60);
  } while (puVar9 == (undefined8 *)0x0);
  func_0x00f78ac0(puVar9,0);
code_r0x014a64c0:
  auVar10 = __Unwind_Resume();
  uStack_1e0 = auVar10._8_8_;
  puStack_188 = &Atlas_Networking_NetworkHostSession__OnClientCarUpdate;
  puStack_1d8 = param_3;
  uStack_1b0 = unaff_x22;
  puStack_1a8 = puVar9;
  lStack_1a0 = lVar8;
  puStack_198 = param_1;
  puStack_190 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a53 & 1) == 0) {
    func_0x00f78a20(0x3d53170);
    func_0x00f78a20(0x3d3b3c8);
    func_0x00f78a20(0x3d3e638);
    func_0x00f78a20(0x3d3e610);
    bRam0000000003eb4a53 = 1;
  }
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  auStack_210._0_8_ = 0;
  auStack_210._8_8_ = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  /*Core.Networking.ClientUpdateHolder$$Update<ClientCarUpdate>*/ func_0x0183792c(&uStack_1d0,&uStack_1e0,uRam0000000003d53170);
  uStack_1f8 = uStack_1c8;
  uStack_200 = uStack_1d0;
  uStack_1f0 = uStack_1c0;
  auStack_210 = /*System.Nullable<ClientCarUpdate>$$get_Value*/ func_0x0261bb7c(&uStack_200,uRam0000000003d3e638);
  /*Core.Networking.ClientCarUpdate$$get_Car*/ func_0x0165341c(&uStack_1d0,auStack_210,0);
  uStack_228 = uStack_1c8;
  uStack_230 = uStack_1d0;
  uStack_220 = uStack_1c0;
  auVar11 = /*System.Nullable<CarBase>$$get_Value*/ func_0x0261b1e8(&uStack_230,uRam0000000003d3e610);
  lVar8 = *(long *)(auVar10._0_8_ + 0x40);
  /*Core.Networking.NetworkCar$$FlatBufferToNetworkCar*/ func_0x01658178(&uStack_1d0,auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,param_4,0);
  if (lVar8 == 0) {
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x14a6684);
    (*pcVar2)();
  }
  /*System.Collections.Generic.List<NetworkCar>$$Add*/ func_0x024029ec(lVar8,&uStack_1d0,uRam0000000003d3b3c8);
  return;
}



// ============================================================
// RVA: 0x14a64c4 | Atlas.Networking.NetworkHostSession.OnClientCarUpdate
// ============================================================

void Atlas_Networking_NetworkHostSession__OnClientCarUpdate
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_60 = param_2;
  uStack_58 = param_3;
  if ((bRam0000000003eb4a53 & 1) == 0) {
    func_0x00f78a20(0x3d53170);
    func_0x00f78a20(0x3d3b3c8);
    func_0x00f78a20(0x3d3e638);
    func_0x00f78a20(0x3d3e610);
    bRam0000000003eb4a53 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  /*Core.Networking.ClientUpdateHolder$$Update<ClientCarUpdate>*/ func_0x0183792c(&uStack_50,&uStack_60,uRam0000000003d53170);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_70 = uStack_40;
  auStack_90 = /*System.Nullable<ClientCarUpdate>$$get_Value*/ func_0x0261bb7c(&uStack_80,uRam0000000003d3e638);
  /*Core.Networking.ClientCarUpdate$$get_Car*/ func_0x0165341c(&uStack_50,auStack_90,0);
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_a0 = uStack_40;
  auVar3 = /*System.Nullable<CarBase>$$get_Value*/ func_0x0261b1e8(&uStack_b0,uRam0000000003d3e610);
  lVar2 = *(long *)(param_1 + 0x40);
  /*Core.Networking.NetworkCar$$FlatBufferToNetworkCar*/ func_0x01658178(&uStack_50,auVar3._0_8_,auVar3._8_8_,param_1,param_4,0);
  if (lVar2 != 0) {
    /*System.Collections.Generic.List<NetworkCar>$$Add*/ func_0x024029ec(lVar2,&uStack_50,uRam0000000003d3b3c8);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14a6684);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14a6698 | Atlas.Networking.NetworkHostSession.OnClientVote
// ============================================================

void Atlas_Networking_NetworkHostSession__OnClientVote
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  if ((bRam0000000003eb4a54 & 1) == 0) {
    func_0x00f78a20(0x3d53198);
    func_0x00f78a20(0x3d3e690);
    func_0x00f78a20(0x3d3ee80);
    bRam0000000003eb4a54 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if ((char)param_1[0x1e] != '\0') {
    /*Core.Networking.ClientUpdateHolder$$Update<ClientVote>*/ func_0x01837c38(&uStack_40,&uStack_50,uRam0000000003d53198);
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_60 = uStack_30;
    auStack_90 = /*System.Nullable<ClientVote>$$get_Value*/ func_0x0261e3a0(&uStack_70,uRam0000000003d3e690);
    /*Core.Networking.ClientVote$$get_Vote*/ func_0x0165426c(&uStack_40,auStack_90,0);
    uStack_a8 = uStack_38;
    uStack_b0 = uStack_40;
    uStack_a0 = uStack_30;
    auStack_80 = /*System.Nullable<Vote>$$get_Value*/ func_0x026650f8(&uStack_b0,uRam0000000003d3ee80);
    uVar1 = /*Core.Networking.Vote$$get_SyncId*/ func_0x01661b38(auStack_80,0);
    /*Core.Networking.NetworkSession$$GetPlayer*/ func_0x0165eab8(&uStack_40,param_1,uVar1,0);
    uVar1 = /*Core.Networking.Vote$$get_Data*/ func_0x01661b60(auStack_80,0);
    (**(code **)(*param_1 + 0x1d8))(param_1,&uStack_40,uVar1,*(undefined8 *)(*param_1 + 0x1e0));
  }
  return;
}



// ============================================================
// RVA: 0x14a6874 | Atlas.Networking.NetworkHostSession.OnClientStanding
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014a6c20) */
/* WARNING: Removing unreachable block (ram,0x014a6a5c) */
/* WARNING: Removing unreachable block (ram,0x014a6c08) */

void Atlas_Networking_NetworkHostSession__OnClientStanding
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined2 uStack_16b;
  undefined1 uStack_169;
  undefined8 uStack_168;
  undefined8 uStack_160;
  int aiStack_158 [5];
  int iStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_80 = param_2;
  uStack_78 = param_3;
  if ((bRam0000000003eb4a55 & 1) == 0) {
    func_0x00f78a20(0x3d53188);
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d3b428);
    func_0x00f78a20(0x3d3b440);
    func_0x00f78a20(0x3d3e808);
    func_0x00f78a20(0x3d3e668);
    bRam0000000003eb4a55 = 1;
  }
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  iStack_144 = 0;
  /*Core.Networking.ClientUpdateHolder$$Update<ClientStanding>*/ func_0x01837b00(&uStack_190,&uStack_80,uRam0000000003d53188);
  uStack_b8 = uStack_188;
  uStack_b0 = uStack_180;
  auStack_90 = /*System.Nullable<ClientStanding>$$get_Value*/ func_0x0261d26c(&uStack_c0,uRam0000000003d3e668);
  /*Core.Networking.ClientStanding$$get_Standing*/ func_0x01653c20(&uStack_190,auStack_90,0);
  uStack_d8 = uStack_188;
  uStack_d0 = uStack_180;
  auStack_a0 = /*System.Nullable<EventStanding>$$get_Value*/ func_0x0265075c(&uStack_e0,uRam0000000003d3e808);
  if (*(long *)(param_1 + 0x70) != 0) {
    /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_190,*(long *)(param_1 + 0x70),uRam0000000003d3b440);
    uStack_120 = CONCAT44(uStack_18c,uStack_190);
    uStack_118 = uStack_188;
    uStack_108 = uStack_178;
    uStack_110 = uStack_180;
    uStack_100 = CONCAT17(uStack_169,CONCAT25(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
    uStack_f8 = uStack_168;
    uStack_f0 = uStack_160;
    do {
      uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_120,uRam0000000003d32b08);
      if ((uVar7 & 1) == 0) break;
      iVar1 = (int)uStack_110;
      iVar4 = /*Core.Networking.EventStanding$$get_SyncId*/ func_0x0165493c(auStack_a0,0);
    } while (iVar1 != iVar4);
    aiStack_158[0] = 100;
    iStack_144 = 1;
    /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_120,uRam0000000003d32b00);
    bVar3 = aiStack_158[0] == 100;
    if (bVar3) {
      iStack_144 = 0;
    }
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x1d0) == 0) {
        func_0x00f78af4();
        goto code_r0x014a6d38;
      }
      /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_190,*(long *)(param_1 + 0x1d0),uRam0000000003d3b440);
      uStack_120 = CONCAT44(uStack_18c,uStack_190);
      uStack_118 = uStack_188;
      uStack_108 = uStack_178;
      uStack_110 = uStack_180;
      uStack_100 = CONCAT17(uStack_169,CONCAT25(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
      uStack_f8 = uStack_168;
      uStack_f0 = uStack_160;
      do {
        uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_120,uRam0000000003d32b08);
        if ((uVar7 & 1) == 0) break;
        iVar1 = (int)uStack_110;
        iVar4 = /*Core.Networking.EventStanding$$get_SyncId*/ func_0x0165493c(auStack_a0,0);
      } while (iVar1 != iVar4);
      iVar4 = iStack_144;
      aiStack_158[(int)(uint)!bVar3] = 0xa8;
      iVar1 = iStack_144 + 1;
      iStack_144 = iVar1;
      /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_120,uRam0000000003d32b00);
      if ((iVar1 != 0) && (aiStack_158[iVar4] == 0xa8)) {
        iStack_144 = iVar4;
      }
      if ((uVar7 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x1d0);
        uVar5 = /*Core.Networking.EventStanding$$get_SyncId*/ func_0x0165493c(auStack_a0,0);
        uVar6 = /*Core.Networking.EventStanding$$get_BattleScore*/ func_0x01654990(auStack_a0,0);
        uVar8 = /*Core.Networking.EventStanding$$get_TimeStamp*/ func_0x016549e4(auStack_a0,0);
        /*Core.Networking.NetworkSession$$CreateTime*/ func_0x01658210(&uStack_190,param_1,uVar8,0);
        uStack_140 = CONCAT44(uStack_18c,uStack_190);
        uStack_138 = uStack_188;
        uStack_130 = uStack_180;
        uVar10 = /*Core.Networking.EventStanding$$get_SplinePosition*/ func_0x01654a38(auStack_a0,0);
        uStack_16c = /*Core.Networking.EventStanding$$get_Dnf*/ func_0x01654a90(auStack_a0,0);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014a6d38;
        }
        uStack_180 = uStack_138;
        uStack_188 = uStack_140;
        uStack_178 = uStack_130;
        uStack_16b = 0;
        uStack_169 = 0;
        uStack_190 = uVar5;
        uStack_18c = uVar6;
        uStack_170 = uVar10;
        /*System.Collections.Generic.List<NetworkEventStanding>$$Add*/ func_0x02408354(lVar9,&uStack_190,uRam0000000003d3b428);
      }
    }
    return;
  }
  func_0x00f78af4();
code_r0x014a6d38:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14a6d3c);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14a6d54 | Atlas.Networking.NetworkHostSession.OnClientGameModeData
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014a7038) */

void Atlas_Networking_NetworkHostSession__OnClientGameModeData
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  if ((bRam0000000003eb4a56 & 1) == 0) {
    func_0x00f78a20(0x3d53178);
    func_0x00f78a20(0x3d33108);
    func_0x00f78a20(0x3d33110);
    func_0x00f78a20(0x3d33118);
    func_0x00f78a20(0x3d3c6c0);
    func_0x00f78a20(0x3d3c6d0);
    func_0x00f78a20(0x3d3e860);
    func_0x00f78a20(0x3d3e640);
    bRam0000000003eb4a56 = 1;
  }
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d4 = 0;
  /*Core.Networking.ClientUpdateHolder$$Update<ClientGameModeData>*/ func_0x018379c8(&uStack_108,&uStack_50,uRam0000000003d53178);
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_80 = uStack_f8;
  auStack_60 = /*System.Nullable<ClientGameModeData>$$get_Value*/ func_0x0261c138(&uStack_90,uRam0000000003d3e640);
  /*Core.Networking.ClientGameModeData$$get_GameMode*/ func_0x016535b8(&uStack_108,auStack_60,0);
  uStack_a8 = uStack_100;
  uStack_b0 = uStack_108;
  uStack_a0 = uStack_f8;
  auStack_70 = /*System.Nullable<GameMode>$$get_Value*/ func_0x02650d18(&uStack_b0,uRam0000000003d3e860);
  uVar7 = auStack_70._8_8_;
  uVar5 = auStack_70._0_8_;
  uVar4 = /*Core.Networking.GameMode$$get_StateTime*/ func_0x01654cd4(auStack_70,0);
  /*Core.Networking.NetworkSession$$CreateTime*/ func_0x01658210(&uStack_108,param_1,uVar4,0);
  uStack_118 = uStack_100;
  uStack_120 = uStack_108;
  uStack_110 = uStack_f8;
  /*Core.Networking.NetworkGameMode$$FlatBufferToNetworkGameMode*/ func_0x016599bc(&uStack_108,uVar5,uVar7,&uStack_120,0);
  uStack_148 = uStack_100;
  uStack_150 = uStack_108;
  uStack_138 = uStack_f0;
  uStack_140 = uStack_f8;
  uStack_130 = uStack_e8;
  Atlas_Networking_NetworkHostSession__InternalGameModeLoaded(param_1,&uStack_150);
  iVar2 = /*Core.Networking.GameMode$$get_State*/ func_0x01654cac(auStack_70,0);
  if (iVar2 == 4) {
    uVar5 = /*Core.Networking.GameMode$$get_SyncId*/ func_0x01654d00(auStack_70,0);
    Atlas_Networking_NetworkHostSession__AddAndCheckResultsDone(param_1,uVar5);
  }
  iVar2 = /*Core.Networking.GameMode$$get_State*/ func_0x01654cac(auStack_70,0);
  if (iVar2 == 6) {
    if (*(long *)(param_1 + 0x1d8) == 0) {
      func_0x00f78af4();
code_r0x014a711c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14a7120);
      (*pcVar1)();
    }
    /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc(&uStack_108,*(long *)(param_1 + 0x1d8),uRam0000000003d3c6d0);
    uStack_c8 = uStack_100;
    uStack_d0 = uStack_108;
    uStack_c0 = uStack_f8;
    do {
      uVar6 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec(&uStack_d0,uRam0000000003d33110);
      if ((uVar6 & 1) == 0) break;
      iVar2 = (int)uStack_c0;
      iVar3 = /*Core.Networking.GameMode$$get_SyncId*/ func_0x01654d00(auStack_70,0);
    } while (iVar2 != iVar3);
    iStack_e0 = 0x9a;
    uStack_d4 = 1;
    /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8(&uStack_d0,uRam0000000003d33108);
    if (iStack_e0 == 0x9a) {
      uStack_d4 = 0;
    }
    if ((uVar6 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x1d8);
      uVar5 = /*Core.Networking.GameMode$$get_SyncId*/ func_0x01654d00(auStack_70,0);
      if (lVar8 == 0) {
        func_0x00f78af4(uVar5,uVar5);
        goto code_r0x014a711c;
      }
      /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar8,uVar5,uRam0000000003d3c6c0);
      Atlas_Networking_NetworkHostSession__CheckAndAdvanceHostMigration(param_1);
    }
  }
  return;
}



// ============================================================
// RVA: 0x14a7138 | Atlas.Networking.NetworkHostSession.OnClientRequestUsable
// ============================================================

void Atlas_Networking_NetworkHostSession__OnClientRequestUsable
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_60 = param_2;
  uStack_58 = param_3;
  if ((bRam0000000003eb4a57 & 1) == 0) {
    func_0x00f78a20(0x3d2a468);
    func_0x00f78a20(0x3d53180);
    func_0x00f78a20(0x3d3e648);
    bRam0000000003eb4a57 = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  /*Core.Networking.ClientUpdateHolder$$Update<ClientRequestUsable>*/ func_0x01837a64(&uStack_50,&uStack_60,uRam0000000003d53180);
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_80 = uStack_40;
  auStack_70 = /*System.Nullable<ClientRequestUsable>$$get_Value*/ func_0x0261c6f4(&uStack_90,uRam0000000003d3e648);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    uVar2 = /*Core.Networking.ClientRequestUsable$$get_UsableTable*/ func_0x01653768(auStack_70,0);
    /*Core.Networking.NetworkSession$$GetPlayer*/ func_0x0165eab8(&uStack_50,param_1,param_4,0);
    if (lVar3 != 0) {
      /*System.Action<short, NetworkPlayer>$$Invoke*/ func_0x01e6c020(lVar3,uVar2,&uStack_50,uRam0000000003d2a468);
      return;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14a72d4);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14a72e8 | Atlas.Networking.NetworkHostSession..ctor
// ============================================================

undefined1  [16] Atlas_Networking_NetworkHostSession___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4a58 & 1) == 0) {
    func_0x00f78a20(0x3d3b460);
    func_0x00f78a20(0x3d3b420);
    func_0x00f78a20(0x3d3c6b8);
    func_0x00f78a20(0x3d1df80);
    func_0x00f78a20(0x3d1dc20);
    func_0x00f78a20(0x3d1dc18);
    bRam0000000003eb4a58 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkGameMode>_TypeInfo*/ uRam0000000003d1dc20);
  /*System.Collections.Generic.List<NetworkGameMode>$$.ctor*/ func_0x0240a428(uVar1,8,uRam0000000003d3b460);
  *(undefined8 *)(param_1 + 0x1c0) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
  /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(uVar1,8,uRam0000000003d3c6b8);
  *(undefined8 *)(param_1 + 0x1c8) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
  /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(uVar1,0xc,uRam0000000003d3b420);
  *(undefined8 *)(param_1 + 0x1d0) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
  /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(uVar1,8,uRam0000000003d3c6b8);
  *(undefined8 *)(param_1 + 0x1d8) = uVar1;
  if ((bRam0000000003eb5851 & 1) == 0) {
    func_0x00f78a20(0x3d3b3c0,0);
    func_0x00f78a20(0x3d3b500);
    func_0x00f78a20(0x3d3b420);
    func_0x00f78a20(0x3d3b5a0);
    func_0x00f78a20(0x3d3b628);
    func_0x00f78a20(0x3d3b5e8);
    func_0x00f78a20(0x3d3b658);
    func_0x00f78a20(0x3d1dc50);
    func_0x00f78a20(0x3d1dc60);
    func_0x00f78a20(0x3d1dc18);
    func_0x00f78a20(0x3d1dc58);
    func_0x00f78a20(0x3d1dc08);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d1dc38);
    bRam0000000003eb5851 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkCar>_TypeInfo*/ uRam0000000003d1dc08);
  /*System.Collections.Generic.List<NetworkCar>$$.ctor*/ func_0x02401db8(uVar1,8,uRam0000000003d3b3c0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkCar>_TypeInfo*/ uRam0000000003d1dc08);
  /*System.Collections.Generic.List<NetworkCar>$$.ctor*/ func_0x02401db8(uVar1,8,uRam0000000003d3b3c0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkUsable>_TypeInfo*/ uRam0000000003d1dc58);
  /*System.Collections.Generic.List<NetworkUsable>$$.ctor*/ func_0x0241def8(uVar1,8,uRam0000000003d3b628);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkUsable>_TypeInfo*/ uRam0000000003d1dc58);
  /*System.Collections.Generic.List<NetworkUsable>$$.ctor*/ func_0x0241def8(uVar1,8,uRam0000000003d3b628);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
  /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412e80(uVar1,8,uRam0000000003d3b500);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVote>_TypeInfo*/ uRam0000000003d1dc60);
  /*System.Collections.Generic.List<NetworkVote>$$.ctor*/ func_0x02420d24(uVar1,0xc,uRam0000000003d3b658);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
  /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar1,0xc,uRam0000000003d3b5a0);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
  /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(uVar1,8,uRam0000000003d3b420);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkSpawnPosition>_TypeInfo*/ uRam0000000003d1dc50);
  /*System.Collections.Generic.List<NetworkSpawnPosition>$$.ctor*/ func_0x0241b480(uVar1,0xc,uRam0000000003d3b5e8);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
  /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412e80(uVar1,8,uRam0000000003d3b500);
  *(undefined8 *)(param_1 + 400) = uVar1;
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x19c) = 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



