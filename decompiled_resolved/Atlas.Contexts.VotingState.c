// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.VotingState

// ============================================================
// RVA: 0x152f6a8 | Atlas.Contexts.VotingState.add_RequestState
// ============================================================

void Atlas_Contexts_VotingState__add_RequestState(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4e93 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb4e93 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x78);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x78),plVar2,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4e94 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb4e94 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x78);
  lVar6 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar7._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  lVar3 = auVar7._8_8_;
  lVar6 = auVar7._0_8_;
  if ((bRam0000000003eb4e95 & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d550c8);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d551d0);
    bRam0000000003eb4e95 = 1;
  }
  if (lVar3 != 0) {
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550b8);
    *(undefined8 *)(lVar6 + 0x88) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551b0);
    *(undefined8 *)(lVar6 + 0x90) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551d0);
    *(undefined8 *)(lVar6 + 0xa8) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55150);
    *(undefined8 *)(lVar6 + 0x80) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55090);
    *(undefined8 *)(lVar6 + 0x98) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550c8);
    *(undefined8 *)(lVar6 + 0xa0) = uVar5;
    return;
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)(lVar6 + 0xa9) = 0;
  *(undefined8 *)(lVar6 + 0xa1) = 0;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0x78) = 0;
  return;
}



// ============================================================
// RVA: 0x152f748 | Atlas.Contexts.VotingState.remove_RequestState
// ============================================================

void Atlas_Contexts_VotingState__remove_RequestState(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4e94 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb4e94 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x78);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x78),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  lVar3 = auVar6._8_8_;
  lVar5 = auVar6._0_8_;
  if ((bRam0000000003eb4e95 & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d550c8);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d551d0);
    bRam0000000003eb4e95 = 1;
  }
  if (lVar3 != 0) {
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550b8);
    *(undefined8 *)(lVar5 + 0x88) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551b0);
    *(undefined8 *)(lVar5 + 0x90) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551d0);
    *(undefined8 *)(lVar5 + 0xa8) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55150);
    *(undefined8 *)(lVar5 + 0x80) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55090);
    *(undefined8 *)(lVar5 + 0x98) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550c8);
    *(undefined8 *)(lVar5 + 0xa0) = uVar4;
    return;
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(lVar5 + 0xa9) = 0;
  *(undefined8 *)(lVar5 + 0xa1) = 0;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  return;
}



// ============================================================
// RVA: 0x152f7e8 | Atlas.Contexts.VotingState.Init
// ============================================================

void Atlas_Contexts_VotingState__Init(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4e95 & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d550c8);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d551d0);
    bRam0000000003eb4e95 = 1;
  }
  if (param_2 != 0) {
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550b8);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551b0);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551d0);
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55150);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55090);
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550c8);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    return;
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0xa9) = 0;
  *(undefined8 *)(lVar2 + 0xa1) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  return;
}



// ============================================================
// RVA: 0x152f914 | Atlas.Contexts.VotingState.OnDeInit
// ============================================================

void Atlas_Contexts_VotingState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0xa9) = 0;
  *(undefined8 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// ============================================================
// RVA: 0x152f92c | Atlas.Contexts.VotingState.OnEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_VotingState__OnEnter(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  dword dVar3;
  char cVar4;
  ushort uVar5;
  dword **ppdVar6;
  undefined1 *puVar7;
  dword **ppdVar8;
  dword ****ppppdVar9;
  dword ****ppppdVar10;
  dword ****ppppdVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  dword *pdVar19;
  long *extraout_x1;
  dword *pdVar20;
  long *plVar21;
  dword *pdVar22;
  dword *pdVar23;
  dword **ppdVar24;
  long lVar25;
  int *piVar26;
  uint uVar27;
  dword *pdVar28;
  dword *pdVar29;
  dword **unaff_x21;
  undefined8 uVar30;
  long lVar31;
  dword *pdVar32;
  undefined8 unaff_x22;
  dword dVar33;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar34;
  dword *unaff_x25;
  code *pcVar35;
  dword *unaff_x26;
  dword *unaff_x27;
  dword *unaff_x28;
  undefined1 *puVar36;
  dword **ppdVar37;
  dword ****ppppdVar38;
  undefined *puVar39;
  dword ***pppdVar40;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  dword *apdStack_158 [7];
  dword *apdStack_110 [2];
  dword **ppdStack_100;
  dword *pdStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  dword ****ppppdStack_e0;
  undefined *puStack_d8;
  dword ****ppppdStack_d0;
  undefined *puStack_c8;
  dword ***pppdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  dword *pdStack_90;
  dword *pdStack_88;
  dword *pdStack_80;
  dword *pdStack_78;
  dword *pdStack_70;
  dword *pdStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  pdVar29 = (dword *)0x3eb4000;
  if ((bRam0000000003eb4e96 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29780);
    func_0x00f78a20(0x3d29788);
    func_0x00f78a20(0x3d29790);
    func_0x00f78a20(0x3d60148);
    func_0x00f78a20(0x3d60150);
    bRam0000000003eb4e96 = 1;
  }
  uVar34 = unaff_x24;
  if (*(long *)(param_1 + 0x90) == 0) {
code_r0x0152faac:
    lVar16 = func_0x00f78af4();
    puStack_58 = &Atlas_Contexts_VotingState__OnUpdate;
    puVar15 = (undefined8 *)0x0;
    pdStack_70 = pdVar29;
    pdStack_68 = (dword *)param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    pdVar28 = (dword *)/*Core.StateManagement.State$$OnUpdate*/ func_0x02b951d8();
    if (*(long *)(lVar16 + 0x80) != 0) {
      lVar31 = *(long *)(*(long *)(lVar16 + 0x80) + 0x20);
      if ((lVar31 != 0) && (*(char *)(lVar31 + 0x19c) == '\0')) {
        *(undefined1 *)(lVar16 + 0xb0) = 1;
      }
      return pdVar28;
    }
    auVar41 = func_0x00f78af4();
    pdStack_78 = (dword *)&Atlas_Contexts_VotingState__OnVoteCast;
    lVar31 = *(long *)(auVar41._0_8_ + 0x80);
    pdStack_90 = pdVar29;
    pdStack_88 = (dword *)lVar16;
    pdStack_80 = (dword *)&puStack_60;
    if ((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x20), lVar31 != 0)) {
      lVar18 = *(long *)(auVar41._0_8_ + 0xa8);
      /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&pdStack_b0,lVar31,0);
      pdVar29 = (dword *)0x0;
      lVar16 = auVar41._8_8_;
      if (lVar18 != 0) {
        puStack_c8 = (undefined *)pdStack_a8;
        ppppdStack_d0 = (dword ****)pdStack_b0;
        pdStack_b8 = (dword *)puStack_98;
        pppdStack_c0 = uStack_a0;
        pdVar29 = (dword *)/*Atlas.UI.VotingManager$$CastVote*/ func_0x0152a304(lVar18,auVar41._8_8_,&ppppdStack_d0);
        return pdVar29;
      }
    }
    lVar31 = func_0x00f78af4();
    puStack_d8 = &Atlas_Contexts_VotingState__VoteScreenAnimFinished;
    apdStack_110[0] = (dword *)uVar34;
    apdStack_110[1] = (dword *)unaff_x23;
    ppdStack_100 = (dword **)unaff_x22;
    pdStack_f8 = (dword *)unaff_x21;
    pdStack_f0 = pdVar29;
    pdStack_e8 = (dword *)lVar16;
    ppppdStack_e0 = (dword ****)&pdStack_80;
    if ((bRam0000000003eb4e97 & 1) == 0) {
      func_0x00f78a20(0x3d57288);
      func_0x00f78a20(0x3d572d8);
      func_0x00f78a20(0x3d405c8);
      bRam0000000003eb4e97 = 1;
    }
    if ((((*(long *)(lVar31 + 0x80) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar31 + 0x80) + 0x28), lVar16 != 0)) &&
        (lVar18 = *(long *)(lVar31 + 0xa8), lVar18 != 0)) &&
       ((*(long *)(lVar31 + 0x98) != 0 &&
        (lVar25 = *(long *)(*(long *)(lVar31 + 0x98) + 0x10), lVar25 != 0)))) {
      uVar2 = *(undefined4 *)(lVar16 + 0x84);
      uVar30 = *(undefined8 *)(lVar16 + 0x88);
      uVar34 = *(undefined8 *)(lVar18 + 0xa0);
      puVar15 = puRam0000000003d57288;
      lVar16 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar25,*(undefined8 *)(lVar18 + 0x98));
      if ((*(long *)(lVar31 + 0x98) != 0) &&
         (lVar18 = *(long *)(*(long *)(lVar31 + 0x98) + 0x10), lVar18 != 0)) {
        uVar34 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar18,uVar34,uRam0000000003d572d8);
        puVar15 = (undefined8 *)0x0;
        lVar18 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar16,uVar34);
        lVar25 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar31,uRam0000000003d405c8);
        if (((lVar25 != 0) && (*(long *)(lVar25 + 0x10) != 0)) && (lVar18 != 0)) {
          *(undefined4 *)(lVar18 + 0x18) = *(undefined4 *)(*(long *)(lVar25 + 0x10) + 0x10);
          if ((*(long *)(lVar31 + 0x80) != 0) &&
             (lVar25 = *(long *)(*(long *)(lVar31 + 0x80) + 0x28), lVar25 != 0)) {
            uStack_198 = *(undefined8 *)(lVar25 + 0xe0);
            uStack_1a0 = *(undefined8 *)(lVar25 + 0xd8);
            uStack_188 = *(undefined8 *)(lVar25 + 0xf0);
            uStack_190 = *(undefined8 *)(lVar25 + 0xe8);
            uStack_178 = *(undefined8 *)(lVar25 + 0x100);
            uStack_180 = *(undefined8 *)(lVar25 + 0xf8);
            uStack_1f8 = *(undefined8 *)(lVar25 + 0x130);
            uStack_200 = *(undefined8 *)(lVar25 + 0x128);
            uStack_1e8 = *(undefined8 *)(lVar25 + 0x140);
            uStack_1f0 = *(undefined8 *)(lVar25 + 0x138);
            uStack_218 = *(undefined8 *)(lVar25 + 0x110);
            uStack_220 = *(undefined8 *)(lVar25 + 0x108);
            uStack_208 = *(undefined8 *)(lVar25 + 0x120);
            uStack_210 = *(undefined8 *)(lVar25 + 0x118);
            apdStack_158[5] = *(dword **)(lVar25 + 0x148);
            uStack_170 = uStack_220;
            uStack_168 = uStack_218;
            uStack_160 = uStack_210;
            apdStack_158[0] = (dword *)uStack_208;
            apdStack_158[1] = (dword *)uStack_200;
            apdStack_158[2] = (dword *)uStack_1f8;
            apdStack_158[3] = (dword *)uStack_1f0;
            apdStack_158[4] = (dword *)uStack_1e8;
            Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(&uStack_1e0,&uStack_220,0);
            *(undefined8 *)(lVar18 + 0xb0) = uStack_1a8;
            *(undefined8 *)(lVar18 + 0xa8) = uStack_1b0;
            *(undefined8 *)(lVar18 + 0xa0) = uStack_1b8;
            *(undefined8 *)(lVar18 + 0x98) = uStack_1c0;
            *(undefined8 *)(lVar18 + 0x90) = uStack_1c8;
            *(undefined8 *)(lVar18 + 0x88) = uStack_1d0;
            *(undefined8 *)(lVar18 + 0x80) = uStack_1d8;
            *(undefined8 *)(lVar18 + 0x78) = uStack_1e0;
            if ((*(long *)(lVar31 + 0x80) != 0) &&
               (lVar25 = *(long *)(*(long *)(lVar31 + 0x80) + 0x28), lVar25 != 0)) {
              uVar34 = /*Atlas.Gameplay.RemoteKartLoadout$$FromNetworkLobbyPlayer*/ func_0x014e0630(*(undefined8 *)(lVar25 + 0xd0),0);
              *(undefined8 *)(lVar18 + 0xb8) = uVar34;
              uVar34 = Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(uVar30,0);
              *(undefined8 *)(lVar18 + 0xc0) = uVar34;
              *(undefined4 *)(lVar18 + 0x70) = uVar2;
              if ((lVar16 != 0) && (*(long *)(lVar31 + 0xa0) != 0)) {
                pdVar29 = (dword *)/*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar31 + 0xa0),
                                                   *(undefined8 *)(lVar16 + 0x30),lVar18,0);
                return pdVar29;
              }
            }
          }
        }
      }
    }
    lVar16 = func_0x00f78af4();
    if (*(long *)(lVar16 + 0xa8) != 0) {
      pdVar29 = (dword *)/*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194();
      if (*(char *)(lVar16 + 0xb0) == '\0') {
        return pdVar29;
      }
      if (*(long *)(lVar16 + 0x80) != 0) {
        pdVar29 = (dword *)/*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar16 + 0x80),0);
        *(undefined1 *)(lVar16 + 0xb0) = 0;
        return pdVar29;
      }
    }
    pdVar29 = (dword *)func_0x00f78af4();
    if ((bRam0000000003eb4e98 & 1) == 0) {
      func_0x00f78a20(0x3d405c0);
      bRam0000000003eb4e98 = 1;
    }
    if (pdVar29 == (dword *)0x0) {
      auVar41 = func_0x00f78af4(0,uRam0000000003d405c0);
      pdVar29 = auVar41._0_8_;
      *(undefined8 *)(pdVar29 + 4) = *puVar15;
      *(long *)(pdVar29 + 8) = auVar41._8_8_;
      *(undefined8 **)(pdVar29 + 10) = puVar15;
      return pdVar29;
    }
    return pdVar29;
  }
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x90),0,0,0);
  pdVar29 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.TransitionData_TypeInfo*/ uRam0000000003d29790);
  /*Atlas.UI.Screens.VotingScreen.TransitionData$$.ctor*/ func_0x0156eb1c(pdVar29,0);
  ppdVar24 = *(dword ***)(param_1 + 0xa8);
  if ((ppdVar24 == (dword **)0x0) || (pdVar29 == (dword *)0x0)) goto code_r0x0152faac;
  unaff_x23 = 0x3d60000;
  uVar34 = 0x3d29000;
  unaff_x22 = 0x3d1feb8;
  *(dword **)(pdVar29 + 8) = ppdVar24[3];
  *(dword ***)(pdVar29 + 10) = ppdVar24;
  ppdVar24 = (dword **)func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.OnVoteAnimationFinished_TypeInfo*/ uRam0000000003d29780);
  /*Atlas.UI.Screens.VotingScreen.OnVoteAnimationFinished$$.ctor*/ func_0x0156e594(ppdVar24,param_1,uRam0000000003d60150,0);
  *(dword ***)(pdVar29 + 6) = ppdVar24;
  unaff_x21 = (dword **)func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.OnVoteSelected_TypeInfo*/ uRam0000000003d29788);
  /*Atlas.UI.Screens.VotingScreen.OnVoteSelected$$.ctor*/ func_0x0156e80c(unaff_x21,param_1,uRam0000000003d60148,0);
  *(dword ***)(pdVar29 + 4) = unaff_x21;
  pdVar28 = *(dword **)(param_1 + 0x88);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_1 = 0;
  if (pdVar28 == (dword *)0x0) goto code_r0x0152faac;
  pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x68);
  pdVar23 = (dword *)0x0;
  uVar34 = 0;
  pdVar32 = (dword *)0x0;
  pdVar22 = pdVar29;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  ppdVar24 = *(dword ***)(pdVar28 + 4);
  puStack_60 = &stack0xfffffffffffffff0;
  if (ppdVar24 != (dword **)0x0) {
    pdVar23 = (dword *)0x0;
    uVar34 = 0;
    puStack_58 = &UNK_01470820;
    pdVar20 = pdVar19;
    pdVar22 = pdVar29;
code_r0x02f87f38:
    pdStack_88 = (dword *)0x3eb4000;
    pdStack_80 = (dword *)0x0;
    pdStack_78 = pdVar29;
    pdStack_70 = pdVar28;
    pdStack_68 = pdVar19;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    pdStack_e8 = (dword *)&UNK_02f87f9c;
    apdStack_110[0] = pdVar22;
    apdStack_110[1] = (dword *)uVar34;
    ppdStack_100 = ppdVar24;
    pdStack_f8 = pdVar23;
    pdStack_f0 = (dword *)&puStack_60;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    pdVar29 = ppdVar24[0xf];
    if (pdVar29 != (dword *)0x0) {
      dVar3 = pdVar29[6];
      if ((int)dVar3 < 1) {
        return (dword *)0x0;
      }
      dVar33 = 1;
      pdVar28 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (pdVar29[6] <= dVar33 - 1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(*(long *)(pdVar29 + 4) + (long)(int)(dVar33 - 1) * 0x20 + 0x20);
        if (lVar16 == 0) break;
        uVar17 = /*System.String$$Equals*/ func_0x029caa48(lVar16,pdVar20,5,0);
        if ((uVar17 & 1) != 0) {
          return pdVar28;
        }
        pdVar28 = (dword *)(ulong)((int)dVar33 < (int)dVar3);
        if (dVar3 == dVar33) {
          return pdVar28;
        }
        pdVar29 = ppdVar24[0xf];
        dVar33 = dVar33 + 1;
      } while (pdVar29 != (dword *)0x0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar41 = func_0x00f78af4();
  pdVar20 = auVar41._8_8_;
  pdStack_70 = (dword *)&puStack_60;
  puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
  ppdVar24 = *(dword ***)(auVar41._0_8_ + 0x10);
  if (ppdVar24 != (dword **)0x0) {
    puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
    goto code_r0x02f87f38;
  }
  auVar41 = func_0x00f78af4();
  uVar34 = auVar41._8_8_;
  ppdVar24 = &pdStack_70;
  pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
  lVar16 = *(long *)(auVar41._0_8_ + 0x10);
  if (lVar16 != 0) {
    pdVar23 = (dword *)0x0;
    pdStack_90 = (dword *)0x0;
    pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
    pdStack_88 = pdVar29;
    pdStack_80 = pdVar28;
    pdStack_78 = pdVar19;
    pdStack_70 = (dword *)&puStack_60;
    if ((bRam0000000003ebc64b & 1) == 0) {
      pdStack_70 = (dword *)&puStack_60;
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar31 = *(long *)(lVar16 + 0x70);
    if (lVar31 != 0) {
      lVar18 = lVar31;
      if (*(uint *)(lVar31 + 0x18) <= auVar41._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar18 = *(long *)(lVar16 + 0x70);
      }
      if (lVar18 != 0) {
        lVar31 = *(long *)(lVar31 + 0x10) + (long)(int)auVar41._8_4_ * 0x28;
        puStack_c8 = *(undefined **)(lVar31 + 0x28);
        ppppdStack_d0 = *(dword *****)(lVar31 + 0x20);
        puStack_d8 = (undefined *)CONCAT26(puStack_d8._6_2_,*(undefined6 *)(lVar31 + 0x42));
        pdStack_b0 = (dword *)0x0;
        pdStack_a8 = (dword *)0x0;
        uStack_a0 = (dword ***)
                    CONCAT26(*(undefined2 *)(lVar31 + 0x46),
                             CONCAT42(*(undefined4 *)(lVar31 + 0x42),1));
        pppdStack_c0 = (dword ***)ppppdStack_d0;
        pdStack_b8 = (dword *)puStack_c8;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar18,uVar34,&pppdStack_c0,uRam0000000003d3ddd0);
        pdVar29 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,uVar34);
        return pdVar29;
      }
    }
    auVar41 = func_0x00f78af4();
    pdVar20 = auVar41._8_8_;
    puVar7 = (undefined1 *)apdStack_110;
    apdStack_110[0] = (dword *)0x0;
    pdStack_e8 = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
    puVar36 = (undefined1 *)&pdStack_f0;
    apdStack_110[1] = (dword *)lVar31;
    ppdStack_100 = (dword **)lVar16;
    pdStack_f8 = (dword *)uVar34;
    pdStack_f0 = (dword *)&pdStack_70;
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar16 = *(long *)(auVar41._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar41._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar41._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar29 = (dword *)0x0;
      }
      else {
        pdVar29 = *(dword **)(lVar16 + 0x40);
      }
      return pdVar29;
    }
    puVar39 = &Core_UI2_UIScreen__ForceExit;
    pdVar19 = (dword *)func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar29 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar41 = func_0x00f78af4();
  pdVar20 = auVar41._8_8_;
  ppdVar37 = &pdStack_80;
  pdStack_80 = (dword *)&pdStack_70;
  pdStack_78 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayer;
  lVar16 = *(long *)(auVar41._0_8_ + 0x10);
  auVar41._8_8_ = pdVar29;
  auVar41._0_8_ = lVar16;
  if (lVar16 != 0) {
    pdVar23 = (dword *)0x0;
    ppdVar6 = &pdStack_70;
    puVar39 = &Atlas_UI_AtlasUIManager__ClearLayer;
    pdVar29 = pdVar28;
    goto code_r0x02f877a8;
  }
  auVar41 = func_0x00f78af4();
  pdStack_90 = (dword *)&pdStack_80;
  pdStack_88 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar16 = *(long *)(auVar41._0_8_ + 0x10);
  auVar41._8_8_ = auVar41._8_8_;
  auVar41._0_8_ = lVar16;
  if (lVar16 != 0) {
    ppdVar8 = &pdStack_80;
    puVar39 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
    pdVar20 = pdVar23;
    while( true ) {
      ppdVar6 = (dword **)((long)ppdVar8 + -0x30);
      *(dword **)((long)ppdVar8 + -0x30) = pdVar32;
      *(dword **)((long)ppdVar8 + -0x28) = pdVar29;
      *(dword **)((long)ppdVar8 + -0x20) = pdVar28;
      *(dword **)((long)ppdVar8 + -0x18) = pdVar19;
      *(dword ***)((long)ppdVar8 + -0x10) = ppdVar37;
      *(undefined **)((long)ppdVar8 + -8) = puVar39;
      ppdVar24 = (dword **)((long)ppdVar8 + -0x10);
      puVar39 = &UNK_02f883d8;
      pdVar23 = pdVar20;
      pdVar19 = pdVar22;
      pdVar29 = pdVar20;
      pdVar32 = auVar41._0_8_;
code_r0x02f877a8:
      pdVar28 = auVar41._0_8_;
      puVar7 = (undefined1 *)((long)ppdVar6 + -0x60);
      *(dword **)((long)ppdVar6 + -0x30) = pdVar32;
      *(long *)((long)ppdVar6 + -0x28) = auVar41._8_8_;
      *(dword **)((long)ppdVar6 + -0x20) = pdVar29;
      *(dword **)((long)ppdVar6 + -0x18) = pdVar19;
      *(dword ***)((long)ppdVar6 + -0x10) = ppdVar24;
      *(undefined **)((long)ppdVar6 + -8) = puVar39;
      puVar36 = (undefined1 *)((long)ppdVar6 + -0x10);
      pdVar29 = pdVar28;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar29 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar27 = (uint)pdVar20;
      if (((int)uVar27 < 0) || ((int)pdVar28[0x14] <= (int)uVar27)) {
        return pdVar29;
      }
      ppdVar24 = *(dword ***)(pdVar28 + 0x1c);
      if (ppdVar24 == (dword **)0x0) break;
      if (*(uint *)(ppdVar24 + 3) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      pdVar29 = ppdVar24[2];
      uVar17 = (ulong)pdVar20 & 0xffffffff;
      pdVar32 = *(dword **)(pdVar29 + uVar17 * 10 + 8);
      pdVar19 = *(dword **)(pdVar29 + uVar17 * 10 + 10);
      *(undefined4 *)((long)ppdVar6 + -0x60) = *(undefined4 *)((long)pdVar29 + uVar17 * 0x28 + 0x42)
      ;
      *(undefined2 *)((long)ppdVar6 + -0x5c) = *(undefined2 *)((long)pdVar29 + uVar17 * 0x28 + 0x46)
      ;
      if (pdVar19 == (dword *)0x0) {
        ppdVar24 = *(dword ***)(pdVar28 + 0x1c);
        if (ppdVar24 != (dword **)0x0) {
          *(dword **)((long)ppdVar6 + -0x58) = pdVar32;
          *(undefined8 *)((long)ppdVar6 + -0x50) = 0;
          *(undefined8 *)((long)ppdVar6 + -0x48) = 0;
          *(undefined8 *)((long)ppdVar6 + -0x40) = 0;
          *(undefined2 *)((long)ppdVar6 + -0x38) = 0;
          *(undefined4 *)((long)ppdVar6 + -0x36) = *(undefined4 *)((long)ppdVar6 + -0x60);
          *(undefined2 *)((long)ppdVar6 + -0x32) = *(undefined2 *)((long)ppdVar6 + -0x5c);
          pdVar29 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(ppdVar24,pdVar20,(undefined1 *)((long)ppdVar6 + -0x58),
                                             uRam0000000003d3ddd0);
          return pdVar29;
        }
        break;
      }
      puVar39 = &UNK_02f87848;
      pdVar29 = pdVar19;
code_r0x02f882d8:
      *(dword **)(puVar7 + -0x20) = pdVar28;
      *(dword **)(puVar7 + -0x18) = pdVar20;
      *(undefined1 **)(puVar7 + -0x10) = puVar36;
      *(undefined **)(puVar7 + -8) = puVar39;
      (*(code *)(*(dword ***)pdVar19)[0x43])(pdVar19,(*(dword ***)pdVar19)[0x44]);
      if (*(dword ***)(pdVar19 + 10) != (dword **)0x0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(dword ***)(pdVar19 + 10),0);
        pdVar19[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar19,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar29 = (dword *)(*(code *)(*(dword ***)pdVar19)[0x45])
                                     (pdVar19,(*(dword ***)pdVar19)[0x46]);
        return pdVar29;
      }
      func_0x00f78af4();
      ppdVar8 = (dword **)(puVar7 + -0x40);
      *(dword **)(puVar7 + -0x40) = pdVar28;
      *(dword **)(puVar7 + -0x38) = pdVar19;
      *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      ppdVar37 = (dword **)(puVar7 + -0x30);
      if (extraout_x1 != (long *)0x0) {
        lVar16 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar34 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar34,lVar16);
        pdVar29 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar29;
      }
      puVar39 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar41 = func_0x00f78af4();
      pdVar20 = pdVar23;
    }
    lVar16 = func_0x00f78af4();
    *(undefined8 *)((long)ppdVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)((long)ppdVar6 + -0x98) = unaff_d8;
    *(dword **)((long)ppdVar6 + -0x90) = pdVar32;
    *(undefined8 *)((long)ppdVar6 + -0x88) = 0;
    *(dword **)((long)ppdVar6 + -0x80) = pdVar28;
    *(dword **)((long)ppdVar6 + -0x78) = pdVar20;
    *(undefined1 **)((long)ppdVar6 + -0x70) = puVar36;
    *(undefined **)((long)ppdVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar34 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar34,0);
    if (0 < *(int *)(lVar16 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar16,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar16 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar16);
    *(undefined8 *)((long)ppdVar6 + -0x80) = *(undefined8 *)((long)ppdVar6 + -0x80);
    *(undefined8 *)((long)ppdVar6 + -0x78) = *(undefined8 *)((long)ppdVar6 + -0x78);
    *(undefined8 *)((long)ppdVar6 + -0x70) = *(undefined8 *)((long)ppdVar6 + -0x70);
    *(undefined8 *)((long)ppdVar6 + -0x68) = *(undefined8 *)((long)ppdVar6 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar29 = (dword *)(*pcRam0000000003ec05a0)(uVar34);
    return pdVar29;
  }
  auVar41 = func_0x00f78af4();
  puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar16 = *(long *)(auVar41._0_8_ + 0x10);
  if (lVar16 == 0) {
    uStack_a0 = (dword ***)&pdStack_90;
    auVar41 = func_0x00f78af4();
    ppppdVar9 = (dword ****)&pdStack_b0;
    pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
    lVar16 = *(long *)(auVar41._0_8_ + 0x10);
    auVar42._8_8_ = auVar41._8_8_;
    auVar42._0_8_ = lVar16;
    if (lVar16 != 0) {
      pdVar22 = (dword *)0x0;
      ppppdVar9 = (dword ****)&uStack_a0;
      pppdVar40 = (dword ***)&Atlas_UI_AtlasUIManager__GetLayerState;
      pdStack_b0 = (dword *)&uStack_a0;
      goto code_r0x02f884dc;
    }
    pdStack_b0 = (dword *)&uStack_a0;
    auVar41 = func_0x00f78af4();
    ppppdVar38 = &pppdStack_c0;
    pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    lVar16 = *(long *)(auVar41._0_8_ + 0x10);
    auVar43._8_8_ = auVar41._8_8_;
    auVar43._0_8_ = lVar16;
    if (lVar16 == 0) {
      pppdStack_c0 = (dword ***)&pdStack_b0;
      auVar41 = func_0x00f78af4();
      ppppdStack_e0 = (dword ****)&ppppdStack_d0;
      puStack_c8 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar16 = *(long *)(auVar41._0_8_ + 0x10);
      auVar44._8_8_ = auVar41._8_8_;
      auVar44._0_8_ = lVar16;
      if (lVar16 == 0) {
        ppppdStack_d0 = &pppdStack_c0;
        pdVar32 = (dword *)func_0x00f78af4();
        ppdStack_100 = (dword **)0x0;
        puStack_d8 = &Atlas_UI_AtlasUIManager___ctor;
        pdStack_f8 = pdVar29;
        pdStack_f0 = pdVar28;
        pdStack_e8 = pdVar19;
        ppppdVar9 = (dword ****)&ppppdStack_d0;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
          ppppdVar9 = ppppdStack_e0;
        }
        ppppdStack_e0 = ppppdVar9;
        uVar34 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar34,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar32 + 0xc) = uVar34;
        return pdVar32;
      }
      ppppdVar11 = &pppdStack_c0;
      pppdVar40 = (dword ***)&Atlas_UI_AtlasUIManager__SetScreenVisible;
      ppppdStack_d0 = &pppdStack_c0;
      goto code_r0x02f88674;
    }
    ppppdVar10 = (dword ****)&pdStack_b0;
    pdVar32 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    pdVar22 = pdVar23;
    pdVar23 = pdVar29;
    pppdStack_c0 = (dword ***)&pdStack_b0;
  }
  else {
    pdVar22 = (dword *)0x0;
    ppppdVar9 = &pppdStack_c0;
    pppdStack_c0 = (dword ***)0x0;
    puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
    pdStack_b8 = pdVar29;
    pdStack_b0 = pdVar28;
    pdStack_a8 = pdVar19;
    uStack_a0 = (dword ***)&pdStack_90;
    if ((bRam0000000003ebc64f & 1) == 0) {
      uStack_a0 = (dword ***)&pdStack_90;
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar27 = auVar41._8_4_;
    if (((int)uVar27 < 0) || (*(int *)(lVar16 + 0x50) <= (int)uVar27)) {
      return (dword *)0x0;
    }
    lVar16 = *(long *)(lVar16 + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(lVar16 + 0x10) + ((ulong)auVar41._8_8_ & 0xffffffff) * 0x28;
      lVar16 = *(long *)(lVar31 + 0x28);
      cVar4 = *(char *)(lVar31 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar31 + 0x30),0);
      if (iVar14 == 0 || cVar4 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    pppdVar40 = (dword ***)&Core_UI2_UIManager__GetLayerState;
    auVar42 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar19 = auVar41._8_8_;
    pdVar29 = (dword *)0x3ebc000;
code_r0x02f884dc:
    ppppdVar10 = ppppdVar9 + -6;
    ppppdVar9[-6] = (dword ***)0x0;
    ppppdVar9[-5] = (dword ***)pdVar29;
    ppppdVar9[-4] = (dword ***)pdVar28;
    ppppdVar9[-3] = (dword ***)pdVar19;
    ppppdVar9[-2] = (dword ***)&uStack_a0;
    ppppdVar9[-1] = pppdVar40;
    ppppdVar9 = ppppdVar9 + -2;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar16 = *(long *)(auVar42._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar42._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar42._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar29 = &MACH_HEADER.cputype;
      }
      else {
        pdVar29 = (dword *)(ulong)*(uint *)(lVar16 + 0x4c);
      }
      return pdVar29;
    }
    pdVar32 = (dword *)&Core_UI2_UIManager__EnableInput;
    auVar43 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar19 = auVar42._8_8_;
    pdVar23 = (dword *)0x3ebc000;
  }
  pdVar20 = auVar43._8_8_;
  pdVar29 = auVar43._0_8_;
  ppppdVar11 = ppppdVar10 + -8;
  ppppdVar10[-8] = (dword ***)unaff_x24;
  ppppdVar10[-7] = (dword ***)0x3eb4000;
  ppppdVar10[-6] = (dword ***)0x0;
  ppppdVar10[-5] = (dword ***)pdVar23;
  ppppdVar10[-4] = (dword ***)pdVar28;
  ppppdVar10[-3] = (dword ***)pdVar19;
  ppppdVar10[-2] = (dword ***)ppppdVar9;
  ppppdVar10[-1] = (dword ***)pdVar32;
  ppppdVar38 = ppppdVar10 + -2;
  pdVar32 = (dword *)0x3ebc000;
  pdVar23 = pdVar22;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(dword ***)(pdVar29 + 0x1a) != (dword **)0x0) {
    pdVar23 = (dword *)(ulong)((uint)pdVar22 ^ 1);
    pdVar28 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(dword ***)(pdVar29 + 0x1a),pdVar20,pdVar23,0);
    ppdVar24 = *(dword ***)(pdVar29 + 0x1c);
    pdVar32 = (dword *)0x0;
    if (ppdVar24 != (dword **)0x0) {
      uVar27 = auVar43._8_4_;
      if (*(uint *)(ppdVar24 + 3) <= uVar27) {
        pdVar28 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(ppdVar24[2] + (long)(int)uVar27 * 10U + 10) == 0) ||
         (pdVar32 = *(dword **)(pdVar29 + 0xc), pdVar32 == (dword *)0x0)) {
        return pdVar28;
      }
      ppdVar24 = *(dword ***)(pdVar29 + 0x1c);
      pdVar29 = (dword *)0x0;
      if (ppdVar24 != (dword **)0x0) {
        if (*(uint *)(ppdVar24 + 3) <= uVar27) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar21 = *(long **)(ppdVar24[2] + (long)(int)uVar27 * 10U + 10);
        ppppdVar10[-0xc] = (dword ***)unaff_x28;
        ppppdVar10[-0xb] = (dword ***)unaff_x27;
        ppppdVar10[-10] = (dword ***)unaff_x26;
        ppppdVar10[-9] = (dword ***)unaff_x25;
        ppppdVar10[-8] = ppppdVar10[-8];
        ppppdVar10[-7] = ppppdVar10[-7];
        ppppdVar10[-6] = ppppdVar10[-6];
        ppppdVar10[-5] = ppppdVar10[-5];
        ppppdVar10[-4] = ppppdVar10[-4];
        ppppdVar10[-3] = ppppdVar10[-3];
        ppppdVar10[-2] = ppppdVar10[-2];
        ppppdVar10[-1] = ppppdVar10[-1];
        ppppdVar10[-0xd] = (dword ***)pdVar32;
        pdVar29 = *(dword **)(pdVar32 + 0x1a);
        if (pdVar29 == (dword *)0x0) {
          ppdVar24 = (dword **)(ppppdVar10 + -0xd);
          lVar16 = 1;
        }
        else {
          lVar16 = *(long *)(pdVar29 + 6);
          if (lVar16 == 0) {
            return pdVar32;
          }
          ppdVar24 = (dword **)(pdVar29 + 8);
        }
        lVar31 = 0;
        do {
          pdVar29 = ppdVar24[lVar31];
          pcVar35 = *(code **)(pdVar29 + 4);
          plVar1 = *(long **)(pdVar29 + 8);
          lVar18 = *(long *)(pdVar29 + 10);
          if (*(short *)(lVar18 + 0x48) == -1) {
            func_0x00f78ad8(lVar18);
          }
          iVar14 = func_0x00f78a4c(lVar18);
          bVar12 = *(char *)(lVar18 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar12) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar29 = (dword *)(*pcVar35)(plVar21,pdVar20,pdVar22,lVar18);
              }
              else {
                if (((*(short *)(lVar18 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(dword **)(pdVar32 + 6) == (dword *)0x0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar18);
                iVar13 = func_0x00f78ec0(lVar18);
                if (iVar14 == 0) {
                  uVar5 = *(ushort *)(lVar18 + 0x48);
                  if (iVar13 == 0) {
                    lVar18 = *plVar1 + (ulong)uVar5 * 0x10;
                    pdVar29 = (dword *)(**(code **)(lVar18 + 0x138))
                                                 (plVar1,plVar21,pdVar20,pdVar22,
                                                  *(undefined8 *)(lVar18 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar18 = func_0x00f78a48(lVar18);
                  lVar25 = *plVar1;
                  uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar17 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == lVar18) {
                        puVar15 = (undefined8 *)
                                  (lVar25 + (long)(int)(*piVar26 + (uint)uVar5) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar26 = piVar26 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x00fac1f0(plVar1,lVar18,(ulong)uVar5);
code_r0x01e71d74:
                  pcVar35 = (code *)*puVar15;
                  puVar15 = (undefined8 *)puVar15[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar34 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar25 = *plVar1;
                    uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
                    if (uVar17 != 0) {
                      piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar18 + 0x18)) {
                          lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar18 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar26 = piVar26 + 4;
                        uVar17 = uVar17 - 1;
                      } while (uVar17 != 0);
                    }
                    lVar25 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar34 = *(undefined8 *)(lVar25 + 8);
                  }
                  puVar15 = (undefined8 *)func_0x00f78acc(uVar34,lVar18);
                  pcVar35 = (code *)*puVar15;
                }
                pdVar29 = (dword *)(*pcVar35)(plVar1,plVar21,pdVar20,pdVar22,puVar15);
              }
            }
            else {
              if ((*(short *)(lVar18 + 0x48) == -1) || (*(dword **)(pdVar32 + 6) == (dword *)0x0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar18);
              iVar13 = func_0x00f78ec0(lVar18);
              if (iVar14 == 0) {
                uVar5 = *(ushort *)(lVar18 + 0x48);
                if (iVar13 == 0) {
                  lVar18 = *plVar21 + (ulong)uVar5 * 0x10;
                  pdVar29 = (dword *)(**(code **)(lVar18 + 0x138))
                                               (plVar21,pdVar20,pdVar22,
                                                *(undefined8 *)(lVar18 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar18 = func_0x00f78a48(lVar18);
                lVar25 = *plVar21;
                uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
                if (uVar17 != 0) {
                  piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == lVar18) {
                      puVar15 = (undefined8 *)
                                (lVar25 + (long)(int)(*piVar26 + (uint)uVar5) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar26 = piVar26 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                puVar15 = (undefined8 *)func_0x00fac1f0(plVar21,lVar18,(ulong)uVar5);
code_r0x01e71d00:
                pcVar35 = (code *)*puVar15;
                puVar15 = (undefined8 *)puVar15[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar34 = *(undefined8 *)
                            (*plVar21 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar25 = *plVar21;
                  uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar17 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar18 + 0x18)) {
                        lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar18 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar26 = piVar26 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  lVar25 = func_0x00fac1f0(plVar21);
code_r0x01e71cd8:
                  uVar34 = *(undefined8 *)(lVar25 + 8);
                }
                puVar15 = (undefined8 *)func_0x00f78acc(uVar34,lVar18);
                pcVar35 = (code *)*puVar15;
              }
              pdVar29 = (dword *)(*pcVar35)(plVar21,pdVar20,pdVar22,puVar15);
            }
          }
          else {
            if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar29 = (dword *)(*pcVar35)(plVar1,plVar21,pdVar20,pdVar22,lVar18);
          }
code_r0x01e71bd0:
          lVar31 = lVar31 + 1;
          if (lVar31 == lVar16) {
            return pdVar29;
          }
        } while( true );
      }
    }
  }
  pppdVar40 = (dword ***)&Core_UI2_UIManager__SetScreenVisible;
  auVar44 = func_0x00f78af4();
  pdVar19 = pdVar22;
  pdVar28 = pdVar20;
code_r0x02f88674:
  pdVar22 = auVar44._0_8_;
  ppppdVar11[-6] = (dword ***)pdVar32;
  ppppdVar11[-5] = (dword ***)pdVar29;
  ppppdVar11[-4] = (dword ***)pdVar28;
  ppppdVar11[-3] = (dword ***)pdVar19;
  ppppdVar11[-2] = (dword ***)ppppdVar38;
  ppppdVar11[-1] = pppdVar40;
  pdVar29 = pdVar22;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar29 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar16 = *(long *)(pdVar22 + 0x1c);
  if (lVar16 != 0) {
    uVar27 = auVar44._8_4_;
    if (*(uint *)(lVar16 + 0x18) <= uVar27) {
      pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) {
      return pdVar29;
    }
    lVar16 = *(long *)(pdVar22 + 0x1c);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
      if ((lVar16 != 0) && (plVar21 = *(long **)(lVar16 + 0x28), plVar21 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar29 = (dword *)(**(code **)(*plVar21 + 0x178))
                                     (plVar21,pdVar23,*(undefined8 *)(*plVar21 + 0x180));
        return pdVar29;
      }
    }
  }
  auVar41 = func_0x00f78af4();
  uVar34 = auVar41._0_8_;
  ppppdVar11[-10] = auVar44._8_8_;
  ppppdVar11[-9] = (dword ***)pdVar23;
  ppppdVar11[-8] = (dword ***)(ppppdVar11 + -2);
  ppppdVar11[-7] = (dword ***)&Core_UI2_UIManager__RequestScreenAssetsAndPin;
  ppppdVar11[-0xd] = (dword ***)0x0;
  ppppdVar11[-0xe] = (dword ***)0x0;
  ppppdVar11[-0xb] = (dword ***)0x0;
  ppppdVar11[-0xc] = (dword ***)0x0;
  pdVar29 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar34,auVar41._8_8_,ppppdVar11 + -0xe);
  if ((int)pdVar29 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar34,ppppdVar11[-0xc],ppppdVar11[-0xb]);
    ppppdVar11[-0x11] = ppppdVar11[-0xd];
    ppppdVar11[-0x12] = ppppdVar11[-0xe];
    ppppdVar11[-0xf] = ppppdVar11[-0xb];
    ppppdVar11[-0x10] = ppppdVar11[-0xc];
    pdVar29 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar34,ppppdVar11 + -0x12,1);
  }
  return pdVar29;
}



// ============================================================
// RVA: 0x152f930 | Atlas.Contexts.VotingState.ShowVoteScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_VotingState__ShowVoteScreen(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  dword dVar3;
  char cVar4;
  ushort uVar5;
  dword **ppdVar6;
  undefined1 *puVar7;
  dword **ppdVar8;
  dword ****ppppdVar9;
  dword ****ppppdVar10;
  dword ****ppppdVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  dword *pdVar19;
  long *extraout_x1;
  dword *pdVar20;
  long *plVar21;
  dword *pdVar22;
  dword *pdVar23;
  dword **ppdVar24;
  long lVar25;
  int *piVar26;
  uint uVar27;
  dword *pdVar28;
  dword *pdVar29;
  dword **unaff_x21;
  undefined8 uVar30;
  long lVar31;
  dword *pdVar32;
  undefined8 unaff_x22;
  dword dVar33;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar34;
  dword *unaff_x25;
  code *pcVar35;
  dword *unaff_x26;
  dword *unaff_x27;
  dword *unaff_x28;
  undefined1 *puVar36;
  dword **ppdVar37;
  dword ****ppppdVar38;
  undefined *puVar39;
  dword ***pppdVar40;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  dword *apdStack_158 [7];
  dword *apdStack_110 [2];
  dword **ppdStack_100;
  dword *pdStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  dword ****ppppdStack_e0;
  undefined *puStack_d8;
  dword ****ppppdStack_d0;
  undefined *puStack_c8;
  dword ***pppdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  dword *pdStack_90;
  dword *pdStack_88;
  dword *pdStack_80;
  dword *pdStack_78;
  dword *pdStack_70;
  dword *pdStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  pdVar29 = (dword *)0x3eb4000;
  if ((bRam0000000003eb4e96 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29780);
    func_0x00f78a20(0x3d29788);
    func_0x00f78a20(0x3d29790);
    func_0x00f78a20(0x3d60148);
    func_0x00f78a20(0x3d60150);
    bRam0000000003eb4e96 = 1;
  }
  uVar34 = unaff_x24;
  if (*(long *)(param_1 + 0x90) == 0) {
LAB_0152faac:
    lVar16 = func_0x00f78af4();
    puStack_58 = &Atlas_Contexts_VotingState__OnUpdate;
    puVar15 = (undefined8 *)0x0;
    pdStack_70 = pdVar29;
    pdStack_68 = (dword *)param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    pdVar28 = (dword *)/*Core.StateManagement.State$$OnUpdate*/ func_0x02b951d8();
    if (*(long *)(lVar16 + 0x80) != 0) {
      lVar31 = *(long *)(*(long *)(lVar16 + 0x80) + 0x20);
      if ((lVar31 != 0) && (*(char *)(lVar31 + 0x19c) == '\0')) {
        *(undefined1 *)(lVar16 + 0xb0) = 1;
      }
      return pdVar28;
    }
    auVar41 = func_0x00f78af4();
    pdStack_78 = (dword *)&Atlas_Contexts_VotingState__OnVoteCast;
    lVar31 = *(long *)(auVar41._0_8_ + 0x80);
    pdStack_90 = pdVar29;
    pdStack_88 = (dword *)lVar16;
    pdStack_80 = (dword *)&puStack_60;
    if ((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x20), lVar31 != 0)) {
      lVar18 = *(long *)(auVar41._0_8_ + 0xa8);
      /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&pdStack_b0,lVar31,0);
      pdVar29 = (dword *)0x0;
      lVar16 = auVar41._8_8_;
      if (lVar18 != 0) {
        puStack_c8 = (undefined *)pdStack_a8;
        ppppdStack_d0 = (dword ****)pdStack_b0;
        pdStack_b8 = (dword *)puStack_98;
        pppdStack_c0 = uStack_a0;
        pdVar29 = (dword *)/*Atlas.UI.VotingManager$$CastVote*/ func_0x0152a304(lVar18,auVar41._8_8_,&ppppdStack_d0);
        return pdVar29;
      }
    }
    lVar31 = func_0x00f78af4();
    puStack_d8 = &Atlas_Contexts_VotingState__VoteScreenAnimFinished;
    apdStack_110[0] = (dword *)uVar34;
    apdStack_110[1] = (dword *)unaff_x23;
    ppdStack_100 = (dword **)unaff_x22;
    pdStack_f8 = (dword *)unaff_x21;
    pdStack_f0 = pdVar29;
    pdStack_e8 = (dword *)lVar16;
    ppppdStack_e0 = (dword ****)&pdStack_80;
    if ((bRam0000000003eb4e97 & 1) == 0) {
      func_0x00f78a20(0x3d57288);
      func_0x00f78a20(0x3d572d8);
      func_0x00f78a20(0x3d405c8);
      bRam0000000003eb4e97 = 1;
    }
    if ((((*(long *)(lVar31 + 0x80) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar31 + 0x80) + 0x28), lVar16 != 0)) &&
        (lVar18 = *(long *)(lVar31 + 0xa8), lVar18 != 0)) &&
       ((*(long *)(lVar31 + 0x98) != 0 &&
        (lVar25 = *(long *)(*(long *)(lVar31 + 0x98) + 0x10), lVar25 != 0)))) {
      uVar2 = *(undefined4 *)(lVar16 + 0x84);
      uVar30 = *(undefined8 *)(lVar16 + 0x88);
      uVar34 = *(undefined8 *)(lVar18 + 0xa0);
      puVar15 = puRam0000000003d57288;
      lVar16 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar25,*(undefined8 *)(lVar18 + 0x98));
      if ((*(long *)(lVar31 + 0x98) != 0) &&
         (lVar18 = *(long *)(*(long *)(lVar31 + 0x98) + 0x10), lVar18 != 0)) {
        uVar34 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar18,uVar34,uRam0000000003d572d8);
        puVar15 = (undefined8 *)0x0;
        lVar18 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar16,uVar34);
        lVar25 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar31,uRam0000000003d405c8);
        if (((lVar25 != 0) && (*(long *)(lVar25 + 0x10) != 0)) && (lVar18 != 0)) {
          *(undefined4 *)(lVar18 + 0x18) = *(undefined4 *)(*(long *)(lVar25 + 0x10) + 0x10);
          if ((*(long *)(lVar31 + 0x80) != 0) &&
             (lVar25 = *(long *)(*(long *)(lVar31 + 0x80) + 0x28), lVar25 != 0)) {
            uStack_198 = *(undefined8 *)(lVar25 + 0xe0);
            uStack_1a0 = *(undefined8 *)(lVar25 + 0xd8);
            uStack_188 = *(undefined8 *)(lVar25 + 0xf0);
            uStack_190 = *(undefined8 *)(lVar25 + 0xe8);
            uStack_178 = *(undefined8 *)(lVar25 + 0x100);
            uStack_180 = *(undefined8 *)(lVar25 + 0xf8);
            uStack_1f8 = *(undefined8 *)(lVar25 + 0x130);
            uStack_200 = *(undefined8 *)(lVar25 + 0x128);
            uStack_1e8 = *(undefined8 *)(lVar25 + 0x140);
            uStack_1f0 = *(undefined8 *)(lVar25 + 0x138);
            uStack_218 = *(undefined8 *)(lVar25 + 0x110);
            uStack_220 = *(undefined8 *)(lVar25 + 0x108);
            uStack_208 = *(undefined8 *)(lVar25 + 0x120);
            uStack_210 = *(undefined8 *)(lVar25 + 0x118);
            apdStack_158[5] = *(dword **)(lVar25 + 0x148);
            uStack_170 = uStack_220;
            uStack_168 = uStack_218;
            uStack_160 = uStack_210;
            apdStack_158[0] = (dword *)uStack_208;
            apdStack_158[1] = (dword *)uStack_200;
            apdStack_158[2] = (dword *)uStack_1f8;
            apdStack_158[3] = (dword *)uStack_1f0;
            apdStack_158[4] = (dword *)uStack_1e8;
            Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(&uStack_1e0,&uStack_220,0);
            *(undefined8 *)(lVar18 + 0xb0) = uStack_1a8;
            *(undefined8 *)(lVar18 + 0xa8) = uStack_1b0;
            *(undefined8 *)(lVar18 + 0xa0) = uStack_1b8;
            *(undefined8 *)(lVar18 + 0x98) = uStack_1c0;
            *(undefined8 *)(lVar18 + 0x90) = uStack_1c8;
            *(undefined8 *)(lVar18 + 0x88) = uStack_1d0;
            *(undefined8 *)(lVar18 + 0x80) = uStack_1d8;
            *(undefined8 *)(lVar18 + 0x78) = uStack_1e0;
            if ((*(long *)(lVar31 + 0x80) != 0) &&
               (lVar25 = *(long *)(*(long *)(lVar31 + 0x80) + 0x28), lVar25 != 0)) {
              uVar34 = /*Atlas.Gameplay.RemoteKartLoadout$$FromNetworkLobbyPlayer*/ func_0x014e0630(*(undefined8 *)(lVar25 + 0xd0),0);
              *(undefined8 *)(lVar18 + 0xb8) = uVar34;
              uVar34 = Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(uVar30,0);
              *(undefined8 *)(lVar18 + 0xc0) = uVar34;
              *(undefined4 *)(lVar18 + 0x70) = uVar2;
              if ((lVar16 != 0) && (*(long *)(lVar31 + 0xa0) != 0)) {
                pdVar29 = (dword *)/*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar31 + 0xa0),
                                                   *(undefined8 *)(lVar16 + 0x30),lVar18,0);
                return pdVar29;
              }
            }
          }
        }
      }
    }
    lVar16 = func_0x00f78af4();
    if (*(long *)(lVar16 + 0xa8) != 0) {
      pdVar29 = (dword *)/*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194();
      if (*(char *)(lVar16 + 0xb0) == '\0') {
        return pdVar29;
      }
      if (*(long *)(lVar16 + 0x80) != 0) {
        pdVar29 = (dword *)/*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar16 + 0x80),0);
        *(undefined1 *)(lVar16 + 0xb0) = 0;
        return pdVar29;
      }
    }
    pdVar29 = (dword *)func_0x00f78af4();
    if ((bRam0000000003eb4e98 & 1) == 0) {
      func_0x00f78a20(0x3d405c0);
      bRam0000000003eb4e98 = 1;
    }
    if (pdVar29 == (dword *)0x0) {
      auVar41 = func_0x00f78af4(0,uRam0000000003d405c0);
      pdVar29 = auVar41._0_8_;
      *(undefined8 *)(pdVar29 + 4) = *puVar15;
      *(long *)(pdVar29 + 8) = auVar41._8_8_;
      *(undefined8 **)(pdVar29 + 10) = puVar15;
      return pdVar29;
    }
    return pdVar29;
  }
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x90),0,0,0);
  pdVar29 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.TransitionData_TypeInfo*/ uRam0000000003d29790);
  /*Atlas.UI.Screens.VotingScreen.TransitionData$$.ctor*/ func_0x0156eb1c(pdVar29,0);
  ppdVar24 = *(dword ***)(param_1 + 0xa8);
  if ((ppdVar24 == (dword **)0x0) || (pdVar29 == (dword *)0x0)) goto LAB_0152faac;
  unaff_x23 = 0x3d60000;
  uVar34 = 0x3d29000;
  unaff_x22 = 0x3d1feb8;
  *(dword **)(pdVar29 + 8) = ppdVar24[3];
  *(dword ***)(pdVar29 + 10) = ppdVar24;
  ppdVar24 = (dword **)func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.OnVoteAnimationFinished_TypeInfo*/ uRam0000000003d29780);
  /*Atlas.UI.Screens.VotingScreen.OnVoteAnimationFinished$$.ctor*/ func_0x0156e594(ppdVar24,param_1,uRam0000000003d60150,0);
  *(dword ***)(pdVar29 + 6) = ppdVar24;
  unaff_x21 = (dword **)func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.OnVoteSelected_TypeInfo*/ uRam0000000003d29788);
  /*Atlas.UI.Screens.VotingScreen.OnVoteSelected$$.ctor*/ func_0x0156e80c(unaff_x21,param_1,uRam0000000003d60148,0);
  *(dword ***)(pdVar29 + 4) = unaff_x21;
  pdVar28 = *(dword **)(param_1 + 0x88);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_1 = 0;
  if (pdVar28 == (dword *)0x0) goto LAB_0152faac;
  pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x68);
  pdVar23 = (dword *)0x0;
  uVar34 = 0;
  pdVar32 = (dword *)0x0;
  pdVar22 = pdVar29;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  ppdVar24 = *(dword ***)(pdVar28 + 4);
  puStack_60 = &stack0xfffffffffffffff0;
  if (ppdVar24 != (dword **)0x0) {
    pdVar23 = (dword *)0x0;
    uVar34 = 0;
    puStack_58 = &UNK_01470820;
    pdVar20 = pdVar19;
    pdVar22 = pdVar29;
code_r0x02f87f38:
    pdStack_88 = (dword *)0x3eb4000;
    pdStack_80 = (dword *)0x0;
    pdStack_78 = pdVar29;
    pdStack_70 = pdVar28;
    pdStack_68 = pdVar19;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    pdStack_e8 = (dword *)&UNK_02f87f9c;
    apdStack_110[0] = pdVar22;
    apdStack_110[1] = (dword *)uVar34;
    ppdStack_100 = ppdVar24;
    pdStack_f8 = pdVar23;
    pdStack_f0 = (dword *)&puStack_60;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    pdVar29 = ppdVar24[0xf];
    if (pdVar29 != (dword *)0x0) {
      dVar3 = pdVar29[6];
      if ((int)dVar3 < 1) {
        return (dword *)0x0;
      }
      dVar33 = 1;
      pdVar28 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (pdVar29[6] <= dVar33 - 1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(*(long *)(pdVar29 + 4) + (long)(int)(dVar33 - 1) * 0x20 + 0x20);
        if (lVar16 == 0) break;
        uVar17 = /*System.String$$Equals*/ func_0x029caa48(lVar16,pdVar20,5,0);
        if ((uVar17 & 1) != 0) {
          return pdVar28;
        }
        pdVar28 = (dword *)(ulong)((int)dVar33 < (int)dVar3);
        if (dVar3 == dVar33) {
          return pdVar28;
        }
        pdVar29 = ppdVar24[0xf];
        dVar33 = dVar33 + 1;
      } while (pdVar29 != (dword *)0x0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar41 = func_0x00f78af4();
  pdVar20 = auVar41._8_8_;
  pdStack_70 = (dword *)&puStack_60;
  puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
  ppdVar24 = *(dword ***)(auVar41._0_8_ + 0x10);
  if (ppdVar24 != (dword **)0x0) {
    puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
    goto code_r0x02f87f38;
  }
  auVar41 = func_0x00f78af4();
  uVar34 = auVar41._8_8_;
  ppdVar24 = &pdStack_70;
  pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
  lVar16 = *(long *)(auVar41._0_8_ + 0x10);
  if (lVar16 != 0) {
    pdVar23 = (dword *)0x0;
    pdStack_90 = (dword *)0x0;
    pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
    pdStack_88 = pdVar29;
    pdStack_80 = pdVar28;
    pdStack_78 = pdVar19;
    pdStack_70 = (dword *)&puStack_60;
    if ((bRam0000000003ebc64b & 1) == 0) {
      pdStack_70 = (dword *)&puStack_60;
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar31 = *(long *)(lVar16 + 0x70);
    if (lVar31 != 0) {
      lVar18 = lVar31;
      if (*(uint *)(lVar31 + 0x18) <= auVar41._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar18 = *(long *)(lVar16 + 0x70);
      }
      if (lVar18 != 0) {
        lVar31 = *(long *)(lVar31 + 0x10) + (long)(int)auVar41._8_4_ * 0x28;
        puStack_c8 = *(undefined **)(lVar31 + 0x28);
        ppppdStack_d0 = *(dword *****)(lVar31 + 0x20);
        puStack_d8 = (undefined *)CONCAT26(puStack_d8._6_2_,*(undefined6 *)(lVar31 + 0x42));
        pdStack_b0 = (dword *)0x0;
        pdStack_a8 = (dword *)0x0;
        uStack_a0 = (dword ***)
                    CONCAT26(*(undefined2 *)(lVar31 + 0x46),
                             CONCAT42(*(undefined4 *)(lVar31 + 0x42),1));
        pppdStack_c0 = (dword ***)ppppdStack_d0;
        pdStack_b8 = (dword *)puStack_c8;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar18,uVar34,&pppdStack_c0,uRam0000000003d3ddd0);
        pdVar29 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,uVar34);
        return pdVar29;
      }
    }
    auVar41 = func_0x00f78af4();
    pdVar20 = auVar41._8_8_;
    puVar7 = (undefined1 *)apdStack_110;
    apdStack_110[0] = (dword *)0x0;
    pdStack_e8 = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
    puVar36 = (undefined1 *)&pdStack_f0;
    apdStack_110[1] = (dword *)lVar31;
    ppdStack_100 = (dword **)lVar16;
    pdStack_f8 = (dword *)uVar34;
    pdStack_f0 = (dword *)&pdStack_70;
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar16 = *(long *)(auVar41._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar41._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar41._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar29 = (dword *)0x0;
      }
      else {
        pdVar29 = *(dword **)(lVar16 + 0x40);
      }
      return pdVar29;
    }
    puVar39 = &Core_UI2_UIScreen__ForceExit;
    pdVar19 = (dword *)func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar29 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar41 = func_0x00f78af4();
  pdVar20 = auVar41._8_8_;
  ppdVar37 = &pdStack_80;
  pdStack_80 = (dword *)&pdStack_70;
  pdStack_78 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayer;
  lVar16 = *(long *)(auVar41._0_8_ + 0x10);
  auVar41._8_8_ = pdVar29;
  auVar41._0_8_ = lVar16;
  if (lVar16 != 0) {
    pdVar23 = (dword *)0x0;
    ppdVar6 = &pdStack_70;
    puVar39 = &Atlas_UI_AtlasUIManager__ClearLayer;
    pdVar29 = pdVar28;
    goto code_r0x02f877a8;
  }
  auVar41 = func_0x00f78af4();
  pdStack_90 = (dword *)&pdStack_80;
  pdStack_88 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar16 = *(long *)(auVar41._0_8_ + 0x10);
  auVar41._8_8_ = auVar41._8_8_;
  auVar41._0_8_ = lVar16;
  if (lVar16 != 0) {
    ppdVar8 = &pdStack_80;
    puVar39 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
    pdVar20 = pdVar23;
    while( true ) {
      ppdVar6 = (dword **)((long)ppdVar8 + -0x30);
      *(dword **)((long)ppdVar8 + -0x30) = pdVar32;
      *(dword **)((long)ppdVar8 + -0x28) = pdVar29;
      *(dword **)((long)ppdVar8 + -0x20) = pdVar28;
      *(dword **)((long)ppdVar8 + -0x18) = pdVar19;
      *(dword ***)((long)ppdVar8 + -0x10) = ppdVar37;
      *(undefined **)((long)ppdVar8 + -8) = puVar39;
      ppdVar24 = (dword **)((long)ppdVar8 + -0x10);
      puVar39 = &UNK_02f883d8;
      pdVar23 = pdVar20;
      pdVar19 = pdVar22;
      pdVar29 = pdVar20;
      pdVar32 = auVar41._0_8_;
code_r0x02f877a8:
      pdVar28 = auVar41._0_8_;
      puVar7 = (undefined1 *)((long)ppdVar6 + -0x60);
      *(dword **)((long)ppdVar6 + -0x30) = pdVar32;
      *(long *)((long)ppdVar6 + -0x28) = auVar41._8_8_;
      *(dword **)((long)ppdVar6 + -0x20) = pdVar29;
      *(dword **)((long)ppdVar6 + -0x18) = pdVar19;
      *(dword ***)((long)ppdVar6 + -0x10) = ppdVar24;
      *(undefined **)((long)ppdVar6 + -8) = puVar39;
      puVar36 = (undefined1 *)((long)ppdVar6 + -0x10);
      pdVar29 = pdVar28;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar29 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar27 = (uint)pdVar20;
      if (((int)uVar27 < 0) || ((int)pdVar28[0x14] <= (int)uVar27)) {
        return pdVar29;
      }
      ppdVar24 = *(dword ***)(pdVar28 + 0x1c);
      if (ppdVar24 == (dword **)0x0) break;
      if (*(uint *)(ppdVar24 + 3) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      pdVar29 = ppdVar24[2];
      uVar17 = (ulong)pdVar20 & 0xffffffff;
      pdVar32 = *(dword **)(pdVar29 + uVar17 * 10 + 8);
      pdVar19 = *(dword **)(pdVar29 + uVar17 * 10 + 10);
      *(undefined4 *)((long)ppdVar6 + -0x60) = *(undefined4 *)((long)pdVar29 + uVar17 * 0x28 + 0x42)
      ;
      *(undefined2 *)((long)ppdVar6 + -0x5c) = *(undefined2 *)((long)pdVar29 + uVar17 * 0x28 + 0x46)
      ;
      if (pdVar19 == (dword *)0x0) {
        ppdVar24 = *(dword ***)(pdVar28 + 0x1c);
        if (ppdVar24 != (dword **)0x0) {
          *(dword **)((long)ppdVar6 + -0x58) = pdVar32;
          *(undefined8 *)((long)ppdVar6 + -0x50) = 0;
          *(undefined8 *)((long)ppdVar6 + -0x48) = 0;
          *(undefined8 *)((long)ppdVar6 + -0x40) = 0;
          *(undefined2 *)((long)ppdVar6 + -0x38) = 0;
          *(undefined4 *)((long)ppdVar6 + -0x36) = *(undefined4 *)((long)ppdVar6 + -0x60);
          *(undefined2 *)((long)ppdVar6 + -0x32) = *(undefined2 *)((long)ppdVar6 + -0x5c);
          pdVar29 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(ppdVar24,pdVar20,(undefined1 *)((long)ppdVar6 + -0x58),
                                             uRam0000000003d3ddd0);
          return pdVar29;
        }
        break;
      }
      puVar39 = &UNK_02f87848;
      pdVar29 = pdVar19;
code_r0x02f882d8:
      *(dword **)(puVar7 + -0x20) = pdVar28;
      *(dword **)(puVar7 + -0x18) = pdVar20;
      *(undefined1 **)(puVar7 + -0x10) = puVar36;
      *(undefined **)(puVar7 + -8) = puVar39;
      (*(code *)(*(dword ***)pdVar19)[0x43])(pdVar19,(*(dword ***)pdVar19)[0x44]);
      if (*(dword ***)(pdVar19 + 10) != (dword **)0x0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(dword ***)(pdVar19 + 10),0);
        pdVar19[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar19,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar29 = (dword *)(*(code *)(*(dword ***)pdVar19)[0x45])
                                     (pdVar19,(*(dword ***)pdVar19)[0x46]);
        return pdVar29;
      }
      func_0x00f78af4();
      ppdVar8 = (dword **)(puVar7 + -0x40);
      *(dword **)(puVar7 + -0x40) = pdVar28;
      *(dword **)(puVar7 + -0x38) = pdVar19;
      *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      ppdVar37 = (dword **)(puVar7 + -0x30);
      if (extraout_x1 != (long *)0x0) {
        lVar16 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar34 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar34,lVar16);
        pdVar29 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar29;
      }
      puVar39 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar41 = func_0x00f78af4();
      pdVar20 = pdVar23;
    }
    lVar16 = func_0x00f78af4();
    *(undefined8 *)((long)ppdVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)((long)ppdVar6 + -0x98) = unaff_d8;
    *(dword **)((long)ppdVar6 + -0x90) = pdVar32;
    *(undefined8 *)((long)ppdVar6 + -0x88) = 0;
    *(dword **)((long)ppdVar6 + -0x80) = pdVar28;
    *(dword **)((long)ppdVar6 + -0x78) = pdVar20;
    *(undefined1 **)((long)ppdVar6 + -0x70) = puVar36;
    *(undefined **)((long)ppdVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar34 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar34,0);
    if (0 < *(int *)(lVar16 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar16,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar16 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar16);
    *(undefined8 *)((long)ppdVar6 + -0x80) = *(undefined8 *)((long)ppdVar6 + -0x80);
    *(undefined8 *)((long)ppdVar6 + -0x78) = *(undefined8 *)((long)ppdVar6 + -0x78);
    *(undefined8 *)((long)ppdVar6 + -0x70) = *(undefined8 *)((long)ppdVar6 + -0x70);
    *(undefined8 *)((long)ppdVar6 + -0x68) = *(undefined8 *)((long)ppdVar6 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar29 = (dword *)(*pcRam0000000003ec05a0)(uVar34);
    return pdVar29;
  }
  auVar41 = func_0x00f78af4();
  puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar16 = *(long *)(auVar41._0_8_ + 0x10);
  if (lVar16 == 0) {
    uStack_a0 = (dword ***)&pdStack_90;
    auVar41 = func_0x00f78af4();
    ppppdVar9 = (dword ****)&pdStack_b0;
    pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
    lVar16 = *(long *)(auVar41._0_8_ + 0x10);
    auVar42._8_8_ = auVar41._8_8_;
    auVar42._0_8_ = lVar16;
    if (lVar16 != 0) {
      pdVar22 = (dword *)0x0;
      ppppdVar9 = (dword ****)&uStack_a0;
      pppdVar40 = (dword ***)&Atlas_UI_AtlasUIManager__GetLayerState;
      pdStack_b0 = (dword *)&uStack_a0;
      goto code_r0x02f884dc;
    }
    pdStack_b0 = (dword *)&uStack_a0;
    auVar41 = func_0x00f78af4();
    ppppdVar38 = &pppdStack_c0;
    pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    lVar16 = *(long *)(auVar41._0_8_ + 0x10);
    auVar43._8_8_ = auVar41._8_8_;
    auVar43._0_8_ = lVar16;
    if (lVar16 == 0) {
      pppdStack_c0 = (dword ***)&pdStack_b0;
      auVar41 = func_0x00f78af4();
      ppppdStack_e0 = (dword ****)&ppppdStack_d0;
      puStack_c8 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar16 = *(long *)(auVar41._0_8_ + 0x10);
      auVar44._8_8_ = auVar41._8_8_;
      auVar44._0_8_ = lVar16;
      if (lVar16 == 0) {
        ppppdStack_d0 = &pppdStack_c0;
        pdVar32 = (dword *)func_0x00f78af4();
        ppdStack_100 = (dword **)0x0;
        puStack_d8 = &Atlas_UI_AtlasUIManager___ctor;
        pdStack_f8 = pdVar29;
        pdStack_f0 = pdVar28;
        pdStack_e8 = pdVar19;
        ppppdVar9 = (dword ****)&ppppdStack_d0;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
          ppppdVar9 = ppppdStack_e0;
        }
        ppppdStack_e0 = ppppdVar9;
        uVar34 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar34,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar32 + 0xc) = uVar34;
        return pdVar32;
      }
      ppppdVar11 = &pppdStack_c0;
      pppdVar40 = (dword ***)&Atlas_UI_AtlasUIManager__SetScreenVisible;
      ppppdStack_d0 = &pppdStack_c0;
      goto code_r0x02f88674;
    }
    ppppdVar10 = (dword ****)&pdStack_b0;
    pdVar32 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    pdVar22 = pdVar23;
    pdVar23 = pdVar29;
    pppdStack_c0 = (dword ***)&pdStack_b0;
  }
  else {
    pdVar22 = (dword *)0x0;
    ppppdVar9 = &pppdStack_c0;
    pppdStack_c0 = (dword ***)0x0;
    puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
    pdStack_b8 = pdVar29;
    pdStack_b0 = pdVar28;
    pdStack_a8 = pdVar19;
    uStack_a0 = (dword ***)&pdStack_90;
    if ((bRam0000000003ebc64f & 1) == 0) {
      uStack_a0 = (dword ***)&pdStack_90;
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar27 = auVar41._8_4_;
    if (((int)uVar27 < 0) || (*(int *)(lVar16 + 0x50) <= (int)uVar27)) {
      return (dword *)0x0;
    }
    lVar16 = *(long *)(lVar16 + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(lVar16 + 0x10) + ((ulong)auVar41._8_8_ & 0xffffffff) * 0x28;
      lVar16 = *(long *)(lVar31 + 0x28);
      cVar4 = *(char *)(lVar31 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar31 + 0x30),0);
      if (iVar14 == 0 || cVar4 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    pppdVar40 = (dword ***)&Core_UI2_UIManager__GetLayerState;
    auVar42 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar19 = auVar41._8_8_;
    pdVar29 = (dword *)0x3ebc000;
code_r0x02f884dc:
    ppppdVar10 = ppppdVar9 + -6;
    ppppdVar9[-6] = (dword ***)0x0;
    ppppdVar9[-5] = (dword ***)pdVar29;
    ppppdVar9[-4] = (dword ***)pdVar28;
    ppppdVar9[-3] = (dword ***)pdVar19;
    ppppdVar9[-2] = (dword ***)&uStack_a0;
    ppppdVar9[-1] = pppdVar40;
    ppppdVar9 = ppppdVar9 + -2;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar16 = *(long *)(auVar42._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar42._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar42._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar29 = &MACH_HEADER.cputype;
      }
      else {
        pdVar29 = (dword *)(ulong)*(uint *)(lVar16 + 0x4c);
      }
      return pdVar29;
    }
    pdVar32 = (dword *)&Core_UI2_UIManager__EnableInput;
    auVar43 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar19 = auVar42._8_8_;
    pdVar23 = (dword *)0x3ebc000;
  }
  pdVar20 = auVar43._8_8_;
  pdVar29 = auVar43._0_8_;
  ppppdVar11 = ppppdVar10 + -8;
  ppppdVar10[-8] = (dword ***)unaff_x24;
  ppppdVar10[-7] = (dword ***)0x3eb4000;
  ppppdVar10[-6] = (dword ***)0x0;
  ppppdVar10[-5] = (dword ***)pdVar23;
  ppppdVar10[-4] = (dword ***)pdVar28;
  ppppdVar10[-3] = (dword ***)pdVar19;
  ppppdVar10[-2] = (dword ***)ppppdVar9;
  ppppdVar10[-1] = (dword ***)pdVar32;
  ppppdVar38 = ppppdVar10 + -2;
  pdVar32 = (dword *)0x3ebc000;
  pdVar23 = pdVar22;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(dword ***)(pdVar29 + 0x1a) != (dword **)0x0) {
    pdVar23 = (dword *)(ulong)((uint)pdVar22 ^ 1);
    pdVar28 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(dword ***)(pdVar29 + 0x1a),pdVar20,pdVar23,0);
    ppdVar24 = *(dword ***)(pdVar29 + 0x1c);
    pdVar32 = (dword *)0x0;
    if (ppdVar24 != (dword **)0x0) {
      uVar27 = auVar43._8_4_;
      if (*(uint *)(ppdVar24 + 3) <= uVar27) {
        pdVar28 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(ppdVar24[2] + (long)(int)uVar27 * 10U + 10) == 0) ||
         (pdVar32 = *(dword **)(pdVar29 + 0xc), pdVar32 == (dword *)0x0)) {
        return pdVar28;
      }
      ppdVar24 = *(dword ***)(pdVar29 + 0x1c);
      pdVar29 = (dword *)0x0;
      if (ppdVar24 != (dword **)0x0) {
        if (*(uint *)(ppdVar24 + 3) <= uVar27) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar21 = *(long **)(ppdVar24[2] + (long)(int)uVar27 * 10U + 10);
        ppppdVar10[-0xc] = (dword ***)unaff_x28;
        ppppdVar10[-0xb] = (dword ***)unaff_x27;
        ppppdVar10[-10] = (dword ***)unaff_x26;
        ppppdVar10[-9] = (dword ***)unaff_x25;
        ppppdVar10[-8] = ppppdVar10[-8];
        ppppdVar10[-7] = ppppdVar10[-7];
        ppppdVar10[-6] = ppppdVar10[-6];
        ppppdVar10[-5] = ppppdVar10[-5];
        ppppdVar10[-4] = ppppdVar10[-4];
        ppppdVar10[-3] = ppppdVar10[-3];
        ppppdVar10[-2] = ppppdVar10[-2];
        ppppdVar10[-1] = ppppdVar10[-1];
        ppppdVar10[-0xd] = (dword ***)pdVar32;
        pdVar29 = *(dword **)(pdVar32 + 0x1a);
        if (pdVar29 == (dword *)0x0) {
          ppdVar24 = (dword **)(ppppdVar10 + -0xd);
          lVar16 = 1;
        }
        else {
          lVar16 = *(long *)(pdVar29 + 6);
          if (lVar16 == 0) {
            return pdVar32;
          }
          ppdVar24 = (dword **)(pdVar29 + 8);
        }
        lVar31 = 0;
        do {
          pdVar29 = ppdVar24[lVar31];
          pcVar35 = *(code **)(pdVar29 + 4);
          plVar1 = *(long **)(pdVar29 + 8);
          lVar18 = *(long *)(pdVar29 + 10);
          if (*(short *)(lVar18 + 0x48) == -1) {
            func_0x00f78ad8(lVar18);
          }
          iVar14 = func_0x00f78a4c(lVar18);
          bVar12 = *(char *)(lVar18 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar12) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar29 = (dword *)(*pcVar35)(plVar21,pdVar20,pdVar22,lVar18);
              }
              else {
                if (((*(short *)(lVar18 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(dword **)(pdVar32 + 6) == (dword *)0x0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar18);
                iVar13 = func_0x00f78ec0(lVar18);
                if (iVar14 == 0) {
                  uVar5 = *(ushort *)(lVar18 + 0x48);
                  if (iVar13 == 0) {
                    lVar18 = *plVar1 + (ulong)uVar5 * 0x10;
                    pdVar29 = (dword *)(**(code **)(lVar18 + 0x138))
                                                 (plVar1,plVar21,pdVar20,pdVar22,
                                                  *(undefined8 *)(lVar18 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar18 = func_0x00f78a48(lVar18);
                  lVar25 = *plVar1;
                  uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar17 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == lVar18) {
                        puVar15 = (undefined8 *)
                                  (lVar25 + (long)(int)(*piVar26 + (uint)uVar5) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar26 = piVar26 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x00fac1f0(plVar1,lVar18,(ulong)uVar5);
code_r0x01e71d74:
                  pcVar35 = (code *)*puVar15;
                  puVar15 = (undefined8 *)puVar15[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar34 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar25 = *plVar1;
                    uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
                    if (uVar17 != 0) {
                      piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar18 + 0x18)) {
                          lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar18 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar26 = piVar26 + 4;
                        uVar17 = uVar17 - 1;
                      } while (uVar17 != 0);
                    }
                    lVar25 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar34 = *(undefined8 *)(lVar25 + 8);
                  }
                  puVar15 = (undefined8 *)func_0x00f78acc(uVar34,lVar18);
                  pcVar35 = (code *)*puVar15;
                }
                pdVar29 = (dword *)(*pcVar35)(plVar1,plVar21,pdVar20,pdVar22,puVar15);
              }
            }
            else {
              if ((*(short *)(lVar18 + 0x48) == -1) || (*(dword **)(pdVar32 + 6) == (dword *)0x0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar18);
              iVar13 = func_0x00f78ec0(lVar18);
              if (iVar14 == 0) {
                uVar5 = *(ushort *)(lVar18 + 0x48);
                if (iVar13 == 0) {
                  lVar18 = *plVar21 + (ulong)uVar5 * 0x10;
                  pdVar29 = (dword *)(**(code **)(lVar18 + 0x138))
                                               (plVar21,pdVar20,pdVar22,
                                                *(undefined8 *)(lVar18 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar18 = func_0x00f78a48(lVar18);
                lVar25 = *plVar21;
                uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
                if (uVar17 != 0) {
                  piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == lVar18) {
                      puVar15 = (undefined8 *)
                                (lVar25 + (long)(int)(*piVar26 + (uint)uVar5) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar26 = piVar26 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                puVar15 = (undefined8 *)func_0x00fac1f0(plVar21,lVar18,(ulong)uVar5);
code_r0x01e71d00:
                pcVar35 = (code *)*puVar15;
                puVar15 = (undefined8 *)puVar15[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar34 = *(undefined8 *)
                            (*plVar21 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar25 = *plVar21;
                  uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar17 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar18 + 0x18)) {
                        lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar18 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar26 = piVar26 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  lVar25 = func_0x00fac1f0(plVar21);
code_r0x01e71cd8:
                  uVar34 = *(undefined8 *)(lVar25 + 8);
                }
                puVar15 = (undefined8 *)func_0x00f78acc(uVar34,lVar18);
                pcVar35 = (code *)*puVar15;
              }
              pdVar29 = (dword *)(*pcVar35)(plVar21,pdVar20,pdVar22,puVar15);
            }
          }
          else {
            if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar29 = (dword *)(*pcVar35)(plVar1,plVar21,pdVar20,pdVar22,lVar18);
          }
code_r0x01e71bd0:
          lVar31 = lVar31 + 1;
          if (lVar31 == lVar16) {
            return pdVar29;
          }
        } while( true );
      }
    }
  }
  pppdVar40 = (dword ***)&Core_UI2_UIManager__SetScreenVisible;
  auVar44 = func_0x00f78af4();
  pdVar19 = pdVar22;
  pdVar28 = pdVar20;
code_r0x02f88674:
  pdVar22 = auVar44._0_8_;
  ppppdVar11[-6] = (dword ***)pdVar32;
  ppppdVar11[-5] = (dword ***)pdVar29;
  ppppdVar11[-4] = (dword ***)pdVar28;
  ppppdVar11[-3] = (dword ***)pdVar19;
  ppppdVar11[-2] = (dword ***)ppppdVar38;
  ppppdVar11[-1] = pppdVar40;
  pdVar29 = pdVar22;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar29 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar16 = *(long *)(pdVar22 + 0x1c);
  if (lVar16 != 0) {
    uVar27 = auVar44._8_4_;
    if (*(uint *)(lVar16 + 0x18) <= uVar27) {
      pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) {
      return pdVar29;
    }
    lVar16 = *(long *)(pdVar22 + 0x1c);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
      if ((lVar16 != 0) && (plVar21 = *(long **)(lVar16 + 0x28), plVar21 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar29 = (dword *)(**(code **)(*plVar21 + 0x178))
                                     (plVar21,pdVar23,*(undefined8 *)(*plVar21 + 0x180));
        return pdVar29;
      }
    }
  }
  auVar41 = func_0x00f78af4();
  uVar34 = auVar41._0_8_;
  ppppdVar11[-10] = auVar44._8_8_;
  ppppdVar11[-9] = (dword ***)pdVar23;
  ppppdVar11[-8] = (dword ***)(ppppdVar11 + -2);
  ppppdVar11[-7] = (dword ***)&Core_UI2_UIManager__RequestScreenAssetsAndPin;
  ppppdVar11[-0xd] = (dword ***)0x0;
  ppppdVar11[-0xe] = (dword ***)0x0;
  ppppdVar11[-0xb] = (dword ***)0x0;
  ppppdVar11[-0xc] = (dword ***)0x0;
  pdVar29 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar34,auVar41._8_8_,ppppdVar11 + -0xe);
  if ((int)pdVar29 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar34,ppppdVar11[-0xc],ppppdVar11[-0xb]);
    ppppdVar11[-0x11] = ppppdVar11[-0xd];
    ppppdVar11[-0x12] = ppppdVar11[-0xe];
    ppppdVar11[-0xf] = ppppdVar11[-0xb];
    ppppdVar11[-0x10] = ppppdVar11[-0xc];
    pdVar29 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar34,ppppdVar11 + -0x12,1);
  }
  return pdVar29;
}



// ============================================================
// RVA: 0x152fab0 | Atlas.Contexts.VotingState.OnUpdate
// ============================================================

void Atlas_Contexts_VotingState__OnUpdate(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = (undefined8 *)0x0;
  /*Core.StateManagement.State$$OnUpdate*/ func_0x02b951d8();
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x19c) == '\0')) {
      *(undefined1 *)(param_1 + 0xb0) = 1;
    }
    return;
  }
  auVar9 = func_0x00f78af4();
  lVar5 = *(long *)(auVar9._0_8_ + 0x80);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
    lVar7 = *(long *)(auVar9._0_8_ + 0xa8);
    /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_60,lVar5,0);
    if (lVar7 != 0) {
      uStack_78 = uStack_58;
      uStack_80 = uStack_60;
      uStack_68 = uStack_48;
      uStack_70 = uStack_50;
      /*Atlas.UI.VotingManager$$CastVote*/ func_0x0152a304(lVar7,auVar9._8_8_,&uStack_80);
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4e97 & 1) == 0) {
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d405c8);
    bRam0000000003eb4e97 = 1;
  }
  if ((((*(long *)(lVar5 + 0x80) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar5 + 0x80) + 0x28), lVar7 != 0)) &&
      (lVar6 = *(long *)(lVar5 + 0xa8), lVar6 != 0)) &&
     ((*(long *)(lVar5 + 0x98) != 0 &&
      (lVar2 = *(long *)(*(long *)(lVar5 + 0x98) + 0x10), lVar2 != 0)))) {
    uVar1 = *(undefined4 *)(lVar7 + 0x84);
    uVar8 = *(undefined8 *)(lVar7 + 0x88);
    uVar3 = *(undefined8 *)(lVar6 + 0xa0);
    puVar4 = puRam0000000003d57288;
    lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,*(undefined8 *)(lVar6 + 0x98));
    if ((*(long *)(lVar5 + 0x98) != 0) &&
       (lVar6 = *(long *)(*(long *)(lVar5 + 0x98) + 0x10), lVar6 != 0)) {
      uVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uVar3,uRam0000000003d572d8);
      puVar4 = (undefined8 *)0x0;
      lVar6 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar7,uVar3);
      lVar2 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar5,uRam0000000003d405c8);
      if (((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) && (lVar6 != 0)) {
        *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(*(long *)(lVar2 + 0x10) + 0x10);
        if ((*(long *)(lVar5 + 0x80) != 0) &&
           (lVar2 = *(long *)(*(long *)(lVar5 + 0x80) + 0x28), lVar2 != 0)) {
          uStack_148 = *(undefined8 *)(lVar2 + 0xe0);
          uStack_150 = *(undefined8 *)(lVar2 + 0xd8);
          uStack_138 = *(undefined8 *)(lVar2 + 0xf0);
          uStack_140 = *(undefined8 *)(lVar2 + 0xe8);
          uStack_128 = *(undefined8 *)(lVar2 + 0x100);
          uStack_130 = *(undefined8 *)(lVar2 + 0xf8);
          uStack_1a8 = *(undefined8 *)(lVar2 + 0x130);
          uStack_1b0 = *(undefined8 *)(lVar2 + 0x128);
          uStack_198 = *(undefined8 *)(lVar2 + 0x140);
          uStack_1a0 = *(undefined8 *)(lVar2 + 0x138);
          uStack_1c8 = *(undefined8 *)(lVar2 + 0x110);
          uStack_1d0 = *(undefined8 *)(lVar2 + 0x108);
          uStack_1b8 = *(undefined8 *)(lVar2 + 0x120);
          uStack_1c0 = *(undefined8 *)(lVar2 + 0x118);
          uStack_e0 = *(undefined8 *)(lVar2 + 0x148);
          uStack_120 = uStack_1d0;
          uStack_118 = uStack_1c8;
          uStack_110 = uStack_1c0;
          uStack_108 = uStack_1b8;
          uStack_100 = uStack_1b0;
          uStack_f8 = uStack_1a8;
          uStack_f0 = uStack_1a0;
          uStack_e8 = uStack_198;
          Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(&uStack_190,&uStack_1d0,0);
          *(undefined8 *)(lVar6 + 0xb0) = uStack_158;
          *(undefined8 *)(lVar6 + 0xa8) = uStack_160;
          *(undefined8 *)(lVar6 + 0xa0) = uStack_168;
          *(undefined8 *)(lVar6 + 0x98) = uStack_170;
          *(undefined8 *)(lVar6 + 0x90) = uStack_178;
          *(undefined8 *)(lVar6 + 0x88) = uStack_180;
          *(undefined8 *)(lVar6 + 0x80) = uStack_188;
          *(undefined8 *)(lVar6 + 0x78) = uStack_190;
          if ((*(long *)(lVar5 + 0x80) != 0) &&
             (lVar2 = *(long *)(*(long *)(lVar5 + 0x80) + 0x28), lVar2 != 0)) {
            uVar3 = /*Atlas.Gameplay.RemoteKartLoadout$$FromNetworkLobbyPlayer*/ func_0x014e0630(*(undefined8 *)(lVar2 + 0xd0),0);
            *(undefined8 *)(lVar6 + 0xb8) = uVar3;
            uVar3 = Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(uVar8,0);
            *(undefined8 *)(lVar6 + 0xc0) = uVar3;
            *(undefined4 *)(lVar6 + 0x70) = uVar1;
            if ((lVar7 != 0) && (*(long *)(lVar5 + 0xa0) != 0)) {
              /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar5 + 0xa0),*(undefined8 *)(lVar7 + 0x30),lVar6,0);
              return;
            }
          }
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
  if (*(long *)(lVar5 + 0xa8) != 0) {
    /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194();
    if (*(char *)(lVar5 + 0xb0) != '\0') {
      if (*(long *)(lVar5 + 0x80) == 0) goto code_r0x0152fd88;
      /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar5 + 0x80),0);
      *(undefined1 *)(lVar5 + 0xb0) = 0;
    }
    return;
  }
code_r0x0152fd88:
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4e98 & 1) == 0) {
    func_0x00f78a20(0x3d405c0);
    bRam0000000003eb4e98 = 1;
  }
  if (lVar5 != 0) {
    return;
  }
  auVar9 = func_0x00f78af4(0,uRam0000000003d405c0);
  lVar5 = auVar9._0_8_;
  *(undefined8 *)(lVar5 + 0x10) = *puVar4;
  *(long *)(lVar5 + 0x20) = auVar9._8_8_;
  *(undefined8 **)(lVar5 + 0x28) = puVar4;
  return;
}



// ============================================================
// RVA: 0x152faf8 | Atlas.Contexts.VotingState.OnVoteCast
// ============================================================

void Atlas_Contexts_VotingState__OnVoteCast(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 0x20), lVar4 != 0)) {
    lVar6 = *(long *)(param_1 + 0xa8);
    /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_40,lVar4,0);
    if (lVar6 != 0) {
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      uStack_48 = uStack_28;
      uStack_50 = uStack_30;
      /*Atlas.UI.VotingManager$$CastVote*/ func_0x0152a304(lVar6,param_2,&uStack_60);
      return;
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4e97 & 1) == 0) {
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d405c8);
    bRam0000000003eb4e97 = 1;
  }
  if ((((*(long *)(lVar4 + 0x80) != 0) &&
       (lVar6 = *(long *)(*(long *)(lVar4 + 0x80) + 0x28), lVar6 != 0)) &&
      (lVar5 = *(long *)(lVar4 + 0xa8), lVar5 != 0)) &&
     ((*(long *)(lVar4 + 0x98) != 0 &&
      (lVar2 = *(long *)(*(long *)(lVar4 + 0x98) + 0x10), lVar2 != 0)))) {
    uVar1 = *(undefined4 *)(lVar6 + 0x84);
    uVar7 = *(undefined8 *)(lVar6 + 0x88);
    uVar3 = *(undefined8 *)(lVar5 + 0xa0);
    param_3 = puRam0000000003d57288;
    lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,*(undefined8 *)(lVar5 + 0x98));
    if ((*(long *)(lVar4 + 0x98) != 0) &&
       (lVar5 = *(long *)(*(long *)(lVar4 + 0x98) + 0x10), lVar5 != 0)) {
      uVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uVar3,uRam0000000003d572d8);
      param_3 = (undefined8 *)0x0;
      lVar5 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar6,uVar3);
      lVar2 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar4,uRam0000000003d405c8);
      if (((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) && (lVar5 != 0)) {
        *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(*(long *)(lVar2 + 0x10) + 0x10);
        if ((*(long *)(lVar4 + 0x80) != 0) &&
           (lVar2 = *(long *)(*(long *)(lVar4 + 0x80) + 0x28), lVar2 != 0)) {
          uStack_128 = *(undefined8 *)(lVar2 + 0xe0);
          uStack_130 = *(undefined8 *)(lVar2 + 0xd8);
          uStack_118 = *(undefined8 *)(lVar2 + 0xf0);
          uStack_120 = *(undefined8 *)(lVar2 + 0xe8);
          uStack_108 = *(undefined8 *)(lVar2 + 0x100);
          uStack_110 = *(undefined8 *)(lVar2 + 0xf8);
          uStack_188 = *(undefined8 *)(lVar2 + 0x130);
          uStack_190 = *(undefined8 *)(lVar2 + 0x128);
          uStack_178 = *(undefined8 *)(lVar2 + 0x140);
          uStack_180 = *(undefined8 *)(lVar2 + 0x138);
          uStack_1a8 = *(undefined8 *)(lVar2 + 0x110);
          uStack_1b0 = *(undefined8 *)(lVar2 + 0x108);
          uStack_198 = *(undefined8 *)(lVar2 + 0x120);
          uStack_1a0 = *(undefined8 *)(lVar2 + 0x118);
          uStack_c0 = *(undefined8 *)(lVar2 + 0x148);
          uStack_100 = uStack_1b0;
          uStack_f8 = uStack_1a8;
          uStack_f0 = uStack_1a0;
          uStack_e8 = uStack_198;
          uStack_e0 = uStack_190;
          uStack_d8 = uStack_188;
          uStack_d0 = uStack_180;
          uStack_c8 = uStack_178;
          Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(&uStack_170,&uStack_1b0,0);
          *(undefined8 *)(lVar5 + 0xb0) = uStack_138;
          *(undefined8 *)(lVar5 + 0xa8) = uStack_140;
          *(undefined8 *)(lVar5 + 0xa0) = uStack_148;
          *(undefined8 *)(lVar5 + 0x98) = uStack_150;
          *(undefined8 *)(lVar5 + 0x90) = uStack_158;
          *(undefined8 *)(lVar5 + 0x88) = uStack_160;
          *(undefined8 *)(lVar5 + 0x80) = uStack_168;
          *(undefined8 *)(lVar5 + 0x78) = uStack_170;
          if ((*(long *)(lVar4 + 0x80) != 0) &&
             (lVar2 = *(long *)(*(long *)(lVar4 + 0x80) + 0x28), lVar2 != 0)) {
            uVar3 = /*Atlas.Gameplay.RemoteKartLoadout$$FromNetworkLobbyPlayer*/ func_0x014e0630(*(undefined8 *)(lVar2 + 0xd0),0);
            *(undefined8 *)(lVar5 + 0xb8) = uVar3;
            uVar3 = Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(uVar7,0);
            *(undefined8 *)(lVar5 + 0xc0) = uVar3;
            *(undefined4 *)(lVar5 + 0x70) = uVar1;
            if ((lVar6 != 0) && (*(long *)(lVar4 + 0xa0) != 0)) {
              /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar4 + 0xa0),*(undefined8 *)(lVar6 + 0x30),lVar5,0);
              return;
            }
          }
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0xa8) != 0) {
    /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194();
    if (*(char *)(lVar4 + 0xb0) != '\0') {
      if (*(long *)(lVar4 + 0x80) == 0) goto code_r0x0152fd88;
      /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar4 + 0x80),0);
      *(undefined1 *)(lVar4 + 0xb0) = 0;
    }
    return;
  }
code_r0x0152fd88:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4e98 & 1) == 0) {
    func_0x00f78a20(0x3d405c0);
    bRam0000000003eb4e98 = 1;
  }
  if (lVar4 != 0) {
    return;
  }
  auVar8 = func_0x00f78af4(0,uRam0000000003d405c0);
  lVar4 = auVar8._0_8_;
  *(undefined8 *)(lVar4 + 0x10) = *param_3;
  *(long *)(lVar4 + 0x20) = auVar8._8_8_;
  *(undefined8 **)(lVar4 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x152fb60 | Atlas.Contexts.VotingState.VoteScreenAnimFinished
// ============================================================

void Atlas_Contexts_VotingState__VoteScreenAnimFinished
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
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
  
  if ((bRam0000000003eb4e97 & 1) == 0) {
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d405c8);
    bRam0000000003eb4e97 = 1;
  }
  if ((((*(long *)(param_1 + 0x80) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 0x28), lVar4 != 0)) &&
      (lVar5 = *(long *)(param_1 + 0xa8), lVar5 != 0)) &&
     ((*(long *)(param_1 + 0x98) != 0 &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x98) + 0x10), lVar2 != 0)))) {
    uVar1 = *(undefined4 *)(lVar4 + 0x84);
    uVar6 = *(undefined8 *)(lVar4 + 0x88);
    uVar3 = *(undefined8 *)(lVar5 + 0xa0);
    param_3 = puRam0000000003d57288;
    lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,*(undefined8 *)(lVar5 + 0x98));
    if ((*(long *)(param_1 + 0x98) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x98) + 0x10), lVar5 != 0)) {
      uVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uVar3,uRam0000000003d572d8);
      param_3 = (undefined8 *)0x0;
      lVar5 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar4,uVar3);
      lVar2 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405c8);
      if (((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) && (lVar5 != 0)) {
        *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(*(long *)(lVar2 + 0x10) + 0x10);
        if ((*(long *)(param_1 + 0x80) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x28), lVar2 != 0)) {
          uStack_c8 = *(undefined8 *)(lVar2 + 0xe0);
          uStack_d0 = *(undefined8 *)(lVar2 + 0xd8);
          uStack_b8 = *(undefined8 *)(lVar2 + 0xf0);
          uStack_c0 = *(undefined8 *)(lVar2 + 0xe8);
          uStack_a8 = *(undefined8 *)(lVar2 + 0x100);
          uStack_b0 = *(undefined8 *)(lVar2 + 0xf8);
          uStack_128 = *(undefined8 *)(lVar2 + 0x130);
          uStack_130 = *(undefined8 *)(lVar2 + 0x128);
          uStack_118 = *(undefined8 *)(lVar2 + 0x140);
          uStack_120 = *(undefined8 *)(lVar2 + 0x138);
          uStack_148 = *(undefined8 *)(lVar2 + 0x110);
          uStack_150 = *(undefined8 *)(lVar2 + 0x108);
          uStack_138 = *(undefined8 *)(lVar2 + 0x120);
          uStack_140 = *(undefined8 *)(lVar2 + 0x118);
          uStack_60 = *(undefined8 *)(lVar2 + 0x148);
          uStack_a0 = uStack_150;
          uStack_98 = uStack_148;
          uStack_90 = uStack_140;
          uStack_88 = uStack_138;
          uStack_80 = uStack_130;
          uStack_78 = uStack_128;
          uStack_70 = uStack_120;
          uStack_68 = uStack_118;
          Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(&uStack_110,&uStack_150,0);
          *(undefined8 *)(lVar5 + 0xb0) = uStack_d8;
          *(undefined8 *)(lVar5 + 0xa8) = uStack_e0;
          *(undefined8 *)(lVar5 + 0xa0) = uStack_e8;
          *(undefined8 *)(lVar5 + 0x98) = uStack_f0;
          *(undefined8 *)(lVar5 + 0x90) = uStack_f8;
          *(undefined8 *)(lVar5 + 0x88) = uStack_100;
          *(undefined8 *)(lVar5 + 0x80) = uStack_108;
          *(undefined8 *)(lVar5 + 0x78) = uStack_110;
          if ((*(long *)(param_1 + 0x80) != 0) &&
             (lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x28), lVar2 != 0)) {
            uVar3 = /*Atlas.Gameplay.RemoteKartLoadout$$FromNetworkLobbyPlayer*/ func_0x014e0630(*(undefined8 *)(lVar2 + 0xd0),0);
            *(undefined8 *)(lVar5 + 0xb8) = uVar3;
            uVar3 = Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(uVar6,0);
            *(undefined8 *)(lVar5 + 0xc0) = uVar3;
            *(undefined4 *)(lVar5 + 0x70) = uVar1;
            if ((lVar4 != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
              /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(param_1 + 0xa0),*(undefined8 *)(lVar4 + 0x30),lVar5,0);
              return;
            }
          }
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0xa8) != 0) {
    /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194();
    if (*(char *)(lVar4 + 0xb0) != '\0') {
      if (*(long *)(lVar4 + 0x80) == 0) goto code_r0x0152fd88;
      /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar4 + 0x80),0);
      *(undefined1 *)(lVar4 + 0xb0) = 0;
    }
    return;
  }
code_r0x0152fd88:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4e98 & 1) == 0) {
    func_0x00f78a20(0x3d405c0);
    bRam0000000003eb4e98 = 1;
  }
  if (lVar4 != 0) {
    return;
  }
  auVar7 = func_0x00f78af4(0,uRam0000000003d405c0);
  lVar4 = auVar7._0_8_;
  *(undefined8 *)(lVar4 + 0x10) = *param_3;
  *(long *)(lVar4 + 0x20) = auVar7._8_8_;
  *(undefined8 **)(lVar4 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x152fd44 | Atlas.Contexts.VotingState.OnExit
// ============================================================

void Atlas_Contexts_VotingState__OnExit(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194();
    if (*(char *)(param_1 + 0xb0) != '\0') {
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_0152fd88;
      /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(param_1 + 0x80),0);
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
    return;
  }
LAB_0152fd88:
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4e98 & 1) == 0) {
    func_0x00f78a20(0x3d405c0);
    bRam0000000003eb4e98 = 1;
  }
  if (lVar1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d405c0);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x152fd8c | Atlas.Contexts.VotingState..ctor
// ============================================================

void Atlas_Contexts_VotingState___ctor(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4e98 & 1) == 0) {
    func_0x00f78a20(0x3d405c0);
    bRam0000000003eb4e98 = 1;
  }
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d405c0);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



