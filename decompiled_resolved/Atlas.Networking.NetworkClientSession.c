// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.NetworkClientSession

// ============================================================
// RVA: 0x14a0548 | Atlas.Networking.NetworkClientSession.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x014a076c: Changing call to branch */

void Atlas_Networking_NetworkClientSession__Update(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int extraout_w1;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_110 [16];
  undefined8 *puStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4a36 & 1) == 0) {
    func_0x00f78a20(0x3d335e8);
    func_0x00f78a20(0x3d335f0);
    func_0x00f78a20(0x3d335f8);
    func_0x00f78a20(0x3d3b3d0);
    func_0x00f78a20(0x3d3b638);
    func_0x00f78a20(0x3d3d548);
    func_0x00f78a20(0x3d3e678);
    func_0x00f78a20(0x3d3e900);
    func_0x00f78a20(0x3d3e908);
    func_0x00f78a20(0x3d3e680);
    bRam0000000003eb4a36 = 1;
  }
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uVar6 = 0;
  /*Core.Networking.NetworkSession$$Update*/ func_0x0165ddac(param_1,param_2);
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_014a07fc;
  /*System.Collections.Generic.List<NetworkCar>$$Clear*/ func_0x02402d04(*(long *)(param_1 + 0x40),uRam0000000003d3b3d0);
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_014a07fc;
  /*System.Collections.Generic.List<NetworkUsable>$$Clear*/ func_0x0241eeec(*(long *)(param_1 + 0x48),uRam0000000003d3b638);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    if (lVar3 == 0) goto LAB_014a07fc;
    puVar5 = (undefined8 *)0x3d335e8;
    /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$GetEnumerator*/ func_0x02558764(&uStack_e0,lVar3,uRam0000000003d3d548);
    uStack_68 = uStack_d8;
    uStack_70 = uStack_e0;
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkServicesInput.NetworkData>$$MoveNext*/ func_0x01f80828(&uStack_70,uRam0000000003d335f0);
      uVar1 = uStack_60;
      if ((uVar4 & 1) == 0) break;
      if ((int)uStack_60 != 0) {
        auVar8 = /*Core.Networking.UpdateHolder$$GetRootAsUpdateHolder*/ func_0x016625c8(uStack_58,0);
        auStack_80 = auVar8;
        /*Core.Networking.UpdateHolder$$get_Host*/ func_0x01662638(&uStack_e0,auStack_80,0);
        uVar4 = uStack_d0;
        uStack_98 = uStack_d8;
        uStack_a0 = uStack_e0;
        uStack_90 = uStack_d0;
        /*Core.Networking.UpdateHolder$$get_Client*/ func_0x016626e0(&uStack_e0,auStack_80,0);
        uStack_b0 = uStack_d0;
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        if (((uVar4 & 0xff) != 0 && (uStack_d0 & 0xff) != 0) !=
            ((uVar4 & 0xff) != 0 || (uStack_d0 & 0xff) != 0)) {
          if ((uVar4 & 0xff) != 0) {
            /*Core.Networking.UpdateHolder$$get_Host*/ func_0x01662638(&uStack_e0,auStack_80,0);
            uStack_98 = uStack_d8;
            uStack_a0 = uStack_e0;
            uStack_90 = uStack_d0;
            auStack_110 = /*System.Nullable<HostUpdateHolder>$$get_Value*/ func_0x026550fc(&uStack_a0,uRam0000000003d3e908);
            puVar7 = (undefined *)0x14a0770;
            lVar3 = param_1;
            goto code_r0x014a085c;
          }
          if ((uStack_d0 & 0xff) != 0) {
            /*Core.Networking.UpdateHolder$$get_Client*/ func_0x016626e0(&uStack_e0,auStack_80,0);
            uStack_b8 = uStack_d8;
            uStack_c0 = uStack_e0;
            uStack_b0 = uStack_d0;
            auVar8 = /*System.Nullable<ClientUpdateHolder>$$get_Value*/ func_0x0261d828(&uStack_c0,uRam0000000003d3e680);
            uVar6 = auVar8._8_8_;
            /*Atlas.Networking.NetworkClientSession$$OnClientUpdate*/ func_0x014a0960(param_1,auVar8._0_8_,uVar6,uVar1 >> 0x20);
          }
        }
      }
    }
    /*System.Collections.Generic.List.Enumerator<NetworkServicesInput.NetworkData>$$Dispose*/ func_0x01f80824(&uStack_70,uRam0000000003d335e8);
    while (param_2 = puVar5, *(long *)(param_1 + 0x20) == 0) {
LAB_014a07fc:
      func_0x00f78af4();
      puVar5 = param_2;
      if (extraout_w1 != 1) goto code_r0x014a0858;
      puVar5 = (undefined8 *)___cxa_begin_catch();
      puVar5 = (undefined8 *)*puVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkServicesInput.NetworkData>$$Dispose*/ func_0x01f80824(&uStack_70,*param_2);
      if (puVar5 != (undefined8 *)0x0) {
        func_0x00f78ac0(puVar5,0);
code_r0x014a0858:
        puVar7 = &Atlas_Networking_NetworkClientSession__OnHostUpdate;
        auVar8 = __Unwind_Resume();
        auStack_110._8_8_ = uVar6;
        auStack_110._0_8_ = auVar8._8_8_;
        lVar3 = auVar8._0_8_;
code_r0x014a085c:
        puStack_100 = puVar5;
        lStack_f8 = param_1;
        puStack_f0 = &stack0xfffffffffffffff0;
        puStack_e8 = puVar7;
        uVar2 = /*Core.Networking.HostUpdateHolder$$get_UpdateType*/ func_0x01656d20(auStack_110,0);
        switch(uVar2) {
        case 1:
          /*Atlas.Networking.NetworkClientSession$$OnHostCarUpdate*/ func_0x014a0d50(lVar3,auStack_110._0_8_,auStack_110._8_8_);
          break;
        case 2:
          /*Atlas.Networking.NetworkClientSession$$OnHostHostVoteStart*/ func_0x014a1464(lVar3,auStack_110._0_8_,auStack_110._8_8_);
          break;
        case 3:
          /*Atlas.Networking.NetworkClientSession$$OnHostVoteUpdate*/ func_0x014a0f4c(lVar3,auStack_110._0_8_,auStack_110._8_8_);
          break;
        case 4:
          /*Atlas.Networking.NetworkClientSession$$OnHostVoteResult*/ func_0x014a1790(lVar3,auStack_110._0_8_,auStack_110._8_8_);
          break;
        case 5:
          /*Atlas.Networking.NetworkClientSession$$OnHostGameModeUpdate*/ func_0x014a1cd0(lVar3,auStack_110._0_8_,auStack_110._8_8_);
          break;
        case 6:
          /*Atlas.Networking.NetworkClientSession$$OnHostEventResults*/ func_0x014a2764(lVar3,auStack_110._0_8_,auStack_110._8_8_);
          break;
        case 7:
          /*Atlas.Networking.NetworkClientSession$$OnHostUsable*/ func_0x014a1a48(lVar3,auStack_110._0_8_,auStack_110._8_8_);
          break;
        case 8:
          /*Atlas.Networking.NetworkClientSession$$OnHostUsableResponse*/ func_0x014a324c(lVar3,auStack_110._0_8_,auStack_110._8_8_);
          break;
        case 9:
          /*Atlas.Networking.NetworkClientSession$$OnHostStanding*/ func_0x014a2050(lVar3,auStack_110._0_8_,auStack_110._8_8_);
          break;
        case 10:
          /*Atlas.Networking.NetworkClientSession$$OnHostMigration*/ func_0x014a2e24(lVar3,auStack_110._0_8_,auStack_110._8_8_);
          break;
        case 0xb:
          /*Atlas.Networking.NetworkClientSession$$OnHostMigrationDone*/ func_0x014a3054(lVar3,auStack_110._0_8_,auStack_110._8_8_);
        }
        return;
      }
    }
    /*Core.Networking.NetworkServicesInput$$Clear*/ func_0x0165abe8(*(long *)(param_1 + 0x20),0);
  }
  return;
}



// ============================================================
// RVA: 0x14a085c | Atlas.Networking.NetworkClientSession.OnHostUpdate
// ============================================================

void Atlas_Networking_NetworkClientSession__OnHostUpdate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  uVar1 = /*Core.Networking.HostUpdateHolder$$get_UpdateType*/ func_0x01656d20(&uStack_30,0);
  switch(uVar1) {
  case 1:
    /*Atlas.Networking.NetworkClientSession$$OnHostCarUpdate*/ func_0x014a0d50(param_1,uStack_30,uStack_28);
    break;
  case 2:
    /*Atlas.Networking.NetworkClientSession$$OnHostHostVoteStart*/ func_0x014a1464(param_1,uStack_30,uStack_28);
    break;
  case 3:
    /*Atlas.Networking.NetworkClientSession$$OnHostVoteUpdate*/ func_0x014a0f4c(param_1,uStack_30,uStack_28);
    break;
  case 4:
    /*Atlas.Networking.NetworkClientSession$$OnHostVoteResult*/ func_0x014a1790(param_1,uStack_30,uStack_28);
    break;
  case 5:
    /*Atlas.Networking.NetworkClientSession$$OnHostGameModeUpdate*/ func_0x014a1cd0(param_1,uStack_30,uStack_28);
    break;
  case 6:
    /*Atlas.Networking.NetworkClientSession$$OnHostEventResults*/ func_0x014a2764(param_1,uStack_30,uStack_28);
    break;
  case 7:
    /*Atlas.Networking.NetworkClientSession$$OnHostUsable*/ func_0x014a1a48(param_1,uStack_30,uStack_28);
    break;
  case 8:
    /*Atlas.Networking.NetworkClientSession$$OnHostUsableResponse*/ func_0x014a324c(param_1,uStack_30,uStack_28);
    break;
  case 9:
    /*Atlas.Networking.NetworkClientSession$$OnHostStanding*/ func_0x014a2050(param_1,uStack_30,uStack_28);
    break;
  case 10:
    /*Atlas.Networking.NetworkClientSession$$OnHostMigration*/ func_0x014a2e24(param_1,uStack_30,uStack_28);
    break;
  case 0xb:
    /*Atlas.Networking.NetworkClientSession$$OnHostMigrationDone*/ func_0x014a3054(param_1,uStack_30,uStack_28);
  }
  return;
}



// ============================================================
// RVA: 0x14a0960 | Atlas.Networking.NetworkClientSession.OnClientUpdate
// ============================================================

void Atlas_Networking_NetworkClientSession__OnClientUpdate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  iVar1 = /*Core.Networking.ClientUpdateHolder$$get_UpdateType*/ func_0x01653e24(&uStack_30,0);
  if (iVar1 == 3) {
    /*Core.Networking.NetworkSession$$OnClientUsable*/ func_0x0165fe18(param_1,uStack_30,uStack_28,param_4,0);
  }
  return;
}



// ============================================================
// RVA: 0x14a09b4 | Atlas.Networking.NetworkClientSession.LateUpdate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a0aa8 | Atlas.Networking.NetworkClientSession.CastVote
// ============================================================

/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b544: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0165b548) */
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
/* WARNING: Removing unreachable block (ram,0x0165b5a0) */
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

ulong Atlas_Networking_NetworkClientSession__CastVote(ulong param_1,long param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar10;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar2 = param_1;
  if (((*(char *)(param_1 + 0xf0) == '\0') || (uVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(param_2,0), (int)uVar2 == 0))
     || (uVar2 = 0, *(long *)(param_1 + 0x18) == 0)) {
    return uVar2;
  }
  uVar5 = CONCAT44(param_3,*(undefined4 *)(param_2 + 0xc));
  uVar2 = uVar5 & 0xffffffffffff;
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) {
    puVar11 = &Core_Networking_NetworkVote__ToFlatBuffer;
    auVar12 = func_0x00f78af4();
    lVar6 = auVar12._8_8_;
    puVar3 = auVar12._0_8_;
    uVar2 = (ulong)*puVar3;
    lVar7 = (long)(short)puVar3[1];
    lVar9 = (long)(char)puVar3[2];
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar6,0);
    lVar7 = (long)(uVar5 << 0x10) >> 0x30;
    lVar9 = 0;
    puVar11 = &UNK_0165b6c4;
  }
  ppuVar10 = &puStack_40;
  lVar8 = lVar7;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar11;
  if ((bRam0000000003eb5873 & 1) == 0) {
    func_0x00f78a20(0x3d3f298);
    bRam0000000003eb5873 = 1;
  }
  if (lVar6 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar6,4,8,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar6,1,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(lVar6,lVar9,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar6,lVar7,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(lVar6,uVar2,0);
    if ((*(long *)(lVar6 + 0x18) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar6 + 0x18) + 0x10), lVar7 != 0)) {
      return (ulong)(uint)(*(int *)(lVar7 + 0x18) - *(int *)(lVar6 + 0x10));
    }
    lVar6 = func_0x00f78af4(lVar6,0);
    return (ulong)*(byte *)(lVar6 + 0x48);
  }
  puVar11 = &Core_Networking_NetworkVoteUpdate__Clear;
  lVar4 = func_0x00f78af4();
  lVar6 = 0;
  puVar1 = &stack0xffffffffffffff90;
  while( true ) {
    *(ulong *)(puVar1 + -0x20) = uVar2;
    *(long *)(puVar1 + -0x18) = lVar6;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar10;
    *(undefined **)(puVar1 + -8) = puVar11;
    if ((bRam0000000003eb5862 & 1) == 0) {
      func_0x00f78a20(0x3d3b670);
      bRam0000000003eb5862 = 1;
    }
    uVar2 = *(ulong *)(lVar4 + 0x10);
    if (uVar2 != 0) break;
    auVar12 = func_0x00f78af4();
    lVar6 = auVar12._0_8_;
    *(undefined8 *)(puVar1 + -0x70) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x68) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x60) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x58) = 0x3eb5000;
    *(long *)(puVar1 + -0x50) = lVar9;
    *(long *)(puVar1 + -0x48) = lVar7;
    *(undefined8 *)(puVar1 + -0x40) = 0x3eb5000;
    *(long *)(puVar1 + -0x38) = lVar4;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
    ppuVar10 = (undefined1 **)(puVar1 + -0x30);
    *(long *)(puVar1 + -0x80) = auVar12._8_8_;
    *(long *)(puVar1 + -0x78) = lVar8;
    uVar2 = 0x3eb5000;
    if ((bRam0000000003eb5863 & 1) == 0) {
      func_0x00f78a20(0x3d3b660);
      func_0x00f78a20(0x3d3ee80);
      bRam0000000003eb5863 = 1;
    }
    *(undefined8 *)(puVar1 + -0xb0) = 0;
    *(undefined8 *)(puVar1 + -0xa8) = 0;
    *(undefined8 *)(puVar1 + -0xa0) = 0;
    puVar11 = &UNK_01661a5c;
    puVar1 = puVar1 + -0xd0;
    lVar4 = lVar6;
  }
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  uVar5 = uVar2;
  if (0 < *(int *)(uVar2 + 0x18)) {
    uVar5 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar2 + 0x10),0,*(int *)(uVar2 + 0x18),0);
    *(undefined4 *)(uVar2 + 0x18) = 0;
  }
  *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
  return uVar5;
}



// ============================================================
// RVA: 0x14a0b1c | Atlas.Networking.NetworkClientSession.CastVotes
// ============================================================

void Atlas_Networking_NetworkClientSession__CastVotes(void)

{
  return;
}



// ============================================================
// RVA: 0x14a0b20 | Atlas.Networking.NetworkClientSession.RequestUsableFromHost
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a0b40 | Atlas.Networking.NetworkClientSession.RequestResultsFinished
// ============================================================

void Atlas_Networking_NetworkClientSession__RequestResultsFinished(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  
  *(undefined1 *)(param_1 + 0x16a) = 1;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_40,param_1,0);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = uStack_34;
    uStack_64 = 4;
    /*Core.Networking.NetworkServicesOutput$$WriteGameModeDataToHost*/ func_0x0165c0bc(lVar1,uVar2,&uStack_68,0);
  }
  return;
}



// ============================================================
// RVA: 0x14a0ba8 | Atlas.Networking.NetworkClientSession.RequestGameModeLoaded
// ============================================================

void Atlas_Networking_NetworkClientSession__RequestGameModeLoaded(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [12];
  undefined4 uStack_44;
  
  *(undefined1 *)(param_1 + 0x16b) = 1;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(auStack_50,param_1,0);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = uStack_44;
    uStack_74 = 1;
    /*Core.Networking.NetworkServicesOutput$$WriteGameModeDataToHost*/ func_0x0165c0bc(lVar1,uVar2,&uStack_78,0);
  }
  return;
}



// ============================================================
// RVA: 0x14a0c14 | Atlas.Networking.NetworkClientSession.RequestOwnedPlayerFinished
// ============================================================

void Atlas_Networking_NetworkClientSession__RequestOwnedPlayerFinished
               (undefined4 param_1,long param_2,long param_3,undefined1 *param_4,undefined1 param_5,
               undefined4 *param_6)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  char cStack_84;
  undefined8 uStack_83;
  undefined7 uStack_7b;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  long lStack_58;
  
  puVar5 = &uStack_b0;
  lStack_58 = *(long *)PTR_03a5d648;
  puVar4 = param_4;
  iVar3 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(param_3,0);
  puStack_118 = puVar4;
  if (iVar3 != 0) {
    uStack_70 = *(undefined8 *)((long)param_6 + 5);
    uStack_68 = (undefined7)*(undefined8 *)((long)param_6 + 0xd);
    uStack_61 = param_6[5];
    uVar6 = *param_6;
    cVar1 = *(char *)(param_6 + 1);
    if (*(char *)(param_6 + 1) == '\0') {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_88,param_2,0);
      uStack_68 = uStack_7b;
      uStack_70 = uStack_83;
      uStack_61 = uStack_74;
      uVar6 = uStack_88;
      cVar1 = cStack_84;
    }
    *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)(param_3 + 0xc);
    *(int *)(param_2 + 0x144) = (int)param_4;
    *(undefined4 *)(param_2 + 0x148) = uVar6;
    *(char *)(param_2 + 0x14c) = cVar1;
    *(ulong *)(param_2 + 0x155) = CONCAT17((undefined1)uStack_61,uStack_68);
    *(undefined8 *)(param_2 + 0x14d) = uStack_70;
    *(undefined4 *)(param_2 + 0x15c) = uStack_61;
    *(undefined4 *)(param_2 + 0x160) = param_1;
    *(undefined1 *)(param_2 + 0x164) = param_5;
    *(undefined2 *)(param_2 + 0x165) = 0;
    *(undefined1 *)(param_2 + 0x167) = 0;
    *(undefined1 *)(param_2 + 0x169) = 1;
    puStack_118 = puVar4;
    if (*(long *)(param_2 + 0x18) != 0) {
      uStack_a8 = *(undefined8 *)(param_2 + 0x148);
      uStack_b0 = *(undefined8 *)(param_2 + 0x140);
      uStack_98 = *(undefined8 *)(param_2 + 0x158);
      uStack_a0 = *(undefined8 *)(param_2 + 0x150);
      uStack_90 = *(undefined8 *)(param_2 + 0x160);
      /*Core.Networking.NetworkServicesOutput$$WriteEventStandingToHost*/ func_0x0165c25c(*(long *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x30),&uStack_b0,0);
      puStack_118 = (undefined1 *)puVar5;
    }
  }
  if (*(long *)PTR_03a5d648 == lStack_58) {
    return;
  }
  auVar8 = ___stack_chk_fail();
  uStack_120 = auVar8._8_8_;
  if ((bRam0000000003eb4a38 & 1) == 0) {
    func_0x00f78a20(0x3d57e50);
    func_0x00f78a20(0x3d3b3c8);
    func_0x00f78a20(0x3d3e8a0);
    func_0x00f78a20(0x3d3e600);
    bRam0000000003eb4a38 = 1;
  }
  auStack_130._0_8_ = 0;
  auStack_130._8_8_ = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostCarUpdate>*/ func_0x0185da6c(&uStack_110,&uStack_120,uRam0000000003d57e50);
  uStack_148 = uStack_108;
  uStack_150 = uStack_110;
  uStack_140 = uStack_100;
  auStack_130 = /*System.Nullable<HostCarUpdate>$$get_Value*/ func_0x0265231c(&uStack_150,uRam0000000003d3e8a0);
  iVar3 = /*Core.Networking.HostCarUpdate$$get_CarsLength*/ func_0x01654f5c(auStack_130,0);
  while( true ) {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      return;
    }
    /*Core.Networking.HostCarUpdate$$Cars*/ func_0x01654eb0(&uStack_110,auStack_130,iVar3,0);
    uStack_168 = uStack_108;
    uStack_170 = uStack_110;
    uStack_160 = uStack_100;
    auVar9 = /*System.Nullable<Car>$$get_Value*/ func_0x0261ac2c(&uStack_170,uRam0000000003d3e600);
    lVar7 = *(long *)(auVar8._0_8_ + 0x40);
    /*Core.Networking.NetworkCar$$FlatBufferToNetworkCar*/ func_0x01658108(&uStack_110,auVar9._0_8_,auVar9._8_8_,auVar8._0_8_,0);
    if (lVar7 == 0) break;
    /*System.Collections.Generic.List<NetworkCar>$$Add*/ func_0x024029ec(lVar7,&uStack_110,uRam0000000003d3b3c8);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14a0f38);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14a0d50 | Atlas.Networking.NetworkClientSession.OnHostCarUpdate
// ============================================================

void Atlas_Networking_NetworkClientSession__OnHostCarUpdate
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_70 = param_2;
  uStack_68 = param_3;
  if ((bRam0000000003eb4a38 & 1) == 0) {
    func_0x00f78a20(0x3d57e50);
    func_0x00f78a20(0x3d3b3c8);
    func_0x00f78a20(0x3d3e8a0);
    func_0x00f78a20(0x3d3e600);
    bRam0000000003eb4a38 = 1;
  }
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostCarUpdate>*/ func_0x0185da6c(&uStack_60,&uStack_70,uRam0000000003d57e50);
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_90 = uStack_50;
  auStack_80 = /*System.Nullable<HostCarUpdate>$$get_Value*/ func_0x0265231c(&uStack_a0,uRam0000000003d3e8a0);
  iVar2 = /*Core.Networking.HostCarUpdate$$get_CarsLength*/ func_0x01654f5c(auStack_80,0);
  while( true ) {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return;
    }
    /*Core.Networking.HostCarUpdate$$Cars*/ func_0x01654eb0(&uStack_60,auStack_80,iVar2,0);
    uStack_b8 = uStack_58;
    uStack_c0 = uStack_60;
    uStack_b0 = uStack_50;
    auVar4 = /*System.Nullable<Car>$$get_Value*/ func_0x0261ac2c(&uStack_c0,uRam0000000003d3e600);
    lVar3 = *(long *)(param_1 + 0x40);
    /*Core.Networking.NetworkCar$$FlatBufferToNetworkCar*/ func_0x01658108(&uStack_60,auVar4._0_8_,auVar4._8_8_,param_1,0);
    if (lVar3 == 0) break;
    /*System.Collections.Generic.List<NetworkCar>$$Add*/ func_0x024029ec(lVar3,&uStack_60,uRam0000000003d3b3c8);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14a0f38);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14a0f4c | Atlas.Networking.NetworkClientSession.OnHostVoteUpdate
// ============================================================

void Atlas_Networking_NetworkClientSession__OnHostVoteUpdate
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  uStack_80 = param_2;
  uStack_78 = param_3;
  if ((bRam0000000003eb4a39 & 1) == 0) {
    func_0x00f78a20(0x3d2a250);
    func_0x00f78a20(0x3d2a4c0);
    func_0x00f78a20(0x3d57ea0);
    func_0x00f78a20(0x3d3b660);
    func_0x00f78a20(0x3d3b658);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d3b6c8);
    func_0x00f78a20(0x3d3b6d0);
    func_0x00f78a20(0x3d1dc60);
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d3e930);
    func_0x00f78a20(0x3d3ee80);
    bRam0000000003eb4a39 = 1;
  }
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  auStack_d0._0_8_ = 0;
  auStack_d0._8_8_ = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostVoteUpdate>*/ func_0x0185e084(&uStack_70,&uStack_80,uRam0000000003d57ea0);
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  uStack_a0 = lStack_60;
  auStack_90 = /*System.Nullable<HostVoteUpdate>$$get_Value*/ func_0x02656da8(&uStack_b0,uRam0000000003d3e930);
  uVar8 = auStack_90._8_8_;
  if (*(char *)(param_1 + 0xf0) != '\0') {
    if (*(long *)(param_1 + 0x178) == 0) {
      func_0x00f78af4(0,uVar8,uVar8);
      goto code_r0x014a144c;
    }
    /*Core.Networking.NetworkVoteUpdate$$Set*/ func_0x016619fc(*(long *)(param_1 + 0x178),auStack_90._0_8_,uVar8,0);
    *(undefined1 *)(param_1 + 0x180) = 0;
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_110,param_1,0);
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    lStack_60 = uStack_100;
    uStack_108 = *(undefined8 *)(param_1 + 0x100);
    uStack_110 = *(undefined8 *)(param_1 + 0xf8);
    uStack_100 = *(undefined8 *)(param_1 + 0x108);
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    uStack_120 = lStack_60;
    uStack_148 = uStack_108;
    uStack_150 = uStack_110;
    uStack_140 = uStack_100;
    uVar6 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50(&uStack_130,&uStack_150,0);
    if ((uVar6 & 1) == 0) {
      iVar2 = /*Core.Networking.HostVoteUpdate$$get_VotesLength*/ func_0x016579a4(auStack_90,0);
      if (*(long *)(param_1 + 0x58) == 0) {
        func_0x00f78af4();
        goto code_r0x014a144c;
      }
      if (iVar2 == *(int *)(*(long *)(param_1 + 0x58) + 0x18)) {
        *(undefined1 *)(param_1 + 0xf0) = 0;
        if (*(long *)(param_1 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x014a144c;
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014a144c;
        }
        /*System.Action<ReflectionProbe, ReflectionProbe.ReflectionProbeEvent>$$Invoke*/ func_0x01e6e6d8(lVar7,*(undefined8 *)(param_1 + 0x178),0,uRam0000000003d2a4c0);
      }
      else {
        if (*(long *)(param_1 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x014a144c;
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014a144c;
        }
        /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(lVar7,*(undefined8 *)(param_1 + 0x178),uRam0000000003d2a250);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xf0) = 0;
      if (*(long *)(param_1 + 0x10) == 0) {
        func_0x00f78af4();
        goto code_r0x014a144c;
      }
      lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
      if (lVar7 == 0) {
        func_0x00f78af4();
        goto code_r0x014a144c;
      }
      /*System.Action<ReflectionProbe, ReflectionProbe.ReflectionProbeEvent>$$Invoke*/ func_0x01e6e6d8(lVar7,*(undefined8 *)(param_1 + 0x178),1,uRam0000000003d2a4c0);
    }
    if (*(char *)(param_1 + 0xf0) == '\0') {
      lVar7 = *(long *)(param_1 + 0xd0);
      if (lVar7 == 0) {
        func_0x00f78af4();
code_r0x014a144c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14a1450);
        (*pcVar1)();
      }
      if (*(int *)(lVar7 + 0x18) != 0) {
        lVar7 = *(long *)(lVar7 + 0x10) + (long)(*(int *)(lVar7 + 0x18) + -1) * 0x18;
        uStack_b8 = *(undefined8 *)(lVar7 + 0x28);
        uStack_c0 = *(undefined8 *)(lVar7 + 0x20);
        uVar8 = /*Core.Networking.HostVoteUpdate$$get_VotesLength*/ func_0x016579a4(auStack_90,0);
        lVar7 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVote>_TypeInfo*/ uRam0000000003d1dc60);
        /*System.Collections.Generic.List<NetworkVote>$$.ctor*/ func_0x02420d24(lVar7,uVar8,uRam0000000003d3b658);
        iVar2 = 0;
        while( true ) {
          iVar3 = /*Core.Networking.HostVoteUpdate$$get_VotesLength*/ func_0x016579a4(auStack_90,0);
          if (iVar3 <= iVar2) break;
          /*Core.Networking.HostVoteUpdate$$Votes*/ func_0x016578fc(&uStack_70,auStack_90,iVar2,0);
          uStack_e8 = uStack_68;
          uStack_f0 = uStack_70;
          uStack_e0 = lStack_60;
          auVar10 = /*System.Nullable<Vote>$$get_Value*/ func_0x026650f8(&uStack_f0,uRam0000000003d3ee80);
          auStack_d0 = auVar10;
          uVar6 = /*Core.Networking.Vote$$get_SyncId*/ func_0x01661b38(auStack_d0,0);
          uVar4 = /*Core.Networking.Vote$$get_Data*/ func_0x01661b60(auStack_d0,0);
          uVar5 = /*Core.Networking.Vote$$get_Type*/ func_0x01661b8c(auStack_d0,0);
          if (lVar7 == 0) {
            func_0x00f78af4();
            goto code_r0x014a144c;
          }
          /*System.Collections.Generic.List<NetworkVote>$$Add*/ func_0x0242193c(lVar7,uVar6 & 0xffffffff | (ulong)(uVar4 & 0xffff) << 0x20,uVar5,
                          uRam0000000003d3b660);
          iVar2 = iVar2 + 1;
        }
        lVar9 = *(long *)(param_1 + 0xd0);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014a144c;
        }
        uStack_68 = uStack_b8;
        uStack_70 = uStack_c0;
        lStack_60 = lVar7;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$set_Item*/ func_0x024241ac(lVar9,*(int *)(lVar9 + 0x18) + -1,&uStack_70,uRam0000000003d3b6d0);
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x14a1464 | Atlas.Networking.NetworkClientSession.OnHostHostVoteStart
// ============================================================

void Atlas_Networking_NetworkClientSession__OnHostHostVoteStart
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  uStack_90 = param_2;
  uStack_88 = param_3;
  if ((bRam0000000003eb4a3a & 1) == 0) {
    func_0x00f78a20(0x3d2a240);
    func_0x00f78a20(0x3d57e98);
    func_0x00f78a20(0x3d3b6b0);
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d3e928);
    bRam0000000003eb4a3a = 1;
  }
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostVoteStart>*/ func_0x0185dfe8(&uStack_80,&uStack_90,uRam0000000003d57e98);
  auStack_a0 = /*System.Nullable<HostVoteStart>$$get_Value*/ func_0x026567ec(&uStack_c0,uRam0000000003d3e928);
  uVar7 = /*Core.Networking.HostVoteStart$$get_CompleteTimeStamp*/ func_0x01657680(auStack_a0,0);
  /*Core.Networking.NetworkSession$$CreateTime*/ func_0x01658210(&uStack_80,param_1,uVar7,0);
  *(ulong *)(param_1 + 0x100) = CONCAT44(uStack_74,CONCAT22(uStack_76,uStack_78));
  *(ulong *)(param_1 + 0xf8) = CONCAT26(uStack_7a,CONCAT24(uStack_7c,CONCAT22(uStack_7e,uStack_80)))
  ;
  *(ulong *)(param_1 + 0x108) = CONCAT44(uStack_6c,uStack_70);
  *(undefined1 *)(param_1 + 0xf0) = 1;
  lVar8 = *(long *)(param_1 + 0xd0);
  if (lVar8 == 0) {
    func_0x00f78af4();
  }
  else {
    uVar1 = *(undefined4 *)(lVar8 + 0x18);
    uVar3 = /*Core.Networking.HostVoteStart$$get_Map1*/ func_0x01657530(auStack_a0,0);
    uVar4 = /*Core.Networking.HostVoteStart$$get_Type1*/ func_0x01657584(auStack_a0,0);
    uVar5 = /*Core.Networking.HostVoteStart$$get_Type2*/ func_0x0165762c(auStack_a0,0);
    uStack_76 = /*Core.Networking.HostVoteStart$$get_Type2*/ func_0x0165762c(auStack_a0,0);
    uStack_80 = (undefined2)uVar1;
    uStack_7e = (undefined2)((uint)uVar1 >> 0x10);
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_7c = uVar3;
    uStack_7a = uVar4;
    uStack_78 = uVar5;
    /*System.Collections.Generic.List<NetworkVoteHistory>$$Add*/ func_0x02424534(lVar8,&uStack_80,uRam0000000003d3b6b0);
    uStack_118 = *(undefined8 *)(param_1 + 0x100);
    uStack_120 = *(undefined8 *)(param_1 + 0xf8);
    uStack_110 = *(undefined8 *)(param_1 + 0x108);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_100,3,&uStack_120,0);
    *(undefined8 *)(param_1 + 0x88) = uStack_f8;
    *(undefined8 *)(param_1 + 0x80) = uStack_100;
    *(undefined8 *)(param_1 + 0x98) = uStack_e8;
    *(undefined8 *)(param_1 + 0x90) = uStack_f0;
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x00f78af4();
    }
    else {
      lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
      uVar3 = /*Core.Networking.HostVoteStart$$get_Map1*/ func_0x01657530(auStack_a0,0);
      uVar4 = /*Core.Networking.HostVoteStart$$get_Type1*/ func_0x01657584(auStack_a0,0);
      uVar5 = /*Core.Networking.HostVoteStart$$get_Map2*/ func_0x016575d8(auStack_a0,0);
      uVar6 = /*Core.Networking.HostVoteStart$$get_Type2*/ func_0x0165762c(auStack_a0,0);
      if (lVar8 != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0xf8);
        uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x100);
        uStack_6c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x100) >> 0x20);
        uStack_78 = (undefined2)uVar7;
        uStack_76 = (undefined2)((ulong)uVar7 >> 0x10);
        uStack_74 = (undefined4)((ulong)uVar7 >> 0x20);
        uStack_68 = *(undefined8 *)(param_1 + 0x108);
        uStack_80 = uVar3;
        uStack_7e = uVar4;
        uStack_7c = uVar5;
        uStack_7a = uVar6;
        /*System.Action<NetworkVoteStart>$$Invoke*/ func_0x01e47bc8(lVar8,&uStack_80,uRam0000000003d2a240);
        return;
      }
      func_0x00f78af4();
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14a177c);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14a1790 | Atlas.Networking.NetworkClientSession.OnHostVoteResult
// ============================================================

void Atlas_Networking_NetworkClientSession__OnHostVoteResult
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  if ((bRam0000000003eb4a3b & 1) == 0) {
    func_0x00f78a20(0x3d2a230);
    func_0x00f78a20(0x3d57e90);
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d3b6c8);
    func_0x00f78a20(0x3d3b6d0);
    func_0x00f78a20(0x3d3e920);
    bRam0000000003eb4a3b = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostVoteResult>*/ func_0x0185df4c(&uStack_a0,&uStack_40,uRam0000000003d57e90);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_60 = uStack_90;
  auStack_50 = /*System.Nullable<HostVoteResult>$$get_Value*/ func_0x02656230(&uStack_70,uRam0000000003d3e920);
  lVar5 = *(long *)(param_1 + 0xd0);
  if (lVar5 == 0) {
    func_0x00f78af4();
  }
  else {
    uVar6 = (ulong)(*(int *)(lVar5 + 0x18) - 1);
    if (0 < *(int *)(lVar5 + 0x18)) {
      lVar5 = *(long *)(lVar5 + 0x10) + uVar6 * 0x18;
      uStack_80 = *(undefined8 *)(lVar5 + 0x20);
      uStack_78 = *(undefined4 *)(lVar5 + 0x28);
      uVar7 = *(undefined8 *)(lVar5 + 0x30);
      uVar2 = /*Core.Networking.HostVoteResult$$get_Map*/ func_0x01657304(auStack_50,0);
      uVar3 = /*Core.Networking.HostVoteResult$$get_Type*/ func_0x01657358(auStack_50,0);
      if (*(long *)(param_1 + 0xd0) == 0) {
        func_0x00f78af4();
        goto code_r0x014a1a30;
      }
      uStack_a0 = uStack_80;
      uStack_98 = CONCAT26(uVar3,CONCAT24(uVar2,uStack_78));
      uStack_90 = uVar7;
      /*System.Collections.Generic.List<NetworkVoteHistory>$$set_Item*/ func_0x024241ac(*(long *)(param_1 + 0xd0),uVar6,&uStack_a0,uRam0000000003d3b6d0);
    }
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_a0,param_1,0);
    uStack_b8 = uStack_98;
    uStack_c0 = uStack_a0;
    uStack_b0 = uStack_90;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_a0,4,&uStack_c0,0);
    *(undefined8 *)(param_1 + 0x88) = uStack_98;
    *(undefined8 *)(param_1 + 0x80) = uStack_a0;
    *(undefined8 *)(param_1 + 0x98) = uStack_88;
    *(undefined8 *)(param_1 + 0x90) = uStack_90;
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x00f78af4();
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x58);
      uVar6 = /*Core.Networking.HostVoteResult$$get_Map*/ func_0x01657304(auStack_50,0);
      uVar4 = /*Core.Networking.HostVoteResult$$get_Type*/ func_0x01657358(auStack_50,0);
      if (lVar5 != 0) {
        /*System.Action<NetworkVoteResult>$$Invoke*/ func_0x01e4787c(lVar5,uVar6 & 0xffff | (uVar4 & 0xffff) << 0x10,uRam0000000003d2a230);
        return;
      }
      func_0x00f78af4();
    }
  }
code_r0x014a1a30:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14a1a34);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14a1a48 | Atlas.Networking.NetworkClientSession.OnHostUsable
// ============================================================

void Atlas_Networking_NetworkClientSession__OnHostUsable
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_150 [16];
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
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_a0 = param_2;
  uStack_98 = param_3;
  if ((bRam0000000003eb4a3c & 1) == 0) {
    func_0x00f78a20(0x3d57e80);
    func_0x00f78a20(0x3d3b630);
    func_0x00f78a20(0x3d3ee20);
    func_0x00f78a20(0x3d3e910);
    bRam0000000003eb4a3c = 1;
  }
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  auStack_e0._0_8_ = 0;
  auStack_e0._8_8_ = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  auStack_150._0_8_ = 0;
  auStack_150._8_8_ = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostUsable>*/ func_0x0185de14(&uStack_90,&uStack_a0,uRam0000000003d57e80);
  uStack_c8 = uStack_88;
  uStack_d0 = uStack_90;
  uStack_c0 = uStack_80;
  auStack_b0 = /*System.Nullable<HostUsable>$$get_Value*/ func_0x026556b8(&uStack_d0,uRam0000000003d3e910);
  iVar2 = /*Core.Networking.HostUsable$$get_UsablesLength*/ func_0x01656fb8(auStack_b0,0);
  while( true ) {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return;
    }
    /*Core.Networking.HostUsable$$Usables*/ func_0x01656ef8(&uStack_90,auStack_b0,iVar2,0);
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_130 = uStack_80;
    auVar4 = /*System.Nullable<Usable>$$get_Value*/ func_0x026635a4(&uStack_140,uRam0000000003d3ee20);
    auStack_e0 = auVar4;
    auVar5 = /*Core.Networking.Usable$$get_Base*/ func_0x01661514(auStack_e0,0);
    auStack_150 = auVar5;
    uVar3 = /*Core.Networking.UsableBase$$get_Time*/ func_0x01660094(auStack_150,0);
    /*Core.Networking.NetworkSession$$CreateTime*/ func_0x01658210(&uStack_90,param_1,uVar3,0);
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    uStack_160 = uStack_80;
    /*Core.Networking.NetworkUsable$$FlatBufferToNetworkUsable*/ func_0x01661474(&uStack_90,auVar4._0_8_,auVar4._8_8_,&uStack_170,0);
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    uStack_f8 = uStack_68;
    uStack_100 = uStack_70;
    uStack_f0 = uStack_60;
    if (*(long *)(param_1 + 0x48) == 0) break;
    /*System.Collections.Generic.List<NetworkUsable>$$Add*/ func_0x0241eb94(*(long *)(param_1 + 0x48),&uStack_90,uRam0000000003d3b630);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14a1cbc);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14a1cd0 | Atlas.Networking.NetworkClientSession.OnHostGameModeUpdate
// ============================================================

void Atlas_Networking_NetworkClientSession__OnHostGameModeUpdate
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_70 = param_2;
  uStack_68 = param_3;
  if ((bRam0000000003eb4a3d & 1) == 0) {
    func_0x00f78a20(0x3d2a1e0);
    func_0x00f78a20(0x3d57e60);
    func_0x00f78a20(0x3d3b430);
    func_0x00f78a20(0x3d3e860);
    func_0x00f78a20(0x3d3e8c0);
    bRam0000000003eb4a3d = 1;
  }
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostGameModeUpdate>*/ func_0x0185dba4(&uStack_60,&uStack_70,uRam0000000003d57e60);
  uStack_c8 = uStack_58;
  uStack_d0 = uStack_60;
  uStack_c0 = uStack_50;
  auStack_80 = /*System.Nullable<HostGameModeUpdate>$$get_Value*/ func_0x02653450(&uStack_d0,uRam0000000003d3e8c0);
  /*Core.Networking.HostGameModeUpdate$$get_GameMode*/ func_0x01655b80(&uStack_60,auStack_80,0);
  uStack_e8 = uStack_58;
  uStack_f0 = uStack_60;
  uStack_e0 = uStack_50;
  auStack_90 = /*System.Nullable<GameMode>$$get_Value*/ func_0x02650d18(&uStack_f0,uRam0000000003d3e860);
  uVar6 = auStack_90._8_8_;
  uVar3 = auStack_90._0_8_;
  uVar4 = /*Core.Networking.GameMode$$get_StateTime*/ func_0x01654cd4(auStack_90,0);
  /*Core.Networking.NetworkSession$$CreateTime*/ func_0x01658210(&uStack_60,param_1,uVar4,0);
  uStack_108 = uStack_58;
  uStack_110 = uStack_60;
  uStack_100 = uStack_50;
  /*Core.Networking.NetworkGameMode$$FlatBufferToNetworkGameMode*/ func_0x016599bc(&uStack_60,uVar3,uVar6,&uStack_110,0);
  uVar1 = (undefined4)uStack_60;
  uStack_a8 = uStack_50;
  uStack_b0 = uStack_58;
  uStack_98 = uStack_40;
  uStack_a0 = uStack_48;
  *(undefined4 *)(param_1 + 0xa8) = (undefined4)uStack_60;
  *(int *)(param_1 + 0xac) = uStack_60._4_4_;
  *(undefined8 *)(param_1 + 0xb8) = uStack_50;
  *(undefined8 *)(param_1 + 0xb0) = uStack_58;
  *(undefined8 *)(param_1 + 200) = uStack_40;
  *(undefined8 *)(param_1 + 0xc0) = uStack_48;
  if (uStack_60._4_4_ == 2) {
    uStack_128 = uStack_50;
    uStack_130 = uStack_58;
    uStack_120 = uStack_48;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_60,6,&uStack_130,0);
    *(undefined8 *)(param_1 + 0x88) = uStack_58;
    *(undefined8 *)(param_1 + 0x80) = uStack_60;
    *(undefined8 *)(param_1 + 0x98) = uStack_48;
    *(undefined8 *)(param_1 + 0x90) = uStack_50;
    *(undefined1 *)(param_1 + 0x16b) = 0;
    return;
  }
  if (uStack_60._4_4_ == 3) {
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_60,param_1,0);
    uStack_168 = uStack_58;
    uStack_170 = uStack_60;
    uStack_160 = uStack_50;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_150,8,&uStack_170,0);
    *(undefined8 *)(param_1 + 0x88) = uStack_148;
    *(undefined8 *)(param_1 + 0x80) = uStack_150;
    *(undefined8 *)(param_1 + 0x98) = uStack_138;
    *(undefined8 *)(param_1 + 0x90) = uStack_140;
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x00f78af4();
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
      if (lVar5 != 0) {
        uStack_60 = CONCAT44(3,uVar1);
        uStack_50 = uStack_a8;
        uStack_58 = uStack_b0;
        uStack_40 = uStack_98;
        uStack_48 = uStack_a0;
        /*System.Action<NetworkGameMode>$$Invoke*/ func_0x01e44b38(lVar5,&uStack_60,uRam0000000003d2a1e0);
        return;
      }
      func_0x00f78af4();
    }
  }
  else {
    if (uStack_60._4_4_ != 4) {
      return;
    }
    if (*(long *)(param_1 + 0x70) == 0) {
      func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(*(long *)(param_1 + 0x70),uRam0000000003d3b430);
      *(undefined1 *)(param_1 + 0x168) = 0;
      if (*(long *)(param_1 + 0x10) == 0) {
        func_0x00f78af4();
      }
      else {
        lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x88);
        if (lVar5 == 0) {
          func_0x00f78af4();
        }
        else {
          /*System.Action$$Invoke*/ func_0x02924c90(lVar5,0);
          if (*(long *)(param_1 + 0x170) != 0) {
            /*Core.Networking.NetworkEventResult$$Clear*/ func_0x01659290(*(long *)(param_1 + 0x170),0);
            *(undefined1 *)(param_1 + 0x16a) = 0;
            return;
          }
          func_0x00f78af4();
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14a203c);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14a2050 | Atlas.Networking.NetworkClientSession.OnHostStanding
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014a2664) */
/* WARNING: Removing unreachable block (ram,0x014a2644) */

void Atlas_Networking_NetworkClientSession__OnHostStanding
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
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
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined2 uStack_16b;
  undefined1 uStack_169;
  undefined8 uStack_168;
  undefined8 uStack_160;
  int aiStack_158 [4];
  int iStack_148;
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
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_88 = param_2;
  uStack_80 = param_3;
  if ((bRam0000000003eb4a3e & 1) == 0) {
    func_0x00f78a20(0x3d29f30);
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d57e78);
    func_0x00f78a20(0x3d3b428);
    func_0x00f78a20(0x3d3b440);
    func_0x00f78a20(0x3d3b448);
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d3e808);
    func_0x00f78a20(0x3d3e8f0);
    bRam0000000003eb4a3e = 1;
  }
  auStack_98._0_8_ = 0;
  auStack_98._8_8_ = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
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
  iStack_148 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostStanding>*/ func_0x0185dd78(&uStack_190,&uStack_88,uRam0000000003d57e78);
  uStack_a8 = uStack_188;
  uStack_b0 = uStack_190;
  uStack_a0 = uStack_180;
  auStack_98 = /*System.Nullable<HostStanding>$$get_Value*/ func_0x02654b40(&uStack_b0,uRam0000000003d3e8f0);
  iVar12 = 0;
  iVar11 = 0;
  do {
    iVar3 = /*Core.Networking.HostStanding$$get_StandingsLength*/ func_0x01656930(auStack_98,0);
    if (iVar3 <= iVar11) {
      if (*(long *)(param_1 + 0x10) == 0) {
        func_0x00f78af4();
      }
      else {
        lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
        if (lVar10 != 0) {
          /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(lVar10,*(undefined8 *)(param_1 + 0x70),uRam0000000003d29f30);
          if ((*(char *)(param_1 + 300) == '\0') &&
             (uVar7 = /*Core.Networking.HostStanding$$get_HasEventEndTimeStamp*/ func_0x016569c8(auStack_98,0), (uVar7 & 1) != 0)) {
            uVar8 = /*Core.Networking.HostStanding$$get_ForceEventEndTimeStamp*/ func_0x01656974(auStack_98,0);
            /*Core.Networking.NetworkSession$$CreateTime*/ func_0x01658210(&uStack_190,param_1,uVar8,0);
            *(undefined8 *)(param_1 + 0x130) = uStack_188;
            *(undefined8 *)(param_1 + 0x128) = uStack_190;
            *(undefined8 *)(param_1 + 0x138) = uStack_180;
          }
          return;
        }
        func_0x00f78af4();
      }
code_r0x014a274c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14a2750);
      (*pcVar1)();
    }
    /*Core.Networking.HostStanding$$Standings*/ func_0x01656878(&uStack_190,auStack_98,iVar11,0);
    uStack_d8 = uStack_188;
    uStack_e0 = uStack_190;
    uStack_d0 = uStack_180;
    auVar14 = /*System.Nullable<EventStanding>$$get_Value*/ func_0x0265075c(&uStack_e0,uRam0000000003d3e808);
    auStack_c0 = auVar14;
    if (*(long *)(param_1 + 0x70) == 0) {
      func_0x00f78af4();
      goto code_r0x014a274c;
    }
    /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_190,*(long *)(param_1 + 0x70),uRam0000000003d3b440);
    uStack_118 = uStack_188;
    uStack_120 = uStack_190;
    uStack_108 = uStack_178;
    uStack_110 = uStack_180;
    uStack_100 = CONCAT17(uStack_169,CONCAT25(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
    uStack_f8 = uStack_168;
    uStack_f0 = uStack_160;
    do {
      uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_120,uRam0000000003d32b08);
      if ((uVar7 & 1) == 0) break;
      iVar3 = (int)uStack_110;
      iVar4 = /*Core.Networking.EventStanding$$get_SyncId*/ func_0x0165493c(auStack_c0,0);
    } while (iVar3 != iVar4);
    aiStack_158[iVar12] = 0x6e;
    iVar3 = iStack_148;
    iVar12 = iStack_148 + 1;
    iStack_148 = iVar12;
    /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_120,uRam0000000003d32b00);
    if ((iVar12 != 0) && (aiStack_158[iVar3] == 0x6e)) {
      iVar12 = iVar3;
      iStack_148 = iVar3;
    }
    if ((uVar7 & 1) == 0) {
      uVar5 = /*Core.Networking.EventStanding$$get_SyncId*/ func_0x0165493c(auStack_c0,0);
      uVar6 = /*Core.Networking.EventStanding$$get_BattleScore*/ func_0x01654990(auStack_c0,0);
      uVar8 = /*Core.Networking.EventStanding$$get_TimeStamp*/ func_0x016549e4(auStack_c0,0);
      /*Core.Networking.NetworkSession$$CreateTime*/ func_0x01658210(&uStack_190,param_1,uVar8,0);
      uStack_138 = uStack_188;
      uStack_140 = uStack_190;
      uStack_130 = uStack_180;
      uVar13 = /*Core.Networking.EventStanding$$get_SplinePosition*/ func_0x01654a38(auStack_c0,0);
      uVar2 = /*Core.Networking.EventStanding$$get_Dnf*/ func_0x01654a90(auStack_c0,0);
      if (*(long *)(param_1 + 0x70) == 0) {
        func_0x00f78af4();
        goto code_r0x014a274c;
      }
      uStack_190 = CONCAT44(uVar6,uVar5);
      uStack_180 = uStack_138;
      uStack_188 = uStack_140;
      uStack_178 = uStack_130;
      uStack_16b = 0;
      uStack_169 = 0;
      uStack_170 = uVar13;
      uStack_16c = uVar2;
      /*System.Collections.Generic.List<NetworkEventStanding>$$Add*/ func_0x02408354(*(long *)(param_1 + 0x70),&uStack_190,uRam0000000003d3b428);
    }
    if ((*(char *)(param_1 + 0x114) == '\0') && (*(char *)(param_1 + 0x168) == '\0')) {
      /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_190,param_1,0);
      if (*(long *)(param_1 + 0x70) == 0) {
        func_0x00f78af4();
        goto code_r0x014a274c;
      }
      iVar3 = uStack_188._4_4_;
      /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_190,*(long *)(param_1 + 0x70),uRam0000000003d3b440);
      uStack_118 = uStack_188;
      uStack_120 = uStack_190;
      uStack_108 = uStack_178;
      uStack_110 = uStack_180;
      uStack_100 = CONCAT17(uStack_169,CONCAT25(uStack_16b,CONCAT14(uStack_16c,uStack_170)));
      uStack_f8 = uStack_168;
      uStack_f0 = uStack_160;
      do {
        do {
          uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_120,uRam0000000003d32b08);
          if ((uVar7 & 1) == 0) goto code_r0x014a24cc;
        } while ((int)uStack_110 != iVar3);
        /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_1a8,param_1,0);
        uStack_188 = uStack_1a0;
        uStack_190 = uStack_1a8;
        uStack_180 = uStack_198;
        if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_1b8 = uStack_188;
        uStack_1c0 = uStack_190;
        uStack_1b0 = uStack_180;
        /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_1a8,&uStack_1c0,0x1c2,0);
        *(undefined8 *)(param_1 + 0x118) = uStack_1a0;
        *(undefined8 *)(param_1 + 0x110) = uStack_1a8;
        *(undefined8 *)(param_1 + 0x120) = uStack_198;
        lVar10 = *(long *)(param_1 + 0x70);
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x014a274c;
        }
      } while (*(int *)(lVar10 + 0x18) < 0xc);
      if (*(long *)(param_1 + 0x10) == 0) {
        func_0x00f78af4();
        goto code_r0x014a274c;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x014a274c;
      }
      /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(lVar9,lVar10,uRam0000000003d29f30);
      *(undefined1 *)(param_1 + 0x168) = 1;
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_190,param_1,0);
      *(undefined8 *)(param_1 + 0x118) = uStack_188;
      *(undefined8 *)(param_1 + 0x110) = uStack_190;
      *(undefined8 *)(param_1 + 0x120) = uStack_180;
code_r0x014a24cc:
      aiStack_158[iVar12] = 0x187;
      iVar3 = iStack_148;
      iVar12 = iStack_148 + 1;
      iStack_148 = iVar12;
      /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_120,uRam0000000003d32b00);
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else if (aiStack_158[iVar3] == 0x187) {
        iStack_148 = iVar3;
        iVar12 = iVar3;
      }
    }
    iVar11 = iVar11 + 1;
  } while( true );
}



// ============================================================
// RVA: 0x14a2764 | Atlas.Networking.NetworkClientSession.OnHostEventResults
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014a2cac) */
/* WARNING: Removing unreachable block (ram,0x014a2ce0) */

void Atlas_Networking_NetworkClientSession__OnHostEventResults
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auVar10 [16];
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
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  int aiStack_1a8 [4];
  int iStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR_03a5d648;
  uStack_b0 = param_2;
  uStack_a8 = param_3;
  if ((bRam0000000003eb4a3f & 1) == 0) {
    func_0x00f78a20(0x3d2a1d0);
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32ae8);
    func_0x00f78a20(0x3d32af0);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d32af8);
    func_0x00f78a20(0x3d57e58);
    func_0x00f78a20(0x3d3b428);
    func_0x00f78a20(0x3d3b5b0);
    func_0x00f78a20(0x3d3b408);
    func_0x00f78a20(0x3d3b440);
    func_0x00f78a20(0x3d3e7f8);
    func_0x00f78a20(0x3d3e8b8);
    bRam0000000003eb4a3f = 1;
  }
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  auStack_f0._0_8_ = 0;
  auStack_f0._8_8_ = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  iStack_140 = 0;
  uStack_13c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  iStack_198 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostEventResults>*/ func_0x0185db08(&uStack_220,&uStack_b0,uRam0000000003d57e58);
  uStack_d8 = uStack_218;
  uStack_e0 = uStack_220;
  uStack_d0 = uStack_210;
  auStack_c0 = /*System.Nullable<HostEventResults>$$get_Value*/ func_0x02652e94(&uStack_e0,uRam0000000003d3e8b8);
  iVar9 = 0;
  while( true ) {
    iVar4 = /*Core.Networking.HostEventResults$$get_RoundScoresLength*/ func_0x01655624(auStack_c0,0);
    if (iVar4 <= iVar9) break;
    /*Core.Networking.HostEventResults$$RoundScores*/ func_0x0165556c(&uStack_220,auStack_c0,iVar9,0);
    uStack_108 = uStack_218;
    uStack_110 = uStack_220;
    uStack_100 = uStack_210;
    auVar10 = /*System.Nullable<EventScore>$$get_Value*/ func_0x026501a0(&uStack_110,uRam0000000003d3e7f8);
    auStack_f0 = auVar10;
    uVar6 = /*Core.Networking.EventScore$$get_SyncId*/ func_0x0165469c(auStack_f0,0);
    lVar7 = /*Core.Networking.EventScore$$get_RoundScore*/ func_0x016546f0(auStack_f0,0);
    /*Core.Networking.NetworkSession$$AddScoreToTournament*/ func_0x0165fbbc(param_1,uVar6 & 0xffffffff | lVar7 << 0x20,0,0);
    iVar9 = iVar9 + 1;
  }
  uVar6 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(param_1,0);
  if ((uVar6 & 1) == 0) {
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_220,param_1,0);
    uStack_1d8 = uStack_218;
    uStack_1e0 = uStack_220;
    uStack_1d0 = uStack_210;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_220,9,&uStack_1e0,0);
  }
  else {
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_220,param_1,0);
    uStack_1b8 = uStack_218;
    uStack_1c0 = uStack_220;
    uStack_1b0 = uStack_210;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    /*Core.Networking.NetworkState$$.ctor*/ func_0x0165d250(&uStack_220,10,&uStack_1c0,0);
  }
  *(undefined8 *)(param_1 + 0x88) = uStack_218;
  *(undefined8 *)(param_1 + 0x80) = uStack_220;
  *(undefined8 *)(param_1 + 0x98) = uStack_208;
  *(undefined8 *)(param_1 + 0x90) = uStack_210;
  if (*(long *)(param_1 + 0x170) != 0) {
    /*Core.Networking.NetworkEventResult$$Set*/ func_0x01658fc4(*(long *)(param_1 + 0x170),auStack_c0._0_8_,auStack_c0._8_8_,param_1,0);
    if (*(long *)(param_1 + 0x170) == 0) {
      func_0x00f78af4();
      goto code_r0x014a2e0c;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x170) + 0x18);
    if (lVar7 == 0) {
      func_0x00f78af4();
      goto code_r0x014a2e0c;
    }
    /*System.Collections.Generic.List<NetworkEventFinishStanding>$$GetEnumerator*/ func_0x0240620c(&uStack_220,lVar7,uRam0000000003d3b408);
    iVar9 = 0;
    uStack_148 = uStack_218;
    uStack_150 = uStack_220;
    uStack_138 = (undefined4)uStack_208;
    uStack_134 = (undefined4)((ulong)uStack_208 >> 0x20);
    iStack_140 = (int)uStack_210;
    uStack_13c = (undefined4)((ulong)uStack_210 >> 0x20);
    uStack_128 = (undefined4)uStack_1f8;
    uStack_124 = (undefined4)((ulong)uStack_1f8 >> 0x20);
    uStack_130 = (undefined4)uStack_200;
    uStack_12c = (undefined4)((ulong)uStack_200 >> 0x20);
    uStack_118 = uStack_1e8;
    uStack_120 = (undefined4)uStack_1f0;
    uStack_11c = (undefined4)((ulong)uStack_1f0 >> 0x20);
    puVar8 = (undefined8 *)((ulong)&uStack_220 | 4);
    while( true ) {
      uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkEventFinishStanding>$$MoveNext*/ func_0x01f6cd2c(&uStack_150,uRam0000000003d32af0);
      iVar4 = iStack_140;
      if ((uVar6 & 1) == 0) break;
      uStack_98 = CONCAT44(uStack_130,uStack_134);
      uStack_a0 = CONCAT44(uStack_138,uStack_13c);
      uStack_88 = CONCAT44(uStack_120,uStack_124);
      uStack_90 = CONCAT44(uStack_128,uStack_12c);
      uStack_80 = uStack_11c;
      if (*(long *)(param_1 + 0x70) == 0) {
        func_0x00f78af4();
        goto code_r0x014a2e0c;
      }
      /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_220,*(long *)(param_1 + 0x70),uRam0000000003d3b440);
      uStack_188 = uStack_218;
      uStack_190 = uStack_220;
      uStack_178 = uStack_208;
      uStack_180 = uStack_210;
      uStack_168 = uStack_1f8;
      uStack_170 = uStack_200;
      uStack_160 = uStack_1f0;
      do {
        uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_190,uRam0000000003d32b08);
      } while (uVar5 != 0 && (int)uStack_180 != iVar4);
      aiStack_1a8[iVar9] = 0x104;
      iVar2 = iStack_198;
      iVar9 = iStack_198 + 1;
      iStack_198 = iVar9;
      /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_190,uRam0000000003d32b00);
      uVar1 = uRam0000000003d3b428;
      if ((iVar9 != 0) && (aiStack_1a8[iVar2] == 0x104)) {
        iVar9 = iVar2;
        iStack_198 = iVar2;
      }
      if ((uVar5 & 1) == 0) {
        lVar7 = *(long *)(param_1 + 0x70);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014a2e0c;
        }
        uStack_220 = CONCAT44(uStack_220._4_4_,iVar4);
        puVar8[1] = uStack_98;
        *puVar8 = uStack_a0;
        puVar8[3] = uStack_88;
        puVar8[2] = uStack_90;
        *(undefined4 *)(puVar8 + 4) = uStack_80;
        /*System.Collections.Generic.List<NetworkEventStanding>$$Add*/ func_0x02408354(lVar7,&uStack_220,uVar1);
      }
    }
    aiStack_1a8[iVar9] = 0x133;
    iVar4 = iStack_198;
    iVar9 = iStack_198 + 1;
    iStack_198 = iVar9;
    /*System.Collections.Generic.List.Enumerator<NetworkEventFinishStanding>$$Dispose*/ func_0x01f6cd28(&uStack_150,uRam0000000003d32ae8);
    if ((iVar9 != 0) && (aiStack_1a8[iVar4] == 0x133)) {
      iStack_198 = iVar4;
    }
    *(undefined1 *)(param_1 + 0x180) = 1;
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x014a2e0c;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    if (lVar7 == 0) {
      func_0x00f78af4();
      goto code_r0x014a2e0c;
    }
    /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(lVar7,*(undefined8 *)(param_1 + 0x170),uRam0000000003d2a1d0);
    if (*(long *)(param_1 + 0x68) == 0) {
      func_0x00f78af4();
      goto code_r0x014a2e0c;
    }
    /*System.Collections.Generic.List<NetworkScore>$$Clear*/ func_0x024197e8(*(long *)(param_1 + 0x68),uRam0000000003d3b5b0);
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_238,param_1,0);
    *(undefined8 *)(param_1 + 0x130) = uStack_230;
    *(undefined8 *)(param_1 + 0x128) = uStack_238;
    *(undefined8 *)(param_1 + 0x138) = uStack_228;
    *(undefined1 *)(param_1 + 0x169) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    if (*(long *)PTR_03a5d648 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x00f78af4();
code_r0x014a2e0c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x14a2e10);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x14a2e24 | Atlas.Networking.NetworkClientSession.OnHostMigration
// ============================================================

void Atlas_Networking_NetworkClientSession__OnHostMigration
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined4 uStack_118;
  undefined4 uStack_114;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_70 = param_2;
  uStack_68 = param_3;
  if ((bRam0000000003eb4a40 & 1) == 0) {
    func_0x00f78a20(0x3d2a210);
    func_0x00f78a20(0x3d57e68);
    func_0x00f78a20(0x3d3e8c8);
    bRam0000000003eb4a40 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostMigration>*/ func_0x0185dc40(&uStack_60,&uStack_70,uRam0000000003d57e68);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_80 = uStack_50;
  auVar5 = /*System.Nullable<HostMigration>$$get_Value*/ func_0x02653a0c(&uStack_90,uRam0000000003d3e8c8);
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 == 0) {
    func_0x00f78af4();
  }
  else {
    uStack_b8 = *(undefined8 *)(lVar3 + 0x18);
    uStack_c0 = *(undefined8 *)(lVar3 + 0x10);
    uStack_a8 = *(undefined8 *)(lVar3 + 0x28);
    uStack_b0 = *(undefined8 *)(lVar3 + 0x20);
    uStack_a0 = *(undefined8 *)(lVar3 + 0x30);
    /*Core.Networking.NetworkMigrationState$$Set*/ func_0x0165a59c(&uStack_c0,auVar5._0_8_,auVar5._8_8_,param_1,0);
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x00f78af4();
    }
    else {
      lVar3 = *(long *)(param_1 + 0xa0);
      if (lVar3 == 0) {
        func_0x00f78af4();
      }
      else {
        lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x98);
        if (lVar2 != 0) {
          uStack_e8 = *(undefined8 *)(lVar3 + 0x18);
          uStack_f0 = *(undefined8 *)(lVar3 + 0x10);
          uStack_d8 = *(undefined8 *)(lVar3 + 0x28);
          uStack_e0 = *(undefined8 *)(lVar3 + 0x20);
          uStack_d0 = *(undefined8 *)(lVar3 + 0x30);
          uStack_60 = uStack_f0;
          uStack_58 = uStack_e8;
          uStack_50 = uStack_e0;
          uStack_48 = uStack_d8;
          uStack_40 = uStack_d0;
          /*System.Action<NetworkMigrationState>$$Invoke*/ func_0x01e45b38(lVar2,&uStack_60,uRam0000000003d2a210);
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x30);
            /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_60,param_1,0);
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_118 = uStack_58._4_4_;
            uStack_114 = 6;
            /*Core.Networking.NetworkServicesOutput$$WriteGameModeDataToHost*/ func_0x0165c0bc(lVar3,uVar4,&uStack_118,0);
          }
          return;
        }
        func_0x00f78af4();
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14a3040);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14a3054 | Atlas.Networking.NetworkClientSession.OnHostMigrationDone
// ============================================================

void Atlas_Networking_NetworkClientSession__OnHostMigrationDone
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_60 = param_2;
  uStack_58 = param_3;
  if ((bRam0000000003eb4a41 & 1) == 0) {
    func_0x00f78a20(0x3d2a4b0);
    func_0x00f78a20(0x3d57e70);
    func_0x00f78a20(0x3d3e8d0);
    bRam0000000003eb4a41 = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostMigrationDone>*/ func_0x0185dcdc(&uStack_50,&uStack_60,uRam0000000003d57e70);
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_a0 = uStack_40;
  auStack_70 = /*System.Nullable<HostMigrationDone>$$get_Value*/ func_0x02653fc8(&uStack_b0,uRam0000000003d3e8d0);
  uVar2 = /*Core.Networking.HostMigrationDone$$get_ResumeTime*/ func_0x016561d8(auStack_70,0);
  /*Core.Networking.NetworkSession$$CreateTime*/ func_0x01658210(&uStack_50,param_1,uVar2,0);
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_80 = uStack_40;
  uVar2 = /*Core.Networking.HostMigrationDone$$get_Delta*/ func_0x0165622c(auStack_70,0);
  uStack_c8 = uStack_88;
  uStack_d0 = uStack_90;
  uStack_c0 = uStack_80;
  /*Core.Networking.NetworkSession$$OnMigrationSynced*/ func_0x0165f8c4(param_1,&uStack_d0,uVar2,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0);
    uVar2 = /*Core.Networking.HostMigrationDone$$get_Delta*/ func_0x0165622c(auStack_70,0);
    if (lVar3 != 0) {
      uStack_48 = uStack_88;
      uStack_50 = uStack_90;
      uStack_40 = uStack_80;
      /*System.Action<NetworkSessionTime, uint>$$Invoke*/ func_0x01e6d110(lVar3,&uStack_50,uVar2,uRam0000000003d2a4b0);
      return;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14a3238);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14a324c | Atlas.Networking.NetworkClientSession.OnHostUsableResponse
// ============================================================

void Atlas_Networking_NetworkClientSession__OnHostUsableResponse
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  if ((bRam0000000003eb4a42 & 1) == 0) {
    func_0x00f78a20(0x3d2a120);
    func_0x00f78a20(0x3d57e88);
    func_0x00f78a20(0x3d3e918);
    bRam0000000003eb4a42 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  /*Core.Networking.HostUpdateHolder$$Update<HostUsableResponse>*/ func_0x0185deb0(&uStack_88,&uStack_40,uRam0000000003d57e88);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  uStack_60 = uStack_78;
  auStack_50 = /*System.Nullable<HostUsableResponse>$$get_Value*/ func_0x02655c74(&uStack_70,uRam0000000003d3e918);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
    uVar2 = /*Core.Networking.HostUsableResponse$$get_UsableDefinition*/ func_0x01657168(auStack_50,0);
    if (lVar3 != 0) {
      /*System.Action<short>$$Invoke*/ func_0x01b477cc(lVar3,uVar2,uRam0000000003d2a120);
      return;
    }
    func_0x00f78af4(uVar2,uVar2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14a33b0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14a33c4 | Atlas.Networking.NetworkClientSession..ctor
// ============================================================

undefined1  [16] Atlas_Networking_NetworkClientSession___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
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



