// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.MatchMakingManager

// ============================================================
// RVA: 0x148ed70 | Atlas.Networking.MatchMakingManager.get_IsConnecting
// ============================================================

undefined1 Atlas_Networking_MatchMakingManager__get_IsConnecting(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x148ed78 | Atlas.Networking.MatchMakingManager.get_AlwaysMatchMakeOnEntryToLoadout
// ============================================================

undefined1 Atlas_Networking_MatchMakingManager__get_AlwaysMatchMakeOnEntryToLoadout(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc5);
}



// ============================================================
// RVA: 0x148ed80 | Atlas.Networking.MatchMakingManager.set_AlwaysMatchMakeOnEntryToLoadout
// ============================================================

void Atlas_Networking_MatchMakingManager__set_AlwaysMatchMakeOnEntryToLoadout
               (long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc5) = param_2;
  return;
}



// ============================================================
// RVA: 0x148ed88 | Atlas.Networking.MatchMakingManager.get_ShouldLockPlayersIntoLobby
// ============================================================

undefined1 Atlas_Networking_MatchMakingManager__get_ShouldLockPlayersIntoLobby(long param_1)

{
  return *(undefined1 *)(param_1 + 0xac);
}



// ============================================================
// RVA: 0x148ed90 | Atlas.Networking.MatchMakingManager.get_GroupMatchMakingEnabled
// ============================================================

undefined1 Atlas_Networking_MatchMakingManager__get_GroupMatchMakingEnabled(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc6);
}



// ============================================================
// RVA: 0x148ed98 | Atlas.Networking.MatchMakingManager.set_GroupMatchMakingEnabled
// ============================================================

void Atlas_Networking_MatchMakingManager__set_GroupMatchMakingEnabled
               (long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc6) = param_2;
  return;
}



// ============================================================
// RVA: 0x148eda0 | Atlas.Networking.MatchMakingManager.get_EventInfo
// ============================================================

undefined8 Atlas_Networking_MatchMakingManager__get_EventInfo(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x148eda8 | Atlas.Networking.MatchMakingManager.Init
// ============================================================

void Atlas_Networking_MatchMakingManager__Init(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
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
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  if ((bRam0000000003eb4990 & 1) == 0) {
    func_0x00f78a20(0x3d55080);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550c8);
    func_0x00f78a20(0x3d55130);
    func_0x00f78a20(0x3d55140);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55188);
    func_0x00f78a20(0x3d55190);
    func_0x00f78a20(0x3d55198);
    func_0x00f78a20(0x3d551c0);
    func_0x00f78a20(0x3d551d0);
    bRam0000000003eb4990 = 1;
  }
  if (param_2 != 0) {
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55198);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55150);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55090);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55140);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551d0);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550c8);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55130);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55190);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55080);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55188);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551c0);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    return;
  }
  auVar4 = func_0x00f78af4();
  lVar2 = auVar4._0_8_;
  if (((*(char *)(lVar2 + 0x90) == '\0') && (uVar3 = /*Atlas.Networking.MatchMakingManager$$IsMatchMaking*/ func_0x014903d8(), (uVar3 & 1) == 0)) &&
     (uVar3 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(lVar2), (uVar3 & 1) == 0)) {
    *(long *)(lVar2 + 0xb0) = auVar4._8_8_;
    if ((bRam0000000003eb4991 & 1) == 0) {
      func_0x00f78a20(0x3d52228);
      bRam0000000003eb4991 = 1;
    }
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    auStack_108 = auVar4;
    /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_170,0);
    uStack_110 = uStack_158;
    uStack_118 = uStack_160;
    uStack_120 = uStack_168;
    uStack_128 = uStack_170;
    uStack_130 = CONCAT44(uStack_130._4_4_,0xffffffff);
    uStack_148 = uStack_168;
    uStack_150 = uStack_170;
    uStack_138 = uStack_158;
    uStack_140 = uStack_160;
    /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<MatchMakingManager.<FindCreateMatch>d__49>*/ func_0x0182c438(&uStack_150,&uStack_130,uRam0000000003d52228);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x148ef90 | Atlas.Networking.MatchMakingManager.StartMatchMaking
// ============================================================

void Atlas_Networking_MatchMakingManager__StartMatchMaking(long param_1,undefined8 param_2)

{
  ulong uVar1;
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
  long lStack_a8;
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
  
  if (((*(char *)(param_1 + 0x90) == '\0') && (uVar1 = /*Atlas.Networking.MatchMakingManager$$IsMatchMaking*/ func_0x014903d8(), (uVar1 & 1) == 0)) &&
     (uVar1 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(param_1), (uVar1 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0xb0) = param_2;
    if ((bRam0000000003eb4991 & 1) == 0) {
      func_0x00f78a20(0x3d52228);
      bRam0000000003eb4991 = 1;
    }
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    lStack_a8 = param_1;
    uStack_a0 = param_2;
    /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_110,0);
    uStack_b0 = uStack_f8;
    uStack_b8 = uStack_100;
    uStack_c0 = uStack_108;
    uStack_c8 = uStack_110;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
    uStack_e8 = uStack_108;
    uStack_f0 = uStack_110;
    uStack_d8 = uStack_f8;
    uStack_e0 = uStack_100;
    /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<MatchMakingManager.<FindCreateMatch>d__49>*/ func_0x0182c438(&uStack_f0,&uStack_d0,uRam0000000003d52228);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x148efec | Atlas.Networking.MatchMakingManager.IsMatchMakingOrInGroup
// ============================================================

long Atlas_Networking_MatchMakingManager__IsMatchMakingOrInGroup(long param_1)

{
  undefined1 **ppuVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
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
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar2 = /*Atlas.Networking.MatchMakingManager$$IsMatchMaking*/ func_0x014903d8();
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0149047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (**(code **)(*plVar3 + 0x848))(plVar3,*(undefined8 *)(*plVar3 + 0x850));
      return lVar4;
    }
    return 0;
  }
  lVar4 = func_0x00f78af4();
  puStack_30 = &stack0xffffffffffffffe0;
  if (*(long *)(lVar4 + 0x38) != 0) {
    plVar3 = *(long **)(*(long *)(lVar4 + 0x38) + 0x30);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014904b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (**(code **)(*plVar3 + 0x858))(plVar3,*(undefined8 *)(*plVar3 + 0x860));
      return lVar4;
    }
    return 0;
  }
  lVar4 = func_0x00f78af4();
  puStack_40 = (undefined1 *)&puStack_30;
  puStack_28 = &Atlas_Networking_MatchMakingManager__LeaveMatch;
  if (*(long *)(lVar4 + 0x38) != 0) {
    plVar3 = *(long **)(*(long *)(lVar4 + 0x38) + 0x30);
    if (plVar3 != (long *)0x0) {
      puStack_30 = &stack0xffffffffffffffe0;
                    /* WARNING: Could not recover jumptable at 0x014904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (**(code **)(*plVar3 + 0x678))(plVar3,*(undefined8 *)(*plVar3 + 0x680));
      return lVar4;
    }
    return 0;
  }
  lVar4 = func_0x00f78af4();
  puStack_50 = (undefined1 *)&puStack_40;
  puStack_38 = &Atlas_Networking_MatchMakingManager__LeaveGroup;
  if (*(long *)(lVar4 + 0x38) != 0) {
    plVar3 = *(long **)(*(long *)(lVar4 + 0x38) + 0x30);
    if (plVar3 != (long *)0x0) {
      puStack_40 = (undefined1 *)&puStack_30;
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (**(code **)(*plVar3 + 0x808))(plVar3,*(undefined8 *)(*plVar3 + 0x810));
      return lVar4;
    }
    return 0;
  }
  lVar4 = func_0x00f78af4();
  puStack_48 = &Atlas_Networking_MatchMakingManager__SetVisuals;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar5 = *(long *)(lVar4 + 0xb0);
  ppuVar1 = &puStack_40;
  if (lVar5 != 0) {
    uStack_158 = *(undefined8 *)(lVar5 + 0x38);
    uStack_160 = *(undefined8 *)(lVar5 + 0x30);
    uStack_148 = *(undefined8 *)(lVar5 + 0x48);
    uStack_150 = *(undefined8 *)(lVar5 + 0x40);
    uStack_138 = *(undefined8 *)(lVar5 + 0x58);
    uStack_140 = *(undefined8 *)(lVar5 + 0x50);
    uStack_128 = *(undefined8 *)(lVar5 + 0x68);
    uStack_130 = *(undefined8 *)(lVar5 + 0x60);
    uStack_e0 = uStack_160;
    uStack_d8 = uStack_158;
    uStack_d0 = uStack_150;
    uStack_c8 = uStack_148;
    uStack_c0 = uStack_140;
    uStack_b8 = uStack_138;
    uStack_b0 = uStack_130;
    uStack_a8 = uStack_128;
    Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
              (&uStack_120,&uStack_160,*(undefined8 *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x88),
               *(undefined8 *)(lVar4 + 0x70),0);
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_a0,&uStack_1a0,0);
    ppuVar1 = (undefined1 **)puStack_50;
    if ((*(long *)(lVar4 + 0x40) != 0) &&
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + 0x28), lVar4 != 0)) {
      uStack_1d8 = uStack_98;
      uStack_1e0 = uStack_a0;
      uStack_1c8 = uStack_88;
      uStack_1d0 = uStack_90;
      uStack_1b8 = uStack_78;
      uStack_1c0 = uStack_80;
      uStack_1a8 = uStack_68;
      uStack_1b0 = uStack_70;
      lVar4 = /*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar4,&uStack_1e0,0);
      return lVar4;
    }
  }
  puStack_50 = (undefined1 *)ppuVar1;
  auVar6 = func_0x00f78af4();
  *(long *)(auVar6._0_8_ + 0xb0) = auVar6._8_8_;
  return auVar6._0_8_;
}



// ============================================================
// RVA: 0x148f024 | Atlas.Networking.MatchMakingManager.FindCreateMatch
// ============================================================

void Atlas_Networking_MatchMakingManager__FindCreateMatch
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
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
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4991 & 1) == 0) {
    func_0x00f78a20(0x3d52228);
    bRam0000000003eb4991 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_98 = (ulong)param_3;
  uStack_a8 = param_1;
  uStack_a0 = param_2;
  uStack_90 = param_4;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_110,0);
  uStack_b0 = uStack_f8;
  uStack_b8 = uStack_100;
  uStack_c0 = uStack_108;
  uStack_c8 = uStack_110;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
  uStack_e8 = uStack_108;
  uStack_f0 = uStack_110;
  uStack_d8 = uStack_f8;
  uStack_e0 = uStack_100;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<MatchMakingManager.<FindCreateMatch>d__49>*/ func_0x0182c438(&uStack_f0,&uStack_d0,uRam0000000003d52228);
  return;
}



// ============================================================
// RVA: 0x148f114 | Atlas.Networking.MatchMakingManager.SetupPublicMatch
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Networking_MatchMakingManager__SetupPublicMatch(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  long unaff_x21;
  undefined8 unaff_x22;
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
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar5 = 0x3eb4000;
  if ((bRam0000000003eb4992 & 1) == 0) {
    func_0x00f78a20(0x3d2fe38);
    func_0x00f78a20(0x3d2fe20);
    func_0x00f78a20(0x3d1c508);
    func_0x00f78a20(0x3d21910);
    func_0x00f78a20(0x3d21b68);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d68ff0);
    func_0x00f78a20(0x3d75288);
    func_0x00f78a20(0x3d6f900);
    bRam0000000003eb4992 = 1;
  }
  if (*(long *)(param_1 + 0x2c) == 0) goto LAB_0148f350;
  iVar1 = *(int *)(*(long *)(param_1 + 0x2c) + 0x10);
  if (iVar1 == 2) {
    uVar2 = _UNK_033f8400;
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar2 = _UNK_033f8400;
    }
LAB_0148f220:
    unaff_x21 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858(uVar2,0);
  }
  else {
    if (iVar1 == 1) {
      uVar2 = _UNK_033f8408;
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar2 = _UNK_033f8408;
      }
      goto LAB_0148f220;
    }
    if (*(long *)(param_1 + 0xe) == 0) goto LAB_0148f350;
    unaff_x21 = *(long *)(*(long *)(param_1 + 0xe) + 0x38);
  }
  lVar5 = func_0x00f78aec(/*Core.Services.FindPublicMatchParams_TypeInfo*/ uRam0000000003d21910);
  /*Core.Services.FindPublicMatchParams$$.ctor*/ func_0x0166b0d0(lVar5,0);
  if (lVar5 != 0) {
    unaff_x22 = 0x3d2f000;
    *(long *)(lVar5 + 0x18) = unaff_x21;
    unaff_x21 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, string>_TypeInfo*/ uRam0000000003d1c508);
    /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(unaff_x21,uRam0000000003d2fe20);
    if ((*(long *)(param_1 + 0x2c) != 0) &&
       (uVar2 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('Any')*/ uRam0000000003d68ff0,
                                *(undefined8 *)(*(long *)(param_1 + 0x2c) + 0x20),0), unaff_x21 != 0
       )) {
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(unaff_x21,/*STR('Map')*/ uRam0000000003d6f900,uVar2,uRam0000000003d2fe38);
      if (*(long *)(param_1 + 0x2c) != 0) {
        param_1 = (undefined4 *)(*(long *)(param_1 + 0x2c) + 0x10);
        plVar3 = (long *)func_0x00f78ae0(/*Atlas.FrontEnd.GameType_TypeInfo*/ uRam0000000003d21b68,param_1);
        if (plVar3 != (long *)0x0) {
          uVar2 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          puVar4 = (undefined4 *)func_0x00f78ae4(plVar3);
          *param_1 = *puVar4;
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(unaff_x21,/*STR('Type')*/ uRam0000000003d75288,uVar2,uRam0000000003d2fe38);
          *(long *)(lVar5 + 0x10) = unaff_x21;
          return lVar5;
        }
      }
    }
  }
LAB_0148f350:
  uStack_98 = func_0x00f78af4();
  puStack_58 = &Atlas_Networking_MatchMakingManager__CreatePrivateMatch;
  uStack_80 = unaff_x22;
  lStack_78 = unaff_x21;
  lStack_70 = lVar5;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4993 & 1) == 0) {
    func_0x00f78a20(0x3d52220);
    bRam0000000003eb4993 = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_90 = 0;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_100,0);
  uStack_a0 = uStack_e8;
  uStack_a8 = uStack_f0;
  uStack_b0 = uStack_f8;
  uStack_b8 = uStack_100;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
  uStack_d8 = uStack_f8;
  uStack_e0 = uStack_100;
  uStack_c8 = uStack_e8;
  uStack_d0 = uStack_f0;
  lVar5 = /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<MatchMakingManager.<CreatePrivateMatch>d__51>*/ func_0x0182c360(&uStack_e0,&uStack_c0,uRam0000000003d52220);
  return lVar5;
}



// ============================================================
// RVA: 0x148f354 | Atlas.Networking.MatchMakingManager.CreatePrivateMatch
// ============================================================

void Atlas_Networking_MatchMakingManager__CreatePrivateMatch(undefined8 param_1)

{
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
  
  if ((bRam0000000003eb4993 & 1) == 0) {
    func_0x00f78a20(0x3d52220);
    bRam0000000003eb4993 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_40 = 0;
  uStack_48 = param_1;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_b0,0);
  uStack_50 = uStack_98;
  uStack_58 = uStack_a0;
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<MatchMakingManager.<CreatePrivateMatch>d__51>*/ func_0x0182c360(&uStack_90,&uStack_70,uRam0000000003d52220);
  return;
}



// ============================================================
// RVA: 0x148f410 | Atlas.Networking.MatchMakingManager.FindPublicMatchWithGroup
// ============================================================

void Atlas_Networking_MatchMakingManager__FindPublicMatchWithGroup(undefined8 param_1)

{
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
  
  if ((bRam0000000003eb4994 & 1) == 0) {
    func_0x00f78a20(0x3d52230);
    bRam0000000003eb4994 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_40 = 0;
  uStack_48 = param_1;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_b0,0);
  uStack_50 = uStack_98;
  uStack_58 = uStack_a0;
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<MatchMakingManager.<FindPublicMatchWithGroup>d__52>*/ func_0x0182c510(&uStack_90,&uStack_70,uRam0000000003d52230);
  return;
}



// ============================================================
// RVA: 0x148f4cc | Atlas.Networking.MatchMakingManager.HandleException
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x148f678 | Atlas.Networking.MatchMakingManager.GetMatchMakingErrorInfo
// ============================================================

/* WARNING: Possible PIC construction at 0x0148f810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148f814) */
/* WARNING: Removing unreachable block (ram,0x0148f81c) */
/* WARNING: Removing unreachable block (ram,0x0148f824) */
/* WARNING: Removing unreachable block (ram,0x0148f858) */
/* WARNING: Removing unreachable block (ram,0x0148f880) */
/* WARNING: Removing unreachable block (ram,0x0148f948) */
/* WARNING: Removing unreachable block (ram,0x0148f950) */
/* WARNING: Removing unreachable block (ram,0x0148f958) */
/* WARNING: Removing unreachable block (ram,0x0148f960) */
/* WARNING: Removing unreachable block (ram,0x0148f9ac) */
/* WARNING: Removing unreachable block (ram,0x0148f9bc) */
/* WARNING: Removing unreachable block (ram,0x0148f9c8) */
/* WARNING: Removing unreachable block (ram,0x0148f9d0) */
/* WARNING: Removing unreachable block (ram,0x0148fa20) */
/* WARNING: Removing unreachable block (ram,0x0148fa2c) */
/* WARNING: Removing unreachable block (ram,0x0148fa38) */
/* WARNING: Removing unreachable block (ram,0x0148fa40) */
/* WARNING: Removing unreachable block (ram,0x0148fa7c) */
/* WARNING: Removing unreachable block (ram,0x0148fa8c) */
/* WARNING: Removing unreachable block (ram,0x0148fa98) */
/* WARNING: Removing unreachable block (ram,0x0148faa0) */
/* WARNING: Removing unreachable block (ram,0x0148faec) */
/* WARNING: Removing unreachable block (ram,0x0148fafc) */
/* WARNING: Removing unreachable block (ram,0x0148fb08) */
/* WARNING: Removing unreachable block (ram,0x0148fb10) */
/* WARNING: Removing unreachable block (ram,0x0148fb5c) */
/* WARNING: Removing unreachable block (ram,0x0148fb6c) */
/* WARNING: Removing unreachable block (ram,0x0148fb78) */
/* WARNING: Removing unreachable block (ram,0x0148fbfc) */
/* WARNING: Removing unreachable block (ram,0x0148fb80) */
/* WARNING: Removing unreachable block (ram,0x0148fbcc) */
/* WARNING: Removing unreachable block (ram,0x0148fc00) */
/* WARNING: Removing unreachable block (ram,0x0148fbdc) */
/* WARNING: Removing unreachable block (ram,0x0148fbe8) */
/* WARNING: Removing unreachable block (ram,0x0148f848) */
/* WARNING: Removing unreachable block (ram,0x0148b834) */

void Atlas_Networking_MatchMakingManager__GetMatchMakingErrorInfo
               (long param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
               undefined1 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000003eb49a0 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d70e88);
    func_0x00f78a20(0x3d70e60);
    func_0x00f78a20(0x3d70e90);
    func_0x00f78a20(0x3d70ea0);
    func_0x00f78a20(0x3d70e80);
    func_0x00f78a20(0x3d70ec8);
    func_0x00f78a20(0x3d70eb0);
    func_0x00f78a20(0x3d70e98);
    func_0x00f78a20(0x3d70ed8);
    func_0x00f78a20(0x3d70ee0);
    func_0x00f78a20(0x3d70ea8);
    func_0x00f78a20(0x3d70e68);
    bRam0000000003eb49a0 = 1;
  }
  *param_2 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *param_3 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *param_4 = 1;
  if (param_1 != 0) {
    lVar5 = (long)*(char *)(param_1 + 0x88) + -0x46;
    uVar4 = (uint)lVar5;
    if ((uVar4 < 0x10) && ((0xbf35U >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
      puVar6 = *(undefined8 **)(&UNK_03a5f170 + (long)(int)uVar4 * 8);
      *param_2 = **(undefined8 **)(&UNK_03a5f0f0 + lVar5 * 8);
      *param_3 = *puVar6;
      *param_4 = 0;
    }
    *param_5 = *(undefined1 *)(param_1 + 0x88);
    return;
  }
  lVar5 = func_0x00f78af4();
  /*Atlas.Networking.MatchMakingManager$$FireAnalytics*/ func_0x014908c4(lVar5,2);
  if ((bRam0000000003eb4997 & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d2a208);
    func_0x00f78a20(0x3d2a1e8);
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a178);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b4f0);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d1b500);
    func_0x00f78a20(0x3d1b4c0);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5a2e8);
    func_0x00f78a20(0x3d5a2f0);
    func_0x00f78a20(0x3d5a2f8);
    func_0x00f78a20(0x3d5a300);
    func_0x00f78a20(0x3d5a308);
    func_0x00f78a20(0x3d5a310);
    func_0x00f78a20(0x3d5a318);
    func_0x00f78a20(0x3d5a320);
    func_0x00f78a20(0x3d5a328);
    bRam0000000003eb4997 = 1;
  }
  if (*(char *)(lVar5 + 0x91) == '\0') {
    return;
  }
  if ((*(long *)(lVar5 + 0x38) != 0) &&
     (lVar8 = *(long *)(*(long *)(lVar5 + 0x38) + 0x30), lVar8 != 0)) {
    uVar7 = *(undefined8 *)(lVar8 + 0x68);
    uVar2 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
    /*System.Action<Match>$$.ctor*/ func_0x01b4a378(uVar2,lVar5,uRam0000000003d5a310,uRam0000000003d2a168);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar2,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) goto code_r0x0149016c;
    *(long **)(lVar8 + 0x68) = plVar3;
    if ((*(long *)(lVar5 + 0x38) != 0) &&
       (lVar8 = *(long *)(*(long *)(lVar5 + 0x38) + 0x30), lVar8 != 0)) {
      uVar7 = *(undefined8 *)(lVar8 + 0xf0);
      uVar2 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar2,lVar5,uRam0000000003d5a318,uRam0000000003d2a290);
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar2,0);
      lVar1 = /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548;
      if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto code_r0x0149016c;
      *(long **)(lVar8 + 0xf0) = plVar3;
      if ((*(long *)(lVar5 + 0x38) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar5 + 0x38) + 0x30), lVar8 != 0)) {
        uVar7 = *(undefined8 *)(lVar8 + 0xf8);
        uVar2 = func_0x00f78aec(lVar1);
        /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar2,lVar5,uRam0000000003d5a320,uRam0000000003d2a290);
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar2,0);
        if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto code_r0x0149016c;
        *(long **)(lVar8 + 0xf8) = plVar3;
        if ((*(long *)(lVar5 + 0x38) != 0) &&
           (lVar8 = *(long *)(*(long *)(lVar5 + 0x38) + 0x30), lVar8 != 0)) {
          uVar7 = *(undefined8 *)(lVar8 + 0x98);
          uVar2 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
          /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,lVar5,uRam0000000003d5a2f0,uRam0000000003d2a018);
          plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar2,0);
          if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) goto code_r0x0149016c;
          *(long **)(lVar8 + 0x98) = plVar3;
          if ((*(long *)(lVar5 + 0x38) != 0) &&
             (lVar8 = *(long *)(*(long *)(lVar5 + 0x38) + 0x30), lVar8 != 0)) {
            uVar7 = *(undefined8 *)(lVar8 + 0x88);
            uVar2 = func_0x00f78aec(/*System.Action<MatchQueueLeftReason>_TypeInfo*/ lRam0000000003d1b4c0);
            /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,lVar5,uRam0000000003d5a308,uRam0000000003d2a178);
            plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar2,0);
            if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<MatchQueueLeftReason>_TypeInfo*/ lRam0000000003d1b4c0)) goto code_r0x0149016c;
            *(long **)(lVar8 + 0x88) = plVar3;
            if ((*(long *)(lVar5 + 0x40) != 0) &&
               (lVar8 = *(long *)(*(long *)(lVar5 + 0x40) + 0x28), lVar8 != 0)) {
              uVar7 = *(undefined8 *)(lVar8 + 0x28);
              uVar2 = func_0x00f78aec(/*System.Action<NetworkHostConfig>_TypeInfo*/ lRam0000000003d1b4f0);
              /*System.Action<NetworkHostConfig>$$.ctor*/ func_0x01e44eec(uVar2,lVar5,uRam0000000003d5a2e8,uRam0000000003d2a1e8);
              plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar2,0);
              if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkHostConfig>_TypeInfo*/ lRam0000000003d1b4f0))
              goto code_r0x0149016c;
              *(long **)(lVar8 + 0x28) = plVar3;
              if (*(long *)(lVar5 + 0x40) != 0) {
                lVar8 = *(long *)(*(long *)(lVar5 + 0x40) + 0x20);
                if (lVar8 == 0) {
code_r0x0149014c:
                  *(undefined1 *)(lVar5 + 0x91) = 0;
                  return;
                }
                lVar8 = *(long *)(lVar8 + 0x10);
                if (lVar8 != 0) {
                  uVar7 = *(undefined8 *)(lVar8 + 0x40);
                  uVar2 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
                  /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar2,lVar5,uRam0000000003d5a328,uRam0000000003d2a238);
                  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar2,0);
                  if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518))
                  goto code_r0x0149016c;
                  *(long **)(lVar8 + 0x40) = plVar3;
                  if ((*(long *)(lVar5 + 0x40) != 0) &&
                     ((lVar8 = *(long *)(*(long *)(lVar5 + 0x40) + 0x20), lVar8 != 0 &&
                      (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)))) {
                    uVar7 = *(undefined8 *)(lVar8 + 0xa8);
                    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
                    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,lVar5,uRam0000000003d5a2f8,0);
                    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar2,0);
                    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
                    goto code_r0x0149016c;
                    *(long **)(lVar8 + 0xa8) = plVar3;
                    if (((*(long *)(lVar5 + 0x40) != 0) &&
                        (lVar8 = *(long *)(*(long *)(lVar5 + 0x40) + 0x20), lVar8 != 0)) &&
                       (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)) {
                      uVar7 = *(undefined8 *)(lVar8 + 0x98);
                      uVar2 = func_0x00f78aec(/*System.Action<NetworkMigrationState>_TypeInfo*/ lRam0000000003d1b500);
                      /*System.Action<NetworkMigrationState>$$.ctor*/ func_0x01e45b28(uVar2,lVar5,uRam0000000003d5a300,uRam0000000003d2a208);
                      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar2,0);
                      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkMigrationState>_TypeInfo*/ lRam0000000003d1b500)) {
                        *(long **)(lVar8 + 0x98) = plVar3;
                        goto code_r0x0149014c;
                      }
                      goto code_r0x0149016c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0149016c:
  lVar5 = func_0x00f78e5c();
  if (*(char *)(lVar5 + 0xac) != '\0') {
    /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
  }
  *(undefined2 *)(lVar5 + 0x90) = 0;
  *(undefined1 *)(lVar5 + 0xa4) = 0;
  *(undefined1 *)(lVar5 + 0xac) = 0;
  *(undefined4 *)(lVar5 + 0xa8) = 0;
  *(undefined4 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0x94) = 0;
  *(undefined2 *)(lVar5 + 0x9c) = 0;
  return;
}



// ============================================================
// RVA: 0x148f7f4 | Atlas.Networking.MatchMakingManager.OnConnectionError
// ============================================================

/* WARNING: Possible PIC construction at 0x0148f810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148f814) */
/* WARNING: Removing unreachable block (ram,0x0148f81c) */
/* WARNING: Removing unreachable block (ram,0x0148f824) */
/* WARNING: Removing unreachable block (ram,0x0148f858) */
/* WARNING: Removing unreachable block (ram,0x0148f880) */
/* WARNING: Removing unreachable block (ram,0x0148f948) */
/* WARNING: Removing unreachable block (ram,0x0148f950) */
/* WARNING: Removing unreachable block (ram,0x0148f958) */
/* WARNING: Removing unreachable block (ram,0x0148f960) */
/* WARNING: Removing unreachable block (ram,0x0148f9ac) */
/* WARNING: Removing unreachable block (ram,0x0148f9bc) */
/* WARNING: Removing unreachable block (ram,0x0148f9c8) */
/* WARNING: Removing unreachable block (ram,0x0148f9d0) */
/* WARNING: Removing unreachable block (ram,0x0148fa20) */
/* WARNING: Removing unreachable block (ram,0x0148fa2c) */
/* WARNING: Removing unreachable block (ram,0x0148fa38) */
/* WARNING: Removing unreachable block (ram,0x0148fa40) */
/* WARNING: Removing unreachable block (ram,0x0148fa7c) */
/* WARNING: Removing unreachable block (ram,0x0148fa8c) */
/* WARNING: Removing unreachable block (ram,0x0148fa98) */
/* WARNING: Removing unreachable block (ram,0x0148faa0) */
/* WARNING: Removing unreachable block (ram,0x0148faec) */
/* WARNING: Removing unreachable block (ram,0x0148fafc) */
/* WARNING: Removing unreachable block (ram,0x0148fb08) */
/* WARNING: Removing unreachable block (ram,0x0148fb10) */
/* WARNING: Removing unreachable block (ram,0x0148fb5c) */
/* WARNING: Removing unreachable block (ram,0x0148fb6c) */
/* WARNING: Removing unreachable block (ram,0x0148fb78) */
/* WARNING: Removing unreachable block (ram,0x0148fbfc) */
/* WARNING: Removing unreachable block (ram,0x0148fb80) */
/* WARNING: Removing unreachable block (ram,0x0148fbcc) */
/* WARNING: Removing unreachable block (ram,0x0148fc00) */
/* WARNING: Removing unreachable block (ram,0x0148fbdc) */
/* WARNING: Removing unreachable block (ram,0x0148fbe8) */
/* WARNING: Removing unreachable block (ram,0x0148f848) */
/* WARNING: Removing unreachable block (ram,0x0148b834) */

void Atlas_Networking_MatchMakingManager__OnConnectionError(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  /*Atlas.Networking.MatchMakingManager$$FireAnalytics*/ func_0x014908c4(param_1,2);
  if ((bRam0000000003eb4997 & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d2a208);
    func_0x00f78a20(0x3d2a1e8);
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a178);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b4f0);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d1b500);
    func_0x00f78a20(0x3d1b4c0);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5a2e8);
    func_0x00f78a20(0x3d5a2f0);
    func_0x00f78a20(0x3d5a2f8);
    func_0x00f78a20(0x3d5a300);
    func_0x00f78a20(0x3d5a308);
    func_0x00f78a20(0x3d5a310);
    func_0x00f78a20(0x3d5a318);
    func_0x00f78a20(0x3d5a320);
    func_0x00f78a20(0x3d5a328);
    bRam0000000003eb4997 = 1;
  }
  if (*(char *)(param_1 + 0x91) == '\0') {
    return;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 != 0)) {
    uVar4 = *(undefined8 *)(lVar5 + 0x68);
    uVar2 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
    /*System.Action<Match>$$.ctor*/ func_0x01b4a378(uVar2,param_1,uRam0000000003d5a310,uRam0000000003d2a168);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) goto code_r0x0149016c;
    *(long **)(lVar5 + 0x68) = plVar3;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 != 0)) {
      uVar4 = *(undefined8 *)(lVar5 + 0xf0);
      uVar2 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar2,param_1,uRam0000000003d5a318,uRam0000000003d2a290);
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
      lVar1 = /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548;
      if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto code_r0x0149016c;
      *(long **)(lVar5 + 0xf0) = plVar3;
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 != 0)) {
        uVar4 = *(undefined8 *)(lVar5 + 0xf8);
        uVar2 = func_0x00f78aec(lVar1);
        /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar2,param_1,uRam0000000003d5a320,uRam0000000003d2a290);
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
        if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto code_r0x0149016c;
        *(long **)(lVar5 + 0xf8) = plVar3;
        if ((*(long *)(param_1 + 0x38) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 != 0)) {
          uVar4 = *(undefined8 *)(lVar5 + 0x98);
          uVar2 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
          /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,param_1,uRam0000000003d5a2f0,uRam0000000003d2a018);
          plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
          if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) goto code_r0x0149016c;
          *(long **)(lVar5 + 0x98) = plVar3;
          if ((*(long *)(param_1 + 0x38) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 != 0)) {
            uVar4 = *(undefined8 *)(lVar5 + 0x88);
            uVar2 = func_0x00f78aec(/*System.Action<MatchQueueLeftReason>_TypeInfo*/ lRam0000000003d1b4c0);
            /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,param_1,uRam0000000003d5a308,uRam0000000003d2a178);
            plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
            if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<MatchQueueLeftReason>_TypeInfo*/ lRam0000000003d1b4c0)) goto code_r0x0149016c;
            *(long **)(lVar5 + 0x88) = plVar3;
            if ((*(long *)(param_1 + 0x40) != 0) &&
               (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar5 != 0)) {
              uVar4 = *(undefined8 *)(lVar5 + 0x28);
              uVar2 = func_0x00f78aec(/*System.Action<NetworkHostConfig>_TypeInfo*/ lRam0000000003d1b4f0);
              /*System.Action<NetworkHostConfig>$$.ctor*/ func_0x01e44eec(uVar2,param_1,uRam0000000003d5a2e8,uRam0000000003d2a1e8);
              plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
              if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkHostConfig>_TypeInfo*/ lRam0000000003d1b4f0))
              goto code_r0x0149016c;
              *(long **)(lVar5 + 0x28) = plVar3;
              if (*(long *)(param_1 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x20);
                if (lVar5 == 0) {
code_r0x0149014c:
                  *(undefined1 *)(param_1 + 0x91) = 0;
                  return;
                }
                lVar5 = *(long *)(lVar5 + 0x10);
                if (lVar5 != 0) {
                  uVar4 = *(undefined8 *)(lVar5 + 0x40);
                  uVar2 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
                  /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar2,param_1,uRam0000000003d5a328,uRam0000000003d2a238);
                  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
                  if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518))
                  goto code_r0x0149016c;
                  *(long **)(lVar5 + 0x40) = plVar3;
                  if ((*(long *)(param_1 + 0x40) != 0) &&
                     ((lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar5 != 0 &&
                      (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)))) {
                    uVar4 = *(undefined8 *)(lVar5 + 0xa8);
                    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
                    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1,uRam0000000003d5a2f8,0);
                    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
                    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
                    goto code_r0x0149016c;
                    *(long **)(lVar5 + 0xa8) = plVar3;
                    if (((*(long *)(param_1 + 0x40) != 0) &&
                        (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar5 != 0)) &&
                       (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
                      uVar4 = *(undefined8 *)(lVar5 + 0x98);
                      uVar2 = func_0x00f78aec(/*System.Action<NetworkMigrationState>_TypeInfo*/ lRam0000000003d1b500);
                      /*System.Action<NetworkMigrationState>$$.ctor*/ func_0x01e45b28(uVar2,param_1,uRam0000000003d5a300,uRam0000000003d2a208);
                      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
                      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkMigrationState>_TypeInfo*/ lRam0000000003d1b500)) {
                        *(long **)(lVar5 + 0x98) = plVar3;
                        goto code_r0x0149014c;
                      }
                      goto code_r0x0149016c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0149016c:
  lVar5 = func_0x00f78e5c();
  if (*(char *)(lVar5 + 0xac) != '\0') {
    /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
  }
  *(undefined2 *)(lVar5 + 0x90) = 0;
  *(undefined1 *)(lVar5 + 0xa4) = 0;
  *(undefined1 *)(lVar5 + 0xac) = 0;
  *(undefined4 *)(lVar5 + 0xa8) = 0;
  *(undefined4 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0x94) = 0;
  *(undefined2 *)(lVar5 + 0x9c) = 0;
  return;
}



// ============================================================
// RVA: 0x148f85c | Atlas.Networking.MatchMakingManager.AddDelegates
// ============================================================

void Atlas_Networking_MatchMakingManager__AddDelegates(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000003eb4996 & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d2a1e8);
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a178);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b4f0);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d1b4c0);
    func_0x00f78a20(0x3d5a2e8);
    func_0x00f78a20(0x3d5a2f0);
    func_0x00f78a20(0x3d5a308);
    func_0x00f78a20(0x3d5a310);
    func_0x00f78a20(0x3d5a318);
    func_0x00f78a20(0x3d5a320);
    bRam0000000003eb4996 = 1;
  }
  if (*(char *)(param_1 + 0x91) != '\0') {
    return;
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 == 0)) {
LAB_0148fbfc:
    func_0x00f78af4();
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x68);
    uVar2 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
    /*System.Action<Match>$$.ctor*/ func_0x01b4a378(uVar2,param_1,uRam0000000003d5a310,uRam0000000003d2a168);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) {
      *(long **)(lVar5 + 0x68) = plVar3;
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 == 0)) goto LAB_0148fbfc;
      uVar4 = *(undefined8 *)(lVar5 + 0xf0);
      uVar2 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar2,param_1,uRam0000000003d5a318,uRam0000000003d2a290);
      plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
      lVar6 = /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548;
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
        *(long **)(lVar5 + 0xf0) = plVar3;
        if ((*(long *)(param_1 + 0x38) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 == 0)) goto LAB_0148fbfc;
        uVar4 = *(undefined8 *)(lVar5 + 0xf8);
        uVar2 = func_0x00f78aec(lVar6);
        /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar2,param_1,uRam0000000003d5a320,uRam0000000003d2a290);
        plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
          *(long **)(lVar5 + 0xf8) = plVar3;
          if ((*(long *)(param_1 + 0x38) == 0) ||
             (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 == 0)) goto LAB_0148fbfc;
          uVar4 = *(undefined8 *)(lVar5 + 0x98);
          uVar2 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
          /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,param_1,uRam0000000003d5a2f0,uRam0000000003d2a018);
          plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
          if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
            *(long **)(lVar5 + 0x98) = plVar3;
            if ((*(long *)(param_1 + 0x38) == 0) ||
               (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 == 0)) goto LAB_0148fbfc;
            uVar4 = *(undefined8 *)(lVar5 + 0x88);
            uVar2 = func_0x00f78aec(/*System.Action<MatchQueueLeftReason>_TypeInfo*/ lRam0000000003d1b4c0);
            /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,param_1,uRam0000000003d5a308,uRam0000000003d2a178);
            plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
            if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<MatchQueueLeftReason>_TypeInfo*/ lRam0000000003d1b4c0)) {
              *(long **)(lVar5 + 0x88) = plVar3;
              if ((*(long *)(param_1 + 0x40) == 0) ||
                 (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar5 == 0))
              goto LAB_0148fbfc;
              uVar4 = *(undefined8 *)(lVar5 + 0x28);
              uVar2 = func_0x00f78aec(/*System.Action<NetworkHostConfig>_TypeInfo*/ lRam0000000003d1b4f0);
              /*System.Action<NetworkHostConfig>$$.ctor*/ func_0x01e44eec(uVar2,param_1,uRam0000000003d5a2e8,uRam0000000003d2a1e8);
              plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
              if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkHostConfig>_TypeInfo*/ lRam0000000003d1b4f0)) {
                *(long **)(lVar5 + 0x28) = plVar3;
                *(undefined1 *)(param_1 + 0x91) = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
  lVar5 = func_0x00f78e5c();
  if ((bRam0000000003eb4997 & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d2a208);
    func_0x00f78a20(0x3d2a1e8);
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a178);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b4f0);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d1b500);
    func_0x00f78a20(0x3d1b4c0);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5a2e8);
    func_0x00f78a20(0x3d5a2f0);
    func_0x00f78a20(0x3d5a2f8);
    func_0x00f78a20(0x3d5a300);
    func_0x00f78a20(0x3d5a308);
    func_0x00f78a20(0x3d5a310);
    func_0x00f78a20(0x3d5a318);
    func_0x00f78a20(0x3d5a320);
    func_0x00f78a20(0x3d5a328);
    bRam0000000003eb4997 = 1;
  }
  if (*(char *)(lVar5 + 0x91) == '\0') {
    return;
  }
  if ((*(long *)(lVar5 + 0x38) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x30), lVar6 != 0)) {
    uVar4 = *(undefined8 *)(lVar6 + 0x68);
    uVar2 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
    /*System.Action<Match>$$.ctor*/ func_0x01b4a378(uVar2,lVar5,uRam0000000003d5a310,uRam0000000003d2a168);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) goto code_r0x0149016c;
    *(long **)(lVar6 + 0x68) = plVar3;
    if ((*(long *)(lVar5 + 0x38) != 0) &&
       (lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x30), lVar6 != 0)) {
      uVar4 = *(undefined8 *)(lVar6 + 0xf0);
      uVar2 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar2,lVar5,uRam0000000003d5a318,uRam0000000003d2a290);
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
      lVar1 = /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548;
      if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto code_r0x0149016c;
      *(long **)(lVar6 + 0xf0) = plVar3;
      if ((*(long *)(lVar5 + 0x38) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x30), lVar6 != 0)) {
        uVar4 = *(undefined8 *)(lVar6 + 0xf8);
        uVar2 = func_0x00f78aec(lVar1);
        /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar2,lVar5,uRam0000000003d5a320,uRam0000000003d2a290);
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
        if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto code_r0x0149016c;
        *(long **)(lVar6 + 0xf8) = plVar3;
        if ((*(long *)(lVar5 + 0x38) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x30), lVar6 != 0)) {
          uVar4 = *(undefined8 *)(lVar6 + 0x98);
          uVar2 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
          /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,lVar5,uRam0000000003d5a2f0,uRam0000000003d2a018);
          plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
          if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) goto code_r0x0149016c;
          *(long **)(lVar6 + 0x98) = plVar3;
          if ((*(long *)(lVar5 + 0x38) != 0) &&
             (lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x30), lVar6 != 0)) {
            uVar4 = *(undefined8 *)(lVar6 + 0x88);
            uVar2 = func_0x00f78aec(/*System.Action<MatchQueueLeftReason>_TypeInfo*/ lRam0000000003d1b4c0);
            /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,lVar5,uRam0000000003d5a308,uRam0000000003d2a178);
            plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
            if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<MatchQueueLeftReason>_TypeInfo*/ lRam0000000003d1b4c0)) goto code_r0x0149016c;
            *(long **)(lVar6 + 0x88) = plVar3;
            if ((*(long *)(lVar5 + 0x40) != 0) &&
               (lVar6 = *(long *)(*(long *)(lVar5 + 0x40) + 0x28), lVar6 != 0)) {
              uVar4 = *(undefined8 *)(lVar6 + 0x28);
              uVar2 = func_0x00f78aec(/*System.Action<NetworkHostConfig>_TypeInfo*/ lRam0000000003d1b4f0);
              /*System.Action<NetworkHostConfig>$$.ctor*/ func_0x01e44eec(uVar2,lVar5,uRam0000000003d5a2e8,uRam0000000003d2a1e8);
              plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
              if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkHostConfig>_TypeInfo*/ lRam0000000003d1b4f0))
              goto code_r0x0149016c;
              *(long **)(lVar6 + 0x28) = plVar3;
              if (*(long *)(lVar5 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar5 + 0x40) + 0x20);
                if (lVar6 == 0) {
code_r0x0149014c:
                  *(undefined1 *)(lVar5 + 0x91) = 0;
                  return;
                }
                lVar6 = *(long *)(lVar6 + 0x10);
                if (lVar6 != 0) {
                  uVar4 = *(undefined8 *)(lVar6 + 0x40);
                  uVar2 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
                  /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar2,lVar5,uRam0000000003d5a328,uRam0000000003d2a238);
                  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
                  if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518))
                  goto code_r0x0149016c;
                  *(long **)(lVar6 + 0x40) = plVar3;
                  if ((*(long *)(lVar5 + 0x40) != 0) &&
                     ((lVar6 = *(long *)(*(long *)(lVar5 + 0x40) + 0x20), lVar6 != 0 &&
                      (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)))) {
                    uVar4 = *(undefined8 *)(lVar6 + 0xa8);
                    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
                    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,lVar5,uRam0000000003d5a2f8,0);
                    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
                    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
                    goto code_r0x0149016c;
                    *(long **)(lVar6 + 0xa8) = plVar3;
                    if (((*(long *)(lVar5 + 0x40) != 0) &&
                        (lVar6 = *(long *)(*(long *)(lVar5 + 0x40) + 0x20), lVar6 != 0)) &&
                       (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) {
                      uVar4 = *(undefined8 *)(lVar6 + 0x98);
                      uVar2 = func_0x00f78aec(/*System.Action<NetworkMigrationState>_TypeInfo*/ lRam0000000003d1b500);
                      /*System.Action<NetworkMigrationState>$$.ctor*/ func_0x01e45b28(uVar2,lVar5,uRam0000000003d5a300,uRam0000000003d2a208);
                      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
                      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkMigrationState>_TypeInfo*/ lRam0000000003d1b500)) {
                        *(long **)(lVar6 + 0x98) = plVar3;
                        goto code_r0x0149014c;
                      }
                      goto code_r0x0149016c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0149016c:
  lVar5 = func_0x00f78e5c();
  if (*(char *)(lVar5 + 0xac) != '\0') {
    /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
  }
  *(undefined2 *)(lVar5 + 0x90) = 0;
  *(undefined1 *)(lVar5 + 0xa4) = 0;
  *(undefined1 *)(lVar5 + 0xac) = 0;
  *(undefined4 *)(lVar5 + 0xa8) = 0;
  *(undefined4 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0x94) = 0;
  *(undefined2 *)(lVar5 + 0x9c) = 0;
  return;
}



// ============================================================
// RVA: 0x148fc04 | Atlas.Networking.MatchMakingManager.RemoveDelegates
// ============================================================

void Atlas_Networking_MatchMakingManager__RemoveDelegates(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000003eb4997 & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d2a208);
    func_0x00f78a20(0x3d2a1e8);
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a178);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b4f0);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d1b500);
    func_0x00f78a20(0x3d1b4c0);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5a2e8);
    func_0x00f78a20(0x3d5a2f0);
    func_0x00f78a20(0x3d5a2f8);
    func_0x00f78a20(0x3d5a300);
    func_0x00f78a20(0x3d5a308);
    func_0x00f78a20(0x3d5a310);
    func_0x00f78a20(0x3d5a318);
    func_0x00f78a20(0x3d5a320);
    func_0x00f78a20(0x3d5a328);
    bRam0000000003eb4997 = 1;
  }
  if (*(char *)(param_1 + 0x91) == '\0') {
    return;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 != 0)) {
    uVar4 = *(undefined8 *)(lVar5 + 0x68);
    uVar2 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
    /*System.Action<Match>$$.ctor*/ func_0x01b4a378(uVar2,param_1,uRam0000000003d5a310,uRam0000000003d2a168);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) goto LAB_0149016c;
    *(long **)(lVar5 + 0x68) = plVar3;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 != 0)) {
      uVar4 = *(undefined8 *)(lVar5 + 0xf0);
      uVar2 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar2,param_1,uRam0000000003d5a318,uRam0000000003d2a290);
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
      lVar1 = /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548;
      if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto LAB_0149016c;
      *(long **)(lVar5 + 0xf0) = plVar3;
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 != 0)) {
        uVar4 = *(undefined8 *)(lVar5 + 0xf8);
        uVar2 = func_0x00f78aec(lVar1);
        /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar2,param_1,uRam0000000003d5a320,uRam0000000003d2a290);
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
        if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto LAB_0149016c;
        *(long **)(lVar5 + 0xf8) = plVar3;
        if ((*(long *)(param_1 + 0x38) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 != 0)) {
          uVar4 = *(undefined8 *)(lVar5 + 0x98);
          uVar2 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
          /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,param_1,uRam0000000003d5a2f0,uRam0000000003d2a018);
          plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
          if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) goto LAB_0149016c;
          *(long **)(lVar5 + 0x98) = plVar3;
          if ((*(long *)(param_1 + 0x38) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar5 != 0)) {
            uVar4 = *(undefined8 *)(lVar5 + 0x88);
            uVar2 = func_0x00f78aec(/*System.Action<MatchQueueLeftReason>_TypeInfo*/ lRam0000000003d1b4c0);
            /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,param_1,uRam0000000003d5a308,uRam0000000003d2a178);
            plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
            if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<MatchQueueLeftReason>_TypeInfo*/ lRam0000000003d1b4c0)) goto LAB_0149016c;
            *(long **)(lVar5 + 0x88) = plVar3;
            if ((*(long *)(param_1 + 0x40) != 0) &&
               (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar5 != 0)) {
              uVar4 = *(undefined8 *)(lVar5 + 0x28);
              uVar2 = func_0x00f78aec(/*System.Action<NetworkHostConfig>_TypeInfo*/ lRam0000000003d1b4f0);
              /*System.Action<NetworkHostConfig>$$.ctor*/ func_0x01e44eec(uVar2,param_1,uRam0000000003d5a2e8,uRam0000000003d2a1e8);
              plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
              if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkHostConfig>_TypeInfo*/ lRam0000000003d1b4f0)) goto LAB_0149016c;
              *(long **)(lVar5 + 0x28) = plVar3;
              if (*(long *)(param_1 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x20);
                if (lVar5 == 0) {
LAB_0149014c:
                  *(undefined1 *)(param_1 + 0x91) = 0;
                  return;
                }
                lVar5 = *(long *)(lVar5 + 0x10);
                if (lVar5 != 0) {
                  uVar4 = *(undefined8 *)(lVar5 + 0x40);
                  uVar2 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
                  /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar2,param_1,uRam0000000003d5a328,uRam0000000003d2a238);
                  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
                  if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518))
                  goto LAB_0149016c;
                  *(long **)(lVar5 + 0x40) = plVar3;
                  if ((*(long *)(param_1 + 0x40) != 0) &&
                     ((lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar5 != 0 &&
                      (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)))) {
                    uVar4 = *(undefined8 *)(lVar5 + 0xa8);
                    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
                    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1,uRam0000000003d5a2f8,0);
                    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
                    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
                    goto LAB_0149016c;
                    *(long **)(lVar5 + 0xa8) = plVar3;
                    if (((*(long *)(param_1 + 0x40) != 0) &&
                        (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar5 != 0)) &&
                       (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
                      uVar4 = *(undefined8 *)(lVar5 + 0x98);
                      uVar2 = func_0x00f78aec(/*System.Action<NetworkMigrationState>_TypeInfo*/ lRam0000000003d1b500);
                      /*System.Action<NetworkMigrationState>$$.ctor*/ func_0x01e45b28(uVar2,param_1,uRam0000000003d5a300,uRam0000000003d2a208);
                      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
                      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkMigrationState>_TypeInfo*/ lRam0000000003d1b500)) {
                        *(long **)(lVar5 + 0x98) = plVar3;
                        goto LAB_0149014c;
                      }
                      goto LAB_0149016c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0149016c:
  lVar5 = func_0x00f78e5c();
  if (*(char *)(lVar5 + 0xac) != '\0') {
    /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
  }
  *(undefined2 *)(lVar5 + 0x90) = 0;
  *(undefined1 *)(lVar5 + 0xa4) = 0;
  *(undefined1 *)(lVar5 + 0xac) = 0;
  *(undefined4 *)(lVar5 + 0xa8) = 0;
  *(undefined4 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0x94) = 0;
  *(undefined2 *)(lVar5 + 0x9c) = 0;
  return;
}



// ============================================================
// RVA: 0x1490170 | Atlas.Networking.MatchMakingManager.Reset
// ============================================================

void Atlas_Networking_MatchMakingManager__Reset(long param_1)

{
  if (*(char *)(param_1 + 0xac) != '\0') {
    /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
  }
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  return;
}



// ============================================================
// RVA: 0x14901b8 | Atlas.Networking.MatchMakingManager.Quit
// ============================================================

ulong Atlas_Networking_MatchMakingManager__Quit(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 **ppuVar14;
  int iVar15;
  undefined1 auVar16 [16];
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
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  if ((bRam0000000003eb4998 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d63690);
    func_0x00f78a20(0x3d63698);
    func_0x00f78a20(0x3d636a0);
    func_0x00f78a20(0x3d280b0);
    func_0x00f78a20(0x3d25740);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d6f1a0);
    func_0x00f78a20(0x3d6f198);
    bRam0000000003eb4998 = 1;
  }
  lVar3 = func_0x00f78aec(/*Atlas.Networking.MatchMakingManager.<>c__DisplayClass57_0_TypeInfo*/ uRam0000000003d280b0);
  /*Atlas.Networking.MatchMakingManager.<>c__DisplayClass57_0$$.ctor*/ func_0x0155ddc8(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    *(undefined8 *)(lVar3 + 0x18) = param_2;
    *(long **)(lVar3 + 0x20) = param_3;
    param_3 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    Atlas_UI_MessageBoxManager_MessageBoxData___ctor(param_3,0);
    lVar4 = /*STR('LOBBY_LEAVE_BODY')*/ lRam0000000003d6f198;
    if (param_3 != (long *)0x0) {
      param_3[5] = /*STR('LOBBY_LEAVE_TITLE')*/ lRam0000000003d6f1a0;
      param_3[6] = lVar4;
      lVar4 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
      param_3[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
      param_3[8] = lVar4;
      lVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(lVar4,lVar3,uRam0000000003d63690,0);
      param_3[10] = lVar4;
      lVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(lVar4,lVar3,uRam0000000003d63698,0);
      param_3[0xb] = lVar4;
      lVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
      /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(lVar4,lVar3,uRam0000000003d636a0,0);
      param_3[3] = lVar4;
      uVar5 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      *(undefined8 *)(param_1 + 0xb8) = uVar5;
      plVar7 = plRam0000000003d3e0e8;
      plVar6 = *(long **)(param_1 + 0x50);
      if (plVar6 != (long *)0x0) {
        ppuVar14 = (undefined1 **)0x3eb8000;
        plVar10 = plRam0000000003d3e0e8;
        if ((bRam0000000003eb832a & 1) == 0) {
          func_0x00f78a20(0x3d3b330);
          func_0x00f78a20(0x3d3b348);
          func_0x00f78a20(0x3d717e8);
          bRam0000000003eb832a = 1;
        }
        if (param_3 != (long *)0x0) {
          ppuVar14 = (undefined1 **)0x3d71000;
          uVar5 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
          plVar10 = (long *)0x0;
          uVar5 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar5);
          if (plVar6 != (long *)0x0) {
            plVar10 = *(long **)(*(long *)(plVar7[3] + 0xc0) + 8);
            (*(code *)*plVar10)(plVar6,uVar5);
            if (plVar6[7] != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar6[7],param_3,uRam0000000003d3b330);
              plVar10 = (long *)plVar6[8];
              if ((plVar10 == (long *)0x0) || ((int)param_3[2] <= (int)plVar10[2])) {
LAB_025dfcb4:
                uVar8 = (*(code *)**(undefined8 **)(*(long *)(plVar7[3] + 0xc0) + 0x30))(plVar6);
                if ((uVar8 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar8 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
                  return uVar8;
                }
                return uVar8;
              }
              if (plVar6[7] != 0) {
                /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar6[7],0,plVar10,uRam0000000003d3b348);
                (*(code *)**(undefined8 **)(*(long *)(plVar7[3] + 0xc0) + 0x60))(plVar6);
                goto LAB_025dfcb4;
              }
            }
          }
        }
        auVar16 = func_0x00f78af4();
        plVar9 = auVar16._8_8_;
        lVar3 = auVar16._0_8_;
        if (plVar9 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
          plVar7 = (long *)0x0;
          plVar6 = plVar9;
          param_3 = plVar10;
          if (lVar3 != 0) {
            uVar2 = (*(code *)**(undefined8 **)(*(long *)(plVar10[3] + 0xc0) + 0x70))(lVar3,uVar5);
            if ((uVar2 & 1) == 0) {
              (*(code *)**(undefined8 **)(*(long *)(plVar10[3] + 0xc0) + 0x78))(lVar3,plVar9);
            }
            return (ulong)(uVar2 ^ 1);
          }
        }
        auVar16 = func_0x00f78af4();
        pcStack_68 = Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
        iVar11 = 0x3eb8000;
        ppuStack_90 = ppuVar14;
        plStack_88 = param_3;
        plStack_80 = plVar7;
        plStack_78 = plVar6;
        puStack_70 = &stack0xffffffffffffffc0;
        if ((bRam0000000003eb832b & 1) == 0) {
          func_0x00f78a20(0x3d3b358);
          func_0x00f78a20(0x3d3b360);
          bRam0000000003eb832b = 1;
        }
        lVar3 = *(long *)(auVar16._0_8_ + 0x38);
        if (lVar3 != 0) {
          iVar11 = *(int *)(lVar3 + 0x18);
          if (iVar11 < 1) goto LAB_025dfe48;
          uVar2 = 0;
          iVar15 = -0x80000000;
          uVar12 = 0;
          do {
            if (*(uint *)(lVar3 + 0x18) <= uVar2) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
            if (lVar3 == 0) break;
            iVar1 = *(int *)(lVar3 + 0x10);
            uVar13 = uVar2;
            if (iVar1 <= iVar15) {
              uVar13 = uVar12;
            }
            if (iVar11 - 1U == uVar2) goto LAB_025dfe4c;
            if (iVar1 <= iVar15) {
              iVar1 = iVar15;
            }
            lVar3 = *(long *)(auVar16._0_8_ + 0x38);
            uVar2 = uVar2 + 1;
            iVar15 = iVar1;
            uVar12 = uVar13;
          } while (lVar3 != 0);
        }
        func_0x00f78af4();
LAB_025dfe48:
        uVar13 = 0;
LAB_025dfe4c:
        *auVar16._8_8_ = uVar13;
        return (ulong)(0 < iVar11);
      }
    }
  }
  lVar3 = func_0x00f78af4();
  pcStack_68 = (code *)&Atlas_Networking_MatchMakingManager__IsMatchMaking;
  plStack_80 = param_3;
  plStack_78 = (long *)param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((*(long *)(lVar3 + 0x38) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar3 + 0x38) + 0x30), param_1 = lVar3, plVar7 != (long *)0x0))
  {
    uVar8 = (**(code **)(*plVar7 + 0x658))(plVar7,*(undefined8 *)(*plVar7 + 0x660));
    if ((uVar8 & 1) == 0) {
      if ((*(long *)(lVar3 + 0x38) == 0) ||
         (plVar7 = *(long **)(*(long *)(lVar3 + 0x38) + 0x30), plVar7 == (long *)0x0))
      goto code_r0x01490450;
      uVar8 = (**(code **)(*plVar7 + 0x348))(plVar7,*(undefined8 *)(*plVar7 + 0x350));
      if ((uVar8 & 1) == 0) {
        return (ulong)(*(char *)(lVar3 + 0x9d) != '\0');
      }
    }
    return 1;
  }
code_r0x01490450:
  lVar3 = func_0x00f78af4();
  plStack_88 = (long *)&Atlas_Networking_MatchMakingManager__IsInGroup;
  ppuStack_90 = &puStack_70;
  if (*(long *)(lVar3 + 0x38) != 0) {
    plVar7 = *(long **)(*(long *)(lVar3 + 0x38) + 0x30);
    if (plVar7 == (long *)0x0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0149047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(*plVar7 + 0x848))(plVar7,*(undefined8 *)(*plVar7 + 0x850));
    return uVar8;
  }
  lVar3 = func_0x00f78af4();
  puStack_98 = &Atlas_Networking_MatchMakingManager__IsGroupLeader;
  if (*(long *)(lVar3 + 0x38) != 0) {
    plVar7 = *(long **)(*(long *)(lVar3 + 0x38) + 0x30);
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    puStack_a0 = (undefined1 *)&ppuStack_90;
                    /* WARNING: Could not recover jumptable at 0x014904b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(*plVar7 + 0x858))(plVar7,*(undefined8 *)(*plVar7 + 0x860));
    return uVar8;
  }
  puStack_a0 = (undefined1 *)&ppuStack_90;
  lVar3 = func_0x00f78af4();
  puStack_a8 = &Atlas_Networking_MatchMakingManager__LeaveMatch;
  if (*(long *)(lVar3 + 0x38) != 0) {
    plVar7 = *(long **)(*(long *)(lVar3 + 0x38) + 0x30);
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    puStack_b0 = (undefined1 *)&puStack_a0;
                    /* WARNING: Could not recover jumptable at 0x014904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(*plVar7 + 0x678))(plVar7,*(undefined8 *)(*plVar7 + 0x680));
    return uVar8;
  }
  puStack_b0 = (undefined1 *)&puStack_a0;
  lVar3 = func_0x00f78af4();
  puStack_b8 = &Atlas_Networking_MatchMakingManager__LeaveGroup;
  if (*(long *)(lVar3 + 0x38) == 0) {
    puStack_c0 = (undefined1 *)&puStack_b0;
    lVar3 = func_0x00f78af4();
    puStack_c8 = &Atlas_Networking_MatchMakingManager__SetVisuals;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar4 = *(long *)(lVar3 + 0xb0);
    plStack_e0 = param_3;
    lStack_d8 = param_1;
    puStack_d0 = (undefined1 *)&puStack_c0;
    if (lVar4 != 0) {
      uStack_1d8 = *(undefined8 *)(lVar4 + 0x38);
      uStack_1e0 = *(undefined8 *)(lVar4 + 0x30);
      uStack_1c8 = *(undefined8 *)(lVar4 + 0x48);
      uStack_1d0 = *(undefined8 *)(lVar4 + 0x40);
      uStack_1b8 = *(undefined8 *)(lVar4 + 0x58);
      uStack_1c0 = *(undefined8 *)(lVar4 + 0x50);
      uStack_1a8 = *(undefined8 *)(lVar4 + 0x68);
      uStack_1b0 = *(undefined8 *)(lVar4 + 0x60);
      uStack_160 = uStack_1e0;
      uStack_158 = uStack_1d8;
      uStack_150 = uStack_1d0;
      uStack_148 = uStack_1c8;
      uStack_140 = uStack_1c0;
      uStack_138 = uStack_1b8;
      uStack_130 = uStack_1b0;
      uStack_128 = uStack_1a8;
      puStack_d0 = (undefined1 *)&puStack_c0;
      Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
                (&uStack_1a0,&uStack_1e0,*(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x88)
                 ,*(undefined8 *)(lVar3 + 0x70),0);
      uStack_218 = uStack_198;
      uStack_220 = uStack_1a0;
      uStack_208 = uStack_188;
      uStack_210 = uStack_190;
      uStack_1f8 = uStack_178;
      uStack_200 = uStack_180;
      uStack_1e8 = uStack_168;
      uStack_1f0 = uStack_170;
      /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_120,&uStack_220,0);
      if ((*(long *)(lVar3 + 0x40) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar3 + 0x40) + 0x28), lVar3 != 0)) {
        uStack_258 = uStack_118;
        uStack_260 = uStack_120;
        uStack_248 = uStack_108;
        uStack_250 = uStack_110;
        uStack_238 = uStack_f8;
        uStack_240 = uStack_100;
        uStack_228 = uStack_e8;
        uStack_230 = uStack_f0;
        uVar8 = /*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar3,&uStack_260,0);
        return uVar8;
      }
    }
    auVar16 = func_0x00f78af4();
    *(long *)(auVar16._0_8_ + 0xb0) = auVar16._8_8_;
    return auVar16._0_8_;
  }
  plVar7 = *(long **)(*(long *)(lVar3 + 0x38) + 0x30);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  puStack_c0 = (undefined1 *)&puStack_b0;
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(*plVar7 + 0x808))(plVar7,*(undefined8 *)(*plVar7 + 0x810));
  return uVar8;
}



// ============================================================
// RVA: 0x14903d8 | Atlas.Networking.MatchMakingManager.IsMatchMaking
// ============================================================

ulong Atlas_Networking_MatchMakingManager__IsMatchMaking(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x30), plVar1 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x658))(plVar1,*(undefined8 *)(*plVar1 + 0x660));
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x30), plVar1 == (long *)0x0))
      goto LAB_01490450;
      uVar2 = (**(code **)(*plVar1 + 0x348))(plVar1,*(undefined8 *)(*plVar1 + 0x350));
      if ((uVar2 & 1) == 0) {
        return (ulong)(*(char *)(param_1 + 0x9d) != '\0');
      }
    }
    return 1;
  }
LAB_01490450:
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(lVar3 + 0x38) + 0x30);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0149047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x848))(plVar1,*(undefined8 *)(*plVar1 + 0x850));
    return uVar2;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(lVar3 + 0x38) + 0x30);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x014904b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x858))(plVar1,*(undefined8 *)(*plVar1 + 0x860));
    return uVar2;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(lVar3 + 0x38) + 0x30);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x014904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x678))(plVar1,*(undefined8 *)(*plVar1 + 0x680));
    return uVar2;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x38) == 0) {
    lVar3 = func_0x00f78af4();
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lVar4 = *(long *)(lVar3 + 0xb0);
    if (lVar4 != 0) {
      uStack_178 = *(undefined8 *)(lVar4 + 0x38);
      uStack_180 = *(undefined8 *)(lVar4 + 0x30);
      uStack_168 = *(undefined8 *)(lVar4 + 0x48);
      uStack_170 = *(undefined8 *)(lVar4 + 0x40);
      uStack_158 = *(undefined8 *)(lVar4 + 0x58);
      uStack_160 = *(undefined8 *)(lVar4 + 0x50);
      uStack_148 = *(undefined8 *)(lVar4 + 0x68);
      uStack_150 = *(undefined8 *)(lVar4 + 0x60);
      uStack_100 = uStack_180;
      uStack_f8 = uStack_178;
      uStack_f0 = uStack_170;
      uStack_e8 = uStack_168;
      uStack_e0 = uStack_160;
      uStack_d8 = uStack_158;
      uStack_d0 = uStack_150;
      uStack_c8 = uStack_148;
      Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
                (&uStack_140,&uStack_180,*(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x88)
                 ,*(undefined8 *)(lVar3 + 0x70),0);
      uStack_1b8 = uStack_138;
      uStack_1c0 = uStack_140;
      uStack_1a8 = uStack_128;
      uStack_1b0 = uStack_130;
      uStack_198 = uStack_118;
      uStack_1a0 = uStack_120;
      uStack_188 = uStack_108;
      uStack_190 = uStack_110;
      /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_c0,&uStack_1c0,0);
      if ((*(long *)(lVar3 + 0x40) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar3 + 0x40) + 0x28), lVar3 != 0)) {
        uStack_1f8 = uStack_b8;
        uStack_200 = uStack_c0;
        uStack_1e8 = uStack_a8;
        uStack_1f0 = uStack_b0;
        uStack_1d8 = uStack_98;
        uStack_1e0 = uStack_a0;
        uStack_1c8 = uStack_88;
        uStack_1d0 = uStack_90;
        uVar2 = /*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar3,&uStack_200,0);
        return uVar2;
      }
    }
    auVar5 = func_0x00f78af4();
    *(long *)(auVar5._0_8_ + 0xb0) = auVar5._8_8_;
    return auVar5._0_8_;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 0x38) + 0x30);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x808))(plVar1,*(undefined8 *)(*plVar1 + 0x810));
  return uVar2;
}



// ============================================================
// RVA: 0x1490454 | Atlas.Networking.MatchMakingManager.IsInGroup
// ============================================================

void Atlas_Networking_MatchMakingManager__IsInGroup(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
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
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0149047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x848))(plVar1,*(undefined8 *)(*plVar1 + 0x850));
      return;
    }
    return;
  }
  lVar2 = func_0x00f78af4();
  if (*(long *)(lVar2 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 0x38) + 0x30);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014904b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x858))(plVar1,*(undefined8 *)(*plVar1 + 0x860));
      return;
    }
    return;
  }
  lVar2 = func_0x00f78af4();
  if (*(long *)(lVar2 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 0x38) + 0x30);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x678))(plVar1,*(undefined8 *)(*plVar1 + 0x680));
      return;
    }
    return;
  }
  lVar2 = func_0x00f78af4();
  if (*(long *)(lVar2 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 0x38) + 0x30);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x808))(plVar1,*(undefined8 *)(*plVar1 + 0x810));
      return;
    }
    return;
  }
  lVar2 = func_0x00f78af4();
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar3 = *(long *)(lVar2 + 0xb0);
  if (lVar3 != 0) {
    uStack_158 = *(undefined8 *)(lVar3 + 0x38);
    uStack_160 = *(undefined8 *)(lVar3 + 0x30);
    uStack_148 = *(undefined8 *)(lVar3 + 0x48);
    uStack_150 = *(undefined8 *)(lVar3 + 0x40);
    uStack_138 = *(undefined8 *)(lVar3 + 0x58);
    uStack_140 = *(undefined8 *)(lVar3 + 0x50);
    uStack_128 = *(undefined8 *)(lVar3 + 0x68);
    uStack_130 = *(undefined8 *)(lVar3 + 0x60);
    uStack_e0 = uStack_160;
    uStack_d8 = uStack_158;
    uStack_d0 = uStack_150;
    uStack_c8 = uStack_148;
    uStack_c0 = uStack_140;
    uStack_b8 = uStack_138;
    uStack_b0 = uStack_130;
    uStack_a8 = uStack_128;
    Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
              (&uStack_120,&uStack_160,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x88),
               *(undefined8 *)(lVar2 + 0x70),0);
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_a0,&uStack_1a0,0);
    if ((*(long *)(lVar2 + 0x40) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar2 + 0x40) + 0x28), lVar2 != 0)) {
      uStack_1d8 = uStack_98;
      uStack_1e0 = uStack_a0;
      uStack_1c8 = uStack_88;
      uStack_1d0 = uStack_90;
      uStack_1b8 = uStack_78;
      uStack_1c0 = uStack_80;
      uStack_1a8 = uStack_68;
      uStack_1b0 = uStack_70;
      /*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar2,&uStack_1e0,0);
      return;
    }
  }
  auVar4 = func_0x00f78af4();
  *(long *)(auVar4._0_8_ + 0xb0) = auVar4._8_8_;
  return;
}



// ============================================================
// RVA: 0x149048c | Atlas.Networking.MatchMakingManager.IsGroupLeader
// ============================================================

void Atlas_Networking_MatchMakingManager__IsGroupLeader(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
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
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014904b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x858))(plVar1,*(undefined8 *)(*plVar1 + 0x860));
      return;
    }
    return;
  }
  lVar2 = func_0x00f78af4();
  if (*(long *)(lVar2 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 0x38) + 0x30);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x678))(plVar1,*(undefined8 *)(*plVar1 + 0x680));
      return;
    }
    return;
  }
  lVar2 = func_0x00f78af4();
  if (*(long *)(lVar2 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 0x38) + 0x30);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x808))(plVar1,*(undefined8 *)(*plVar1 + 0x810));
      return;
    }
    return;
  }
  lVar2 = func_0x00f78af4();
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar3 = *(long *)(lVar2 + 0xb0);
  if (lVar3 != 0) {
    uStack_148 = *(undefined8 *)(lVar3 + 0x38);
    uStack_150 = *(undefined8 *)(lVar3 + 0x30);
    uStack_138 = *(undefined8 *)(lVar3 + 0x48);
    uStack_140 = *(undefined8 *)(lVar3 + 0x40);
    uStack_128 = *(undefined8 *)(lVar3 + 0x58);
    uStack_130 = *(undefined8 *)(lVar3 + 0x50);
    uStack_118 = *(undefined8 *)(lVar3 + 0x68);
    uStack_120 = *(undefined8 *)(lVar3 + 0x60);
    uStack_d0 = uStack_150;
    uStack_c8 = uStack_148;
    uStack_c0 = uStack_140;
    uStack_b8 = uStack_138;
    uStack_b0 = uStack_130;
    uStack_a8 = uStack_128;
    uStack_a0 = uStack_120;
    uStack_98 = uStack_118;
    Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
              (&uStack_110,&uStack_150,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x88),
               *(undefined8 *)(lVar2 + 0x70),0);
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_90,&uStack_190,0);
    if ((*(long *)(lVar2 + 0x40) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar2 + 0x40) + 0x28), lVar2 != 0)) {
      uStack_1c8 = uStack_88;
      uStack_1d0 = uStack_90;
      uStack_1b8 = uStack_78;
      uStack_1c0 = uStack_80;
      uStack_1a8 = uStack_68;
      uStack_1b0 = uStack_70;
      uStack_198 = uStack_58;
      uStack_1a0 = uStack_60;
      /*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar2,&uStack_1d0,0);
      return;
    }
  }
  auVar4 = func_0x00f78af4();
  *(long *)(auVar4._0_8_ + 0xb0) = auVar4._8_8_;
  return;
}



// ============================================================
// RVA: 0x14904c4 | Atlas.Networking.MatchMakingManager.LeaveMatch
// ============================================================

void Atlas_Networking_MatchMakingManager__LeaveMatch(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
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
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x678))(plVar1,*(undefined8 *)(*plVar1 + 0x680));
      return;
    }
    return;
  }
  lVar2 = func_0x00f78af4();
  if (*(long *)(lVar2 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 0x38) + 0x30);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x808))(plVar1,*(undefined8 *)(*plVar1 + 0x810));
      return;
    }
    return;
  }
  lVar2 = func_0x00f78af4();
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar3 = *(long *)(lVar2 + 0xb0);
  if (lVar3 != 0) {
    uStack_138 = *(undefined8 *)(lVar3 + 0x38);
    uStack_140 = *(undefined8 *)(lVar3 + 0x30);
    uStack_128 = *(undefined8 *)(lVar3 + 0x48);
    uStack_130 = *(undefined8 *)(lVar3 + 0x40);
    uStack_118 = *(undefined8 *)(lVar3 + 0x58);
    uStack_120 = *(undefined8 *)(lVar3 + 0x50);
    uStack_108 = *(undefined8 *)(lVar3 + 0x68);
    uStack_110 = *(undefined8 *)(lVar3 + 0x60);
    uStack_c0 = uStack_140;
    uStack_b8 = uStack_138;
    uStack_b0 = uStack_130;
    uStack_a8 = uStack_128;
    uStack_a0 = uStack_120;
    uStack_98 = uStack_118;
    uStack_90 = uStack_110;
    uStack_88 = uStack_108;
    Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
              (&uStack_100,&uStack_140,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x88),
               *(undefined8 *)(lVar2 + 0x70),0);
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_80,&uStack_180,0);
    if ((*(long *)(lVar2 + 0x40) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar2 + 0x40) + 0x28), lVar2 != 0)) {
      uStack_1b8 = uStack_78;
      uStack_1c0 = uStack_80;
      uStack_1a8 = uStack_68;
      uStack_1b0 = uStack_70;
      uStack_198 = uStack_58;
      uStack_1a0 = uStack_60;
      uStack_188 = uStack_48;
      uStack_190 = uStack_50;
      /*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar2,&uStack_1c0,0);
      return;
    }
  }
  auVar4 = func_0x00f78af4();
  *(long *)(auVar4._0_8_ + 0xb0) = auVar4._8_8_;
  return;
}



// ============================================================
// RVA: 0x14904fc | Atlas.Networking.MatchMakingManager.LeaveGroup
// ============================================================

void Atlas_Networking_MatchMakingManager__LeaveGroup(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x808))(plVar1,*(undefined8 *)(*plVar1 + 0x810));
      return;
    }
    return;
  }
  lVar2 = func_0x00f78af4();
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar3 = *(long *)(lVar2 + 0xb0);
  if (lVar3 != 0) {
    uStack_128 = *(undefined8 *)(lVar3 + 0x38);
    uStack_130 = *(undefined8 *)(lVar3 + 0x30);
    uStack_118 = *(undefined8 *)(lVar3 + 0x48);
    uStack_120 = *(undefined8 *)(lVar3 + 0x40);
    uStack_108 = *(undefined8 *)(lVar3 + 0x58);
    uStack_110 = *(undefined8 *)(lVar3 + 0x50);
    uStack_f8 = *(undefined8 *)(lVar3 + 0x68);
    uStack_100 = *(undefined8 *)(lVar3 + 0x60);
    uStack_b0 = uStack_130;
    uStack_a8 = uStack_128;
    uStack_a0 = uStack_120;
    uStack_98 = uStack_118;
    uStack_90 = uStack_110;
    uStack_88 = uStack_108;
    uStack_80 = uStack_100;
    uStack_78 = uStack_f8;
    Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
              (&uStack_f0,&uStack_130,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x88),
               *(undefined8 *)(lVar2 + 0x70),0);
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_70,&uStack_170,0);
    if ((*(long *)(lVar2 + 0x40) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar2 + 0x40) + 0x28), lVar2 != 0)) {
      uStack_1a8 = uStack_68;
      uStack_1b0 = uStack_70;
      uStack_198 = uStack_58;
      uStack_1a0 = uStack_60;
      uStack_188 = uStack_48;
      uStack_190 = uStack_50;
      uStack_178 = uStack_38;
      uStack_180 = uStack_40;
      /*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar2,&uStack_1b0,0);
      return;
    }
  }
  auVar4 = func_0x00f78af4();
  *(long *)(auVar4._0_8_ + 0xb0) = auVar4._8_8_;
  return;
}



// ============================================================
// RVA: 0x1490534 | Atlas.Networking.MatchMakingManager.SetVisuals
// ============================================================

void Atlas_Networking_MatchMakingManager__SetVisuals(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar1 = *(long *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    uStack_118 = *(undefined8 *)(lVar1 + 0x38);
    uStack_120 = *(undefined8 *)(lVar1 + 0x30);
    uStack_108 = *(undefined8 *)(lVar1 + 0x48);
    uStack_110 = *(undefined8 *)(lVar1 + 0x40);
    uStack_f8 = *(undefined8 *)(lVar1 + 0x58);
    uStack_100 = *(undefined8 *)(lVar1 + 0x50);
    uStack_e8 = *(undefined8 *)(lVar1 + 0x68);
    uStack_f0 = *(undefined8 *)(lVar1 + 0x60);
    uStack_a0 = uStack_120;
    uStack_98 = uStack_118;
    uStack_90 = uStack_110;
    uStack_88 = uStack_108;
    uStack_80 = uStack_100;
    uStack_78 = uStack_f8;
    uStack_70 = uStack_f0;
    uStack_68 = uStack_e8;
    Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
              (&uStack_e0,&uStack_120,*(undefined8 *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x70),0);
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_60,&uStack_160,0);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar1 != 0)) {
      uStack_198 = uStack_58;
      uStack_1a0 = uStack_60;
      uStack_188 = uStack_48;
      uStack_190 = uStack_50;
      uStack_178 = uStack_38;
      uStack_180 = uStack_40;
      uStack_168 = uStack_28;
      uStack_170 = uStack_30;
      /*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar1,&uStack_1a0,0);
      return;
    }
  }
  auVar2 = func_0x00f78af4();
  *(long *)(auVar2._0_8_ + 0xb0) = auVar2._8_8_;
  return;
}



// ============================================================
// RVA: 0x14905f0 | Atlas.Networking.MatchMakingManager.SetEventInfo
// ============================================================

void Atlas_Networking_MatchMakingManager__SetEventInfo(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  return;
}



// ============================================================
// RVA: 0x14905f8 | Atlas.Networking.MatchMakingManager.IsGroupPlayerAbleToBeginMatch
// ============================================================

bool Atlas_Networking_MatchMakingManager__IsGroupPlayerAbleToBeginMatch
               (undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x72) != '\0') {
    return false;
  }
  return *(char *)(param_2 + 0x70) != '\0';
}



// ============================================================
// RVA: 0x1490618 | Atlas.Networking.MatchMakingManager.OnMatchStarted
// ============================================================

/* WARNING: Possible PIC construction at 0x014906d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149089c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014906d4) */
/* WARNING: Removing unreachable block (ram,0x014906dc) */
/* WARNING: Removing unreachable block (ram,0x014906f8) */
/* WARNING: Removing unreachable block (ram,0x01490700) */
/* WARNING: Removing unreachable block (ram,0x01490708) */
/* WARNING: Removing unreachable block (ram,0x01490754) */
/* WARNING: Removing unreachable block (ram,0x01490764) */
/* WARNING: Removing unreachable block (ram,0x01490770) */
/* WARNING: Removing unreachable block (ram,0x01490778) */
/* WARNING: Removing unreachable block (ram,0x01490780) */
/* WARNING: Removing unreachable block (ram,0x014907c4) */
/* WARNING: Removing unreachable block (ram,0x014907d4) */
/* WARNING: Removing unreachable block (ram,0x014907e0) */
/* WARNING: Removing unreachable block (ram,0x014907e8) */
/* WARNING: Removing unreachable block (ram,0x014907f0) */
/* WARNING: Removing unreachable block (ram,0x0149083c) */
/* WARNING: Removing unreachable block (ram,0x0149084c) */
/* WARNING: Removing unreachable block (ram,0x01490858) */
/* WARNING: Removing unreachable block (ram,0x014908a0) */
/* WARNING: Removing unreachable block (ram,0x01490878) */
/* WARNING: Removing unreachable block (ram,0x01490880) */
/* WARNING: Removing unreachable block (ram,0x01490888) */
/* WARNING: Removing unreachable block (ram,0x014908bc) */
/* WARNING: Removing unreachable block (ram,0x014908c0) */
/* WARNING: Removing unreachable block (ram,0x01490890) */

void Atlas_Networking_MatchMakingManager__OnMatchStarted(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int extraout_w1;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
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
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
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
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_b8;
  long lStack_a8;
  
  if ((bRam0000000003eb4999 & 1) == 0) {
    func_0x00f78a20(0x3d2a208);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b500);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d5a2f8);
    func_0x00f78a20(0x3d5a300);
    func_0x00f78a20(0x3d5a328);
    func_0x00f78a20(0x3d3e0f8);
    bRam0000000003eb4999 = 1;
  }
  lStack_a8 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb499f & 1) == 0) {
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb499f = 1;
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar10 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xd0), lVar6 == 0)) {
      iVar8 = -1;
    }
    else {
      iVar8 = *(int *)(lVar6 + 0x18) + 1;
    }
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x30), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x888))(&uStack_130,plVar2,*(undefined8 *)(*plVar2 + 0x890));
      uStack_e8 = uStack_128;
      uStack_f0 = uStack_130;
      uStack_d8 = uStack_118;
      uStack_e0 = uStack_120;
      uStack_c8 = uStack_108;
      uStack_d0 = uStack_110;
      uStack_b8 = uStack_f8;
      uStack_c0 = uStack_100;
      uVar10 = /*Unity.Collections.FixedString64Bytes$$ToString*/ func_0x02fd8584(&uStack_f0,0);
    }
    lVar6 = *(long *)(param_1 + 0xb0);
    if (lVar6 == 0) {
      iVar11 = -1;
    }
    else {
      iVar1 = -1;
      if (*(int *)(lVar6 + 0x10) == 2) {
        iVar1 = 1;
      }
      iVar11 = 0;
      if (*(int *)(lVar6 + 0x10) != 1) {
        iVar11 = iVar1;
      }
      if (*(char *)(lVar6 + 0x78) != '\0') {
        iVar11 = iVar11 + 2;
      }
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 0x48);
      uVar3 = /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(*(float *)(param_1 + 0x94) * 1000.0,0);
      if (lVar6 != 0) {
        Atlas_Analytics_AtlasAnalyticsEvents__LobbyExitEvent(lVar6,iVar8,uVar3,0,iVar11,uVar10,0);
        if (*(long *)PTR_03a5d648 == lStack_a8) {
          return;
        }
        goto code_r0x01490a60;
      }
    }
  }
  func_0x00f78af4();
code_r0x01490a60:
  auVar14 = ___stack_chk_fail();
  uVar9 = auVar14._8_8_;
  lVar6 = auVar14._0_8_;
  puVar12 = (undefined8 *)0x3d3b480;
  if ((bRam0000000003eb499e & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b490);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b480);
    func_0x00f78a20(0x3d1dc28);
    bRam0000000003eb499e = 1;
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
  lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkLoadout>_TypeInfo*/ uRam0000000003d1dc28);
  /*System.Collections.Generic.List<NetworkLoadout>$$.ctor*/ func_0x0240d09c(lVar4,uRam0000000003d3b480);
  puVar13 = (undefined8 *)0x3d3b480;
  if (*(long *)(lVar6 + 0x40) == 0) goto code_r0x01490cc0;
  lVar7 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28);
  if (lVar7 == 0) goto code_r0x01490cc0;
  uStack_2d8 = *(undefined8 *)(lVar7 + 0xe0);
  uStack_2e0 = *(undefined8 *)(lVar7 + 0xd8);
  uStack_2c8 = *(undefined8 *)(lVar7 + 0xf0);
  uStack_2d0 = *(undefined8 *)(lVar7 + 0xe8);
  uStack_288 = *(undefined8 *)(lVar7 + 0x130);
  uStack_290 = *(undefined8 *)(lVar7 + 0x128);
  uStack_278 = *(undefined8 *)(lVar7 + 0x140);
  uStack_280 = *(undefined8 *)(lVar7 + 0x138);
  uStack_2a8 = *(undefined8 *)(lVar7 + 0x110);
  uStack_2b0 = *(undefined8 *)(lVar7 + 0x108);
  uStack_298 = *(undefined8 *)(lVar7 + 0x120);
  uStack_2a0 = *(undefined8 *)(lVar7 + 0x118);
  uStack_2b8 = *(undefined8 *)(lVar7 + 0x100);
  uStack_2c0 = *(undefined8 *)(lVar7 + 0xf8);
  uStack_270 = *(undefined8 *)(lVar7 + 0x148);
  puVar13 = puVar12;
  if (lVar4 == 0) goto code_r0x01490cc0;
  uStack_1d0 = uStack_2b0;
  uStack_1c8 = uStack_2a8;
  uStack_1c0 = uStack_2a0;
  uStack_1b8 = uStack_298;
  uStack_1b0 = uStack_290;
  uStack_1a8 = uStack_288;
  uStack_1a0 = uStack_280;
  uStack_198 = uStack_278;
  /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar4,&uStack_1d0,uRam0000000003d3b490);
  if (*(long *)(lVar6 + 0x40) == 0) goto code_r0x01490cc0;
  lVar7 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28);
  if (lVar7 == 0) goto code_r0x01490cc0;
  lVar7 = *(long *)(lVar7 + 0xd0);
  if (lVar7 == 0) goto code_r0x01490cc0;
  puVar13 = (undefined8 *)0x3d32b48;
  uVar9 = (ulong)(0xc - auVar14._8_4_);
  /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_260,lVar7,uRam0000000003d3b4c0);
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_260,uRam0000000003d32b50), (uVar5 & 1) != 0) {
    uStack_298 = uStack_208;
    uStack_2a0 = uStack_210;
    uStack_288 = uStack_1f8;
    uStack_290 = uStack_200;
    uStack_278 = uStack_1e8;
    uStack_280 = uStack_1f0;
    uStack_270 = uStack_1e0;
    uStack_2d8 = uStack_248;
    uStack_2e0 = uStack_250;
    uStack_2c8 = uStack_238;
    uStack_2d0 = uStack_240;
    uStack_2b8 = uStack_228;
    uStack_2c0 = uStack_230;
    uStack_2a8 = uStack_218;
    uStack_2b0 = uStack_220;
    uStack_1c8 = uStack_218;
    uStack_1d0 = uStack_220;
    uStack_1b8 = uStack_208;
    uStack_1c0 = uStack_210;
    uStack_1a8 = uStack_1f8;
    uStack_1b0 = uStack_200;
    uStack_198 = uStack_1e8;
    uStack_1a0 = uStack_1f0;
    /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar4,&uStack_1d0,uRam0000000003d3b490);
  }
  /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_260,uRam0000000003d32b48);
  do {
    uStack_2e8 = Atlas_Contexts_ContextManagerExtensions__GetNetworkAILoadout
                           (*(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x70),
                            *(undefined8 *)(lVar6 + 0x78),uVar9,lVar4,0);
    if ((*(long *)(lVar6 + 0x40) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28), lVar7 != 0)) {
      uStack_2f8 = 0;
      uStack_2ec = (undefined4)uVar9;
      uStack_2f0 = 0;
      /*Atlas.Networking.NetworkLobby$$SetHostConfig*/ func_0x014a9550(lVar7,&uStack_2f8,0);
      return;
    }
code_r0x01490cc0:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01490cf8;
    plVar2 = (long *)___cxa_begin_catch();
    lVar7 = *plVar2;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_260,*puVar13);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
code_r0x01490cf8:
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14908c4 | Atlas.Networking.MatchMakingManager.FireAnalytics
// ============================================================

void Atlas_Networking_MatchMakingManager__FireAnalytics(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int extraout_w1;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
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
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined8 uStack_198;
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
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb499f & 1) == 0) {
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb499f = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar10 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xd0), lVar6 == 0)) {
      iVar8 = -1;
    }
    else {
      iVar8 = *(int *)(lVar6 + 0x18) + 1;
    }
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x30), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x888))(&uStack_d0,plVar2,*(undefined8 *)(*plVar2 + 0x890));
      uStack_88 = uStack_c8;
      uStack_90 = uStack_d0;
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      uStack_58 = uStack_98;
      uStack_60 = uStack_a0;
      uVar10 = /*Unity.Collections.FixedString64Bytes$$ToString*/ func_0x02fd8584(&uStack_90,0);
    }
    lVar6 = *(long *)(param_1 + 0xb0);
    if (lVar6 == 0) {
      iVar11 = -1;
    }
    else {
      iVar1 = -1;
      if (*(int *)(lVar6 + 0x10) == 2) {
        iVar1 = 1;
      }
      iVar11 = 0;
      if (*(int *)(lVar6 + 0x10) != 1) {
        iVar11 = iVar1;
      }
      if (*(char *)(lVar6 + 0x78) != '\0') {
        iVar11 = iVar11 + 2;
      }
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 0x48);
      uVar3 = /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(*(float *)(param_1 + 0x94) * 1000.0,0);
      if (lVar6 != 0) {
        Atlas_Analytics_AtlasAnalyticsEvents__LobbyExitEvent
                  (lVar6,iVar8,uVar3,param_2,iVar11,uVar10,0);
        if (*(long *)PTR_03a5d648 == lStack_48) {
          return;
        }
        goto code_r0x01490a60;
      }
    }
  }
  func_0x00f78af4();
code_r0x01490a60:
  auVar14 = ___stack_chk_fail();
  uVar9 = auVar14._8_8_;
  lVar6 = auVar14._0_8_;
  puVar12 = (undefined8 *)0x3d3b480;
  if ((bRam0000000003eb499e & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b490);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b480);
    func_0x00f78a20(0x3d1dc28);
    bRam0000000003eb499e = 1;
  }
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkLoadout>_TypeInfo*/ uRam0000000003d1dc28);
  /*System.Collections.Generic.List<NetworkLoadout>$$.ctor*/ func_0x0240d09c(lVar4,uRam0000000003d3b480);
  puVar13 = (undefined8 *)0x3d3b480;
  if (*(long *)(lVar6 + 0x40) == 0) goto code_r0x01490cc0;
  lVar7 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28);
  if (lVar7 == 0) goto code_r0x01490cc0;
  uStack_278 = *(undefined8 *)(lVar7 + 0xe0);
  uStack_280 = *(undefined8 *)(lVar7 + 0xd8);
  uStack_268 = *(undefined8 *)(lVar7 + 0xf0);
  uStack_270 = *(undefined8 *)(lVar7 + 0xe8);
  uStack_228 = *(undefined8 *)(lVar7 + 0x130);
  uStack_230 = *(undefined8 *)(lVar7 + 0x128);
  uStack_218 = *(undefined8 *)(lVar7 + 0x140);
  uStack_220 = *(undefined8 *)(lVar7 + 0x138);
  uStack_248 = *(undefined8 *)(lVar7 + 0x110);
  uStack_250 = *(undefined8 *)(lVar7 + 0x108);
  uStack_238 = *(undefined8 *)(lVar7 + 0x120);
  uStack_240 = *(undefined8 *)(lVar7 + 0x118);
  uStack_258 = *(undefined8 *)(lVar7 + 0x100);
  uStack_260 = *(undefined8 *)(lVar7 + 0xf8);
  uStack_210 = *(undefined8 *)(lVar7 + 0x148);
  puVar13 = puVar12;
  if (lVar4 == 0) goto code_r0x01490cc0;
  uStack_170 = uStack_250;
  uStack_168 = uStack_248;
  uStack_160 = uStack_240;
  uStack_158 = uStack_238;
  uStack_150 = uStack_230;
  uStack_148 = uStack_228;
  uStack_140 = uStack_220;
  uStack_138 = uStack_218;
  /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar4,&uStack_170,uRam0000000003d3b490);
  if (*(long *)(lVar6 + 0x40) == 0) goto code_r0x01490cc0;
  lVar7 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28);
  if (lVar7 == 0) goto code_r0x01490cc0;
  lVar7 = *(long *)(lVar7 + 0xd0);
  if (lVar7 == 0) goto code_r0x01490cc0;
  puVar13 = (undefined8 *)0x3d32b48;
  uVar9 = (ulong)(0xc - auVar14._8_4_);
  /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_200,lVar7,uRam0000000003d3b4c0);
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_200,uRam0000000003d32b50), (uVar5 & 1) != 0) {
    uStack_238 = uStack_1a8;
    uStack_240 = uStack_1b0;
    uStack_228 = uStack_198;
    uStack_230 = uStack_1a0;
    uStack_218 = uStack_188;
    uStack_220 = uStack_190;
    uStack_210 = uStack_180;
    uStack_278 = uStack_1e8;
    uStack_280 = uStack_1f0;
    uStack_268 = uStack_1d8;
    uStack_270 = uStack_1e0;
    uStack_258 = uStack_1c8;
    uStack_260 = uStack_1d0;
    uStack_248 = uStack_1b8;
    uStack_250 = uStack_1c0;
    uStack_168 = uStack_1b8;
    uStack_170 = uStack_1c0;
    uStack_158 = uStack_1a8;
    uStack_160 = uStack_1b0;
    uStack_148 = uStack_198;
    uStack_150 = uStack_1a0;
    uStack_138 = uStack_188;
    uStack_140 = uStack_190;
    /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar4,&uStack_170,uRam0000000003d3b490);
  }
  /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_200,uRam0000000003d32b48);
  do {
    uStack_288 = Atlas_Contexts_ContextManagerExtensions__GetNetworkAILoadout
                           (*(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x70),
                            *(undefined8 *)(lVar6 + 0x78),uVar9,lVar4,0);
    if ((*(long *)(lVar6 + 0x40) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28), lVar7 != 0)) {
      uStack_298 = 0;
      uStack_28c = (undefined4)uVar9;
      uStack_290 = 0;
      /*Atlas.Networking.NetworkLobby$$SetHostConfig*/ func_0x014a9550(lVar7,&uStack_298,0);
      return;
    }
code_r0x01490cc0:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01490cf8;
    plVar2 = (long *)___cxa_begin_catch();
    lVar7 = *plVar2;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_200,*puVar13);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
code_r0x01490cf8:
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x1490a64 | Atlas.Networking.MatchMakingManager.SetHostConfig
// ============================================================

void Atlas_Networking_MatchMakingManager__SetHostConfig(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w1;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = (undefined8 *)0x3d3b480;
  if ((bRam0000000003eb499e & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b490);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b480);
    func_0x00f78a20(0x3d1dc28);
    bRam0000000003eb499e = 1;
  }
  uStack_b0 = 0;
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
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkLoadout>_TypeInfo*/ uRam0000000003d1dc28);
  /*System.Collections.Generic.List<NetworkLoadout>$$.ctor*/ func_0x0240d09c(lVar1,uRam0000000003d3b480);
  puVar6 = (undefined8 *)0x3d3b480;
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_01490cc0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
  if (lVar4 == 0) goto LAB_01490cc0;
  uStack_1a8 = *(undefined8 *)(lVar4 + 0xe0);
  uStack_1b0 = *(undefined8 *)(lVar4 + 0xd8);
  uStack_198 = *(undefined8 *)(lVar4 + 0xf0);
  uStack_1a0 = *(undefined8 *)(lVar4 + 0xe8);
  uStack_158 = *(undefined8 *)(lVar4 + 0x130);
  uStack_160 = *(undefined8 *)(lVar4 + 0x128);
  uStack_148 = *(undefined8 *)(lVar4 + 0x140);
  uStack_150 = *(undefined8 *)(lVar4 + 0x138);
  uStack_178 = *(undefined8 *)(lVar4 + 0x110);
  uStack_180 = *(undefined8 *)(lVar4 + 0x108);
  uStack_168 = *(undefined8 *)(lVar4 + 0x120);
  uStack_170 = *(undefined8 *)(lVar4 + 0x118);
  uStack_188 = *(undefined8 *)(lVar4 + 0x100);
  uStack_190 = *(undefined8 *)(lVar4 + 0xf8);
  uStack_140 = *(undefined8 *)(lVar4 + 0x148);
  puVar6 = puVar5;
  if (lVar1 == 0) goto LAB_01490cc0;
  uStack_a0 = uStack_180;
  uStack_98 = uStack_178;
  uStack_90 = uStack_170;
  uStack_88 = uStack_168;
  uStack_80 = uStack_160;
  uStack_78 = uStack_158;
  uStack_70 = uStack_150;
  uStack_68 = uStack_148;
  /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar1,&uStack_a0,uRam0000000003d3b490);
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_01490cc0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
  if (lVar4 == 0) goto LAB_01490cc0;
  lVar4 = *(long *)(lVar4 + 0xd0);
  if (lVar4 == 0) goto LAB_01490cc0;
  puVar6 = (undefined8 *)0x3d32b48;
  param_2 = (ulong)(0xc - (int)param_2);
  /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_130,lVar4,uRam0000000003d3b4c0);
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_130,uRam0000000003d32b50), (uVar2 & 1) != 0) {
    uStack_168 = uStack_d8;
    uStack_170 = uStack_e0;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_140 = uStack_b0;
    uStack_1a8 = uStack_118;
    uStack_1b0 = uStack_120;
    uStack_198 = uStack_108;
    uStack_1a0 = uStack_110;
    uStack_188 = uStack_f8;
    uStack_190 = uStack_100;
    uStack_178 = uStack_e8;
    uStack_180 = uStack_f0;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar1,&uStack_a0,uRam0000000003d3b490);
  }
  /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_130,uRam0000000003d32b48);
  do {
    uStack_1b8 = Atlas_Contexts_ContextManagerExtensions__GetNetworkAILoadout
                           (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x70),
                            *(undefined8 *)(param_1 + 0x78),param_2,lVar1,0);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar4 != 0)) {
      uStack_1c8 = 0;
      uStack_1bc = (undefined4)param_2;
      uStack_1c0 = 0;
      /*Atlas.Networking.NetworkLobby$$SetHostConfig*/ func_0x014a9550(lVar4,&uStack_1c8,0);
      return;
    }
LAB_01490cc0:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01490cf8;
    plVar3 = (long *)___cxa_begin_catch();
    lVar4 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_130,*puVar6);
  } while (lVar4 == 0);
  func_0x00f78ac0(lVar4,0);
code_r0x01490cf8:
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x1490cfc | Atlas.Networking.MatchMakingManager.OnSessionPlayerConnected
// ============================================================

void Atlas_Networking_MatchMakingManager__OnSessionPlayerConnected(void)

{
  return;
}



// ============================================================
// RVA: 0x1490d00 | Atlas.Networking.MatchMakingManager.OnSessionPlayerDisconnected
// ============================================================

void Atlas_Networking_MatchMakingManager__OnSessionPlayerDisconnected(void)

{
  return;
}



// ============================================================
// RVA: 0x1490d04 | Atlas.Networking.MatchMakingManager.OnDisconnected
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1490d94 | Atlas.Networking.MatchMakingManager.OnMatchQueueLeft
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1491070 | Atlas.Networking.MatchMakingManager.OnAllPlayersReadyHostConfigValid
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14914e0 | Atlas.Networking.MatchMakingManager.Update
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1491974 | Atlas.Networking.MatchMakingManager.OnVoteStarted
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14919ec | Atlas.Networking.MatchMakingManager.OnHostMigrationCompleted
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0152a558) */
/* WARNING: Removing unreachable block (ram,0x0152a560) */
/* WARNING: Removing unreachable block (ram,0x0152a578) */
/* WARNING: Removing unreachable block (ram,0x0152a580) */
/* WARNING: Removing unreachable block (ram,0x0152a598) */
/* WARNING: Removing unreachable block (ram,0x0152a5b0) */
/* WARNING: Removing unreachable block (ram,0x0152a5c4) */
/* WARNING: Removing unreachable block (ram,0x0152a5dc) */
/* WARNING: Removing unreachable block (ram,0x0152a600) */
/* WARNING: Removing unreachable block (ram,0x0152a614) */
/* WARNING: Removing unreachable block (ram,0x0152a624) */
/* WARNING: Removing unreachable block (ram,0x0152a62c) */
/* WARNING: Removing unreachable block (ram,0x0152a63c) */
/* WARNING: Removing unreachable block (ram,0x0152a650) */
/* WARNING: Removing unreachable block (ram,0x0152a654) */
/* WARNING: Removing unreachable block (ram,0x0152a65c) */
/* WARNING: Removing unreachable block (ram,0x0152a670) */
/* WARNING: Removing unreachable block (ram,0x0152a680) */
/* WARNING: Removing unreachable block (ram,0x0152a684) */
/* WARNING: Removing unreachable block (ram,0x0152a68c) */
/* WARNING: Removing unreachable block (ram,0x0152a69c) */
/* WARNING: Removing unreachable block (ram,0x0152a6b0) */
/* WARNING: Removing unreachable block (ram,0x0152a6b4) */
/* WARNING: Removing unreachable block (ram,0x0152a6bc) */
/* WARNING: Removing unreachable block (ram,0x0152a6d0) */
/* WARNING: Removing unreachable block (ram,0x0152a6e0) */
/* WARNING: Removing unreachable block (ram,0x0152a6e4) */
/* WARNING: Removing unreachable block (ram,0x0152a6ec) */
/* WARNING: Removing unreachable block (ram,0x0152a708) */
/* WARNING: Removing unreachable block (ram,0x0152a71c) */
/* WARNING: Removing unreachable block (ram,0x0152a728) */
/* WARNING: Removing unreachable block (ram,0x0152a73c) */
/* WARNING: Removing unreachable block (ram,0x0152a74c) */
/* WARNING: Removing unreachable block (ram,0x0152a750) */
/* WARNING: Removing unreachable block (ram,0x0152a758) */
/* WARNING: Removing unreachable block (ram,0x0152a774) */
/* WARNING: Removing unreachable block (ram,0x0152a788) */
/* WARNING: Removing unreachable block (ram,0x0152a794) */
/* WARNING: Removing unreachable block (ram,0x0152a7a8) */
/* WARNING: Removing unreachable block (ram,0x0152a7b8) */
/* WARNING: Removing unreachable block (ram,0x0152a7bc) */
/* WARNING: Removing unreachable block (ram,0x0152a7c4) */
/* WARNING: Removing unreachable block (ram,0x0152a7e0) */
/* WARNING: Removing unreachable block (ram,0x0152a7f4) */
/* WARNING: Removing unreachable block (ram,0x0152a800) */
/* WARNING: Removing unreachable block (ram,0x0152a814) */
/* WARNING: Removing unreachable block (ram,0x0152a824) */
/* WARNING: Removing unreachable block (ram,0x0152a828) */
/* WARNING: Removing unreachable block (ram,0x0152a830) */
/* WARNING: Removing unreachable block (ram,0x0152a84c) */
/* WARNING: Removing unreachable block (ram,0x0152a860) */
/* WARNING: Removing unreachable block (ram,0x0152a86c) */
/* WARNING: Removing unreachable block (ram,0x0152a884) */
/* WARNING: Removing unreachable block (ram,0x0152a88c) */
/* WARNING: Removing unreachable block (ram,0x0152a8d0) */

long Atlas_Networking_MatchMakingManager__OnHostMigrationCompleted(long param_1)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int extraout_w1;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  uint uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
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
  
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (plVar7 = *(long **)(*(long *)(param_1 + 0x38) + 0x30), plVar7 == (long *)0x0)) {
LAB_01491a68:
    lVar8 = func_0x00f78af4();
    if ((*(long *)(lVar8 + 0x38) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar8 + 0x38) + 0x30), plVar7 != (long *)0x0)) {
      lVar11 = (**(code **)(*plVar7 + 0x938))(plVar7,*(undefined8 *)(*plVar7 + 0x940));
      if ((int)lVar11 == 0) {
        return lVar11;
      }
      if ((*(long *)(lVar8 + 0x40) != 0) &&
         (lVar11 = *(long *)(*(long *)(lVar8 + 0x40) + 0x20), lVar11 != 0)) {
        uVar14 = /*Core.Networking.NetworkSession$$NumberOfRealPlayers*/ func_0x0165ec58(lVar11,0);
        puVar17 = (undefined8 *)0x3d3b480;
        if ((bRam0000000003eb499e & 1) == 0) {
          func_0x00f78a20(0x3d32b48);
          func_0x00f78a20(0x3d32b50);
          func_0x00f78a20(0x3d32b58);
          func_0x00f78a20(0x3d3b490);
          func_0x00f78a20(0x3d3b4c0);
          func_0x00f78a20(0x3d3b480);
          func_0x00f78a20(0x3d1dc28);
          bRam0000000003eb499e = 1;
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
        lStack_140 = 0;
        lVar11 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkLoadout>_TypeInfo*/ uRam0000000003d1dc28);
        /*System.Collections.Generic.List<NetworkLoadout>$$.ctor*/ func_0x0240d09c(lVar11,uRam0000000003d3b480);
        puVar18 = (undefined8 *)0x3d3b480;
        if (*(long *)(lVar8 + 0x40) == 0) goto LAB_01490cc0;
        lVar9 = *(long *)(*(long *)(lVar8 + 0x40) + 0x28);
        if (lVar9 == 0) goto LAB_01490cc0;
        uStack_1c8 = *(undefined8 *)(lVar9 + 0xe0);
        uStack_1d0 = *(undefined8 *)(lVar9 + 0xd8);
        uStack_1b8 = *(undefined8 *)(lVar9 + 0xf0);
        uStack_1c0 = *(undefined8 *)(lVar9 + 0xe8);
        uStack_178 = *(undefined8 *)(lVar9 + 0x130);
        uStack_180 = *(undefined8 *)(lVar9 + 0x128);
        uStack_168 = *(undefined8 *)(lVar9 + 0x140);
        uStack_170 = *(undefined8 *)(lVar9 + 0x138);
        uStack_198 = *(undefined8 *)(lVar9 + 0x110);
        uStack_1a0 = *(undefined8 *)(lVar9 + 0x108);
        uStack_188 = *(undefined8 *)(lVar9 + 0x120);
        lStack_190 = *(undefined8 *)(lVar9 + 0x118);
        uStack_1a8 = *(undefined8 *)(lVar9 + 0x100);
        uStack_1b0 = *(undefined8 *)(lVar9 + 0xf8);
        uStack_160 = *(undefined8 *)(lVar9 + 0x148);
        puVar18 = puVar17;
        if (lVar11 == 0) goto LAB_01490cc0;
        /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar11,&stack0xffffffffffffff40,uRam0000000003d3b490);
        if (*(long *)(lVar8 + 0x40) == 0) goto LAB_01490cc0;
        lVar9 = *(long *)(*(long *)(lVar8 + 0x40) + 0x28);
        if (lVar9 == 0) goto LAB_01490cc0;
        lVar9 = *(long *)(lVar9 + 0xd0);
        if (lVar9 == 0) goto LAB_01490cc0;
        puVar18 = (undefined8 *)0x3d32b48;
        uVar14 = (ulong)(0xc - (int)uVar14);
        /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_150,lVar9,uRam0000000003d3b4c0);
        while (uVar15 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_150,uRam0000000003d32b50), (uVar15 & 1) != 0) {
          uStack_188 = uStack_f8;
          lStack_190 = uStack_100;
          uStack_178 = uStack_e8;
          uStack_180 = uStack_f0;
          uStack_168 = uStack_d8;
          uStack_170 = uStack_e0;
          uStack_160 = uStack_d0;
          uStack_1c8 = uStack_138;
          uStack_1d0 = lStack_140;
          uStack_1b8 = uStack_128;
          uStack_1c0 = uStack_130;
          uStack_1a8 = uStack_118;
          uStack_1b0 = uStack_120;
          uStack_198 = uStack_108;
          uStack_1a0 = uStack_110;
          /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar11,&stack0xffffffffffffff40,uRam0000000003d3b490);
        }
        /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_150,uRam0000000003d32b48);
        do {
          uStack_1d8 = Atlas_Contexts_ContextManagerExtensions__GetNetworkAILoadout
                                 (*(undefined8 *)(lVar8 + 0x48),*(undefined8 *)(lVar8 + 0x70),
                                  *(undefined8 *)(lVar8 + 0x78),uVar14,lVar11,0);
          if ((*(long *)(lVar8 + 0x40) != 0) &&
             (lVar9 = *(long *)(*(long *)(lVar8 + 0x40) + 0x28), lVar9 != 0)) {
            uStack_1e8 = 0;
            uStack_1dc = (undefined4)uVar14;
            uStack_1e0 = 0;
            lVar8 = /*Atlas.Networking.NetworkLobby$$SetHostConfig*/ func_0x014a9550(lVar9,&uStack_1e8,0);
            return lVar8;
          }
LAB_01490cc0:
          func_0x00f78af4();
          if (extraout_w1 != 1) goto code_r0x01490cf8;
          plVar7 = (long *)___cxa_begin_catch();
          lVar9 = *plVar7;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_150,*puVar18);
        } while (lVar9 == 0);
        func_0x00f78ac0(lVar9,0);
code_r0x01490cf8:
        lVar8 = __Unwind_Resume();
        return lVar8;
      }
    }
    lVar8 = func_0x00f78af4();
    if ((bRam0000000003eb49a1 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d24dd0);
      func_0x00f78a20(0x3d63688);
      func_0x00f78a20(0x3d280a8);
      bRam0000000003eb49a1 = 1;
    }
    if (((*(ushort *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar17 = *(undefined8 **)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xb8);
    lVar11 = puVar17[1];
    if (lVar11 == 0) {
      if (((*(ushort *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar17 = *(undefined8 **)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xb8);
      }
      uVar12 = *puVar17;
      lVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(lVar11,uVar12,uRam0000000003d63688,0);
      *(long *)(*(long *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xb8) + 8) = lVar11;
    }
    if (lVar8 == 0) {
      lVar8 = func_0x00f78af4();
      return *(long *)(lVar8 + 0x18);
    }
    *(long *)(lVar8 + 0x10) = lVar11;
    *(undefined8 *)(lVar8 + 0xb8) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    return lVar8;
  }
  lVar8 = (**(code **)(*plVar7 + 0x938))(plVar7,*(undefined8 *)(*plVar7 + 0x940));
  if ((int)lVar8 == 0) {
    return lVar8;
  }
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar8 == 0)) goto LAB_01491a68;
  lVar8 = /*Core.Networking.NetworkSession$$GetNetworkStateType*/ func_0x0165e4c8(lVar8,0);
  if ((int)lVar8 != 2) {
    return lVar8;
  }
  lVar8 = *(long *)(param_1 + 0x58);
  if (lVar8 == 0) goto LAB_01491a68;
  lVar11 = *(long *)(param_1 + 0xb0);
  if ((bRam0000000003eb4e73 & 1) == 0) {
    func_0x00f78a20(0x3d3b110,lVar11,0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66320);
    func_0x00f78a20(0x3d663f8);
    func_0x00f78a20(0x3d66300);
    func_0x00f78a20(0x3d66318);
    func_0x00f78a20(0x3d663f0);
    func_0x00f78a20(0x3d6b9f8);
    bRam0000000003eb4e73 = 1;
  }
  if (*(long *)(lVar8 + 0x20) != 0) {
    lVar9 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar8 + 0x20),0);
    if ((int)lVar9 == 0) {
      return lVar9;
    }
    if ((*(long *)(lVar8 + 0xb0) != 0) &&
       (Atlas_Definitions_AtlasDefinitions__GetAllPlayerFacingMapDefinitions
                  (*(long *)(lVar8 + 0xb0),*(undefined8 *)(lVar8 + 0xe0),0), lVar11 != 0)) {
      uVar12 = *(undefined8 *)(lVar8 + 0xe0);
      if (*(int *)(lVar11 + 0x10) == 2) {
        uVar12 = Atlas_UI_VotingManager__FilterMapsFromTournament(lVar8,uVar12);
        *(undefined8 *)(lVar8 + 0xe0) = uVar12;
      }
      Atlas_UI_VotingManager__SelectMapsForVoting
                (lVar8,uVar12,&stack0xffffffffffffffb8,&stack0xffffffffffffffb0);
      if (*(long *)(lVar8 + 0xe0) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar8 + 0xe0),uRam0000000003d3b110);
      }
    }
  }
  func_0x00f78af4();
  uVar12 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar12,0);
  lStack_190 = auVar19._8_8_;
  uVar15 = auVar19._0_8_;
  uVar14 = 0x3eb4000;
  if ((bRam0000000003eb4e75 & 1) == 0) {
    func_0x00f78a20(0x3d2e6f0);
    func_0x00f78a20(0x3d2e6f8);
    func_0x00f78a20(0x3d2e700);
    func_0x00f78a20(0x3d2e710);
    func_0x00f78a20(0x3d2e748);
    func_0x00f78a20(0x3d2e750);
    func_0x00f78a20(0x3d32bf0);
    func_0x00f78a20(0x3d32980);
    func_0x00f78a20(0x3d33d98);
    func_0x00f78a20(0x3d33da0);
    func_0x00f78a20(0x3d32988);
    func_0x00f78a20(0x3d32bf8);
    func_0x00f78a20(0x3d32c00);
    func_0x00f78a20(0x3d32990);
    func_0x00f78a20(0x3d33dd0);
    func_0x00f78a20(0x3d39240);
    func_0x00f78a20(0x3d39248);
    func_0x00f78a20(0x3d3b120);
    func_0x00f78a20(0x3d3b6b8);
    func_0x00f78a20(0x3d3b130);
    func_0x00f78a20(0x3d3b0f8);
    func_0x00f78a20(0x3d3b140);
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d3b148);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d66270);
    func_0x00f78a20(0x3d6cdb0);
    func_0x00f78a20(0x3d6cdc0);
    func_0x00f78a20(0x3d6cdb8);
    func_0x00f78a20(0x3d6cdc8);
    bRam0000000003eb4e75 = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_140 = 0;
  uStack_138 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_154 = 0;
  if (*(long *)(uVar15 + 0xb8) != 0) {
    uVar14 = 0x3d1d000;
    /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar15 + 0xb8),uRam0000000003d2e6f8);
    lVar11 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
    /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(lVar11,lStack_190,uRam0000000003d3b0f8);
    if (((*(long *)(uVar15 + 0x20) != 0) &&
        (lVar8 = *(long *)(*(long *)(uVar15 + 0x20) + 0x20), lVar8 != 0)) &&
       (lVar8 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar8,0), lVar8 != 0)) {
      uVar14 = 0x3d6c000;
      uStack_d8 = CONCAT44(*(undefined4 *)(lVar8 + 0x18),(undefined4)uStack_d8);
      uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)&uStack_d8 + 4,0);
      /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar12,0);
      if (((*(long *)(uVar15 + 0x20) != 0) &&
          (lVar8 = *(long *)(*(long *)(uVar15 + 0x20) + 0x20), lVar8 != 0)) &&
         (lVar8 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar8,0), lVar8 != 0)) {
        uVar14 = 0x3d32bf8;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_188,lVar8,uRam0000000003d3b6b8);
        uStack_f8 = uStack_180;
        uStack_100 = uStack_188;
        uStack_e8 = uStack_170;
        uStack_f0 = uStack_178;
        uStack_e0 = uStack_168;
LAB_0152aba4:
        uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_100,uRam0000000003d32bf8);
        if ((uVar10 & 1) != 0) {
          sVar3 = uStack_e8._4_2_;
          sVar1 = (short)uStack_e8;
          if (uStack_e8._4_2_ != uStack_f0._4_2_) {
            sVar1 = uStack_f0._4_2_;
          }
          if (*(long *)(uVar15 + 0xb8) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          iVar13 = (int)sVar1;
          uVar10 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar15 + 0xb8),iVar13,uRam0000000003d2e700);
          if ((uVar10 & 1) == 0) {
            if (*(long *)(uVar15 + 0xb8) == 0) {
              func_0x00f78af4();
              goto code_r0x0152af9c;
            }
            /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar15 + 0xb8),iVar13,0,uRam0000000003d2e6f0);
          }
          lVar8 = *(long *)(uVar15 + 0xb8);
          if (lVar8 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          iVar6 = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar8,iVar13,uRam0000000003d2e748);
          uStack_d8 = CONCAT44(iVar6,(undefined4)uStack_d8);
          /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar8,iVar13,iVar6 + 1,uRam0000000003d2e750);
          if (*(long *)(uVar15 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar15 + 0x28),(int)sVar3,&uStack_108,0);
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (0 < (int)uVar2) {
            uVar16 = 0;
            do {
              if (uVar2 <= uVar16) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar8 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar16 * 8 + 0x20);
              if (lVar8 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar8 + 0x18),uStack_108,0);
              if ((uVar10 & 1) != 0) {
                /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_108,0);
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar11,uVar16,uRam0000000003d3b130);
                break;
              }
              uVar16 = uVar16 + 1;
              uVar2 = *(uint *)(lVar11 + 0x18);
            } while ((int)uVar16 < (int)uVar2);
          }
          goto LAB_0152aba4;
        }
        uStack_160 = CONCAT44(uStack_160._4_4_,0x136);
        /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_100,uRam0000000003d32bf0);
        uStack_154 = 0;
        if (*(long *)(uVar15 + 0xb8) != 0) {
          /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_188,*(long *)(uVar15 + 0xb8),uRam0000000003d2e710);
          uStack_128 = uStack_180;
          uStack_130 = uStack_188;
          uStack_118 = uStack_170;
          uStack_120 = uStack_178;
code_r0x0152ad1c:
          uVar14 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_130,uRam0000000003d33da0);
          if ((uVar14 & 1) != 0) {
            if (*(int *)(uVar15 + 0x10) <= uStack_120._4_4_) {
              if (*(long *)(uVar15 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar15 + 0x28),(int)(short)uStack_120,&uStack_138,0);
              if (lVar11 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (0 < (int)uVar2) {
                uVar16 = 0;
                do {
                  if (uVar2 <= uVar16) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar8 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar16 * 8 + 0x20);
                  if (lVar8 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar14 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar8 + 0x18),uStack_138,0);
                  if ((uVar14 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_138,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar11,uVar16,uRam0000000003d3b130);
                    break;
                  }
                  uVar16 = uVar16 + 1;
                  uVar2 = *(uint *)(lVar11 + 0x18);
                } while ((int)uVar16 < (int)uVar2);
              }
            }
            goto code_r0x0152ad1c;
          }
          uVar15 = (ulong)uStack_154;
          bVar5 = uStack_154 != 0xffffffff;
          uStack_154 = uStack_154 + 1;
          uVar14 = (ulong)uStack_154;
          uStack_160 = CONCAT44(uStack_160._4_4_,0x1d1);
          /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_130,uRam0000000003d33d98);
          if (bVar5) goto code_r0x0152ae34;
          uVar14 = 0;
          iVar13 = 0;
          if (lVar11 != 0) goto code_r0x0152ae5c;
        }
      }
    }
  }
  do {
    func_0x00f78af4();
code_r0x0152ae34:
    if (*(int *)((long)&uStack_160 + (long)(int)(uint)uVar15 * 4) == 0x1d1) {
      uVar14 = uVar15;
      uStack_154 = (uint)uVar15;
    }
    iVar13 = (int)uVar14;
  } while (lVar11 == 0);
code_r0x0152ae5c:
  uStack_d8 = CONCAT44(*(undefined4 *)(lVar11 + 0x18),(undefined4)uStack_d8);
  uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)&uStack_d8 + 4,0);
  uVar12 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar12,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_150,lVar11,uRam0000000003d3b120);
  while( true ) {
    uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_150,uRam0000000003d32988);
    if ((uVar14 & 1) == 0) {
      *(undefined4 *)((long)&uStack_160 + (long)iVar13 * 4) = 0x23d;
      uStack_154 = uStack_154 + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_150,uRam0000000003d32980);
      if (*(int *)(lVar11 + 0x18) < 2) {
        lVar11 = lStack_190;
      }
      return lVar11;
    }
    if (lStack_140 == 0) break;
    uVar12 = /*System.String$$Concat*/ func_0x029be39c(uVar12,*(undefined8 *)(lStack_140 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
  }
  func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x152afa0);
  (*pcVar4)();
}



// ============================================================
// RVA: 0x1491a6c | Atlas.Networking.MatchMakingManager.OnHostMigrationStateReceived
// ============================================================

long Atlas_Networking_MatchMakingManager__OnHostMigrationStateReceived(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int extraout_w1;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x30), plVar2 != (long *)0x0)) {
    lVar3 = (**(code **)(*plVar2 + 0x938))(plVar2,*(undefined8 *)(*plVar2 + 0x940));
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar3 != 0)) {
      uVar4 = /*Core.Networking.NetworkSession$$NumberOfRealPlayers*/ func_0x0165ec58(lVar3,0);
      puVar7 = (undefined8 *)0x3d3b480;
      if ((bRam0000000003eb499e & 1) == 0) {
        func_0x00f78a20(0x3d32b48);
        func_0x00f78a20(0x3d32b50);
        func_0x00f78a20(0x3d32b58);
        func_0x00f78a20(0x3d3b490);
        func_0x00f78a20(0x3d3b4c0);
        func_0x00f78a20(0x3d3b480);
        func_0x00f78a20(0x3d1dc28);
        bRam0000000003eb499e = 1;
      }
      uStack_b0 = 0;
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
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkLoadout>_TypeInfo*/ uRam0000000003d1dc28);
      /*System.Collections.Generic.List<NetworkLoadout>$$.ctor*/ func_0x0240d09c(lVar3,uRam0000000003d3b480);
      puVar8 = (undefined8 *)0x3d3b480;
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_01490cc0;
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
      if (lVar5 == 0) goto LAB_01490cc0;
      uStack_1a8 = *(undefined8 *)(lVar5 + 0xe0);
      uStack_1b0 = *(undefined8 *)(lVar5 + 0xd8);
      uStack_198 = *(undefined8 *)(lVar5 + 0xf0);
      uStack_1a0 = *(undefined8 *)(lVar5 + 0xe8);
      uStack_158 = *(undefined8 *)(lVar5 + 0x130);
      uStack_160 = *(undefined8 *)(lVar5 + 0x128);
      uStack_148 = *(undefined8 *)(lVar5 + 0x140);
      uStack_150 = *(undefined8 *)(lVar5 + 0x138);
      uStack_178 = *(undefined8 *)(lVar5 + 0x110);
      uStack_180 = *(undefined8 *)(lVar5 + 0x108);
      uStack_168 = *(undefined8 *)(lVar5 + 0x120);
      uStack_170 = *(undefined8 *)(lVar5 + 0x118);
      uStack_188 = *(undefined8 *)(lVar5 + 0x100);
      uStack_190 = *(undefined8 *)(lVar5 + 0xf8);
      uStack_140 = *(undefined8 *)(lVar5 + 0x148);
      puVar8 = puVar7;
      if (lVar3 == 0) goto LAB_01490cc0;
      uStack_a0 = uStack_180;
      uStack_98 = uStack_178;
      uStack_90 = uStack_170;
      uStack_88 = uStack_168;
      uStack_80 = uStack_160;
      uStack_78 = uStack_158;
      uStack_70 = uStack_150;
      uStack_68 = uStack_148;
      /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar3,&uStack_a0,uRam0000000003d3b490);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_01490cc0;
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
      if (lVar5 == 0) goto LAB_01490cc0;
      lVar5 = *(long *)(lVar5 + 0xd0);
      if (lVar5 == 0) goto LAB_01490cc0;
      puVar8 = (undefined8 *)0x3d32b48;
      uVar4 = (ulong)(0xc - (int)uVar4);
      /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_130,lVar5,uRam0000000003d3b4c0);
      while (uVar1 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_130,uRam0000000003d32b50), (uVar1 & 1) != 0) {
        uStack_168 = uStack_d8;
        uStack_170 = uStack_e0;
        uStack_158 = uStack_c8;
        uStack_160 = uStack_d0;
        uStack_148 = uStack_b8;
        uStack_150 = uStack_c0;
        uStack_140 = uStack_b0;
        uStack_1a8 = uStack_118;
        uStack_1b0 = uStack_120;
        uStack_198 = uStack_108;
        uStack_1a0 = uStack_110;
        uStack_188 = uStack_f8;
        uStack_190 = uStack_100;
        uStack_178 = uStack_e8;
        uStack_180 = uStack_f0;
        uStack_98 = uStack_e8;
        uStack_a0 = uStack_f0;
        uStack_88 = uStack_d8;
        uStack_90 = uStack_e0;
        uStack_78 = uStack_c8;
        uStack_80 = uStack_d0;
        uStack_68 = uStack_b8;
        uStack_70 = uStack_c0;
        /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar3,&uStack_a0,uRam0000000003d3b490);
      }
      /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_130,uRam0000000003d32b48);
      do {
        uStack_1b8 = Atlas_Contexts_ContextManagerExtensions__GetNetworkAILoadout
                               (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x70),
                                *(undefined8 *)(param_1 + 0x78),uVar4,lVar3,0);
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar5 != 0)) {
          uStack_1c8 = 0;
          uStack_1bc = (undefined4)uVar4;
          uStack_1c0 = 0;
          lVar3 = /*Atlas.Networking.NetworkLobby$$SetHostConfig*/ func_0x014a9550(lVar5,&uStack_1c8,0);
          return lVar3;
        }
LAB_01490cc0:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x01490cf8;
        plVar2 = (long *)___cxa_begin_catch();
        lVar5 = *plVar2;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_130,*puVar8);
      } while (lVar5 == 0);
      func_0x00f78ac0(lVar5,0);
code_r0x01490cf8:
      lVar3 = __Unwind_Resume();
      return lVar3;
    }
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb49a1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d63688);
    func_0x00f78a20(0x3d280a8);
    bRam0000000003eb49a1 = 1;
  }
  if (((*(ushort *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar7 = *(undefined8 **)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xb8);
  lVar5 = puVar7[1];
  if (lVar5 == 0) {
    if (((*(ushort *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar7 = *(undefined8 **)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xb8);
    }
    uVar6 = *puVar7;
    lVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar5,uVar6,uRam0000000003d63688,0);
    *(long *)(*(long *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xb8) + 8) = lVar5;
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = lVar5;
    *(undefined8 *)(lVar3 + 0xb8) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  return *(long *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1491adc | Atlas.Networking.MatchMakingManager..ctor
// ============================================================

undefined1  [16] Atlas_Networking_MatchMakingManager___ctor(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb49a1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d63688);
    func_0x00f78a20(0x3d280a8);
    bRam0000000003eb49a1 = 1;
  }
  if (((*(ushort *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar1 = *(undefined8 **)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xb8);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    if (((*(ushort *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar1 = *(undefined8 **)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xb8);
    }
    uVar3 = *puVar1;
    lVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar2,uVar3,uRam0000000003d63688,0);
    *(long *)(*(long *)(/*Atlas.Networking.MatchMakingManager.<>c_TypeInfo*/ lRam0000000003d280a8 + 0xb8) + 8) = lVar2;
  }
  if (param_1 != 0) {
    *(long *)(param_1 + 0x10) = lVar2;
    *(undefined8 *)(param_1 + 0xb8) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  auVar4 = func_0x00f78af4();
  auVar4._0_8_ = *(undefined8 *)(auVar4._0_8_ + 0x18);
  return auVar4;
}



