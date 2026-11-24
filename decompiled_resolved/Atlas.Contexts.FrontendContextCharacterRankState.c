// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontendContextCharacterRankState

// ============================================================
// RVA: 0x1595ecc | Atlas.Contexts.FrontendContextCharacterRankState.add_TransitionFromState
// ============================================================

void Atlas_Contexts_FrontendContextCharacterRankState__add_TransitionFromState
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb517e & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb517e = 1;
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
  if ((bRam0000000003eb517f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb517f = 1;
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
  if ((bRam0000000003eb5180 & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d27680);
    bRam0000000003eb5180 = 1;
  }
  if (lVar3 != 0) {
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550b8);
    *(undefined8 *)(lVar6 + 0x80) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551b0);
    *(undefined8 *)(lVar6 + 0x88) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55090);
    *(undefined8 *)(lVar6 + 0x90) = uVar5;
    uVar5 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextCharacterRankState.RankStateData_TypeInfo*/ uRam0000000003d27680);
    /*Atlas.Contexts.FrontendContextCharacterRankState.RankStateData$$.ctor*/ func_0x0154fc6c(uVar5,0);
    *(undefined8 *)(lVar6 + 0x68) = uVar5;
    return;
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x1595f6c | Atlas.Contexts.FrontendContextCharacterRankState.remove_TransitionFromState
// ============================================================

void Atlas_Contexts_FrontendContextCharacterRankState__remove_TransitionFromState
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb517f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb517f = 1;
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
  if ((bRam0000000003eb5180 & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d27680);
    bRam0000000003eb5180 = 1;
  }
  if (lVar3 != 0) {
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550b8);
    *(undefined8 *)(lVar5 + 0x80) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551b0);
    *(undefined8 *)(lVar5 + 0x88) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55090);
    *(undefined8 *)(lVar5 + 0x90) = uVar4;
    uVar4 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextCharacterRankState.RankStateData_TypeInfo*/ uRam0000000003d27680);
    /*Atlas.Contexts.FrontendContextCharacterRankState.RankStateData$$.ctor*/ func_0x0154fc6c(uVar4,0);
    *(undefined8 *)(lVar5 + 0x68) = uVar4;
    return;
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x159600c | Atlas.Contexts.FrontendContextCharacterRankState.Init
// ============================================================

void Atlas_Contexts_FrontendContextCharacterRankState__Init(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb5180 & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d27680);
    bRam0000000003eb5180 = 1;
  }
  if (param_2 != 0) {
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550b8);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551b0);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55090);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    uVar1 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextCharacterRankState.RankStateData_TypeInfo*/ uRam0000000003d27680);
    /*Atlas.Contexts.FrontendContextCharacterRankState.RankStateData$$.ctor*/ func_0x0154fc6c(uVar1,0);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    return;
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x15960f0 | Atlas.Contexts.FrontendContextCharacterRankState.OnDeInit
// ============================================================

void Atlas_Contexts_FrontendContextCharacterRankState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x15960fc | Atlas.Contexts.FrontendContextCharacterRankState.OnEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x01596298: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0159629c) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontendContextCharacterRankState__OnEnter(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  long **pplVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  dword *pdVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  dword *pdVar23;
  long *extraout_x1;
  dword *pdVar24;
  long *plVar25;
  dword *pdVar26;
  dword *pdVar27;
  long lVar28;
  int *piVar29;
  uint uVar30;
  dword *pdVar31;
  dword *pdVar32;
  undefined8 uVar33;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar34;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar35;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar36;
  undefined *puVar37;
  undefined4 extraout_s0;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [12];
  long *plStack_a0;
  long lStack_98;
  undefined *puStack_78;
  long *plStack_70;
  long lStack_68;
  dword *pdStack_60;
  long lStack_58;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  pplVar5 = (long **)&stack0xffffffffffffffc0;
  uVar33 = 0x3d26c48;
  plStack_a0 = (long *)0x3d56e10;
  if ((bRam0000000003eb5181 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d26c38);
    func_0x00f78a20(0x3d26c40);
    func_0x00f78a20(0x3d56df8);
    func_0x00f78a20(0x3d56e00);
    func_0x00f78a20(0x3d56e10);
    func_0x00f78a20(0x3d26c48);
    bRam0000000003eb5181 = 1;
  }
  pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.TransitionData_TypeInfo*/ uRam0000000003d26c48);
  /*Atlas.UI.Screens.CharacterSelectScreen.TransitionData$$.ctor*/ func_0x0154a334(pdVar15,0);
  lStack_98 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.ButtonSelected_TypeInfo*/ uRam0000000003d26c38);
  plVar25 = plRam0000000003d56e10;
  /*Atlas.UI.Screens.CharacterSelectScreen.ButtonSelected$$.ctor*/ func_0x01549d58(lStack_98,param_1,plRam0000000003d56e10,0);
  if (pdVar15 == (dword *)0x0) {
code_r0x015962b4:
    lVar16 = func_0x00f78af4();
    puStack_48 = &Atlas_Contexts_FrontendContextCharacterRankState__CharacterSelectBackPressed;
    pppppppuVar36 = &pppppppuStack_50;
    plStack_70 = plStack_a0;
    lStack_68 = lStack_98;
    pdStack_60 = pdVar15;
    lStack_58 = param_1;
    pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5182 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5182 = 1;
    }
    pdVar32 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ pdRam0000000003d194c8;
    lVar16 = *(long *)(lVar16 + 0x78);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pdVar32,0);
    if (lVar16 != 0) {
      /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar16,uVar17,0,0,uRam0000000003d2a5b0);
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    lVar16 = func_0x00f78af4();
    plStack_a0 = (long *)0x3eb5000;
    lStack_98 = 0x3d25458;
    puStack_78 = &Atlas_Contexts_FrontendContextCharacterRankState__ShowRankRewardScreen;
    if ((bRam0000000003eb5183 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d56e08);
      func_0x00f78a20(0x3d40640);
      func_0x00f78a20(0x3d26c00);
      bRam0000000003eb5183 = 1;
    }
    pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterRewardScreen.TransitionData_TypeInfo*/ uRam0000000003d26c00);
    /*Atlas.UI.Screens.CharacterRewardScreen.TransitionData$$.ctor*/ func_0x015477d8(pdVar15,0);
    lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar16,uRam0000000003d40640);
    if ((lVar18 == 0) || (pdVar15 == (dword *)0x0)) {
code_r0x015964cc:
      auVar48 = func_0x00f78af4();
      pdVar15 = auVar48._0_8_;
      plVar19 = plVar25;
      if ((bRam0000000003eb5184 & 1) == 0) {
        pdVar15 = (dword *)func_0x00f78a20(0x3d40640);
        bRam0000000003eb5184 = 1;
      }
      if (auVar48._8_4_ == 0) {
        pdVar15 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(auVar48._0_8_,uRam0000000003d40640);
        if (pdVar15 == (dword *)0x0) {
          pdVar15 = (dword *)func_0x00f78af4();
          if ((bRam0000000003eb5185 & 1) == 0) {
            func_0x00f78a20(0x3d40638);
            bRam0000000003eb5185 = 1;
          }
          if (pdVar15 == (dword *)0x0) {
            auVar44 = func_0x00f78af4(0,uRam0000000003d40638);
            pdVar15 = auVar44._0_8_;
            *(long *)(pdVar15 + 4) = *plVar19;
            *(long *)(pdVar15 + 8) = auVar44._8_8_;
            *(long **)(pdVar15 + 10) = plVar19;
            return pdVar15;
          }
          return pdVar15;
        }
        *(long **)(pdVar15 + 4) = plVar25;
      }
      return pdVar15;
    }
    lVar28 = *(long *)(lVar18 + 0x18);
    lVar22 = *(long *)(lVar18 + 0x10);
    lVar40 = *(long *)(lVar18 + 0x28);
    lVar39 = *(long *)(lVar18 + 0x20);
    lVar41 = *(long *)(lVar18 + 0x30);
    lVar43 = *(long *)(lVar18 + 0x48);
    lVar42 = *(long *)(lVar18 + 0x40);
    *(long *)(pdVar15 + 0xe) = *(long *)(lVar18 + 0x38);
    *(long *)(pdVar15 + 0xc) = lVar41;
    *(long *)(pdVar15 + 0x12) = lVar43;
    *(long *)(pdVar15 + 0x10) = lVar42;
    *(long *)(pdVar15 + 6) = lVar28;
    *(long *)(pdVar15 + 4) = lVar22;
    *(long *)(pdVar15 + 10) = lVar40;
    *(long *)(pdVar15 + 8) = lVar39;
    lVar18 = *(long *)(lVar16 + 0x88);
    plVar19 = (long *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    plVar25 = plRam0000000003d56e08;
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(plVar19,lVar16,plRam0000000003d56e08,0);
    if (lVar18 == 0) goto code_r0x015964cc;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar18,0,plVar19,0);
    pdVar31 = *(dword **)(lVar16 + 0x80);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = plVar19;
    if (pdVar31 == (dword *)0x0) goto code_r0x015964cc;
    pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0);
    pplVar5 = &plStack_70;
    pdVar27 = (dword *)0x0;
  }
  else {
    uVar33 = 0x3d29000;
    unaff_x24 = 0x3d56000;
    *(long *)(pdVar15 + 4) = lStack_98;
    lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected_TypeInfo*/ uRam0000000003d26c40);
    /*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected$$.ctor*/ func_0x01549fd0(lVar16,param_1,uRam0000000003d56e00,0);
    *(long *)(pdVar15 + 6) = lVar16;
    lStack_98 = *(long *)(param_1 + 0x88);
    plStack_a0 = (long *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    plVar25 = plRam0000000003d56df8;
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(plStack_a0,param_1,plRam0000000003d56df8,0);
    if (lStack_98 == 0) goto code_r0x015962b4;
    uVar33 = 0x3d1feb8;
    plVar25 = plStack_a0;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lStack_98,0,plStack_a0,0);
    pdVar31 = *(dword **)(param_1 + 0x80);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1 = 0;
    if (pdVar31 == (dword *)0x0) goto code_r0x015962b4;
    pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x50);
    puStack_78 = &UNK_0159629c;
    pdVar27 = pdVar31;
    pdVar32 = pdVar15;
    pppppppuVar36 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  uVar17 = 0;
  pdVar26 = (dword *)0x0;
  *(undefined8 *)((long)pplVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar5 + -0x38) = uVar33;
  *(long **)((long)pplVar5 + -0x30) = plStack_a0;
  *(long *)((long)pplVar5 + -0x28) = lStack_98;
  *(dword **)((long)pplVar5 + -0x20) = pdVar32;
  *(dword **)((long)pplVar5 + -0x18) = pdVar27;
  *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuVar36;
  *(undefined **)((long)pplVar5 + -8) = puStack_78;
  puVar35 = (undefined1 *)((long)pplVar5 + -0x10);
  pdVar32 = (dword *)0x0;
  pdVar27 = pdVar15;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)pplVar5 + -0x48) = 0;
  lVar16 = *(long *)(pdVar31 + 4);
  if (lVar16 != 0) {
    pdVar26 = (dword *)0x0;
    uVar17 = 0;
    puVar37 = &UNK_01470820;
    pdVar24 = pdVar23;
    pdVar27 = pdVar15;
code_r0x02f87f38:
    *(undefined8 *)((long)pplVar5 + -0x90) = unaff_x24;
    *(undefined8 *)((long)pplVar5 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)pplVar5 + -0x80) = 0;
    *(dword **)((long)pplVar5 + -0x78) = pdVar15;
    *(dword **)((long)pplVar5 + -0x70) = pdVar31;
    *(dword **)((long)pplVar5 + -0x68) = pdVar23;
    *(undefined1 **)((long)pplVar5 + -0x60) = puVar35;
    *(undefined **)((long)pplVar5 + -0x58) = puVar37;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)pplVar5 + -0x130) = unaff_x26;
    *(undefined8 *)((long)pplVar5 + -0x128) = unaff_x25;
    *(undefined8 *)((long)pplVar5 + -0x120) = 0x3ebc000;
    *(dword **)((long)pplVar5 + -0x118) = pdVar24;
    *(dword **)((long)pplVar5 + -0x110) = pdVar27;
    *(undefined8 *)((long)pplVar5 + -0x108) = uVar17;
    *(long *)((long)pplVar5 + -0x100) = lVar16;
    *(dword **)((long)pplVar5 + -0xf8) = pdVar26;
    *(undefined1 **)((long)pplVar5 + -0xf0) = (undefined1 *)((long)pplVar5 + -0x60);
    *(undefined **)((long)pplVar5 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar18 = *(long *)(lVar16 + 0x78);
    if (lVar18 != 0) {
      iVar14 = *(int *)(lVar18 + 0x18);
      if (iVar14 < 1) {
        return (dword *)0x0;
      }
      iVar13 = 1;
      pdVar15 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar18 + 0x18) <= iVar13 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
        if (lVar18 == 0) break;
        uVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar18,pdVar24,5,0);
        if ((uVar21 & 1) != 0) {
          return pdVar15;
        }
        pdVar15 = (dword *)(ulong)(iVar13 < iVar14);
        if (iVar14 == iVar13) {
          return pdVar15;
        }
        lVar18 = *(long *)(lVar16 + 0x78);
        iVar13 = iVar13 + 1;
      } while (lVar18 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar44 = func_0x00f78af4();
  pdVar24 = auVar44._8_8_;
  *(undefined1 **)((long)pplVar5 + -0x60) = puVar35;
  *(undefined **)((long)pplVar5 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar16 = *(long *)(auVar44._0_8_ + 0x10);
  if (lVar16 != 0) {
    puVar35 = *(undefined1 **)((long)pplVar5 + -0x60);
    puVar37 = *(undefined **)((long)pplVar5 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar44 = func_0x00f78af4();
  uVar33 = auVar44._8_8_;
  *(undefined1 **)((long)pplVar5 + -0x70) = (undefined1 *)((long)pplVar5 + -0x60);
  *(undefined **)((long)pplVar5 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar16 = *(long *)(auVar44._0_8_ + 0x10);
  if (lVar16 != 0) {
    pdVar26 = (dword *)0x0;
    *(undefined8 *)((long)pplVar5 + -0x90) = 0;
    *(dword **)((long)pplVar5 + -0x88) = pdVar15;
    *(dword **)((long)pplVar5 + -0x80) = pdVar31;
    *(dword **)((long)pplVar5 + -0x78) = pdVar23;
    *(undefined8 *)((long)pplVar5 + -0x70) = *(undefined8 *)((long)pplVar5 + -0x70);
    *(undefined8 *)((long)pplVar5 + -0x68) = *(undefined8 *)((long)pplVar5 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar18 = *(long *)(lVar16 + 0x70);
    if (lVar18 != 0) {
      lVar22 = lVar18;
      if (*(uint *)(lVar18 + 0x18) <= auVar44._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar22 = *(long *)(lVar16 + 0x70);
      }
      if (lVar22 != 0) {
        lVar18 = *(long *)(lVar18 + 0x10) + (long)(int)auVar44._8_4_ * 0x28;
        uVar38 = *(undefined8 *)(lVar18 + 0x28);
        uVar17 = *(undefined8 *)(lVar18 + 0x20);
        uVar1 = *(undefined4 *)(lVar18 + 0x42);
        *(undefined4 *)((long)pplVar5 + -0xd8) = uVar1;
        uVar4 = *(undefined2 *)(lVar18 + 0x46);
        *(undefined2 *)((long)pplVar5 + -0xd4) = uVar4;
        *(undefined8 *)((long)pplVar5 + -200) = uVar38;
        *(undefined8 *)((long)pplVar5 + -0xd0) = uVar17;
        *(undefined8 *)((long)pplVar5 + -0xb8) = uVar38;
        *(undefined8 *)((long)pplVar5 + -0xc0) = uVar17;
        *(undefined8 *)((long)pplVar5 + -0xb0) = 0;
        *(undefined8 *)((long)pplVar5 + -0xa8) = 0;
        *(undefined2 *)((long)pplVar5 + -0xa0) = 1;
        *(undefined4 *)((long)pplVar5 + -0x9e) = uVar1;
        *(undefined2 *)((long)pplVar5 + -0x9a) = uVar4;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar22,uVar33,(undefined1 *)((long)pplVar5 + -0xc0),uRam0000000003d3ddd0);
        pdVar15 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,uVar33);
        return pdVar15;
      }
    }
    auVar44 = func_0x00f78af4();
    pdVar24 = auVar44._8_8_;
    puVar11 = (undefined1 *)((long)pplVar5 + -0x110);
    *(undefined8 *)((long)pplVar5 + -0x110) = 0;
    *(long *)((long)pplVar5 + -0x108) = lVar18;
    *(long *)((long)pplVar5 + -0x100) = lVar16;
    *(undefined8 *)((long)pplVar5 + -0xf8) = uVar33;
    *(undefined1 **)((long)pplVar5 + -0xf0) = (undefined1 *)((long)pplVar5 + -0x70);
    *(undefined **)((long)pplVar5 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar35 = (undefined1 *)((long)pplVar5 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar16 = *(long *)(auVar44._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar44._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar44._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar15 = (dword *)0x0;
      }
      else {
        pdVar15 = *(dword **)(lVar16 + 0x40);
      }
      return pdVar15;
    }
    puVar37 = &Core_UI2_UIScreen__ForceExit;
    pdVar23 = (dword *)func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar15 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar44 = func_0x00f78af4();
  pdVar24 = auVar44._8_8_;
  *(undefined1 **)((long)pplVar5 + -0x80) = (undefined1 *)((long)pplVar5 + -0x70);
  *(undefined **)((long)pplVar5 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar16 = *(long *)(auVar44._0_8_ + 0x10);
  auVar44._8_8_ = pdVar15;
  auVar44._0_8_ = lVar16;
  if (lVar16 != 0) {
    pdVar26 = (dword *)0x0;
    puVar6 = (undefined1 *)((long)pplVar5 + -0x70);
    puVar35 = *(undefined1 **)((long)pplVar5 + -0x80);
    puVar37 = *(undefined **)((long)pplVar5 + -0x78);
    pdVar15 = pdVar31;
    goto code_r0x02f877a8;
  }
  auVar44 = func_0x00f78af4();
  *(undefined1 **)((long)pplVar5 + -0x90) = (undefined1 *)((long)pplVar5 + -0x80);
  *(undefined **)((long)pplVar5 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar16 = *(long *)(auVar44._0_8_ + 0x10);
  auVar44._8_8_ = auVar44._8_8_;
  auVar44._0_8_ = lVar16;
  if (lVar16 != 0) {
    puVar7 = (undefined1 *)((long)pplVar5 + -0x80);
    puVar35 = *(undefined1 **)((long)pplVar5 + -0x90);
    puVar37 = *(undefined **)((long)pplVar5 + -0x88);
    pdVar24 = pdVar26;
    while( true ) {
      puVar6 = puVar7 + -0x30;
      *(dword **)(puVar7 + -0x30) = pdVar32;
      *(dword **)(puVar7 + -0x28) = pdVar15;
      *(dword **)(puVar7 + -0x20) = pdVar31;
      *(dword **)(puVar7 + -0x18) = pdVar23;
      *(undefined1 **)(puVar7 + -0x10) = puVar35;
      *(undefined **)(puVar7 + -8) = puVar37;
      puVar35 = puVar7 + -0x10;
      puVar37 = &UNK_02f883d8;
      pdVar26 = pdVar24;
      pdVar23 = pdVar27;
      pdVar15 = pdVar24;
      pdVar32 = auVar44._0_8_;
code_r0x02f877a8:
      pdVar31 = auVar44._0_8_;
      puVar11 = puVar6 + -0x60;
      *(dword **)(puVar6 + -0x30) = pdVar32;
      *(long *)(puVar6 + -0x28) = auVar44._8_8_;
      *(dword **)(puVar6 + -0x20) = pdVar15;
      *(dword **)(puVar6 + -0x18) = pdVar23;
      *(undefined1 **)(puVar6 + -0x10) = puVar35;
      *(undefined **)(puVar6 + -8) = puVar37;
      puVar35 = puVar6 + -0x10;
      pdVar15 = pdVar31;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar15 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar30 = (uint)pdVar24;
      if (((int)uVar30 < 0) || ((int)*(long *)(pdVar31 + 0x14) <= (int)uVar30)) {
        return pdVar15;
      }
      lVar16 = *(long *)(pdVar31 + 0x1c);
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar16 + 0x10) + ((ulong)pdVar24 & 0xffffffff) * 0x28;
      pdVar32 = *(dword **)(lVar16 + 0x20);
      pdVar23 = *(dword **)(lVar16 + 0x28);
      *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar16 + 0x42);
      *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar16 + 0x46);
      if (pdVar23 == (dword *)0x0) {
        lVar16 = *(long *)(pdVar31 + 0x1c);
        if (lVar16 != 0) {
          *(dword **)(puVar6 + -0x58) = pdVar32;
          *(undefined8 *)(puVar6 + -0x50) = 0;
          *(undefined8 *)(puVar6 + -0x48) = 0;
          *(undefined8 *)(puVar6 + -0x40) = 0;
          *(undefined2 *)(puVar6 + -0x38) = 0;
          *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
          *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
          pdVar15 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar16,pdVar24,puVar6 + -0x58,uRam0000000003d3ddd0);
          return pdVar15;
        }
        break;
      }
      puVar37 = &UNK_02f87848;
      pdVar15 = pdVar23;
code_r0x02f882d8:
      *(dword **)(puVar11 + -0x20) = pdVar31;
      *(dword **)(puVar11 + -0x18) = pdVar24;
      *(undefined1 **)(puVar11 + -0x10) = puVar35;
      *(undefined **)(puVar11 + -8) = puVar37;
      (**(code **)(*(long *)pdVar23 + 0x218))(pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x220));
      if (*(long *)(pdVar23 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar23 + 10),0);
        pdVar23[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar23,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar15 = (dword *)(**(code **)(*(long *)pdVar23 + 0x228))
                                     (pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x230));
        return pdVar15;
      }
      func_0x00f78af4();
      puVar7 = puVar11 + -0x40;
      *(dword **)(puVar11 + -0x40) = pdVar31;
      *(dword **)(puVar11 + -0x38) = pdVar23;
      *(undefined1 **)(puVar11 + -0x30) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar35 = puVar11 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar16 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar33 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar33,lVar16);
        pdVar15 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar15;
      }
      puVar37 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar44 = func_0x00f78af4();
      pdVar24 = pdVar26;
    }
    lVar16 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar32;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar31;
    *(dword **)(puVar6 + -0x78) = pdVar24;
    *(undefined1 **)(puVar6 + -0x70) = puVar35;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar33 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar33,0);
    if (0 < *(int *)(lVar16 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar16,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar16 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar16);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
    *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar15 = (dword *)(*pcRam0000000003ec05a0)(uVar33);
    return pdVar15;
  }
  auVar44 = func_0x00f78af4();
  *(undefined1 **)((long)pplVar5 + -0xa0) = (undefined1 *)((long)pplVar5 + -0x90);
  *(undefined **)((long)pplVar5 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar16 = *(long *)(auVar44._0_8_ + 0x10);
  if (lVar16 == 0) {
    auVar44 = func_0x00f78af4();
    *(undefined1 **)((long)pplVar5 + -0xb0) = (undefined1 *)((long)pplVar5 + -0xa0);
    *(undefined **)((long)pplVar5 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar16 = *(long *)(auVar44._0_8_ + 0x10);
    auVar45._8_8_ = auVar44._8_8_;
    auVar45._0_8_ = lVar16;
    if (lVar16 != 0) {
      pdVar27 = (dword *)0x0;
      puVar8 = (undefined1 *)((long)pplVar5 + -0xa0);
      puVar35 = *(undefined1 **)((long)pplVar5 + -0xb0);
      puVar37 = *(undefined **)((long)pplVar5 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar44 = func_0x00f78af4();
    *(undefined1 **)((long)pplVar5 + -0xc0) = (undefined1 *)((long)pplVar5 + -0xb0);
    *(undefined **)((long)pplVar5 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar16 = *(long *)(auVar44._0_8_ + 0x10);
    auVar46._8_8_ = auVar44._8_8_;
    auVar46._0_8_ = lVar16;
    if (lVar16 == 0) {
      auVar44 = func_0x00f78af4();
      *(undefined1 **)((long)pplVar5 + -0xd0) = (undefined1 *)((long)pplVar5 + -0xc0);
      *(undefined **)((long)pplVar5 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar16 = *(long *)(auVar44._0_8_ + 0x10);
      auVar47._8_8_ = auVar44._8_8_;
      auVar47._0_8_ = lVar16;
      if (lVar16 == 0) {
        pdVar32 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)pplVar5 + -0x100) = 0;
        *(dword **)((long)pplVar5 + -0xf8) = pdVar15;
        *(dword **)((long)pplVar5 + -0xf0) = pdVar31;
        *(dword **)((long)pplVar5 + -0xe8) = pdVar23;
        *(undefined1 **)((long)pplVar5 + -0xe0) = (undefined1 *)((long)pplVar5 + -0xd0);
        *(undefined **)((long)pplVar5 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar33 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar33,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar32 + 0xc) = uVar33;
        return pdVar32;
      }
      puVar10 = (undefined1 *)((long)pplVar5 + -0xc0);
      puVar35 = *(undefined1 **)((long)pplVar5 + -0xd0);
      puVar37 = *(undefined **)((long)pplVar5 + -200);
      goto code_r0x02f88674;
    }
    puVar9 = (undefined1 *)((long)pplVar5 + -0xb0);
    puVar35 = *(undefined1 **)((long)pplVar5 + -0xc0);
    puVar37 = *(undefined **)((long)pplVar5 + -0xb8);
    pdVar27 = pdVar26;
    pdVar32 = pdVar15;
  }
  else {
    pdVar27 = (dword *)0x0;
    puVar8 = (undefined1 *)((long)pplVar5 + -0xc0);
    *(undefined8 *)((long)pplVar5 + -0xc0) = 0;
    *(dword **)((long)pplVar5 + -0xb8) = pdVar15;
    *(dword **)((long)pplVar5 + -0xb0) = pdVar31;
    *(dword **)((long)pplVar5 + -0xa8) = pdVar23;
    *(undefined8 *)((long)pplVar5 + -0xa0) = *(undefined8 *)((long)pplVar5 + -0xa0);
    *(undefined8 *)((long)pplVar5 + -0x98) = *(undefined8 *)((long)pplVar5 + -0x98);
    puVar35 = (undefined1 *)((long)pplVar5 + -0xa0);
    pdVar15 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar30 = auVar44._8_4_;
    if (((int)uVar30 < 0) || (*(int *)(lVar16 + 0x50) <= (int)uVar30)) {
      return (dword *)0x0;
    }
    lVar16 = *(long *)(lVar16 + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(lVar16 + 0x10) + ((ulong)auVar44._8_8_ & 0xffffffff) * 0x28;
      lVar16 = *(long *)(lVar18 + 0x28);
      cVar2 = *(char *)(lVar18 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar18 + 0x30),0);
      if (iVar14 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar37 = &Core_UI2_UIManager__GetLayerState;
    auVar45 = func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar23 = auVar44._8_8_;
code_r0x02f884dc:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = 0;
    *(dword **)(puVar8 + -0x28) = pdVar15;
    *(dword **)(puVar8 + -0x20) = pdVar31;
    *(dword **)(puVar8 + -0x18) = pdVar23;
    *(undefined1 **)(puVar8 + -0x10) = puVar35;
    *(undefined **)(puVar8 + -8) = puVar37;
    puVar35 = puVar8 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar16 = *(long *)(auVar45._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar45._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar45._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar15 = &MACH_HEADER.cputype;
      }
      else {
        pdVar15 = (dword *)(ulong)*(uint *)(lVar16 + 0x4c);
      }
      return pdVar15;
    }
    puVar37 = &Core_UI2_UIManager__EnableInput;
    auVar46 = func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar23 = auVar45._8_8_;
    pdVar32 = (dword *)0x3ebc000;
  }
  pdVar24 = auVar46._8_8_;
  pdVar15 = auVar46._0_8_;
  puVar10 = puVar9 + -0x40;
  *(undefined8 *)(puVar9 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar9 + -0x30) = 0;
  *(dword **)(puVar9 + -0x28) = pdVar32;
  *(dword **)(puVar9 + -0x20) = pdVar31;
  *(dword **)(puVar9 + -0x18) = pdVar23;
  *(undefined1 **)(puVar9 + -0x10) = puVar35;
  *(undefined **)(puVar9 + -8) = puVar37;
  puVar35 = puVar9 + -0x10;
  pdVar32 = (dword *)0x3ebc000;
  pdVar26 = pdVar27;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar15 + 0x1a) != 0) {
    pdVar26 = (dword *)(ulong)((uint)pdVar27 ^ 1);
    pdVar31 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar15 + 0x1a),pdVar24,pdVar26,0);
    lVar16 = *(long *)(pdVar15 + 0x1c);
    pdVar32 = (dword *)0x0;
    if (lVar16 != 0) {
      uVar30 = auVar46._8_4_;
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        pdVar31 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) ||
         (pdVar32 = *(dword **)(pdVar15 + 0xc), pdVar32 == (dword *)0x0)) {
        return pdVar31;
      }
      lVar16 = *(long *)(pdVar15 + 0x1c);
      pdVar15 = (dword *)0x0;
      if (lVar16 != 0) {
        if (*(uint *)(lVar16 + 0x18) <= uVar30) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar25 = *(long **)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
        *(undefined8 *)(puVar9 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar9 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar9 + -0x40) = *(undefined8 *)(puVar9 + -0x40);
        *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)(puVar9 + -0x38);
        *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(puVar9 + -0x30);
        *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)(puVar9 + -0x28);
        *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x20);
        *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        *(dword **)(puVar9 + -0x68) = pdVar32;
        lVar16 = *(long *)(pdVar32 + 0x1a);
        if (lVar16 == 0) {
          puVar35 = puVar9 + -0x68;
          lVar18 = 1;
        }
        else {
          lVar18 = *(long *)(lVar16 + 0x18);
          if (lVar18 == 0) {
            return pdVar32;
          }
          puVar35 = (undefined1 *)(lVar16 + 0x20);
        }
        lVar16 = 0;
        do {
          lVar22 = *(long *)(puVar35 + lVar16 * 8);
          pcVar34 = *(code **)(lVar22 + 0x10);
          plVar19 = *(long **)(lVar22 + 0x20);
          lVar22 = *(long *)(lVar22 + 0x28);
          if (*(short *)(lVar22 + 0x48) == -1) {
            func_0x00f78ad8(lVar22);
          }
          iVar14 = func_0x00f78a4c(lVar22);
          bVar12 = *(char *)(lVar22 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar12) {
              if (plVar19 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar15 = (dword *)(*pcVar34)(plVar25,pdVar24,pdVar27,lVar22);
              }
              else {
                if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar19 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar32 + 6) == 0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar22);
                iVar13 = func_0x00f78ec0(lVar22);
                if (iVar14 == 0) {
                  uVar3 = *(ushort *)(lVar22 + 0x48);
                  if (iVar13 == 0) {
                    lVar22 = *plVar19 + (ulong)uVar3 * 0x10;
                    pdVar15 = (dword *)(**(code **)(lVar22 + 0x138))
                                                 (plVar19,plVar25,pdVar24,pdVar27,
                                                  *(undefined8 *)(lVar22 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar22 = func_0x00f78a48(lVar22);
                  lVar28 = *plVar19;
                  uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar21 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == lVar22) {
                        puVar20 = (undefined8 *)
                                  (lVar28 + (long)(int)(*piVar29 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar29 = piVar29 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  puVar20 = (undefined8 *)func_0x00fac1f0(plVar19,lVar22,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar34 = (code *)*puVar20;
                  puVar20 = (undefined8 *)puVar20[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar33 = *(undefined8 *)
                              (*plVar19 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar28 = *plVar19;
                    uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                    if (uVar21 != 0) {
                      piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == *(long *)(lVar22 + 0x18)) {
                          lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar22 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar29 = piVar29 + 4;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    lVar28 = func_0x00fac1f0(plVar19);
code_r0x01e71d4c:
                    uVar33 = *(undefined8 *)(lVar28 + 8);
                  }
                  puVar20 = (undefined8 *)func_0x00f78acc(uVar33,lVar22);
                  pcVar34 = (code *)*puVar20;
                }
                pdVar15 = (dword *)(*pcVar34)(plVar19,plVar25,pdVar24,pdVar27,puVar20);
              }
            }
            else {
              if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar32 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar22);
              iVar13 = func_0x00f78ec0(lVar22);
              if (iVar14 == 0) {
                uVar3 = *(ushort *)(lVar22 + 0x48);
                if (iVar13 == 0) {
                  lVar22 = *plVar25 + (ulong)uVar3 * 0x10;
                  pdVar15 = (dword *)(**(code **)(lVar22 + 0x138))
                                               (plVar25,pdVar24,pdVar27,
                                                *(undefined8 *)(lVar22 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar22 = func_0x00f78a48(lVar22);
                lVar28 = *plVar25;
                uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar21 != 0) {
                  piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == lVar22) {
                      puVar20 = (undefined8 *)
                                (lVar28 + (long)(int)(*piVar29 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar29 = piVar29 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar20 = (undefined8 *)func_0x00fac1f0(plVar25,lVar22,(ulong)uVar3);
code_r0x01e71d00:
                pcVar34 = (code *)*puVar20;
                puVar20 = (undefined8 *)puVar20[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar33 = *(undefined8 *)
                            (*plVar25 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar28 = *plVar25;
                  uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar21 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == *(long *)(lVar22 + 0x18)) {
                        lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar22 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar29 = piVar29 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  lVar28 = func_0x00fac1f0(plVar25);
code_r0x01e71cd8:
                  uVar33 = *(undefined8 *)(lVar28 + 8);
                }
                puVar20 = (undefined8 *)func_0x00f78acc(uVar33,lVar22);
                pcVar34 = (code *)*puVar20;
              }
              pdVar15 = (dword *)(*pcVar34)(plVar25,pdVar24,pdVar27,puVar20);
            }
          }
          else {
            if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar15 = (dword *)(*pcVar34)(plVar19,plVar25,pdVar24,pdVar27,lVar22);
          }
code_r0x01e71bd0:
          lVar16 = lVar16 + 1;
          if (lVar16 == lVar18) {
            return pdVar15;
          }
        } while( true );
      }
    }
  }
  puVar37 = &Core_UI2_UIManager__SetScreenVisible;
  auVar47 = func_0x00f78af4();
  pdVar23 = pdVar27;
  pdVar31 = pdVar24;
code_r0x02f88674:
  pdVar27 = auVar47._0_8_;
  *(dword **)(puVar10 + -0x30) = pdVar32;
  *(dword **)(puVar10 + -0x28) = pdVar15;
  *(dword **)(puVar10 + -0x20) = pdVar31;
  *(dword **)(puVar10 + -0x18) = pdVar23;
  *(undefined1 **)(puVar10 + -0x10) = puVar35;
  *(undefined **)(puVar10 + -8) = puVar37;
  pdVar15 = pdVar27;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar15 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar16 = *(long *)(pdVar27 + 0x1c);
  if (lVar16 != 0) {
    uVar30 = auVar47._8_4_;
    if (*(uint *)(lVar16 + 0x18) <= uVar30) {
      pdVar15 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) {
      return pdVar15;
    }
    lVar16 = *(long *)(pdVar27 + 0x1c);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
      if ((lVar16 != 0) && (plVar25 = *(long **)(lVar16 + 0x28), plVar25 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar15 = (dword *)(**(code **)(*plVar25 + 0x178))
                                     (plVar25,pdVar26,*(undefined8 *)(*plVar25 + 0x180));
        return pdVar15;
      }
    }
  }
  auVar44 = func_0x00f78af4();
  uVar33 = auVar44._0_8_;
  *(long *)(puVar10 + -0x50) = auVar47._8_8_;
  *(dword **)(puVar10 + -0x48) = pdVar26;
  *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
  *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar10 + -0x68) = 0;
  *(undefined8 *)(puVar10 + -0x70) = 0;
  *(undefined8 *)(puVar10 + -0x58) = 0;
  *(undefined8 *)(puVar10 + -0x60) = 0;
  pdVar15 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar33,auVar44._8_8_,puVar10 + -0x70);
  if ((int)pdVar15 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar33,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
    *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
    *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
    *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
    *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
    pdVar15 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar33,puVar10 + -0x90,1);
  }
  return pdVar15;
}



// ============================================================
// RVA: 0x1596100 | Atlas.Contexts.FrontendContextCharacterRankState.ShowCharacterSelect
// ============================================================

/* WARNING: Possible PIC construction at 0x01596298: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0159629c) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontendContextCharacterRankState__ShowCharacterSelect(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  long **pplVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  dword *pdVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  dword *pdVar23;
  long *extraout_x1;
  dword *pdVar24;
  long *plVar25;
  dword *pdVar26;
  dword *pdVar27;
  long lVar28;
  int *piVar29;
  uint uVar30;
  dword *pdVar31;
  dword *pdVar32;
  undefined8 uVar33;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar34;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar35;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar36;
  undefined *puVar37;
  undefined4 extraout_s0;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [12];
  long *plStack_a0;
  long lStack_98;
  undefined *puStack_78;
  long *plStack_70;
  long lStack_68;
  dword *pdStack_60;
  long lStack_58;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  pplVar5 = (long **)&stack0xffffffffffffffc0;
  uVar33 = 0x3d26c48;
  plStack_a0 = (long *)0x3d56e10;
  if ((bRam0000000003eb5181 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d26c38);
    func_0x00f78a20(0x3d26c40);
    func_0x00f78a20(0x3d56df8);
    func_0x00f78a20(0x3d56e00);
    func_0x00f78a20(0x3d56e10);
    func_0x00f78a20(0x3d26c48);
    bRam0000000003eb5181 = 1;
  }
  pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.TransitionData_TypeInfo*/ uRam0000000003d26c48);
  /*Atlas.UI.Screens.CharacterSelectScreen.TransitionData$$.ctor*/ func_0x0154a334(pdVar15,0);
  lStack_98 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.ButtonSelected_TypeInfo*/ uRam0000000003d26c38);
  plVar25 = plRam0000000003d56e10;
  /*Atlas.UI.Screens.CharacterSelectScreen.ButtonSelected$$.ctor*/ func_0x01549d58(lStack_98,param_1,plRam0000000003d56e10,0);
  if (pdVar15 == (dword *)0x0) {
LAB_015962b4:
    lVar16 = func_0x00f78af4();
    puStack_48 = &Atlas_Contexts_FrontendContextCharacterRankState__CharacterSelectBackPressed;
    pppppppuVar36 = &pppppppuStack_50;
    plStack_70 = plStack_a0;
    lStack_68 = lStack_98;
    pdStack_60 = pdVar15;
    lStack_58 = param_1;
    pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5182 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5182 = 1;
    }
    pdVar32 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ pdRam0000000003d194c8;
    lVar16 = *(long *)(lVar16 + 0x78);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pdVar32,0);
    if (lVar16 != 0) {
      /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar16,uVar17,0,0,uRam0000000003d2a5b0);
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    lVar16 = func_0x00f78af4();
    plStack_a0 = (long *)0x3eb5000;
    lStack_98 = 0x3d25458;
    puStack_78 = &Atlas_Contexts_FrontendContextCharacterRankState__ShowRankRewardScreen;
    if ((bRam0000000003eb5183 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d56e08);
      func_0x00f78a20(0x3d40640);
      func_0x00f78a20(0x3d26c00);
      bRam0000000003eb5183 = 1;
    }
    pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterRewardScreen.TransitionData_TypeInfo*/ uRam0000000003d26c00);
    /*Atlas.UI.Screens.CharacterRewardScreen.TransitionData$$.ctor*/ func_0x015477d8(pdVar15,0);
    lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar16,uRam0000000003d40640);
    if ((lVar18 == 0) || (pdVar15 == (dword *)0x0)) {
code_r0x015964cc:
      auVar48 = func_0x00f78af4();
      pdVar15 = auVar48._0_8_;
      plVar19 = plVar25;
      if ((bRam0000000003eb5184 & 1) == 0) {
        pdVar15 = (dword *)func_0x00f78a20(0x3d40640);
        bRam0000000003eb5184 = 1;
      }
      if (auVar48._8_4_ == 0) {
        pdVar15 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(auVar48._0_8_,uRam0000000003d40640);
        if (pdVar15 == (dword *)0x0) {
          pdVar15 = (dword *)func_0x00f78af4();
          if ((bRam0000000003eb5185 & 1) == 0) {
            func_0x00f78a20(0x3d40638);
            bRam0000000003eb5185 = 1;
          }
          if (pdVar15 == (dword *)0x0) {
            auVar44 = func_0x00f78af4(0,uRam0000000003d40638);
            pdVar15 = auVar44._0_8_;
            *(long *)(pdVar15 + 4) = *plVar19;
            *(long *)(pdVar15 + 8) = auVar44._8_8_;
            *(long **)(pdVar15 + 10) = plVar19;
            return pdVar15;
          }
          return pdVar15;
        }
        *(long **)(pdVar15 + 4) = plVar25;
      }
      return pdVar15;
    }
    lVar28 = *(long *)(lVar18 + 0x18);
    lVar22 = *(long *)(lVar18 + 0x10);
    lVar40 = *(long *)(lVar18 + 0x28);
    lVar39 = *(long *)(lVar18 + 0x20);
    lVar41 = *(long *)(lVar18 + 0x30);
    lVar43 = *(long *)(lVar18 + 0x48);
    lVar42 = *(long *)(lVar18 + 0x40);
    *(long *)(pdVar15 + 0xe) = *(long *)(lVar18 + 0x38);
    *(long *)(pdVar15 + 0xc) = lVar41;
    *(long *)(pdVar15 + 0x12) = lVar43;
    *(long *)(pdVar15 + 0x10) = lVar42;
    *(long *)(pdVar15 + 6) = lVar28;
    *(long *)(pdVar15 + 4) = lVar22;
    *(long *)(pdVar15 + 10) = lVar40;
    *(long *)(pdVar15 + 8) = lVar39;
    lVar18 = *(long *)(lVar16 + 0x88);
    plVar19 = (long *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    plVar25 = plRam0000000003d56e08;
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(plVar19,lVar16,plRam0000000003d56e08,0);
    if (lVar18 == 0) goto code_r0x015964cc;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar18,0,plVar19,0);
    pdVar31 = *(dword **)(lVar16 + 0x80);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = plVar19;
    if (pdVar31 == (dword *)0x0) goto code_r0x015964cc;
    pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0);
    pplVar5 = &plStack_70;
    pdVar27 = (dword *)0x0;
  }
  else {
    uVar33 = 0x3d29000;
    unaff_x24 = 0x3d56000;
    *(long *)(pdVar15 + 4) = lStack_98;
    lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected_TypeInfo*/ uRam0000000003d26c40);
    /*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected$$.ctor*/ func_0x01549fd0(lVar16,param_1,uRam0000000003d56e00,0);
    *(long *)(pdVar15 + 6) = lVar16;
    lStack_98 = *(long *)(param_1 + 0x88);
    plStack_a0 = (long *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    plVar25 = plRam0000000003d56df8;
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(plStack_a0,param_1,plRam0000000003d56df8,0);
    if (lStack_98 == 0) goto LAB_015962b4;
    uVar33 = 0x3d1feb8;
    plVar25 = plStack_a0;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lStack_98,0,plStack_a0,0);
    pdVar31 = *(dword **)(param_1 + 0x80);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1 = 0;
    if (pdVar31 == (dword *)0x0) goto LAB_015962b4;
    pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x50);
    puStack_78 = (undefined *)0x159629c;
    pdVar27 = pdVar31;
    pdVar32 = pdVar15;
    pppppppuVar36 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  uVar17 = 0;
  pdVar26 = (dword *)0x0;
  *(undefined8 *)((long)pplVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar5 + -0x38) = uVar33;
  *(long **)((long)pplVar5 + -0x30) = plStack_a0;
  *(long *)((long)pplVar5 + -0x28) = lStack_98;
  *(dword **)((long)pplVar5 + -0x20) = pdVar32;
  *(dword **)((long)pplVar5 + -0x18) = pdVar27;
  *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuVar36;
  *(undefined **)((long)pplVar5 + -8) = puStack_78;
  puVar35 = (undefined1 *)((long)pplVar5 + -0x10);
  pdVar32 = (dword *)0x0;
  pdVar27 = pdVar15;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)pplVar5 + -0x48) = 0;
  lVar16 = *(long *)(pdVar31 + 4);
  if (lVar16 != 0) {
    pdVar26 = (dword *)0x0;
    uVar17 = 0;
    puVar37 = &UNK_01470820;
    pdVar24 = pdVar23;
    pdVar27 = pdVar15;
code_r0x02f87f38:
    *(undefined8 *)((long)pplVar5 + -0x90) = unaff_x24;
    *(undefined8 *)((long)pplVar5 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)pplVar5 + -0x80) = 0;
    *(dword **)((long)pplVar5 + -0x78) = pdVar15;
    *(dword **)((long)pplVar5 + -0x70) = pdVar31;
    *(dword **)((long)pplVar5 + -0x68) = pdVar23;
    *(undefined1 **)((long)pplVar5 + -0x60) = puVar35;
    *(undefined **)((long)pplVar5 + -0x58) = puVar37;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)pplVar5 + -0x130) = unaff_x26;
    *(undefined8 *)((long)pplVar5 + -0x128) = unaff_x25;
    *(undefined8 *)((long)pplVar5 + -0x120) = 0x3ebc000;
    *(dword **)((long)pplVar5 + -0x118) = pdVar24;
    *(dword **)((long)pplVar5 + -0x110) = pdVar27;
    *(undefined8 *)((long)pplVar5 + -0x108) = uVar17;
    *(long *)((long)pplVar5 + -0x100) = lVar16;
    *(dword **)((long)pplVar5 + -0xf8) = pdVar26;
    *(undefined1 **)((long)pplVar5 + -0xf0) = (undefined1 *)((long)pplVar5 + -0x60);
    *(undefined **)((long)pplVar5 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar18 = *(long *)(lVar16 + 0x78);
    if (lVar18 != 0) {
      iVar14 = *(int *)(lVar18 + 0x18);
      if (iVar14 < 1) {
        return (dword *)0x0;
      }
      iVar13 = 1;
      pdVar15 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar18 + 0x18) <= iVar13 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
        if (lVar18 == 0) break;
        uVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar18,pdVar24,5,0);
        if ((uVar21 & 1) != 0) {
          return pdVar15;
        }
        pdVar15 = (dword *)(ulong)(iVar13 < iVar14);
        if (iVar14 == iVar13) {
          return pdVar15;
        }
        lVar18 = *(long *)(lVar16 + 0x78);
        iVar13 = iVar13 + 1;
      } while (lVar18 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar44 = func_0x00f78af4();
  pdVar24 = auVar44._8_8_;
  *(undefined1 **)((long)pplVar5 + -0x60) = puVar35;
  *(undefined **)((long)pplVar5 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar16 = *(long *)(auVar44._0_8_ + 0x10);
  if (lVar16 != 0) {
    puVar35 = *(undefined1 **)((long)pplVar5 + -0x60);
    puVar37 = *(undefined **)((long)pplVar5 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar44 = func_0x00f78af4();
  uVar33 = auVar44._8_8_;
  *(undefined1 **)((long)pplVar5 + -0x70) = (undefined1 *)((long)pplVar5 + -0x60);
  *(undefined **)((long)pplVar5 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar16 = *(long *)(auVar44._0_8_ + 0x10);
  if (lVar16 != 0) {
    pdVar26 = (dword *)0x0;
    *(undefined8 *)((long)pplVar5 + -0x90) = 0;
    *(dword **)((long)pplVar5 + -0x88) = pdVar15;
    *(dword **)((long)pplVar5 + -0x80) = pdVar31;
    *(dword **)((long)pplVar5 + -0x78) = pdVar23;
    *(undefined8 *)((long)pplVar5 + -0x70) = *(undefined8 *)((long)pplVar5 + -0x70);
    *(undefined8 *)((long)pplVar5 + -0x68) = *(undefined8 *)((long)pplVar5 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar18 = *(long *)(lVar16 + 0x70);
    if (lVar18 != 0) {
      lVar22 = lVar18;
      if (*(uint *)(lVar18 + 0x18) <= auVar44._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar22 = *(long *)(lVar16 + 0x70);
      }
      if (lVar22 != 0) {
        lVar18 = *(long *)(lVar18 + 0x10) + (long)(int)auVar44._8_4_ * 0x28;
        uVar38 = *(undefined8 *)(lVar18 + 0x28);
        uVar17 = *(undefined8 *)(lVar18 + 0x20);
        uVar1 = *(undefined4 *)(lVar18 + 0x42);
        *(undefined4 *)((long)pplVar5 + -0xd8) = uVar1;
        uVar4 = *(undefined2 *)(lVar18 + 0x46);
        *(undefined2 *)((long)pplVar5 + -0xd4) = uVar4;
        *(undefined8 *)((long)pplVar5 + -200) = uVar38;
        *(undefined8 *)((long)pplVar5 + -0xd0) = uVar17;
        *(undefined8 *)((long)pplVar5 + -0xb8) = uVar38;
        *(undefined8 *)((long)pplVar5 + -0xc0) = uVar17;
        *(undefined8 *)((long)pplVar5 + -0xb0) = 0;
        *(undefined8 *)((long)pplVar5 + -0xa8) = 0;
        *(undefined2 *)((long)pplVar5 + -0xa0) = 1;
        *(undefined4 *)((long)pplVar5 + -0x9e) = uVar1;
        *(undefined2 *)((long)pplVar5 + -0x9a) = uVar4;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar22,uVar33,(undefined1 *)((long)pplVar5 + -0xc0),uRam0000000003d3ddd0);
        pdVar15 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,uVar33);
        return pdVar15;
      }
    }
    auVar44 = func_0x00f78af4();
    pdVar24 = auVar44._8_8_;
    puVar11 = (undefined1 *)((long)pplVar5 + -0x110);
    *(undefined8 *)((long)pplVar5 + -0x110) = 0;
    *(long *)((long)pplVar5 + -0x108) = lVar18;
    *(long *)((long)pplVar5 + -0x100) = lVar16;
    *(undefined8 *)((long)pplVar5 + -0xf8) = uVar33;
    *(undefined1 **)((long)pplVar5 + -0xf0) = (undefined1 *)((long)pplVar5 + -0x70);
    *(undefined **)((long)pplVar5 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar35 = (undefined1 *)((long)pplVar5 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar16 = *(long *)(auVar44._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar44._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar44._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar15 = (dword *)0x0;
      }
      else {
        pdVar15 = *(dword **)(lVar16 + 0x40);
      }
      return pdVar15;
    }
    puVar37 = &Core_UI2_UIScreen__ForceExit;
    pdVar23 = (dword *)func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar15 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar44 = func_0x00f78af4();
  pdVar24 = auVar44._8_8_;
  *(undefined1 **)((long)pplVar5 + -0x80) = (undefined1 *)((long)pplVar5 + -0x70);
  *(undefined **)((long)pplVar5 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar16 = *(long *)(auVar44._0_8_ + 0x10);
  auVar44._8_8_ = pdVar15;
  auVar44._0_8_ = lVar16;
  if (lVar16 != 0) {
    pdVar26 = (dword *)0x0;
    puVar6 = (undefined1 *)((long)pplVar5 + -0x70);
    puVar35 = *(undefined1 **)((long)pplVar5 + -0x80);
    puVar37 = *(undefined **)((long)pplVar5 + -0x78);
    pdVar15 = pdVar31;
    goto code_r0x02f877a8;
  }
  auVar44 = func_0x00f78af4();
  *(undefined1 **)((long)pplVar5 + -0x90) = (undefined1 *)((long)pplVar5 + -0x80);
  *(undefined **)((long)pplVar5 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar16 = *(long *)(auVar44._0_8_ + 0x10);
  auVar44._8_8_ = auVar44._8_8_;
  auVar44._0_8_ = lVar16;
  if (lVar16 != 0) {
    puVar7 = (undefined1 *)((long)pplVar5 + -0x80);
    puVar35 = *(undefined1 **)((long)pplVar5 + -0x90);
    puVar37 = *(undefined **)((long)pplVar5 + -0x88);
    pdVar24 = pdVar26;
    while( true ) {
      puVar6 = puVar7 + -0x30;
      *(dword **)(puVar7 + -0x30) = pdVar32;
      *(dword **)(puVar7 + -0x28) = pdVar15;
      *(dword **)(puVar7 + -0x20) = pdVar31;
      *(dword **)(puVar7 + -0x18) = pdVar23;
      *(undefined1 **)(puVar7 + -0x10) = puVar35;
      *(undefined **)(puVar7 + -8) = puVar37;
      puVar35 = puVar7 + -0x10;
      puVar37 = &UNK_02f883d8;
      pdVar26 = pdVar24;
      pdVar23 = pdVar27;
      pdVar15 = pdVar24;
      pdVar32 = auVar44._0_8_;
code_r0x02f877a8:
      pdVar31 = auVar44._0_8_;
      puVar11 = puVar6 + -0x60;
      *(dword **)(puVar6 + -0x30) = pdVar32;
      *(long *)(puVar6 + -0x28) = auVar44._8_8_;
      *(dword **)(puVar6 + -0x20) = pdVar15;
      *(dword **)(puVar6 + -0x18) = pdVar23;
      *(undefined1 **)(puVar6 + -0x10) = puVar35;
      *(undefined **)(puVar6 + -8) = puVar37;
      puVar35 = puVar6 + -0x10;
      pdVar15 = pdVar31;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar15 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar30 = (uint)pdVar24;
      if (((int)uVar30 < 0) || ((int)*(long *)(pdVar31 + 0x14) <= (int)uVar30)) {
        return pdVar15;
      }
      lVar16 = *(long *)(pdVar31 + 0x1c);
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar16 + 0x10) + ((ulong)pdVar24 & 0xffffffff) * 0x28;
      pdVar32 = *(dword **)(lVar16 + 0x20);
      pdVar23 = *(dword **)(lVar16 + 0x28);
      *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar16 + 0x42);
      *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar16 + 0x46);
      if (pdVar23 == (dword *)0x0) {
        lVar16 = *(long *)(pdVar31 + 0x1c);
        if (lVar16 != 0) {
          *(dword **)(puVar6 + -0x58) = pdVar32;
          *(undefined8 *)(puVar6 + -0x50) = 0;
          *(undefined8 *)(puVar6 + -0x48) = 0;
          *(undefined8 *)(puVar6 + -0x40) = 0;
          *(undefined2 *)(puVar6 + -0x38) = 0;
          *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
          *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
          pdVar15 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar16,pdVar24,puVar6 + -0x58,uRam0000000003d3ddd0);
          return pdVar15;
        }
        break;
      }
      puVar37 = &UNK_02f87848;
      pdVar15 = pdVar23;
code_r0x02f882d8:
      *(dword **)(puVar11 + -0x20) = pdVar31;
      *(dword **)(puVar11 + -0x18) = pdVar24;
      *(undefined1 **)(puVar11 + -0x10) = puVar35;
      *(undefined **)(puVar11 + -8) = puVar37;
      (**(code **)(*(long *)pdVar23 + 0x218))(pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x220));
      if (*(long *)(pdVar23 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar23 + 10),0);
        pdVar23[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar23,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar15 = (dword *)(**(code **)(*(long *)pdVar23 + 0x228))
                                     (pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x230));
        return pdVar15;
      }
      func_0x00f78af4();
      puVar7 = puVar11 + -0x40;
      *(dword **)(puVar11 + -0x40) = pdVar31;
      *(dword **)(puVar11 + -0x38) = pdVar23;
      *(undefined1 **)(puVar11 + -0x30) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar35 = puVar11 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar16 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar33 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar33,lVar16);
        pdVar15 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar15;
      }
      puVar37 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar44 = func_0x00f78af4();
      pdVar24 = pdVar26;
    }
    lVar16 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar32;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar31;
    *(dword **)(puVar6 + -0x78) = pdVar24;
    *(undefined1 **)(puVar6 + -0x70) = puVar35;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar33 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar33,0);
    if (0 < *(int *)(lVar16 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar16,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar16 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar16);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
    *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar15 = (dword *)(*pcRam0000000003ec05a0)(uVar33);
    return pdVar15;
  }
  auVar44 = func_0x00f78af4();
  *(undefined1 **)((long)pplVar5 + -0xa0) = (undefined1 *)((long)pplVar5 + -0x90);
  *(undefined **)((long)pplVar5 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar16 = *(long *)(auVar44._0_8_ + 0x10);
  if (lVar16 == 0) {
    auVar44 = func_0x00f78af4();
    *(undefined1 **)((long)pplVar5 + -0xb0) = (undefined1 *)((long)pplVar5 + -0xa0);
    *(undefined **)((long)pplVar5 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar16 = *(long *)(auVar44._0_8_ + 0x10);
    auVar45._8_8_ = auVar44._8_8_;
    auVar45._0_8_ = lVar16;
    if (lVar16 != 0) {
      pdVar27 = (dword *)0x0;
      puVar8 = (undefined1 *)((long)pplVar5 + -0xa0);
      puVar35 = *(undefined1 **)((long)pplVar5 + -0xb0);
      puVar37 = *(undefined **)((long)pplVar5 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar44 = func_0x00f78af4();
    *(undefined1 **)((long)pplVar5 + -0xc0) = (undefined1 *)((long)pplVar5 + -0xb0);
    *(undefined **)((long)pplVar5 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar16 = *(long *)(auVar44._0_8_ + 0x10);
    auVar46._8_8_ = auVar44._8_8_;
    auVar46._0_8_ = lVar16;
    if (lVar16 == 0) {
      auVar44 = func_0x00f78af4();
      *(undefined1 **)((long)pplVar5 + -0xd0) = (undefined1 *)((long)pplVar5 + -0xc0);
      *(undefined **)((long)pplVar5 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar16 = *(long *)(auVar44._0_8_ + 0x10);
      auVar47._8_8_ = auVar44._8_8_;
      auVar47._0_8_ = lVar16;
      if (lVar16 == 0) {
        pdVar32 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)pplVar5 + -0x100) = 0;
        *(dword **)((long)pplVar5 + -0xf8) = pdVar15;
        *(dword **)((long)pplVar5 + -0xf0) = pdVar31;
        *(dword **)((long)pplVar5 + -0xe8) = pdVar23;
        *(undefined1 **)((long)pplVar5 + -0xe0) = (undefined1 *)((long)pplVar5 + -0xd0);
        *(undefined **)((long)pplVar5 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar33 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar33,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar32 + 0xc) = uVar33;
        return pdVar32;
      }
      puVar10 = (undefined1 *)((long)pplVar5 + -0xc0);
      puVar35 = *(undefined1 **)((long)pplVar5 + -0xd0);
      puVar37 = *(undefined **)((long)pplVar5 + -200);
      goto code_r0x02f88674;
    }
    puVar9 = (undefined1 *)((long)pplVar5 + -0xb0);
    puVar35 = *(undefined1 **)((long)pplVar5 + -0xc0);
    puVar37 = *(undefined **)((long)pplVar5 + -0xb8);
    pdVar27 = pdVar26;
    pdVar32 = pdVar15;
  }
  else {
    pdVar27 = (dword *)0x0;
    puVar8 = (undefined1 *)((long)pplVar5 + -0xc0);
    *(undefined8 *)((long)pplVar5 + -0xc0) = 0;
    *(dword **)((long)pplVar5 + -0xb8) = pdVar15;
    *(dword **)((long)pplVar5 + -0xb0) = pdVar31;
    *(dword **)((long)pplVar5 + -0xa8) = pdVar23;
    *(undefined8 *)((long)pplVar5 + -0xa0) = *(undefined8 *)((long)pplVar5 + -0xa0);
    *(undefined8 *)((long)pplVar5 + -0x98) = *(undefined8 *)((long)pplVar5 + -0x98);
    puVar35 = (undefined1 *)((long)pplVar5 + -0xa0);
    pdVar15 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar30 = auVar44._8_4_;
    if (((int)uVar30 < 0) || (*(int *)(lVar16 + 0x50) <= (int)uVar30)) {
      return (dword *)0x0;
    }
    lVar16 = *(long *)(lVar16 + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(lVar16 + 0x10) + ((ulong)auVar44._8_8_ & 0xffffffff) * 0x28;
      lVar16 = *(long *)(lVar18 + 0x28);
      cVar2 = *(char *)(lVar18 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar18 + 0x30),0);
      if (iVar14 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar37 = &Core_UI2_UIManager__GetLayerState;
    auVar45 = func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar23 = auVar44._8_8_;
code_r0x02f884dc:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = 0;
    *(dword **)(puVar8 + -0x28) = pdVar15;
    *(dword **)(puVar8 + -0x20) = pdVar31;
    *(dword **)(puVar8 + -0x18) = pdVar23;
    *(undefined1 **)(puVar8 + -0x10) = puVar35;
    *(undefined **)(puVar8 + -8) = puVar37;
    puVar35 = puVar8 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar16 = *(long *)(auVar45._0_8_ + 0x70);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= auVar45._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar45._8_4_ * 0x28 + 0x28);
      if (lVar16 == 0) {
        pdVar15 = &MACH_HEADER.cputype;
      }
      else {
        pdVar15 = (dword *)(ulong)*(uint *)(lVar16 + 0x4c);
      }
      return pdVar15;
    }
    puVar37 = &Core_UI2_UIManager__EnableInput;
    auVar46 = func_0x00f78af4();
    pdVar31 = (dword *)0x0;
    pdVar23 = auVar45._8_8_;
    pdVar32 = (dword *)0x3ebc000;
  }
  pdVar24 = auVar46._8_8_;
  pdVar15 = auVar46._0_8_;
  puVar10 = puVar9 + -0x40;
  *(undefined8 *)(puVar9 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar9 + -0x30) = 0;
  *(dword **)(puVar9 + -0x28) = pdVar32;
  *(dword **)(puVar9 + -0x20) = pdVar31;
  *(dword **)(puVar9 + -0x18) = pdVar23;
  *(undefined1 **)(puVar9 + -0x10) = puVar35;
  *(undefined **)(puVar9 + -8) = puVar37;
  puVar35 = puVar9 + -0x10;
  pdVar32 = (dword *)0x3ebc000;
  pdVar26 = pdVar27;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar15 + 0x1a) != 0) {
    pdVar26 = (dword *)(ulong)((uint)pdVar27 ^ 1);
    pdVar31 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar15 + 0x1a),pdVar24,pdVar26,0);
    lVar16 = *(long *)(pdVar15 + 0x1c);
    pdVar32 = (dword *)0x0;
    if (lVar16 != 0) {
      uVar30 = auVar46._8_4_;
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        pdVar31 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) ||
         (pdVar32 = *(dword **)(pdVar15 + 0xc), pdVar32 == (dword *)0x0)) {
        return pdVar31;
      }
      lVar16 = *(long *)(pdVar15 + 0x1c);
      pdVar15 = (dword *)0x0;
      if (lVar16 != 0) {
        if (*(uint *)(lVar16 + 0x18) <= uVar30) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar25 = *(long **)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
        *(undefined8 *)(puVar9 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar9 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar9 + -0x40) = *(undefined8 *)(puVar9 + -0x40);
        *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)(puVar9 + -0x38);
        *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(puVar9 + -0x30);
        *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)(puVar9 + -0x28);
        *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x20);
        *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        *(dword **)(puVar9 + -0x68) = pdVar32;
        lVar16 = *(long *)(pdVar32 + 0x1a);
        if (lVar16 == 0) {
          puVar35 = puVar9 + -0x68;
          lVar18 = 1;
        }
        else {
          lVar18 = *(long *)(lVar16 + 0x18);
          if (lVar18 == 0) {
            return pdVar32;
          }
          puVar35 = (undefined1 *)(lVar16 + 0x20);
        }
        lVar16 = 0;
        do {
          lVar22 = *(long *)(puVar35 + lVar16 * 8);
          pcVar34 = *(code **)(lVar22 + 0x10);
          plVar19 = *(long **)(lVar22 + 0x20);
          lVar22 = *(long *)(lVar22 + 0x28);
          if (*(short *)(lVar22 + 0x48) == -1) {
            func_0x00f78ad8(lVar22);
          }
          iVar14 = func_0x00f78a4c(lVar22);
          bVar12 = *(char *)(lVar22 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar12) {
              if (plVar19 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar15 = (dword *)(*pcVar34)(plVar25,pdVar24,pdVar27,lVar22);
              }
              else {
                if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar19 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar32 + 6) == 0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar22);
                iVar13 = func_0x00f78ec0(lVar22);
                if (iVar14 == 0) {
                  uVar3 = *(ushort *)(lVar22 + 0x48);
                  if (iVar13 == 0) {
                    lVar22 = *plVar19 + (ulong)uVar3 * 0x10;
                    pdVar15 = (dword *)(**(code **)(lVar22 + 0x138))
                                                 (plVar19,plVar25,pdVar24,pdVar27,
                                                  *(undefined8 *)(lVar22 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar22 = func_0x00f78a48(lVar22);
                  lVar28 = *plVar19;
                  uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar21 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == lVar22) {
                        puVar20 = (undefined8 *)
                                  (lVar28 + (long)(int)(*piVar29 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar29 = piVar29 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  puVar20 = (undefined8 *)func_0x00fac1f0(plVar19,lVar22,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar34 = (code *)*puVar20;
                  puVar20 = (undefined8 *)puVar20[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar33 = *(undefined8 *)
                              (*plVar19 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar28 = *plVar19;
                    uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                    if (uVar21 != 0) {
                      piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == *(long *)(lVar22 + 0x18)) {
                          lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar22 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar29 = piVar29 + 4;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    lVar28 = func_0x00fac1f0(plVar19);
code_r0x01e71d4c:
                    uVar33 = *(undefined8 *)(lVar28 + 8);
                  }
                  puVar20 = (undefined8 *)func_0x00f78acc(uVar33,lVar22);
                  pcVar34 = (code *)*puVar20;
                }
                pdVar15 = (dword *)(*pcVar34)(plVar19,plVar25,pdVar24,pdVar27,puVar20);
              }
            }
            else {
              if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar32 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar22);
              iVar13 = func_0x00f78ec0(lVar22);
              if (iVar14 == 0) {
                uVar3 = *(ushort *)(lVar22 + 0x48);
                if (iVar13 == 0) {
                  lVar22 = *plVar25 + (ulong)uVar3 * 0x10;
                  pdVar15 = (dword *)(**(code **)(lVar22 + 0x138))
                                               (plVar25,pdVar24,pdVar27,
                                                *(undefined8 *)(lVar22 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar22 = func_0x00f78a48(lVar22);
                lVar28 = *plVar25;
                uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar21 != 0) {
                  piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == lVar22) {
                      puVar20 = (undefined8 *)
                                (lVar28 + (long)(int)(*piVar29 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar29 = piVar29 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar20 = (undefined8 *)func_0x00fac1f0(plVar25,lVar22,(ulong)uVar3);
code_r0x01e71d00:
                pcVar34 = (code *)*puVar20;
                puVar20 = (undefined8 *)puVar20[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar33 = *(undefined8 *)
                            (*plVar25 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar28 = *plVar25;
                  uVar21 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar21 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == *(long *)(lVar22 + 0x18)) {
                        lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar22 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar29 = piVar29 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  lVar28 = func_0x00fac1f0(plVar25);
code_r0x01e71cd8:
                  uVar33 = *(undefined8 *)(lVar28 + 8);
                }
                puVar20 = (undefined8 *)func_0x00f78acc(uVar33,lVar22);
                pcVar34 = (code *)*puVar20;
              }
              pdVar15 = (dword *)(*pcVar34)(plVar25,pdVar24,pdVar27,puVar20);
            }
          }
          else {
            if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar15 = (dword *)(*pcVar34)(plVar19,plVar25,pdVar24,pdVar27,lVar22);
          }
code_r0x01e71bd0:
          lVar16 = lVar16 + 1;
          if (lVar16 == lVar18) {
            return pdVar15;
          }
        } while( true );
      }
    }
  }
  puVar37 = &Core_UI2_UIManager__SetScreenVisible;
  auVar47 = func_0x00f78af4();
  pdVar23 = pdVar27;
  pdVar31 = pdVar24;
code_r0x02f88674:
  pdVar27 = auVar47._0_8_;
  *(dword **)(puVar10 + -0x30) = pdVar32;
  *(dword **)(puVar10 + -0x28) = pdVar15;
  *(dword **)(puVar10 + -0x20) = pdVar31;
  *(dword **)(puVar10 + -0x18) = pdVar23;
  *(undefined1 **)(puVar10 + -0x10) = puVar35;
  *(undefined **)(puVar10 + -8) = puVar37;
  pdVar15 = pdVar27;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar15 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar16 = *(long *)(pdVar27 + 0x1c);
  if (lVar16 != 0) {
    uVar30 = auVar47._8_4_;
    if (*(uint *)(lVar16 + 0x18) <= uVar30) {
      pdVar15 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) {
      return pdVar15;
    }
    lVar16 = *(long *)(pdVar27 + 0x1c);
    if (lVar16 != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
      if ((lVar16 != 0) && (plVar25 = *(long **)(lVar16 + 0x28), plVar25 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar15 = (dword *)(**(code **)(*plVar25 + 0x178))
                                     (plVar25,pdVar26,*(undefined8 *)(*plVar25 + 0x180));
        return pdVar15;
      }
    }
  }
  auVar44 = func_0x00f78af4();
  uVar33 = auVar44._0_8_;
  *(long *)(puVar10 + -0x50) = auVar47._8_8_;
  *(dword **)(puVar10 + -0x48) = pdVar26;
  *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
  *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar10 + -0x68) = 0;
  *(undefined8 *)(puVar10 + -0x70) = 0;
  *(undefined8 *)(puVar10 + -0x58) = 0;
  *(undefined8 *)(puVar10 + -0x60) = 0;
  pdVar15 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar33,auVar44._8_8_,puVar10 + -0x70);
  if ((int)pdVar15 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar33,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
    *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
    *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
    *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
    *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
    pdVar15 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar33,puVar10 + -0x90,1);
  }
  return pdVar15;
}



// ============================================================
// RVA: 0x15962b8 | Atlas.Contexts.FrontendContextCharacterRankState.CharacterSelectBackPressed
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

dword * Atlas_Contexts_FrontendContextCharacterRankState__CharacterSelectBackPressed
                  (long param_1,undefined8 param_2,dword *param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  dword ****ppppdVar4;
  dword **ppdVar5;
  dword **ppdVar6;
  dword **ppdVar7;
  dword ***pppdVar8;
  dword ***pppdVar9;
  dword ***pppdVar10;
  bool bVar11;
  int iVar12;
  dword *pdVar14;
  undefined8 uVar15;
  long lVar16;
  dword *pdVar17;
  long lVar18;
  dword *pdVar19;
  undefined8 *puVar20;
  ulong uVar21;
  int iVar13;
  dword *pdVar22;
  long *extraout_x1;
  long *plVar23;
  dword *pdVar24;
  dword *pdVar25;
  long lVar26;
  int *piVar27;
  uint uVar28;
  long lVar29;
  dword *pdVar30;
  undefined8 unaff_x24;
  dword *unaff_x25;
  code *pcVar31;
  dword *unaff_x26;
  dword *unaff_x27;
  dword *unaff_x28;
  undefined1 *puVar32;
  dword **ppdVar33;
  dword ***pppdVar34;
  undefined *puVar35;
  dword **ppdVar36;
  undefined4 extraout_s0;
  dword *pdVar37;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  dword *apdStack_188 [5];
  undefined8 uStack_150;
  dword *pdStack_140;
  long lStack_138;
  dword *pdStack_130;
  dword *pdStack_128;
  dword *pdStack_120;
  dword *pdStack_118;
  dword ****ppppdStack_110;
  undefined *puStack_108;
  dword ***pppdStack_100;
  undefined *puStack_f8;
  dword ***pppdStack_f0;
  dword *pdStack_e8;
  dword *pdStack_e0;
  dword *pdStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  dword *pdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  dword *pdStack_a0;
  dword *pdStack_98;
  dword *pdStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5182 & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5182 = 1;
  }
  uVar15 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
  lVar29 = *(long *)(param_1 + 0x78);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (lVar29 != 0) {
    /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar29,uVar15,0,0,uRam0000000003d2a5b0);
    return (dword *)((long)&MACH_HEADER.magic + 1);
  }
  lVar16 = func_0x00f78af4();
  puStack_38 = &Atlas_Contexts_FrontendContextCharacterRankState__ShowRankRewardScreen;
  pdVar19 = (dword *)0x3d26c00;
  lVar29 = 0x3d40640;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5183 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d56e08);
    func_0x00f78a20(0x3d40640);
    func_0x00f78a20(0x3d26c00);
    bRam0000000003eb5183 = 1;
  }
  pdVar17 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterRewardScreen.TransitionData_TypeInfo*/ uRam0000000003d26c00);
  /*Atlas.UI.Screens.CharacterRewardScreen.TransitionData$$.ctor*/ func_0x015477d8(pdVar17,0);
  lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar16,uRam0000000003d40640);
  if ((lVar18 == 0) || (pdVar17 == (dword *)0x0)) {
code_r0x015964cc:
    auVar38 = func_0x00f78af4();
    pdVar25 = auVar38._0_8_;
    puStack_78 = &Atlas_Contexts_FrontendContextCharacterRankState__OnLoadoutTypeSelected;
    pdVar30 = pdVar25;
    pdVar22 = param_3;
    pdStack_a0 = pdVar19;
    pdStack_98 = (dword *)lVar29;
    pdStack_90 = pdVar17;
    puStack_88 = (undefined *)lVar16;
    ppuStack_80 = &puStack_40;
    if ((bRam0000000003eb5184 & 1) == 0) {
      pdVar30 = (dword *)func_0x00f78a20(0x3d40640);
      bRam0000000003eb5184 = 1;
    }
    if (auVar38._8_4_ == 0) {
      pdVar30 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(pdVar25,uRam0000000003d40640);
      if (pdVar30 == (dword *)0x0) {
        pdVar19 = (dword *)func_0x00f78af4();
        uStack_d0 = (dword **)0x3eb5000;
        pdStack_a8 = (dword *)&Atlas_Contexts_FrontendContextCharacterRankState___ctor;
        pdStack_b8 = param_3;
        pdStack_b0 = (dword *)&ppuStack_80;
        if ((bRam0000000003eb5185 & 1) == 0) {
          puStack_c8 = (undefined *)auVar38._8_8_;
          pdStack_c0 = pdVar25;
          func_0x00f78a20(0x3d40638);
          auVar38._8_8_ = puStack_c8;
          auVar38._0_8_ = pdStack_c0;
          bRam0000000003eb5185 = 1;
        }
        puStack_c8 = auVar38._8_8_;
        pdStack_c0 = auVar38._0_8_;
        if (pdVar19 == (dword *)0x0) {
          auVar38 = func_0x00f78af4(0,uRam0000000003d40638);
          pdVar19 = auVar38._0_8_;
          *(undefined8 *)(pdVar19 + 4) = *(undefined8 *)pdVar22;
          *(long *)(pdVar19 + 8) = auVar38._8_8_;
          *(dword **)(pdVar19 + 10) = pdVar22;
          return pdVar19;
        }
        return pdVar19;
      }
      *(dword **)(pdVar30 + 4) = param_3;
    }
    return pdVar30;
  }
  pdVar30 = *(dword **)(lVar18 + 0x18);
  pdVar19 = *(dword **)(lVar18 + 0x10);
  pdVar25 = *(dword **)(lVar18 + 0x28);
  pdVar22 = *(dword **)(lVar18 + 0x20);
  pdVar24 = *(dword **)(lVar18 + 0x30);
  pdVar37 = *(dword **)(lVar18 + 0x48);
  pdVar14 = *(dword **)(lVar18 + 0x40);
  *(dword **)(pdVar17 + 0xe) = *(dword **)(lVar18 + 0x38);
  *(dword **)(pdVar17 + 0xc) = pdVar24;
  *(dword **)(pdVar17 + 0x12) = pdVar37;
  *(dword **)(pdVar17 + 0x10) = pdVar14;
  *(dword **)(pdVar17 + 6) = pdVar30;
  *(dword **)(pdVar17 + 4) = pdVar19;
  *(dword **)(pdVar17 + 10) = pdVar25;
  *(dword **)(pdVar17 + 8) = pdVar22;
  lVar29 = *(long *)(lVar16 + 0x88);
  pdVar19 = (dword *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
  param_3 = pdRam0000000003d56e08;
  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(pdVar19,lVar16,pdRam0000000003d56e08,0);
  if (lVar29 == 0) goto code_r0x015964cc;
  param_3 = pdVar19;
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar29,0,pdVar19,0);
  pdVar30 = *(dword **)(lVar16 + 0x80);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar16 = 0;
  if (pdVar30 == (dword *)0x0) goto code_r0x015964cc;
  pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0);
  pdVar25 = (dword *)0x0;
  uVar15 = 0;
  pdVar19 = (dword *)0x0;
  pdVar24 = pdVar17;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  puStack_78 = (undefined *)0x0;
  pdVar14 = *(dword **)(pdVar30 + 4);
  pdStack_90 = (dword *)&puStack_40;
  if (pdVar14 != (dword *)0x0) {
    pdVar25 = (dword *)0x0;
    uVar15 = 0;
    puStack_88 = &UNK_01470820;
    pdVar37 = pdVar22;
    pdVar24 = pdVar17;
code_r0x02f87f38:
    pdStack_b8 = (dword *)0x3eb4000;
    pdStack_b0 = (dword *)0x0;
    pdStack_a8 = pdVar17;
    pdStack_a0 = pdVar30;
    pdStack_98 = pdVar22;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    uStack_150 = 0x3ebc000;
    pdStack_118 = (dword *)&UNK_02f87f9c;
    pdStack_140 = pdVar24;
    lStack_138 = uVar15;
    pdStack_130 = pdVar14;
    pdStack_128 = pdVar25;
    pdStack_120 = (dword *)&pdStack_90;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar29 = *(long *)(pdVar14 + 0x1e);
    if (lVar29 != 0) {
      iVar13 = *(int *)(lVar29 + 0x18);
      if (iVar13 < 1) {
        return (dword *)0x0;
      }
      iVar12 = 1;
      pdVar19 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar29 + 0x18) <= iVar12 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar29 = *(long *)(*(long *)(lVar29 + 0x10) + (long)(int)(iVar12 - 1U) * 0x20 + 0x20);
        if (lVar29 == 0) break;
        uVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar29,pdVar37,5,0);
        if ((uVar21 & 1) != 0) {
          return pdVar19;
        }
        pdVar19 = (dword *)(ulong)(iVar12 < iVar13);
        if (iVar13 == iVar12) {
          return pdVar19;
        }
        lVar29 = *(long *)(pdVar14 + 0x1e);
        iVar12 = iVar12 + 1;
      } while (lVar29 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar38 = func_0x00f78af4();
  pdVar37 = auVar38._8_8_;
  pdStack_a0 = (dword *)&pdStack_90;
  puStack_88 = &Atlas_UI_AtlasUIManager__ShowScreen;
  pdVar14 = *(dword **)(auVar38._0_8_ + 0x10);
  if (pdVar14 != (dword *)0x0) {
    puStack_88 = &Atlas_UI_AtlasUIManager__ShowScreen;
    goto code_r0x02f87f38;
  }
  auVar38 = func_0x00f78af4();
  uVar15 = auVar38._8_8_;
  ppdVar36 = &pdStack_a0;
  pdStack_98 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
  lVar29 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar29 != 0) {
    pdVar25 = (dword *)0x0;
    pdStack_c0 = (dword *)0x0;
    pdStack_98 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
    pdStack_b8 = pdVar17;
    pdStack_b0 = pdVar30;
    pdStack_a8 = pdVar22;
    pdStack_a0 = (dword *)&pdStack_90;
    if ((bRam0000000003ebc64b & 1) == 0) {
      pdStack_a0 = (dword *)&pdStack_90;
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar16 = *(long *)(lVar29 + 0x70);
    if (lVar16 != 0) {
      lVar18 = lVar16;
      if (*(uint *)(lVar16 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar18 = *(long *)(lVar29 + 0x70);
      }
      if (lVar18 != 0) {
        lVar16 = *(long *)(lVar16 + 0x10) + (long)(int)auVar38._8_4_ * 0x28;
        puStack_f8 = *(undefined **)(lVar16 + 0x28);
        pppdStack_100 = *(dword ****)(lVar16 + 0x20);
        puStack_108 = (undefined *)CONCAT26(puStack_108._6_2_,*(undefined6 *)(lVar16 + 0x42));
        pdStack_e0 = (dword *)0x0;
        pdStack_d8 = (dword *)0x0;
        uStack_d0 = (dword **)
                    CONCAT26(*(undefined2 *)(lVar16 + 0x46),
                             CONCAT42(*(undefined4 *)(lVar16 + 0x42),1));
        pppdStack_f0 = pppdStack_100;
        pdStack_e8 = (dword *)puStack_f8;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar18,uVar15,&pppdStack_f0,uRam0000000003d3ddd0);
        pdVar19 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar29,uVar15);
        return pdVar19;
      }
    }
    auVar38 = func_0x00f78af4();
    pdVar14 = auVar38._8_8_;
    ppdVar6 = &stack0xfffffffffffffec0;
    pdStack_140 = (dword *)0x0;
    pdStack_118 = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
    puVar32 = (undefined1 *)&pdStack_120;
    lStack_138 = lVar16;
    pdStack_130 = (dword *)lVar29;
    pdStack_128 = (dword *)uVar15;
    pdStack_120 = (dword *)&pdStack_a0;
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar29 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar29 != 0) {
      if (*(uint *)(lVar29 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar29 = *(long *)(*(long *)(lVar29 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar29 == 0) {
        pdVar19 = (dword *)0x0;
      }
      else {
        pdVar19 = *(dword **)(lVar29 + 0x40);
      }
      return pdVar19;
    }
    puVar35 = &Core_UI2_UIScreen__ForceExit;
    pdVar22 = (dword *)func_0x00f78af4();
    pdVar30 = (dword *)0x0;
    pdVar17 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar38 = func_0x00f78af4();
  pdVar14 = auVar38._8_8_;
  ppdVar33 = &pdStack_b0;
  pdStack_b0 = (dword *)&pdStack_a0;
  pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayer;
  lVar29 = *(long *)(auVar38._0_8_ + 0x10);
  auVar39._8_8_ = pdVar17;
  auVar39._0_8_ = lVar29;
  if (lVar29 != 0) {
    pdVar25 = (dword *)0x0;
    ppdVar5 = &pdStack_a0;
    puVar35 = &Atlas_UI_AtlasUIManager__ClearLayer;
    pdVar17 = pdVar30;
    goto code_r0x02f877a8;
  }
  auVar38 = func_0x00f78af4();
  pdStack_c0 = (dword *)&pdStack_b0;
  pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar29 = *(long *)(auVar38._0_8_ + 0x10);
  auVar39._8_8_ = auVar38._8_8_;
  auVar39._0_8_ = lVar29;
  if (lVar29 != 0) {
    ppdVar7 = &pdStack_b0;
    puVar35 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
    pdVar14 = pdVar25;
    while( true ) {
      ppdVar5 = (dword **)((long)ppdVar7 + -0x30);
      *(dword **)((long)ppdVar7 + -0x30) = pdVar19;
      *(dword **)((long)ppdVar7 + -0x28) = pdVar17;
      *(dword **)((long)ppdVar7 + -0x20) = pdVar30;
      *(dword **)((long)ppdVar7 + -0x18) = pdVar22;
      *(dword ***)((long)ppdVar7 + -0x10) = ppdVar33;
      *(undefined **)((long)ppdVar7 + -8) = puVar35;
      ppdVar36 = (dword **)((long)ppdVar7 + -0x10);
      puVar35 = &UNK_02f883d8;
      pdVar25 = pdVar14;
      pdVar22 = pdVar24;
      pdVar17 = pdVar14;
      pdVar19 = auVar39._0_8_;
code_r0x02f877a8:
      pdVar30 = auVar39._0_8_;
      ppdVar6 = (dword **)((long)ppdVar5 + -0x60);
      *(dword **)((long)ppdVar5 + -0x30) = pdVar19;
      *(long *)((long)ppdVar5 + -0x28) = auVar39._8_8_;
      *(dword **)((long)ppdVar5 + -0x20) = pdVar17;
      *(dword **)((long)ppdVar5 + -0x18) = pdVar22;
      *(dword ***)((long)ppdVar5 + -0x10) = ppdVar36;
      *(undefined **)((long)ppdVar5 + -8) = puVar35;
      puVar32 = (undefined1 *)((long)ppdVar5 + -0x10);
      pdVar17 = pdVar30;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar17 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar28 = (uint)pdVar14;
      if (((int)uVar28 < 0) || ((int)pdVar30[0x14] <= (int)uVar28)) {
        return pdVar17;
      }
      pdVar17 = *(dword **)(pdVar30 + 0x1c);
      if (pdVar17 == (dword *)0x0) break;
      if (pdVar17[6] <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar29 = *(long *)(pdVar17 + 4) + ((ulong)pdVar14 & 0xffffffff) * 0x28;
      pdVar19 = *(dword **)(lVar29 + 0x20);
      pdVar22 = *(dword **)(lVar29 + 0x28);
      *(undefined4 *)((long)ppdVar5 + -0x60) = *(undefined4 *)(lVar29 + 0x42);
      *(undefined2 *)((long)ppdVar5 + -0x5c) = *(undefined2 *)(lVar29 + 0x46);
      if (pdVar22 == (dword *)0x0) {
        pdVar17 = *(dword **)(pdVar30 + 0x1c);
        if (pdVar17 != (dword *)0x0) {
          *(dword **)((long)ppdVar5 + -0x58) = pdVar19;
          *(undefined8 *)((long)ppdVar5 + -0x50) = 0;
          *(undefined8 *)((long)ppdVar5 + -0x48) = 0;
          *(undefined8 *)((long)ppdVar5 + -0x40) = 0;
          *(undefined2 *)((long)ppdVar5 + -0x38) = 0;
          *(undefined4 *)((long)ppdVar5 + -0x36) = *(undefined4 *)((long)ppdVar5 + -0x60);
          *(undefined2 *)((long)ppdVar5 + -0x32) = *(undefined2 *)((long)ppdVar5 + -0x5c);
          pdVar19 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(pdVar17,pdVar14,(undefined1 *)((long)ppdVar5 + -0x58),
                                             uRam0000000003d3ddd0);
          return pdVar19;
        }
        break;
      }
      puVar35 = &UNK_02f87848;
      pdVar17 = pdVar22;
code_r0x02f882d8:
      *(dword **)((long)ppdVar6 + -0x20) = pdVar30;
      *(dword **)((long)ppdVar6 + -0x18) = pdVar14;
      *(undefined1 **)((long)ppdVar6 + -0x10) = puVar32;
      *(undefined **)((long)ppdVar6 + -8) = puVar35;
      (**(code **)(*(dword **)pdVar22 + 0x86))(pdVar22,*(undefined8 *)(*(dword **)pdVar22 + 0x88));
      if (*(dword **)(pdVar22 + 10) != (dword *)0x0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(dword **)(pdVar22 + 10),0);
        pdVar22[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar22,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar19 = (dword *)(**(code **)(*(dword **)pdVar22 + 0x8a))
                                     (pdVar22,*(undefined8 *)(*(dword **)pdVar22 + 0x8c));
        return pdVar19;
      }
      func_0x00f78af4();
      ppdVar7 = (dword **)((long)ppdVar6 + -0x40);
      *(dword **)((long)ppdVar6 + -0x40) = pdVar30;
      *(dword **)((long)ppdVar6 + -0x38) = pdVar22;
      *(undefined1 **)((long)ppdVar6 + -0x30) = (undefined1 *)((long)ppdVar6 + -0x10);
      *(undefined **)((long)ppdVar6 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      ppdVar33 = (dword **)((long)ppdVar6 + -0x30);
      if (extraout_x1 != (long *)0x0) {
        lVar29 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar15 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar15,lVar29);
        pdVar19 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar19;
      }
      puVar35 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar39 = func_0x00f78af4();
      pdVar14 = pdVar25;
    }
    lVar29 = func_0x00f78af4();
    *(undefined8 *)((long)ppdVar5 + -0xa0) = unaff_d9;
    *(undefined8 *)((long)ppdVar5 + -0x98) = unaff_d8;
    *(dword **)((long)ppdVar5 + -0x90) = pdVar19;
    *(undefined8 *)((long)ppdVar5 + -0x88) = 0;
    *(dword **)((long)ppdVar5 + -0x80) = pdVar30;
    *(dword **)((long)ppdVar5 + -0x78) = pdVar14;
    *(undefined1 **)((long)ppdVar5 + -0x70) = puVar32;
    *(undefined **)((long)ppdVar5 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar15,0);
    if (0 < *(int *)(lVar29 + 0x50)) {
      iVar13 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar29,iVar13);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar29,iVar13);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(lVar29 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar29);
    *(undefined8 *)((long)ppdVar5 + -0x80) = *(undefined8 *)((long)ppdVar5 + -0x80);
    *(undefined8 *)((long)ppdVar5 + -0x78) = *(undefined8 *)((long)ppdVar5 + -0x78);
    *(undefined8 *)((long)ppdVar5 + -0x70) = *(undefined8 *)((long)ppdVar5 + -0x70);
    *(undefined8 *)((long)ppdVar5 + -0x68) = *(undefined8 *)((long)ppdVar5 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar19 = (dword *)(*pcRam0000000003ec05a0)(uVar15);
    return pdVar19;
  }
  auVar38 = func_0x00f78af4();
  puStack_c8 = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar29 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar29 == 0) {
    uStack_d0 = &pdStack_c0;
    auVar38 = func_0x00f78af4();
    pppdVar8 = (dword ***)&pdStack_e0;
    pdStack_d8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
    lVar29 = *(long *)(auVar38._0_8_ + 0x10);
    auVar40._8_8_ = auVar38._8_8_;
    auVar40._0_8_ = lVar29;
    if (lVar29 != 0) {
      pdVar24 = (dword *)0x0;
      pppdVar8 = (dword ***)&uStack_d0;
      ppdVar36 = (dword **)&Atlas_UI_AtlasUIManager__GetLayerState;
      pdStack_e0 = (dword *)&uStack_d0;
      goto code_r0x02f884dc;
    }
    pdStack_e0 = (dword *)&uStack_d0;
    auVar38 = func_0x00f78af4();
    pppdVar34 = (dword ***)&pppdStack_f0;
    pdStack_e8 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    lVar29 = *(long *)(auVar38._0_8_ + 0x10);
    auVar41._8_8_ = auVar38._8_8_;
    auVar41._0_8_ = lVar29;
    if (lVar29 == 0) {
      pppdStack_f0 = (dword ***)&pdStack_e0;
      auVar38 = func_0x00f78af4();
      ppppdStack_110 = &pppdStack_100;
      puStack_f8 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar29 = *(long *)(auVar38._0_8_ + 0x10);
      auVar42._8_8_ = auVar38._8_8_;
      auVar42._0_8_ = lVar29;
      if (lVar29 == 0) {
        pppdStack_100 = (dword ***)&pppdStack_f0;
        pdVar19 = (dword *)func_0x00f78af4();
        pdStack_130 = (dword *)0x0;
        puStack_108 = &Atlas_UI_AtlasUIManager___ctor;
        pdStack_128 = pdVar17;
        pdStack_120 = pdVar30;
        pdStack_118 = pdVar22;
        ppppdVar4 = &pppdStack_100;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
          ppppdVar4 = ppppdStack_110;
        }
        ppppdStack_110 = ppppdVar4;
        uVar15 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar15,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar19 + 0xc) = uVar15;
        return pdVar19;
      }
      pppdVar10 = (dword ***)&pppdStack_f0;
      ppdVar36 = (dword **)&Atlas_UI_AtlasUIManager__SetScreenVisible;
      pppdStack_100 = (dword ***)&pppdStack_f0;
      goto code_r0x02f88674;
    }
    pppdVar9 = (dword ***)&pdStack_e0;
    pdVar19 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    pdVar24 = pdVar25;
    pdVar25 = pdVar17;
    pppdStack_f0 = (dword ***)&pdStack_e0;
  }
  else {
    pdVar24 = (dword *)0x0;
    pppdVar8 = (dword ***)&pppdStack_f0;
    pppdStack_f0 = (dword ***)0x0;
    puStack_c8 = &Atlas_UI_AtlasUIManager__IsLayerReady;
    pdStack_e8 = pdVar17;
    pdStack_e0 = pdVar30;
    pdStack_d8 = pdVar22;
    uStack_d0 = &pdStack_c0;
    if ((bRam0000000003ebc64f & 1) == 0) {
      uStack_d0 = &pdStack_c0;
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar28 = auVar38._8_4_;
    if (((int)uVar28 < 0) || (*(int *)(lVar29 + 0x50) <= (int)uVar28)) {
      return (dword *)0x0;
    }
    lVar29 = *(long *)(lVar29 + 0x70);
    if (lVar29 != 0) {
      if (*(uint *)(lVar29 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar29 + 0x10) + ((ulong)auVar38._8_8_ & 0xffffffff) * 0x28;
      lVar29 = *(long *)(lVar16 + 0x28);
      cVar2 = *(char *)(lVar16 + 0x40);
      iVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar16 + 0x30),0);
      if (iVar13 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar29 != 0) && (*(int *)(lVar29 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    ppdVar36 = (dword **)&Core_UI2_UIManager__GetLayerState;
    auVar40 = func_0x00f78af4();
    pdVar30 = (dword *)0x0;
    pdVar22 = auVar38._8_8_;
    pdVar17 = (dword *)0x3ebc000;
code_r0x02f884dc:
    pppdVar9 = pppdVar8 + -6;
    pppdVar8[-6] = (dword **)0x0;
    pppdVar8[-5] = (dword **)pdVar17;
    pppdVar8[-4] = (dword **)pdVar30;
    pppdVar8[-3] = (dword **)pdVar22;
    pppdVar8[-2] = (dword **)&uStack_d0;
    pppdVar8[-1] = ppdVar36;
    pppdVar8 = pppdVar8 + -2;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar29 = *(long *)(auVar40._0_8_ + 0x70);
    if (lVar29 != 0) {
      if (*(uint *)(lVar29 + 0x18) <= auVar40._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar29 = *(long *)(*(long *)(lVar29 + 0x10) + (long)(int)auVar40._8_4_ * 0x28 + 0x28);
      if (lVar29 == 0) {
        pdVar19 = &MACH_HEADER.cputype;
      }
      else {
        pdVar19 = (dword *)(ulong)*(uint *)(lVar29 + 0x4c);
      }
      return pdVar19;
    }
    pdVar19 = (dword *)&Core_UI2_UIManager__EnableInput;
    auVar41 = func_0x00f78af4();
    pdVar30 = (dword *)0x0;
    pdVar22 = auVar40._8_8_;
    pdVar25 = (dword *)0x3ebc000;
  }
  pdVar14 = auVar41._8_8_;
  pdVar17 = auVar41._0_8_;
  pppdVar10 = pppdVar9 + -8;
  pppdVar9[-8] = (dword **)unaff_x24;
  pppdVar9[-7] = (dword **)0x3eb4000;
  pppdVar9[-6] = (dword **)0x0;
  pppdVar9[-5] = (dword **)pdVar25;
  pppdVar9[-4] = (dword **)pdVar30;
  pppdVar9[-3] = (dword **)pdVar22;
  pppdVar9[-2] = (dword **)pppdVar8;
  pppdVar9[-1] = (dword **)pdVar19;
  pppdVar34 = pppdVar9 + -2;
  pdVar19 = (dword *)0x3ebc000;
  pdVar25 = pdVar24;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(dword **)(pdVar17 + 0x1a) != (dword *)0x0) {
    pdVar25 = (dword *)(ulong)((uint)pdVar24 ^ 1);
    pdVar30 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(dword **)(pdVar17 + 0x1a),pdVar14,pdVar25,0);
    pdVar22 = *(dword **)(pdVar17 + 0x1c);
    pdVar19 = (dword *)0x0;
    if (pdVar22 != (dword *)0x0) {
      uVar28 = auVar41._8_4_;
      if (pdVar22[6] <= uVar28) {
        pdVar30 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(pdVar22 + 4) + (long)(int)uVar28 * 0x28 + 0x28) == 0) ||
         (pdVar19 = *(dword **)(pdVar17 + 0xc), pdVar19 == (dword *)0x0)) {
        return pdVar30;
      }
      pdVar30 = *(dword **)(pdVar17 + 0x1c);
      pdVar17 = (dword *)0x0;
      if (pdVar30 != (dword *)0x0) {
        if (pdVar30[6] <= uVar28) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar23 = *(long **)(*(long *)(pdVar30 + 4) + (long)(int)uVar28 * 0x28 + 0x28);
        pppdVar9[-0xc] = (dword **)unaff_x28;
        pppdVar9[-0xb] = (dword **)unaff_x27;
        pppdVar9[-10] = (dword **)unaff_x26;
        pppdVar9[-9] = (dword **)unaff_x25;
        pppdVar9[-8] = pppdVar9[-8];
        pppdVar9[-7] = pppdVar9[-7];
        pppdVar9[-6] = pppdVar9[-6];
        pppdVar9[-5] = pppdVar9[-5];
        pppdVar9[-4] = pppdVar9[-4];
        pppdVar9[-3] = pppdVar9[-3];
        pppdVar9[-2] = pppdVar9[-2];
        pppdVar9[-1] = pppdVar9[-1];
        pppdVar9[-0xd] = (dword **)pdVar19;
        lVar29 = *(long *)(pdVar19 + 0x1a);
        if (lVar29 == 0) {
          ppdVar36 = (dword **)(pppdVar9 + -0xd);
          lVar16 = 1;
        }
        else {
          lVar16 = *(long *)(lVar29 + 0x18);
          if (lVar16 == 0) {
            return pdVar19;
          }
          ppdVar36 = (dword **)(lVar29 + 0x20);
        }
        lVar29 = 0;
        do {
          pdVar17 = ppdVar36[lVar29];
          pcVar31 = *(code **)(pdVar17 + 4);
          plVar1 = *(long **)(pdVar17 + 8);
          lVar18 = *(long *)(pdVar17 + 10);
          if (*(short *)(lVar18 + 0x48) == -1) {
            func_0x00f78ad8(lVar18);
          }
          iVar13 = func_0x00f78a4c(lVar18);
          bVar11 = *(char *)(lVar18 + 0x4a) == '\x03';
          if (iVar13 == 0) {
            if (bVar11) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar17 = (dword *)(*pcVar31)(plVar23,pdVar14,pdVar24,lVar18);
              }
              else {
                if (((*(short *)(lVar18 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar19 + 6) == 0)) goto code_r0x01e71aac;
                iVar13 = func_0x00f78a44(lVar18);
                iVar12 = func_0x00f78ec0(lVar18);
                if (iVar13 == 0) {
                  uVar3 = *(ushort *)(lVar18 + 0x48);
                  if (iVar12 == 0) {
                    lVar18 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar17 = (dword *)(**(code **)(lVar18 + 0x138))
                                                 (plVar1,plVar23,pdVar14,pdVar24,
                                                  *(undefined8 *)(lVar18 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar18 = func_0x00f78a48(lVar18);
                  lVar26 = *plVar1;
                  uVar21 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar21 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar18) {
                        puVar20 = (undefined8 *)
                                  (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar27 = piVar27 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar18,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar31 = (code *)*puVar20;
                  puVar20 = (undefined8 *)puVar20[1];
                }
                else {
                  if (iVar12 == 0) {
                    uVar15 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar26 = *plVar1;
                    uVar21 = (ulong)*(ushort *)(lVar26 + 0x12a);
                    if (uVar21 != 0) {
                      piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == *(long *)(lVar18 + 0x18)) {
                          lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar18 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar27 = piVar27 + 4;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar15 = *(undefined8 *)(lVar26 + 8);
                  }
                  puVar20 = (undefined8 *)func_0x00f78acc(uVar15,lVar18);
                  pcVar31 = (code *)*puVar20;
                }
                pdVar17 = (dword *)(*pcVar31)(plVar1,plVar23,pdVar14,pdVar24,puVar20);
              }
            }
            else {
              if ((*(short *)(lVar18 + 0x48) == -1) || (*(long *)(pdVar19 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar13 = func_0x00f78a44(lVar18);
              iVar12 = func_0x00f78ec0(lVar18);
              if (iVar13 == 0) {
                uVar3 = *(ushort *)(lVar18 + 0x48);
                if (iVar12 == 0) {
                  lVar18 = *plVar23 + (ulong)uVar3 * 0x10;
                  pdVar17 = (dword *)(**(code **)(lVar18 + 0x138))
                                               (plVar23,pdVar14,pdVar24,
                                                *(undefined8 *)(lVar18 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar18 = func_0x00f78a48(lVar18);
                lVar26 = *plVar23;
                uVar21 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar21 != 0) {
                  piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar18) {
                      puVar20 = (undefined8 *)
                                (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar27 = piVar27 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar20 = (undefined8 *)func_0x00fac1f0(plVar23,lVar18,(ulong)uVar3);
code_r0x01e71d00:
                pcVar31 = (code *)*puVar20;
                puVar20 = (undefined8 *)puVar20[1];
              }
              else {
                if (iVar12 == 0) {
                  uVar15 = *(undefined8 *)
                            (*plVar23 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar26 = *plVar23;
                  uVar21 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar21 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == *(long *)(lVar18 + 0x18)) {
                        lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar18 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar27 = piVar27 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  lVar26 = func_0x00fac1f0(plVar23);
code_r0x01e71cd8:
                  uVar15 = *(undefined8 *)(lVar26 + 8);
                }
                puVar20 = (undefined8 *)func_0x00f78acc(uVar15,lVar18);
                pcVar31 = (code *)*puVar20;
              }
              pdVar17 = (dword *)(*pcVar31)(plVar23,pdVar14,pdVar24,puVar20);
            }
          }
          else {
            if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar17 = (dword *)(*pcVar31)(plVar1,plVar23,pdVar14,pdVar24,lVar18);
          }
code_r0x01e71bd0:
          lVar29 = lVar29 + 1;
          if (lVar29 == lVar16) {
            return pdVar17;
          }
        } while( true );
      }
    }
  }
  ppdVar36 = (dword **)&Core_UI2_UIManager__SetScreenVisible;
  auVar42 = func_0x00f78af4();
  pdVar22 = pdVar24;
  pdVar30 = pdVar14;
code_r0x02f88674:
  pdVar24 = auVar42._0_8_;
  pppdVar10[-6] = (dword **)pdVar19;
  pppdVar10[-5] = (dword **)pdVar17;
  pppdVar10[-4] = (dword **)pdVar30;
  pppdVar10[-3] = (dword **)pdVar22;
  pppdVar10[-2] = (dword **)pppdVar34;
  pppdVar10[-1] = ppdVar36;
  pdVar19 = pdVar24;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar19 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar29 = *(long *)(pdVar24 + 0x1c);
  if (lVar29 != 0) {
    uVar28 = auVar42._8_4_;
    if (*(uint *)(lVar29 + 0x18) <= uVar28) {
      pdVar19 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar29 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) {
      return pdVar19;
    }
    lVar29 = *(long *)(pdVar24 + 0x1c);
    if (lVar29 != 0) {
      if (*(uint *)(lVar29 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar29 = *(long *)(*(long *)(lVar29 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
      if ((lVar29 != 0) && (plVar23 = *(long **)(lVar29 + 0x28), plVar23 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar19 = (dword *)(**(code **)(*plVar23 + 0x178))
                                     (plVar23,pdVar25,*(undefined8 *)(*plVar23 + 0x180));
        return pdVar19;
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar15 = auVar38._0_8_;
  pppdVar10[-10] = auVar42._8_8_;
  pppdVar10[-9] = (dword **)pdVar25;
  pppdVar10[-8] = (dword **)(pppdVar10 + -2);
  pppdVar10[-7] = (dword **)&Core_UI2_UIManager__RequestScreenAssetsAndPin;
  pppdVar10[-0xd] = (dword **)0x0;
  pppdVar10[-0xe] = (dword **)0x0;
  pppdVar10[-0xb] = (dword **)0x0;
  pppdVar10[-0xc] = (dword **)0x0;
  pdVar19 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar15,auVar38._8_8_,pppdVar10 + -0xe);
  if ((int)pdVar19 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar15,pppdVar10[-0xc],pppdVar10[-0xb]);
    pppdVar10[-0x11] = pppdVar10[-0xd];
    pppdVar10[-0x12] = pppdVar10[-0xe];
    pppdVar10[-0xf] = pppdVar10[-0xb];
    pppdVar10[-0x10] = pppdVar10[-0xc];
    pdVar19 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar15,pppdVar10 + -0x12,1);
  }
  return pdVar19;
}



// ============================================================
// RVA: 0x159637c | Atlas.Contexts.FrontendContextCharacterRankState.ShowRankRewardScreen
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

dword * Atlas_Contexts_FrontendContextCharacterRankState__ShowRankRewardScreen
                  (long param_1,undefined8 param_2,dword *param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  dword ****ppppdVar4;
  dword **ppdVar5;
  dword **ppdVar6;
  dword **ppdVar7;
  dword ***pppdVar8;
  dword ***pppdVar9;
  dword ***pppdVar10;
  bool bVar11;
  int iVar12;
  dword *pdVar14;
  dword *pdVar15;
  long lVar16;
  dword *pdVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  int iVar13;
  dword *pdVar21;
  long *extraout_x1;
  long *plVar22;
  dword *pdVar23;
  dword *pdVar24;
  undefined8 uVar25;
  long lVar26;
  int *piVar27;
  uint uVar28;
  dword *pdVar29;
  long lVar30;
  undefined8 unaff_x24;
  dword *unaff_x25;
  code *pcVar31;
  dword *unaff_x26;
  dword *unaff_x27;
  dword *unaff_x28;
  undefined1 *puVar32;
  dword **ppdVar33;
  dword ***pppdVar34;
  undefined *puVar35;
  dword **ppdVar36;
  undefined4 extraout_s0;
  dword *pdVar37;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  dword *apdStack_158 [5];
  undefined8 uStack_120;
  dword *pdStack_110;
  long lStack_108;
  dword *pdStack_100;
  dword *pdStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  dword ****ppppdStack_e0;
  undefined *puStack_d8;
  dword ***pppdStack_d0;
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
  dword *pdStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  pdVar17 = (dword *)0x3d26c00;
  lVar30 = 0x3d40640;
  if ((bRam0000000003eb5183 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d56e08);
    func_0x00f78a20(0x3d40640);
    func_0x00f78a20(0x3d26c00);
    bRam0000000003eb5183 = 1;
  }
  pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterRewardScreen.TransitionData_TypeInfo*/ uRam0000000003d26c00);
  /*Atlas.UI.Screens.CharacterRewardScreen.TransitionData$$.ctor*/ func_0x015477d8(pdVar15,0);
  lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40640);
  if ((lVar16 == 0) || (pdVar15 == (dword *)0x0)) {
LAB_015964cc:
    auVar38 = func_0x00f78af4();
    pdVar24 = auVar38._0_8_;
    puStack_48 = &Atlas_Contexts_FrontendContextCharacterRankState__OnLoadoutTypeSelected;
    pdVar29 = pdVar24;
    pdVar21 = param_3;
    pdStack_70 = pdVar17;
    pdStack_68 = (dword *)lVar30;
    pdStack_60 = pdVar15;
    puStack_58 = (undefined *)param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5184 & 1) == 0) {
      pdVar29 = (dword *)func_0x00f78a20(0x3d40640);
      bRam0000000003eb5184 = 1;
    }
    if (auVar38._8_4_ == 0) {
      pdVar29 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(pdVar24,uRam0000000003d40640);
      if (pdVar29 == (dword *)0x0) {
        pdVar17 = (dword *)func_0x00f78af4();
        uStack_a0 = (dword **)0x3eb5000;
        pdStack_78 = (dword *)&Atlas_Contexts_FrontendContextCharacterRankState___ctor;
        pdStack_88 = param_3;
        pdStack_80 = (dword *)&puStack_50;
        if ((bRam0000000003eb5185 & 1) == 0) {
          puStack_98 = (undefined *)auVar38._8_8_;
          pdStack_90 = pdVar24;
          func_0x00f78a20(0x3d40638);
          auVar38._8_8_ = puStack_98;
          auVar38._0_8_ = pdStack_90;
          bRam0000000003eb5185 = 1;
        }
        puStack_98 = auVar38._8_8_;
        pdStack_90 = auVar38._0_8_;
        if (pdVar17 == (dword *)0x0) {
          auVar38 = func_0x00f78af4(0,uRam0000000003d40638);
          pdVar17 = auVar38._0_8_;
          *(undefined8 *)(pdVar17 + 4) = *(undefined8 *)pdVar21;
          *(long *)(pdVar17 + 8) = auVar38._8_8_;
          *(dword **)(pdVar17 + 10) = pdVar21;
          return pdVar17;
        }
        return pdVar17;
      }
      *(dword **)(pdVar29 + 4) = param_3;
    }
    return pdVar29;
  }
  pdVar29 = *(dword **)(lVar16 + 0x18);
  pdVar17 = *(dword **)(lVar16 + 0x10);
  pdVar24 = *(dword **)(lVar16 + 0x28);
  pdVar21 = *(dword **)(lVar16 + 0x20);
  pdVar23 = *(dword **)(lVar16 + 0x30);
  pdVar37 = *(dword **)(lVar16 + 0x48);
  pdVar14 = *(dword **)(lVar16 + 0x40);
  *(dword **)(pdVar15 + 0xe) = *(dword **)(lVar16 + 0x38);
  *(dword **)(pdVar15 + 0xc) = pdVar23;
  *(dword **)(pdVar15 + 0x12) = pdVar37;
  *(dword **)(pdVar15 + 0x10) = pdVar14;
  *(dword **)(pdVar15 + 6) = pdVar29;
  *(dword **)(pdVar15 + 4) = pdVar17;
  *(dword **)(pdVar15 + 10) = pdVar24;
  *(dword **)(pdVar15 + 8) = pdVar21;
  lVar30 = *(long *)(param_1 + 0x88);
  pdVar17 = (dword *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
  param_3 = pdRam0000000003d56e08;
  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(pdVar17,param_1,pdRam0000000003d56e08,0);
  if (lVar30 == 0) goto LAB_015964cc;
  param_3 = pdVar17;
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar30,0,pdVar17,0);
  pdVar29 = *(dword **)(param_1 + 0x80);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_1 = 0;
  if (pdVar29 == (dword *)0x0) goto LAB_015964cc;
  pdVar21 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0);
  pdVar24 = (dword *)0x0;
  uVar25 = 0;
  pdVar17 = (dword *)0x0;
  pdVar23 = pdVar15;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  puStack_48 = (undefined *)0x0;
  pdVar14 = *(dword **)(pdVar29 + 4);
  pdStack_60 = (dword *)&stack0xfffffffffffffff0;
  if (pdVar14 != (dword *)0x0) {
    pdVar24 = (dword *)0x0;
    uVar25 = 0;
    puStack_58 = &UNK_01470820;
    pdVar37 = pdVar21;
    pdVar23 = pdVar15;
code_r0x02f87f38:
    pdStack_88 = (dword *)0x3eb4000;
    pdStack_80 = (dword *)0x0;
    pdStack_78 = pdVar15;
    pdStack_70 = pdVar29;
    pdStack_68 = pdVar21;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    uStack_120 = 0x3ebc000;
    pdStack_e8 = (dword *)&UNK_02f87f9c;
    pdStack_110 = pdVar23;
    lStack_108 = uVar25;
    pdStack_100 = pdVar14;
    pdStack_f8 = pdVar24;
    pdStack_f0 = (dword *)&pdStack_60;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar30 = *(long *)(pdVar14 + 0x1e);
    if (lVar30 != 0) {
      iVar13 = *(int *)(lVar30 + 0x18);
      if (iVar13 < 1) {
        return (dword *)0x0;
      }
      iVar12 = 1;
      pdVar17 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar30 + 0x18) <= iVar12 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)(iVar12 - 1U) * 0x20 + 0x20);
        if (lVar30 == 0) break;
        uVar19 = /*System.String$$Equals*/ func_0x029caa48(lVar30,pdVar37,5,0);
        if ((uVar19 & 1) != 0) {
          return pdVar17;
        }
        pdVar17 = (dword *)(ulong)(iVar12 < iVar13);
        if (iVar13 == iVar12) {
          return pdVar17;
        }
        lVar30 = *(long *)(pdVar14 + 0x1e);
        iVar12 = iVar12 + 1;
      } while (lVar30 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar38 = func_0x00f78af4();
  pdVar37 = auVar38._8_8_;
  pdStack_70 = (dword *)&pdStack_60;
  puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
  pdVar14 = *(dword **)(auVar38._0_8_ + 0x10);
  if (pdVar14 != (dword *)0x0) {
    puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
    goto code_r0x02f87f38;
  }
  auVar38 = func_0x00f78af4();
  uVar25 = auVar38._8_8_;
  ppdVar36 = &pdStack_70;
  pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
  lVar30 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar30 != 0) {
    pdVar24 = (dword *)0x0;
    pdStack_90 = (dword *)0x0;
    pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
    pdStack_88 = pdVar15;
    pdStack_80 = pdVar29;
    pdStack_78 = pdVar21;
    pdStack_70 = (dword *)&pdStack_60;
    if ((bRam0000000003ebc64b & 1) == 0) {
      pdStack_70 = (dword *)&pdStack_60;
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar16 = *(long *)(lVar30 + 0x70);
    if (lVar16 != 0) {
      lVar20 = lVar16;
      if (*(uint *)(lVar16 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar20 = *(long *)(lVar30 + 0x70);
      }
      if (lVar20 != 0) {
        lVar16 = *(long *)(lVar16 + 0x10) + (long)(int)auVar38._8_4_ * 0x28;
        puStack_c8 = *(undefined **)(lVar16 + 0x28);
        pppdStack_d0 = *(dword ****)(lVar16 + 0x20);
        puStack_d8 = (undefined *)CONCAT26(puStack_d8._6_2_,*(undefined6 *)(lVar16 + 0x42));
        pdStack_b0 = (dword *)0x0;
        pdStack_a8 = (dword *)0x0;
        uStack_a0 = (dword **)
                    CONCAT26(*(undefined2 *)(lVar16 + 0x46),
                             CONCAT42(*(undefined4 *)(lVar16 + 0x42),1));
        pppdStack_c0 = pppdStack_d0;
        pdStack_b8 = (dword *)puStack_c8;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar20,uVar25,&pppdStack_c0,uRam0000000003d3ddd0);
        pdVar17 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar30,uVar25);
        return pdVar17;
      }
    }
    auVar38 = func_0x00f78af4();
    pdVar14 = auVar38._8_8_;
    ppdVar6 = &stack0xfffffffffffffef0;
    pdStack_110 = (dword *)0x0;
    pdStack_e8 = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
    puVar32 = (undefined1 *)&pdStack_f0;
    lStack_108 = lVar16;
    pdStack_100 = (dword *)lVar30;
    pdStack_f8 = (dword *)uVar25;
    pdStack_f0 = (dword *)&pdStack_70;
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar30 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar30 != 0) {
      if (*(uint *)(lVar30 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar30 == 0) {
        pdVar17 = (dword *)0x0;
      }
      else {
        pdVar17 = *(dword **)(lVar30 + 0x40);
      }
      return pdVar17;
    }
    puVar35 = &Core_UI2_UIScreen__ForceExit;
    pdVar21 = (dword *)func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar15 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar38 = func_0x00f78af4();
  pdVar14 = auVar38._8_8_;
  ppdVar33 = &pdStack_80;
  pdStack_80 = (dword *)&pdStack_70;
  pdStack_78 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayer;
  lVar30 = *(long *)(auVar38._0_8_ + 0x10);
  auVar39._8_8_ = pdVar15;
  auVar39._0_8_ = lVar30;
  if (lVar30 != 0) {
    pdVar24 = (dword *)0x0;
    ppdVar5 = &pdStack_70;
    puVar35 = &Atlas_UI_AtlasUIManager__ClearLayer;
    pdVar15 = pdVar29;
    goto code_r0x02f877a8;
  }
  auVar38 = func_0x00f78af4();
  pdStack_90 = (dword *)&pdStack_80;
  pdStack_88 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar30 = *(long *)(auVar38._0_8_ + 0x10);
  auVar39._8_8_ = auVar38._8_8_;
  auVar39._0_8_ = lVar30;
  if (lVar30 != 0) {
    ppdVar7 = &pdStack_80;
    puVar35 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
    pdVar14 = pdVar24;
    while( true ) {
      ppdVar5 = (dword **)((long)ppdVar7 + -0x30);
      *(dword **)((long)ppdVar7 + -0x30) = pdVar17;
      *(dword **)((long)ppdVar7 + -0x28) = pdVar15;
      *(dword **)((long)ppdVar7 + -0x20) = pdVar29;
      *(dword **)((long)ppdVar7 + -0x18) = pdVar21;
      *(dword ***)((long)ppdVar7 + -0x10) = ppdVar33;
      *(undefined **)((long)ppdVar7 + -8) = puVar35;
      ppdVar36 = (dword **)((long)ppdVar7 + -0x10);
      puVar35 = &UNK_02f883d8;
      pdVar24 = pdVar14;
      pdVar21 = pdVar23;
      pdVar15 = pdVar14;
      pdVar17 = auVar39._0_8_;
code_r0x02f877a8:
      pdVar29 = auVar39._0_8_;
      ppdVar6 = (dword **)((long)ppdVar5 + -0x60);
      *(dword **)((long)ppdVar5 + -0x30) = pdVar17;
      *(long *)((long)ppdVar5 + -0x28) = auVar39._8_8_;
      *(dword **)((long)ppdVar5 + -0x20) = pdVar15;
      *(dword **)((long)ppdVar5 + -0x18) = pdVar21;
      *(dword ***)((long)ppdVar5 + -0x10) = ppdVar36;
      *(undefined **)((long)ppdVar5 + -8) = puVar35;
      puVar32 = (undefined1 *)((long)ppdVar5 + -0x10);
      pdVar15 = pdVar29;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar15 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar28 = (uint)pdVar14;
      if (((int)uVar28 < 0) || ((int)pdVar29[0x14] <= (int)uVar28)) {
        return pdVar15;
      }
      pdVar15 = *(dword **)(pdVar29 + 0x1c);
      if (pdVar15 == (dword *)0x0) break;
      if (pdVar15[6] <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar30 = *(long *)(pdVar15 + 4) + ((ulong)pdVar14 & 0xffffffff) * 0x28;
      pdVar17 = *(dword **)(lVar30 + 0x20);
      pdVar21 = *(dword **)(lVar30 + 0x28);
      *(undefined4 *)((long)ppdVar5 + -0x60) = *(undefined4 *)(lVar30 + 0x42);
      *(undefined2 *)((long)ppdVar5 + -0x5c) = *(undefined2 *)(lVar30 + 0x46);
      if (pdVar21 == (dword *)0x0) {
        pdVar15 = *(dword **)(pdVar29 + 0x1c);
        if (pdVar15 != (dword *)0x0) {
          *(dword **)((long)ppdVar5 + -0x58) = pdVar17;
          *(undefined8 *)((long)ppdVar5 + -0x50) = 0;
          *(undefined8 *)((long)ppdVar5 + -0x48) = 0;
          *(undefined8 *)((long)ppdVar5 + -0x40) = 0;
          *(undefined2 *)((long)ppdVar5 + -0x38) = 0;
          *(undefined4 *)((long)ppdVar5 + -0x36) = *(undefined4 *)((long)ppdVar5 + -0x60);
          *(undefined2 *)((long)ppdVar5 + -0x32) = *(undefined2 *)((long)ppdVar5 + -0x5c);
          pdVar17 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(pdVar15,pdVar14,(undefined1 *)((long)ppdVar5 + -0x58),
                                             uRam0000000003d3ddd0);
          return pdVar17;
        }
        break;
      }
      puVar35 = &UNK_02f87848;
      pdVar15 = pdVar21;
code_r0x02f882d8:
      *(dword **)((long)ppdVar6 + -0x20) = pdVar29;
      *(dword **)((long)ppdVar6 + -0x18) = pdVar14;
      *(undefined1 **)((long)ppdVar6 + -0x10) = puVar32;
      *(undefined **)((long)ppdVar6 + -8) = puVar35;
      (**(code **)(*(dword **)pdVar21 + 0x86))(pdVar21,*(undefined8 *)(*(dword **)pdVar21 + 0x88));
      if (*(dword **)(pdVar21 + 10) != (dword *)0x0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(dword **)(pdVar21 + 10),0);
        pdVar21[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar21,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar17 = (dword *)(**(code **)(*(dword **)pdVar21 + 0x8a))
                                     (pdVar21,*(undefined8 *)(*(dword **)pdVar21 + 0x8c));
        return pdVar17;
      }
      func_0x00f78af4();
      ppdVar7 = (dword **)((long)ppdVar6 + -0x40);
      *(dword **)((long)ppdVar6 + -0x40) = pdVar29;
      *(dword **)((long)ppdVar6 + -0x38) = pdVar21;
      *(undefined1 **)((long)ppdVar6 + -0x30) = (undefined1 *)((long)ppdVar6 + -0x10);
      *(undefined **)((long)ppdVar6 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      ppdVar33 = (dword **)((long)ppdVar6 + -0x30);
      if (extraout_x1 != (long *)0x0) {
        lVar30 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar25 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar25,lVar30);
        pdVar17 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar17;
      }
      puVar35 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar39 = func_0x00f78af4();
      pdVar14 = pdVar24;
    }
    lVar30 = func_0x00f78af4();
    *(undefined8 *)((long)ppdVar5 + -0xa0) = unaff_d9;
    *(undefined8 *)((long)ppdVar5 + -0x98) = unaff_d8;
    *(dword **)((long)ppdVar5 + -0x90) = pdVar17;
    *(undefined8 *)((long)ppdVar5 + -0x88) = 0;
    *(dword **)((long)ppdVar5 + -0x80) = pdVar29;
    *(dword **)((long)ppdVar5 + -0x78) = pdVar14;
    *(undefined1 **)((long)ppdVar5 + -0x70) = puVar32;
    *(undefined **)((long)ppdVar5 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar25,0);
    if (0 < *(int *)(lVar30 + 0x50)) {
      iVar13 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar30,iVar13);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar30,iVar13);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(lVar30 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar30);
    *(undefined8 *)((long)ppdVar5 + -0x80) = *(undefined8 *)((long)ppdVar5 + -0x80);
    *(undefined8 *)((long)ppdVar5 + -0x78) = *(undefined8 *)((long)ppdVar5 + -0x78);
    *(undefined8 *)((long)ppdVar5 + -0x70) = *(undefined8 *)((long)ppdVar5 + -0x70);
    *(undefined8 *)((long)ppdVar5 + -0x68) = *(undefined8 *)((long)ppdVar5 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar17 = (dword *)(*pcRam0000000003ec05a0)(uVar25);
    return pdVar17;
  }
  auVar38 = func_0x00f78af4();
  puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar30 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar30 == 0) {
    uStack_a0 = &pdStack_90;
    auVar38 = func_0x00f78af4();
    pppdVar8 = (dword ***)&pdStack_b0;
    pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
    lVar30 = *(long *)(auVar38._0_8_ + 0x10);
    auVar40._8_8_ = auVar38._8_8_;
    auVar40._0_8_ = lVar30;
    if (lVar30 != 0) {
      pdVar23 = (dword *)0x0;
      pppdVar8 = (dword ***)&uStack_a0;
      ppdVar36 = (dword **)&Atlas_UI_AtlasUIManager__GetLayerState;
      pdStack_b0 = (dword *)&uStack_a0;
      goto code_r0x02f884dc;
    }
    pdStack_b0 = (dword *)&uStack_a0;
    auVar38 = func_0x00f78af4();
    pppdVar34 = (dword ***)&pppdStack_c0;
    pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    lVar30 = *(long *)(auVar38._0_8_ + 0x10);
    auVar41._8_8_ = auVar38._8_8_;
    auVar41._0_8_ = lVar30;
    if (lVar30 == 0) {
      pppdStack_c0 = (dword ***)&pdStack_b0;
      auVar38 = func_0x00f78af4();
      ppppdStack_e0 = &pppdStack_d0;
      puStack_c8 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar30 = *(long *)(auVar38._0_8_ + 0x10);
      auVar42._8_8_ = auVar38._8_8_;
      auVar42._0_8_ = lVar30;
      if (lVar30 == 0) {
        pppdStack_d0 = (dword ***)&pppdStack_c0;
        pdVar17 = (dword *)func_0x00f78af4();
        pdStack_100 = (dword *)0x0;
        puStack_d8 = &Atlas_UI_AtlasUIManager___ctor;
        pdStack_f8 = pdVar15;
        pdStack_f0 = pdVar29;
        pdStack_e8 = pdVar21;
        ppppdVar4 = &pppdStack_d0;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
          ppppdVar4 = ppppdStack_e0;
        }
        ppppdStack_e0 = ppppdVar4;
        uVar25 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar25,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar17 + 0xc) = uVar25;
        return pdVar17;
      }
      pppdVar10 = (dword ***)&pppdStack_c0;
      ppdVar36 = (dword **)&Atlas_UI_AtlasUIManager__SetScreenVisible;
      pppdStack_d0 = (dword ***)&pppdStack_c0;
      goto code_r0x02f88674;
    }
    pppdVar9 = (dword ***)&pdStack_b0;
    pdVar17 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    pdVar23 = pdVar24;
    pdVar24 = pdVar15;
    pppdStack_c0 = (dword ***)&pdStack_b0;
  }
  else {
    pdVar23 = (dword *)0x0;
    pppdVar8 = (dword ***)&pppdStack_c0;
    pppdStack_c0 = (dword ***)0x0;
    puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
    pdStack_b8 = pdVar15;
    pdStack_b0 = pdVar29;
    pdStack_a8 = pdVar21;
    uStack_a0 = &pdStack_90;
    if ((bRam0000000003ebc64f & 1) == 0) {
      uStack_a0 = &pdStack_90;
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar28 = auVar38._8_4_;
    if (((int)uVar28 < 0) || (*(int *)(lVar30 + 0x50) <= (int)uVar28)) {
      return (dword *)0x0;
    }
    lVar30 = *(long *)(lVar30 + 0x70);
    if (lVar30 != 0) {
      if (*(uint *)(lVar30 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar30 + 0x10) + ((ulong)auVar38._8_8_ & 0xffffffff) * 0x28;
      lVar30 = *(long *)(lVar16 + 0x28);
      cVar2 = *(char *)(lVar16 + 0x40);
      iVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar16 + 0x30),0);
      if (iVar13 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar30 != 0) && (*(int *)(lVar30 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    ppdVar36 = (dword **)&Core_UI2_UIManager__GetLayerState;
    auVar40 = func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar21 = auVar38._8_8_;
    pdVar15 = (dword *)0x3ebc000;
code_r0x02f884dc:
    pppdVar9 = pppdVar8 + -6;
    pppdVar8[-6] = (dword **)0x0;
    pppdVar8[-5] = (dword **)pdVar15;
    pppdVar8[-4] = (dword **)pdVar29;
    pppdVar8[-3] = (dword **)pdVar21;
    pppdVar8[-2] = (dword **)&uStack_a0;
    pppdVar8[-1] = ppdVar36;
    pppdVar8 = pppdVar8 + -2;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar30 = *(long *)(auVar40._0_8_ + 0x70);
    if (lVar30 != 0) {
      if (*(uint *)(lVar30 + 0x18) <= auVar40._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)auVar40._8_4_ * 0x28 + 0x28);
      if (lVar30 == 0) {
        pdVar17 = &MACH_HEADER.cputype;
      }
      else {
        pdVar17 = (dword *)(ulong)*(uint *)(lVar30 + 0x4c);
      }
      return pdVar17;
    }
    pdVar17 = (dword *)&Core_UI2_UIManager__EnableInput;
    auVar41 = func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar21 = auVar40._8_8_;
    pdVar24 = (dword *)0x3ebc000;
  }
  pdVar14 = auVar41._8_8_;
  pdVar15 = auVar41._0_8_;
  pppdVar10 = pppdVar9 + -8;
  pppdVar9[-8] = (dword **)unaff_x24;
  pppdVar9[-7] = (dword **)0x3eb4000;
  pppdVar9[-6] = (dword **)0x0;
  pppdVar9[-5] = (dword **)pdVar24;
  pppdVar9[-4] = (dword **)pdVar29;
  pppdVar9[-3] = (dword **)pdVar21;
  pppdVar9[-2] = (dword **)pppdVar8;
  pppdVar9[-1] = (dword **)pdVar17;
  pppdVar34 = pppdVar9 + -2;
  pdVar17 = (dword *)0x3ebc000;
  pdVar24 = pdVar23;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(dword **)(pdVar15 + 0x1a) != (dword *)0x0) {
    pdVar24 = (dword *)(ulong)((uint)pdVar23 ^ 1);
    pdVar29 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(dword **)(pdVar15 + 0x1a),pdVar14,pdVar24,0);
    pdVar21 = *(dword **)(pdVar15 + 0x1c);
    pdVar17 = (dword *)0x0;
    if (pdVar21 != (dword *)0x0) {
      uVar28 = auVar41._8_4_;
      if (pdVar21[6] <= uVar28) {
        pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(pdVar21 + 4) + (long)(int)uVar28 * 0x28 + 0x28) == 0) ||
         (pdVar17 = *(dword **)(pdVar15 + 0xc), pdVar17 == (dword *)0x0)) {
        return pdVar29;
      }
      pdVar29 = *(dword **)(pdVar15 + 0x1c);
      pdVar15 = (dword *)0x0;
      if (pdVar29 != (dword *)0x0) {
        if (pdVar29[6] <= uVar28) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar22 = *(long **)(*(long *)(pdVar29 + 4) + (long)(int)uVar28 * 0x28 + 0x28);
        pppdVar9[-0xc] = (dword **)unaff_x28;
        pppdVar9[-0xb] = (dword **)unaff_x27;
        pppdVar9[-10] = (dword **)unaff_x26;
        pppdVar9[-9] = (dword **)unaff_x25;
        pppdVar9[-8] = pppdVar9[-8];
        pppdVar9[-7] = pppdVar9[-7];
        pppdVar9[-6] = pppdVar9[-6];
        pppdVar9[-5] = pppdVar9[-5];
        pppdVar9[-4] = pppdVar9[-4];
        pppdVar9[-3] = pppdVar9[-3];
        pppdVar9[-2] = pppdVar9[-2];
        pppdVar9[-1] = pppdVar9[-1];
        pppdVar9[-0xd] = (dword **)pdVar17;
        lVar30 = *(long *)(pdVar17 + 0x1a);
        if (lVar30 == 0) {
          ppdVar36 = (dword **)(pppdVar9 + -0xd);
          lVar16 = 1;
        }
        else {
          lVar16 = *(long *)(lVar30 + 0x18);
          if (lVar16 == 0) {
            return pdVar17;
          }
          ppdVar36 = (dword **)(lVar30 + 0x20);
        }
        lVar30 = 0;
        do {
          pdVar15 = ppdVar36[lVar30];
          pcVar31 = *(code **)(pdVar15 + 4);
          plVar1 = *(long **)(pdVar15 + 8);
          lVar20 = *(long *)(pdVar15 + 10);
          if (*(short *)(lVar20 + 0x48) == -1) {
            func_0x00f78ad8(lVar20);
          }
          iVar13 = func_0x00f78a4c(lVar20);
          bVar11 = *(char *)(lVar20 + 0x4a) == '\x03';
          if (iVar13 == 0) {
            if (bVar11) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar15 = (dword *)(*pcVar31)(plVar22,pdVar14,pdVar23,lVar20);
              }
              else {
                if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar17 + 6) == 0)) goto code_r0x01e71aac;
                iVar13 = func_0x00f78a44(lVar20);
                iVar12 = func_0x00f78ec0(lVar20);
                if (iVar13 == 0) {
                  uVar3 = *(ushort *)(lVar20 + 0x48);
                  if (iVar12 == 0) {
                    lVar20 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar15 = (dword *)(**(code **)(lVar20 + 0x138))
                                                 (plVar1,plVar22,pdVar14,pdVar23,
                                                  *(undefined8 *)(lVar20 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar20 = func_0x00f78a48(lVar20);
                  lVar26 = *plVar1;
                  uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar19 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar20) {
                        puVar18 = (undefined8 *)
                                  (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar27 = piVar27 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar31 = (code *)*puVar18;
                  puVar18 = (undefined8 *)puVar18[1];
                }
                else {
                  if (iVar12 == 0) {
                    uVar25 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar26 = *plVar1;
                    uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                    if (uVar19 != 0) {
                      piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == *(long *)(lVar20 + 0x18)) {
                          lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar20 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar27 = piVar27 + 4;
                        uVar19 = uVar19 - 1;
                      } while (uVar19 != 0);
                    }
                    lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar25 = *(undefined8 *)(lVar26 + 8);
                  }
                  puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar20);
                  pcVar31 = (code *)*puVar18;
                }
                pdVar15 = (dword *)(*pcVar31)(plVar1,plVar22,pdVar14,pdVar23,puVar18);
              }
            }
            else {
              if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(pdVar17 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar13 = func_0x00f78a44(lVar20);
              iVar12 = func_0x00f78ec0(lVar20);
              if (iVar13 == 0) {
                uVar3 = *(ushort *)(lVar20 + 0x48);
                if (iVar12 == 0) {
                  lVar20 = *plVar22 + (ulong)uVar3 * 0x10;
                  pdVar15 = (dword *)(**(code **)(lVar20 + 0x138))
                                               (plVar22,pdVar14,pdVar23,
                                                *(undefined8 *)(lVar20 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar20 = func_0x00f78a48(lVar20);
                lVar26 = *plVar22;
                uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar19 != 0) {
                  piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar20) {
                      puVar18 = (undefined8 *)
                                (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar27 = piVar27 + 4;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar22,lVar20,(ulong)uVar3);
code_r0x01e71d00:
                pcVar31 = (code *)*puVar18;
                puVar18 = (undefined8 *)puVar18[1];
              }
              else {
                if (iVar12 == 0) {
                  uVar25 = *(undefined8 *)
                            (*plVar22 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar26 = *plVar22;
                  uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar19 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == *(long *)(lVar20 + 0x18)) {
                        lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar27 = piVar27 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  lVar26 = func_0x00fac1f0(plVar22);
code_r0x01e71cd8:
                  uVar25 = *(undefined8 *)(lVar26 + 8);
                }
                puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar20);
                pcVar31 = (code *)*puVar18;
              }
              pdVar15 = (dword *)(*pcVar31)(plVar22,pdVar14,pdVar23,puVar18);
            }
          }
          else {
            if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar15 = (dword *)(*pcVar31)(plVar1,plVar22,pdVar14,pdVar23,lVar20);
          }
code_r0x01e71bd0:
          lVar30 = lVar30 + 1;
          if (lVar30 == lVar16) {
            return pdVar15;
          }
        } while( true );
      }
    }
  }
  ppdVar36 = (dword **)&Core_UI2_UIManager__SetScreenVisible;
  auVar42 = func_0x00f78af4();
  pdVar21 = pdVar23;
  pdVar29 = pdVar14;
code_r0x02f88674:
  pdVar23 = auVar42._0_8_;
  pppdVar10[-6] = (dword **)pdVar17;
  pppdVar10[-5] = (dword **)pdVar15;
  pppdVar10[-4] = (dword **)pdVar29;
  pppdVar10[-3] = (dword **)pdVar21;
  pppdVar10[-2] = (dword **)pppdVar34;
  pppdVar10[-1] = ppdVar36;
  pdVar17 = pdVar23;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar17 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar30 = *(long *)(pdVar23 + 0x1c);
  if (lVar30 != 0) {
    uVar28 = auVar42._8_4_;
    if (*(uint *)(lVar30 + 0x18) <= uVar28) {
      pdVar17 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar30 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) {
      return pdVar17;
    }
    lVar30 = *(long *)(pdVar23 + 0x1c);
    if (lVar30 != 0) {
      if (*(uint *)(lVar30 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
      if ((lVar30 != 0) && (plVar22 = *(long **)(lVar30 + 0x28), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar17 = (dword *)(**(code **)(*plVar22 + 0x178))
                                     (plVar22,pdVar24,*(undefined8 *)(*plVar22 + 0x180));
        return pdVar17;
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar25 = auVar38._0_8_;
  pppdVar10[-10] = auVar42._8_8_;
  pppdVar10[-9] = (dword **)pdVar24;
  pppdVar10[-8] = (dword **)(pppdVar10 + -2);
  pppdVar10[-7] = (dword **)&Core_UI2_UIManager__RequestScreenAssetsAndPin;
  pppdVar10[-0xd] = (dword **)0x0;
  pppdVar10[-0xe] = (dword **)0x0;
  pppdVar10[-0xb] = (dword **)0x0;
  pppdVar10[-0xc] = (dword **)0x0;
  pdVar17 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar25,auVar38._8_8_,pppdVar10 + -0xe);
  if ((int)pdVar17 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar25,pppdVar10[-0xc],pppdVar10[-0xb]);
    pppdVar10[-0x11] = pppdVar10[-0xd];
    pppdVar10[-0x12] = pppdVar10[-0xe];
    pppdVar10[-0xf] = pppdVar10[-0xb];
    pppdVar10[-0x10] = pppdVar10[-0xc];
    pdVar17 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar25,pppdVar10 + -0x12,1);
  }
  return pdVar17;
}



// ============================================================
// RVA: 0x15964d0 | Atlas.Contexts.FrontendContextCharacterRankState.OnLoadoutTypeSelected
// ============================================================

void Atlas_Contexts_FrontendContextCharacterRankState__OnLoadoutTypeSelected
               (undefined8 param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = param_3;
  if ((bRam0000000003eb5184 & 1) == 0) {
    func_0x00f78a20(0x3d40640);
    bRam0000000003eb5184 = 1;
  }
  if (param_2 == 0) {
    lVar1 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40640);
    if (lVar1 == 0) {
      lVar1 = func_0x00f78af4();
      if ((bRam0000000003eb5185 & 1) == 0) {
        func_0x00f78a20(0x3d40638);
        bRam0000000003eb5185 = 1;
      }
      if (lVar1 != 0) {
        return;
      }
      auVar3 = func_0x00f78af4(0,uRam0000000003d40638);
      lVar1 = auVar3._0_8_;
      *(undefined8 *)(lVar1 + 0x10) = *puVar2;
      *(long *)(lVar1 + 0x20) = auVar3._8_8_;
      *(undefined8 **)(lVar1 + 0x28) = puVar2;
      return;
    }
    *(undefined8 **)(lVar1 + 0x10) = param_3;
  }
  return;
}



// ============================================================
// RVA: 0x1596540 | Atlas.Contexts.FrontendContextCharacterRankState..ctor
// ============================================================

void Atlas_Contexts_FrontendContextCharacterRankState___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5185 & 1) == 0) {
    func_0x00f78a20(0x3d40638);
    bRam0000000003eb5185 = 1;
  }
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d40638);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



