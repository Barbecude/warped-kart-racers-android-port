// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.NetworkTimelineManager

// ============================================================
// RVA: 0x14b061c | Atlas.Networking.NetworkTimelineManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014b0b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b0b30) */

long * Atlas_Networking_NetworkTimelineManager__Init(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar11;
  uint extraout_w8;
  uint uVar12;
  long lVar13;
  long extraout_x9;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 unaff_x24;
  undefined1 ***pppuVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lVar10;
  
  if ((bRam0000000003eb4a8e & 1) == 0) {
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d3d568);
    func_0x00f78a20(0x3d1e230);
    func_0x00f78a20(0x3d5ad98);
    bRam0000000003eb4a8e = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>_TypeInfo*/ uRam0000000003d1e230);
  /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$.ctor*/ func_0x02559a68(uVar4,uRam0000000003d3d568);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  puVar16 = (undefined8 *)0x3d3d568;
  uVar17 = 0x3d1e230;
  if (param_2 != 0) {
    lVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55150);
    *(long *)(param_1 + 0x10) = lVar5;
    if (((lVar5 != 0) &&
        (puVar16 = (undefined8 *)0x3d3d568, uVar17 = 0x3d1e230, *(long *)(lVar5 + 0x20) != 0)) &&
       (puVar16 = *(undefined8 **)(*(long *)(lVar5 + 0x20) + 0x10), puVar16 != (undefined8 *)0x0)) {
      uVar17 = 0x3d1b4e8;
      unaff_x24 = 0x3d5a000;
      uVar14 = puVar16[3];
      uVar4 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(uVar4,param_1,uRam0000000003d5ad98,uRam0000000003d2a1d8);
      plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar14,uVar4,0);
      if ((plVar6 != (long *)0x0) && (uVar14 = 0x3d1b4e8, *plVar6 != /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8))
      goto LAB_014b07a0;
      puVar16[3] = plVar6;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar5 != 0)) {
        plVar6 = (long *)/*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_68,lVar5,0);
        *(undefined8 *)(param_1 + 0x28) = uStack_60;
        *(undefined8 *)(param_1 + 0x20) = uStack_68;
        *(undefined8 *)(param_1 + 0x30) = uStack_58;
        return plVar6;
      }
    }
  }
  func_0x00f78af4();
  uVar14 = uVar17;
LAB_014b07a0:
  lVar5 = func_0x00f78e5c();
  puStack_78 = &Atlas_Networking_NetworkTimelineManager__DeInit;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a8f & 1) == 0) {
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d5ad98);
    bRam0000000003eb4a8f = 1;
  }
  if (((*(long *)(lVar5 + 0x10) == 0) ||
      (lVar13 = *(long *)(*(long *)(lVar5 + 0x10) + 0x20), lVar13 == 0)) ||
     (puVar16 = *(undefined8 **)(lVar13 + 0x10), puVar16 == (undefined8 *)0x0)) {
    func_0x00f78af4();
  }
  else {
    uVar14 = 0x3d1b4e8;
    unaff_x24 = 0x3d5a000;
    uVar17 = puVar16[3];
    uVar4 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(uVar4,lVar5,uRam0000000003d5ad98,uRam0000000003d2a1d8);
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar4,0);
    if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      puVar16[3] = plVar6;
      return plVar6;
    }
  }
  plVar7 = (long *)func_0x00f78e5c();
  puStack_c8 = &Atlas_Networking_NetworkTimelineManager__Update;
  pppuVar18 = &ppuStack_d0;
  puVar15 = (undefined8 *)0x3eb4000;
  plVar6 = plVar7;
  ppuStack_d0 = &puStack_80;
  if ((bRam0000000003eb4a90 & 1) == 0) {
    func_0x00f78a20(0x3d33600);
    func_0x00f78a20(0x3d33608);
    func_0x00f78a20(0x3d33610);
    func_0x00f78a20(0x3d3d578);
    plVar6 = (long *)func_0x00f78a20(0x3d25238);
    bRam0000000003eb4a90 = 1;
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  if (*(char *)((long)plVar7 + 0x24) == '\0') {
    return plVar6;
  }
  if ((plVar7[2] != 0) && (lVar5 = *(long *)(plVar7[2] + 0x20), lVar5 != 0)) {
    uVar4 = 0x3d25000;
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_148,lVar5,0);
    uStack_158 = uStack_140;
    uStack_160 = uStack_148;
    uStack_150 = uStack_138;
    puVar15 = (undefined8 *)/*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(plVar7 + 4,&uStack_160,0);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_108 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858((double)((ulong)puVar15 & 0xffffffff),0);
    uVar17 = /*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_108,0);
    if (plVar7[3] != 0) {
      /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$GetEnumerator*/ func_0x0255b234(&uStack_130,plVar7[3],uRam0000000003d3d578);
      while( true ) {
        uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$MoveNext*/ func_0x01f80a64(&uStack_130,uRam0000000003d33608);
        lVar5 = lStack_120;
        if ((uVar8 & 1) == 0) {
          plVar6 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(&uStack_130,uRam0000000003d33600);
          return plVar6;
        }
        if (lStack_120 == 0) break;
        _fmod(uVar17,uStack_118);
        /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar5,0);
        /*UnityEngine.Playables.PlayableDirector$$Evaluate*/ func_0x03282c00(lVar5,0);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14b0a28);
      (*pcVar1)();
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    plVar7 = (long *)*plVar7;
    ___cxa_end_catch();
    plVar6 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(&uStack_130,*puVar15);
    if (plVar7 == (long *)0x0) {
      return plVar6;
    }
    func_0x00f78ac0(plVar7,0);
  }
  auVar22._8_8_ = plVar7;
  auVar22._0_8_ = puVar15;
  puVar19 = &Atlas_Networking_NetworkTimelineManager__AddDirector;
  auVar21 = __Unwind_Resume();
  puVar15 = &uStack_160;
  do {
    lVar13 = auVar21._8_8_;
    lVar5 = auVar21._0_8_;
    *(undefined8 **)((long)puVar15 + -0x30) = puVar16;
    *(undefined8 *)((long)puVar15 + -0x28) = uVar4;
    *(undefined1 (*) [16])((long)puVar15 + -0x20) = auVar22;
    *(undefined1 ****)((long)puVar15 + -0x10) = pppuVar18;
    *(undefined **)((long)puVar15 + -8) = puVar19;
    if ((bRam0000000003eb4a91 & 1) == 0) {
      func_0x00f78a20(0x3d3d570);
      bRam0000000003eb4a91 = 1;
    }
    if (lVar13 != 0) {
      plVar6 = *(long **)(lVar5 + 0x18);
      puVar20 = (undefined8 *)/*UnityEngine.Playables.PlayableDirector$$get_duration*/ func_0x03282bc0(lVar13,0);
      lVar5 = 0;
      if (plVar6 != (long *)0x0) {
        puVar16 = *(undefined8 **)((long)puVar15 + -0x20);
        plVar7 = *(long **)((long)puVar15 + -0x18);
        uVar17 = *(undefined8 *)((long)puVar15 + -0x30);
        lVar10 = *(long *)((long)puVar15 + -0x28);
        *(undefined8 *)((long)puVar15 + -0x30) = uVar17;
        *(long *)((long)puVar15 + -0x28) = lVar10;
        *(undefined8 **)((long)puVar15 + -0x20) = puVar16;
        *(long **)((long)puVar15 + -0x18) = plVar7;
        *(undefined8 *)((long)puVar15 + -0x10) = *(undefined8 *)((long)puVar15 + -0x10);
        *(undefined8 *)((long)puVar15 + -8) = *(undefined8 *)((long)puVar15 + -8);
        lVar5 = plVar6[2];
        puVar11 = puVar20;
        if (lVar5 == 0) {
code_r0x0255a794:
          lVar13 = lVar10;
          puVar20 = puVar16;
          plVar6 = plVar7;
          plVar9 = (long *)func_0x00f78af4();
          lVar5 = extraout_x9;
          uVar12 = extraout_w8;
code_r0x0255a798:
          *(uint *)(plVar6 + 3) = uVar12 + 1;
        }
        else {
          uVar12 = *(uint *)(plVar6 + 3);
          plVar9 = plVar6;
          if (uVar12 != *(uint *)(lVar5 + 0x18)) goto code_r0x0255a798;
          puVar11 = *(undefined8 **)
                     (*(long *)(*(long *)(lRam0000000003d3d570 + 0x18) + 0xc0) + 0x60);
          plVar9 = (long *)(*(code *)*puVar11)(plVar6,uVar12 + 1);
          lVar5 = plVar6[2];
          uVar12 = *(uint *)(plVar6 + 3);
          *(uint *)(plVar6 + 3) = uVar12 + 1;
          plVar7 = plVar6;
          puVar16 = puVar20;
          lVar10 = lVar13;
          if (lVar5 == 0) goto code_r0x0255a794;
        }
        if (uVar12 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar12 * 0x10;
          *(long *)(lVar5 + 0x20) = lVar13;
          *(undefined8 **)(lVar5 + 0x28) = puVar20;
          *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
          return plVar9;
        }
        uVar4 = func_0x00f78b24();
        auVar21 = func_0x00f78ac0(uVar4,0);
        plVar7 = auVar21._8_8_;
        lVar5 = auVar21._0_8_;
        *(undefined8 *)((long)puVar15 + -0x70) = unaff_x24;
        *(undefined8 *)((long)puVar15 + -0x68) = uVar14;
        *(undefined8 *)((long)puVar15 + -0x60) = uVar17;
        *(long *)((long)puVar15 + -0x58) = lVar13;
        *(undefined8 **)((long)puVar15 + -0x50) = puVar20;
        *(long **)((long)puVar15 + -0x48) = plVar6;
        *(undefined1 **)((long)puVar15 + -0x40) = (undefined1 *)((long)puVar15 + -0x10);
        *(undefined **)((long)puVar15 + -0x38) =
             &
             System_Collections_Generic_List_NetworkTimelineManager_DirectorsWrapper___System_Collections_IList_Add
        ;
        (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x48))(plVar7,0x14);
        if (lVar5 != 0) {
          pcVar1 = (code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x28);
          lVar13 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x38);
          if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar13);
          }
          if (plVar7 != (long *)0x0) {
            if (*(long *)(*plVar7 + 0x40) == *(long *)(lVar13 + 0x40)) {
              puVar16 = (undefined8 *)func_0x00f78ae4(plVar7);
              (*pcVar1)(lVar5,*puVar16,puVar16[1],
                        *(undefined8 *)(*(long *)(puVar11[3] + 0xc0) + 0x28));
              iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x68))(lVar5);
              return (long *)(ulong)(iVar3 - 1);
            }
            func_0x00f78e5c(plVar7,lVar13);
            goto code_r0x0255a980;
          }
        }
        func_0x00f78af4();
code_r0x0255a980:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x255a984);
        (*pcVar1)();
      }
    }
    auVar22 = func_0x00f78af4();
    lVar10 = auVar22._8_8_;
    puVar2 = (undefined1 *)((long)puVar15 + -0x60);
    *(undefined8 **)((long)puVar15 + -0x60) = puVar16;
    *(undefined8 *)((long)puVar15 + -0x58) = 0x3eb4000;
    *(long *)((long)puVar15 + -0x50) = lVar5;
    *(long *)((long)puVar15 + -0x48) = lVar13;
    *(undefined1 **)((long)puVar15 + -0x40) = (undefined1 *)((long)puVar15 + -0x10);
    *(undefined **)((long)puVar15 + -0x38) = &Atlas_Networking_NetworkTimelineManager__AddDirectors;
    pppuVar18 = (undefined1 ***)((long)puVar15 + -0x40);
    if ((lVar10 == 0) || ((int)*(ulong *)(lVar10 + 0x18) < 1)) {
      return auVar22._0_8_;
    }
    uVar4 = 0;
    puVar16 = (undefined8 *)(lVar10 + 0x20);
    if ((*(ulong *)(lVar10 + 0x18) & 0xffffffff) == 0) {
      uVar17 = func_0x00f78b24();
      puVar19 = &Atlas_Networking_NetworkTimelineManager__SetAllDirectorsToManual;
      lVar5 = func_0x00f78ac0(uVar17,0);
      while( true ) {
        *(undefined1 (*) [16])(puVar2 + -0x20) = auVar22;
        *(undefined1 ****)(puVar2 + -0x10) = pppuVar18;
        *(undefined **)(puVar2 + -8) = puVar19;
        pppuVar18 = (undefined1 ***)(puVar2 + -0x10);
        if ((bRam0000000003eb4a92 & 1) == 0) {
          func_0x00f78a20(0x3d33600);
          func_0x00f78a20(0x3d33608);
          func_0x00f78a20(0x3d33610);
          func_0x00f78a20(0x3d3d578);
          bRam0000000003eb4a92 = 1;
        }
        *(undefined8 *)(puVar2 + -0x38) = 0;
        *(undefined8 *)(puVar2 + -0x40) = 0;
        *(undefined8 *)(puVar2 + -0x28) = 0;
        *(undefined8 *)(puVar2 + -0x30) = 0;
        if (*(long *)(lVar5 + 0x18) != 0) break;
        func_0x00f78af4();
        if (extraout_w1_00 == 1) {
          plVar6 = (long *)___cxa_begin_catch();
          lVar5 = *plVar6;
          ___cxa_end_catch();
          plVar6 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(puVar2 + -0x40,uRam0000000003d33600);
          if (lVar5 == 0) {
            return plVar6;
          }
          func_0x00f78ac0(lVar5,0);
        }
        auVar22._8_8_ = lVar5;
        auVar22._0_8_ = 0x3eb4000;
        puVar19 = &Atlas_Networking_NetworkTimelineManager__OnGameModeStarted;
        auVar21 = __Unwind_Resume();
        puVar16 = auVar21._8_8_;
        lVar5 = auVar21._0_8_;
        uVar17 = *puVar16;
        uVar14 = puVar16[3];
        uVar4 = puVar16[2];
        *(undefined8 *)(puVar2 + -0x68) = puVar16[1];
        *(undefined8 *)(puVar2 + -0x70) = uVar17;
        *(undefined8 *)(puVar2 + -0x58) = uVar14;
        *(undefined8 *)(puVar2 + -0x60) = uVar4;
        *(undefined8 *)(puVar2 + -0x50) = puVar16[4];
        uVar17 = *(undefined8 *)(puVar2 + -0x68);
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(puVar2 + -0x60);
        *(undefined8 *)(lVar5 + 0x20) = uVar17;
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(puVar2 + -0x58);
        puVar2 = puVar2 + -0x40;
      }
      /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$GetEnumerator*/ func_0x0255b234(puVar2 + -0x40,*(long *)(lVar5 + 0x18),uRam0000000003d3d578);
      while( true ) {
        uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$MoveNext*/ func_0x01f80a64(puVar2 + -0x40,uRam0000000003d33608);
        if ((uVar8 & 1) == 0) {
          plVar6 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(puVar2 + -0x40,uRam0000000003d33600);
          return plVar6;
        }
        if (*(long *)(puVar2 + -0x30) == 0) break;
        /*UnityEngine.Playables.PlayableDirector$$set_timeUpdateMode*/ func_0x03282a10(*(long *)(puVar2 + -0x30),3,0);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14b0c34);
      (*pcVar1)();
    }
    auVar21._8_8_ = *puVar16;
    auVar21._0_8_ = auVar22._0_8_;
    puVar19 = &UNK_014b0b30;
    puVar15 = (undefined8 *)((long)puVar15 + -0x60);
  } while( true );
}



// ============================================================
// RVA: 0x14b07a4 | Atlas.Networking.NetworkTimelineManager.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014b0b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b0b30) */

long * Atlas_Networking_NetworkTimelineManager__DeInit(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar11;
  uint extraout_w8;
  uint uVar12;
  long lVar13;
  long extraout_x9;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  long lVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  long lVar10;
  
  if ((bRam0000000003eb4a8f & 1) == 0) {
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d5ad98);
    bRam0000000003eb4a8f = 1;
  }
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar13 == 0)) ||
     (unaff_x22 = *(undefined8 **)(lVar13 + 0x10), unaff_x22 == (undefined8 *)0x0)) {
    func_0x00f78af4();
  }
  else {
    unaff_x23 = 0x3d1b4e8;
    unaff_x24 = 0x3d5a000;
    uVar14 = unaff_x22[3];
    unaff_x21 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(unaff_x21,param_1,uRam0000000003d5ad98,uRam0000000003d2a1d8);
    plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar14,unaff_x21,0);
    if ((plVar5 == (long *)0x0) || (*plVar5 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      unaff_x22[3] = plVar5;
      return plVar5;
    }
  }
  plVar6 = (long *)func_0x00f78e5c();
  puStack_58 = &Atlas_Networking_NetworkTimelineManager__Update;
  ppuVar17 = &puStack_60;
  puVar15 = (undefined8 *)0x3eb4000;
  plVar5 = plVar6;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a90 & 1) == 0) {
    func_0x00f78a20(0x3d33600);
    func_0x00f78a20(0x3d33608);
    func_0x00f78a20(0x3d33610);
    func_0x00f78a20(0x3d3d578);
    plVar5 = (long *)func_0x00f78a20(0x3d25238);
    bRam0000000003eb4a90 = 1;
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  if (*(char *)((long)plVar6 + 0x24) == '\0') {
    return plVar5;
  }
  if ((plVar6[2] != 0) && (lVar13 = *(long *)(plVar6[2] + 0x20), lVar13 != 0)) {
    unaff_x21 = 0x3d25000;
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_d8,lVar13,0);
    uStack_e8 = uStack_d0;
    uStack_f0 = uStack_d8;
    uStack_e0 = uStack_c8;
    puVar15 = (undefined8 *)/*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(plVar6 + 4,&uStack_f0,0);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_98 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858((double)((ulong)puVar15 & 0xffffffff),0);
    uVar14 = /*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_98,0);
    if (plVar6[3] != 0) {
      /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$GetEnumerator*/ func_0x0255b234(&uStack_c0,plVar6[3],uRam0000000003d3d578);
      while( true ) {
        uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$MoveNext*/ func_0x01f80a64(&uStack_c0,uRam0000000003d33608);
        lVar13 = lStack_b0;
        if ((uVar7 & 1) == 0) {
          plVar5 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(&uStack_c0,uRam0000000003d33600);
          return plVar5;
        }
        if (lStack_b0 == 0) break;
        _fmod(uVar14,uStack_a8);
        /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar13,0);
        /*UnityEngine.Playables.PlayableDirector$$Evaluate*/ func_0x03282c00(lVar13,0);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14b0a28);
      (*pcVar2)();
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    plVar6 = (long *)*plVar6;
    ___cxa_end_catch();
    plVar5 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(&uStack_c0,*puVar15);
    if (plVar6 == (long *)0x0) {
      return plVar5;
    }
    func_0x00f78ac0(plVar6,0);
  }
  auVar22._8_8_ = plVar6;
  auVar22._0_8_ = puVar15;
  puVar18 = &Atlas_Networking_NetworkTimelineManager__AddDirector;
  auVar21 = __Unwind_Resume();
  puVar15 = &uStack_f0;
  do {
    lVar16 = auVar21._8_8_;
    lVar13 = auVar21._0_8_;
    *(undefined8 **)((long)puVar15 + -0x30) = unaff_x22;
    *(undefined8 *)((long)puVar15 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)puVar15 + -0x20) = auVar22;
    *(undefined1 ***)((long)puVar15 + -0x10) = ppuVar17;
    *(undefined **)((long)puVar15 + -8) = puVar18;
    if ((bRam0000000003eb4a91 & 1) == 0) {
      func_0x00f78a20(0x3d3d570);
      bRam0000000003eb4a91 = 1;
    }
    if (lVar16 != 0) {
      plVar5 = *(long **)(lVar13 + 0x18);
      puVar19 = (undefined8 *)/*UnityEngine.Playables.PlayableDirector$$get_duration*/ func_0x03282bc0(lVar16,0);
      lVar13 = 0;
      if (plVar5 != (long *)0x0) {
        puVar1 = *(undefined8 **)((long)puVar15 + -0x20);
        plVar6 = *(long **)((long)puVar15 + -0x18);
        uVar14 = *(undefined8 *)((long)puVar15 + -0x30);
        lVar10 = *(long *)((long)puVar15 + -0x28);
        *(undefined8 *)((long)puVar15 + -0x30) = uVar14;
        *(long *)((long)puVar15 + -0x28) = lVar10;
        *(undefined8 **)((long)puVar15 + -0x20) = puVar1;
        *(long **)((long)puVar15 + -0x18) = plVar6;
        *(undefined8 *)((long)puVar15 + -0x10) = *(undefined8 *)((long)puVar15 + -0x10);
        *(undefined8 *)((long)puVar15 + -8) = *(undefined8 *)((long)puVar15 + -8);
        lVar13 = plVar5[2];
        puVar11 = puVar19;
        if (lVar13 == 0) {
code_r0x0255a794:
          lVar16 = lVar10;
          puVar19 = puVar1;
          plVar5 = plVar6;
          plVar8 = (long *)func_0x00f78af4();
          lVar13 = extraout_x9;
          uVar12 = extraout_w8;
code_r0x0255a798:
          *(uint *)(plVar5 + 3) = uVar12 + 1;
        }
        else {
          uVar12 = *(uint *)(plVar5 + 3);
          plVar8 = plVar5;
          if (uVar12 != *(uint *)(lVar13 + 0x18)) goto code_r0x0255a798;
          puVar11 = *(undefined8 **)
                     (*(long *)(*(long *)(lRam0000000003d3d570 + 0x18) + 0xc0) + 0x60);
          plVar8 = (long *)(*(code *)*puVar11)(plVar5,uVar12 + 1);
          lVar13 = plVar5[2];
          uVar12 = *(uint *)(plVar5 + 3);
          *(uint *)(plVar5 + 3) = uVar12 + 1;
          plVar6 = plVar5;
          puVar1 = puVar19;
          lVar10 = lVar16;
          if (lVar13 == 0) goto code_r0x0255a794;
        }
        if (uVar12 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + (long)(int)uVar12 * 0x10;
          *(long *)(lVar13 + 0x20) = lVar16;
          *(undefined8 **)(lVar13 + 0x28) = puVar19;
          *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
          return plVar8;
        }
        uVar9 = func_0x00f78b24();
        auVar21 = func_0x00f78ac0(uVar9,0);
        plVar6 = auVar21._8_8_;
        lVar13 = auVar21._0_8_;
        *(undefined8 *)((long)puVar15 + -0x70) = unaff_x24;
        *(undefined8 *)((long)puVar15 + -0x68) = unaff_x23;
        *(undefined8 *)((long)puVar15 + -0x60) = uVar14;
        *(long *)((long)puVar15 + -0x58) = lVar16;
        *(undefined8 **)((long)puVar15 + -0x50) = puVar19;
        *(long **)((long)puVar15 + -0x48) = plVar5;
        *(undefined1 **)((long)puVar15 + -0x40) = (undefined1 *)((long)puVar15 + -0x10);
        *(undefined **)((long)puVar15 + -0x38) =
             &
             System_Collections_Generic_List_NetworkTimelineManager_DirectorsWrapper___System_Collections_IList_Add
        ;
        (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x48))(plVar6,0x14);
        if (lVar13 != 0) {
          pcVar2 = (code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x28);
          lVar16 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x38);
          if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar16);
          }
          if (plVar6 != (long *)0x0) {
            if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar16 + 0x40)) {
              puVar15 = (undefined8 *)func_0x00f78ae4(plVar6);
              (*pcVar2)(lVar13,*puVar15,puVar15[1],
                        *(undefined8 *)(*(long *)(puVar11[3] + 0xc0) + 0x28));
              iVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x68))(lVar13);
              return (long *)(ulong)(iVar4 - 1);
            }
            func_0x00f78e5c(plVar6,lVar16);
            goto code_r0x0255a980;
          }
        }
        func_0x00f78af4();
code_r0x0255a980:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x255a984);
        (*pcVar2)();
      }
    }
    auVar22 = func_0x00f78af4();
    lVar10 = auVar22._8_8_;
    puVar3 = (undefined1 *)((long)puVar15 + -0x60);
    *(undefined8 **)((long)puVar15 + -0x60) = unaff_x22;
    *(undefined8 *)((long)puVar15 + -0x58) = 0x3eb4000;
    *(long *)((long)puVar15 + -0x50) = lVar13;
    *(long *)((long)puVar15 + -0x48) = lVar16;
    *(undefined1 **)((long)puVar15 + -0x40) = (undefined1 *)((long)puVar15 + -0x10);
    *(undefined **)((long)puVar15 + -0x38) = &Atlas_Networking_NetworkTimelineManager__AddDirectors;
    ppuVar17 = (undefined1 **)((long)puVar15 + -0x40);
    if ((lVar10 == 0) || ((int)*(ulong *)(lVar10 + 0x18) < 1)) {
      return auVar22._0_8_;
    }
    unaff_x21 = 0;
    unaff_x22 = (undefined8 *)(lVar10 + 0x20);
    if ((*(ulong *)(lVar10 + 0x18) & 0xffffffff) == 0) {
      uVar14 = func_0x00f78b24();
      puVar18 = &Atlas_Networking_NetworkTimelineManager__SetAllDirectorsToManual;
      lVar13 = func_0x00f78ac0(uVar14,0);
      while( true ) {
        *(undefined1 (*) [16])(puVar3 + -0x20) = auVar22;
        *(undefined1 ***)(puVar3 + -0x10) = ppuVar17;
        *(undefined **)(puVar3 + -8) = puVar18;
        ppuVar17 = (undefined1 **)(puVar3 + -0x10);
        if ((bRam0000000003eb4a92 & 1) == 0) {
          func_0x00f78a20(0x3d33600);
          func_0x00f78a20(0x3d33608);
          func_0x00f78a20(0x3d33610);
          func_0x00f78a20(0x3d3d578);
          bRam0000000003eb4a92 = 1;
        }
        *(undefined8 *)(puVar3 + -0x38) = 0;
        *(undefined8 *)(puVar3 + -0x40) = 0;
        *(undefined8 *)(puVar3 + -0x28) = 0;
        *(undefined8 *)(puVar3 + -0x30) = 0;
        if (*(long *)(lVar13 + 0x18) != 0) break;
        func_0x00f78af4();
        if (extraout_w1_00 == 1) {
          plVar5 = (long *)___cxa_begin_catch();
          lVar13 = *plVar5;
          ___cxa_end_catch();
          plVar5 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(puVar3 + -0x40,uRam0000000003d33600);
          if (lVar13 == 0) {
            return plVar5;
          }
          func_0x00f78ac0(lVar13,0);
        }
        auVar22._8_8_ = lVar13;
        auVar22._0_8_ = 0x3eb4000;
        puVar18 = &Atlas_Networking_NetworkTimelineManager__OnGameModeStarted;
        auVar21 = __Unwind_Resume();
        puVar15 = auVar21._8_8_;
        lVar13 = auVar21._0_8_;
        uVar14 = *puVar15;
        uVar20 = puVar15[3];
        uVar9 = puVar15[2];
        *(undefined8 *)(puVar3 + -0x68) = puVar15[1];
        *(undefined8 *)(puVar3 + -0x70) = uVar14;
        *(undefined8 *)(puVar3 + -0x58) = uVar20;
        *(undefined8 *)(puVar3 + -0x60) = uVar9;
        *(undefined8 *)(puVar3 + -0x50) = puVar15[4];
        uVar14 = *(undefined8 *)(puVar3 + -0x68);
        *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(puVar3 + -0x60);
        *(undefined8 *)(lVar13 + 0x20) = uVar14;
        *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)(puVar3 + -0x58);
        puVar3 = puVar3 + -0x40;
      }
      /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$GetEnumerator*/ func_0x0255b234(puVar3 + -0x40,*(long *)(lVar13 + 0x18),uRam0000000003d3d578);
      while( true ) {
        uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$MoveNext*/ func_0x01f80a64(puVar3 + -0x40,uRam0000000003d33608);
        if ((uVar7 & 1) == 0) {
          plVar5 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(puVar3 + -0x40,uRam0000000003d33600);
          return plVar5;
        }
        if (*(long *)(puVar3 + -0x30) == 0) break;
        /*UnityEngine.Playables.PlayableDirector$$set_timeUpdateMode*/ func_0x03282a10(*(long *)(puVar3 + -0x30),3,0);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14b0c34);
      (*pcVar2)();
    }
    auVar21._8_8_ = *unaff_x22;
    auVar21._0_8_ = auVar22._0_8_;
    puVar18 = &UNK_014b0b30;
    puVar15 = (undefined8 *)((long)puVar15 + -0x60);
  } while( true );
}



// ============================================================
// RVA: 0x14b0890 | Atlas.Networking.NetworkTimelineManager.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x014b0b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b0b30) */

ulong Atlas_Networking_NetworkTimelineManager__Update(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar13;
  uint extraout_w8;
  uint uVar14;
  long extraout_x9;
  undefined8 *puVar15;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  long lVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  long lVar12;
  
  puVar17 = &stack0xfffffffffffffff0;
  puVar15 = (undefined8 *)0x3eb4000;
  uVar6 = param_1;
  if ((bRam0000000003eb4a90 & 1) == 0) {
    func_0x00f78a20(0x3d33600);
    func_0x00f78a20(0x3d33608);
    func_0x00f78a20(0x3d33610);
    func_0x00f78a20(0x3d3d578);
    uVar6 = func_0x00f78a20(0x3d25238);
    bRam0000000003eb4a90 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    return uVar6;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar7 != 0)) {
    unaff_x21 = 0x3d25000;
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_88,lVar7,0);
    uStack_98 = uStack_80;
    uStack_a0 = uStack_88;
    uStack_90 = uStack_78;
    puVar15 = (undefined8 *)/*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(param_1 + 0x20,&uStack_a0,0);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_48 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858((double)((ulong)puVar15 & 0xffffffff),0);
    uVar19 = /*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_48,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$GetEnumerator*/ func_0x0255b234(&uStack_70,*(long *)(param_1 + 0x18),uRam0000000003d3d578);
      while( true ) {
        uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$MoveNext*/ func_0x01f80a64(&uStack_70,uRam0000000003d33608);
        lVar7 = lStack_60;
        if ((uVar6 & 1) == 0) {
          uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(&uStack_70,uRam0000000003d33600);
          return uVar6;
        }
        if (lStack_60 == 0) break;
        _fmod(uVar19,uStack_58);
        /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar7,0);
        /*UnityEngine.Playables.PlayableDirector$$Evaluate*/ func_0x03282c00(lVar7,0);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x14b0a28);
      (*pcVar3)();
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    puVar8 = (ulong *)___cxa_begin_catch();
    param_1 = *puVar8;
    ___cxa_end_catch();
    uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(&uStack_70,*puVar15);
    if (param_1 == 0) {
      return uVar6;
    }
    func_0x00f78ac0(param_1,0);
  }
  auVar23._8_8_ = param_1;
  auVar23._0_8_ = puVar15;
  puVar18 = &Atlas_Networking_NetworkTimelineManager__AddDirector;
  auVar22 = __Unwind_Resume();
  puVar15 = &uStack_a0;
  do {
    lVar16 = auVar22._8_8_;
    lVar7 = auVar22._0_8_;
    *(undefined8 **)((long)puVar15 + -0x30) = unaff_x22;
    *(undefined8 *)((long)puVar15 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)puVar15 + -0x20) = auVar23;
    *(undefined1 **)((long)puVar15 + -0x10) = puVar17;
    *(undefined **)((long)puVar15 + -8) = puVar18;
    if ((bRam0000000003eb4a91 & 1) == 0) {
      func_0x00f78a20(0x3d3d570);
      bRam0000000003eb4a91 = 1;
    }
    if (lVar16 != 0) {
      uVar6 = *(ulong *)(lVar7 + 0x18);
      puVar20 = (undefined8 *)/*UnityEngine.Playables.PlayableDirector$$get_duration*/ func_0x03282bc0(lVar16,0);
      lVar7 = 0;
      if (uVar6 != 0) {
        puVar1 = *(undefined8 **)((long)puVar15 + -0x20);
        uVar2 = *(ulong *)((long)puVar15 + -0x18);
        uVar19 = *(undefined8 *)((long)puVar15 + -0x30);
        lVar12 = *(long *)((long)puVar15 + -0x28);
        *(undefined8 *)((long)puVar15 + -0x30) = uVar19;
        *(long *)((long)puVar15 + -0x28) = lVar12;
        *(undefined8 **)((long)puVar15 + -0x20) = puVar1;
        *(ulong *)((long)puVar15 + -0x18) = uVar2;
        *(undefined8 *)((long)puVar15 + -0x10) = *(undefined8 *)((long)puVar15 + -0x10);
        *(undefined8 *)((long)puVar15 + -8) = *(undefined8 *)((long)puVar15 + -8);
        lVar7 = *(long *)(uVar6 + 0x10);
        puVar13 = puVar20;
        if (lVar7 == 0) {
code_r0x0255a794:
          lVar16 = lVar12;
          puVar20 = puVar1;
          uVar6 = uVar2;
          uVar10 = func_0x00f78af4();
          lVar7 = extraout_x9;
          uVar14 = extraout_w8;
code_r0x0255a798:
          *(uint *)(uVar6 + 0x18) = uVar14 + 1;
        }
        else {
          uVar14 = *(uint *)(uVar6 + 0x18);
          uVar10 = uVar6;
          if (uVar14 != *(uint *)(lVar7 + 0x18)) goto code_r0x0255a798;
          puVar13 = *(undefined8 **)
                     (*(long *)(*(long *)(lRam0000000003d3d570 + 0x18) + 0xc0) + 0x60);
          uVar10 = (*(code *)*puVar13)(uVar6,uVar14 + 1);
          lVar7 = *(long *)(uVar6 + 0x10);
          uVar14 = *(uint *)(uVar6 + 0x18);
          *(uint *)(uVar6 + 0x18) = uVar14 + 1;
          uVar2 = uVar6;
          puVar1 = puVar20;
          lVar12 = lVar16;
          if (lVar7 == 0) goto code_r0x0255a794;
        }
        if (uVar14 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar14 * 0x10;
          *(long *)(lVar7 + 0x20) = lVar16;
          *(undefined8 **)(lVar7 + 0x28) = puVar20;
          *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
          return uVar10;
        }
        uVar11 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar11,0);
        plVar9 = auVar22._8_8_;
        lVar7 = auVar22._0_8_;
        *(undefined8 *)((long)puVar15 + -0x70) = unaff_x24;
        *(undefined8 *)((long)puVar15 + -0x68) = unaff_x23;
        *(undefined8 *)((long)puVar15 + -0x60) = uVar19;
        *(long *)((long)puVar15 + -0x58) = lVar16;
        *(undefined8 **)((long)puVar15 + -0x50) = puVar20;
        *(ulong *)((long)puVar15 + -0x48) = uVar6;
        *(undefined1 **)((long)puVar15 + -0x40) = (undefined1 *)((long)puVar15 + -0x10);
        *(undefined **)((long)puVar15 + -0x38) =
             &
             System_Collections_Generic_List_NetworkTimelineManager_DirectorsWrapper___System_Collections_IList_Add
        ;
        (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x48))(plVar9,0x14);
        if (lVar7 != 0) {
          pcVar3 = (code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x28);
          lVar16 = *(long *)(*(long *)(puVar13[3] + 0xc0) + 0x38);
          if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar16);
          }
          if (plVar9 != (long *)0x0) {
            if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar16 + 0x40)) {
              puVar15 = (undefined8 *)func_0x00f78ae4(plVar9);
              (*pcVar3)(lVar7,*puVar15,puVar15[1],
                        *(undefined8 *)(*(long *)(puVar13[3] + 0xc0) + 0x28));
              iVar5 = (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x68))(lVar7);
              return (ulong)(iVar5 - 1);
            }
            func_0x00f78e5c(plVar9,lVar16);
            goto code_r0x0255a980;
          }
        }
        func_0x00f78af4();
code_r0x0255a980:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x255a984);
        (*pcVar3)();
      }
    }
    auVar23 = func_0x00f78af4();
    lVar12 = auVar23._8_8_;
    puVar4 = (undefined1 *)((long)puVar15 + -0x60);
    *(undefined8 **)((long)puVar15 + -0x60) = unaff_x22;
    *(undefined8 *)((long)puVar15 + -0x58) = 0x3eb4000;
    *(long *)((long)puVar15 + -0x50) = lVar7;
    *(long *)((long)puVar15 + -0x48) = lVar16;
    *(undefined1 **)((long)puVar15 + -0x40) = (undefined1 *)((long)puVar15 + -0x10);
    *(undefined **)((long)puVar15 + -0x38) = &Atlas_Networking_NetworkTimelineManager__AddDirectors;
    puVar17 = (undefined1 *)((long)puVar15 + -0x40);
    if ((lVar12 == 0) || ((int)*(ulong *)(lVar12 + 0x18) < 1)) {
      return auVar23._0_8_;
    }
    unaff_x21 = 0;
    unaff_x22 = (undefined8 *)(lVar12 + 0x20);
    if ((*(ulong *)(lVar12 + 0x18) & 0xffffffff) == 0) {
      uVar19 = func_0x00f78b24();
      puVar18 = &Atlas_Networking_NetworkTimelineManager__SetAllDirectorsToManual;
      lVar7 = func_0x00f78ac0(uVar19,0);
      while( true ) {
        *(undefined1 (*) [16])(puVar4 + -0x20) = auVar23;
        *(undefined1 **)(puVar4 + -0x10) = puVar17;
        *(undefined **)(puVar4 + -8) = puVar18;
        puVar17 = puVar4 + -0x10;
        if ((bRam0000000003eb4a92 & 1) == 0) {
          func_0x00f78a20(0x3d33600);
          func_0x00f78a20(0x3d33608);
          func_0x00f78a20(0x3d33610);
          func_0x00f78a20(0x3d3d578);
          bRam0000000003eb4a92 = 1;
        }
        *(undefined8 *)(puVar4 + -0x38) = 0;
        *(undefined8 *)(puVar4 + -0x40) = 0;
        *(undefined8 *)(puVar4 + -0x28) = 0;
        *(undefined8 *)(puVar4 + -0x30) = 0;
        if (*(long *)(lVar7 + 0x18) != 0) break;
        func_0x00f78af4();
        if (extraout_w1_00 == 1) {
          plVar9 = (long *)___cxa_begin_catch();
          lVar7 = *plVar9;
          ___cxa_end_catch();
          uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(puVar4 + -0x40,uRam0000000003d33600);
          if (lVar7 == 0) {
            return uVar6;
          }
          func_0x00f78ac0(lVar7,0);
        }
        auVar23._8_8_ = lVar7;
        auVar23._0_8_ = 0x3eb4000;
        puVar18 = &Atlas_Networking_NetworkTimelineManager__OnGameModeStarted;
        auVar22 = __Unwind_Resume();
        puVar15 = auVar22._8_8_;
        lVar7 = auVar22._0_8_;
        uVar19 = *puVar15;
        uVar21 = puVar15[3];
        uVar11 = puVar15[2];
        *(undefined8 *)(puVar4 + -0x68) = puVar15[1];
        *(undefined8 *)(puVar4 + -0x70) = uVar19;
        *(undefined8 *)(puVar4 + -0x58) = uVar21;
        *(undefined8 *)(puVar4 + -0x60) = uVar11;
        *(undefined8 *)(puVar4 + -0x50) = puVar15[4];
        uVar19 = *(undefined8 *)(puVar4 + -0x68);
        *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(puVar4 + -0x60);
        *(undefined8 *)(lVar7 + 0x20) = uVar19;
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(puVar4 + -0x58);
        puVar4 = puVar4 + -0x40;
      }
      /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$GetEnumerator*/ func_0x0255b234(puVar4 + -0x40,*(long *)(lVar7 + 0x18),uRam0000000003d3d578);
      while( true ) {
        uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$MoveNext*/ func_0x01f80a64(puVar4 + -0x40,uRam0000000003d33608);
        if ((uVar6 & 1) == 0) {
          uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(puVar4 + -0x40,uRam0000000003d33600);
          return uVar6;
        }
        if (*(long *)(puVar4 + -0x30) == 0) break;
        /*UnityEngine.Playables.PlayableDirector$$set_timeUpdateMode*/ func_0x03282a10(*(long *)(puVar4 + -0x30),3,0);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x14b0c34);
      (*pcVar3)();
    }
    auVar22._8_8_ = *unaff_x22;
    auVar22._0_8_ = auVar23._0_8_;
    puVar18 = &UNK_014b0b30;
    puVar15 = (undefined8 *)((long)puVar15 + -0x60);
  } while( true );
}



// ============================================================
// RVA: 0x14b0a6c | Atlas.Networking.NetworkTimelineManager.AddDirector
// ============================================================

ulong Atlas_Networking_NetworkTimelineManager__AddDirector(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  int extraout_w1;
  undefined8 *puVar6;
  uint extraout_w8;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  undefined1 **ppuVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4a91 & 1) == 0) {
    func_0x00f78a20(0x3d3d570);
    bRam0000000003eb4a91 = 1;
  }
  if (param_2 == 0) {
LAB_014b0ae4:
    auVar20 = func_0x00f78af4();
    lVar9 = auVar20._8_8_;
    uVar4 = auVar20._0_8_;
    puVar1 = &stack0xffffffffffffffa0;
    puStack_38 = &Atlas_Networking_NetworkTimelineManager__AddDirectors;
    ppuVar14 = &puStack_40;
    uVar10 = uVar4;
    if ((lVar9 != 0) && (0 < (int)*(ulong *)(lVar9 + 0x18))) {
      uVar11 = 0;
      uVar8 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      puStack_40 = &stack0xfffffffffffffff0;
      do {
        if (uVar8 <= uVar11) {
          uVar5 = func_0x00f78b24();
          puVar15 = &Atlas_Networking_NetworkTimelineManager__SetAllDirectorsToManual;
          lVar9 = func_0x00f78ac0(uVar5,0);
          while( true ) {
            *(undefined1 (*) [16])(puVar1 + -0x20) = auVar20;
            *(undefined1 ***)(puVar1 + -0x10) = ppuVar14;
            *(undefined **)(puVar1 + -8) = puVar15;
            ppuVar14 = (undefined1 **)(puVar1 + -0x10);
            if ((bRam0000000003eb4a92 & 1) == 0) {
              func_0x00f78a20(0x3d33600);
              func_0x00f78a20(0x3d33608);
              func_0x00f78a20(0x3d33610);
              func_0x00f78a20(0x3d3d578);
              bRam0000000003eb4a92 = 1;
            }
            *(undefined8 *)(puVar1 + -0x38) = 0;
            *(undefined8 *)(puVar1 + -0x40) = 0;
            *(undefined8 *)(puVar1 + -0x28) = 0;
            *(undefined8 *)(puVar1 + -0x30) = 0;
            if (*(long *)(lVar9 + 0x18) != 0) break;
            func_0x00f78af4();
            if (extraout_w1 == 1) {
              plVar3 = (long *)___cxa_begin_catch();
              lVar9 = *plVar3;
              ___cxa_end_catch();
              uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(puVar1 + -0x40,uRam0000000003d33600);
              if (lVar9 == 0) {
                return uVar10;
              }
              func_0x00f78ac0(lVar9,0);
            }
            auVar20._8_8_ = lVar9;
            auVar20._0_8_ = 0x3eb4000;
            puVar15 = &Atlas_Networking_NetworkTimelineManager__OnGameModeStarted;
            auVar19 = __Unwind_Resume();
            puVar16 = auVar19._8_8_;
            lVar9 = auVar19._0_8_;
            uVar5 = *puVar16;
            uVar18 = puVar16[3];
            uVar17 = puVar16[2];
            *(undefined8 *)(puVar1 + -0x68) = puVar16[1];
            *(undefined8 *)(puVar1 + -0x70) = uVar5;
            *(undefined8 *)(puVar1 + -0x58) = uVar18;
            *(undefined8 *)(puVar1 + -0x60) = uVar17;
            *(undefined8 *)(puVar1 + -0x50) = puVar16[4];
            uVar5 = *(undefined8 *)(puVar1 + -0x68);
            *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(puVar1 + -0x60);
            *(undefined8 *)(lVar9 + 0x20) = uVar5;
            *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(puVar1 + -0x58);
            puVar1 = puVar1 + -0x40;
          }
          /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$GetEnumerator*/ func_0x0255b234(puVar1 + -0x40,*(long *)(lVar9 + 0x18),uRam0000000003d3d578);
          while( true ) {
            uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$MoveNext*/ func_0x01f80a64(puVar1 + -0x40,uRam0000000003d33608);
            if ((uVar10 & 1) == 0) {
              uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(puVar1 + -0x40,uRam0000000003d33600);
              return uVar10;
            }
            if (*(long *)(puVar1 + -0x30) == 0) break;
            /*UnityEngine.Playables.PlayableDirector$$set_timeUpdateMode*/ func_0x03282a10(*(long *)(puVar1 + -0x30),3,0);
          }
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x14b0c34);
          (*pcVar13)();
        }
        uVar10 = Atlas_Networking_NetworkTimelineManager__AddDirector
                           (uVar4,*(undefined8 *)(lVar9 + 0x20 + uVar11 * 8));
        uVar11 = uVar11 + 1;
        uVar8 = (ulong)*(uint *)(lVar9 + 0x18);
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    return uVar10;
  }
  uVar10 = *(ulong *)(param_1 + 0x18);
  puVar16 = (undefined8 *)/*UnityEngine.Playables.PlayableDirector$$get_duration*/ func_0x03282bc0(param_2,0);
  if (uVar10 == 0) goto LAB_014b0ae4;
  lVar9 = *(long *)(uVar10 + 0x10);
  puVar6 = puVar16;
  if (lVar9 == 0) {
code_r0x0255a794:
    param_2 = unaff_x21;
    puVar16 = unaff_x20;
    uVar10 = unaff_x19;
    uVar4 = func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar7 = extraout_w8;
code_r0x0255a798:
    *(uint *)(uVar10 + 0x18) = uVar7 + 1;
  }
  else {
    uVar7 = *(uint *)(uVar10 + 0x18);
    uVar4 = uVar10;
    if (uVar7 != *(uint *)(lVar9 + 0x18)) goto code_r0x0255a798;
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d570 + 0x18) + 0xc0) + 0x60);
    uVar4 = (*(code *)*puVar6)(uVar10,uVar7 + 1);
    lVar9 = *(long *)(uVar10 + 0x10);
    uVar7 = *(uint *)(uVar10 + 0x18);
    *(uint *)(uVar10 + 0x18) = uVar7 + 1;
    unaff_x19 = uVar10;
    unaff_x20 = puVar16;
    unaff_x21 = param_2;
    if (lVar9 == 0) goto code_r0x0255a794;
  }
  if (uVar7 < *(uint *)(lVar9 + 0x18)) {
    lVar9 = lVar9 + (long)(int)uVar7 * 0x10;
    *(long *)(lVar9 + 0x20) = param_2;
    *(undefined8 **)(lVar9 + 0x28) = puVar16;
    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
    return uVar4;
  }
  uVar5 = func_0x00f78b24();
  auVar20 = func_0x00f78ac0(uVar5,0);
  plVar3 = auVar20._8_8_;
  lVar9 = auVar20._0_8_;
  puStack_38 = &
               System_Collections_Generic_List_NetworkTimelineManager_DirectorsWrapper___System_Collections_IList_Add
  ;
  puStack_40 = &stack0xfffffffffffffff0;
  (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x48))(plVar3,0x14);
  if (lVar9 != 0) {
    pcVar13 = (code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x28);
    lVar12 = *(long *)(*(long *)(puVar6[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    if (plVar3 != (long *)0x0) {
      if (*(long *)(*plVar3 + 0x40) == *(long *)(lVar12 + 0x40)) {
        puVar16 = (undefined8 *)func_0x00f78ae4(plVar3);
        (*pcVar13)(lVar9,*puVar16,puVar16[1],*(undefined8 *)(*(long *)(puVar6[3] + 0xc0) + 0x28));
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x68))(lVar9);
        return (ulong)(iVar2 - 1);
      }
      func_0x00f78e5c(plVar3,lVar12);
      goto code_r0x0255a980;
    }
  }
  func_0x00f78af4();
code_r0x0255a980:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x255a984);
  (*pcVar13)();
}



// ============================================================
// RVA: 0x14b0ae8 | Atlas.Networking.NetworkTimelineManager.AddDirectors
// ============================================================

void Atlas_Networking_NetworkTimelineManager__AddDirectors(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int extraout_w1;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 *puVar4;
  
  if ((param_2 != 0) && (0 < (int)*(ulong *)(param_2 + 0x18))) {
    uVar10 = 0;
    uVar9 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    do {
      if (uVar9 <= uVar10) {
        uVar5 = func_0x00f78b24();
        puVar11 = &Atlas_Networking_NetworkTimelineManager__SetAllDirectorsToManual;
        lVar6 = func_0x00f78ac0(uVar5,0);
        puVar1 = &stack0xffffffffffffffd0;
        puVar3 = (undefined1 *)register0x00000008;
        while( true ) {
          puVar4 = puVar1;
          *(undefined8 *)(puVar4 + -0x20) = param_1;
          *(long *)(puVar4 + -0x18) = param_2;
          *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
          *(undefined **)(puVar4 + -8) = puVar11;
          param_1 = 0x3eb4000;
          if ((bRam0000000003eb4a92 & 1) == 0) {
            func_0x00f78a20(0x3d33600);
            func_0x00f78a20(0x3d33608);
            func_0x00f78a20(0x3d33610);
            func_0x00f78a20(0x3d3d578);
            bRam0000000003eb4a92 = 1;
          }
          *(undefined8 *)(puVar4 + -0x38) = 0;
          *(undefined8 *)(puVar4 + -0x40) = 0;
          *(undefined8 *)(puVar4 + -0x28) = 0;
          *(undefined8 *)(puVar4 + -0x30) = 0;
          if (*(long *)(lVar6 + 0x18) != 0) break;
          func_0x00f78af4();
          param_2 = lVar6;
          if (extraout_w1 == 1) {
            plVar7 = (long *)___cxa_begin_catch();
            param_2 = *plVar7;
            ___cxa_end_catch();
            /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(puVar4 + -0x40,uRam0000000003d33600);
            if (param_2 == 0) {
              return;
            }
            func_0x00f78ac0(param_2,0);
          }
          puVar11 = &Atlas_Networking_NetworkTimelineManager__OnGameModeStarted;
          auVar14 = __Unwind_Resume();
          puVar8 = auVar14._8_8_;
          lVar6 = auVar14._0_8_;
          uVar5 = *puVar8;
          uVar13 = puVar8[3];
          uVar12 = puVar8[2];
          *(undefined8 *)(puVar4 + -0x68) = puVar8[1];
          *(undefined8 *)(puVar4 + -0x70) = uVar5;
          *(undefined8 *)(puVar4 + -0x58) = uVar13;
          *(undefined8 *)(puVar4 + -0x60) = uVar12;
          *(undefined8 *)(puVar4 + -0x50) = puVar8[4];
          uVar5 = *(undefined8 *)(puVar4 + -0x68);
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(puVar4 + -0x60);
          *(undefined8 *)(lVar6 + 0x20) = uVar5;
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(puVar4 + -0x58);
          puVar1 = puVar4 + -0x40;
          puVar3 = puVar4;
        }
        /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$GetEnumerator*/ func_0x0255b234(puVar4 + -0x40,*(long *)(lVar6 + 0x18),uRam0000000003d3d578);
        while( true ) {
          uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$MoveNext*/ func_0x01f80a64(puVar4 + -0x40,uRam0000000003d33608);
          if ((uVar10 & 1) == 0) {
            /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60(puVar4 + -0x40,uRam0000000003d33600);
            return;
          }
          if (*(long *)(puVar4 + -0x30) == 0) break;
          /*UnityEngine.Playables.PlayableDirector$$set_timeUpdateMode*/ func_0x03282a10(*(long *)(puVar4 + -0x30),3,0);
        }
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14b0c34);
        (*pcVar2)();
      }
      Atlas_Networking_NetworkTimelineManager__AddDirector
                (param_1,*(undefined8 *)(param_2 + 0x20 + uVar10 * 8));
      uVar10 = uVar10 + 1;
      uVar9 = (ulong)*(uint *)(param_2 + 0x18);
    } while ((long)uVar10 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  return;
}



// ============================================================
// RVA: 0x14b0b5c | Atlas.Networking.NetworkTimelineManager.SetAllDirectorsToManual
// ============================================================

void Atlas_Networking_NetworkTimelineManager__SetAllDirectorsToManual(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w1;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4a92 & 1) == 0) {
      func_0x00f78a20(0x3d33600);
      func_0x00f78a20(0x3d33608);
      func_0x00f78a20(0x3d33610);
      func_0x00f78a20(0x3d3d578);
      bRam0000000003eb4a92 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
    if (*(long *)(param_1 + 0x18) != 0) break;
    func_0x00f78af4();
    unaff_x19 = param_1;
    if (extraout_w1 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      unaff_x19 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60((undefined1 *)((long)register0x00000008 + -0x40),uRam0000000003d33600);
      if (unaff_x19 == 0) {
        return;
      }
      func_0x00f78ac0(unaff_x19,0);
    }
    unaff_x30 = &Atlas_Networking_NetworkTimelineManager__OnGameModeStarted;
    auVar8 = __Unwind_Resume();
    puVar4 = auVar8._8_8_;
    param_1 = auVar8._0_8_;
    uVar5 = *puVar4;
    uVar7 = puVar4[3];
    uVar6 = puVar4[2];
    *(undefined8 *)((long)register0x00000008 + -0x68) = puVar4[1];
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar5;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x50) = puVar4[4];
    uVar5 = *(undefined8 *)((long)register0x00000008 + -0x68);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)((long)register0x00000008 + -0x58);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  }
  /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$GetEnumerator*/ func_0x0255b234((undefined1 *)((long)register0x00000008 + -0x40),*(long *)(param_1 + 0x18),
                  uRam0000000003d3d578);
  while( true ) {
    uVar2 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$MoveNext*/ func_0x01f80a64((undefined1 *)((long)register0x00000008 + -0x40),uRam0000000003d33608);
    if ((uVar2 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60((undefined1 *)((long)register0x00000008 + -0x40),uRam0000000003d33600);
      return;
    }
    if (*(long *)((long)register0x00000008 + -0x30) == 0) break;
    /*UnityEngine.Playables.PlayableDirector$$set_timeUpdateMode*/ func_0x03282a10(*(long *)((long)register0x00000008 + -0x30),3,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14b0c34);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14b0c7c | Atlas.Networking.NetworkTimelineManager.OnGameModeStarted
// ============================================================

void Atlas_Networking_NetworkTimelineManager__OnGameModeStarted
               (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w1;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  while( true ) {
    puVar4 = auVar9._8_8_;
    lVar5 = auVar9._0_8_;
    uVar6 = *puVar4;
    uVar8 = puVar4[3];
    uVar7 = puVar4[2];
    *(undefined8 *)((long)register0x00000008 + -0x28) = puVar4[1];
    *(undefined8 *)((long)register0x00000008 + -0x30) = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x18) = uVar8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x10) = puVar4[4];
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4a92 & 1) == 0) {
      func_0x00f78a20(0x3d33600);
      func_0x00f78a20(0x3d33608);
      func_0x00f78a20(0x3d33610);
      func_0x00f78a20(0x3d3d578);
      bRam0000000003eb4a92 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
    if (*(long *)(lVar5 + 0x18) != 0) break;
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar5 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60((undefined1 *)((long)register0x00000008 + -0x40),uRam0000000003d33600);
      if (lVar5 == 0) {
        return;
      }
      func_0x00f78ac0(lVar5,0);
    }
    unaff_x30 = Atlas_Networking_NetworkTimelineManager__OnGameModeStarted;
    auVar9 = __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = lVar5;
  }
  /*System.Collections.Generic.List<NetworkTimelineManager.DirectorsWrapper>$$GetEnumerator*/ func_0x0255b234((undefined1 *)((long)register0x00000008 + -0x40),*(long *)(lVar5 + 0x18),
                  uRam0000000003d3d578);
  while( true ) {
    uVar2 = /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$MoveNext*/ func_0x01f80a64((undefined1 *)((long)register0x00000008 + -0x40),uRam0000000003d33608);
    if ((uVar2 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<NetworkTimelineManager.DirectorsWrapper>$$Dispose*/ func_0x01f80a60((undefined1 *)((long)register0x00000008 + -0x40),uRam0000000003d33600);
      return;
    }
    if (*(long *)((long)register0x00000008 + -0x30) == 0) break;
    /*UnityEngine.Playables.PlayableDirector$$set_timeUpdateMode*/ func_0x03282a10(*(long *)((long)register0x00000008 + -0x30),3,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14b0c34);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14b0ca4 | Atlas.Networking.NetworkTimelineManager..ctor
// ============================================================

void Atlas_Networking_NetworkTimelineManager___ctor(void)

{
  return;
}



