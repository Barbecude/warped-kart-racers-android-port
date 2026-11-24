// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.VotingManager

// ============================================================
// RVA: 0x15285d8 | Atlas.UI.VotingManager.get_CachedVotingOptions
// ============================================================

undefined8 Atlas_UI_VotingManager__get_CachedVotingOptions(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15285e0 | Atlas.UI.VotingManager.get_VotingManagerStage
// ============================================================

undefined4 Atlas_UI_VotingManager__get_VotingManagerStage(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15285e8 | Atlas.UI.VotingManager.set_VotingManagerStage
// ============================================================

void Atlas_UI_VotingManager__set_VotingManagerStage(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined4 uStack_34;
  
  if ((bRam0000000003eb4e6c & 1) == 0) {
    func_0x00f78a20(0x3d29738);
    func_0x00f78a20(0x3d76248);
    bRam0000000003eb4e6c = 1;
  }
  *(int *)(param_1 + 0x90) = (int)param_2;
  if (*(long *)(param_1 + 0xf0) != 0) {
    /*Atlas.UI.VotingManager.OnVoteStageChanged$$Invoke*/ func_0x0156d918(*(long *)(param_1 + 0xf0),param_2,0);
    param_2 = (ulong)*(uint *)(param_1 + 0x90);
  }
  uStack_34 = (undefined4)param_2;
  uVar1 = func_0x00f78ae0(/*Atlas.UI.VotingManager.Stage_TypeInfo*/ uRam0000000003d29738,&uStack_34);
  /*System.String$$Format*/ func_0x029bc688(/*STR('VotingManagerStage {0}')*/ uRam0000000003d76248,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x1528690 | Atlas.UI.VotingManager.DebugLog
// ============================================================

void Atlas_UI_VotingManager__DebugLog(void)

{
  return;
}



// ============================================================
// RVA: 0x1528694 | Atlas.UI.VotingManager.get_WinningIds
// ============================================================

undefined1  [16] Atlas_UI_VotingManager__get_WinningIds(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x98);
}



// ============================================================
// RVA: 0x15286a0 | Atlas.UI.VotingManager.get_CachedResult
// ============================================================

undefined4 Atlas_UI_VotingManager__get_CachedResult(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15286a8 | Atlas.UI.VotingManager.get_DisableAIVoting
// ============================================================

undefined1 Atlas_UI_VotingManager__get_DisableAIVoting(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf8);
}



// ============================================================
// RVA: 0x15286b0 | Atlas.UI.VotingManager.set_DisableAIVoting
// ============================================================

void Atlas_UI_VotingManager__set_DisableAIVoting(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf8) = param_2;
  return;
}



// ============================================================
// RVA: 0x15286b8 | Atlas.UI.VotingManager.Init
// ============================================================

void Atlas_UI_VotingManager__Init(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4e6d & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d55158);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55190);
    func_0x00f78a20(0x3d55198);
    func_0x00f78a20(0x3d57360);
    bRam0000000003eb4e6d = 1;
  }
  if (param_2 != 0) {
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55150);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55158);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55198);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    lVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55090);
    *(long *)(param_1 + 0xb0) = lVar2;
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
      uVar1 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(*(long *)(lVar2 + 0x10),uRam0000000003d57360);
      *(undefined8 *)(param_1 + 0xd0) = uVar1;
      uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55190);
      *(undefined8 *)(param_1 + 0x38) = uVar1;
      return;
    }
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xd0) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x15287e4 | Atlas.UI.VotingManager.DeInit
// ============================================================

void Atlas_UI_VotingManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x15287f8 | Atlas.UI.VotingManager.Update
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015292e8) */

void Atlas_UI_VotingManager__Update(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long lVar16;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  bool bVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e6e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4e6e = 1;
  }
  if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(*(long *)(param_1 + 0x30) + 0x30) == 0)) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar4 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(param_1 + 0x20),0);
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x90) != 1) {
      return;
    }
    if (*(char *)(param_1 + 0xdc) == '\0') {
      fVar22 = (float)/*Atlas.UI.VotingManager$$GetSecondsLeftToVote*/ func_0x01529384(param_1);
      if (*(long *)(param_1 + 0xd0) != 0) {
        if (*(float *)(*(long *)(param_1 + 0xd0) + 0x24) <= fVar22) {
          return;
        }
        /*Atlas.UI.VotingManager$$SetNextAiVoteTime*/ func_0x01529518(param_1);
        *(undefined1 *)(param_1 + 0xdc) = 1;
        return;
      }
    }
    else if (param_2 != (long *)0x0) {
      fVar22 = *(float *)(param_1 + 0xd8);
      lVar11 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_015288f8;
          }
          piVar15 = piVar15 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_015288f8:
      fVar18 = (float)(*(code *)*puVar8)(param_2,puVar8[1]);
      fVar22 = fVar22 - fVar18;
      *(float *)(param_1 + 0xd8) = fVar22;
      lVar11 = param_1;
      if (0.0 <= fVar22) {
        return;
      }
      goto code_r0x01528944;
    }
  }
  unaff_x30 = &Atlas_UI_VotingManager__CastAIVote;
  lVar11 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
  unaff_x19 = param_1;
  unaff_x20 = param_2;
  unaff_x21 = 0x3eb4000;
  unaff_x29 = puVar1;
code_r0x01528944:
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4e7a & 1) == 0) {
    func_0x00f78a20(0x3d2e6f0);
    func_0x00f78a20(0x3d2e6f8);
    func_0x00f78a20(0x3d2e710);
    func_0x00f78a20(0x3d2e748);
    func_0x00f78a20(0x3d2e750);
    func_0x00f78a20(0x3d33d98);
    func_0x00f78a20(0x3d33da0);
    func_0x00f78a20(0x3d33dd0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d318);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d39240);
    func_0x00f78a20(0x3d39248);
    func_0x00f78a20(0x3d3ac58);
    func_0x00f78a20(0x3d3b508);
    func_0x00f78a20(0x3d3b518);
    func_0x00f78a20(0x3d3ac60);
    func_0x00f78a20(0x3d3b538);
    func_0x00f78a20(0x3d3ac50);
    func_0x00f78a20(0x3d3b4f8);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3ac68);
    func_0x00f78a20(0x3d3ac70);
    func_0x00f78a20(0x3d3b548);
    func_0x00f78a20(0x3d1daa0);
    func_0x00f78a20(0x3d1dc38);
    func_0x00f78a20(0x3d3fe90);
    bRam0000000003eb4e7a = 1;
  }
  *(undefined2 *)((long)register0x00000008 + -0x92) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined2 *)((long)register0x00000008 + -0xc2) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
  *(undefined4 *)((long)register0x00000008 + -0xf8) = 0;
  if (*(long *)(lVar11 + 0x20) != 0) {
    iVar4 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar11 + 0x20),0);
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(lVar11 + 0xf8) != '\0') {
      return;
    }
    if (*(long *)(lVar11 + 200) != 0) {
      /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(lVar11 + 200),uRam0000000003d2e6f8);
      lVar12 = *(long *)(lVar11 + 0x18);
      if (lVar12 != 0) {
        uVar13 = 0;
        lVar16 = 0x28;
        do {
          if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar13) goto code_r0x01528b9c;
          if (*(uint *)(lVar12 + 0x18) <= uVar13) {
            uVar9 = func_0x00f78b24();
            func_0x00f78ac0(uVar9,0);
code_r0x015292f4:
            func_0x00f78af4();
code_r0x01529300:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1529304);
            (*pcVar3)();
          }
          if (*(long *)(lVar11 + 0x28) == 0) break;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar11 + 0x28),*(undefined8 *)(lVar12 + lVar16),
                          (undefined1 *)((long)register0x00000008 + -0x92),0);
          if (*(long *)(lVar11 + 200) == 0) break;
          lVar16 = lVar16 + 0x10;
          uVar13 = uVar13 + 1;
          /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(lVar11 + 200),(long)*(short *)((long)register0x00000008 + -0x92)
                          ,0,uRam0000000003d2e6f0);
          lVar12 = *(long *)(lVar11 + 0x18);
        } while (lVar12 != 0);
      }
    }
  }
code_r0x01528b98:
  do {
    do {
      do {
        do {
          func_0x00f78af4();
code_r0x01528b9c:
        } while (*(long *)(lVar11 + 0xc0) == 0);
        /*System.Collections.Generic.List<NetworkPlayer>$$Clear*/ func_0x02413dcc(*(long *)(lVar11 + 0xc0),uRam0000000003d3b518);
      } while ((*(long *)(lVar11 + 0x20) == 0) ||
              (lVar12 = *(long *)(*(long *)(lVar11 + 0x20) + 0x20), lVar12 == 0));
      uVar9 = /*Core.Networking.NetworkSession$$HostGetCurrentVotes*/ func_0x0165ed6c(lVar12,0);
      *(undefined8 *)((long)register0x00000008 + -0x158) = uVar9;
    } while ((*(long *)(lVar11 + 0x20) == 0) ||
            (lVar12 = *(long *)(*(long *)(lVar11 + 0x20) + 0x20), lVar12 == 0));
    uVar9 = *(undefined8 *)(lVar12 + 0x188);
    lVar12 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
    /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412f98(lVar12,uVar9,uRam0000000003d3b4f8);
  } while (lVar12 == 0);
  uVar7 = *(int *)(lVar12 + 0x18) - 1;
  if ((int)uVar7 < 0) {
    iVar4 = 0;
    *(undefined4 *)((long)register0x00000008 + -0x15c) = 0;
  }
  else {
    if (*(long *)((long)register0x00000008 + -0x158) == 0) goto code_r0x01528b98;
    iVar4 = 0;
    *(undefined4 *)((long)register0x00000008 + -0x15c) = 0;
    do {
      plVar10 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<NetworkVote>$$GetEnumerator*/ func_0x027bae1c(*(undefined8 *)((long)register0x00000008 + -0x158),
                                        uRam0000000003d3fe90);
      uVar13 = (ulong)uVar7;
      if (plVar10 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01529300;
      }
      do {
        lVar16 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x01528cac;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01528cac:
        uVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          bVar17 = false;
          *(undefined4 *)((long)register0x00000008 + (long)iVar4 * 4 + -0x110) = 0x13e;
          iVar4 = *(int *)((long)register0x00000008 + -0xf8) + 1;
          *(int *)((long)register0x00000008 + -0xf8) = iVar4;
          goto code_r0x01528e1c;
        }
        lVar16 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<NetworkVote>_TypeInfo*/ lRam0000000003d1d318) {
              puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x01528d08;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<NetworkVote>_TypeInfo*/ lRam0000000003d1d318,0);
code_r0x01528d08:
        uVar9 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        if (*(uint *)(lVar12 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(lVar12 + 0x10);
      } while (*(int *)(lVar16 + uVar13 * 0x20 + 0x2c) != (int)uVar9);
      if (*(uint *)(lVar12 + 0x18) <= uVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar16 = *(long *)(lVar12 + 0x10);
      }
      lVar16 = lVar16 + uVar13 * 0x20;
      uVar19 = *(undefined8 *)(lVar16 + 0x20);
      uVar21 = *(undefined8 *)(lVar16 + 0x38);
      uVar20 = *(undefined8 *)(lVar16 + 0x30);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(lVar16 + 0x28);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar19;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar21;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar20;
      uVar14 = /*Core.Networking.NetworkPlayer$$IsAI*/ func_0x0165abb4((undefined1 *)((long)register0x00000008 + -0xc0),0);
      if ((uVar14 & 1) == 0) {
        lVar16 = *(long *)(lVar11 + 200);
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x01529300;
        }
        iVar6 = (int)(short)((ulong)uVar9 >> 0x20);
        iVar5 = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar16,iVar6,uRam0000000003d2e748);
        /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar16,iVar6,iVar5 + 1,uRam0000000003d2e750);
        *(undefined4 *)((long)register0x00000008 + (long)iVar4 * 4 + -0x110) = 0x13e;
      }
      else {
        *(undefined4 *)((long)register0x00000008 + (long)iVar4 * 4 + -0x110) = 0x13e;
        *(int *)((long)register0x00000008 + -0x15c) =
             *(int *)((long)register0x00000008 + -0x15c) + 1;
      }
      iVar4 = *(int *)((long)register0x00000008 + -0xf8) + 1;
      *(int *)((long)register0x00000008 + -0xf8) = iVar4;
      bVar17 = true;
code_r0x01528e1c:
      if (plVar10 != (long *)0x0) {
        lVar16 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x01528e78;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01528e78:
        (*(code *)*puVar8)(plVar10,puVar8[1]);
      }
      if ((iVar4 != 0) &&
         (iVar6 = iVar4 + -1, *(int *)((long)register0x00000008 + (long)iVar6 * 4 + -0x110) == 0x13e
         )) {
        *(int *)((long)register0x00000008 + -0xf8) = iVar6;
        iVar4 = iVar6;
      }
      if (!bVar17) {
        if (*(uint *)(lVar12 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(lVar12 + 0x10) + uVar13 * 0x20;
        uVar20 = *(undefined8 *)(lVar16 + 0x20);
        uVar19 = *(undefined8 *)(lVar16 + 0x38);
        uVar9 = *(undefined8 *)(lVar16 + 0x30);
        *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(lVar16 + 0x28);
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar9;
        iVar6 = /*Core.Networking.NetworkPlayer$$IsAI*/ func_0x0165abb4((undefined1 *)((long)register0x00000008 + -0xc0),0);
        if (iVar6 != 0) {
          lVar16 = *(long *)(lVar11 + 0xc0);
          if (*(uint *)(lVar12 + 0x18) <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar16 == 0) goto code_r0x01528b98;
          lVar2 = *(long *)(lVar12 + 0x10) + uVar13 * 0x20;
          uVar19 = *(undefined8 *)(lVar2 + 0x28);
          uVar9 = *(undefined8 *)(lVar2 + 0x20);
          uVar21 = *(undefined8 *)(lVar2 + 0x38);
          uVar20 = *(undefined8 *)(lVar2 + 0x30);
          *(undefined8 *)((long)register0x00000008 + -0x128) = uVar19;
          *(undefined8 *)((long)register0x00000008 + -0x130) = uVar9;
          *(undefined8 *)((long)register0x00000008 + -0x118) = uVar21;
          *(undefined8 *)((long)register0x00000008 + -0x120) = uVar20;
          *(undefined8 *)((long)register0x00000008 + -0x88) = uVar19;
          *(undefined8 *)((long)register0x00000008 + -0x90) = uVar9;
          *(undefined8 *)((long)register0x00000008 + -0x78) = uVar21;
          *(undefined8 *)((long)register0x00000008 + -0x80) = uVar20;
          /*System.Collections.Generic.List<NetworkPlayer>$$Add*/ func_0x02413ab4(lVar16,(undefined1 *)((long)register0x00000008 + -0x90),
                          uRam0000000003d3b508);
        }
      }
      /*System.Collections.Generic.List<NetworkPlayer>$$RemoveAt*/ func_0x0241540c(lVar12,uVar13,uRam0000000003d3b538);
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  if (*(long *)(lVar11 + 0xc0) != 0) {
    if (*(int *)(*(long *)(lVar11 + 0xc0) + 0x18) < 1) {
      return;
    }
    if (*(long *)(lVar11 + 0xd0) != 0) {
      if (*(int *)(*(long *)(lVar11 + 0xd0) + 0x20) <= *(int *)((long)register0x00000008 + -0x15c))
      {
        return;
      }
      lVar12 = func_0x00f78aec(/*System.Collections.Generic.List<short>_TypeInfo*/ uRam0000000003d1daa0);
      /*System.Collections.Generic.List<short>$$.ctor*/ func_0x023d85a8(lVar12,uRam0000000003d3ac50);
      if (*(long *)(lVar11 + 200) != 0) {
        /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8((undefined1 *)((long)register0x00000008 + -0x90),*(long *)(lVar11 + 200),
                        uRam0000000003d2e710);
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0xd8) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        *(undefined8 *)((long)register0x00000008 + -0xe0) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        uVar13 = 0xffffffff;
code_r0x0152903c:
        while (uVar14 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398((undefined1 *)((long)register0x00000008 + -0xf0),
                                        uRam0000000003d33da0), (uVar14 & 1) != 0) {
          uVar14 = *(ulong *)((long)register0x00000008 + -0xe0);
          iVar6 = (int)uVar13;
          iVar5 = (int)(uVar14 >> 0x20);
          if (iVar6 != iVar5) goto code_r0x0152907c;
          if (lVar12 == 0) goto code_r0x015292f4;
          /*System.Collections.Generic.List<short>$$Add*/ func_0x023d925c(lVar12,(int)(short)uVar14,uRam0000000003d3ac58);
          if (iVar6 < iVar5) goto code_r0x01529084;
        }
        *(undefined4 *)((long)register0x00000008 + (long)iVar4 * 4 + -0x110) = 0x21d;
        iVar6 = *(int *)((long)register0x00000008 + -0xf8);
        iVar4 = iVar6 + 1;
        *(int *)((long)register0x00000008 + -0xf8) = iVar4;
        /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508((undefined1 *)((long)register0x00000008 + -0xf0),uRam0000000003d33d98);
        if ((iVar4 != 0) && (*(int *)((long)register0x00000008 + (long)iVar6 * 4 + -0x110) == 0x21d)
           ) {
          *(int *)((long)register0x00000008 + -0xf8) = iVar6;
          iVar4 = iVar6;
        }
        *(undefined2 *)((long)register0x00000008 + -0xc2) = 0xffff;
        if (lVar12 != 0) {
          plVar10 = *(long **)(lVar11 + 0x50);
          if (*(int *)(lVar12 + 0x18) < 2) {
            if (plVar10 == (long *)0x0) goto code_r0x01528b98;
            iVar6 = (**(code **)(*plVar10 + 0x188))(plVar10,0,100,*(undefined8 *)(*plVar10 + 400));
            if (*(long *)(lVar11 + 0xd0) == 0) goto code_r0x01528b98;
            fVar22 = (float)/*Atlas.Definitions.MetagameDefinition$$get_ChanceAIWillVoteHumanMajority*/ func_0x01494664(*(long *)(lVar11 + 0xd0),0);
            if (fVar22 <= (float)iVar6) {
              if (*(long *)(lVar11 + 200) == 0) goto code_r0x01528b98;
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8((undefined1 *)((long)register0x00000008 + -0x90),
                              *(long *)(lVar11 + 200),uRam0000000003d2e710);
              *(undefined8 *)((long)register0x00000008 + -0xe8) =
                   *(undefined8 *)((long)register0x00000008 + -0x88);
              *(undefined8 *)((long)register0x00000008 + -0xf0) =
                   *(undefined8 *)((long)register0x00000008 + -0x90);
              *(undefined8 *)((long)register0x00000008 + -0xd8) =
                   *(undefined8 *)((long)register0x00000008 + -0x78);
              *(undefined8 *)((long)register0x00000008 + -0xe0) =
                   *(undefined8 *)((long)register0x00000008 + -0x80);
              do {
                uVar13 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398((undefined1 *)((long)register0x00000008 + -0xf0),
                                         uRam0000000003d33da0);
                if ((uVar13 & 1) == 0) goto code_r0x01529294;
                uVar9 = *(undefined8 *)((long)register0x00000008 + -0xe0);
                if (*(int *)(lVar12 + 0x18) == 0) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
              } while ((uint)*(ushort *)(*(long *)(lVar12 + 0x10) + 0x20) == ((uint)uVar9 & 0xffff))
              ;
              *(short *)((long)register0x00000008 + -0xc2) = (short)uVar9;
code_r0x01529294:
              *(undefined4 *)((long)register0x00000008 + (long)iVar4 * 4 + -0x110) = 0x2de;
              iVar4 = *(int *)((long)register0x00000008 + -0xf8);
              *(int *)((long)register0x00000008 + -0xf8) = iVar4 + 1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508((undefined1 *)((long)register0x00000008 + -0xf0),uRam0000000003d33d98)
              ;
              if ((iVar4 + 1 != 0) &&
                 (*(int *)((long)register0x00000008 + (long)iVar4 * 4 + -0x110) == 0x2de)) {
                *(int *)((long)register0x00000008 + -0xf8) = iVar4;
              }
            }
            else {
              if (*(int *)(lVar12 + 0x18) == 0) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              *(undefined2 *)((long)register0x00000008 + -0xc2) =
                   *(undefined2 *)(*(long *)(lVar12 + 0x10) + 0x20);
            }
          }
          else {
            if ((*(long *)(lVar11 + 0x18) == 0) || (plVar10 == (long *)0x0)) goto code_r0x01528b98;
            iVar4 = (**(code **)(*plVar10 + 0x188))
                              (plVar10,0,*(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x18),
                               *(undefined8 *)(*plVar10 + 400));
            if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x01528b98;
            lVar12 = func_0x0001df10(*(long *)(lVar11 + 0x18),(long)iVar4);
            /*Atlas.UI.VotingManager$$GetKeyFromIdentifier*/ func_0x0152a174(lVar11,*(undefined8 *)(lVar12 + 8),
                            (undefined1 *)((long)register0x00000008 + -0xc2));
          }
          lVar12 = *(long *)(lVar11 + 0xc0);
          if ((lVar12 != 0) && (plVar10 = *(long **)(lVar11 + 0x50), plVar10 != (long *)0x0)) {
            uVar7 = (**(code **)(*plVar10 + 0x188))
                              (plVar10,0,*(undefined4 *)(lVar12 + 0x18),
                               *(undefined8 *)(*plVar10 + 400));
            if (*(uint *)(lVar12 + 0x18) <= uVar7) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar12 = *(long *)(lVar12 + 0x10) + (long)(int)uVar7 * 0x20;
            uVar20 = *(undefined8 *)(lVar12 + 0x20);
            uVar19 = *(undefined8 *)(lVar12 + 0x38);
            uVar9 = *(undefined8 *)(lVar12 + 0x30);
            *(undefined8 *)((long)register0x00000008 + -0x148) = *(undefined8 *)(lVar12 + 0x28);
            *(undefined8 *)((long)register0x00000008 + -0x150) = uVar20;
            *(undefined8 *)((long)register0x00000008 + -0x138) = uVar19;
            *(undefined8 *)((long)register0x00000008 + -0x140) = uVar9;
            /*Atlas.UI.VotingManager$$CastVote*/ func_0x0152a360(lVar11,(long)*(short *)((long)register0x00000008 + -0xc2),
                            (undefined1 *)((long)register0x00000008 + -0x150));
            if (*(long *)(lVar11 + 0xd0) != 0) {
              if (*(int *)((long)register0x00000008 + -0x15c) + 1 <
                  *(int *)(*(long *)(lVar11 + 0xd0) + 0x20)) {
                /*Atlas.UI.VotingManager$$SetNextAiVoteTime*/ func_0x01529518(lVar11);
              }
              else {
                *(undefined4 *)(lVar11 + 0xd8) = 0x7f7fffff;
              }
              return;
            }
          }
        }
      }
    }
  }
  goto code_r0x01528b98;
code_r0x0152907c:
  if (iVar6 < iVar5) {
    if (lVar12 == 0) {
      func_0x00f78af4();
      goto code_r0x01529300;
    }
code_r0x01529084:
    /*System.Collections.Generic.List<short>$$Clear*/ func_0x023d9544(lVar12,uRam0000000003d3ac60);
    /*System.Collections.Generic.List<short>$$Add*/ func_0x023d925c(lVar12,(int)(short)uVar14,uRam0000000003d3ac58);
    uVar13 = uVar14 >> 0x20;
  }
  goto code_r0x0152903c;
}



// ============================================================
// RVA: 0x1528944 | Atlas.UI.VotingManager.CastAIVote
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015292e8) */

void Atlas_UI_VotingManager__CastAIVote(long param_1)

{
  long lVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  bool bVar17;
  float fVar18;
  int iStack_15c;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  int aiStack_110 [6];
  int iStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  short sStack_c2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  short sStack_92;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb4e7a & 1) == 0) {
    func_0x00f78a20(0x3d2e6f0);
    func_0x00f78a20(0x3d2e6f8);
    func_0x00f78a20(0x3d2e710);
    func_0x00f78a20(0x3d2e748);
    func_0x00f78a20(0x3d2e750);
    func_0x00f78a20(0x3d33d98);
    func_0x00f78a20(0x3d33da0);
    func_0x00f78a20(0x3d33dd0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d318);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d39240);
    func_0x00f78a20(0x3d39248);
    func_0x00f78a20(0x3d3ac58);
    func_0x00f78a20(0x3d3b508);
    func_0x00f78a20(0x3d3b518);
    func_0x00f78a20(0x3d3ac60);
    func_0x00f78a20(0x3d3b538);
    func_0x00f78a20(0x3d3ac50);
    func_0x00f78a20(0x3d3b4f8);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3ac68);
    func_0x00f78a20(0x3d3ac70);
    func_0x00f78a20(0x3d3b548);
    func_0x00f78a20(0x3d1daa0);
    func_0x00f78a20(0x3d1dc38);
    func_0x00f78a20(0x3d3fe90);
    bRam0000000003eb4e7a = 1;
  }
  sStack_92 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  sStack_c2 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  iStack_f8 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar4 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(param_1 + 0x20),0);
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0xf8) != '\0') {
      return;
    }
    if (*(long *)(param_1 + 200) != 0) {
      /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(param_1 + 200),uRam0000000003d2e6f8);
      lVar10 = *(long *)(param_1 + 0x18);
      if (lVar10 != 0) {
        uVar14 = 0;
        lVar15 = 0x28;
        do {
          if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar14) goto code_r0x01528b9c;
          if (*(uint *)(lVar10 + 0x18) <= uVar14) {
            uVar16 = func_0x00f78b24();
            func_0x00f78ac0(uVar16,0);
code_r0x015292f4:
            func_0x00f78af4();
code_r0x01529300:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1529304);
            (*pcVar3)();
          }
          if (*(long *)(param_1 + 0x28) == 0) break;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x28),*(undefined8 *)(lVar10 + lVar15),&sStack_92,0);
          if (*(long *)(param_1 + 200) == 0) break;
          lVar15 = lVar15 + 0x10;
          uVar14 = uVar14 + 1;
          /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(param_1 + 200),(long)sStack_92,0,uRam0000000003d2e6f0);
          lVar10 = *(long *)(param_1 + 0x18);
        } while (lVar10 != 0);
      }
    }
  }
LAB_01528b98:
  do {
    do {
      do {
        do {
          func_0x00f78af4();
code_r0x01528b9c:
        } while (*(long *)(param_1 + 0xc0) == 0);
        /*System.Collections.Generic.List<NetworkPlayer>$$Clear*/ func_0x02413dcc(*(long *)(param_1 + 0xc0),uRam0000000003d3b518);
      } while ((*(long *)(param_1 + 0x20) == 0) ||
              (lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar10 == 0));
      lVar10 = /*Core.Networking.NetworkSession$$HostGetCurrentVotes*/ func_0x0165ed6c(lVar10,0);
    } while ((*(long *)(param_1 + 0x20) == 0) ||
            (lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar15 == 0));
    uVar16 = *(undefined8 *)(lVar15 + 0x188);
    lVar15 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
    /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412f98(lVar15,uVar16,uRam0000000003d3b4f8);
  } while (lVar15 == 0);
  uVar7 = *(int *)(lVar15 + 0x18) - 1;
  if ((int)uVar7 < 0) {
    iVar4 = 0;
    iStack_15c = 0;
  }
  else {
    if (lVar10 == 0) goto LAB_01528b98;
    iVar4 = 0;
    iStack_15c = 0;
    do {
      plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<NetworkVote>$$GetEnumerator*/ func_0x027bae1c(lVar10,uRam0000000003d3fe90);
      uVar14 = (ulong)uVar7;
      if (plVar8 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01529300;
      }
      do {
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01528cac;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01528cac:
        uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar12 & 1) == 0) {
          bVar17 = false;
          aiStack_110[iVar4] = 0x13e;
          iVar4 = iStack_f8 + 1;
          iStack_f8 = iVar4;
          goto code_r0x01528e1c;
        }
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<NetworkVote>_TypeInfo*/ lRam0000000003d1d318) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01528d08;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<NetworkVote>_TypeInfo*/ lRam0000000003d1d318,0);
code_r0x01528d08:
        uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (*(uint *)(lVar15 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar11 = *(long *)(lVar15 + 0x10);
      } while (*(int *)(lVar11 + uVar14 * 0x20 + 0x2c) != (int)uVar16);
      if (*(uint *)(lVar15 + 0x18) <= uVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar11 = *(long *)(lVar15 + 0x10);
      }
      lVar11 = lVar11 + uVar14 * 0x20;
      uStack_b8 = *(undefined8 *)(lVar11 + 0x28);
      uStack_c0 = *(undefined8 *)(lVar11 + 0x20);
      uStack_a8 = *(undefined8 *)(lVar11 + 0x38);
      uStack_b0 = *(undefined8 *)(lVar11 + 0x30);
      uVar12 = /*Core.Networking.NetworkPlayer$$IsAI*/ func_0x0165abb4(&uStack_c0,0);
      if ((uVar12 & 1) == 0) {
        lVar11 = *(long *)(param_1 + 200);
        if (lVar11 == 0) {
          func_0x00f78af4();
          goto code_r0x01529300;
        }
        iVar6 = (int)(short)((ulong)uVar16 >> 0x20);
        iVar5 = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar11,iVar6,uRam0000000003d2e748);
        /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar11,iVar6,iVar5 + 1,uRam0000000003d2e750);
        aiStack_110[iVar4] = 0x13e;
      }
      else {
        aiStack_110[iVar4] = 0x13e;
        iStack_15c = iStack_15c + 1;
      }
      iVar4 = iStack_f8 + 1;
      iStack_f8 = iVar4;
      bVar17 = true;
code_r0x01528e1c:
      iStack_f8 = iVar4;
      if (plVar8 != (long *)0x0) {
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01528e78;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01528e78:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      if ((iVar4 != 0) && (iVar6 = iVar4 + -1, aiStack_110[iVar6] == 0x13e)) {
        iVar4 = iVar6;
        iStack_f8 = iVar6;
      }
      if (!bVar17) {
        if (*(uint *)(lVar15 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar11 = *(long *)(lVar15 + 0x10) + uVar14 * 0x20;
        uStack_b8 = *(undefined8 *)(lVar11 + 0x28);
        uStack_c0 = *(undefined8 *)(lVar11 + 0x20);
        uStack_a8 = *(undefined8 *)(lVar11 + 0x38);
        uStack_b0 = *(undefined8 *)(lVar11 + 0x30);
        iVar6 = /*Core.Networking.NetworkPlayer$$IsAI*/ func_0x0165abb4(&uStack_c0,0);
        if (iVar6 != 0) {
          lVar11 = *(long *)(param_1 + 0xc0);
          if (*(uint *)(lVar15 + 0x18) <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar11 == 0) goto LAB_01528b98;
          lVar1 = *(long *)(lVar15 + 0x10) + uVar14 * 0x20;
          uStack_128 = *(undefined8 *)(lVar1 + 0x28);
          uStack_130 = *(undefined8 *)(lVar1 + 0x20);
          uStack_118 = *(undefined8 *)(lVar1 + 0x38);
          uStack_120 = *(ulong *)(lVar1 + 0x30);
          uStack_90 = uStack_130;
          uStack_88 = uStack_128;
          uStack_80 = uStack_120;
          uStack_78 = uStack_118;
          /*System.Collections.Generic.List<NetworkPlayer>$$Add*/ func_0x02413ab4(lVar11,&uStack_90,uRam0000000003d3b508);
        }
      }
      /*System.Collections.Generic.List<NetworkPlayer>$$RemoveAt*/ func_0x0241540c(lVar15,uVar14,uRam0000000003d3b538);
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    if (*(int *)(*(long *)(param_1 + 0xc0) + 0x18) < 1) {
      return;
    }
    if (*(long *)(param_1 + 0xd0) != 0) {
      if (*(int *)(*(long *)(param_1 + 0xd0) + 0x20) <= iStack_15c) {
        return;
      }
      lVar10 = func_0x00f78aec(/*System.Collections.Generic.List<short>_TypeInfo*/ uRam0000000003d1daa0);
      /*System.Collections.Generic.List<short>$$.ctor*/ func_0x023d85a8(lVar10,uRam0000000003d3ac50);
      if (*(long *)(param_1 + 200) != 0) {
        /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_90,*(long *)(param_1 + 200),uRam0000000003d2e710);
        uStack_e8 = uStack_88;
        uStack_f0 = uStack_90;
        uStack_d8 = uStack_78;
        uStack_e0 = uStack_80;
        uVar14 = 0xffffffff;
code_r0x0152903c:
        while (uVar12 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_f0,uRam0000000003d33da0), (uVar12 & 1) != 0) {
          uVar12 = uStack_e0 >> 0x20;
          iVar6 = (int)uVar14;
          iVar5 = (int)(uStack_e0 >> 0x20);
          sVar2 = (short)uStack_e0;
          if (iVar6 != iVar5) goto code_r0x0152907c;
          if (lVar10 == 0) goto code_r0x015292f4;
          /*System.Collections.Generic.List<short>$$Add*/ func_0x023d925c(lVar10,(int)sVar2,uRam0000000003d3ac58);
          if (iVar6 < iVar5) goto code_r0x01529084;
        }
        aiStack_110[iVar4] = 0x21d;
        iVar6 = iStack_f8;
        iVar4 = iStack_f8 + 1;
        iStack_f8 = iVar4;
        /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_f0,uRam0000000003d33d98);
        if ((iVar4 != 0) && (aiStack_110[iVar6] == 0x21d)) {
          iVar4 = iVar6;
          iStack_f8 = iVar6;
        }
        sStack_c2 = -1;
        if (lVar10 != 0) {
          plVar8 = *(long **)(param_1 + 0x50);
          if (*(int *)(lVar10 + 0x18) < 2) {
            if (plVar8 == (long *)0x0) goto LAB_01528b98;
            iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,0,100,*(undefined8 *)(*plVar8 + 400));
            if (*(long *)(param_1 + 0xd0) == 0) goto LAB_01528b98;
            fVar18 = (float)/*Atlas.Definitions.MetagameDefinition$$get_ChanceAIWillVoteHumanMajority*/ func_0x01494664(*(long *)(param_1 + 0xd0),0);
            if (fVar18 <= (float)iVar6) {
              if (*(long *)(param_1 + 200) == 0) goto LAB_01528b98;
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_90,*(long *)(param_1 + 200),uRam0000000003d2e710);
              uStack_e8 = uStack_88;
              uStack_f0 = uStack_90;
              uStack_d8 = uStack_78;
              uStack_e0 = uStack_80;
              do {
                uVar12 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_f0,uRam0000000003d33da0);
                uVar14 = uStack_e0;
                if ((uVar12 & 1) == 0) goto code_r0x01529294;
                if (*(int *)(lVar10 + 0x18) == 0) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
              } while ((uint)*(ushort *)(*(long *)(lVar10 + 0x10) + 0x20) == ((uint)uVar14 & 0xffff)
                      );
              sStack_c2 = (short)uVar14;
code_r0x01529294:
              aiStack_110[iVar4] = 0x2de;
              iVar6 = iStack_f8;
              iVar4 = iStack_f8 + 1;
              iStack_f8 = iVar4;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_f0,uRam0000000003d33d98);
              if ((iVar4 != 0) && (aiStack_110[iVar6] == 0x2de)) {
                iStack_f8 = iVar6;
              }
            }
            else {
              if (*(int *)(lVar10 + 0x18) == 0) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              sStack_c2 = *(short *)(*(long *)(lVar10 + 0x10) + 0x20);
            }
          }
          else {
            if ((*(long *)(param_1 + 0x18) == 0) || (plVar8 == (long *)0x0)) goto LAB_01528b98;
            iVar4 = (**(code **)(*plVar8 + 0x188))
                              (plVar8,0,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),
                               *(undefined8 *)(*plVar8 + 400));
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_01528b98;
            lVar10 = func_0x0001df10(*(long *)(param_1 + 0x18),(long)iVar4);
            /*Atlas.UI.VotingManager$$GetKeyFromIdentifier*/ func_0x0152a174(param_1,*(undefined8 *)(lVar10 + 8),&sStack_c2);
          }
          lVar10 = *(long *)(param_1 + 0xc0);
          if ((lVar10 != 0) && (plVar8 = *(long **)(param_1 + 0x50), plVar8 != (long *)0x0)) {
            uVar7 = (**(code **)(*plVar8 + 0x188))
                              (plVar8,0,*(undefined4 *)(lVar10 + 0x18),
                               *(undefined8 *)(*plVar8 + 400));
            if (*(uint *)(lVar10 + 0x18) <= uVar7) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar10 = *(long *)(lVar10 + 0x10) + (long)(int)uVar7 * 0x20;
            uStack_148 = *(undefined8 *)(lVar10 + 0x28);
            uStack_150 = *(undefined8 *)(lVar10 + 0x20);
            uStack_138 = *(undefined8 *)(lVar10 + 0x38);
            uStack_140 = *(undefined8 *)(lVar10 + 0x30);
            /*Atlas.UI.VotingManager$$CastVote*/ func_0x0152a360(param_1,(long)sStack_c2,&uStack_150);
            if (*(long *)(param_1 + 0xd0) != 0) {
              if (iStack_15c + 1 < *(int *)(*(long *)(param_1 + 0xd0) + 0x20)) {
                /*Atlas.UI.VotingManager$$SetNextAiVoteTime*/ func_0x01529518(param_1);
              }
              else {
                *(undefined4 *)(param_1 + 0xd8) = 0x7f7fffff;
              }
              return;
            }
          }
        }
      }
    }
  }
  goto LAB_01528b98;
code_r0x0152907c:
  if (iVar6 < iVar5) {
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01529300;
    }
code_r0x01529084:
    /*System.Collections.Generic.List<short>$$Clear*/ func_0x023d9544(lVar10,uRam0000000003d3ac60);
    /*System.Collections.Generic.List<short>$$Add*/ func_0x023d925c(lVar10,(int)sVar2,uRam0000000003d3ac58);
    uVar14 = uVar12;
  }
  goto code_r0x0152903c;
}



// ============================================================
// RVA: 0x1529384 | Atlas.UI.VotingManager.GetSecondsLeftToVote
// ============================================================

/* WARNING: Possible PIC construction at 0x01529ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01529d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152ac44) */
/* WARNING: Removing unreachable block (ram,0x0152af80) */
/* WARNING: Removing unreachable block (ram,0x0152ac48) */
/* WARNING: Removing unreachable block (ram,0x0152ac54) */
/* WARNING: Removing unreachable block (ram,0x0152ac58) */
/* WARNING: Removing unreachable block (ram,0x0152ac60) */
/* WARNING: Removing unreachable block (ram,0x0152ac68) */
/* WARNING: Removing unreachable block (ram,0x0152af48) */
/* WARNING: Removing unreachable block (ram,0x0152ac78) */
/* WARNING: Removing unreachable block (ram,0x0152aca0) */
/* WARNING: Removing unreachable block (ram,0x0152ac8c) */
/* WARNING: Removing unreachable block (ram,0x0152ac9c) */
/* WARNING: Removing unreachable block (ram,0x0152a5e8) */
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
/* WARNING: Removing unreachable block (ram,0x0152a8d0) */
/* WARNING: Removing unreachable block (ram,0x0152a860) */
/* WARNING: Removing unreachable block (ram,0x0152a86c) */
/* WARNING: Removing unreachable block (ram,0x0152a884) */
/* WARNING: Removing unreachable block (ram,0x0152a88c) */
/* WARNING: Removing unreachable block (ram,0x0152a5bc) */
/* WARNING: Removing unreachable block (ram,0x0152a5c4) */
/* WARNING: Removing unreachable block (ram,0x0152a5dc) */
/* WARNING: Removing unreachable block (ram,0x0152a570) */
/* WARNING: Removing unreachable block (ram,0x0152a578) */
/* WARNING: Removing unreachable block (ram,0x0152a580) */
/* WARNING: Removing unreachable block (ram,0x0152a598) */
/* WARNING: Removing unreachable block (ram,0x0152a5b0) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Removing unreachable block (ram,0x0152a334) */
/* WARNING: Removing unreachable block (ram,0x0152a290) */
/* WARNING: Removing unreachable block (ram,0x0152a298) */
/* WARNING: Removing unreachable block (ram,0x0152a2c0) */
/* WARNING: Removing unreachable block (ram,0x0152a2c8) */
/* WARNING: Removing unreachable block (ram,0x0152a2cc) */
/* WARNING: Removing unreachable block (ram,0x0152a1c0) */
/* WARNING: Removing unreachable block (ram,0x0152a1dc) */
/* WARNING: Removing unreachable block (ram,0x0152a1e4) */
/* WARNING: Removing unreachable block (ram,0x0152a1f0) */
/* WARNING: Removing unreachable block (ram,0x0152a22c) */
/* WARNING: Removing unreachable block (ram,0x0152a260) */
/* WARNING: Removing unreachable block (ram,0x0152a274) */
/* WARNING: Removing unreachable block (ram,0x0152a300) */
/* WARNING: Removing unreachable block (ram,0x0152a35c) */
/* WARNING: Removing unreachable block (ram,0x0152a3a0) */
/* WARNING: Removing unreachable block (ram,0x0152a3c0) */
/* WARNING: Removing unreachable block (ram,0x0152a3fc) */
/* WARNING: Removing unreachable block (ram,0x0152a43c) */
/* WARNING: Removing unreachable block (ram,0x0152a46c) */
/* WARNING: Removing unreachable block (ram,0x0152a4d4) */
/* WARNING: Removing unreachable block (ram,0x0152a4e4) */
/* WARNING: Removing unreachable block (ram,0x0152a8ac) */
/* WARNING: Removing unreachable block (ram,0x0152a4f0) */
/* WARNING: Removing unreachable block (ram,0x0152a4f8) */
/* WARNING: Removing unreachable block (ram,0x0152a508) */
/* WARNING: Removing unreachable block (ram,0x0152a528) */
/* WARNING: Removing unreachable block (ram,0x0152a540) */
/* WARNING: Removing unreachable block (ram,0x0152a558) */
/* WARNING: Removing unreachable block (ram,0x0152a8c4) */
/* WARNING: Removing unreachable block (ram,0x0152a8c8) */
/* WARNING: Removing unreachable block (ram,0x0152a8d4) */
/* WARNING: Removing unreachable block (ram,0x0152a560) */
/* WARNING: Removing unreachable block (ram,0x0152a518) */
/* WARNING: Removing unreachable block (ram,0x0152a8dc) */
/* WARNING: Removing unreachable block (ram,0x0152a914) */
/* WARNING: Removing unreachable block (ram,0x0152aa90) */
/* WARNING: Removing unreachable block (ram,0x0152aab8) */
/* WARNING: Removing unreachable block (ram,0x0152aaf8) */
/* WARNING: Removing unreachable block (ram,0x0152ab00) */
/* WARNING: Removing unreachable block (ram,0x0152ab0c) */
/* WARNING: Removing unreachable block (ram,0x0152ab40) */
/* WARNING: Removing unreachable block (ram,0x0152ab48) */
/* WARNING: Removing unreachable block (ram,0x0152ab54) */
/* WARNING: Removing unreachable block (ram,0x0152aba4) */
/* WARNING: Removing unreachable block (ram,0x0152acd4) */
/* WARNING: Removing unreachable block (ram,0x0152acfc) */
/* WARNING: Removing unreachable block (ram,0x0152abb4) */
/* WARNING: Removing unreachable block (ram,0x0152abc4) */
/* WARNING: Removing unreachable block (ram,0x0152af70) */
/* WARNING: Removing unreachable block (ram,0x0152abd0) */
/* WARNING: Removing unreachable block (ram,0x0152abe4) */
/* WARNING: Removing unreachable block (ram,0x0152af98) */
/* WARNING: Removing unreachable block (ram,0x0152abec) */
/* WARNING: Removing unreachable block (ram,0x0152abfc) */
/* WARNING: Removing unreachable block (ram,0x0152af78) */
/* WARNING: Removing unreachable block (ram,0x0152ac04) */
/* WARNING: Removing unreachable block (ram,0x0152af68) */
/* WARNING: Removing unreachable block (ram,0x0152ac34) */
/* WARNING: Removing unreachable block (ram,0x0152a404) */
/* WARNING: Removing unreachable block (ram,0x0152a324) */
/* WARNING: Removing unreachable block (ram,0x0152a280) */
/* WARNING: Removing unreachable block (ram,0x0152a1f8) */
/* WARNING: Removing unreachable block (ram,0x0152a218) */
/* WARNING: Removing unreachable block (ram,0x0152a21c) */
/* WARNING: Removing unreachable block (ram,0x01529d04) */
/* WARNING: Removing unreachable block (ram,0x01529d0c) */
/* WARNING: Removing unreachable block (ram,0x01529d38) */
/* WARNING: Removing unreachable block (ram,0x01529d4c) */
/* WARNING: Removing unreachable block (ram,0x01529d5c) */
/* WARNING: Removing unreachable block (ram,0x01529d64) */
/* WARNING: Removing unreachable block (ram,0x01529d80) */
/* WARNING: Removing unreachable block (ram,0x01529d94) */
/* WARNING: Removing unreachable block (ram,0x01529da0) */
/* WARNING: Removing unreachable block (ram,0x01529db4) */
/* WARNING: Removing unreachable block (ram,0x01529dc4) */
/* WARNING: Removing unreachable block (ram,0x01529dc8) */
/* WARNING: Removing unreachable block (ram,0x01529dd0) */
/* WARNING: Removing unreachable block (ram,0x01529dec) */
/* WARNING: Removing unreachable block (ram,0x01529e00) */
/* WARNING: Removing unreachable block (ram,0x01529e0c) */
/* WARNING: Removing unreachable block (ram,0x01529e20) */
/* WARNING: Removing unreachable block (ram,0x01529e30) */
/* WARNING: Removing unreachable block (ram,0x01529e34) */
/* WARNING: Removing unreachable block (ram,0x01529e3c) */
/* WARNING: Removing unreachable block (ram,0x01529e58) */
/* WARNING: Removing unreachable block (ram,0x01529e6c) */
/* WARNING: Removing unreachable block (ram,0x01529e78) */
/* WARNING: Removing unreachable block (ram,0x01529e8c) */
/* WARNING: Removing unreachable block (ram,0x01529e9c) */
/* WARNING: Removing unreachable block (ram,0x01529ea0) */
/* WARNING: Removing unreachable block (ram,0x01529ea8) */
/* WARNING: Removing unreachable block (ram,0x01529ec4) */
/* WARNING: Removing unreachable block (ram,0x01529ed8) */
/* WARNING: Removing unreachable block (ram,0x01529ee4) */
/* WARNING: Removing unreachable block (ram,0x01529ef8) */
/* WARNING: Removing unreachable block (ram,0x01529f08) */
/* WARNING: Removing unreachable block (ram,0x01529f0c) */
/* WARNING: Removing unreachable block (ram,0x01529f14) */
/* WARNING: Removing unreachable block (ram,0x01529f24) */
/* WARNING: Removing unreachable block (ram,0x01529f38) */
/* WARNING: Removing unreachable block (ram,0x01529f3c) */
/* WARNING: Removing unreachable block (ram,0x01529f44) */
/* WARNING: Removing unreachable block (ram,0x01529f58) */
/* WARNING: Removing unreachable block (ram,0x01529f68) */
/* WARNING: Removing unreachable block (ram,0x01529f6c) */
/* WARNING: Removing unreachable block (ram,0x01529f74) */
/* WARNING: Removing unreachable block (ram,0x01529f84) */
/* WARNING: Removing unreachable block (ram,0x01529f98) */
/* WARNING: Removing unreachable block (ram,0x01529f9c) */
/* WARNING: Removing unreachable block (ram,0x01529fa4) */
/* WARNING: Removing unreachable block (ram,0x01529fb8) */
/* WARNING: Removing unreachable block (ram,0x01529fc8) */
/* WARNING: Removing unreachable block (ram,0x01529fcc) */
/* WARNING: Removing unreachable block (ram,0x01529fd4) */
/* WARNING: Removing unreachable block (ram,0x01529fe4) */
/* WARNING: Removing unreachable block (ram,0x01529ff8) */
/* WARNING: Removing unreachable block (ram,0x01529ffc) */
/* WARNING: Removing unreachable block (ram,0x0152a004) */
/* WARNING: Removing unreachable block (ram,0x0152a018) */
/* WARNING: Removing unreachable block (ram,0x0152a028) */
/* WARNING: Removing unreachable block (ram,0x0152a02c) */
/* WARNING: Removing unreachable block (ram,0x0152a034) */
/* WARNING: Removing unreachable block (ram,0x0152a044) */
/* WARNING: Removing unreachable block (ram,0x0152a144) */
/* WARNING: Removing unreachable block (ram,0x0152a058) */
/* WARNING: Removing unreachable block (ram,0x0152a05c) */
/* WARNING: Removing unreachable block (ram,0x0152a064) */
/* WARNING: Removing unreachable block (ram,0x0152a07c) */
/* WARNING: Removing unreachable block (ram,0x0152a094) */
/* WARNING: Removing unreachable block (ram,0x0152a09c) */
/* WARNING: Removing unreachable block (ram,0x0152a0a0) */
/* WARNING: Removing unreachable block (ram,0x0152a0b4) */
/* WARNING: Removing unreachable block (ram,0x0152a0c0) */
/* WARNING: Removing unreachable block (ram,0x0152a0d4) */
/* WARNING: Removing unreachable block (ram,0x0152a0e0) */
/* WARNING: Removing unreachable block (ram,0x0152a0f8) */
/* WARNING: Removing unreachable block (ram,0x0152a104) */
/* WARNING: Removing unreachable block (ram,0x0152a13c) */
/* WARNING: Removing unreachable block (ram,0x0152a148) */
/* WARNING: Removing unreachable block (ram,0x0152a11c) */
/* WARNING: Removing unreachable block (ram,0x01529cd0) */
/* WARNING: Removing unreachable block (ram,0x01529cd8) */
/* WARNING: Removing unreachable block (ram,0x01529cf4) */
/* WARNING: Removing unreachable block (ram,0x0152ad60) */
/* WARNING: Removing unreachable block (ram,0x0152af90) */
/* WARNING: Removing unreachable block (ram,0x0152ad64) */
/* WARNING: Removing unreachable block (ram,0x0152ad70) */
/* WARNING: Removing unreachable block (ram,0x0152ad74) */
/* WARNING: Removing unreachable block (ram,0x0152ad7c) */
/* WARNING: Removing unreachable block (ram,0x0152ad84) */
/* WARNING: Removing unreachable block (ram,0x0152af50) */
/* WARNING: Removing unreachable block (ram,0x0152ad94) */
/* WARNING: Removing unreachable block (ram,0x0152adbc) */
/* WARNING: Removing unreachable block (ram,0x0152ada8) */
/* WARNING: Removing unreachable block (ram,0x0152adb8) */
/* WARNING: Removing unreachable block (ram,0x0152ad1c) */
/* WARNING: Removing unreachable block (ram,0x0152adf0) */
/* WARNING: Removing unreachable block (ram,0x0152ae20) */
/* WARNING: Removing unreachable block (ram,0x0152ae30) */
/* WARNING: Removing unreachable block (ram,0x0152ae34) */
/* WARNING: Removing unreachable block (ram,0x0152ae50) */
/* WARNING: Removing unreachable block (ram,0x0152ae58) */
/* WARNING: Removing unreachable block (ram,0x0152ae5c) */
/* WARNING: Removing unreachable block (ram,0x0152aeb0) */
/* WARNING: Removing unreachable block (ram,0x0152aeec) */
/* WARNING: Removing unreachable block (ram,0x0152af24) */
/* WARNING: Removing unreachable block (ram,0x0152aec0) */
/* WARNING: Removing unreachable block (ram,0x0152af60) */
/* WARNING: Removing unreachable block (ram,0x0152aec8) */
/* WARNING: Removing unreachable block (ram,0x0152ad34) */
/* WARNING: Removing unreachable block (ram,0x0152ad44) */
/* WARNING: Removing unreachable block (ram,0x0152af88) */
/* WARNING: Removing unreachable block (ram,0x0152af9c) */
/* WARNING: Removing unreachable block (ram,0x0152ad4c) */

ulong Atlas_UI_VotingManager__GetSecondsLeftToVote
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  long lVar12;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar13;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar14;
  undefined1 **ppuVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_110 [12];
  int aiStack_104 [3];
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  
  if ((bRam0000000003eb4e72 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb4e72 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar4 != 0)) {
    uVar5 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_48,lVar4,0);
    if (*(char *)(param_1 + 0x5c) == '\0') {
      return uVar5;
    }
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    uStack_78 = *(undefined8 *)(param_1 + 0x60);
    uStack_80 = *(undefined8 *)(param_1 + 0x58);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_90 = uStack_50;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    uStack_b0 = uStack_70;
    param_3 = (undefined8 *)0x0;
    uVar5 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74(&uStack_a0,&uStack_c0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar4 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_80,lVar4,0);
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      uStack_50 = uStack_70;
      uStack_d8 = *(undefined8 *)(param_1 + 0x60);
      uStack_e0 = *(undefined8 *)(param_1 + 0x58);
      uStack_d0 = *(undefined8 *)(param_1 + 0x68);
      uVar3 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(&uStack_60,&uStack_e0,0);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_68 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858((double)uVar3,0);
      uVar5 = /*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_68,0);
      return uVar5;
    }
  }
  lVar4 = func_0x00f78af4();
  aiStack_104[1] = 0x3eb4000;
  aiStack_104[2] = 0;
  puStack_e8 = &Atlas_UI_VotingManager__SetNextAiVoteTime;
  ppuVar15 = &puStack_f0;
  lStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e7b & 1) == 0) {
    func_0x00f78a20(0x3d727a8);
    func_0x00f78a20(0x3d77a28);
    bRam0000000003eb4e7b = 1;
  }
  if (*(long *)(lVar4 + 0x20) != 0) {
    uVar5 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar4 + 0x20),0);
    if ((int)uVar5 != 0) {
      lVar12 = *(long *)(lVar4 + 0xd0);
      if ((lVar12 == 0) || (plVar6 = *(long **)(lVar4 + 0x50), plVar6 == (long *)0x0))
      goto code_r0x015295f8;
      aiStack_104[0] =
           (**(code **)(*plVar6 + 0x188))
                     (plVar6,*(undefined4 *)(lVar12 + 0x28),*(undefined4 *)(lVar12 + 0x2c),
                      *(undefined8 *)(*plVar6 + 400));
      *(float *)(lVar4 + 0xd8) = (float)aiStack_104[0] / 1000.0;
      uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_104,0);
      uVar8 = /*System.Single$$ToString*/ func_0x029ba8bc((float *)(lVar4 + 0xd8),0);
      uVar5 = /*System.String$$Concat*/ func_0x029be818(/*STR('SetNextAiVoteTime msUntilNetxVote ')*/ uRam0000000003d727a8,uVar7,/*STR('_timeUntilNextAIVote ')*/ uRam0000000003d77a28,uVar8,0);
    }
    return uVar5;
  }
code_r0x015295f8:
  lVar12 = func_0x00f78af4();
  *(undefined1 *)(lVar12 + 0xdc) = 0;
  /*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(lVar12 + 0x98,0);
  *(undefined4 *)(lVar12 + 0xa8) = 0;
  uVar7 = 1;
  puVar16 = &Atlas_UI_VotingManager__VotingStarted;
  puVar1 = auStack_110;
  do {
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = 0x3eb4000;
    *(long *)(puVar1 + -0x18) = lVar4;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar15;
    *(undefined **)(puVar1 + -8) = puVar16;
    uVar8 = 0x3eb4000;
    if ((bRam0000000003eb4e6f & 1) == 0) {
      func_0x00f78a20(0x3d2a228);
      func_0x00f78a20(0x3d2a248);
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d1b520);
      func_0x00f78a20(0x3d1b510);
      func_0x00f78a20(0x3d2a4b8);
      func_0x00f78a20(0x3d2a4a8);
      func_0x00f78a20(0x3d1b670);
      func_0x00f78a20(0x3d1b668);
      func_0x00f78a20(0x3d600f8);
      func_0x00f78a20(0x3d60100);
      func_0x00f78a20(0x3d60108);
      func_0x00f78a20(0x3d60110);
      func_0x00f78a20(0x3d60118);
      bRam0000000003eb4e6f = 1;
    }
    if ((*(long *)(lVar12 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar4 == 0)) {
      return 0;
    }
    if ((int)uVar7 == 0) {
      if (*(char *)(lVar12 + 0x40) == '\0') {
        return 1;
      }
      unaff_x22 = *(long *)(lVar4 + 0x10);
      if (unaff_x22 != 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
        unaff_x23 = 0x3d1b518;
        uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
        /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar8,lVar12,uRam0000000003d60110,uRam0000000003d2a238);
        param_3 = (undefined8 *)0x0;
        plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar8);
        if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
          *(long **)(unaff_x22 + 0x40) = plVar6;
          if ((*(long *)(lVar12 + 0x20) == 0) ||
             ((lVar4 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar4 == 0 ||
              (unaff_x22 = *(long *)(lVar4 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
          uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
          unaff_x23 = 0x3d1b520;
          uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar8,lVar12,uRam0000000003d60118,uRam0000000003d2a248);
          param_3 = (undefined8 *)0x0;
          plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar8);
          if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) {
            *(long **)(unaff_x22 + 0x48) = plVar6;
            if (((*(long *)(lVar12 + 0x20) == 0) ||
                (lVar4 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar4 == 0)) ||
               (unaff_x22 = *(long *)(lVar4 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
            uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
            unaff_x23 = 0x3d1b670;
            uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670);
            /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar8,lVar12,uRam0000000003d600f8,uRam0000000003d2a4b8);
            param_3 = (undefined8 *)0x0;
            plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar8);
            if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670)) {
              *(long **)(unaff_x22 + 0x50) = plVar6;
              if ((*(long *)(lVar12 + 0x20) == 0) ||
                 ((lVar4 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar4 == 0 ||
                  (unaff_x22 = *(long *)(lVar4 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
              uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
              unaff_x23 = 0x3d1b510;
              uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510);
              /*System.Action<NetworkVoteResult>$$.ctor*/ func_0x01e4786c(uVar8,lVar12,uRam0000000003d60108,uRam0000000003d2a228);
              param_3 = (undefined8 *)0x0;
              plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar8);
              if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510)) {
                *(long **)(unaff_x22 + 0x58) = plVar6;
                if (((*(long *)(lVar12 + 0x20) == 0) ||
                    (lVar4 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar4 == 0)) ||
                   (unaff_x22 = *(long *)(lVar4 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
                uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
                unaff_x23 = 0x3d1b668;
                uVar8 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
                /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar8,lVar12,uRam0000000003d60100,uRam0000000003d2a4a8);
                param_3 = (undefined8 *)0x0;
                plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar8);
                if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
                  uVar11 = 0;
                  *(long **)(unaff_x22 + 0xa0) = plVar6;
                  goto code_r0x01529bdc;
                }
              }
            }
          }
        }
        goto code_r0x01529bfc;
      }
code_r0x01529bf8:
      func_0x00f78af4();
    }
    else {
      if (*(char *)(lVar12 + 0x40) != '\0') {
        return 1;
      }
      unaff_x22 = *(long *)(lVar4 + 0x10);
      if (unaff_x22 == 0) goto code_r0x01529bf8;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
      unaff_x23 = 0x3d1b518;
      uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar8,lVar12,uRam0000000003d60110,uRam0000000003d2a238);
      param_3 = (undefined8 *)0x0;
      plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar7,uVar8);
      if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(unaff_x22 + 0x40) = plVar6;
        if ((*(long *)(lVar12 + 0x20) == 0) ||
           ((lVar4 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar4 == 0 ||
            (unaff_x22 = *(long *)(lVar4 + 0x10), unaff_x23 = 0x3d1b518, unaff_x22 == 0))))
        goto code_r0x01529bf8;
        uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
        unaff_x23 = 0x3d1b520;
        uVar13 = 0x3d1b520;
        uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar8,lVar12,uRam0000000003d60118,uRam0000000003d2a248);
        param_3 = (undefined8 *)0x0;
        plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar7,uVar8);
        if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) {
          *(long **)(unaff_x22 + 0x48) = plVar6;
          unaff_x23 = uVar13;
          if (((*(long *)(lVar12 + 0x20) == 0) ||
              (lVar4 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar4 == 0)) ||
             (unaff_x22 = *(long *)(lVar4 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
          uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
          unaff_x23 = 0x3d1b670;
          uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670);
          /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar8,lVar12,uRam0000000003d600f8,uRam0000000003d2a4b8);
          param_3 = (undefined8 *)0x0;
          plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar7,uVar8);
          if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670)) {
            *(long **)(unaff_x22 + 0x50) = plVar6;
            if ((*(long *)(lVar12 + 0x20) == 0) ||
               ((lVar4 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar4 == 0 ||
                (unaff_x22 = *(long *)(lVar4 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
            uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
            unaff_x23 = 0x3d1b510;
            uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510);
            /*System.Action<NetworkVoteResult>$$.ctor*/ func_0x01e4786c(uVar8,lVar12,uRam0000000003d60108,uRam0000000003d2a228);
            param_3 = (undefined8 *)0x0;
            plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar7,uVar8);
            if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510)) {
              *(long **)(unaff_x22 + 0x58) = plVar6;
              if (((*(long *)(lVar12 + 0x20) == 0) ||
                  (lVar4 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar4 == 0)) ||
                 (unaff_x22 = *(long *)(lVar4 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
              uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
              unaff_x23 = 0x3d1b668;
              uVar8 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
              /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar8,lVar12,uRam0000000003d60100,uRam0000000003d2a4a8);
              param_3 = (undefined8 *)0x0;
              plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar7,uVar8);
              if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
                *(long **)(unaff_x22 + 0xa0) = plVar6;
                uVar11 = 1;
code_r0x01529bdc:
                *(undefined1 *)(lVar12 + 0x40) = uVar11;
                return 1;
              }
            }
          }
        }
      }
    }
code_r0x01529bfc:
    auVar17 = func_0x00f78e5c();
    unaff_x21 = auVar17._8_8_;
    lVar4 = auVar17._0_8_;
    *(undefined8 *)(puVar1 + -0x90) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x88) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x80) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x78) = unaff_x23;
    *(long *)(puVar1 + -0x70) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x68) = uVar8;
    *(undefined8 *)(puVar1 + -0x60) = uVar7;
    *(long *)(puVar1 + -0x58) = lVar12;
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x48) = &Atlas_UI_VotingManager__SetVoteData;
    puVar14 = puVar1 + -0x50;
    uVar5 = 0x3eb4000;
    if ((bRam0000000003eb4e70 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d66410);
      func_0x00f78a20(0x3d66418);
      func_0x00f78a20(0x3d66310);
      func_0x00f78a20(0x3d663e0);
      func_0x00f78a20(0x3d76240);
      func_0x00f78a20(0x3d66308);
      func_0x00f78a20(0x3d66420);
      func_0x00f78a20(0x3d663e8);
      bRam0000000003eb4e70 = 1;
    }
    *(undefined8 *)(puVar1 + -0xa0) = 0;
    *(undefined8 *)(puVar1 + -0x98) = 0;
    *(undefined8 *)(puVar1 + -0xb0) = 0;
    *(undefined8 *)(puVar1 + -0xa8) = 0;
    lVar12 = *(long *)(lVar4 + 0x28);
    if (lVar12 != 0) {
      uVar9 = (ulong)*(short *)(unaff_x21 + 2);
      puVar16 = &UNK_01529cd0;
      puVar10 = (undefined8 *)(puVar1 + -0x98);
code_r0x014a7750:
      puVar2 = puVar1 + -0xe0;
      *(long *)(puVar1 + -0xe0) = unaff_x22;
      *(long *)(puVar1 + -0xd8) = unaff_x21;
      *(undefined8 *)(puVar1 + -0xd0) = 0x3eb4000;
      *(long *)(puVar1 + -200) = lVar4;
      *(undefined1 **)(puVar1 + -0xc0) = puVar14;
      *(undefined **)(puVar1 + -0xb8) = puVar16;
      puVar14 = puVar1 + -0xc0;
      unaff_x22 = 0x3eb4000;
      param_3 = puVar10;
      if ((bRam0000000003eb4a5c & 1) == 0) {
        func_0x00f78a20(0x3d3c000);
        func_0x00f78a20(0x3d3c008);
        bRam0000000003eb4a5c = 1;
      }
      uVar3 = (uint)uVar9;
      if (-1 < (int)uVar3) {
        lVar4 = *(long *)(lVar12 + 0x10);
        if (lVar4 == 0) {
          puVar16 = &Atlas_Networking_NetworkIdentifiers__TryGetKeyFromIdentifier;
          auVar18 = func_0x00f78af4();
          auVar17._8_8_ = 0;
          auVar17._0_8_ = puVar10;
          uVar5 = uVar9;
          goto code_r0x014a77f0;
        }
        if ((int)uVar3 < (int)*(uint *)(lVar4 + 0x18)) {
          if (*(uint *)(lVar4 + 0x18) <= uVar3) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + (uVar9 & 0xffff) * 8 + 0x20);
          uVar5 = 1;
          goto code_r0x014a77d8;
        }
      }
      uVar7 = 0;
      uVar5 = 0;
code_r0x014a77d8:
      *puVar10 = uVar7;
      return uVar5;
    }
    auVar18 = func_0x00f78af4();
    uVar9 = auVar18._8_8_;
    *(undefined1 **)(puVar1 + -0xc0) = puVar14;
    *(undefined **)(puVar1 + -0xb8) = &Atlas_UI_VotingManager__GetIdentifierFromKey;
    lVar12 = *(long *)(auVar18._0_8_ + 0x28);
    if (lVar12 != 0) {
      puVar14 = *(undefined1 **)(puVar1 + -0xc0);
      puVar16 = *(undefined **)(puVar1 + -0xb8);
      puVar10 = param_3;
      goto code_r0x014a7750;
    }
    auVar18 = func_0x00f78af4();
    *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0xc0;
    *(undefined **)(puVar1 + -200) = &Atlas_UI_VotingManager__GetKeyFromIdentifier;
    lVar12 = *(long *)(auVar18._0_8_ + 0x28);
    auVar18._8_8_ = auVar18._8_8_;
    auVar18._0_8_ = lVar12;
    if (lVar12 != 0) {
      puVar2 = puVar1 + -0xc0;
      puVar14 = *(undefined1 **)(puVar1 + -0xd0);
      puVar16 = *(undefined **)(puVar1 + -200);
code_r0x014a77f0:
      *(long *)(puVar2 + -0x30) = unaff_x22;
      *(long *)(puVar2 + -0x28) = auVar17._8_8_;
      *(ulong *)(puVar2 + -0x20) = uVar5;
      *(long *)(puVar2 + -0x18) = auVar17._0_8_;
      *(undefined1 **)(puVar2 + -0x10) = puVar14;
      *(undefined **)(puVar2 + -8) = puVar16;
      if ((bRam0000000003eb4a5d & 1) == 0) {
        func_0x00f78a20(0x3d2fc10);
        bRam0000000003eb4a5d = 1;
      }
      lVar4 = *(long *)(auVar18._0_8_ + 0x18);
      if (lVar4 != 0) {
        uVar5 = /*System.Collections.Generic.Dictionary<string, short>$$TryGetValue*/ func_0x01ecd290(lVar4,auVar18._8_8_,param_3,uRam0000000003d2fc10);
        if ((uVar5 & 1) == 0) {
          *(undefined2 *)param_3 = 0;
        }
        return uVar5;
      }
      uVar5 = func_0x00f78af4();
      return uVar5;
    }
    lVar12 = func_0x00f78af4();
    *(long *)(puVar1 + -0x100) = unaff_x22;
    *(long *)(puVar1 + -0xf8) = unaff_x21;
    *(undefined8 *)(puVar1 + -0xf0) = 0x3eb4000;
    *(long *)(puVar1 + -0xe8) = lVar4;
    *(undefined1 **)(puVar1 + -0xe0) = puVar1 + -0xd0;
    *(undefined **)(puVar1 + -0xd8) = &Atlas_UI_VotingManager__VotingFinished;
    ppuVar15 = (undefined1 **)(puVar1 + -0xe0);
    Atlas_UI_VotingManager__set_VotingManagerStage(lVar12,0);
    *(undefined4 *)(lVar12 + 0xa8) = 0;
    uVar7 = 0;
    puVar16 = &UNK_0152a1c0;
    puVar1 = puVar1 + -0x100;
    lVar4 = lVar12;
  } while( true );
}



// ============================================================
// RVA: 0x1529518 | Atlas.UI.VotingManager.SetNextAiVoteTime
// ============================================================

/* WARNING: Possible PIC construction at 0x01529ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01529d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152ac44) */
/* WARNING: Removing unreachable block (ram,0x0152af80) */
/* WARNING: Removing unreachable block (ram,0x0152ac48) */
/* WARNING: Removing unreachable block (ram,0x0152ac54) */
/* WARNING: Removing unreachable block (ram,0x0152ac58) */
/* WARNING: Removing unreachable block (ram,0x0152ac60) */
/* WARNING: Removing unreachable block (ram,0x0152ac68) */
/* WARNING: Removing unreachable block (ram,0x0152af48) */
/* WARNING: Removing unreachable block (ram,0x0152ac78) */
/* WARNING: Removing unreachable block (ram,0x0152aca0) */
/* WARNING: Removing unreachable block (ram,0x0152ac8c) */
/* WARNING: Removing unreachable block (ram,0x0152ac9c) */
/* WARNING: Removing unreachable block (ram,0x0152a5e8) */
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
/* WARNING: Removing unreachable block (ram,0x0152a8d0) */
/* WARNING: Removing unreachable block (ram,0x0152a860) */
/* WARNING: Removing unreachable block (ram,0x0152a86c) */
/* WARNING: Removing unreachable block (ram,0x0152a884) */
/* WARNING: Removing unreachable block (ram,0x0152a88c) */
/* WARNING: Removing unreachable block (ram,0x0152a5bc) */
/* WARNING: Removing unreachable block (ram,0x0152a5c4) */
/* WARNING: Removing unreachable block (ram,0x0152a5dc) */
/* WARNING: Removing unreachable block (ram,0x0152a570) */
/* WARNING: Removing unreachable block (ram,0x0152a578) */
/* WARNING: Removing unreachable block (ram,0x0152a580) */
/* WARNING: Removing unreachable block (ram,0x0152a598) */
/* WARNING: Removing unreachable block (ram,0x0152a5b0) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Removing unreachable block (ram,0x0152a334) */
/* WARNING: Removing unreachable block (ram,0x0152a290) */
/* WARNING: Removing unreachable block (ram,0x0152a298) */
/* WARNING: Removing unreachable block (ram,0x0152a2c0) */
/* WARNING: Removing unreachable block (ram,0x0152a2c8) */
/* WARNING: Removing unreachable block (ram,0x0152a2cc) */
/* WARNING: Removing unreachable block (ram,0x0152a1c0) */
/* WARNING: Removing unreachable block (ram,0x0152a1dc) */
/* WARNING: Removing unreachable block (ram,0x0152a1e4) */
/* WARNING: Removing unreachable block (ram,0x0152a1f0) */
/* WARNING: Removing unreachable block (ram,0x0152a22c) */
/* WARNING: Removing unreachable block (ram,0x0152a260) */
/* WARNING: Removing unreachable block (ram,0x0152a274) */
/* WARNING: Removing unreachable block (ram,0x0152a300) */
/* WARNING: Removing unreachable block (ram,0x0152a35c) */
/* WARNING: Removing unreachable block (ram,0x0152a3a0) */
/* WARNING: Removing unreachable block (ram,0x0152a3c0) */
/* WARNING: Removing unreachable block (ram,0x0152a3fc) */
/* WARNING: Removing unreachable block (ram,0x0152a43c) */
/* WARNING: Removing unreachable block (ram,0x0152a46c) */
/* WARNING: Removing unreachable block (ram,0x0152a4d4) */
/* WARNING: Removing unreachable block (ram,0x0152a4e4) */
/* WARNING: Removing unreachable block (ram,0x0152a8ac) */
/* WARNING: Removing unreachable block (ram,0x0152a4f0) */
/* WARNING: Removing unreachable block (ram,0x0152a4f8) */
/* WARNING: Removing unreachable block (ram,0x0152a508) */
/* WARNING: Removing unreachable block (ram,0x0152a528) */
/* WARNING: Removing unreachable block (ram,0x0152a540) */
/* WARNING: Removing unreachable block (ram,0x0152a558) */
/* WARNING: Removing unreachable block (ram,0x0152a8c4) */
/* WARNING: Removing unreachable block (ram,0x0152a8c8) */
/* WARNING: Removing unreachable block (ram,0x0152a8d4) */
/* WARNING: Removing unreachable block (ram,0x0152a560) */
/* WARNING: Removing unreachable block (ram,0x0152a518) */
/* WARNING: Removing unreachable block (ram,0x0152a8dc) */
/* WARNING: Removing unreachable block (ram,0x0152a914) */
/* WARNING: Removing unreachable block (ram,0x0152aa90) */
/* WARNING: Removing unreachable block (ram,0x0152aab8) */
/* WARNING: Removing unreachable block (ram,0x0152aaf8) */
/* WARNING: Removing unreachable block (ram,0x0152ab00) */
/* WARNING: Removing unreachable block (ram,0x0152ab0c) */
/* WARNING: Removing unreachable block (ram,0x0152ab40) */
/* WARNING: Removing unreachable block (ram,0x0152ab48) */
/* WARNING: Removing unreachable block (ram,0x0152ab54) */
/* WARNING: Removing unreachable block (ram,0x0152aba4) */
/* WARNING: Removing unreachable block (ram,0x0152acd4) */
/* WARNING: Removing unreachable block (ram,0x0152acfc) */
/* WARNING: Removing unreachable block (ram,0x0152abb4) */
/* WARNING: Removing unreachable block (ram,0x0152abc4) */
/* WARNING: Removing unreachable block (ram,0x0152af70) */
/* WARNING: Removing unreachable block (ram,0x0152abd0) */
/* WARNING: Removing unreachable block (ram,0x0152abe4) */
/* WARNING: Removing unreachable block (ram,0x0152af98) */
/* WARNING: Removing unreachable block (ram,0x0152abec) */
/* WARNING: Removing unreachable block (ram,0x0152abfc) */
/* WARNING: Removing unreachable block (ram,0x0152af78) */
/* WARNING: Removing unreachable block (ram,0x0152ac04) */
/* WARNING: Removing unreachable block (ram,0x0152af68) */
/* WARNING: Removing unreachable block (ram,0x0152ac34) */
/* WARNING: Removing unreachable block (ram,0x0152a404) */
/* WARNING: Removing unreachable block (ram,0x0152a324) */
/* WARNING: Removing unreachable block (ram,0x0152a280) */
/* WARNING: Removing unreachable block (ram,0x0152a1f8) */
/* WARNING: Removing unreachable block (ram,0x0152a218) */
/* WARNING: Removing unreachable block (ram,0x0152a21c) */
/* WARNING: Removing unreachable block (ram,0x01529d04) */
/* WARNING: Removing unreachable block (ram,0x01529d0c) */
/* WARNING: Removing unreachable block (ram,0x01529d38) */
/* WARNING: Removing unreachable block (ram,0x01529d4c) */
/* WARNING: Removing unreachable block (ram,0x01529d5c) */
/* WARNING: Removing unreachable block (ram,0x01529d64) */
/* WARNING: Removing unreachable block (ram,0x01529d80) */
/* WARNING: Removing unreachable block (ram,0x01529d94) */
/* WARNING: Removing unreachable block (ram,0x01529da0) */
/* WARNING: Removing unreachable block (ram,0x01529db4) */
/* WARNING: Removing unreachable block (ram,0x01529dc4) */
/* WARNING: Removing unreachable block (ram,0x01529dc8) */
/* WARNING: Removing unreachable block (ram,0x01529dd0) */
/* WARNING: Removing unreachable block (ram,0x01529dec) */
/* WARNING: Removing unreachable block (ram,0x01529e00) */
/* WARNING: Removing unreachable block (ram,0x01529e0c) */
/* WARNING: Removing unreachable block (ram,0x01529e20) */
/* WARNING: Removing unreachable block (ram,0x01529e30) */
/* WARNING: Removing unreachable block (ram,0x01529e34) */
/* WARNING: Removing unreachable block (ram,0x01529e3c) */
/* WARNING: Removing unreachable block (ram,0x01529e58) */
/* WARNING: Removing unreachable block (ram,0x01529e6c) */
/* WARNING: Removing unreachable block (ram,0x01529e78) */
/* WARNING: Removing unreachable block (ram,0x01529e8c) */
/* WARNING: Removing unreachable block (ram,0x01529e9c) */
/* WARNING: Removing unreachable block (ram,0x01529ea0) */
/* WARNING: Removing unreachable block (ram,0x01529ea8) */
/* WARNING: Removing unreachable block (ram,0x01529ec4) */
/* WARNING: Removing unreachable block (ram,0x01529ed8) */
/* WARNING: Removing unreachable block (ram,0x01529ee4) */
/* WARNING: Removing unreachable block (ram,0x01529ef8) */
/* WARNING: Removing unreachable block (ram,0x01529f08) */
/* WARNING: Removing unreachable block (ram,0x01529f0c) */
/* WARNING: Removing unreachable block (ram,0x01529f14) */
/* WARNING: Removing unreachable block (ram,0x01529f24) */
/* WARNING: Removing unreachable block (ram,0x01529f38) */
/* WARNING: Removing unreachable block (ram,0x01529f3c) */
/* WARNING: Removing unreachable block (ram,0x01529f44) */
/* WARNING: Removing unreachable block (ram,0x01529f58) */
/* WARNING: Removing unreachable block (ram,0x01529f68) */
/* WARNING: Removing unreachable block (ram,0x01529f6c) */
/* WARNING: Removing unreachable block (ram,0x01529f74) */
/* WARNING: Removing unreachable block (ram,0x01529f84) */
/* WARNING: Removing unreachable block (ram,0x01529f98) */
/* WARNING: Removing unreachable block (ram,0x01529f9c) */
/* WARNING: Removing unreachable block (ram,0x01529fa4) */
/* WARNING: Removing unreachable block (ram,0x01529fb8) */
/* WARNING: Removing unreachable block (ram,0x01529fc8) */
/* WARNING: Removing unreachable block (ram,0x01529fcc) */
/* WARNING: Removing unreachable block (ram,0x01529fd4) */
/* WARNING: Removing unreachable block (ram,0x01529fe4) */
/* WARNING: Removing unreachable block (ram,0x01529ff8) */
/* WARNING: Removing unreachable block (ram,0x01529ffc) */
/* WARNING: Removing unreachable block (ram,0x0152a004) */
/* WARNING: Removing unreachable block (ram,0x0152a018) */
/* WARNING: Removing unreachable block (ram,0x0152a028) */
/* WARNING: Removing unreachable block (ram,0x0152a02c) */
/* WARNING: Removing unreachable block (ram,0x0152a034) */
/* WARNING: Removing unreachable block (ram,0x0152a044) */
/* WARNING: Removing unreachable block (ram,0x0152a144) */
/* WARNING: Removing unreachable block (ram,0x0152a058) */
/* WARNING: Removing unreachable block (ram,0x0152a05c) */
/* WARNING: Removing unreachable block (ram,0x0152a064) */
/* WARNING: Removing unreachable block (ram,0x0152a07c) */
/* WARNING: Removing unreachable block (ram,0x0152a094) */
/* WARNING: Removing unreachable block (ram,0x0152a09c) */
/* WARNING: Removing unreachable block (ram,0x0152a0a0) */
/* WARNING: Removing unreachable block (ram,0x0152a0b4) */
/* WARNING: Removing unreachable block (ram,0x0152a0c0) */
/* WARNING: Removing unreachable block (ram,0x0152a0d4) */
/* WARNING: Removing unreachable block (ram,0x0152a0e0) */
/* WARNING: Removing unreachable block (ram,0x0152a0f8) */
/* WARNING: Removing unreachable block (ram,0x0152a104) */
/* WARNING: Removing unreachable block (ram,0x0152a13c) */
/* WARNING: Removing unreachable block (ram,0x0152a148) */
/* WARNING: Removing unreachable block (ram,0x0152a11c) */
/* WARNING: Removing unreachable block (ram,0x01529cd0) */
/* WARNING: Removing unreachable block (ram,0x01529cd8) */
/* WARNING: Removing unreachable block (ram,0x01529cf4) */
/* WARNING: Removing unreachable block (ram,0x0152ad60) */
/* WARNING: Removing unreachable block (ram,0x0152af90) */
/* WARNING: Removing unreachable block (ram,0x0152ad64) */
/* WARNING: Removing unreachable block (ram,0x0152ad70) */
/* WARNING: Removing unreachable block (ram,0x0152ad74) */
/* WARNING: Removing unreachable block (ram,0x0152ad7c) */
/* WARNING: Removing unreachable block (ram,0x0152ad84) */
/* WARNING: Removing unreachable block (ram,0x0152af50) */
/* WARNING: Removing unreachable block (ram,0x0152ad94) */
/* WARNING: Removing unreachable block (ram,0x0152adbc) */
/* WARNING: Removing unreachable block (ram,0x0152ada8) */
/* WARNING: Removing unreachable block (ram,0x0152adb8) */
/* WARNING: Removing unreachable block (ram,0x0152ad1c) */
/* WARNING: Removing unreachable block (ram,0x0152adf0) */
/* WARNING: Removing unreachable block (ram,0x0152ae20) */
/* WARNING: Removing unreachable block (ram,0x0152ae30) */
/* WARNING: Removing unreachable block (ram,0x0152ae34) */
/* WARNING: Removing unreachable block (ram,0x0152ae50) */
/* WARNING: Removing unreachable block (ram,0x0152ae58) */
/* WARNING: Removing unreachable block (ram,0x0152ae5c) */
/* WARNING: Removing unreachable block (ram,0x0152aeb0) */
/* WARNING: Removing unreachable block (ram,0x0152aeec) */
/* WARNING: Removing unreachable block (ram,0x0152af24) */
/* WARNING: Removing unreachable block (ram,0x0152aec0) */
/* WARNING: Removing unreachable block (ram,0x0152af60) */
/* WARNING: Removing unreachable block (ram,0x0152aec8) */
/* WARNING: Removing unreachable block (ram,0x0152ad34) */
/* WARNING: Removing unreachable block (ram,0x0152ad44) */
/* WARNING: Removing unreachable block (ram,0x0152af88) */
/* WARNING: Removing unreachable block (ram,0x0152af9c) */
/* WARNING: Removing unreachable block (ram,0x0152ad4c) */

ulong Atlas_UI_VotingManager__SetNextAiVoteTime(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar13;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_30 [12];
  int iStack_24;
  
  puVar14 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e7b & 1) == 0) {
    func_0x00f78a20(0x3d727a8);
    func_0x00f78a20(0x3d77a28);
    bRam0000000003eb4e7b = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(param_1 + 0x20),0);
    if ((int)uVar3 != 0) {
      lVar10 = *(long *)(param_1 + 0xd0);
      if ((lVar10 == 0) || (plVar4 = *(long **)(param_1 + 0x50), plVar4 == (long *)0x0))
      goto LAB_015295f8;
      iStack_24 = (**(code **)(*plVar4 + 0x188))
                            (plVar4,*(undefined4 *)(lVar10 + 0x28),*(undefined4 *)(lVar10 + 0x2c),
                             *(undefined8 *)(*plVar4 + 400));
      *(float *)(param_1 + 0xd8) = (float)iStack_24 / 1000.0;
      uVar5 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_24,0);
      uVar6 = /*System.Single$$ToString*/ func_0x029ba8bc((float *)(param_1 + 0xd8),0);
      uVar3 = /*System.String$$Concat*/ func_0x029be818(/*STR('SetNextAiVoteTime msUntilNetxVote ')*/ uRam0000000003d727a8,uVar5,/*STR('_timeUntilNextAIVote ')*/ uRam0000000003d77a28,uVar6,0);
    }
    return uVar3;
  }
LAB_015295f8:
  lVar10 = func_0x00f78af4();
  *(undefined1 *)(lVar10 + 0xdc) = 0;
  /*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(lVar10 + 0x98,0);
  *(undefined4 *)(lVar10 + 0xa8) = 0;
  uVar5 = 1;
  puVar15 = &Atlas_UI_VotingManager__VotingStarted;
  puVar1 = auStack_30;
  do {
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = 0x3eb4000;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar14;
    *(undefined **)(puVar1 + -8) = puVar15;
    uVar6 = 0x3eb4000;
    if ((bRam0000000003eb4e6f & 1) == 0) {
      func_0x00f78a20(0x3d2a228);
      func_0x00f78a20(0x3d2a248);
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d1b520);
      func_0x00f78a20(0x3d1b510);
      func_0x00f78a20(0x3d2a4b8);
      func_0x00f78a20(0x3d2a4a8);
      func_0x00f78a20(0x3d1b670);
      func_0x00f78a20(0x3d1b668);
      func_0x00f78a20(0x3d600f8);
      func_0x00f78a20(0x3d60100);
      func_0x00f78a20(0x3d60108);
      func_0x00f78a20(0x3d60110);
      func_0x00f78a20(0x3d60118);
      bRam0000000003eb4e6f = 1;
    }
    if ((*(long *)(lVar10 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar11 == 0)) {
      return 0;
    }
    if ((int)uVar5 == 0) {
      if (*(char *)(lVar10 + 0x40) == '\0') {
        return 1;
      }
      unaff_x22 = *(long *)(lVar11 + 0x10);
      if (unaff_x22 != 0) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
        unaff_x23 = 0x3d1b518;
        uVar6 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
        /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar6,lVar10,uRam0000000003d60110,uRam0000000003d2a238);
        param_3 = (undefined8 *)0x0;
        plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar6);
        if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
          *(long **)(unaff_x22 + 0x40) = plVar4;
          if ((*(long *)(lVar10 + 0x20) == 0) ||
             ((lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar11 == 0 ||
              (unaff_x22 = *(long *)(lVar11 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
          uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
          unaff_x23 = 0x3d1b520;
          uVar6 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar6,lVar10,uRam0000000003d60118,uRam0000000003d2a248);
          param_3 = (undefined8 *)0x0;
          plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar6);
          if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) {
            *(long **)(unaff_x22 + 0x48) = plVar4;
            if (((*(long *)(lVar10 + 0x20) == 0) ||
                (lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar11 == 0)) ||
               (unaff_x22 = *(long *)(lVar11 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
            uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
            unaff_x23 = 0x3d1b670;
            uVar6 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670);
            /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar6,lVar10,uRam0000000003d600f8,uRam0000000003d2a4b8);
            param_3 = (undefined8 *)0x0;
            plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar6);
            if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670)) {
              *(long **)(unaff_x22 + 0x50) = plVar4;
              if ((*(long *)(lVar10 + 0x20) == 0) ||
                 ((lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar11 == 0 ||
                  (unaff_x22 = *(long *)(lVar11 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
              uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
              unaff_x23 = 0x3d1b510;
              uVar6 = func_0x00f78aec(/*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510);
              /*System.Action<NetworkVoteResult>$$.ctor*/ func_0x01e4786c(uVar6,lVar10,uRam0000000003d60108,uRam0000000003d2a228);
              param_3 = (undefined8 *)0x0;
              plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar6);
              if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510)) {
                *(long **)(unaff_x22 + 0x58) = plVar4;
                if (((*(long *)(lVar10 + 0x20) == 0) ||
                    (lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar11 == 0)) ||
                   (unaff_x22 = *(long *)(lVar11 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
                uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
                unaff_x23 = 0x3d1b668;
                uVar6 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
                /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar6,lVar10,uRam0000000003d60100,uRam0000000003d2a4a8);
                param_3 = (undefined8 *)0x0;
                plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar6);
                if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
                  uVar9 = 0;
                  *(long **)(unaff_x22 + 0xa0) = plVar4;
                  goto code_r0x01529bdc;
                }
              }
            }
          }
        }
        goto code_r0x01529bfc;
      }
code_r0x01529bf8:
      func_0x00f78af4();
    }
    else {
      if (*(char *)(lVar10 + 0x40) != '\0') {
        return 1;
      }
      unaff_x22 = *(long *)(lVar11 + 0x10);
      if (unaff_x22 == 0) goto code_r0x01529bf8;
      uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
      unaff_x23 = 0x3d1b518;
      uVar6 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar6,lVar10,uRam0000000003d60110,uRam0000000003d2a238);
      param_3 = (undefined8 *)0x0;
      plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar6);
      if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(unaff_x22 + 0x40) = plVar4;
        if ((*(long *)(lVar10 + 0x20) == 0) ||
           ((lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar11 == 0 ||
            (unaff_x22 = *(long *)(lVar11 + 0x10), unaff_x23 = 0x3d1b518, unaff_x22 == 0))))
        goto code_r0x01529bf8;
        uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
        unaff_x23 = 0x3d1b520;
        uVar13 = 0x3d1b520;
        uVar6 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar6,lVar10,uRam0000000003d60118,uRam0000000003d2a248);
        param_3 = (undefined8 *)0x0;
        plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar6);
        if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) {
          *(long **)(unaff_x22 + 0x48) = plVar4;
          unaff_x23 = uVar13;
          if (((*(long *)(lVar10 + 0x20) == 0) ||
              (lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar11 == 0)) ||
             (unaff_x22 = *(long *)(lVar11 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
          uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
          unaff_x23 = 0x3d1b670;
          uVar6 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670);
          /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar6,lVar10,uRam0000000003d600f8,uRam0000000003d2a4b8);
          param_3 = (undefined8 *)0x0;
          plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar6);
          if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670)) {
            *(long **)(unaff_x22 + 0x50) = plVar4;
            if ((*(long *)(lVar10 + 0x20) == 0) ||
               ((lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar11 == 0 ||
                (unaff_x22 = *(long *)(lVar11 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
            uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
            unaff_x23 = 0x3d1b510;
            uVar6 = func_0x00f78aec(/*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510);
            /*System.Action<NetworkVoteResult>$$.ctor*/ func_0x01e4786c(uVar6,lVar10,uRam0000000003d60108,uRam0000000003d2a228);
            param_3 = (undefined8 *)0x0;
            plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar6);
            if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510)) {
              *(long **)(unaff_x22 + 0x58) = plVar4;
              if (((*(long *)(lVar10 + 0x20) == 0) ||
                  (lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar11 == 0)) ||
                 (unaff_x22 = *(long *)(lVar11 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
              uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
              unaff_x23 = 0x3d1b668;
              uVar6 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
              /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar6,lVar10,uRam0000000003d60100,uRam0000000003d2a4a8);
              param_3 = (undefined8 *)0x0;
              plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar6);
              if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
                *(long **)(unaff_x22 + 0xa0) = plVar4;
                uVar9 = 1;
code_r0x01529bdc:
                *(undefined1 *)(lVar10 + 0x40) = uVar9;
                return 1;
              }
            }
          }
        }
      }
    }
code_r0x01529bfc:
    auVar16 = func_0x00f78e5c();
    unaff_x21 = auVar16._8_8_;
    lVar11 = auVar16._0_8_;
    *(undefined8 *)(puVar1 + -0x90) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x88) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x80) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x78) = unaff_x23;
    *(long *)(puVar1 + -0x70) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x68) = uVar6;
    *(undefined8 *)(puVar1 + -0x60) = uVar5;
    *(long *)(puVar1 + -0x58) = lVar10;
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x48) = &Atlas_UI_VotingManager__SetVoteData;
    puVar14 = puVar1 + -0x50;
    uVar3 = 0x3eb4000;
    if ((bRam0000000003eb4e70 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d66410);
      func_0x00f78a20(0x3d66418);
      func_0x00f78a20(0x3d66310);
      func_0x00f78a20(0x3d663e0);
      func_0x00f78a20(0x3d76240);
      func_0x00f78a20(0x3d66308);
      func_0x00f78a20(0x3d66420);
      func_0x00f78a20(0x3d663e8);
      bRam0000000003eb4e70 = 1;
    }
    *(undefined8 *)(puVar1 + -0xa0) = 0;
    *(undefined8 *)(puVar1 + -0x98) = 0;
    *(undefined8 *)(puVar1 + -0xb0) = 0;
    *(undefined8 *)(puVar1 + -0xa8) = 0;
    lVar10 = *(long *)(lVar11 + 0x28);
    if (lVar10 != 0) {
      uVar7 = (ulong)*(short *)(unaff_x21 + 2);
      puVar15 = &UNK_01529cd0;
      puVar8 = (undefined8 *)(puVar1 + -0x98);
code_r0x014a7750:
      puVar2 = puVar1 + -0xe0;
      *(long *)(puVar1 + -0xe0) = unaff_x22;
      *(long *)(puVar1 + -0xd8) = unaff_x21;
      *(undefined8 *)(puVar1 + -0xd0) = 0x3eb4000;
      *(long *)(puVar1 + -200) = lVar11;
      *(undefined1 **)(puVar1 + -0xc0) = puVar14;
      *(undefined **)(puVar1 + -0xb8) = puVar15;
      puVar14 = puVar1 + -0xc0;
      unaff_x22 = 0x3eb4000;
      param_3 = puVar8;
      if ((bRam0000000003eb4a5c & 1) == 0) {
        func_0x00f78a20(0x3d3c000);
        func_0x00f78a20(0x3d3c008);
        bRam0000000003eb4a5c = 1;
      }
      uVar12 = (uint)uVar7;
      if (-1 < (int)uVar12) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          puVar15 = &Atlas_Networking_NetworkIdentifiers__TryGetKeyFromIdentifier;
          auVar17 = func_0x00f78af4();
          auVar16._8_8_ = 0;
          auVar16._0_8_ = puVar8;
          uVar3 = uVar7;
          goto code_r0x014a77f0;
        }
        if ((int)uVar12 < (int)*(uint *)(lVar10 + 0x18)) {
          if (*(uint *)(lVar10 + 0x18) <= uVar12) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar5 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + (uVar7 & 0xffff) * 8 + 0x20);
          uVar3 = 1;
          goto code_r0x014a77d8;
        }
      }
      uVar5 = 0;
      uVar3 = 0;
code_r0x014a77d8:
      *puVar8 = uVar5;
      return uVar3;
    }
    auVar17 = func_0x00f78af4();
    uVar7 = auVar17._8_8_;
    *(undefined1 **)(puVar1 + -0xc0) = puVar14;
    *(undefined **)(puVar1 + -0xb8) = &Atlas_UI_VotingManager__GetIdentifierFromKey;
    lVar10 = *(long *)(auVar17._0_8_ + 0x28);
    if (lVar10 != 0) {
      puVar14 = *(undefined1 **)(puVar1 + -0xc0);
      puVar15 = *(undefined **)(puVar1 + -0xb8);
      puVar8 = param_3;
      goto code_r0x014a7750;
    }
    auVar17 = func_0x00f78af4();
    *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0xc0;
    *(undefined **)(puVar1 + -200) = &Atlas_UI_VotingManager__GetKeyFromIdentifier;
    lVar10 = *(long *)(auVar17._0_8_ + 0x28);
    auVar17._8_8_ = auVar17._8_8_;
    auVar17._0_8_ = lVar10;
    if (lVar10 != 0) {
      puVar2 = puVar1 + -0xc0;
      puVar14 = *(undefined1 **)(puVar1 + -0xd0);
      puVar15 = *(undefined **)(puVar1 + -200);
code_r0x014a77f0:
      *(long *)(puVar2 + -0x30) = unaff_x22;
      *(long *)(puVar2 + -0x28) = auVar16._8_8_;
      *(ulong *)(puVar2 + -0x20) = uVar3;
      *(long *)(puVar2 + -0x18) = auVar16._0_8_;
      *(undefined1 **)(puVar2 + -0x10) = puVar14;
      *(undefined **)(puVar2 + -8) = puVar15;
      if ((bRam0000000003eb4a5d & 1) == 0) {
        func_0x00f78a20(0x3d2fc10);
        bRam0000000003eb4a5d = 1;
      }
      lVar10 = *(long *)(auVar17._0_8_ + 0x18);
      if (lVar10 != 0) {
        uVar3 = /*System.Collections.Generic.Dictionary<string, short>$$TryGetValue*/ func_0x01ecd290(lVar10,auVar17._8_8_,param_3,uRam0000000003d2fc10);
        if ((uVar3 & 1) == 0) {
          *(undefined2 *)param_3 = 0;
        }
        return uVar3;
      }
      uVar3 = func_0x00f78af4();
      return uVar3;
    }
    lVar10 = func_0x00f78af4();
    *(long *)(puVar1 + -0x100) = unaff_x22;
    *(long *)(puVar1 + -0xf8) = unaff_x21;
    *(undefined8 *)(puVar1 + -0xf0) = 0x3eb4000;
    *(long *)(puVar1 + -0xe8) = lVar11;
    *(undefined1 **)(puVar1 + -0xe0) = puVar1 + -0xd0;
    *(undefined **)(puVar1 + -0xd8) = &Atlas_UI_VotingManager__VotingFinished;
    puVar14 = puVar1 + -0xe0;
    Atlas_UI_VotingManager__set_VotingManagerStage(lVar10,0);
    *(undefined4 *)(lVar10 + 0xa8) = 0;
    uVar5 = 0;
    puVar15 = &UNK_0152a1c0;
    puVar1 = puVar1 + -0x100;
    param_1 = lVar10;
  } while( true );
}



// ============================================================
// RVA: 0x15295fc | Atlas.UI.VotingManager.VotingStarted
// ============================================================

/* WARNING: Possible PIC construction at 0x01529ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01529d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152ac44) */
/* WARNING: Removing unreachable block (ram,0x0152af80) */
/* WARNING: Removing unreachable block (ram,0x0152ac48) */
/* WARNING: Removing unreachable block (ram,0x0152ac54) */
/* WARNING: Removing unreachable block (ram,0x0152ac58) */
/* WARNING: Removing unreachable block (ram,0x0152ac60) */
/* WARNING: Removing unreachable block (ram,0x0152ac68) */
/* WARNING: Removing unreachable block (ram,0x0152af48) */
/* WARNING: Removing unreachable block (ram,0x0152ac78) */
/* WARNING: Removing unreachable block (ram,0x0152aca0) */
/* WARNING: Removing unreachable block (ram,0x0152ac8c) */
/* WARNING: Removing unreachable block (ram,0x0152ac9c) */
/* WARNING: Removing unreachable block (ram,0x0152a5e8) */
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
/* WARNING: Removing unreachable block (ram,0x0152a8d0) */
/* WARNING: Removing unreachable block (ram,0x0152a860) */
/* WARNING: Removing unreachable block (ram,0x0152a86c) */
/* WARNING: Removing unreachable block (ram,0x0152a884) */
/* WARNING: Removing unreachable block (ram,0x0152a88c) */
/* WARNING: Removing unreachable block (ram,0x0152a5bc) */
/* WARNING: Removing unreachable block (ram,0x0152a5c4) */
/* WARNING: Removing unreachable block (ram,0x0152a5dc) */
/* WARNING: Removing unreachable block (ram,0x0152a570) */
/* WARNING: Removing unreachable block (ram,0x0152a578) */
/* WARNING: Removing unreachable block (ram,0x0152a580) */
/* WARNING: Removing unreachable block (ram,0x0152a598) */
/* WARNING: Removing unreachable block (ram,0x0152a5b0) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Removing unreachable block (ram,0x0152a334) */
/* WARNING: Removing unreachable block (ram,0x0152a290) */
/* WARNING: Removing unreachable block (ram,0x0152a298) */
/* WARNING: Removing unreachable block (ram,0x0152a2c0) */
/* WARNING: Removing unreachable block (ram,0x0152a2c8) */
/* WARNING: Removing unreachable block (ram,0x0152a2cc) */
/* WARNING: Removing unreachable block (ram,0x0152a1c0) */
/* WARNING: Removing unreachable block (ram,0x0152a1dc) */
/* WARNING: Removing unreachable block (ram,0x0152a1e4) */
/* WARNING: Removing unreachable block (ram,0x0152a1f0) */
/* WARNING: Removing unreachable block (ram,0x0152a22c) */
/* WARNING: Removing unreachable block (ram,0x0152a260) */
/* WARNING: Removing unreachable block (ram,0x0152a274) */
/* WARNING: Removing unreachable block (ram,0x0152a300) */
/* WARNING: Removing unreachable block (ram,0x0152a35c) */
/* WARNING: Removing unreachable block (ram,0x0152a3a0) */
/* WARNING: Removing unreachable block (ram,0x0152a3c0) */
/* WARNING: Removing unreachable block (ram,0x0152a3fc) */
/* WARNING: Removing unreachable block (ram,0x0152a43c) */
/* WARNING: Removing unreachable block (ram,0x0152a46c) */
/* WARNING: Removing unreachable block (ram,0x0152a4d4) */
/* WARNING: Removing unreachable block (ram,0x0152a4e4) */
/* WARNING: Removing unreachable block (ram,0x0152a8ac) */
/* WARNING: Removing unreachable block (ram,0x0152a4f0) */
/* WARNING: Removing unreachable block (ram,0x0152a4f8) */
/* WARNING: Removing unreachable block (ram,0x0152a508) */
/* WARNING: Removing unreachable block (ram,0x0152a528) */
/* WARNING: Removing unreachable block (ram,0x0152a540) */
/* WARNING: Removing unreachable block (ram,0x0152a558) */
/* WARNING: Removing unreachable block (ram,0x0152a8c4) */
/* WARNING: Removing unreachable block (ram,0x0152a8c8) */
/* WARNING: Removing unreachable block (ram,0x0152a8d4) */
/* WARNING: Removing unreachable block (ram,0x0152a560) */
/* WARNING: Removing unreachable block (ram,0x0152a518) */
/* WARNING: Removing unreachable block (ram,0x0152a8dc) */
/* WARNING: Removing unreachable block (ram,0x0152a914) */
/* WARNING: Removing unreachable block (ram,0x0152aa90) */
/* WARNING: Removing unreachable block (ram,0x0152aab8) */
/* WARNING: Removing unreachable block (ram,0x0152aaf8) */
/* WARNING: Removing unreachable block (ram,0x0152ab00) */
/* WARNING: Removing unreachable block (ram,0x0152ab0c) */
/* WARNING: Removing unreachable block (ram,0x0152ab40) */
/* WARNING: Removing unreachable block (ram,0x0152ab48) */
/* WARNING: Removing unreachable block (ram,0x0152ab54) */
/* WARNING: Removing unreachable block (ram,0x0152aba4) */
/* WARNING: Removing unreachable block (ram,0x0152acd4) */
/* WARNING: Removing unreachable block (ram,0x0152acfc) */
/* WARNING: Removing unreachable block (ram,0x0152abb4) */
/* WARNING: Removing unreachable block (ram,0x0152abc4) */
/* WARNING: Removing unreachable block (ram,0x0152af70) */
/* WARNING: Removing unreachable block (ram,0x0152abd0) */
/* WARNING: Removing unreachable block (ram,0x0152abe4) */
/* WARNING: Removing unreachable block (ram,0x0152af98) */
/* WARNING: Removing unreachable block (ram,0x0152abec) */
/* WARNING: Removing unreachable block (ram,0x0152abfc) */
/* WARNING: Removing unreachable block (ram,0x0152af78) */
/* WARNING: Removing unreachable block (ram,0x0152ac04) */
/* WARNING: Removing unreachable block (ram,0x0152af68) */
/* WARNING: Removing unreachable block (ram,0x0152ac34) */
/* WARNING: Removing unreachable block (ram,0x0152a404) */
/* WARNING: Removing unreachable block (ram,0x0152a324) */
/* WARNING: Removing unreachable block (ram,0x0152a280) */
/* WARNING: Removing unreachable block (ram,0x0152a1f8) */
/* WARNING: Removing unreachable block (ram,0x0152a218) */
/* WARNING: Removing unreachable block (ram,0x0152a21c) */
/* WARNING: Removing unreachable block (ram,0x01529d04) */
/* WARNING: Removing unreachable block (ram,0x01529d0c) */
/* WARNING: Removing unreachable block (ram,0x01529d38) */
/* WARNING: Removing unreachable block (ram,0x01529d4c) */
/* WARNING: Removing unreachable block (ram,0x01529d5c) */
/* WARNING: Removing unreachable block (ram,0x01529d64) */
/* WARNING: Removing unreachable block (ram,0x01529d80) */
/* WARNING: Removing unreachable block (ram,0x01529d94) */
/* WARNING: Removing unreachable block (ram,0x01529da0) */
/* WARNING: Removing unreachable block (ram,0x01529db4) */
/* WARNING: Removing unreachable block (ram,0x01529dc4) */
/* WARNING: Removing unreachable block (ram,0x01529dc8) */
/* WARNING: Removing unreachable block (ram,0x01529dd0) */
/* WARNING: Removing unreachable block (ram,0x01529dec) */
/* WARNING: Removing unreachable block (ram,0x01529e00) */
/* WARNING: Removing unreachable block (ram,0x01529e0c) */
/* WARNING: Removing unreachable block (ram,0x01529e20) */
/* WARNING: Removing unreachable block (ram,0x01529e30) */
/* WARNING: Removing unreachable block (ram,0x01529e34) */
/* WARNING: Removing unreachable block (ram,0x01529e3c) */
/* WARNING: Removing unreachable block (ram,0x01529e58) */
/* WARNING: Removing unreachable block (ram,0x01529e6c) */
/* WARNING: Removing unreachable block (ram,0x01529e78) */
/* WARNING: Removing unreachable block (ram,0x01529e8c) */
/* WARNING: Removing unreachable block (ram,0x01529e9c) */
/* WARNING: Removing unreachable block (ram,0x01529ea0) */
/* WARNING: Removing unreachable block (ram,0x01529ea8) */
/* WARNING: Removing unreachable block (ram,0x01529ec4) */
/* WARNING: Removing unreachable block (ram,0x01529ed8) */
/* WARNING: Removing unreachable block (ram,0x01529ee4) */
/* WARNING: Removing unreachable block (ram,0x01529ef8) */
/* WARNING: Removing unreachable block (ram,0x01529f08) */
/* WARNING: Removing unreachable block (ram,0x01529f0c) */
/* WARNING: Removing unreachable block (ram,0x01529f14) */
/* WARNING: Removing unreachable block (ram,0x01529f24) */
/* WARNING: Removing unreachable block (ram,0x01529f38) */
/* WARNING: Removing unreachable block (ram,0x01529f3c) */
/* WARNING: Removing unreachable block (ram,0x01529f44) */
/* WARNING: Removing unreachable block (ram,0x01529f58) */
/* WARNING: Removing unreachable block (ram,0x01529f68) */
/* WARNING: Removing unreachable block (ram,0x01529f6c) */
/* WARNING: Removing unreachable block (ram,0x01529f74) */
/* WARNING: Removing unreachable block (ram,0x01529f84) */
/* WARNING: Removing unreachable block (ram,0x01529f98) */
/* WARNING: Removing unreachable block (ram,0x01529f9c) */
/* WARNING: Removing unreachable block (ram,0x01529fa4) */
/* WARNING: Removing unreachable block (ram,0x01529fb8) */
/* WARNING: Removing unreachable block (ram,0x01529fc8) */
/* WARNING: Removing unreachable block (ram,0x01529fcc) */
/* WARNING: Removing unreachable block (ram,0x01529fd4) */
/* WARNING: Removing unreachable block (ram,0x01529fe4) */
/* WARNING: Removing unreachable block (ram,0x01529ff8) */
/* WARNING: Removing unreachable block (ram,0x01529ffc) */
/* WARNING: Removing unreachable block (ram,0x0152a004) */
/* WARNING: Removing unreachable block (ram,0x0152a018) */
/* WARNING: Removing unreachable block (ram,0x0152a028) */
/* WARNING: Removing unreachable block (ram,0x0152a02c) */
/* WARNING: Removing unreachable block (ram,0x0152a034) */
/* WARNING: Removing unreachable block (ram,0x0152a044) */
/* WARNING: Removing unreachable block (ram,0x0152a144) */
/* WARNING: Removing unreachable block (ram,0x0152a058) */
/* WARNING: Removing unreachable block (ram,0x0152a05c) */
/* WARNING: Removing unreachable block (ram,0x0152a064) */
/* WARNING: Removing unreachable block (ram,0x0152a07c) */
/* WARNING: Removing unreachable block (ram,0x0152a094) */
/* WARNING: Removing unreachable block (ram,0x0152a09c) */
/* WARNING: Removing unreachable block (ram,0x0152a0a0) */
/* WARNING: Removing unreachable block (ram,0x0152a0b4) */
/* WARNING: Removing unreachable block (ram,0x0152a0c0) */
/* WARNING: Removing unreachable block (ram,0x0152a0d4) */
/* WARNING: Removing unreachable block (ram,0x0152a0e0) */
/* WARNING: Removing unreachable block (ram,0x0152a0f8) */
/* WARNING: Removing unreachable block (ram,0x0152a104) */
/* WARNING: Removing unreachable block (ram,0x0152a13c) */
/* WARNING: Removing unreachable block (ram,0x0152a148) */
/* WARNING: Removing unreachable block (ram,0x0152a11c) */
/* WARNING: Removing unreachable block (ram,0x01529cd0) */
/* WARNING: Removing unreachable block (ram,0x01529cd8) */
/* WARNING: Removing unreachable block (ram,0x01529cf4) */
/* WARNING: Removing unreachable block (ram,0x0152ad60) */
/* WARNING: Removing unreachable block (ram,0x0152af90) */
/* WARNING: Removing unreachable block (ram,0x0152ad64) */
/* WARNING: Removing unreachable block (ram,0x0152ad70) */
/* WARNING: Removing unreachable block (ram,0x0152ad74) */
/* WARNING: Removing unreachable block (ram,0x0152ad7c) */
/* WARNING: Removing unreachable block (ram,0x0152ad84) */
/* WARNING: Removing unreachable block (ram,0x0152af50) */
/* WARNING: Removing unreachable block (ram,0x0152ad94) */
/* WARNING: Removing unreachable block (ram,0x0152adbc) */
/* WARNING: Removing unreachable block (ram,0x0152ada8) */
/* WARNING: Removing unreachable block (ram,0x0152adb8) */
/* WARNING: Removing unreachable block (ram,0x0152ad1c) */
/* WARNING: Removing unreachable block (ram,0x0152adf0) */
/* WARNING: Removing unreachable block (ram,0x0152ae20) */
/* WARNING: Removing unreachable block (ram,0x0152ae30) */
/* WARNING: Removing unreachable block (ram,0x0152ae34) */
/* WARNING: Removing unreachable block (ram,0x0152ae50) */
/* WARNING: Removing unreachable block (ram,0x0152ae58) */
/* WARNING: Removing unreachable block (ram,0x0152ae5c) */
/* WARNING: Removing unreachable block (ram,0x0152aeb0) */
/* WARNING: Removing unreachable block (ram,0x0152aeec) */
/* WARNING: Removing unreachable block (ram,0x0152af24) */
/* WARNING: Removing unreachable block (ram,0x0152aec0) */
/* WARNING: Removing unreachable block (ram,0x0152af60) */
/* WARNING: Removing unreachable block (ram,0x0152aec8) */
/* WARNING: Removing unreachable block (ram,0x0152ad34) */
/* WARNING: Removing unreachable block (ram,0x0152ad44) */
/* WARNING: Removing unreachable block (ram,0x0152af88) */
/* WARNING: Removing unreachable block (ram,0x0152af9c) */
/* WARNING: Removing unreachable block (ram,0x0152ad4c) */

ulong Atlas_UI_VotingManager__VotingStarted(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  long lVar9;
  long unaff_x19;
  uint uVar10;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar12;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar13;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  *(undefined1 *)(param_1 + 0xdc) = 0;
  /*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(param_1 + 0x98,0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar5 = 1;
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(ulong *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    uVar11 = 0x3eb4000;
    if ((bRam0000000003eb4e6f & 1) == 0) {
      func_0x00f78a20(0x3d2a228);
      func_0x00f78a20(0x3d2a248);
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d1b520);
      func_0x00f78a20(0x3d1b510);
      func_0x00f78a20(0x3d2a4b8);
      func_0x00f78a20(0x3d2a4a8);
      func_0x00f78a20(0x3d1b670);
      func_0x00f78a20(0x3d1b668);
      func_0x00f78a20(0x3d600f8);
      func_0x00f78a20(0x3d60100);
      func_0x00f78a20(0x3d60108);
      func_0x00f78a20(0x3d60110);
      func_0x00f78a20(0x3d60118);
      bRam0000000003eb4e6f = 1;
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar9 == 0)) {
      return 0;
    }
    if ((int)uVar5 == 0) {
      if (*(char *)(param_1 + 0x40) == '\0') {
        return 1;
      }
      unaff_x22 = *(long *)(lVar9 + 0x10);
      if (unaff_x22 != 0) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
        unaff_x23 = 0x3d1b518;
        uVar11 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
        /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar11,param_1,uRam0000000003d60110,uRam0000000003d2a238);
        param_3 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar11);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
          *(long **)(unaff_x22 + 0x40) = plVar3;
          if ((*(long *)(param_1 + 0x20) == 0) ||
             ((lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar9 == 0 ||
              (unaff_x22 = *(long *)(lVar9 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
          uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
          unaff_x23 = 0x3d1b520;
          uVar11 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar11,param_1,uRam0000000003d60118,uRam0000000003d2a248);
          param_3 = (undefined8 *)0x0;
          plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar11);
          if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) {
            *(long **)(unaff_x22 + 0x48) = plVar3;
            if (((*(long *)(param_1 + 0x20) == 0) ||
                (lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar9 == 0)) ||
               (unaff_x22 = *(long *)(lVar9 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
            uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
            unaff_x23 = 0x3d1b670;
            uVar11 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670);
            /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar11,param_1,uRam0000000003d600f8,uRam0000000003d2a4b8);
            param_3 = (undefined8 *)0x0;
            plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar11);
            if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670)) {
              *(long **)(unaff_x22 + 0x50) = plVar3;
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 ((lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar9 == 0 ||
                  (unaff_x22 = *(long *)(lVar9 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
              uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
              unaff_x23 = 0x3d1b510;
              uVar11 = func_0x00f78aec(/*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510);
              /*System.Action<NetworkVoteResult>$$.ctor*/ func_0x01e4786c(uVar11,param_1,uRam0000000003d60108,uRam0000000003d2a228);
              param_3 = (undefined8 *)0x0;
              plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar11);
              if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510)) {
                *(long **)(unaff_x22 + 0x58) = plVar3;
                if (((*(long *)(param_1 + 0x20) == 0) ||
                    (lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar9 == 0)) ||
                   (unaff_x22 = *(long *)(lVar9 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
                uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
                unaff_x23 = 0x3d1b668;
                uVar11 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
                /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar11,param_1,uRam0000000003d60100,uRam0000000003d2a4a8);
                param_3 = (undefined8 *)0x0;
                plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar11);
                if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
                  uVar8 = 0;
                  *(long **)(unaff_x22 + 0xa0) = plVar3;
                  goto code_r0x01529bdc;
                }
              }
            }
          }
        }
        goto code_r0x01529bfc;
      }
code_r0x01529bf8:
      func_0x00f78af4();
    }
    else {
      if (*(char *)(param_1 + 0x40) != '\0') {
        return 1;
      }
      unaff_x22 = *(long *)(lVar9 + 0x10);
      if (unaff_x22 == 0) goto code_r0x01529bf8;
      uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
      unaff_x23 = 0x3d1b518;
      uVar11 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar11,param_1,uRam0000000003d60110,uRam0000000003d2a238);
      param_3 = (undefined8 *)0x0;
      plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar11);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(unaff_x22 + 0x40) = plVar3;
        if ((*(long *)(param_1 + 0x20) == 0) ||
           ((lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar9 == 0 ||
            (unaff_x22 = *(long *)(lVar9 + 0x10), unaff_x23 = 0x3d1b518, unaff_x22 == 0))))
        goto code_r0x01529bf8;
        uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
        unaff_x23 = 0x3d1b520;
        uVar12 = 0x3d1b520;
        uVar11 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar11,param_1,uRam0000000003d60118,uRam0000000003d2a248);
        param_3 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar11);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) {
          *(long **)(unaff_x22 + 0x48) = plVar3;
          unaff_x23 = uVar12;
          if (((*(long *)(param_1 + 0x20) == 0) ||
              (lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar9 == 0)) ||
             (unaff_x22 = *(long *)(lVar9 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
          uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
          unaff_x23 = 0x3d1b670;
          uVar11 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670);
          /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar11,param_1,uRam0000000003d600f8,uRam0000000003d2a4b8);
          param_3 = (undefined8 *)0x0;
          plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar11);
          if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670)) {
            *(long **)(unaff_x22 + 0x50) = plVar3;
            if ((*(long *)(param_1 + 0x20) == 0) ||
               ((lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar9 == 0 ||
                (unaff_x22 = *(long *)(lVar9 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
            uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
            unaff_x23 = 0x3d1b510;
            uVar11 = func_0x00f78aec(/*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510);
            /*System.Action<NetworkVoteResult>$$.ctor*/ func_0x01e4786c(uVar11,param_1,uRam0000000003d60108,uRam0000000003d2a228);
            param_3 = (undefined8 *)0x0;
            plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar11);
            if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510)) {
              *(long **)(unaff_x22 + 0x58) = plVar3;
              if (((*(long *)(param_1 + 0x20) == 0) ||
                  (lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar9 == 0)) ||
                 (unaff_x22 = *(long *)(lVar9 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
              uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
              unaff_x23 = 0x3d1b668;
              uVar11 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
              /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar11,param_1,uRam0000000003d60100,uRam0000000003d2a4a8);
              param_3 = (undefined8 *)0x0;
              plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar11);
              if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
                *(long **)(unaff_x22 + 0xa0) = plVar3;
                uVar8 = 1;
code_r0x01529bdc:
                *(undefined1 *)(param_1 + 0x40) = uVar8;
                return 1;
              }
            }
          }
        }
      }
    }
code_r0x01529bfc:
    auVar15 = func_0x00f78e5c();
    unaff_x21 = auVar15._8_8_;
    lVar9 = auVar15._0_8_;
    *(undefined8 *)(puVar1 + -0x90) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x88) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x80) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x78) = unaff_x23;
    *(long *)(puVar1 + -0x70) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x68) = uVar11;
    *(undefined8 *)(puVar1 + -0x60) = uVar5;
    *(long *)(puVar1 + -0x58) = param_1;
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x48) = &Atlas_UI_VotingManager__SetVoteData;
    puVar13 = puVar1 + -0x50;
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4e70 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d66410);
      func_0x00f78a20(0x3d66418);
      func_0x00f78a20(0x3d66310);
      func_0x00f78a20(0x3d663e0);
      func_0x00f78a20(0x3d76240);
      func_0x00f78a20(0x3d66308);
      func_0x00f78a20(0x3d66420);
      func_0x00f78a20(0x3d663e8);
      bRam0000000003eb4e70 = 1;
    }
    *(undefined8 *)(puVar1 + -0xa0) = 0;
    *(undefined8 *)(puVar1 + -0x98) = 0;
    *(undefined8 *)(puVar1 + -0xb0) = 0;
    *(undefined8 *)(puVar1 + -0xa8) = 0;
    lVar4 = *(long *)(lVar9 + 0x28);
    if (lVar4 != 0) {
      uVar6 = (ulong)*(short *)(unaff_x21 + 2);
      puVar14 = &UNK_01529cd0;
      puVar7 = (undefined8 *)(puVar1 + -0x98);
code_r0x014a7750:
      puVar2 = puVar1 + -0xe0;
      *(long *)(puVar1 + -0xe0) = unaff_x22;
      *(long *)(puVar1 + -0xd8) = unaff_x21;
      *(undefined8 *)(puVar1 + -0xd0) = 0x3eb4000;
      *(long *)(puVar1 + -200) = lVar9;
      *(undefined1 **)(puVar1 + -0xc0) = puVar13;
      *(undefined **)(puVar1 + -0xb8) = puVar14;
      puVar13 = puVar1 + -0xc0;
      unaff_x22 = 0x3eb4000;
      param_3 = puVar7;
      if ((bRam0000000003eb4a5c & 1) == 0) {
        func_0x00f78a20(0x3d3c000);
        func_0x00f78a20(0x3d3c008);
        bRam0000000003eb4a5c = 1;
      }
      uVar10 = (uint)uVar6;
      if (-1 < (int)uVar10) {
        lVar9 = *(long *)(lVar4 + 0x10);
        if (lVar9 == 0) {
          puVar14 = &Atlas_Networking_NetworkIdentifiers__TryGetKeyFromIdentifier;
          auVar16 = func_0x00f78af4();
          auVar15._8_8_ = 0;
          auVar15._0_8_ = puVar7;
          unaff_x20 = uVar6;
          goto code_r0x014a77f0;
        }
        if ((int)uVar10 < (int)*(uint *)(lVar9 + 0x18)) {
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + (uVar6 & 0xffff) * 8 + 0x20);
          uVar6 = 1;
          goto code_r0x014a77d8;
        }
      }
      uVar5 = 0;
      uVar6 = 0;
code_r0x014a77d8:
      *puVar7 = uVar5;
      return uVar6;
    }
    auVar16 = func_0x00f78af4();
    uVar6 = auVar16._8_8_;
    *(undefined1 **)(puVar1 + -0xc0) = puVar13;
    *(undefined **)(puVar1 + -0xb8) = &Atlas_UI_VotingManager__GetIdentifierFromKey;
    lVar4 = *(long *)(auVar16._0_8_ + 0x28);
    if (lVar4 != 0) {
      puVar13 = *(undefined1 **)(puVar1 + -0xc0);
      puVar14 = *(undefined **)(puVar1 + -0xb8);
      puVar7 = param_3;
      goto code_r0x014a7750;
    }
    auVar16 = func_0x00f78af4();
    *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0xc0;
    *(undefined **)(puVar1 + -200) = &Atlas_UI_VotingManager__GetKeyFromIdentifier;
    lVar4 = *(long *)(auVar16._0_8_ + 0x28);
    auVar16._8_8_ = auVar16._8_8_;
    auVar16._0_8_ = lVar4;
    if (lVar4 != 0) {
      puVar2 = puVar1 + -0xc0;
      puVar13 = *(undefined1 **)(puVar1 + -0xd0);
      puVar14 = *(undefined **)(puVar1 + -200);
code_r0x014a77f0:
      *(long *)(puVar2 + -0x30) = unaff_x22;
      *(long *)(puVar2 + -0x28) = auVar15._8_8_;
      *(ulong *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = auVar15._0_8_;
      *(undefined1 **)(puVar2 + -0x10) = puVar13;
      *(undefined **)(puVar2 + -8) = puVar14;
      if ((bRam0000000003eb4a5d & 1) == 0) {
        func_0x00f78a20(0x3d2fc10);
        bRam0000000003eb4a5d = 1;
      }
      lVar9 = *(long *)(auVar16._0_8_ + 0x18);
      if (lVar9 != 0) {
        uVar6 = /*System.Collections.Generic.Dictionary<string, short>$$TryGetValue*/ func_0x01ecd290(lVar9,auVar16._8_8_,param_3,uRam0000000003d2fc10);
        if ((uVar6 & 1) == 0) {
          *(undefined2 *)param_3 = 0;
        }
        return uVar6;
      }
      uVar6 = func_0x00f78af4();
      return uVar6;
    }
    param_1 = func_0x00f78af4();
    *(long *)(puVar1 + -0x100) = unaff_x22;
    *(long *)(puVar1 + -0xf8) = unaff_x21;
    *(undefined8 *)(puVar1 + -0xf0) = 0x3eb4000;
    *(long *)(puVar1 + -0xe8) = lVar9;
    *(undefined1 **)(puVar1 + -0xe0) = puVar1 + -0xd0;
    *(undefined **)(puVar1 + -0xd8) = &Atlas_UI_VotingManager__VotingFinished;
    unaff_x29 = puVar1 + -0xe0;
    Atlas_UI_VotingManager__set_VotingManagerStage(param_1,0);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    uVar5 = 0;
    unaff_x30 = &UNK_0152a1c0;
    puVar1 = puVar1 + -0x100;
    unaff_x19 = param_1;
  } while( true );
}



// ============================================================
// RVA: 0x1529634 | Atlas.UI.VotingManager.TrySetVoteListeners
// ============================================================

/* WARNING: Possible PIC construction at 0x01529ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01529d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152ac44) */
/* WARNING: Removing unreachable block (ram,0x0152af80) */
/* WARNING: Removing unreachable block (ram,0x0152ac48) */
/* WARNING: Removing unreachable block (ram,0x0152ac54) */
/* WARNING: Removing unreachable block (ram,0x0152ac58) */
/* WARNING: Removing unreachable block (ram,0x0152ac60) */
/* WARNING: Removing unreachable block (ram,0x0152ac68) */
/* WARNING: Removing unreachable block (ram,0x0152af48) */
/* WARNING: Removing unreachable block (ram,0x0152ac78) */
/* WARNING: Removing unreachable block (ram,0x0152aca0) */
/* WARNING: Removing unreachable block (ram,0x0152ac8c) */
/* WARNING: Removing unreachable block (ram,0x0152ac9c) */
/* WARNING: Removing unreachable block (ram,0x0152a5e8) */
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
/* WARNING: Removing unreachable block (ram,0x0152a8d0) */
/* WARNING: Removing unreachable block (ram,0x0152a860) */
/* WARNING: Removing unreachable block (ram,0x0152a86c) */
/* WARNING: Removing unreachable block (ram,0x0152a884) */
/* WARNING: Removing unreachable block (ram,0x0152a88c) */
/* WARNING: Removing unreachable block (ram,0x0152a5bc) */
/* WARNING: Removing unreachable block (ram,0x0152a5c4) */
/* WARNING: Removing unreachable block (ram,0x0152a5dc) */
/* WARNING: Removing unreachable block (ram,0x0152a570) */
/* WARNING: Removing unreachable block (ram,0x0152a578) */
/* WARNING: Removing unreachable block (ram,0x0152a580) */
/* WARNING: Removing unreachable block (ram,0x0152a598) */
/* WARNING: Removing unreachable block (ram,0x0152a5b0) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Removing unreachable block (ram,0x0152a334) */
/* WARNING: Removing unreachable block (ram,0x0152a290) */
/* WARNING: Removing unreachable block (ram,0x0152a298) */
/* WARNING: Removing unreachable block (ram,0x0152a2c0) */
/* WARNING: Removing unreachable block (ram,0x0152a2c8) */
/* WARNING: Removing unreachable block (ram,0x0152a2cc) */
/* WARNING: Removing unreachable block (ram,0x01529d04) */
/* WARNING: Removing unreachable block (ram,0x01529d0c) */
/* WARNING: Removing unreachable block (ram,0x01529d38) */
/* WARNING: Removing unreachable block (ram,0x01529d4c) */
/* WARNING: Removing unreachable block (ram,0x01529d5c) */
/* WARNING: Removing unreachable block (ram,0x01529d64) */
/* WARNING: Removing unreachable block (ram,0x01529d80) */
/* WARNING: Removing unreachable block (ram,0x01529d94) */
/* WARNING: Removing unreachable block (ram,0x01529da0) */
/* WARNING: Removing unreachable block (ram,0x01529db4) */
/* WARNING: Removing unreachable block (ram,0x01529dc4) */
/* WARNING: Removing unreachable block (ram,0x01529dc8) */
/* WARNING: Removing unreachable block (ram,0x01529dd0) */
/* WARNING: Removing unreachable block (ram,0x01529dec) */
/* WARNING: Removing unreachable block (ram,0x01529e00) */
/* WARNING: Removing unreachable block (ram,0x01529e0c) */
/* WARNING: Removing unreachable block (ram,0x01529e20) */
/* WARNING: Removing unreachable block (ram,0x01529e30) */
/* WARNING: Removing unreachable block (ram,0x01529e34) */
/* WARNING: Removing unreachable block (ram,0x01529e3c) */
/* WARNING: Removing unreachable block (ram,0x01529e58) */
/* WARNING: Removing unreachable block (ram,0x01529e6c) */
/* WARNING: Removing unreachable block (ram,0x01529e78) */
/* WARNING: Removing unreachable block (ram,0x01529e8c) */
/* WARNING: Removing unreachable block (ram,0x01529e9c) */
/* WARNING: Removing unreachable block (ram,0x01529ea0) */
/* WARNING: Removing unreachable block (ram,0x01529ea8) */
/* WARNING: Removing unreachable block (ram,0x01529ec4) */
/* WARNING: Removing unreachable block (ram,0x01529ed8) */
/* WARNING: Removing unreachable block (ram,0x01529ee4) */
/* WARNING: Removing unreachable block (ram,0x01529ef8) */
/* WARNING: Removing unreachable block (ram,0x01529f08) */
/* WARNING: Removing unreachable block (ram,0x01529f0c) */
/* WARNING: Removing unreachable block (ram,0x01529f14) */
/* WARNING: Removing unreachable block (ram,0x01529f24) */
/* WARNING: Removing unreachable block (ram,0x01529f38) */
/* WARNING: Removing unreachable block (ram,0x01529f3c) */
/* WARNING: Removing unreachable block (ram,0x01529f44) */
/* WARNING: Removing unreachable block (ram,0x01529f58) */
/* WARNING: Removing unreachable block (ram,0x01529f68) */
/* WARNING: Removing unreachable block (ram,0x01529f6c) */
/* WARNING: Removing unreachable block (ram,0x01529f74) */
/* WARNING: Removing unreachable block (ram,0x01529f84) */
/* WARNING: Removing unreachable block (ram,0x01529f98) */
/* WARNING: Removing unreachable block (ram,0x01529f9c) */
/* WARNING: Removing unreachable block (ram,0x01529fa4) */
/* WARNING: Removing unreachable block (ram,0x01529fb8) */
/* WARNING: Removing unreachable block (ram,0x01529fc8) */
/* WARNING: Removing unreachable block (ram,0x01529fcc) */
/* WARNING: Removing unreachable block (ram,0x01529fd4) */
/* WARNING: Removing unreachable block (ram,0x01529fe4) */
/* WARNING: Removing unreachable block (ram,0x01529ff8) */
/* WARNING: Removing unreachable block (ram,0x01529ffc) */
/* WARNING: Removing unreachable block (ram,0x0152a004) */
/* WARNING: Removing unreachable block (ram,0x0152a018) */
/* WARNING: Removing unreachable block (ram,0x0152a028) */
/* WARNING: Removing unreachable block (ram,0x0152a02c) */
/* WARNING: Removing unreachable block (ram,0x0152a034) */
/* WARNING: Removing unreachable block (ram,0x0152a044) */
/* WARNING: Removing unreachable block (ram,0x0152a144) */
/* WARNING: Removing unreachable block (ram,0x0152a058) */
/* WARNING: Removing unreachable block (ram,0x0152a05c) */
/* WARNING: Removing unreachable block (ram,0x0152a064) */
/* WARNING: Removing unreachable block (ram,0x0152a07c) */
/* WARNING: Removing unreachable block (ram,0x0152a094) */
/* WARNING: Removing unreachable block (ram,0x0152a09c) */
/* WARNING: Removing unreachable block (ram,0x0152a0a0) */
/* WARNING: Removing unreachable block (ram,0x0152a0b4) */
/* WARNING: Removing unreachable block (ram,0x0152a0c0) */
/* WARNING: Removing unreachable block (ram,0x0152a0d4) */
/* WARNING: Removing unreachable block (ram,0x0152a0e0) */
/* WARNING: Removing unreachable block (ram,0x0152a0f8) */
/* WARNING: Removing unreachable block (ram,0x0152a104) */
/* WARNING: Removing unreachable block (ram,0x0152a13c) */
/* WARNING: Removing unreachable block (ram,0x0152a148) */
/* WARNING: Removing unreachable block (ram,0x0152a11c) */
/* WARNING: Removing unreachable block (ram,0x01529cd0) */
/* WARNING: Removing unreachable block (ram,0x01529cd8) */
/* WARNING: Removing unreachable block (ram,0x01529cf4) */
/* WARNING: Removing unreachable block (ram,0x0152ad60) */
/* WARNING: Removing unreachable block (ram,0x0152af90) */
/* WARNING: Removing unreachable block (ram,0x0152ad64) */
/* WARNING: Removing unreachable block (ram,0x0152ad70) */
/* WARNING: Removing unreachable block (ram,0x0152ad74) */
/* WARNING: Removing unreachable block (ram,0x0152ad7c) */
/* WARNING: Removing unreachable block (ram,0x0152ad84) */
/* WARNING: Removing unreachable block (ram,0x0152af50) */
/* WARNING: Removing unreachable block (ram,0x0152ad94) */
/* WARNING: Removing unreachable block (ram,0x0152adbc) */
/* WARNING: Removing unreachable block (ram,0x0152ada8) */
/* WARNING: Removing unreachable block (ram,0x0152adb8) */

undefined1 *
Atlas_UI_VotingManager__TrySetVoteListeners(long param_1,int param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 auVar2 [16];
  short sVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  undefined8 *****pppppuVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 uVar15;
  long lVar16;
  segment_command *psVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  segment_command *psVar22;
  segment_command *psVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *****pppppuVar26;
  undefined8 *****pppppuVar27;
  undefined *puVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  unkbyte10 Var33;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  int aiStack_360 [4];
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  int aiStack_2d4 [5];
  undefined8 ****ppppuStack_270;
  undefined *puStack_268;
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [4];
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 ****ppppuStack_210;
  undefined *puStack_208;
  short sStack_1f2;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ****ppppuStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [46];
  undefined2 uStack_162;
  undefined1 auStack_160 [16];
  undefined8 ****ppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  segment_command *psStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  segment_command *psStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4e6f & 1) == 0) {
    func_0x00f78a20(0x3d2a228);
    func_0x00f78a20(0x3d2a248);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b520);
    func_0x00f78a20(0x3d1b510);
    func_0x00f78a20(0x3d2a4b8);
    func_0x00f78a20(0x3d2a4a8);
    func_0x00f78a20(0x3d1b670);
    func_0x00f78a20(0x3d1b668);
    func_0x00f78a20(0x3d600f8);
    func_0x00f78a20(0x3d60100);
    func_0x00f78a20(0x3d60108);
    func_0x00f78a20(0x3d60110);
    func_0x00f78a20(0x3d60118);
    bRam0000000003eb4e6f = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar16 == 0)) {
    return (undefined1 *)0x0;
  }
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x40) == '\0') goto LAB_01529be0;
    puVar25 = *(undefined8 **)(lVar16 + 0x10);
    if (puVar25 != (undefined8 *)0x0) {
      uVar20 = puVar25[8];
      uVar9 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar9,param_1,uRam0000000003d60110,uRam0000000003d2a238);
      param_3 = (undefined8 *)0x0;
      plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar20,uVar9);
      if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        puVar25[8] = plVar10;
        if ((*(long *)(param_1 + 0x20) == 0) ||
           ((lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar16 == 0 ||
            (puVar25 = *(undefined8 **)(lVar16 + 0x10), puVar25 == (undefined8 *)0x0))))
        goto LAB_01529bf8;
        uVar20 = puVar25[9];
        uVar9 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar9,param_1,uRam0000000003d60118,uRam0000000003d2a248);
        param_3 = (undefined8 *)0x0;
        plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar20,uVar9);
        if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) {
          puVar25[9] = plVar10;
          if (((*(long *)(param_1 + 0x20) == 0) ||
              (lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar16 == 0)) ||
             (puVar25 = *(undefined8 **)(lVar16 + 0x10), puVar25 == (undefined8 *)0x0))
          goto LAB_01529bf8;
          uVar20 = puVar25[10];
          uVar9 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670);
          /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar9,param_1,uRam0000000003d600f8,uRam0000000003d2a4b8);
          param_3 = (undefined8 *)0x0;
          plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar20,uVar9);
          if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670)) {
            puVar25[10] = plVar10;
            if ((*(long *)(param_1 + 0x20) == 0) ||
               ((lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar16 == 0 ||
                (puVar25 = *(undefined8 **)(lVar16 + 0x10), puVar25 == (undefined8 *)0x0))))
            goto LAB_01529bf8;
            uVar20 = puVar25[0xb];
            uVar9 = func_0x00f78aec(/*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510);
            /*System.Action<NetworkVoteResult>$$.ctor*/ func_0x01e4786c(uVar9,param_1,uRam0000000003d60108,uRam0000000003d2a228);
            param_3 = (undefined8 *)0x0;
            plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar20,uVar9);
            if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510)) {
              puVar25[0xb] = plVar10;
              if (((*(long *)(param_1 + 0x20) == 0) ||
                  (lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar16 == 0)) ||
                 (puVar25 = *(undefined8 **)(lVar16 + 0x10), puVar25 == (undefined8 *)0x0))
              goto LAB_01529bf8;
              uVar20 = puVar25[0x14];
              uVar9 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
              /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar9,param_1,uRam0000000003d60100,uRam0000000003d2a4a8);
              param_3 = (undefined8 *)0x0;
              plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar20,uVar9);
              if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
                uVar15 = 0;
                puVar25[0x14] = plVar10;
                goto LAB_01529bdc;
              }
            }
          }
        }
      }
      goto LAB_01529bfc;
    }
LAB_01529bf8:
    func_0x00f78af4();
  }
  else {
    if (*(char *)(param_1 + 0x40) != '\0') goto LAB_01529be0;
    puVar25 = *(undefined8 **)(lVar16 + 0x10);
    if (puVar25 == (undefined8 *)0x0) goto LAB_01529bf8;
    uVar20 = puVar25[8];
    uVar9 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
    /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar9,param_1,uRam0000000003d60110,uRam0000000003d2a238);
    param_3 = (undefined8 *)0x0;
    plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar20,uVar9);
    if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
      puVar25[8] = plVar10;
      if ((*(long *)(param_1 + 0x20) == 0) ||
         ((lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar16 == 0 ||
          (puVar25 = *(undefined8 **)(lVar16 + 0x10), puVar25 == (undefined8 *)0x0))))
      goto LAB_01529bf8;
      uVar20 = puVar25[9];
      uVar9 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar9,param_1,uRam0000000003d60118,uRam0000000003d2a248);
      param_3 = (undefined8 *)0x0;
      plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar20,uVar9);
      if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) {
        puVar25[9] = plVar10;
        if (((*(long *)(param_1 + 0x20) == 0) ||
            (lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar16 == 0)) ||
           (puVar25 = *(undefined8 **)(lVar16 + 0x10), puVar25 == (undefined8 *)0x0))
        goto LAB_01529bf8;
        uVar20 = puVar25[10];
        uVar9 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670);
        /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar9,param_1,uRam0000000003d600f8,uRam0000000003d2a4b8);
        param_3 = (undefined8 *)0x0;
        plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar20,uVar9);
        if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670)) {
          puVar25[10] = plVar10;
          if ((*(long *)(param_1 + 0x20) == 0) ||
             ((lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar16 == 0 ||
              (puVar25 = *(undefined8 **)(lVar16 + 0x10), puVar25 == (undefined8 *)0x0))))
          goto LAB_01529bf8;
          uVar20 = puVar25[0xb];
          uVar9 = func_0x00f78aec(/*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510);
          /*System.Action<NetworkVoteResult>$$.ctor*/ func_0x01e4786c(uVar9,param_1,uRam0000000003d60108,uRam0000000003d2a228);
          param_3 = (undefined8 *)0x0;
          plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar20,uVar9);
          if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510)) {
            puVar25[0xb] = plVar10;
            if (((*(long *)(param_1 + 0x20) == 0) ||
                (lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar16 == 0)) ||
               (puVar25 = *(undefined8 **)(lVar16 + 0x10), puVar25 == (undefined8 *)0x0))
            goto LAB_01529bf8;
            uVar20 = puVar25[0x14];
            uVar9 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
            /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar9,param_1,uRam0000000003d60100,uRam0000000003d2a4a8);
            param_3 = (undefined8 *)0x0;
            plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar20,uVar9);
            if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
              puVar25[0x14] = plVar10;
              uVar15 = 1;
LAB_01529bdc:
              *(undefined1 *)(param_1 + 0x40) = uVar15;
LAB_01529be0:
              return (undefined1 *)((long)&MACH_HEADER.magic + 1);
            }
          }
        }
      }
    }
  }
LAB_01529bfc:
  auVar29 = func_0x00f78e5c();
  psVar23 = auVar29._8_8_;
  lVar16 = auVar29._0_8_;
  puStack_48 = &Atlas_UI_VotingManager__SetVoteData;
  pppppuVar26 = (undefined8 *****)&pppuStack_50;
  puVar21 = (undefined8 *)0x3eb4000;
  auVar32._8_8_ = 0x3eb4000;
  auVar32._0_8_ = lVar16;
  pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e70 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66410);
    func_0x00f78a20(0x3d66418);
    func_0x00f78a20(0x3d66310);
    func_0x00f78a20(0x3d663e0);
    func_0x00f78a20(0x3d76240);
    func_0x00f78a20(0x3d66308);
    func_0x00f78a20(0x3d66420);
    func_0x00f78a20(0x3d663e8);
    bRam0000000003eb4e70 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lVar11 = *(long *)(lVar16 + 0x28);
  if (lVar11 == 0) {
    auVar30 = func_0x00f78af4();
    uVar13 = auVar30._8_8_;
    pppppuVar27 = &ppppuStack_c0;
    puStack_b8 = &Atlas_UI_VotingManager__GetIdentifierFromKey;
    lVar11 = *(long *)(auVar30._0_8_ + 0x28);
    ppppuStack_c0 = pppppuVar26;
    if (lVar11 == 0) {
      auVar29 = func_0x00f78af4();
      puStack_c8 = &Atlas_UI_VotingManager__GetKeyFromIdentifier;
      lVar11 = *(long *)(auVar29._0_8_ + 0x28);
      auVar30._8_8_ = auVar29._8_8_;
      auVar30._0_8_ = lVar11;
      if (lVar11 == 0) {
        puStack_d0 = (undefined1 *)&ppppuStack_c0;
        lVar11 = func_0x00f78af4();
        uStack_f0 = 0x3eb4000;
        puStack_d8 = &Atlas_UI_VotingManager__VotingFinished;
        puStack_100 = puVar25;
        psStack_f8 = psVar23;
        lStack_e8 = lVar16;
        ppuStack_e0 = (undefined8 **)&puStack_d0;
        Atlas_UI_VotingManager__set_VotingManagerStage(lVar11,0);
        *(undefined4 *)(lVar11 + 0xa8) = 0;
        Atlas_UI_VotingManager__TrySetVoteListeners(lVar11,0);
        puVar8 = (undefined1 *)/*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(lVar11 + 0x98,0);
        *(undefined8 *)(lVar11 + 0x58) = 0;
        *(undefined8 *)(lVar11 + 0x60) = 0;
        *(undefined8 *)(lVar11 + 0x68) = 0;
        lVar16 = *(long *)(lVar11 + 0x18);
        if (lVar16 == 0) {
code_r0x0152a218:
          puVar8 = (undefined1 *)func_0x00f78af4();
          return puVar8;
        }
        uVar13 = 0;
        puVar14 = param_3;
        psVar17 = &segment_command_00000020;
        psVar22 = psVar23;
        while( true ) {
          if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)uVar13) {
            return puVar8;
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar13) break;
          psVar22 = (segment_command *)(psVar17->segname + 8);
          uVar13 = uVar13 + 1;
          puVar8 = (undefined1 *)/*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(psVar17->segname + lVar16 + -8,0);
          lVar16 = *(long *)(lVar11 + 0x18);
          psVar17 = psVar22;
          if (lVar16 == 0) goto code_r0x0152a218;
        }
        uVar9 = func_0x00f78b24();
        auVar31 = func_0x00f78ac0(uVar9,0);
        puVar21 = auVar31._0_8_;
        param_3 = &uStack_140;
        puStack_108 = &Atlas_UI_VotingManager__GetWinningIds;
        pppppuVar26 = (undefined8 *****)&pppuStack_110;
        psVar23 = (segment_command *)0x3eb4000;
        auVar29._8_8_ = 0x3eb4000;
        auVar29._0_8_ = auVar31._8_8_;
        puStack_130 = puVar25;
        psStack_128 = psVar22;
        uStack_120 = uVar13;
        lStack_118 = lVar11;
        pppuStack_110 = &ppuStack_e0;
        if ((bRam0000000003eb4e71 & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          bRam0000000003eb4e71 = 1;
        }
        uStack_140 = 0;
        uStack_138 = 0;
        lVar11 = puVar21[5];
        if (lVar11 != 0) {
          uVar13 = (ulong)(uint)(int)auVar31._8_2_;
          puVar28 = &UNK_0152a290;
          ppuVar5 = (undefined8 **)&uStack_140;
          goto code_r0x014a7750;
        }
        auVar29 = func_0x00f78af4();
        auVar32._8_8_ = puVar14;
        auVar32._0_8_ = auVar29._0_8_;
        pppppuVar6 = (undefined8 *****)auStack_190;
        puStack_148 = &Atlas_UI_VotingManager__CastVote;
        pppppuVar27 = &ppppuStack_150;
        uStack_162 = 0;
        lVar16 = *(long *)(auVar29._0_8_ + 0x28);
        auVar30._8_8_ = auVar29._8_8_;
        auVar30._0_8_ = lVar16;
        ppppuStack_150 = pppppuVar26;
        auStack_160 = auVar31;
        if (lVar16 != 0) {
          param_3 = (undefined8 *)&uStack_162;
          puVar28 = &UNK_0152a334;
          goto code_r0x014a77f0;
        }
        Var33 = func_0x00f78af4();
        sStack_1f2 = (short)((unkuint10)Var33 >> 0x40);
        puStack_198 = &Atlas_UI_VotingManager__CastVote;
        ppppuStack_1a0 = pppppuVar27;
        if ((bRam0000000003eb4e74 & 1) == 0) {
          func_0x00f78a20(0x3d65ed8);
          func_0x00f78a20(0x3d76200);
          bRam0000000003eb4e74 = 1;
        }
        uVar9 = /*System.UInt32$$ToString*/ func_0x02a0b3d0((undefined2 *)((long)puVar14 + 0xc),0);
        uVar20 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&sStack_1f2,0);
        /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager CastVote ')*/ uRam0000000003d76200,uVar9,/*STR(' ')*/ uRam0000000003d65ed8,uVar20,0);
        lVar16 = *(long *)((long)Var33 + 0x20);
        if ((lVar16 != 0) && (plVar10 = *(long **)(lVar16 + 0x20), plVar10 != (long *)0x0)) {
          uStack_1e8 = puVar14[1];
          uStack_1f0 = *puVar14;
          uStack_1d8 = puVar14[3];
          uStack_1e0 = puVar14[2];
          puVar8 = (undefined1 *)
                   (**(code **)(*plVar10 + 0x1d8))
                             (plVar10,&uStack_1f0,(long)sStack_1f2,*(undefined8 *)(*plVar10 + 0x1e0)
                             );
          return puVar8;
        }
        auVar32 = func_0x00f78af4();
        puVar21 = auVar32._8_8_;
        lVar16 = auVar32._0_8_;
        pppppuVar6 = (undefined8 *****)auStack_260;
        puStack_208 = &Atlas_UI_VotingManager__DecideVoteOptions;
        pppppuVar27 = &ppppuStack_210;
        psVar23 = (segment_command *)0x3eb4000;
        ppppuStack_210 = &ppppuStack_1a0;
        if ((bRam0000000003eb4e73 & 1) == 0) {
          func_0x00f78a20(0x3d3b110);
          func_0x00f78a20(0x3d1f498);
          func_0x00f78a20(0x3d66320);
          func_0x00f78a20(0x3d663f8);
          func_0x00f78a20(0x3d66300);
          func_0x00f78a20(0x3d66318);
          func_0x00f78a20(0x3d663f0);
          func_0x00f78a20(0x3d6b9f8);
          bRam0000000003eb4e73 = 1;
        }
        uStack_250 = 0;
        puStack_248 = (undefined8 *)0x0;
        auStack_258 = (undefined1  [4])0x0;
        uStack_254 = 0;
        if (*(long *)(lVar16 + 0x20) != 0) {
          puVar8 = (undefined1 *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar16 + 0x20),0);
          if ((int)puVar8 == 0) {
            return puVar8;
          }
          if (*(long *)(lVar16 + 0xb0) == 0) goto code_r0x0152a8c4;
          /*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(lVar16 + 0xb0),*(undefined8 *)(lVar16 + 0xe0),0);
          if (puVar21 == (undefined8 *)0x0) goto code_r0x0152a8c4;
          auVar31._8_8_ = *(undefined8 *)(lVar16 + 0xe0);
          auVar31._0_8_ = lVar16;
          if (*(int *)(puVar21 + 2) == 2) {
            puVar28 = &UNK_0152a520;
            goto code_r0x0152a8dc;
          }
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(lVar16,*(undefined8 *)(lVar16 + 0xe0),&puStack_248,&uStack_250);
          if (*(long *)(lVar16 + 0xe0) != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar16 + 0xe0),uRam0000000003d3b110);
            if ((puStack_248 == (undefined8 *)0x0) || (*(long *)(lVar16 + 0x28) == 0))
            goto code_r0x0152a8c4;
            auVar30._8_8_ = puStack_248[3];
            auVar30._0_8_ = *(long *)(lVar16 + 0x28);
            param_3 = (undefined8 *)(auStack_258 + 2);
            puVar28 = &UNK_0152a570;
            puVar25 = puStack_248;
            goto code_r0x014a77f0;
          }
        }
code_r0x0152a8c4:
        func_0x00f78af4();
        uVar9 = func_0x00f78b24();
        puVar28 = &Atlas_UI_VotingManager__FilterMapsFromTournament;
        auVar31 = func_0x00f78ac0(uVar9,0);
code_r0x0152a8dc:
        puStack_390 = auVar31._8_8_;
        uVar24 = auVar31._0_8_;
        ppuVar5 = &puStack_390;
        pppppuVar26 = &ppppuStack_270;
        puVar25 = &uStack_300;
        uVar13 = 0x3eb4000;
        ppppuStack_270 = pppppuVar27;
        puStack_268 = puVar28;
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
        uStack_2e0 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_308 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        uStack_318 = 0;
        uStack_320 = 0;
        lStack_340 = 0;
        uStack_338 = 0;
        uStack_350 = 0;
        uStack_348 = 0;
        aiStack_360[3] = 0;
        if (*(long *)(uVar24 + 0xb8) == 0) goto code_r0x0152ae30;
        uVar13 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar24 + 0xb8),uRam0000000003d2e6f8);
        puVar21 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(puVar21,puStack_390,uRam0000000003d3b0f8);
        if (*(long *)(uVar24 + 0x20) == 0) goto code_r0x0152ae30;
        lVar16 = *(long *)(*(long *)(uVar24 + 0x20) + 0x20);
        if (lVar16 == 0) goto code_r0x0152ae30;
        lVar16 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar16,0);
        if (lVar16 == 0) goto code_r0x0152ae30;
        uVar13 = 0x3d6c000;
        aiStack_2d4[0] = *(int *)(lVar16 + 0x18);
        uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_2d4,0);
        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar9,0);
        if (*(long *)(uVar24 + 0x20) == 0) goto code_r0x0152ae30;
        lVar16 = *(long *)(*(long *)(uVar24 + 0x20) + 0x20);
        if (lVar16 == 0) goto code_r0x0152ae30;
        lVar16 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar16,0);
        if (lVar16 == 0) goto code_r0x0152ae30;
        uVar13 = 0x3d32bf8;
        auVar29._8_8_ = uVar24;
        auVar29._0_8_ = 0x3d32bf8;
        auVar2._8_8_ = uVar24;
        auVar2._0_8_ = 0x3d32bf8;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_388,lVar16,uRam0000000003d3b6b8);
        uStack_2f8 = uStack_380;
        uStack_300 = uStack_388;
        uStack_2e8 = uStack_370;
        uStack_2f0 = uStack_378;
        uStack_2e0 = uStack_368;
        uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_300,uRam0000000003d32bf8);
        if ((uVar12 & 1) == 0) {
          aiStack_360[0] = 0x136;
          /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_300,uRam0000000003d32bf0);
          aiStack_360[3] = 0;
          if (*(long *)(uVar24 + 0xb8) == 0) goto code_r0x0152ae30;
          /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_388,*(long *)(uVar24 + 0xb8),uRam0000000003d2e710);
          uStack_328 = uStack_380;
          uStack_330 = uStack_388;
          uStack_318 = uStack_370;
          uStack_320 = uStack_378;
          goto code_r0x0152ad1c;
        }
        sVar3 = uStack_2e8._4_2_;
        sVar1 = (short)uStack_2e8;
        if (uStack_2e8._4_2_ != uStack_2f0._4_2_) {
          sVar1 = uStack_2f0._4_2_;
        }
        if (*(long *)(uVar24 + 0xb8) == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        puVar25 = (undefined8 *)(ulong)(uint)(int)sVar1;
        uVar13 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar24 + 0xb8),puVar25,uRam0000000003d2e700);
        if ((uVar13 & 1) == 0) {
          if (*(long *)(uVar24 + 0xb8) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar24 + 0xb8),puVar25,0,uRam0000000003d2e6f0);
        }
        lVar16 = *(long *)(uVar24 + 0xb8);
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        aiStack_2d4[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar16,puVar25,uRam0000000003d2e748);
        /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar16,puVar25,aiStack_2d4[0] + 1,uRam0000000003d2e750);
        lVar11 = *(long *)(uVar24 + 0x28);
        if (lVar11 != 0) {
          uVar13 = (ulong)(uint)(int)sVar3;
          param_3 = &uStack_308;
          puVar28 = &UNK_0152ac44;
          ppuVar5 = &puStack_390;
          auVar29 = auVar2;
          goto code_r0x014a7750;
        }
        func_0x00f78af4();
        goto code_r0x0152af9c;
      }
      pppppuVar6 = &ppppuStack_c0;
      puVar28 = puStack_c8;
      puStack_d0 = (undefined1 *)&ppppuStack_c0;
      goto code_r0x014a77f0;
    }
    ppuVar5 = (undefined8 **)&uStack_b0;
    puVar28 = puStack_b8;
  }
  else {
    uVar13 = (ulong)*(short *)((long)&psVar23->cmd + 2);
    param_3 = &uStack_98;
    ppuVar5 = (undefined8 **)&uStack_b0;
    puVar28 = &UNK_01529cd0;
  }
  goto code_r0x014a7750;
  while (uStack_320._4_4_ < *(int *)(uVar24 + 0x10)) {
code_r0x0152ad1c:
    uVar13 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_330,uRam0000000003d33da0);
    if ((uVar13 & 1) == 0) {
      uVar24 = (ulong)(uint)aiStack_360[3];
      bVar7 = aiStack_360[3] != 0xffffffff;
      aiStack_360[3] = aiStack_360[3] + 1;
      uVar13 = (ulong)(uint)aiStack_360[3];
      aiStack_360[0] = 0x1d1;
      /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_330,uRam0000000003d33d98);
      if (bVar7) goto code_r0x0152ae34;
      uVar13 = 0;
      iVar18 = 0;
      while (puVar21 == (undefined8 *)0x0) {
code_r0x0152ae30:
        func_0x00f78af4();
code_r0x0152ae34:
        if (aiStack_360[(int)(uint)uVar24] == 0x1d1) {
          uVar13 = uVar24;
          aiStack_360[3] = (uint)uVar24;
        }
        iVar18 = (int)uVar13;
      }
      aiStack_2d4[0] = *(int *)(puVar21 + 3);
      uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_2d4,0);
      uVar9 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar9,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_350,puVar21,uRam0000000003d3b120);
      while( true ) {
        uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_350,uRam0000000003d32988);
        if ((uVar13 & 1) == 0) {
          aiStack_360[iVar18] = 0x23d;
          aiStack_360[3] = aiStack_360[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_350,uRam0000000003d32980);
          if (*(int *)(puVar21 + 3) < 2) {
            puVar21 = puStack_390;
          }
          return (undefined1 *)puVar21;
        }
        if (lStack_340 == 0) break;
        uVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar9,*(undefined8 *)(lStack_340 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
  }
  lVar11 = *(long *)(uVar24 + 0x28);
  if (lVar11 == 0) {
    func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x152afa0);
    (*pcVar4)();
  }
  uVar13 = (ulong)(uint)(int)(short)uStack_320;
  param_3 = &uStack_338;
  puVar28 = &UNK_0152ad60;
code_r0x014a7750:
  auVar32._8_8_ = uVar13;
  auVar32._0_8_ = param_3;
  pppppuVar6 = (undefined8 *****)((long)ppuVar5 + -0x30);
  *(undefined8 **)((long)ppuVar5 + -0x30) = puVar25;
  *(long *)((long)ppuVar5 + -0x28) = auVar29._8_8_;
  *(undefined8 **)((long)ppuVar5 + -0x20) = puVar21;
  *(long *)((long)ppuVar5 + -0x18) = auVar29._0_8_;
  *(undefined8 ******)((long)ppuVar5 + -0x10) = pppppuVar26;
  *(undefined **)((long)ppuVar5 + -8) = puVar28;
  pppppuVar27 = (undefined8 *****)((long)ppuVar5 + -0x10);
  puVar25 = param_3;
  if ((bRam0000000003eb4a5c & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb4a5c = 1;
  }
  uVar19 = (uint)uVar13;
  if (-1 < (int)uVar19) {
    lVar16 = *(long *)(lVar11 + 0x10);
    if (lVar16 == 0) {
      auVar30 = func_0x00f78af4();
      psVar23 = (segment_command *)0x0;
      param_3 = puVar25;
      puVar25 = (undefined8 *)0x3eb4000;
      puVar28 = &Atlas_Networking_NetworkIdentifiers__TryGetKeyFromIdentifier;
code_r0x014a77f0:
      *(undefined8 **)((long)pppppuVar6 + -0x30) = puVar25;
      *(segment_command **)((long)pppppuVar6 + -0x28) = psVar23;
      *(long *)((long)pppppuVar6 + -0x20) = auVar32._8_8_;
      *(long *)((long)pppppuVar6 + -0x18) = auVar32._0_8_;
      *(undefined8 ******)((long)pppppuVar6 + -0x10) = pppppuVar27;
      *(undefined **)((long)pppppuVar6 + -8) = puVar28;
      if ((bRam0000000003eb4a5d & 1) == 0) {
        func_0x00f78a20(0x3d2fc10);
        bRam0000000003eb4a5d = 1;
      }
      lVar16 = *(long *)(auVar30._0_8_ + 0x18);
      if (lVar16 != 0) {
        puVar8 = (undefined1 *)/*System.Collections.Generic.Dictionary<string, short>$$TryGetValue*/ func_0x01ecd290(lVar16,auVar30._8_8_,param_3,uRam0000000003d2fc10);
        if (((ulong)puVar8 & 1) == 0) {
          *(undefined2 *)param_3 = 0;
        }
        return puVar8;
      }
      puVar8 = (undefined1 *)func_0x00f78af4();
      return puVar8;
    }
    if ((int)uVar19 < (int)*(uint *)(lVar16 + 0x18)) {
      if (*(uint *)(lVar16 + 0x18) <= uVar19) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar16 + 0x10) + (uVar13 & 0xffff) * 8 + 0x20);
      puVar8 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      goto code_r0x014a77d8;
    }
  }
  uVar9 = 0;
  puVar8 = (undefined1 *)0x0;
code_r0x014a77d8:
  *param_3 = uVar9;
  return puVar8;
}



// ============================================================
// RVA: 0x1529c00 | Atlas.UI.VotingManager.SetVoteData
// ============================================================

/* WARNING: Possible PIC construction at 0x01529ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01529d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152ac44) */
/* WARNING: Removing unreachable block (ram,0x0152af80) */
/* WARNING: Removing unreachable block (ram,0x0152ac48) */
/* WARNING: Removing unreachable block (ram,0x0152ac54) */
/* WARNING: Removing unreachable block (ram,0x0152ac58) */
/* WARNING: Removing unreachable block (ram,0x0152ac60) */
/* WARNING: Removing unreachable block (ram,0x0152ac68) */
/* WARNING: Removing unreachable block (ram,0x0152af48) */
/* WARNING: Removing unreachable block (ram,0x0152ac78) */
/* WARNING: Removing unreachable block (ram,0x0152aca0) */
/* WARNING: Removing unreachable block (ram,0x0152ac8c) */
/* WARNING: Removing unreachable block (ram,0x0152ac9c) */
/* WARNING: Removing unreachable block (ram,0x0152a5e8) */
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
/* WARNING: Removing unreachable block (ram,0x0152a8d0) */
/* WARNING: Removing unreachable block (ram,0x0152a860) */
/* WARNING: Removing unreachable block (ram,0x0152a86c) */
/* WARNING: Removing unreachable block (ram,0x0152a884) */
/* WARNING: Removing unreachable block (ram,0x0152a88c) */
/* WARNING: Removing unreachable block (ram,0x0152a5bc) */
/* WARNING: Removing unreachable block (ram,0x0152a5c4) */
/* WARNING: Removing unreachable block (ram,0x0152a5dc) */
/* WARNING: Removing unreachable block (ram,0x0152a570) */
/* WARNING: Removing unreachable block (ram,0x0152a578) */
/* WARNING: Removing unreachable block (ram,0x0152a580) */
/* WARNING: Removing unreachable block (ram,0x0152a598) */
/* WARNING: Removing unreachable block (ram,0x0152a5b0) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Removing unreachable block (ram,0x0152a334) */
/* WARNING: Removing unreachable block (ram,0x0152a290) */
/* WARNING: Removing unreachable block (ram,0x0152a298) */
/* WARNING: Removing unreachable block (ram,0x0152a2c0) */
/* WARNING: Removing unreachable block (ram,0x0152a2c8) */
/* WARNING: Removing unreachable block (ram,0x0152a2cc) */
/* WARNING: Removing unreachable block (ram,0x01529d04) */
/* WARNING: Removing unreachable block (ram,0x01529d0c) */
/* WARNING: Removing unreachable block (ram,0x01529d38) */
/* WARNING: Removing unreachable block (ram,0x01529d4c) */
/* WARNING: Removing unreachable block (ram,0x01529d5c) */
/* WARNING: Removing unreachable block (ram,0x01529d64) */
/* WARNING: Removing unreachable block (ram,0x01529d80) */
/* WARNING: Removing unreachable block (ram,0x01529d94) */
/* WARNING: Removing unreachable block (ram,0x01529da0) */
/* WARNING: Removing unreachable block (ram,0x01529db4) */
/* WARNING: Removing unreachable block (ram,0x01529dc4) */
/* WARNING: Removing unreachable block (ram,0x01529dc8) */
/* WARNING: Removing unreachable block (ram,0x01529dd0) */
/* WARNING: Removing unreachable block (ram,0x01529dec) */
/* WARNING: Removing unreachable block (ram,0x01529e00) */
/* WARNING: Removing unreachable block (ram,0x01529e0c) */
/* WARNING: Removing unreachable block (ram,0x01529e20) */
/* WARNING: Removing unreachable block (ram,0x01529e30) */
/* WARNING: Removing unreachable block (ram,0x01529e34) */
/* WARNING: Removing unreachable block (ram,0x01529e3c) */
/* WARNING: Removing unreachable block (ram,0x01529e58) */
/* WARNING: Removing unreachable block (ram,0x01529e6c) */
/* WARNING: Removing unreachable block (ram,0x01529e78) */
/* WARNING: Removing unreachable block (ram,0x01529e8c) */
/* WARNING: Removing unreachable block (ram,0x01529e9c) */
/* WARNING: Removing unreachable block (ram,0x01529ea0) */
/* WARNING: Removing unreachable block (ram,0x01529ea8) */
/* WARNING: Removing unreachable block (ram,0x01529ec4) */
/* WARNING: Removing unreachable block (ram,0x01529ed8) */
/* WARNING: Removing unreachable block (ram,0x01529ee4) */
/* WARNING: Removing unreachable block (ram,0x01529ef8) */
/* WARNING: Removing unreachable block (ram,0x01529f08) */
/* WARNING: Removing unreachable block (ram,0x01529f0c) */
/* WARNING: Removing unreachable block (ram,0x01529f14) */
/* WARNING: Removing unreachable block (ram,0x01529f24) */
/* WARNING: Removing unreachable block (ram,0x01529f38) */
/* WARNING: Removing unreachable block (ram,0x01529f3c) */
/* WARNING: Removing unreachable block (ram,0x01529f44) */
/* WARNING: Removing unreachable block (ram,0x01529f58) */
/* WARNING: Removing unreachable block (ram,0x01529f68) */
/* WARNING: Removing unreachable block (ram,0x01529f6c) */
/* WARNING: Removing unreachable block (ram,0x01529f74) */
/* WARNING: Removing unreachable block (ram,0x01529f84) */
/* WARNING: Removing unreachable block (ram,0x01529f98) */
/* WARNING: Removing unreachable block (ram,0x01529f9c) */
/* WARNING: Removing unreachable block (ram,0x01529fa4) */
/* WARNING: Removing unreachable block (ram,0x01529fb8) */
/* WARNING: Removing unreachable block (ram,0x01529fc8) */
/* WARNING: Removing unreachable block (ram,0x01529fcc) */
/* WARNING: Removing unreachable block (ram,0x01529fd4) */
/* WARNING: Removing unreachable block (ram,0x01529fe4) */
/* WARNING: Removing unreachable block (ram,0x01529ff8) */
/* WARNING: Removing unreachable block (ram,0x01529ffc) */
/* WARNING: Removing unreachable block (ram,0x0152a004) */
/* WARNING: Removing unreachable block (ram,0x0152a018) */
/* WARNING: Removing unreachable block (ram,0x0152a028) */
/* WARNING: Removing unreachable block (ram,0x0152a02c) */
/* WARNING: Removing unreachable block (ram,0x0152a034) */
/* WARNING: Removing unreachable block (ram,0x0152a044) */
/* WARNING: Removing unreachable block (ram,0x0152a144) */
/* WARNING: Removing unreachable block (ram,0x0152a058) */
/* WARNING: Removing unreachable block (ram,0x0152a05c) */
/* WARNING: Removing unreachable block (ram,0x0152a064) */
/* WARNING: Removing unreachable block (ram,0x0152a07c) */
/* WARNING: Removing unreachable block (ram,0x0152a094) */
/* WARNING: Removing unreachable block (ram,0x0152a09c) */
/* WARNING: Removing unreachable block (ram,0x0152a0a0) */
/* WARNING: Removing unreachable block (ram,0x0152a0b4) */
/* WARNING: Removing unreachable block (ram,0x0152a0c0) */
/* WARNING: Removing unreachable block (ram,0x0152a0d4) */
/* WARNING: Removing unreachable block (ram,0x0152a0e0) */
/* WARNING: Removing unreachable block (ram,0x0152a0f8) */
/* WARNING: Removing unreachable block (ram,0x0152a104) */
/* WARNING: Removing unreachable block (ram,0x0152a13c) */
/* WARNING: Removing unreachable block (ram,0x0152a148) */
/* WARNING: Removing unreachable block (ram,0x0152a11c) */
/* WARNING: Removing unreachable block (ram,0x01529cd0) */
/* WARNING: Removing unreachable block (ram,0x01529cd8) */
/* WARNING: Removing unreachable block (ram,0x01529cf4) */
/* WARNING: Removing unreachable block (ram,0x0152ad60) */
/* WARNING: Removing unreachable block (ram,0x0152af90) */
/* WARNING: Removing unreachable block (ram,0x0152ad64) */
/* WARNING: Removing unreachable block (ram,0x0152ad70) */
/* WARNING: Removing unreachable block (ram,0x0152ad74) */
/* WARNING: Removing unreachable block (ram,0x0152ad7c) */
/* WARNING: Removing unreachable block (ram,0x0152ad84) */
/* WARNING: Removing unreachable block (ram,0x0152af50) */
/* WARNING: Removing unreachable block (ram,0x0152ad94) */
/* WARNING: Removing unreachable block (ram,0x0152adbc) */
/* WARNING: Removing unreachable block (ram,0x0152ada8) */
/* WARNING: Removing unreachable block (ram,0x0152adb8) */

undefined8 *
Atlas_UI_VotingManager__SetVoteData(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  undefined8 **ppuVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *unaff_x22;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  unkbyte10 Var25;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  int aiStack_320 [4];
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  int aiStack_294 [5];
  undefined8 ******ppppppuStack_230;
  undefined *puStack_228;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [4];
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 ******ppppppuStack_1d0;
  undefined *puStack_1c8;
  short sStack_1b2;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 ******ppppppuStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [46];
  undefined2 uStack_122;
  undefined1 auStack_120 [16];
  undefined8 ******ppppppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined8 ****ppppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = (undefined8 **)&uStack_70;
  pppppppuVar20 = (undefined8 *******)&stack0xfffffffffffffff0;
  puVar18 = (undefined8 *)0x3eb4000;
  if ((bRam0000000003eb4e70 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66410);
    func_0x00f78a20(0x3d66418);
    func_0x00f78a20(0x3d66310);
    func_0x00f78a20(0x3d663e0);
    func_0x00f78a20(0x3d76240);
    func_0x00f78a20(0x3d66308);
    func_0x00f78a20(0x3d66420);
    func_0x00f78a20(0x3d663e8);
    bRam0000000003eb4e70 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lVar7 = param_1[5];
  if (lVar7 == 0) {
    auVar23 = func_0x00f78af4();
    puVar11 = auVar23._8_8_;
    pppppppuVar21 = &ppppppuStack_80;
    puStack_78 = &Atlas_UI_VotingManager__GetIdentifierFromKey;
    lVar7 = *(long *)(auVar23._0_8_ + 0x28);
    puVar22 = puStack_78;
    ppppppuStack_80 = pppppppuVar20;
    if (lVar7 == 0) {
      auVar23 = func_0x00f78af4();
      puStack_88 = &Atlas_UI_VotingManager__GetKeyFromIdentifier;
      lVar7 = *(long *)(auVar23._0_8_ + 0x28);
      auVar23._8_8_ = auVar23._8_8_;
      auVar23._0_8_ = lVar7;
      if (lVar7 == 0) {
        ppuStack_90 = &ppppppuStack_80;
        lVar7 = func_0x00f78af4();
        puStack_98 = &Atlas_UI_VotingManager__VotingFinished;
        ppppuStack_a0 = (undefined8 ****)&ppuStack_90;
        Atlas_UI_VotingManager__set_VotingManagerStage(lVar7,0);
        *(undefined4 *)(lVar7 + 0xa8) = 0;
        Atlas_UI_VotingManager__TrySetVoteListeners(lVar7,0);
        puVar18 = (undefined8 *)/*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(lVar7 + 0x98,0);
        *(undefined8 *)(lVar7 + 0x58) = 0;
        *(undefined8 *)(lVar7 + 0x60) = 0;
        *(undefined8 *)(lVar7 + 0x68) = 0;
        lVar14 = *(long *)(lVar7 + 0x18);
        if (lVar14 == 0) {
code_r0x0152a218:
          puVar18 = (undefined8 *)func_0x00f78af4();
          return puVar18;
        }
        uVar19 = 0;
        puVar11 = param_3;
        lVar15 = 0x20;
        while( true ) {
          if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar19) {
            return puVar18;
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar19) break;
          uVar19 = uVar19 + 1;
          puVar18 = (undefined8 *)/*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(lVar14 + lVar15,0);
          lVar14 = *(long *)(lVar7 + 0x18);
          lVar15 = lVar15 + 0x10;
          if (lVar14 == 0) goto code_r0x0152a218;
        }
        uVar13 = func_0x00f78b24();
        auVar24 = func_0x00f78ac0(uVar13,0);
        param_1 = auVar24._8_8_;
        puVar18 = auVar24._0_8_;
        param_3 = &uStack_100;
        puStack_c8 = &Atlas_UI_VotingManager__GetWinningIds;
        pppppppuVar20 = (undefined8 *******)&pppppuStack_d0;
        param_2 = 0x3eb4000;
        pppppuStack_d0 = &ppppuStack_a0;
        if ((bRam0000000003eb4e71 & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          bRam0000000003eb4e71 = 1;
        }
        uStack_100 = 0;
        uStack_f8 = 0;
        lVar7 = puVar18[5];
        if (lVar7 != 0) {
          puVar11 = (undefined8 *)(ulong)(uint)(int)auVar24._8_2_;
          ppuVar4 = (undefined8 **)&uStack_100;
          puVar22 = &UNK_0152a290;
          goto code_r0x014a7750;
        }
        auVar23 = func_0x00f78af4();
        param_1 = auVar23._0_8_;
        pppppppuVar5 = (undefined8 *******)auStack_150;
        puStack_108 = &Atlas_UI_VotingManager__CastVote;
        pppppppuVar21 = &ppppppuStack_110;
        uStack_122 = 0;
        auVar23._8_8_ = auVar23._8_8_;
        auVar23._0_8_ = param_1[5];
        ppppppuStack_110 = pppppppuVar20;
        auStack_120 = auVar24;
        if (param_1[5] != 0) {
          puVar12 = (undefined8 *)&uStack_122;
          puVar22 = &UNK_0152a334;
          puVar18 = puVar11;
          goto code_r0x014a77f0;
        }
        Var25 = func_0x00f78af4();
        sStack_1b2 = (short)((unkuint10)Var25 >> 0x40);
        puStack_158 = &Atlas_UI_VotingManager__CastVote;
        ppppppuStack_160 = pppppppuVar21;
        if ((bRam0000000003eb4e74 & 1) == 0) {
          func_0x00f78a20(0x3d65ed8);
          func_0x00f78a20(0x3d76200);
          bRam0000000003eb4e74 = 1;
        }
        uVar13 = /*System.UInt32$$ToString*/ func_0x02a0b3d0((undefined2 *)((long)puVar11 + 0xc),0);
        uVar8 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&sStack_1b2,0);
        /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager CastVote ')*/ uRam0000000003d76200,uVar13,/*STR(' ')*/ uRam0000000003d65ed8,uVar8,0);
        lVar7 = *(long *)((long)Var25 + 0x20);
        if ((lVar7 != 0) && (plVar9 = *(long **)(lVar7 + 0x20), plVar9 != (long *)0x0)) {
          uStack_1a8 = puVar11[1];
          uStack_1b0 = *puVar11;
          uStack_198 = puVar11[3];
          uStack_1a0 = puVar11[2];
          puVar18 = (undefined8 *)
                    (**(code **)(*plVar9 + 0x1d8))
                              (plVar9,&uStack_1b0,(long)sStack_1b2,*(undefined8 *)(*plVar9 + 0x1e0))
          ;
          return puVar18;
        }
        auVar23 = func_0x00f78af4();
        puVar18 = auVar23._8_8_;
        param_1 = auVar23._0_8_;
        pppppppuVar5 = (undefined8 *******)auStack_220;
        puStack_1c8 = &Atlas_UI_VotingManager__DecideVoteOptions;
        pppppppuVar21 = &ppppppuStack_1d0;
        param_2 = 0x3eb4000;
        ppppppuStack_1d0 = &ppppppuStack_160;
        if ((bRam0000000003eb4e73 & 1) == 0) {
          func_0x00f78a20(0x3d3b110);
          func_0x00f78a20(0x3d1f498);
          func_0x00f78a20(0x3d66320);
          func_0x00f78a20(0x3d663f8);
          func_0x00f78a20(0x3d66300);
          func_0x00f78a20(0x3d66318);
          func_0x00f78a20(0x3d663f0);
          func_0x00f78a20(0x3d6b9f8);
          bRam0000000003eb4e73 = 1;
        }
        uStack_210 = 0;
        puStack_208 = (undefined8 *)0x0;
        auStack_218 = (undefined1  [4])0x0;
        uStack_214 = 0;
        if (param_1[4] != 0) {
          puVar11 = (undefined8 *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(param_1[4],0);
          if ((int)puVar11 == 0) {
            return puVar11;
          }
          if (param_1[0x16] == 0) goto code_r0x0152a8c4;
          /*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(param_1[0x16],param_1[0x1c],0);
          if (puVar18 == (undefined8 *)0x0) goto code_r0x0152a8c4;
          auVar24._8_8_ = param_1[0x1c];
          auVar24._0_8_ = param_1;
          if (*(int *)(puVar18 + 2) == 2) {
            puVar22 = &UNK_0152a520;
            goto code_r0x0152a8dc;
          }
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(param_1,param_1[0x1c],&puStack_208,&uStack_210);
          if (param_1[0x1c] == 0) goto code_r0x0152a8c4;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(param_1[0x1c],uRam0000000003d3b110);
          if ((puStack_208 != (undefined8 *)0x0) && (param_1[5] != 0)) {
            auVar23._8_8_ = puStack_208[3];
            auVar23._0_8_ = param_1[5];
            puVar12 = (undefined8 *)(auStack_218 + 2);
            puVar22 = &UNK_0152a570;
            unaff_x22 = puStack_208;
            goto code_r0x014a77f0;
          }
        }
code_r0x0152a8c4:
        func_0x00f78af4();
        uVar13 = func_0x00f78b24();
        puVar22 = &Atlas_UI_VotingManager__FilterMapsFromTournament;
        auVar24 = func_0x00f78ac0(uVar13,0);
code_r0x0152a8dc:
        puStack_350 = auVar24._8_8_;
        param_2 = auVar24._0_8_;
        ppuVar4 = &puStack_350;
        pppppppuVar20 = &ppppppuStack_230;
        unaff_x22 = &uStack_2c0;
        uVar19 = 0x3eb4000;
        ppppppuStack_230 = pppppppuVar21;
        puStack_228 = puVar22;
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
        uStack_2a0 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_2c8 = 0;
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        lStack_300 = 0;
        uStack_2f8 = 0;
        uStack_310 = 0;
        uStack_308 = 0;
        aiStack_320[3] = 0;
        if (*(long *)(param_2 + 0xb8) == 0) goto code_r0x0152ae30;
        uVar19 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(param_2 + 0xb8),uRam0000000003d2e6f8);
        puVar18 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(puVar18,puStack_350,uRam0000000003d3b0f8);
        if (*(long *)(param_2 + 0x20) == 0) goto code_r0x0152ae30;
        lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x20);
        if (lVar7 == 0) goto code_r0x0152ae30;
        lVar7 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar7,0);
        if (lVar7 == 0) goto code_r0x0152ae30;
        uVar19 = 0x3d6c000;
        aiStack_294[0] = *(int *)(lVar7 + 0x18);
        uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_294,0);
        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar13,0);
        if (*(long *)(param_2 + 0x20) == 0) goto code_r0x0152ae30;
        lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x20);
        if (lVar7 == 0) goto code_r0x0152ae30;
        lVar7 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar7,0);
        if (lVar7 == 0) goto code_r0x0152ae30;
        uVar19 = 0x3d32bf8;
        param_1 = (undefined8 *)0x3d32bf8;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_348,lVar7,uRam0000000003d3b6b8);
        uStack_2b8 = uStack_340;
        uStack_2c0 = uStack_348;
        uStack_2a8 = uStack_330;
        uStack_2b0 = uStack_338;
        uStack_2a0 = uStack_328;
        uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_2c0,uRam0000000003d32bf8);
        if ((uVar10 & 1) == 0) {
          aiStack_320[0] = 0x136;
          /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_2c0,uRam0000000003d32bf0);
          aiStack_320[3] = 0;
          if (*(long *)(param_2 + 0xb8) == 0) goto code_r0x0152ae30;
          /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_348,*(long *)(param_2 + 0xb8),uRam0000000003d2e710);
          uStack_2e8 = uStack_340;
          uStack_2f0 = uStack_348;
          uStack_2d8 = uStack_330;
          uStack_2e0 = uStack_338;
          goto code_r0x0152ad1c;
        }
        sVar2 = uStack_2a8._4_2_;
        sVar1 = (short)uStack_2a8;
        if (uStack_2a8._4_2_ != uStack_2b0._4_2_) {
          sVar1 = uStack_2b0._4_2_;
        }
        if (*(long *)(param_2 + 0xb8) == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        unaff_x22 = (undefined8 *)(ulong)(uint)(int)sVar1;
        uVar19 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(param_2 + 0xb8),unaff_x22,uRam0000000003d2e700);
        if ((uVar19 & 1) == 0) {
          if (*(long *)(param_2 + 0xb8) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(param_2 + 0xb8),unaff_x22,0,uRam0000000003d2e6f0);
        }
        lVar7 = *(long *)(param_2 + 0xb8);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        aiStack_294[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar7,unaff_x22,uRam0000000003d2e748);
        /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar7,unaff_x22,aiStack_294[0] + 1,uRam0000000003d2e750);
        lVar7 = *(long *)(param_2 + 0x28);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        puVar11 = (undefined8 *)(ulong)(uint)(int)sVar2;
        param_3 = &uStack_2c8;
        ppuVar4 = &puStack_350;
        puVar22 = &UNK_0152ac44;
        goto code_r0x014a7750;
      }
      pppppppuVar5 = &ppppppuStack_80;
      puVar12 = param_3;
      puVar22 = puStack_88;
      ppuStack_90 = &ppppppuStack_80;
      goto code_r0x014a77f0;
    }
  }
  else {
    puVar11 = (undefined8 *)(long)*(short *)(param_2 + 2);
    param_3 = &uStack_58;
    ppuVar4 = (undefined8 **)&uStack_70;
    puVar22 = (undefined *)0x1529cd0;
  }
  goto code_r0x014a7750;
  while (uStack_2e0._4_4_ < *(int *)(param_2 + 0x10)) {
code_r0x0152ad1c:
    uVar19 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_2f0,uRam0000000003d33da0);
    if ((uVar19 & 1) == 0) {
      param_2 = (ulong)(uint)aiStack_320[3];
      bVar6 = aiStack_320[3] != 0xffffffff;
      aiStack_320[3] = aiStack_320[3] + 1;
      uVar19 = (ulong)(uint)aiStack_320[3];
      aiStack_320[0] = 0x1d1;
      /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_2f0,uRam0000000003d33d98);
      if (bVar6) goto code_r0x0152ae34;
      uVar19 = 0;
      iVar16 = 0;
      while (puVar18 == (undefined8 *)0x0) {
code_r0x0152ae30:
        func_0x00f78af4();
code_r0x0152ae34:
        if (aiStack_320[(int)(uint)param_2] == 0x1d1) {
          uVar19 = param_2;
          aiStack_320[3] = (uint)param_2;
        }
        iVar16 = (int)uVar19;
      }
      aiStack_294[0] = *(int *)(puVar18 + 3);
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_294,0);
      uVar13 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar13,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_310,puVar18,uRam0000000003d3b120);
      while( true ) {
        uVar19 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_310,uRam0000000003d32988);
        if ((uVar19 & 1) == 0) {
          aiStack_320[iVar16] = 0x23d;
          aiStack_320[3] = aiStack_320[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_310,uRam0000000003d32980);
          if (*(int *)(puVar18 + 3) < 2) {
            puVar18 = puStack_350;
          }
          return puVar18;
        }
        if (lStack_300 == 0) break;
        uVar13 = /*System.String$$Concat*/ func_0x029be39c(uVar13,*(undefined8 *)(lStack_300 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
  }
  lVar7 = *(long *)(param_2 + 0x28);
  if (lVar7 == 0) {
    func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x152afa0);
    (*pcVar3)();
  }
  puVar11 = (undefined8 *)(ulong)(uint)(int)(short)uStack_2e0;
  param_3 = &uStack_2f8;
  puVar22 = &UNK_0152ad60;
code_r0x014a7750:
  pppppppuVar5 = (undefined8 *******)((long)ppuVar4 + -0x30);
  *(undefined8 **)((long)ppuVar4 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar4 + -0x28) = param_2;
  *(undefined8 **)((long)ppuVar4 + -0x20) = puVar18;
  *(undefined8 **)((long)ppuVar4 + -0x18) = param_1;
  *(undefined8 ********)((long)ppuVar4 + -0x10) = pppppppuVar20;
  *(undefined **)((long)ppuVar4 + -8) = puVar22;
  pppppppuVar21 = (undefined8 *******)((long)ppuVar4 + -0x10);
  unaff_x22 = (undefined8 *)0x3eb4000;
  puVar12 = param_3;
  if ((bRam0000000003eb4a5c & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb4a5c = 1;
  }
  uVar17 = (uint)puVar11;
  if (-1 < (int)uVar17) {
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      auVar23 = func_0x00f78af4();
      param_2 = 0;
      param_1 = param_3;
      puVar18 = puVar11;
      puVar22 = &Atlas_Networking_NetworkIdentifiers__TryGetKeyFromIdentifier;
code_r0x014a77f0:
      *(undefined8 **)((long)pppppppuVar5 + -0x30) = unaff_x22;
      *(ulong *)((long)pppppppuVar5 + -0x28) = param_2;
      *(undefined8 **)((long)pppppppuVar5 + -0x20) = puVar18;
      *(undefined8 **)((long)pppppppuVar5 + -0x18) = param_1;
      *(undefined8 ********)((long)pppppppuVar5 + -0x10) = pppppppuVar21;
      *(undefined **)((long)pppppppuVar5 + -8) = puVar22;
      if ((bRam0000000003eb4a5d & 1) == 0) {
        func_0x00f78a20(0x3d2fc10);
        bRam0000000003eb4a5d = 1;
      }
      lVar7 = *(long *)(auVar23._0_8_ + 0x18);
      if (lVar7 == 0) {
        puVar18 = (undefined8 *)func_0x00f78af4();
        return puVar18;
      }
      puVar18 = (undefined8 *)/*System.Collections.Generic.Dictionary<string, short>$$TryGetValue*/ func_0x01ecd290(lVar7,auVar23._8_8_,puVar12,uRam0000000003d2fc10);
      if (((ulong)puVar18 & 1) == 0) {
        *(undefined2 *)puVar12 = 0;
      }
      return puVar18;
    }
    if ((int)uVar17 < (int)*(uint *)(lVar7 + 0x18)) {
      if (*(uint *)(lVar7 + 0x18) <= uVar17) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + ((ulong)puVar11 & 0xffff) * 8 + 0x20);
      puVar18 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      goto code_r0x014a77d8;
    }
  }
  uVar13 = 0;
  puVar18 = (undefined8 *)0x0;
code_r0x014a77d8:
  *param_3 = uVar13;
  return puVar18;
}



// ============================================================
// RVA: 0x152a154 | Atlas.UI.VotingManager.GetIdentifierFromKey
// ============================================================

/* WARNING: Possible PIC construction at 0x0152a28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152ac44) */
/* WARNING: Removing unreachable block (ram,0x0152af80) */
/* WARNING: Removing unreachable block (ram,0x0152ac48) */
/* WARNING: Removing unreachable block (ram,0x0152ac54) */
/* WARNING: Removing unreachable block (ram,0x0152ac58) */
/* WARNING: Removing unreachable block (ram,0x0152ac60) */
/* WARNING: Removing unreachable block (ram,0x0152ac68) */
/* WARNING: Removing unreachable block (ram,0x0152af48) */
/* WARNING: Removing unreachable block (ram,0x0152ac78) */
/* WARNING: Removing unreachable block (ram,0x0152aca0) */
/* WARNING: Removing unreachable block (ram,0x0152ac8c) */
/* WARNING: Removing unreachable block (ram,0x0152ac9c) */
/* WARNING: Removing unreachable block (ram,0x0152a5e8) */
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
/* WARNING: Removing unreachable block (ram,0x0152a8d0) */
/* WARNING: Removing unreachable block (ram,0x0152a860) */
/* WARNING: Removing unreachable block (ram,0x0152a86c) */
/* WARNING: Removing unreachable block (ram,0x0152a884) */
/* WARNING: Removing unreachable block (ram,0x0152a88c) */
/* WARNING: Removing unreachable block (ram,0x0152a5bc) */
/* WARNING: Removing unreachable block (ram,0x0152a5c4) */
/* WARNING: Removing unreachable block (ram,0x0152a5dc) */
/* WARNING: Removing unreachable block (ram,0x0152a570) */
/* WARNING: Removing unreachable block (ram,0x0152a578) */
/* WARNING: Removing unreachable block (ram,0x0152a580) */
/* WARNING: Removing unreachable block (ram,0x0152a598) */
/* WARNING: Removing unreachable block (ram,0x0152a5b0) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Removing unreachable block (ram,0x0152a334) */
/* WARNING: Removing unreachable block (ram,0x0152a290) */
/* WARNING: Removing unreachable block (ram,0x0152a298) */
/* WARNING: Removing unreachable block (ram,0x0152a2c0) */
/* WARNING: Removing unreachable block (ram,0x0152a2c8) */
/* WARNING: Removing unreachable block (ram,0x0152a2cc) */
/* WARNING: Removing unreachable block (ram,0x0152ad60) */
/* WARNING: Removing unreachable block (ram,0x0152af90) */
/* WARNING: Removing unreachable block (ram,0x0152ad64) */
/* WARNING: Removing unreachable block (ram,0x0152ad70) */
/* WARNING: Removing unreachable block (ram,0x0152ad74) */
/* WARNING: Removing unreachable block (ram,0x0152ad7c) */
/* WARNING: Removing unreachable block (ram,0x0152ad84) */
/* WARNING: Removing unreachable block (ram,0x0152af50) */
/* WARNING: Removing unreachable block (ram,0x0152ad94) */
/* WARNING: Removing unreachable block (ram,0x0152adbc) */
/* WARNING: Removing unreachable block (ram,0x0152ada8) */
/* WARNING: Removing unreachable block (ram,0x0152adb8) */

undefined1 *
Atlas_UI_VotingManager__GetIdentifierFromKey(long param_1,ulong param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 auVar2 [16];
  short sVar3;
  code *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 unaff_x19;
  uint uVar17;
  undefined8 unaff_x20;
  ulong uVar18;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *******pppppppuVar19;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  unkbyte10 Var25;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  int aiStack_2b0 [4];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  int aiStack_224 [5];
  undefined8 ******ppppppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [4];
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 ******ppppppuStack_160;
  undefined *puStack_158;
  short sStack_142;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 ******ppppppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [46];
  undefined2 uStack_b2;
  undefined1 auStack_b0 [16];
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  undefined8 **ppuStack_20;
  undefined *puStack_18;
  
  auVar23._8_8_ = unaff_x20;
  auVar23._0_8_ = unaff_x19;
  auVar22._8_8_ = unaff_x19;
  auVar22._0_8_ = unaff_x20;
  pppppppuVar19 = (undefined8 *******)&stack0xfffffffffffffff0;
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 == 0) {
    auVar22 = func_0x00f78af4();
    puStack_18 = &Atlas_UI_VotingManager__GetKeyFromIdentifier;
    lVar8 = *(long *)(auVar22._0_8_ + 0x28);
    auVar21._8_8_ = auVar22._8_8_;
    auVar21._0_8_ = lVar8;
    if (lVar8 == 0) {
      ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
      lVar8 = func_0x00f78af4();
      puStack_28 = &Atlas_UI_VotingManager__VotingFinished;
      ppppuStack_30 = (undefined8 ****)&ppuStack_20;
      Atlas_UI_VotingManager__set_VotingManagerStage(lVar8,0);
      *(undefined4 *)(lVar8 + 0xa8) = 0;
      Atlas_UI_VotingManager__TrySetVoteListeners(lVar8,0);
      puVar7 = (undefined1 *)/*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(lVar8 + 0x98,0);
      *(undefined8 *)(lVar8 + 0x58) = 0;
      *(undefined8 *)(lVar8 + 0x60) = 0;
      *(undefined8 *)(lVar8 + 0x68) = 0;
      lVar14 = *(long *)(lVar8 + 0x18);
      if (lVar14 == 0) {
code_r0x0152a218:
        puVar7 = (undefined1 *)func_0x00f78af4();
        return puVar7;
      }
      uVar18 = 0;
      puVar11 = param_3;
      lVar15 = 0x20;
      while( true ) {
        if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar18) {
          return puVar7;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar18) break;
        uVar18 = uVar18 + 1;
        puVar7 = (undefined1 *)/*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(lVar14 + lVar15,0);
        lVar14 = *(long *)(lVar8 + 0x18);
        lVar15 = lVar15 + 0x10;
        if (lVar14 == 0) goto code_r0x0152a218;
      }
      uVar13 = func_0x00f78b24();
      auVar22 = func_0x00f78ac0(uVar13,0);
      param_3 = &uStack_90;
      puStack_58 = &Atlas_UI_VotingManager__GetWinningIds;
      unaff_x29 = (undefined8 *******)&pppppuStack_60;
      unaff_x21 = 0x3eb4000;
      pppppuStack_60 = &ppppuStack_30;
      if ((bRam0000000003eb4e71 & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        bRam0000000003eb4e71 = 1;
      }
      uStack_90 = 0;
      uStack_88 = 0;
      lVar8 = *(long *)(auVar22._0_8_ + 0x28);
      if (lVar8 != 0) {
        param_2 = (ulong)(uint)(int)auVar22._8_2_;
        unaff_x30 = &UNK_0152a290;
        register0x00000008 = (BADSPACEBASE *)&uStack_90;
        goto code_r0x014a7750;
      }
      auVar21 = func_0x00f78af4();
      auVar23._8_8_ = puVar11;
      auVar23._0_8_ = auVar21._0_8_;
      puVar5 = auStack_e0;
      puStack_98 = &Atlas_UI_VotingManager__CastVote;
      pppppppuVar19 = &ppppppuStack_a0;
      uStack_b2 = 0;
      lVar8 = *(long *)(auVar21._0_8_ + 0x28);
      auVar21._8_8_ = auVar21._8_8_;
      auVar21._0_8_ = lVar8;
      ppppppuStack_a0 = unaff_x29;
      auStack_b0 = auVar22;
      if (lVar8 != 0) {
        param_3 = (undefined8 *)&uStack_b2;
        puVar20 = &UNK_0152a334;
        goto code_r0x014a77f0;
      }
      Var25 = func_0x00f78af4();
      sStack_142 = (short)((unkuint10)Var25 >> 0x40);
      puStack_e8 = &Atlas_UI_VotingManager__CastVote;
      ppppppuStack_f0 = pppppppuVar19;
      if ((bRam0000000003eb4e74 & 1) == 0) {
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d76200);
        bRam0000000003eb4e74 = 1;
      }
      uVar13 = /*System.UInt32$$ToString*/ func_0x02a0b3d0((undefined2 *)((long)puVar11 + 0xc),0);
      uVar9 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&sStack_142,0);
      /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager CastVote ')*/ uRam0000000003d76200,uVar13,/*STR(' ')*/ uRam0000000003d65ed8,uVar9,0);
      lVar8 = *(long *)((long)Var25 + 0x20);
      if ((lVar8 != 0) && (plVar10 = *(long **)(lVar8 + 0x20), plVar10 != (long *)0x0)) {
        uStack_138 = puVar11[1];
        uStack_140 = *puVar11;
        uStack_128 = puVar11[3];
        uStack_130 = puVar11[2];
        puVar7 = (undefined1 *)
                 (**(code **)(*plVar10 + 0x1d8))
                           (plVar10,&uStack_140,(long)sStack_142,*(undefined8 *)(*plVar10 + 0x1e0));
        return puVar7;
      }
      auVar23 = func_0x00f78af4();
      puVar11 = auVar23._8_8_;
      lVar8 = auVar23._0_8_;
      puVar5 = auStack_1b0;
      puStack_158 = &Atlas_UI_VotingManager__DecideVoteOptions;
      pppppppuVar19 = &ppppppuStack_160;
      unaff_x21 = 0x3eb4000;
      ppppppuStack_160 = &ppppppuStack_f0;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      uStack_1a0 = 0;
      puStack_198 = (undefined8 *)0x0;
      auStack_1a8 = (undefined1  [4])0x0;
      uStack_1a4 = 0;
      if (*(long *)(lVar8 + 0x20) != 0) {
        puVar7 = (undefined1 *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar8 + 0x20),0);
        if ((int)puVar7 == 0) {
          return puVar7;
        }
        if (*(long *)(lVar8 + 0xb0) == 0) goto code_r0x0152a8c4;
        /*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(lVar8 + 0xb0),*(undefined8 *)(lVar8 + 0xe0),0);
        if (puVar11 == (undefined8 *)0x0) goto code_r0x0152a8c4;
        auVar24._8_8_ = *(undefined8 *)(lVar8 + 0xe0);
        auVar24._0_8_ = lVar8;
        if (*(int *)(puVar11 + 2) == 2) {
          puVar20 = &UNK_0152a520;
          goto code_r0x0152a8dc;
        }
        /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(lVar8,*(undefined8 *)(lVar8 + 0xe0),&puStack_198,&uStack_1a0);
        if (*(long *)(lVar8 + 0xe0) == 0) goto code_r0x0152a8c4;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar8 + 0xe0),uRam0000000003d3b110);
        if ((puStack_198 != (undefined8 *)0x0) && (*(long *)(lVar8 + 0x28) != 0)) {
          auVar21._8_8_ = puStack_198[3];
          auVar21._0_8_ = *(long *)(lVar8 + 0x28);
          param_3 = (undefined8 *)(auStack_1a8 + 2);
          puVar20 = &UNK_0152a570;
          unaff_x22 = puStack_198;
          goto code_r0x014a77f0;
        }
      }
code_r0x0152a8c4:
      func_0x00f78af4();
      uVar13 = func_0x00f78b24();
      puVar20 = &Atlas_UI_VotingManager__FilterMapsFromTournament;
      auVar24 = func_0x00f78ac0(uVar13,0);
code_r0x0152a8dc:
      puStack_2e0 = auVar24._8_8_;
      unaff_x21 = auVar24._0_8_;
      unaff_x29 = &ppppppuStack_1c0;
      unaff_x22 = &uStack_250;
      uVar18 = 0x3eb4000;
      ppppppuStack_1c0 = pppppppuVar19;
      puStack_1b8 = puVar20;
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
      uStack_230 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_258 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      lStack_290 = 0;
      uStack_288 = 0;
      uStack_2a0 = 0;
      uStack_298 = 0;
      aiStack_2b0[3] = 0;
      if (*(long *)(unaff_x21 + 0xb8) == 0) goto code_r0x0152ae30;
      uVar18 = 0x3d1d000;
      /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(unaff_x21 + 0xb8),uRam0000000003d2e6f8);
      puVar11 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(puVar11,puStack_2e0,uRam0000000003d3b0f8);
      if (*(long *)(unaff_x21 + 0x20) == 0) goto code_r0x0152ae30;
      lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0x20);
      if (lVar8 == 0) goto code_r0x0152ae30;
      lVar8 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar8,0);
      if (lVar8 == 0) goto code_r0x0152ae30;
      uVar18 = 0x3d6c000;
      aiStack_224[0] = *(int *)(lVar8 + 0x18);
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_224,0);
      /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar13,0);
      if (*(long *)(unaff_x21 + 0x20) == 0) goto code_r0x0152ae30;
      lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0x20);
      if (lVar8 == 0) goto code_r0x0152ae30;
      lVar8 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar8,0);
      if (lVar8 == 0) goto code_r0x0152ae30;
      uVar18 = 0x3d32bf8;
      auVar22._8_8_ = 0x3d32bf8;
      auVar22._0_8_ = puVar11;
      auVar2._8_8_ = 0x3d32bf8;
      auVar2._0_8_ = puVar11;
      /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_2d8,lVar8,uRam0000000003d3b6b8);
      uStack_248 = uStack_2d0;
      uStack_250 = uStack_2d8;
      uStack_238 = uStack_2c0;
      uStack_240 = uStack_2c8;
      uStack_230 = uStack_2b8;
      uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_250,uRam0000000003d32bf8);
      if ((uVar12 & 1) == 0) {
        aiStack_2b0[0] = 0x136;
        /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_250,uRam0000000003d32bf0);
        aiStack_2b0[3] = 0;
        if (*(long *)(unaff_x21 + 0xb8) == 0) goto code_r0x0152ae30;
        /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_2d8,*(long *)(unaff_x21 + 0xb8),uRam0000000003d2e710);
        uStack_278 = uStack_2d0;
        uStack_280 = uStack_2d8;
        uStack_268 = uStack_2c0;
        uStack_270 = uStack_2c8;
        goto code_r0x0152ad1c;
      }
      sVar3 = uStack_238._4_2_;
      sVar1 = (short)uStack_238;
      if (uStack_238._4_2_ != uStack_240._4_2_) {
        sVar1 = uStack_240._4_2_;
      }
      if (*(long *)(unaff_x21 + 0xb8) == 0) {
        func_0x00f78af4();
        goto code_r0x0152af9c;
      }
      unaff_x22 = (undefined8 *)(ulong)(uint)(int)sVar1;
      uVar18 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(unaff_x21 + 0xb8),unaff_x22,uRam0000000003d2e700);
      if ((uVar18 & 1) == 0) {
        if (*(long *)(unaff_x21 + 0xb8) == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(unaff_x21 + 0xb8),unaff_x22,0,uRam0000000003d2e6f0);
      }
      lVar8 = *(long *)(unaff_x21 + 0xb8);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x0152af9c;
      }
      aiStack_224[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar8,unaff_x22,uRam0000000003d2e748);
      /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar8,unaff_x22,aiStack_224[0] + 1,uRam0000000003d2e750);
      lVar8 = *(long *)(unaff_x21 + 0x28);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x0152af9c;
      }
      param_2 = (ulong)(uint)(int)sVar3;
      param_3 = &uStack_258;
      unaff_x30 = &UNK_0152ac44;
      register0x00000008 = (BADSPACEBASE *)&puStack_2e0;
      auVar22 = auVar2;
      goto code_r0x014a7750;
    }
    puVar5 = &stack0xfffffffffffffff0;
    puVar20 = puStack_18;
    ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
    goto code_r0x014a77f0;
  }
  goto code_r0x014a7750;
  while (uStack_270._4_4_ < *(int *)(unaff_x21 + 0x10)) {
code_r0x0152ad1c:
    uVar18 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_280,uRam0000000003d33da0);
    if ((uVar18 & 1) == 0) {
      unaff_x21 = (ulong)(uint)aiStack_2b0[3];
      bVar6 = aiStack_2b0[3] != 0xffffffff;
      aiStack_2b0[3] = aiStack_2b0[3] + 1;
      uVar18 = (ulong)(uint)aiStack_2b0[3];
      aiStack_2b0[0] = 0x1d1;
      /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_280,uRam0000000003d33d98);
      if (bVar6) goto code_r0x0152ae34;
      uVar18 = 0;
      iVar16 = 0;
      while (puVar11 == (undefined8 *)0x0) {
code_r0x0152ae30:
        func_0x00f78af4();
code_r0x0152ae34:
        if (aiStack_2b0[(int)(uint)unaff_x21] == 0x1d1) {
          uVar18 = unaff_x21;
          aiStack_2b0[3] = (uint)unaff_x21;
        }
        iVar16 = (int)uVar18;
      }
      aiStack_224[0] = *(int *)(puVar11 + 3);
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_224,0);
      uVar13 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar13,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_2a0,puVar11,uRam0000000003d3b120);
      while( true ) {
        uVar18 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_2a0,uRam0000000003d32988);
        if ((uVar18 & 1) == 0) {
          aiStack_2b0[iVar16] = 0x23d;
          aiStack_2b0[3] = aiStack_2b0[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_2a0,uRam0000000003d32980);
          if (*(int *)(puVar11 + 3) < 2) {
            puVar11 = puStack_2e0;
          }
          return (undefined1 *)puVar11;
        }
        if (lStack_290 == 0) break;
        uVar13 = /*System.String$$Concat*/ func_0x029be39c(uVar13,*(undefined8 *)(lStack_290 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
  }
  lVar8 = *(long *)(unaff_x21 + 0x28);
  if (lVar8 == 0) {
    func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x152afa0);
    (*pcVar4)();
  }
  param_2 = (ulong)(uint)(int)(short)uStack_270;
  param_3 = &uStack_288;
  unaff_x30 = &UNK_0152ad60;
  register0x00000008 = (BADSPACEBASE *)&puStack_2e0;
code_r0x014a7750:
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = param_3;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar22;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  pppppppuVar19 = (undefined8 *******)((long)register0x00000008 + -0x10);
  unaff_x22 = (undefined8 *)0x3eb4000;
  puVar11 = param_3;
  if ((bRam0000000003eb4a5c & 1) == 0) {
    func_0x00f78a20(0x3d3c000,param_2,param_3,0);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb4a5c = 1;
  }
  uVar17 = (uint)param_2;
  if (-1 < (int)uVar17) {
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      auVar21 = func_0x00f78af4();
      unaff_x21 = 0;
      param_3 = puVar11;
      puVar20 = &Atlas_Networking_NetworkIdentifiers__TryGetKeyFromIdentifier;
code_r0x014a77f0:
      *(undefined8 **)(puVar5 + -0x30) = unaff_x22;
      *(ulong *)(puVar5 + -0x28) = unaff_x21;
      *(long *)(puVar5 + -0x20) = auVar23._8_8_;
      *(long *)(puVar5 + -0x18) = auVar23._0_8_;
      *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar19;
      *(undefined **)(puVar5 + -8) = puVar20;
      if ((bRam0000000003eb4a5d & 1) == 0) {
        func_0x00f78a20(0x3d2fc10);
        bRam0000000003eb4a5d = 1;
      }
      lVar8 = *(long *)(auVar21._0_8_ + 0x18);
      if (lVar8 == 0) {
        puVar7 = (undefined1 *)func_0x00f78af4();
        return puVar7;
      }
      puVar7 = (undefined1 *)/*System.Collections.Generic.Dictionary<string, short>$$TryGetValue*/ func_0x01ecd290(lVar8,auVar21._8_8_,param_3,uRam0000000003d2fc10);
      if (((ulong)puVar7 & 1) == 0) {
        *(undefined2 *)param_3 = 0;
      }
      return puVar7;
    }
    if ((int)uVar17 < (int)*(uint *)(lVar8 + 0x18)) {
      if (*(uint *)(lVar8 + 0x18) <= uVar17) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + (param_2 & 0xffff) * 8 + 0x20);
      puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      goto code_r0x014a77d8;
    }
  }
  uVar13 = 0;
  puVar7 = (undefined1 *)0x0;
code_r0x014a77d8:
  *param_3 = uVar13;
  return puVar7;
}



// ============================================================
// RVA: 0x152a174 | Atlas.UI.VotingManager.GetKeyFromIdentifier
// ============================================================

/* WARNING: Possible PIC construction at 0x0152a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152a5bc) */
/* WARNING: Removing unreachable block (ram,0x0152a5c4) */
/* WARNING: Removing unreachable block (ram,0x0152a5dc) */
/* WARNING: Removing unreachable block (ram,0x0152a570) */
/* WARNING: Removing unreachable block (ram,0x0152a578) */
/* WARNING: Removing unreachable block (ram,0x0152a580) */
/* WARNING: Removing unreachable block (ram,0x0152a598) */
/* WARNING: Removing unreachable block (ram,0x0152a5b0) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Removing unreachable block (ram,0x0152a334) */
/* WARNING: Removing unreachable block (ram,0x0152a5e8) */
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
/* WARNING: Removing unreachable block (ram,0x0152a8d0) */
/* WARNING: Removing unreachable block (ram,0x0152a860) */
/* WARNING: Removing unreachable block (ram,0x0152a86c) */
/* WARNING: Removing unreachable block (ram,0x0152a884) */
/* WARNING: Removing unreachable block (ram,0x0152a88c) */

undefined8 *
Atlas_UI_VotingManager__GetKeyFromIdentifier(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 ******ppppppuVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar16;
  undefined8 unaff_x21;
  ulong uVar17;
  uint uVar18;
  long unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  unkbyte10 Var21;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  int aiStack_2a0 [4];
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  int aiStack_214 [5];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [4];
  undefined4 uStack_194;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 ******ppppppuStack_150;
  undefined *puStack_148;
  short sStack_132;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [46];
  undefined2 uStack_a2;
  undefined1 auStack_a0 [16];
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 **ppuStack_20;
  undefined *puStack_18;
  
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = unaff_x19;
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 != 0) {
code_r0x014a77f0:
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = auVar20._0_8_;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb4a5d & 1) == 0) {
      func_0x00f78a20(0x3d2fc10,auVar20._8_8_,param_3,0);
      bRam0000000003eb4a5d = 1;
    }
    if (*(long *)(lVar8 + 0x18) != 0) {
      puVar7 = (undefined8 *)
               /*System.Collections.Generic.Dictionary<string, short>$$TryGetValue*/ func_0x01ecd290(*(long *)(lVar8 + 0x18),auVar20._8_8_,param_3,uRam0000000003d2fc10);
      if (((ulong)puVar7 & 1) == 0) {
        *(undefined2 *)param_3 = 0;
      }
      return puVar7;
    }
    puVar7 = (undefined8 *)func_0x00f78af4();
    return puVar7;
  }
  lVar8 = func_0x00f78af4();
  puStack_18 = &Atlas_UI_VotingManager__VotingFinished;
  ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
  Atlas_UI_VotingManager__set_VotingManagerStage(lVar8,0);
  *(undefined4 *)(lVar8 + 0xa8) = 0;
  Atlas_UI_VotingManager__TrySetVoteListeners(lVar8,0);
  puVar7 = (undefined8 *)/*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(lVar8 + 0x98,0);
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0;
  lVar13 = *(long *)(lVar8 + 0x18);
  if (lVar13 == 0) {
code_r0x0152a218:
    puVar7 = (undefined8 *)func_0x00f78af4();
    return puVar7;
  }
  uVar16 = 0;
  lVar14 = 0x20;
  while( true ) {
    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar16) {
      return puVar7;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar16) break;
    uVar16 = uVar16 + 1;
    puVar7 = (undefined8 *)/*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(lVar13 + lVar14,0);
    lVar13 = *(long *)(lVar8 + 0x18);
    lVar14 = lVar14 + 0x10;
    if (lVar13 == 0) goto code_r0x0152a218;
  }
  uVar9 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar9,0);
  puVar7 = &uStack_80;
  puStack_48 = &Atlas_UI_VotingManager__GetWinningIds;
  ppppppuVar1 = (undefined8 ******)&ppppuStack_50;
  unaff_x21 = 0x3eb4000;
  ppppuStack_50 = (undefined8 ****)&ppuStack_20;
  if ((bRam0000000003eb4e71 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4e71 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lVar8 = *(long *)(auVar19._0_8_ + 0x28);
  unaff_x20 = param_3;
  if (lVar8 != 0) {
    /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(lVar8,(int)auVar19._8_2_,&uStack_80,0);
    lVar8 = *(long *)(auVar19._0_8_ + 0x28);
    unaff_x20 = puVar7;
    if (lVar8 != 0) {
      /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(lVar8,auVar19._8_4_ >> 0x10,&uStack_78,0);
      uVar9 = uStack_80;
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar9,0);
      puVar7 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uStack_78,0);
      return puVar7;
    }
  }
  auVar20 = func_0x00f78af4();
  puStack_88 = &Atlas_UI_VotingManager__CastVote;
  unaff_x29 = (undefined8 *******)&pppppuStack_90;
  uStack_a2 = 0;
  lVar8 = *(long *)(auVar20._0_8_ + 0x28);
  pppppuStack_90 = ppppppuVar1;
  auStack_a0 = auVar19;
  if (lVar8 != 0) {
    param_3 = (undefined8 *)&uStack_a2;
    unaff_x30 = &UNK_0152a334;
    register0x00000008 = (BADSPACEBASE *)auStack_d0;
    goto code_r0x014a77f0;
  }
  Var21 = func_0x00f78af4();
  sStack_132 = (short)((unkuint10)Var21 >> 0x40);
  puStack_d8 = &Atlas_UI_VotingManager__CastVote;
  ppppppuStack_e0 = unaff_x29;
  if ((bRam0000000003eb4e74 & 1) == 0) {
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d76200);
    bRam0000000003eb4e74 = 1;
  }
  uVar9 = /*System.UInt32$$ToString*/ func_0x02a0b3d0((undefined2 *)((long)unaff_x20 + 0xc),0);
  uVar10 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&sStack_132,0);
  /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager CastVote ')*/ uRam0000000003d76200,uVar9,/*STR(' ')*/ uRam0000000003d65ed8,uVar10,0);
  lVar8 = *(long *)((long)Var21 + 0x20);
  if ((lVar8 != 0) && (plVar11 = *(long **)(lVar8 + 0x20), plVar11 != (long *)0x0)) {
    uStack_128 = unaff_x20[1];
    uStack_130 = *unaff_x20;
    uStack_118 = unaff_x20[3];
    uStack_120 = unaff_x20[2];
    puVar7 = (undefined8 *)
             (**(code **)(*plVar11 + 0x1d8))
                       (plVar11,&uStack_130,(long)sStack_132,*(undefined8 *)(*plVar11 + 0x1e0));
    return puVar7;
  }
  auVar20 = func_0x00f78af4();
  unaff_x20 = auVar20._8_8_;
  lVar13 = auVar20._0_8_;
  puStack_148 = &Atlas_UI_VotingManager__DecideVoteOptions;
  unaff_x29 = &ppppppuStack_150;
  unaff_x21 = 0x3eb4000;
  ppppppuStack_150 = &ppppppuStack_e0;
  if ((bRam0000000003eb4e73 & 1) == 0) {
    func_0x00f78a20(0x3d3b110);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66320);
    func_0x00f78a20(0x3d663f8);
    func_0x00f78a20(0x3d66300);
    func_0x00f78a20(0x3d66318);
    func_0x00f78a20(0x3d663f0);
    func_0x00f78a20(0x3d6b9f8);
    bRam0000000003eb4e73 = 1;
  }
  uStack_190 = 0;
  lStack_188 = 0;
  auStack_198 = (undefined1  [4])0x0;
  uStack_194 = 0;
  if (*(long *)(lVar13 + 0x20) != 0) {
    puVar7 = (undefined8 *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar13 + 0x20),0);
    if ((int)puVar7 == 0) {
      return puVar7;
    }
    if (*(long *)(lVar13 + 0xb0) == 0) goto code_r0x0152a8c4;
    /*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(lVar13 + 0xb0),*(undefined8 *)(lVar13 + 0xe0),0);
    if (unaff_x20 == (undefined8 *)0x0) goto code_r0x0152a8c4;
    auVar19._8_8_ = *(undefined8 *)(lVar13 + 0xe0);
    auVar19._0_8_ = lVar13;
    if (*(int *)(unaff_x20 + 2) == 2) goto code_r0x0152a8dc;
    /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(lVar13,*(undefined8 *)(lVar13 + 0xe0),&lStack_188,&uStack_190);
    if (*(long *)(lVar13 + 0xe0) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar13 + 0xe0),uRam0000000003d3b110);
      if ((lStack_188 == 0) || (lVar8 = *(long *)(lVar13 + 0x28), lVar8 == 0))
      goto code_r0x0152a8c4;
      auVar20._8_8_ = *(undefined8 *)(lStack_188 + 0x18);
      auVar20._0_8_ = lVar13;
      param_3 = (undefined8 *)(auStack_198 + 2);
      unaff_x30 = &UNK_0152a570;
      register0x00000008 = (BADSPACEBASE *)auStack_1a0;
      unaff_x22 = lStack_188;
      goto code_r0x014a77f0;
    }
  }
code_r0x0152a8c4:
  func_0x00f78af4();
  uVar9 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar9,0);
code_r0x0152a8dc:
  uVar17 = auVar19._0_8_;
  uVar16 = 0x3eb4000;
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
  uStack_220 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_248 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_280 = 0;
  uStack_278 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  aiStack_2a0[3] = 0;
  if (*(long *)(uVar17 + 0xb8) == 0) goto code_r0x0152ae30;
  uVar16 = 0x3d1d000;
  /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar17 + 0xb8),uRam0000000003d2e6f8);
  unaff_x20 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
  /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(unaff_x20,auVar19._8_8_,uRam0000000003d3b0f8);
  if ((*(long *)(uVar17 + 0x20) == 0) ||
     (lVar8 = *(long *)(*(long *)(uVar17 + 0x20) + 0x20), lVar8 == 0)) goto code_r0x0152ae30;
  lVar8 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar8,0);
  if (lVar8 == 0) goto code_r0x0152ae30;
  uVar16 = 0x3d6c000;
  aiStack_214[0] = *(int *)(lVar8 + 0x18);
  uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_214,0);
  /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar9,0);
  if ((*(long *)(uVar17 + 0x20) == 0) ||
     (lVar8 = *(long *)(*(long *)(uVar17 + 0x20) + 0x20), lVar8 == 0)) goto code_r0x0152ae30;
  lVar8 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar8,0);
  if (lVar8 == 0) goto code_r0x0152ae30;
  uVar16 = 0x3d32bf8;
  /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_2c8,lVar8,uRam0000000003d3b6b8);
  uStack_238 = uStack_2c0;
  uStack_240 = uStack_2c8;
  uStack_228 = uStack_2b0;
  uStack_230 = uStack_2b8;
  uStack_220 = uStack_2a8;
code_r0x0152aba4:
  uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_240,uRam0000000003d32bf8);
  if ((uVar12 & 1) != 0) {
    sVar4 = uStack_228._4_2_;
    sVar2 = (short)uStack_228;
    if (uStack_228._4_2_ != uStack_230._4_2_) {
      sVar2 = uStack_230._4_2_;
    }
    if (*(long *)(uVar17 + 0xb8) == 0) {
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
    iVar15 = (int)sVar2;
    uVar12 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar17 + 0xb8),iVar15,uRam0000000003d2e700);
    if ((uVar12 & 1) == 0) {
      if (*(long *)(uVar17 + 0xb8) == 0) {
        func_0x00f78af4();
        goto code_r0x0152af9c;
      }
      /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar17 + 0xb8),iVar15,0,uRam0000000003d2e6f0);
    }
    lVar8 = *(long *)(uVar17 + 0xb8);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
    aiStack_214[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar8,iVar15,uRam0000000003d2e748);
    /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar8,iVar15,aiStack_214[0] + 1,uRam0000000003d2e750);
    if (*(long *)(uVar17 + 0x28) == 0) {
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
    /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar17 + 0x28),(int)sVar4,&uStack_248,0);
    if (unaff_x20 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
    uVar3 = *(uint *)(unaff_x20 + 3);
    if (0 < (int)uVar3) {
      uVar18 = 0;
      do {
        if (uVar3 <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar8 = *(long *)(unaff_x20[2] + (long)(int)uVar18 * 8 + 0x20);
        if (lVar8 == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        uVar12 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar8 + 0x18),uStack_248,0);
        if ((uVar12 & 1) != 0) {
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_248,0);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(unaff_x20,uVar18,uRam0000000003d3b130);
          break;
        }
        uVar18 = uVar18 + 1;
        uVar3 = *(uint *)(unaff_x20 + 3);
      } while ((int)uVar18 < (int)uVar3);
    }
    goto code_r0x0152aba4;
  }
  aiStack_2a0[0] = 0x136;
  /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_240,uRam0000000003d32bf0);
  aiStack_2a0[3] = 0;
  if (*(long *)(uVar17 + 0xb8) != 0) {
    /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_2c8,*(long *)(uVar17 + 0xb8),uRam0000000003d2e710);
    uStack_268 = uStack_2c0;
    uStack_270 = uStack_2c8;
    uStack_258 = uStack_2b0;
    uStack_260 = uStack_2b8;
code_r0x0152ad1c:
    uVar16 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_270,uRam0000000003d33da0);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(uVar17 + 0x10) <= uStack_260._4_4_) {
        if (*(long *)(uVar17 + 0x28) == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar17 + 0x28),(int)(short)uStack_260,&uStack_278,0);
        if (unaff_x20 == (undefined8 *)0x0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        uVar3 = *(uint *)(unaff_x20 + 3);
        if (0 < (int)uVar3) {
          uVar18 = 0;
          do {
            if (uVar3 <= uVar18) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar8 = *(long *)(unaff_x20[2] + (long)(int)uVar18 * 8 + 0x20);
            if (lVar8 == 0) {
              func_0x00f78af4();
              goto code_r0x0152af9c;
            }
            uVar16 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar8 + 0x18),uStack_278,0);
            if ((uVar16 & 1) != 0) {
              /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_278,0);
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(unaff_x20,uVar18,uRam0000000003d3b130);
              break;
            }
            uVar18 = uVar18 + 1;
            uVar3 = *(uint *)(unaff_x20 + 3);
          } while ((int)uVar18 < (int)uVar3);
        }
      }
      goto code_r0x0152ad1c;
    }
    uVar17 = (ulong)(uint)aiStack_2a0[3];
    bVar6 = aiStack_2a0[3] != 0xffffffff;
    aiStack_2a0[3] = aiStack_2a0[3] + 1;
    uVar16 = (ulong)(uint)aiStack_2a0[3];
    aiStack_2a0[0] = 0x1d1;
    /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_270,uRam0000000003d33d98);
    if (bVar6) goto code_r0x0152ae34;
    uVar16 = 0;
    iVar15 = 0;
    if (unaff_x20 != (undefined8 *)0x0) goto code_r0x0152ae5c;
  }
code_r0x0152ae30:
  do {
    func_0x00f78af4();
code_r0x0152ae34:
    if (aiStack_2a0[(int)(uint)uVar17] == 0x1d1) {
      uVar16 = uVar17;
      aiStack_2a0[3] = (uint)uVar17;
    }
    iVar15 = (int)uVar16;
  } while (unaff_x20 == (undefined8 *)0x0);
code_r0x0152ae5c:
  aiStack_214[0] = *(int *)(unaff_x20 + 3);
  uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_214,0);
  uVar9 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar9,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_290,unaff_x20,uRam0000000003d3b120);
  while( true ) {
    uVar16 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_290,uRam0000000003d32988);
    if ((uVar16 & 1) == 0) {
      aiStack_2a0[iVar15] = 0x23d;
      aiStack_2a0[3] = aiStack_2a0[3] + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_290,uRam0000000003d32980);
      if (*(int *)(unaff_x20 + 3) < 2) {
        unaff_x20 = auVar19._8_8_;
      }
      return unaff_x20;
    }
    if (lStack_280 == 0) break;
    uVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar9,*(undefined8 *)(lStack_280 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
  }
  func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x152afa0);
  (*pcVar5)();
}



// ============================================================
// RVA: 0x152a194 | Atlas.UI.VotingManager.VotingFinished
// ============================================================

/* WARNING: Possible PIC construction at 0x0152a348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152a34c) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long Atlas_UI_VotingManager__VotingFinished(long param_1,undefined8 param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  short sVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  unkbyte10 Var26;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  int aiStack_290 [4];
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  int aiStack_204 [5];
  undefined4 uStack_188;
  undefined4 uStack_184;
  long lStack_180;
  long lStack_178;
  short sStack_122;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  short sStack_92;
  undefined1 auStack_90 [16];
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  Atlas_UI_VotingManager__set_VotingManagerStage(param_1,0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  Atlas_UI_VotingManager__TrySetVoteListeners(param_1,0);
  lVar10 = /*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(param_1 + 0x98,0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar20 = *(long *)(param_1 + 0x18);
  if (lVar20 != 0) {
    uVar22 = 0;
    lVar16 = 0x20;
    do {
      if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)uVar22) {
        return lVar10;
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar22) {
        uVar11 = func_0x00f78b24();
        auVar24 = func_0x00f78ac0(uVar11,0);
        puVar18 = &uStack_70;
        puStack_38 = &Atlas_UI_VotingManager__GetWinningIds;
        puStack_40 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb4e71 & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          bRam0000000003eb4e71 = 1;
        }
        uStack_70 = 0;
        uStack_68 = 0;
        lVar10 = *(long *)(auVar24._0_8_ + 0x28);
        if (lVar10 != 0) {
          /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(lVar10,(int)auVar24._8_2_,&uStack_70,0);
          lVar10 = *(long *)(auVar24._0_8_ + 0x28);
          param_3 = puVar18;
          if (lVar10 != 0) {
            /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(lVar10,auVar24._8_4_ >> 0x10,&uStack_68,0);
            uVar11 = uStack_70;
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
            lVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uStack_68,0);
            return lVar10;
          }
        }
        auVar25 = func_0x00f78af4();
        puStack_78 = &Atlas_UI_VotingManager__CastVote;
        sStack_92 = 0;
        lVar10 = *(long *)(auVar25._0_8_ + 0x28);
        ppuStack_80 = &puStack_40;
        auStack_90 = auVar24;
        if (lVar10 == 0) {
          Var26 = func_0x00f78af4();
        }
        else {
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(lVar10,auVar25._8_8_,&sStack_92,0);
          Var26 = CONCAT28(sStack_92,auVar25._0_8_);
          uStack_b8 = param_3[1];
          uStack_c0 = *param_3;
          uStack_a8 = param_3[3];
          uStack_b0 = param_3[2];
          param_3 = &uStack_c0;
        }
        sStack_122 = (short)((unkuint10)Var26 >> 0x40);
        if ((bRam0000000003eb4e74 & 1) == 0) {
          func_0x00f78a20(0x3d65ed8);
          func_0x00f78a20(0x3d76200);
          bRam0000000003eb4e74 = 1;
        }
        uVar11 = /*System.UInt32$$ToString*/ func_0x02a0b3d0((undefined1 *)((long)param_3 + 0xc),0);
        uVar12 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&sStack_122,0);
        /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager CastVote ')*/ uRam0000000003d76200,uVar11,/*STR(' ')*/ uRam0000000003d65ed8,uVar12,0);
        lVar10 = *(long *)((long)Var26 + 0x20);
        if ((lVar10 != 0) && (plVar13 = *(long **)(lVar10 + 0x20), plVar13 != (long *)0x0)) {
          uStack_118 = param_3[1];
          uStack_120 = *param_3;
          uStack_108 = param_3[3];
          uStack_110 = param_3[2];
          lVar10 = (**(code **)(*plVar13 + 0x1d8))
                             (plVar13,&uStack_120,(long)sStack_122,*(undefined8 *)(*plVar13 + 0x1e0)
                             );
          return lVar10;
        }
        auVar24 = func_0x00f78af4();
        plVar13 = auVar24._8_8_;
        lVar10 = auVar24._0_8_;
        if ((bRam0000000003eb4e73 & 1) == 0) {
          func_0x00f78a20(0x3d3b110);
          func_0x00f78a20(0x3d1f498);
          func_0x00f78a20(0x3d66320);
          func_0x00f78a20(0x3d663f8);
          func_0x00f78a20(0x3d66300);
          func_0x00f78a20(0x3d66318);
          func_0x00f78a20(0x3d663f0);
          func_0x00f78a20(0x3d6b9f8);
          bRam0000000003eb4e73 = 1;
        }
        lStack_180 = 0;
        lStack_178 = 0;
        uStack_188 = 0;
        uStack_184 = 0;
        if (*(long *)(lVar10 + 0x20) == 0) {
code_r0x0152a8c4:
          plVar14 = plVar13;
          func_0x00f78af4();
code_r0x0152a8c8:
          uVar11 = func_0x00f78b24();
code_r0x0152a8d4:
          auVar25 = func_0x00f78ac0(uVar11,0);
          lVar20 = auVar25._8_8_;
          auVar24._8_8_ = plVar14;
          auVar24._0_8_ = auVar25._0_8_;
        }
        else {
          lVar20 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar10 + 0x20),0);
          if ((int)lVar20 == 0) {
            return lVar20;
          }
          if (*(long *)(lVar10 + 0xb0) == 0) goto code_r0x0152a8c4;
          /*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(lVar10 + 0xb0),*(undefined8 *)(lVar10 + 0xe0),0);
          if (plVar13 == (long *)0x0) goto code_r0x0152a8c4;
          lVar20 = *(long *)(lVar10 + 0xe0);
          if ((int)plVar13[2] != 2) {
            /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(lVar10,lVar20,&lStack_178,&lStack_180);
            if (*(long *)(lVar10 + 0xe0) == 0) goto code_r0x0152a8c4;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar10 + 0xe0),uRam0000000003d3b110);
            lVar20 = lStack_178;
            if ((lStack_178 == 0) || (*(long *)(lVar10 + 0x28) == 0)) goto code_r0x0152a8c4;
            /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar10 + 0x28),*(undefined8 *)(lStack_178 + 0x18),
                            (long)&uStack_188 + 2,0);
            lVar16 = lStack_180;
            if ((lStack_180 == 0) || (*(long *)(lVar10 + 0x28) == 0)) goto code_r0x0152a8c4;
            /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar10 + 0x28),*(undefined8 *)(lStack_180 + 0x18),&uStack_188,
                            0);
            if (*(long *)(lVar10 + 0xb0) == 0) goto code_r0x0152a8c4;
            uVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(lVar10 + 0xb0),lVar20,0);
            if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x0152a8c4;
            /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar10 + 0x28),uVar11,(long)&uStack_184 + 2,0);
            if (*(long *)(lVar10 + 0xb0) == 0) goto code_r0x0152a8c4;
            uVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(lVar10 + 0xb0),lVar16,0);
            if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x0152a8c4;
            /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar10 + 0x28),uVar11,&uStack_184,0);
            plVar14 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
            if (plVar14 == (long *)0x0) goto code_r0x0152a8c4;
            if (/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 == 0) {
code_r0x0152a624:
              uVar22 = plVar14[3];
              if ((int)uVar22 != 0) {
                plVar14[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
                lVar20 = *(long *)(lVar20 + 0x18);
                if (lVar20 != 0) {
                  lVar15 = func_0x00f78adc(lVar20,*(undefined8 *)(*plVar14 + 0x40));
                  if (lVar15 == 0) goto code_r0x0152a8d0;
                  uVar22 = plVar14[3];
                }
                if ((uVar22 & 0xfffffffe) != 0) {
                  plVar14[5] = lVar20;
                  if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
                    lVar20 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar14 + 0x40));
                    if (lVar20 == 0) goto code_r0x0152a8d0;
                    uVar22 = plVar14[3];
                  }
                  if (2 < (uint)uVar22) {
                    plVar14[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
                    lVar20 = *(long *)(lVar16 + 0x18);
                    if (lVar20 != 0) {
                      lVar16 = func_0x00f78adc(lVar20,*(undefined8 *)(*plVar14 + 0x40));
                      if (lVar16 == 0) goto code_r0x0152a8d0;
                      uVar22 = plVar14[3];
                    }
                    uVar19 = (uint)uVar22;
                    if ((uVar22 & 0xfffffffc) != 0) {
                      plVar14[7] = lVar20;
                      if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
                        lVar20 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,
                                                 *(undefined8 *)(*plVar14 + 0x40));
                        if (lVar20 == 0) goto code_r0x0152a8d0;
                        uVar19 = (uint)plVar14[3];
                      }
                      if (4 < uVar19) {
                        plVar14[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
                        lVar20 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_184 + 2,0);
                        if (lVar20 != 0) {
                          lVar16 = func_0x00f78adc(lVar20,*(undefined8 *)(*plVar14 + 0x40));
                          if (lVar16 == 0) goto code_r0x0152a8d0;
                        }
                        uVar19 = *(uint *)(plVar14 + 3);
                        if (5 < uVar19) {
                          plVar14[9] = lVar20;
                          if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                            lVar20 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,
                                                     *(undefined8 *)(*plVar14 + 0x40));
                            if (lVar20 == 0) goto code_r0x0152a8d0;
                            uVar19 = *(uint *)(plVar14 + 3);
                          }
                          if (6 < uVar19) {
                            plVar14[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                            lVar20 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_184,0);
                            if (lVar20 != 0) {
                              lVar16 = func_0x00f78adc(lVar20,*(undefined8 *)(*plVar14 + 0x40));
                              if (lVar16 == 0) goto code_r0x0152a8d0;
                            }
                            uVar19 = (uint)plVar14[3];
                            if ((plVar14[3] & 0xfffffff8U) != 0) {
                              plVar14[0xb] = lVar20;
                              if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                                lVar20 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,
                                                         *(undefined8 *)(*plVar14 + 0x40));
                                if (lVar20 == 0) goto code_r0x0152a8d0;
                                uVar19 = (uint)plVar14[3];
                              }
                              if (8 < uVar19) {
                                plVar14[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                                lVar20 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_188 + 2,0);
                                if (lVar20 != 0) {
                                  lVar16 = func_0x00f78adc(lVar20,*(undefined8 *)(*plVar14 + 0x40));
                                  if (lVar16 == 0) goto code_r0x0152a8d0;
                                }
                                uVar19 = *(uint *)(plVar14 + 3);
                                if (9 < uVar19) {
                                  plVar14[0xd] = lVar20;
                                  if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                                    lVar20 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                             *(undefined8 *)(*plVar14 + 0x40));
                                    if (lVar20 == 0) goto code_r0x0152a8d0;
                                    uVar19 = *(uint *)(plVar14 + 3);
                                  }
                                  if (10 < uVar19) {
                                    plVar14[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                                    lVar20 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_188,0);
                                    if (lVar20 != 0) {
                                      lVar16 = func_0x00f78adc(lVar20,*(undefined8 *)
                                                                       (*plVar14 + 0x40));
                                      if (lVar16 == 0) goto code_r0x0152a8d0;
                                    }
                                    if (0xb < *(uint *)(plVar14 + 3)) {
                                      plVar14[0xf] = lVar20;
                                      /*System.String$$Concat*/ func_0x029cfadc(plVar14,0);
                                      plVar13 = plVar14;
                                      if ((*(long *)(lVar10 + 0x20) != 0) &&
                                         (plVar14 = *(long **)(*(long *)(lVar10 + 0x20) + 0x20),
                                         plVar14 != (long *)0x0)) {
                                        lVar10 = (**(code **)(*plVar14 + 0x1c8))
                                                           (plVar14,(long)uStack_188._2_2_,
                                                            (long)uStack_184._2_2_,
                                                            (long)(short)uStack_188,
                                                            (long)(short)uStack_184,&UNK_00001770,
                                                            *(undefined8 *)(*plVar14 + 0x1d0));
                                        return lVar10;
                                      }
                                      goto code_r0x0152a8c4;
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
                }
              }
              goto code_r0x0152a8c8;
            }
            lVar15 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar14 + 0x40));
            if (lVar15 != 0) goto code_r0x0152a624;
code_r0x0152a8d0:
            uVar11 = func_0x00f78b14();
            goto code_r0x0152a8d4;
          }
        }
        lVar10 = auVar24._0_8_;
        uVar22 = 0x3eb4000;
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
        uStack_210 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_238 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        lStack_270 = 0;
        uStack_268 = 0;
        uStack_280 = 0;
        uStack_278 = 0;
        aiStack_290[3] = 0;
        if (*(long *)(lVar10 + 0xb8) == 0) goto code_r0x0152ae30;
        uVar22 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(lVar10 + 0xb8),uRam0000000003d2e6f8);
        lVar16 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        auVar6._8_8_ = lVar16;
        auVar6._0_8_ = lVar10;
        auVar5._8_8_ = lVar16;
        auVar5._0_8_ = lVar10;
        auVar4._8_8_ = lVar16;
        auVar4._0_8_ = lVar10;
        auVar3._8_8_ = lVar16;
        auVar3._0_8_ = lVar10;
        auVar2._8_8_ = lVar16;
        auVar2._0_8_ = lVar10;
        auVar25._8_8_ = lVar16;
        auVar25._0_8_ = lVar10;
        auVar24._8_8_ = lVar16;
        auVar24._0_8_ = lVar10;
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(lVar16,lVar20,uRam0000000003d3b0f8);
        if ((*(long *)(lVar10 + 0x20) == 0) ||
           (lVar15 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), auVar24 = auVar25, lVar15 == 0))
        goto code_r0x0152ae30;
        lVar15 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar15,0);
        auVar24 = auVar2;
        if (lVar15 == 0) goto code_r0x0152ae30;
        uVar22 = 0x3d6c000;
        aiStack_204[0] = *(int *)(lVar15 + 0x18);
        uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_204,0);
        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar11,0);
        auVar24 = auVar3;
        if ((*(long *)(lVar10 + 0x20) == 0) ||
           (lVar15 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), auVar24 = auVar4, lVar15 == 0))
        goto code_r0x0152ae30;
        lVar15 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar15,0);
        auVar24 = auVar5;
        if (lVar15 == 0) goto code_r0x0152ae30;
        uVar22 = 0x3d32bf8;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_2b8,lVar15,uRam0000000003d3b6b8);
        uStack_228 = uStack_2b0;
        uStack_230 = uStack_2b8;
        uStack_218 = uStack_2a0;
        uStack_220 = uStack_2a8;
        uStack_210 = uStack_298;
        goto code_r0x0152aba4;
      }
      uVar22 = uVar22 + 1;
      lVar10 = /*Atlas.UI.VotingManager.VoteOptionIds$$Reset*/ func_0x0156dc24(lVar20 + lVar16,0);
      lVar20 = *(long *)(param_1 + 0x18);
      lVar16 = lVar16 + 0x10;
    } while (lVar20 != 0);
  }
  lVar10 = func_0x00f78af4();
  return lVar10;
code_r0x0152aba4:
  uVar17 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_230,uRam0000000003d32bf8);
  if ((uVar17 & 1) != 0) {
    sVar7 = uStack_218._4_2_;
    sVar1 = (short)uStack_218;
    if (uStack_218._4_2_ != uStack_220._4_2_) {
      sVar1 = uStack_220._4_2_;
    }
    if (*(long *)(lVar10 + 0xb8) == 0) {
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
    iVar21 = (int)sVar1;
    uVar17 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(lVar10 + 0xb8),iVar21,uRam0000000003d2e700);
    if ((uVar17 & 1) == 0) {
      if (*(long *)(lVar10 + 0xb8) == 0) {
        func_0x00f78af4();
        goto code_r0x0152af9c;
      }
      /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(lVar10 + 0xb8),iVar21,0,uRam0000000003d2e6f0);
    }
    lVar15 = *(long *)(lVar10 + 0xb8);
    if (lVar15 == 0) {
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
    aiStack_204[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar15,iVar21,uRam0000000003d2e748);
    /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar15,iVar21,aiStack_204[0] + 1,uRam0000000003d2e750);
    if (*(long *)(lVar10 + 0x28) == 0) {
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
    /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar10 + 0x28),(int)sVar7,&uStack_238,0);
    if (lVar16 == 0) {
      func_0x00f78af4();
      goto code_r0x0152af9c;
    }
    uVar19 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar19) {
      uVar23 = 0;
      do {
        if (uVar19 <= uVar23) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar15 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar23 * 8 + 0x20);
        if (lVar15 == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        uVar17 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar15 + 0x18),uStack_238,0);
        if ((uVar17 & 1) != 0) {
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_238,0);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar16,uVar23,uRam0000000003d3b130);
          break;
        }
        uVar23 = uVar23 + 1;
        uVar19 = *(uint *)(lVar16 + 0x18);
      } while ((int)uVar23 < (int)uVar19);
    }
    goto code_r0x0152aba4;
  }
  aiStack_290[0] = 0x136;
  /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_230,uRam0000000003d32bf0);
  aiStack_290[3] = 0;
  auVar24 = auVar6;
  if (*(long *)(lVar10 + 0xb8) != 0) {
    /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_2b8,*(long *)(lVar10 + 0xb8),uRam0000000003d2e710);
    uStack_258 = uStack_2b0;
    uStack_260 = uStack_2b8;
    uStack_248 = uStack_2a0;
    uStack_250 = uStack_2a8;
code_r0x0152ad1c:
    uVar22 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_260,uRam0000000003d33da0);
    if ((uVar22 & 1) != 0) {
      if (*(int *)(lVar10 + 0x10) <= uStack_250._4_4_) {
        if (*(long *)(lVar10 + 0x28) == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar10 + 0x28),(int)(short)uStack_250,&uStack_268,0);
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x0152af9c;
        }
        uVar19 = *(uint *)(lVar16 + 0x18);
        if (0 < (int)uVar19) {
          uVar23 = 0;
          do {
            if (uVar19 <= uVar23) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar15 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar23 * 8 + 0x20);
            if (lVar15 == 0) {
              func_0x00f78af4();
              goto code_r0x0152af9c;
            }
            uVar22 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar15 + 0x18),uStack_268,0);
            if ((uVar22 & 1) != 0) {
              /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_268,0);
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar16,uVar23,uRam0000000003d3b130);
              break;
            }
            uVar23 = uVar23 + 1;
            uVar19 = *(uint *)(lVar16 + 0x18);
          } while ((int)uVar23 < (int)uVar19);
        }
      }
      goto code_r0x0152ad1c;
    }
    auVar24._4_4_ = 0;
    auVar24._0_4_ = aiStack_290[3];
    bVar9 = aiStack_290[3] != 0xffffffff;
    aiStack_290[3] = aiStack_290[3] + 1;
    uVar22 = (ulong)(uint)aiStack_290[3];
    aiStack_290[0] = 0x1d1;
    /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_260,uRam0000000003d33d98);
    if (bVar9) goto code_r0x0152ae34;
    uVar22 = 0;
    iVar21 = 0;
    if (lVar16 != 0) goto code_r0x0152ae5c;
  }
code_r0x0152ae30:
  do {
    func_0x00f78af4();
code_r0x0152ae34:
    lVar16 = auVar24._8_8_;
    if (aiStack_290[(int)auVar24._0_4_] == 0x1d1) {
      uVar22 = auVar24._0_8_;
      aiStack_290[3] = auVar24._0_4_;
    }
    iVar21 = (int)uVar22;
  } while (lVar16 == 0);
code_r0x0152ae5c:
  aiStack_204[0] = *(int *)(lVar16 + 0x18);
  uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_204,0);
  uVar11 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar11,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_280,lVar16,uRam0000000003d3b120);
  while( true ) {
    uVar22 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_280,uRam0000000003d32988);
    if ((uVar22 & 1) == 0) {
      aiStack_290[iVar21] = 0x23d;
      aiStack_290[3] = aiStack_290[3] + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_280,uRam0000000003d32980);
      if (*(int *)(lVar16 + 0x18) < 2) {
        lVar16 = lVar20;
      }
      return lVar16;
    }
    if (lStack_270 == 0) break;
    uVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar11,*(undefined8 *)(lStack_270 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
  }
  func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x152afa0);
  (*pcVar8)();
}



// ============================================================
// RVA: 0x152a238 | Atlas.UI.VotingManager.GetWinningIds
// ============================================================

/* WARNING: Possible PIC construction at 0x0152a348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152a34c) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

undefined1  [16]
Atlas_UI_VotingManager__GetWinningIds(long param_1,undefined8 param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  short sVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 extraout_x1;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  unkbyte10 Var28;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  int aiStack_260 [4];
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  int aiStack_1d4 [5];
  undefined4 uStack_158;
  undefined4 uStack_154;
  long lStack_150;
  long lStack_148;
  short sStack_f2;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  short sStack_62;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar20 = &uStack_40;
  if ((bRam0000000003eb4e71 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4e71 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(param_1 + 0x28),(int)(short)param_2,&uStack_40,0);
    param_3 = puVar20;
    if (*(long *)(param_1 + 0x28) != 0) {
      /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(param_1 + 0x28),(int)param_2 >> 0x10,&uStack_38,0);
      uVar11 = uStack_40;
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
      auVar25._0_8_ = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uStack_38,0);
      auVar25._8_8_ = uVar11;
      return auVar25;
    }
  }
  auVar25 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_VotingManager__CastVote;
  sStack_62 = 0;
  lVar12 = *(long *)(auVar25._0_8_ + 0x28);
  lStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar12 == 0) {
    Var28 = func_0x00f78af4();
  }
  else {
    /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(lVar12,auVar25._8_8_,&sStack_62,0);
    Var28 = CONCAT28(sStack_62,auVar25._0_8_);
    uStack_88 = param_3[1];
    uStack_90 = *param_3;
    uStack_78 = param_3[3];
    uStack_80 = param_3[2];
    param_3 = &uStack_90;
  }
  sStack_f2 = (short)((unkuint10)Var28 >> 0x40);
  if ((bRam0000000003eb4e74 & 1) == 0) {
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d76200);
    bRam0000000003eb4e74 = 1;
  }
  uVar11 = /*System.UInt32$$ToString*/ func_0x02a0b3d0((undefined1 *)((long)param_3 + 0xc),0);
  uVar13 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&sStack_f2,0);
  /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager CastVote ')*/ uRam0000000003d76200,uVar11,/*STR(' ')*/ uRam0000000003d65ed8,uVar13,0);
  lVar12 = *(long *)((long)Var28 + 0x20);
  if ((lVar12 != 0) && (plVar14 = *(long **)(lVar12 + 0x20), plVar14 != (long *)0x0)) {
    uStack_e8 = param_3[1];
    uStack_f0 = *param_3;
    uStack_d8 = param_3[3];
    uStack_e0 = param_3[2];
    auVar25 = (**(code **)(*plVar14 + 0x1d8))
                        (plVar14,&uStack_f0,(long)sStack_f2,*(undefined8 *)(*plVar14 + 0x1e0));
    return auVar25;
  }
  auVar26 = func_0x00f78af4();
  plVar14 = auVar26._8_8_;
  lVar12 = auVar26._0_8_;
  if ((bRam0000000003eb4e73 & 1) == 0) {
    func_0x00f78a20(0x3d3b110);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66320);
    func_0x00f78a20(0x3d663f8);
    func_0x00f78a20(0x3d66300);
    func_0x00f78a20(0x3d66318);
    func_0x00f78a20(0x3d663f0);
    func_0x00f78a20(0x3d6b9f8);
    bRam0000000003eb4e73 = 1;
  }
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  if (*(long *)(lVar12 + 0x20) == 0) {
code_r0x0152a8c4:
    plVar15 = plVar14;
    func_0x00f78af4();
code_r0x0152a8c8:
    uVar11 = func_0x00f78b24();
code_r0x0152a8d4:
    auVar25 = func_0x00f78ac0(uVar11,0);
    lVar19 = auVar25._8_8_;
    auVar26._8_8_ = plVar15;
    auVar26._0_8_ = auVar25._0_8_;
  }
  else {
    auVar25 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar12 + 0x20),0);
    if (auVar25._0_4_ == 0) {
      return auVar25;
    }
    if ((*(long *)(lVar12 + 0xb0) == 0) ||
       (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(lVar12 + 0xb0),*(undefined8 *)(lVar12 + 0xe0),0),
       plVar14 == (long *)0x0)) goto code_r0x0152a8c4;
    lVar19 = *(long *)(lVar12 + 0xe0);
    if ((int)plVar14[2] != 2) {
      /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(lVar12,lVar19,&lStack_148,&lStack_150);
      if ((((*(long *)(lVar12 + 0xe0) == 0) ||
           (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar12 + 0xe0),uRam0000000003d3b110), lVar19 = lStack_148,
           lStack_148 == 0)) || (*(long *)(lVar12 + 0x28) == 0)) ||
         ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar12 + 0x28),*(undefined8 *)(lStack_148 + 0x18),
                           (long)&uStack_158 + 2,0), lVar17 = lStack_150, lStack_150 == 0 ||
          (*(long *)(lVar12 + 0x28) == 0)))) goto code_r0x0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar12 + 0x28),*(undefined8 *)(lStack_150 + 0x18),&uStack_158,0);
      if (*(long *)(lVar12 + 0xb0) == 0) goto code_r0x0152a8c4;
      uVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(lVar12 + 0xb0),lVar19,0);
      if (*(long *)(lVar12 + 0x28) == 0) goto code_r0x0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar12 + 0x28),uVar11,(long)&uStack_154 + 2,0);
      if (*(long *)(lVar12 + 0xb0) == 0) goto code_r0x0152a8c4;
      uVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(lVar12 + 0xb0),lVar17,0);
      if (*(long *)(lVar12 + 0x28) == 0) goto code_r0x0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar12 + 0x28),uVar11,&uStack_154,0);
      plVar15 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
      if (plVar15 == (long *)0x0) goto code_r0x0152a8c4;
      if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
         (lVar16 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar15 + 0x40)),
         lVar16 == 0)) goto code_r0x0152a8d0;
      uVar22 = plVar15[3];
      if ((int)uVar22 == 0) goto code_r0x0152a8c8;
      plVar15[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
      lVar19 = *(long *)(lVar19 + 0x18);
      if (lVar19 != 0) {
        lVar16 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar16 == 0) goto code_r0x0152a8d0;
        uVar22 = plVar15[3];
      }
      if ((uVar22 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
      plVar15[5] = lVar19;
      if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
        lVar19 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar19 == 0) goto code_r0x0152a8d0;
        uVar22 = plVar15[3];
      }
      if ((uint)uVar22 < 3) goto code_r0x0152a8c8;
      plVar15[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
      lVar19 = *(long *)(lVar17 + 0x18);
      if (lVar19 != 0) {
        lVar17 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar17 == 0) goto code_r0x0152a8d0;
        uVar22 = plVar15[3];
      }
      uVar21 = (uint)uVar22;
      if ((uVar22 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
      plVar15[7] = lVar19;
      if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
        lVar19 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar19 == 0) goto code_r0x0152a8d0;
        uVar21 = (uint)plVar15[3];
      }
      if (uVar21 < 5) goto code_r0x0152a8c8;
      plVar15[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
      lVar19 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_154 + 2,0);
      if ((lVar19 == 0) ||
         (lVar17 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 != 0)) {
        uVar21 = *(uint *)(plVar15 + 3);
        if (5 < uVar21) {
          plVar15[9] = lVar19;
          if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
            lVar19 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar15 + 0x40));
            if (lVar19 == 0) goto code_r0x0152a8d0;
            uVar21 = *(uint *)(plVar15 + 3);
          }
          if (6 < uVar21) {
            plVar15[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
            lVar19 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_154,0);
            if ((lVar19 != 0) &&
               (lVar17 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
            goto code_r0x0152a8d0;
            uVar21 = (uint)plVar15[3];
            if ((plVar15[3] & 0xfffffff8U) != 0) {
              plVar15[0xb] = lVar19;
              if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                lVar19 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar15 + 0x40));
                if (lVar19 == 0) goto code_r0x0152a8d0;
                uVar21 = (uint)plVar15[3];
              }
              if (8 < uVar21) {
                plVar15[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                lVar19 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_158 + 2,0);
                if ((lVar19 != 0) &&
                   (lVar17 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
                goto code_r0x0152a8d0;
                uVar21 = *(uint *)(plVar15 + 3);
                if (9 < uVar21) {
                  plVar15[0xd] = lVar19;
                  if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                    lVar19 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,*(undefined8 *)(*plVar15 + 0x40));
                    if (lVar19 == 0) goto code_r0x0152a8d0;
                    uVar21 = *(uint *)(plVar15 + 3);
                  }
                  if (10 < uVar21) {
                    plVar15[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                    lVar19 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_158,0);
                    if ((lVar19 != 0) &&
                       (lVar17 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) goto code_r0x0152a8d0;
                    if (0xb < *(uint *)(plVar15 + 3)) {
                      plVar15[0xf] = lVar19;
                      /*System.String$$Concat*/ func_0x029cfadc(plVar15,0);
                      plVar14 = plVar15;
                      if ((*(long *)(lVar12 + 0x20) != 0) &&
                         (plVar15 = *(long **)(*(long *)(lVar12 + 0x20) + 0x20),
                         plVar15 != (long *)0x0)) {
                        auVar25 = (**(code **)(*plVar15 + 0x1c8))
                                            (plVar15,(long)uStack_158._2_2_,(long)uStack_154._2_2_,
                                             (long)(short)uStack_158,(long)(short)uStack_154,
                                             &UNK_00001770,*(undefined8 *)(*plVar15 + 0x1d0));
                        return auVar25;
                      }
                      goto code_r0x0152a8c4;
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0152a8c8;
      }
code_r0x0152a8d0:
      uVar11 = func_0x00f78b14();
      goto code_r0x0152a8d4;
    }
  }
  lVar12 = auVar26._0_8_;
  uVar22 = 0x3eb4000;
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
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_240 = 0;
  uStack_238 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  aiStack_260[3] = 0;
  if (*(long *)(lVar12 + 0xb8) != 0) {
    uVar22 = 0x3d1d000;
    /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(lVar12 + 0xb8),uRam0000000003d2e6f8);
    lVar17 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
    auVar7._8_8_ = lVar17;
    auVar7._0_8_ = lVar12;
    auVar6._8_8_ = lVar17;
    auVar6._0_8_ = lVar12;
    auVar5._8_8_ = lVar17;
    auVar5._0_8_ = lVar12;
    auVar4._8_8_ = lVar17;
    auVar4._0_8_ = lVar12;
    auVar3._8_8_ = lVar17;
    auVar3._0_8_ = lVar12;
    auVar2._8_8_ = lVar17;
    auVar2._0_8_ = lVar12;
    auVar26._8_8_ = lVar17;
    auVar26._0_8_ = lVar12;
    /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(lVar17,lVar19,uRam0000000003d3b0f8);
    if (((*(long *)(lVar12 + 0x20) != 0) &&
        (lVar16 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), auVar26 = auVar2, lVar16 != 0)) &&
       (lVar16 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar16,0), auVar26 = auVar3, lVar16 != 0)) {
      uVar22 = 0x3d6c000;
      aiStack_1d4[0] = *(int *)(lVar16 + 0x18);
      uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_1d4,0);
      /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar11,0);
      auVar26 = auVar4;
      if (((*(long *)(lVar12 + 0x20) != 0) &&
          (lVar16 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), auVar26 = auVar5, lVar16 != 0)) &&
         (lVar16 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar16,0), auVar26 = auVar6, lVar16 != 0)) {
        uVar22 = 0x3d32bf8;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_288,lVar16,uRam0000000003d3b6b8);
        uStack_1f8 = uStack_280;
        uStack_200 = uStack_288;
        uStack_1e8 = uStack_270;
        uStack_1f0 = uStack_278;
        uStack_1e0 = uStack_268;
code_r0x0152aba4:
        uVar18 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_200,uRam0000000003d32bf8);
        if ((uVar18 & 1) != 0) {
          sVar8 = uStack_1e8._4_2_;
          sVar1 = (short)uStack_1e8;
          if (uStack_1e8._4_2_ != uStack_1f0._4_2_) {
            sVar1 = uStack_1f0._4_2_;
          }
          if (*(long *)(lVar12 + 0xb8) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          iVar23 = (int)sVar1;
          uVar18 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(lVar12 + 0xb8),iVar23,uRam0000000003d2e700);
          if ((uVar18 & 1) == 0) {
            if (*(long *)(lVar12 + 0xb8) == 0) {
              func_0x00f78af4();
              goto code_r0x0152af9c;
            }
            /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(lVar12 + 0xb8),iVar23,0,uRam0000000003d2e6f0);
          }
          lVar16 = *(long *)(lVar12 + 0xb8);
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          aiStack_1d4[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar16,iVar23,uRam0000000003d2e748);
          /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar16,iVar23,aiStack_1d4[0] + 1,uRam0000000003d2e750);
          if (*(long *)(lVar12 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar12 + 0x28),(int)sVar8,&uStack_208,0);
          if (lVar17 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          uVar21 = *(uint *)(lVar17 + 0x18);
          if (0 < (int)uVar21) {
            uVar24 = 0;
            do {
              if (uVar21 <= uVar24) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar16 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar24 * 8 + 0x20);
              if (lVar16 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar18 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar16 + 0x18),uStack_208,0);
              if ((uVar18 & 1) != 0) {
                /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_208,0);
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar17,uVar24,uRam0000000003d3b130);
                break;
              }
              uVar24 = uVar24 + 1;
              uVar21 = *(uint *)(lVar17 + 0x18);
            } while ((int)uVar24 < (int)uVar21);
          }
          goto code_r0x0152aba4;
        }
        aiStack_260[0] = 0x136;
        /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_200,uRam0000000003d32bf0);
        aiStack_260[3] = 0;
        auVar26 = auVar7;
        if (*(long *)(lVar12 + 0xb8) != 0) {
          /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_288,*(long *)(lVar12 + 0xb8),uRam0000000003d2e710);
          uStack_228 = uStack_280;
          uStack_230 = uStack_288;
          uStack_218 = uStack_270;
          uStack_220 = uStack_278;
code_r0x0152ad1c:
          uVar22 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_230,uRam0000000003d33da0);
          if ((uVar22 & 1) != 0) {
            if (*(int *)(lVar12 + 0x10) <= uStack_220._4_4_) {
              if (*(long *)(lVar12 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar12 + 0x28),(int)(short)uStack_220,&uStack_238,0);
              if (lVar17 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar21 = *(uint *)(lVar17 + 0x18);
              if (0 < (int)uVar21) {
                uVar24 = 0;
                do {
                  if (uVar21 <= uVar24) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar16 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar24 * 8 + 0x20);
                  if (lVar16 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar22 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar16 + 0x18),uStack_238,0);
                  if ((uVar22 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_238,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar17,uVar24,uRam0000000003d3b130);
                    break;
                  }
                  uVar24 = uVar24 + 1;
                  uVar21 = *(uint *)(lVar17 + 0x18);
                } while ((int)uVar24 < (int)uVar21);
              }
            }
            goto code_r0x0152ad1c;
          }
          auVar26._4_4_ = 0;
          auVar26._0_4_ = aiStack_260[3];
          bVar10 = aiStack_260[3] != 0xffffffff;
          aiStack_260[3] = aiStack_260[3] + 1;
          uVar22 = (ulong)(uint)aiStack_260[3];
          aiStack_260[0] = 0x1d1;
          /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_230,uRam0000000003d33d98);
          if (bVar10) goto code_r0x0152ae34;
          uVar22 = 0;
          iVar23 = 0;
          if (lVar17 != 0) goto code_r0x0152ae5c;
        }
      }
    }
  }
  do {
    func_0x00f78af4();
code_r0x0152ae34:
    lVar17 = auVar26._8_8_;
    if (aiStack_260[(int)auVar26._0_4_] == 0x1d1) {
      uVar22 = auVar26._0_8_;
      aiStack_260[3] = auVar26._0_4_;
    }
    iVar23 = (int)uVar22;
  } while (lVar17 == 0);
code_r0x0152ae5c:
  aiStack_1d4[0] = *(int *)(lVar17 + 0x18);
  uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_1d4,0);
  uVar11 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar11,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_250,lVar17,uRam0000000003d3b120);
  while( true ) {
    uVar22 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_250,uRam0000000003d32988);
    if ((uVar22 & 1) == 0) {
      aiStack_260[iVar23] = 0x23d;
      aiStack_260[3] = aiStack_260[3] + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_250,uRam0000000003d32980);
      if (*(int *)(lVar17 + 0x18) < 2) {
        lVar17 = lVar19;
      }
      auVar27._8_8_ = extraout_x1;
      auVar27._0_8_ = lVar17;
      return auVar27;
    }
    if (lStack_240 == 0) break;
    uVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar11,*(undefined8 *)(lStack_240 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
  }
  func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x152afa0);
  (*pcVar9)();
}



// ============================================================
// RVA: 0x152a304 | Atlas.UI.VotingManager.CastVote
// ============================================================

/* WARNING: Possible PIC construction at 0x0152a348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152a34c) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long Atlas_UI_VotingManager__CastVote(long param_1,undefined8 param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  short sVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  unkbyte10 Var25;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  int aiStack_220 [4];
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  int aiStack_194 [5];
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  long lStack_108;
  short sStack_b2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  short sStack_22;
  
  sStack_22 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    Var25 = func_0x00f78af4();
    sStack_b2 = (short)((unkuint10)Var25 >> 0x40);
    param_1 = (long)Var25;
  }
  else {
    /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x28),param_2,&sStack_22,0);
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_38 = param_3[3];
    uStack_40 = param_3[2];
    param_3 = &uStack_50;
    sStack_b2 = sStack_22;
  }
  if ((bRam0000000003eb4e74 & 1) == 0) {
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d76200);
    bRam0000000003eb4e74 = 1;
  }
  uVar10 = /*System.UInt32$$ToString*/ func_0x02a0b3d0((undefined1 *)((long)param_3 + 0xc),0);
  uVar11 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&sStack_b2,0);
  /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager CastVote ')*/ uRam0000000003d76200,uVar10,/*STR(' ')*/ uRam0000000003d65ed8,uVar11,0);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (plVar12 = *(long **)(*(long *)(param_1 + 0x20) + 0x20), plVar12 != (long *)0x0)) {
    uStack_a8 = param_3[1];
    uStack_b0 = *param_3;
    uStack_98 = param_3[3];
    uStack_a0 = param_3[2];
    lVar13 = (**(code **)(*plVar12 + 0x1d8))
                       (plVar12,&uStack_b0,(long)sStack_b2,*(undefined8 *)(*plVar12 + 0x1e0));
    return lVar13;
  }
  auVar23 = func_0x00f78af4();
  plVar12 = auVar23._8_8_;
  lVar13 = auVar23._0_8_;
  if ((bRam0000000003eb4e73 & 1) == 0) {
    func_0x00f78a20(0x3d3b110);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66320);
    func_0x00f78a20(0x3d663f8);
    func_0x00f78a20(0x3d66300);
    func_0x00f78a20(0x3d66318);
    func_0x00f78a20(0x3d663f0);
    func_0x00f78a20(0x3d6b9f8);
    bRam0000000003eb4e73 = 1;
  }
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  if (*(long *)(lVar13 + 0x20) == 0) {
code_r0x0152a8c4:
    plVar15 = plVar12;
    func_0x00f78af4();
code_r0x0152a8c8:
    uVar10 = func_0x00f78b24();
code_r0x0152a8d4:
    auVar24 = func_0x00f78ac0(uVar10,0);
    lVar14 = auVar24._8_8_;
    auVar23._8_8_ = plVar15;
    auVar23._0_8_ = auVar24._0_8_;
  }
  else {
    lVar14 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar13 + 0x20),0);
    if ((int)lVar14 == 0) {
      return lVar14;
    }
    if ((*(long *)(lVar13 + 0xb0) == 0) ||
       (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(lVar13 + 0xb0),*(undefined8 *)(lVar13 + 0xe0),0),
       plVar12 == (long *)0x0)) goto code_r0x0152a8c4;
    lVar14 = *(long *)(lVar13 + 0xe0);
    if ((int)plVar12[2] != 2) {
      /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(lVar13,lVar14,&lStack_108,&lStack_110);
      if ((((*(long *)(lVar13 + 0xe0) == 0) ||
           (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar13 + 0xe0),uRam0000000003d3b110), lVar14 = lStack_108,
           lStack_108 == 0)) || (*(long *)(lVar13 + 0x28) == 0)) ||
         ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar13 + 0x28),*(undefined8 *)(lStack_108 + 0x18),
                           (long)&uStack_118 + 2,0), lVar17 = lStack_110, lStack_110 == 0 ||
          (*(long *)(lVar13 + 0x28) == 0)))) goto code_r0x0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar13 + 0x28),*(undefined8 *)(lStack_110 + 0x18),&uStack_118,0);
      if (*(long *)(lVar13 + 0xb0) == 0) goto code_r0x0152a8c4;
      uVar10 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(lVar13 + 0xb0),lVar14,0);
      if (*(long *)(lVar13 + 0x28) == 0) goto code_r0x0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar13 + 0x28),uVar10,(long)&uStack_114 + 2,0);
      if (*(long *)(lVar13 + 0xb0) == 0) goto code_r0x0152a8c4;
      uVar10 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(lVar13 + 0xb0),lVar17,0);
      if (*(long *)(lVar13 + 0x28) == 0) goto code_r0x0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar13 + 0x28),uVar10,&uStack_114,0);
      plVar15 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
      if (plVar15 == (long *)0x0) goto code_r0x0152a8c4;
      if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
         (lVar16 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar15 + 0x40)),
         lVar16 == 0)) goto code_r0x0152a8d0;
      uVar20 = plVar15[3];
      if ((int)uVar20 == 0) goto code_r0x0152a8c8;
      plVar15[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
      lVar14 = *(long *)(lVar14 + 0x18);
      if (lVar14 != 0) {
        lVar16 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar16 == 0) goto code_r0x0152a8d0;
        uVar20 = plVar15[3];
      }
      if ((uVar20 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
      plVar15[5] = lVar14;
      if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
        lVar14 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar14 == 0) goto code_r0x0152a8d0;
        uVar20 = plVar15[3];
      }
      if ((uint)uVar20 < 3) goto code_r0x0152a8c8;
      plVar15[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
      lVar14 = *(long *)(lVar17 + 0x18);
      if (lVar14 != 0) {
        lVar17 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar17 == 0) goto code_r0x0152a8d0;
        uVar20 = plVar15[3];
      }
      uVar19 = (uint)uVar20;
      if ((uVar20 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
      plVar15[7] = lVar14;
      if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
        lVar14 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar14 == 0) goto code_r0x0152a8d0;
        uVar19 = (uint)plVar15[3];
      }
      if (uVar19 < 5) goto code_r0x0152a8c8;
      plVar15[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
      lVar14 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_114 + 2,0);
      if ((lVar14 == 0) ||
         (lVar17 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar17 != 0)) {
        uVar19 = *(uint *)(plVar15 + 3);
        if (5 < uVar19) {
          plVar15[9] = lVar14;
          if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
            lVar14 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar15 + 0x40));
            if (lVar14 == 0) goto code_r0x0152a8d0;
            uVar19 = *(uint *)(plVar15 + 3);
          }
          if (6 < uVar19) {
            plVar15[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
            lVar14 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_114,0);
            if ((lVar14 != 0) &&
               (lVar17 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
            goto code_r0x0152a8d0;
            uVar19 = (uint)plVar15[3];
            if ((plVar15[3] & 0xfffffff8U) != 0) {
              plVar15[0xb] = lVar14;
              if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                lVar14 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar15 + 0x40));
                if (lVar14 == 0) goto code_r0x0152a8d0;
                uVar19 = (uint)plVar15[3];
              }
              if (8 < uVar19) {
                plVar15[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                lVar14 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_118 + 2,0);
                if ((lVar14 != 0) &&
                   (lVar17 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
                goto code_r0x0152a8d0;
                uVar19 = *(uint *)(plVar15 + 3);
                if (9 < uVar19) {
                  plVar15[0xd] = lVar14;
                  if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                    lVar14 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,*(undefined8 *)(*plVar15 + 0x40));
                    if (lVar14 == 0) goto code_r0x0152a8d0;
                    uVar19 = *(uint *)(plVar15 + 3);
                  }
                  if (10 < uVar19) {
                    plVar15[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                    lVar14 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_118,0);
                    if ((lVar14 != 0) &&
                       (lVar17 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) goto code_r0x0152a8d0;
                    if (0xb < *(uint *)(plVar15 + 3)) {
                      plVar15[0xf] = lVar14;
                      /*System.String$$Concat*/ func_0x029cfadc(plVar15,0);
                      plVar12 = plVar15;
                      if ((*(long *)(lVar13 + 0x20) != 0) &&
                         (plVar15 = *(long **)(*(long *)(lVar13 + 0x20) + 0x20),
                         plVar15 != (long *)0x0)) {
                        lVar13 = (**(code **)(*plVar15 + 0x1c8))
                                           (plVar15,(long)uStack_118._2_2_,(long)uStack_114._2_2_,
                                            (long)(short)uStack_118,(long)(short)uStack_114,
                                            &UNK_00001770,*(undefined8 *)(*plVar15 + 0x1d0));
                        return lVar13;
                      }
                      goto code_r0x0152a8c4;
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0152a8c8;
      }
code_r0x0152a8d0:
      uVar10 = func_0x00f78b14();
      goto code_r0x0152a8d4;
    }
  }
  lVar13 = auVar23._0_8_;
  uVar20 = 0x3eb4000;
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
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  aiStack_220[3] = 0;
  if (*(long *)(lVar13 + 0xb8) != 0) {
    uVar20 = 0x3d1d000;
    /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(lVar13 + 0xb8),uRam0000000003d2e6f8);
    lVar17 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
    auVar6._8_8_ = lVar17;
    auVar6._0_8_ = lVar13;
    auVar5._8_8_ = lVar17;
    auVar5._0_8_ = lVar13;
    auVar4._8_8_ = lVar17;
    auVar4._0_8_ = lVar13;
    auVar3._8_8_ = lVar17;
    auVar3._0_8_ = lVar13;
    auVar2._8_8_ = lVar17;
    auVar2._0_8_ = lVar13;
    auVar24._8_8_ = lVar17;
    auVar24._0_8_ = lVar13;
    auVar23._8_8_ = lVar17;
    auVar23._0_8_ = lVar13;
    /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(lVar17,lVar14,uRam0000000003d3b0f8);
    if (((*(long *)(lVar13 + 0x20) != 0) &&
        (lVar16 = *(long *)(*(long *)(lVar13 + 0x20) + 0x20), auVar23 = auVar24, lVar16 != 0)) &&
       (lVar16 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar16,0), auVar23 = auVar2, lVar16 != 0)) {
      uVar20 = 0x3d6c000;
      aiStack_194[0] = *(int *)(lVar16 + 0x18);
      uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_194,0);
      /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar10,0);
      auVar23 = auVar3;
      if (((*(long *)(lVar13 + 0x20) != 0) &&
          (lVar16 = *(long *)(*(long *)(lVar13 + 0x20) + 0x20), auVar23 = auVar4, lVar16 != 0)) &&
         (lVar16 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar16,0), auVar23 = auVar5, lVar16 != 0)) {
        uVar20 = 0x3d32bf8;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_248,lVar16,uRam0000000003d3b6b8);
        uStack_1b8 = uStack_240;
        uStack_1c0 = uStack_248;
        uStack_1a8 = uStack_230;
        uStack_1b0 = uStack_238;
        uStack_1a0 = uStack_228;
code_r0x0152aba4:
        uVar18 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_1c0,uRam0000000003d32bf8);
        if ((uVar18 & 1) != 0) {
          sVar7 = uStack_1a8._4_2_;
          sVar1 = (short)uStack_1a8;
          if (uStack_1a8._4_2_ != uStack_1b0._4_2_) {
            sVar1 = uStack_1b0._4_2_;
          }
          if (*(long *)(lVar13 + 0xb8) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          iVar21 = (int)sVar1;
          uVar18 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(lVar13 + 0xb8),iVar21,uRam0000000003d2e700);
          if ((uVar18 & 1) == 0) {
            if (*(long *)(lVar13 + 0xb8) == 0) {
              func_0x00f78af4();
              goto code_r0x0152af9c;
            }
            /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(lVar13 + 0xb8),iVar21,0,uRam0000000003d2e6f0);
          }
          lVar16 = *(long *)(lVar13 + 0xb8);
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          aiStack_194[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar16,iVar21,uRam0000000003d2e748);
          /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar16,iVar21,aiStack_194[0] + 1,uRam0000000003d2e750);
          if (*(long *)(lVar13 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar13 + 0x28),(int)sVar7,&uStack_1c8,0);
          if (lVar17 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          uVar19 = *(uint *)(lVar17 + 0x18);
          if (0 < (int)uVar19) {
            uVar22 = 0;
            do {
              if (uVar19 <= uVar22) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar16 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar22 * 8 + 0x20);
              if (lVar16 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar18 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar16 + 0x18),uStack_1c8,0);
              if ((uVar18 & 1) != 0) {
                /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_1c8,0);
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar17,uVar22,uRam0000000003d3b130);
                break;
              }
              uVar22 = uVar22 + 1;
              uVar19 = *(uint *)(lVar17 + 0x18);
            } while ((int)uVar22 < (int)uVar19);
          }
          goto code_r0x0152aba4;
        }
        aiStack_220[0] = 0x136;
        /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_1c0,uRam0000000003d32bf0);
        aiStack_220[3] = 0;
        auVar23 = auVar6;
        if (*(long *)(lVar13 + 0xb8) != 0) {
          /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_248,*(long *)(lVar13 + 0xb8),uRam0000000003d2e710);
          uStack_1e8 = uStack_240;
          uStack_1f0 = uStack_248;
          uStack_1d8 = uStack_230;
          uStack_1e0 = uStack_238;
code_r0x0152ad1c:
          uVar20 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_1f0,uRam0000000003d33da0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(lVar13 + 0x10) <= uStack_1e0._4_4_) {
              if (*(long *)(lVar13 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar13 + 0x28),(int)(short)uStack_1e0,&uStack_1f8,0);
              if (lVar17 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar19 = *(uint *)(lVar17 + 0x18);
              if (0 < (int)uVar19) {
                uVar22 = 0;
                do {
                  if (uVar19 <= uVar22) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar16 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar22 * 8 + 0x20);
                  if (lVar16 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar20 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar16 + 0x18),uStack_1f8,0);
                  if ((uVar20 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_1f8,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar17,uVar22,uRam0000000003d3b130);
                    break;
                  }
                  uVar22 = uVar22 + 1;
                  uVar19 = *(uint *)(lVar17 + 0x18);
                } while ((int)uVar22 < (int)uVar19);
              }
            }
            goto code_r0x0152ad1c;
          }
          auVar23._4_4_ = 0;
          auVar23._0_4_ = aiStack_220[3];
          bVar9 = aiStack_220[3] != 0xffffffff;
          aiStack_220[3] = aiStack_220[3] + 1;
          uVar20 = (ulong)(uint)aiStack_220[3];
          aiStack_220[0] = 0x1d1;
          /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_1f0,uRam0000000003d33d98);
          if (bVar9) goto code_r0x0152ae34;
          uVar20 = 0;
          iVar21 = 0;
          if (lVar17 != 0) goto code_r0x0152ae5c;
        }
      }
    }
  }
  do {
    func_0x00f78af4();
code_r0x0152ae34:
    lVar17 = auVar23._8_8_;
    if (aiStack_220[(int)auVar23._0_4_] == 0x1d1) {
      uVar20 = auVar23._0_8_;
      aiStack_220[3] = auVar23._0_4_;
    }
    iVar21 = (int)uVar20;
  } while (lVar17 == 0);
code_r0x0152ae5c:
  aiStack_194[0] = *(int *)(lVar17 + 0x18);
  uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_194,0);
  uVar10 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar10,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_210,lVar17,uRam0000000003d3b120);
  while( true ) {
    uVar20 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_210,uRam0000000003d32988);
    if ((uVar20 & 1) == 0) {
      aiStack_220[iVar21] = 0x23d;
      aiStack_220[3] = aiStack_220[3] + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_210,uRam0000000003d32980);
      if (*(int *)(lVar17 + 0x18) < 2) {
        lVar17 = lVar14;
      }
      return lVar17;
    }
    if (lStack_200 == 0) break;
    uVar10 = /*System.String$$Concat*/ func_0x029be39c(uVar10,*(undefined8 *)(lStack_200 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
  }
  func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x152afa0);
  (*pcVar8)();
}



// ============================================================
// RVA: 0x152a360 | Atlas.UI.VotingManager.CastVote
// ============================================================

/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long Atlas_UI_VotingManager__CastVote(long param_1,short param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  short sVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  int aiStack_1d0 [4];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  int aiStack_144 [5];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  long lStack_b8;
  short sStack_62;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  sStack_62 = param_2;
  if ((bRam0000000003eb4e74 & 1) == 0) {
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d76200);
    bRam0000000003eb4e74 = 1;
  }
  uVar10 = /*System.UInt32$$ToString*/ func_0x02a0b3d0((long)param_3 + 0xc,0);
  uVar11 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&sStack_62,0);
  /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager CastVote ')*/ uRam0000000003d76200,uVar10,/*STR(' ')*/ uRam0000000003d65ed8,uVar11,0);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (plVar12 = *(long **)(*(long *)(param_1 + 0x20) + 0x20), plVar12 != (long *)0x0)) {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    lVar13 = (**(code **)(*plVar12 + 0x1d8))
                       (plVar12,&uStack_60,(long)sStack_62,*(undefined8 *)(*plVar12 + 0x1e0));
    return lVar13;
  }
  auVar23 = func_0x00f78af4();
  plVar12 = auVar23._8_8_;
  lVar13 = auVar23._0_8_;
  if ((bRam0000000003eb4e73 & 1) == 0) {
    func_0x00f78a20(0x3d3b110);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66320);
    func_0x00f78a20(0x3d663f8);
    func_0x00f78a20(0x3d66300);
    func_0x00f78a20(0x3d66318);
    func_0x00f78a20(0x3d663f0);
    func_0x00f78a20(0x3d6b9f8);
    bRam0000000003eb4e73 = 1;
  }
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  if (*(long *)(lVar13 + 0x20) == 0) {
code_r0x0152a8c4:
    plVar15 = plVar12;
    func_0x00f78af4();
code_r0x0152a8c8:
    uVar10 = func_0x00f78b24();
code_r0x0152a8d4:
    auVar24 = func_0x00f78ac0(uVar10,0);
    lVar14 = auVar24._8_8_;
    auVar23._8_8_ = plVar15;
    auVar23._0_8_ = auVar24._0_8_;
  }
  else {
    lVar14 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar13 + 0x20),0);
    if ((int)lVar14 == 0) {
      return lVar14;
    }
    if ((*(long *)(lVar13 + 0xb0) == 0) ||
       (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(lVar13 + 0xb0),*(undefined8 *)(lVar13 + 0xe0),0),
       plVar12 == (long *)0x0)) goto code_r0x0152a8c4;
    lVar14 = *(long *)(lVar13 + 0xe0);
    if ((int)plVar12[2] != 2) {
      /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(lVar13,lVar14,&lStack_b8,&lStack_c0);
      if ((((*(long *)(lVar13 + 0xe0) == 0) ||
           (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar13 + 0xe0),uRam0000000003d3b110), lVar14 = lStack_b8,
           lStack_b8 == 0)) || (*(long *)(lVar13 + 0x28) == 0)) ||
         ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar13 + 0x28),*(undefined8 *)(lStack_b8 + 0x18),
                           (long)&uStack_c8 + 2,0), lVar17 = lStack_c0, lStack_c0 == 0 ||
          (*(long *)(lVar13 + 0x28) == 0)))) goto code_r0x0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar13 + 0x28),*(undefined8 *)(lStack_c0 + 0x18),&uStack_c8,0);
      if (*(long *)(lVar13 + 0xb0) == 0) goto code_r0x0152a8c4;
      uVar10 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(lVar13 + 0xb0),lVar14,0);
      if (*(long *)(lVar13 + 0x28) == 0) goto code_r0x0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar13 + 0x28),uVar10,(long)&uStack_c4 + 2,0);
      if (*(long *)(lVar13 + 0xb0) == 0) goto code_r0x0152a8c4;
      uVar10 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(lVar13 + 0xb0),lVar17,0);
      if (*(long *)(lVar13 + 0x28) == 0) goto code_r0x0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar13 + 0x28),uVar10,&uStack_c4,0);
      plVar15 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
      if (plVar15 == (long *)0x0) goto code_r0x0152a8c4;
      if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
         (lVar16 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar15 + 0x40)),
         lVar16 == 0)) goto code_r0x0152a8d0;
      uVar20 = plVar15[3];
      if ((int)uVar20 == 0) goto code_r0x0152a8c8;
      plVar15[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
      lVar14 = *(long *)(lVar14 + 0x18);
      if (lVar14 != 0) {
        lVar16 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar16 == 0) goto code_r0x0152a8d0;
        uVar20 = plVar15[3];
      }
      if ((uVar20 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
      plVar15[5] = lVar14;
      if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
        lVar14 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar14 == 0) goto code_r0x0152a8d0;
        uVar20 = plVar15[3];
      }
      if ((uint)uVar20 < 3) goto code_r0x0152a8c8;
      plVar15[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
      lVar14 = *(long *)(lVar17 + 0x18);
      if (lVar14 != 0) {
        lVar17 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar17 == 0) goto code_r0x0152a8d0;
        uVar20 = plVar15[3];
      }
      uVar19 = (uint)uVar20;
      if ((uVar20 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
      plVar15[7] = lVar14;
      if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
        lVar14 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar14 == 0) goto code_r0x0152a8d0;
        uVar19 = (uint)plVar15[3];
      }
      if (uVar19 < 5) goto code_r0x0152a8c8;
      plVar15[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
      lVar14 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_c4 + 2,0);
      if ((lVar14 == 0) ||
         (lVar17 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar17 != 0)) {
        uVar19 = *(uint *)(plVar15 + 3);
        if (5 < uVar19) {
          plVar15[9] = lVar14;
          if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
            lVar14 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar15 + 0x40));
            if (lVar14 == 0) goto code_r0x0152a8d0;
            uVar19 = *(uint *)(plVar15 + 3);
          }
          if (6 < uVar19) {
            plVar15[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
            lVar14 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_c4,0);
            if ((lVar14 != 0) &&
               (lVar17 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
            goto code_r0x0152a8d0;
            uVar19 = (uint)plVar15[3];
            if ((plVar15[3] & 0xfffffff8U) != 0) {
              plVar15[0xb] = lVar14;
              if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                lVar14 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar15 + 0x40));
                if (lVar14 == 0) goto code_r0x0152a8d0;
                uVar19 = (uint)plVar15[3];
              }
              if (8 < uVar19) {
                plVar15[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                lVar14 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_c8 + 2,0);
                if ((lVar14 != 0) &&
                   (lVar17 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
                goto code_r0x0152a8d0;
                uVar19 = *(uint *)(plVar15 + 3);
                if (9 < uVar19) {
                  plVar15[0xd] = lVar14;
                  if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                    lVar14 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,*(undefined8 *)(*plVar15 + 0x40));
                    if (lVar14 == 0) goto code_r0x0152a8d0;
                    uVar19 = *(uint *)(plVar15 + 3);
                  }
                  if (10 < uVar19) {
                    plVar15[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                    lVar14 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_c8,0);
                    if ((lVar14 != 0) &&
                       (lVar17 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) goto code_r0x0152a8d0;
                    if (0xb < *(uint *)(plVar15 + 3)) {
                      plVar15[0xf] = lVar14;
                      /*System.String$$Concat*/ func_0x029cfadc(plVar15,0);
                      plVar12 = plVar15;
                      if ((*(long *)(lVar13 + 0x20) != 0) &&
                         (plVar15 = *(long **)(*(long *)(lVar13 + 0x20) + 0x20),
                         plVar15 != (long *)0x0)) {
                        lVar13 = (**(code **)(*plVar15 + 0x1c8))
                                           (plVar15,(long)uStack_c8._2_2_,(long)uStack_c4._2_2_,
                                            (long)(short)uStack_c8,(long)(short)uStack_c4,
                                            &UNK_00001770,*(undefined8 *)(*plVar15 + 0x1d0));
                        return lVar13;
                      }
                      goto code_r0x0152a8c4;
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0152a8c8;
      }
code_r0x0152a8d0:
      uVar10 = func_0x00f78b14();
      goto code_r0x0152a8d4;
    }
  }
  lVar13 = auVar23._0_8_;
  uVar20 = 0x3eb4000;
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
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  aiStack_1d0[3] = 0;
  if (*(long *)(lVar13 + 0xb8) != 0) {
    uVar20 = 0x3d1d000;
    /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(lVar13 + 0xb8),uRam0000000003d2e6f8);
    lVar17 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
    auVar6._8_8_ = lVar17;
    auVar6._0_8_ = lVar13;
    auVar5._8_8_ = lVar17;
    auVar5._0_8_ = lVar13;
    auVar4._8_8_ = lVar17;
    auVar4._0_8_ = lVar13;
    auVar3._8_8_ = lVar17;
    auVar3._0_8_ = lVar13;
    auVar2._8_8_ = lVar17;
    auVar2._0_8_ = lVar13;
    auVar24._8_8_ = lVar17;
    auVar24._0_8_ = lVar13;
    auVar23._8_8_ = lVar17;
    auVar23._0_8_ = lVar13;
    /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(lVar17,lVar14,uRam0000000003d3b0f8);
    if (((*(long *)(lVar13 + 0x20) != 0) &&
        (lVar16 = *(long *)(*(long *)(lVar13 + 0x20) + 0x20), auVar23 = auVar24, lVar16 != 0)) &&
       (lVar16 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar16,0), auVar23 = auVar2, lVar16 != 0)) {
      uVar20 = 0x3d6c000;
      aiStack_144[0] = *(int *)(lVar16 + 0x18);
      uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_144,0);
      /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar10,0);
      auVar23 = auVar3;
      if (((*(long *)(lVar13 + 0x20) != 0) &&
          (lVar16 = *(long *)(*(long *)(lVar13 + 0x20) + 0x20), auVar23 = auVar4, lVar16 != 0)) &&
         (lVar16 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar16,0), auVar23 = auVar5, lVar16 != 0)) {
        uVar20 = 0x3d32bf8;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_1f8,lVar16,uRam0000000003d3b6b8);
        uStack_168 = uStack_1f0;
        uStack_170 = uStack_1f8;
        uStack_158 = uStack_1e0;
        uStack_160 = uStack_1e8;
        uStack_150 = uStack_1d8;
code_r0x0152aba4:
        uVar18 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_170,uRam0000000003d32bf8);
        if ((uVar18 & 1) != 0) {
          sVar7 = uStack_158._4_2_;
          sVar1 = (short)uStack_158;
          if (uStack_158._4_2_ != uStack_160._4_2_) {
            sVar1 = uStack_160._4_2_;
          }
          if (*(long *)(lVar13 + 0xb8) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          iVar21 = (int)sVar1;
          uVar18 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(lVar13 + 0xb8),iVar21,uRam0000000003d2e700);
          if ((uVar18 & 1) == 0) {
            if (*(long *)(lVar13 + 0xb8) == 0) {
              func_0x00f78af4();
              goto code_r0x0152af9c;
            }
            /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(lVar13 + 0xb8),iVar21,0,uRam0000000003d2e6f0);
          }
          lVar16 = *(long *)(lVar13 + 0xb8);
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          aiStack_144[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar16,iVar21,uRam0000000003d2e748);
          /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar16,iVar21,aiStack_144[0] + 1,uRam0000000003d2e750);
          if (*(long *)(lVar13 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar13 + 0x28),(int)sVar7,&uStack_178,0);
          if (lVar17 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          uVar19 = *(uint *)(lVar17 + 0x18);
          if (0 < (int)uVar19) {
            uVar22 = 0;
            do {
              if (uVar19 <= uVar22) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar16 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar22 * 8 + 0x20);
              if (lVar16 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar18 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar16 + 0x18),uStack_178,0);
              if ((uVar18 & 1) != 0) {
                /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_178,0);
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar17,uVar22,uRam0000000003d3b130);
                break;
              }
              uVar22 = uVar22 + 1;
              uVar19 = *(uint *)(lVar17 + 0x18);
            } while ((int)uVar22 < (int)uVar19);
          }
          goto code_r0x0152aba4;
        }
        aiStack_1d0[0] = 0x136;
        /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_170,uRam0000000003d32bf0);
        aiStack_1d0[3] = 0;
        auVar23 = auVar6;
        if (*(long *)(lVar13 + 0xb8) != 0) {
          /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_1f8,*(long *)(lVar13 + 0xb8),uRam0000000003d2e710);
          uStack_198 = uStack_1f0;
          uStack_1a0 = uStack_1f8;
          uStack_188 = uStack_1e0;
          uStack_190 = uStack_1e8;
code_r0x0152ad1c:
          uVar20 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_1a0,uRam0000000003d33da0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(lVar13 + 0x10) <= uStack_190._4_4_) {
              if (*(long *)(lVar13 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar13 + 0x28),(int)(short)uStack_190,&uStack_1a8,0);
              if (lVar17 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar19 = *(uint *)(lVar17 + 0x18);
              if (0 < (int)uVar19) {
                uVar22 = 0;
                do {
                  if (uVar19 <= uVar22) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar16 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar22 * 8 + 0x20);
                  if (lVar16 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar20 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar16 + 0x18),uStack_1a8,0);
                  if ((uVar20 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_1a8,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar17,uVar22,uRam0000000003d3b130);
                    break;
                  }
                  uVar22 = uVar22 + 1;
                  uVar19 = *(uint *)(lVar17 + 0x18);
                } while ((int)uVar22 < (int)uVar19);
              }
            }
            goto code_r0x0152ad1c;
          }
          auVar23._4_4_ = 0;
          auVar23._0_4_ = aiStack_1d0[3];
          bVar9 = aiStack_1d0[3] != 0xffffffff;
          aiStack_1d0[3] = aiStack_1d0[3] + 1;
          uVar20 = (ulong)(uint)aiStack_1d0[3];
          aiStack_1d0[0] = 0x1d1;
          /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_1a0,uRam0000000003d33d98);
          if (bVar9) goto code_r0x0152ae34;
          uVar20 = 0;
          iVar21 = 0;
          if (lVar17 != 0) goto code_r0x0152ae5c;
        }
      }
    }
  }
  do {
    func_0x00f78af4();
code_r0x0152ae34:
    lVar17 = auVar23._8_8_;
    if (aiStack_1d0[(int)auVar23._0_4_] == 0x1d1) {
      uVar20 = auVar23._0_8_;
      aiStack_1d0[3] = auVar23._0_4_;
    }
    iVar21 = (int)uVar20;
  } while (lVar17 == 0);
code_r0x0152ae5c:
  aiStack_144[0] = *(int *)(lVar17 + 0x18);
  uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_144,0);
  uVar10 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar10,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1c0,lVar17,uRam0000000003d3b120);
  while( true ) {
    uVar20 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1c0,uRam0000000003d32988);
    if ((uVar20 & 1) == 0) {
      aiStack_1d0[iVar21] = 0x23d;
      aiStack_1d0[3] = aiStack_1d0[3] + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1c0,uRam0000000003d32980);
      if (*(int *)(lVar17 + 0x18) < 2) {
        lVar17 = lVar14;
      }
      return lVar17;
    }
    if (lStack_1b0 == 0) break;
    uVar10 = /*System.String$$Concat*/ func_0x029be39c(uVar10,*(undefined8 *)(lStack_1b0 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
  }
  func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x152afa0);
  (*pcVar8)();
}



// ============================================================
// RVA: 0x152a440 | Atlas.UI.VotingManager.DecideVoteOptions
// ============================================================

/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long * Atlas_UI_VotingManager__DecideVoteOptions(ulong param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int aiStack_160 [4];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int aiStack_d4 [5];
  undefined4 uStack_58;
  undefined4 uStack_54;
  long lStack_50;
  long lStack_48;
  
  if ((bRam0000000003eb4e73 & 1) == 0) {
    func_0x00f78a20(0x3d3b110);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66320);
    func_0x00f78a20(0x3d663f8);
    func_0x00f78a20(0x3d66300);
    func_0x00f78a20(0x3d66318);
    func_0x00f78a20(0x3d663f0);
    func_0x00f78a20(0x3d6b9f8);
    bRam0000000003eb4e73 = 1;
  }
  lStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_0152a8c4:
    plVar7 = param_2;
    func_0x00f78af4();
LAB_0152a8c8:
    uVar6 = func_0x00f78b24();
code_r0x0152a8d4:
    auVar16 = func_0x00f78ac0(uVar6,0);
    plVar5 = auVar16._8_8_;
    param_1 = auVar16._0_8_;
    param_2 = plVar7;
  }
  else {
    plVar5 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(param_1 + 0x20),0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if ((*(long *)(param_1 + 0xb0) == 0) ||
       (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xe0),0),
       param_2 == (long *)0x0)) goto LAB_0152a8c4;
    plVar5 = *(long **)(param_1 + 0xe0);
    if ((int)param_2[2] != 2) {
      /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(param_1,plVar5,&lStack_48,&lStack_50);
      if ((((*(long *)(param_1 + 0xe0) == 0) ||
           (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0xe0),uRam0000000003d3b110), lVar15 = lStack_48,
           lStack_48 == 0)) || (*(long *)(param_1 + 0x28) == 0)) ||
         ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x28),*(undefined8 *)(lStack_48 + 0x18),
                           (long)&uStack_58 + 2,0), lVar9 = lStack_50, lStack_50 == 0 ||
          (*(long *)(param_1 + 0x28) == 0)))) goto LAB_0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x28),*(undefined8 *)(lStack_50 + 0x18),&uStack_58,0);
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0152a8c4;
      uVar6 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(param_1 + 0xb0),lVar15,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x28),uVar6,(long)&uStack_54 + 2,0);
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0152a8c4;
      uVar6 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(param_1 + 0xb0),lVar9,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0152a8c4;
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x28),uVar6,&uStack_54,0);
      plVar7 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
      if (plVar7 == (long *)0x0) goto LAB_0152a8c4;
      if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
         (lVar8 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)
         ) goto LAB_0152a8d0;
      uVar12 = plVar7[3];
      if ((int)uVar12 == 0) goto LAB_0152a8c8;
      plVar7[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
      lVar15 = *(long *)(lVar15 + 0x18);
      if (lVar15 != 0) {
        lVar8 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar8 == 0) goto LAB_0152a8d0;
        uVar12 = plVar7[3];
      }
      if ((uVar12 & 0xfffffffe) == 0) goto LAB_0152a8c8;
      plVar7[5] = lVar15;
      if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
        lVar15 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar15 == 0) goto LAB_0152a8d0;
        uVar12 = plVar7[3];
      }
      if ((uint)uVar12 < 3) goto LAB_0152a8c8;
      plVar7[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
      lVar15 = *(long *)(lVar9 + 0x18);
      if (lVar15 != 0) {
        lVar9 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar9 == 0) goto LAB_0152a8d0;
        uVar12 = plVar7[3];
      }
      uVar11 = (uint)uVar12;
      if ((uVar12 & 0xfffffffc) == 0) goto LAB_0152a8c8;
      plVar7[7] = lVar15;
      if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
        lVar15 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar15 == 0) goto LAB_0152a8d0;
        uVar11 = (uint)plVar7[3];
      }
      if (uVar11 < 5) goto LAB_0152a8c8;
      plVar7[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
      lVar15 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_54 + 2,0);
      if ((lVar15 == 0) ||
         (lVar9 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 != 0)) {
        uVar11 = *(uint *)(plVar7 + 3);
        if (5 < uVar11) {
          plVar7[9] = lVar15;
          if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
            lVar15 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar15 == 0) goto LAB_0152a8d0;
            uVar11 = *(uint *)(plVar7 + 3);
          }
          if (6 < uVar11) {
            plVar7[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
            lVar15 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_54,0);
            if ((lVar15 != 0) &&
               (lVar9 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
            goto LAB_0152a8d0;
            uVar11 = (uint)plVar7[3];
            if ((plVar7[3] & 0xfffffff8U) != 0) {
              plVar7[0xb] = lVar15;
              if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                lVar15 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar7 + 0x40));
                if (lVar15 == 0) goto LAB_0152a8d0;
                uVar11 = (uint)plVar7[3];
              }
              if (8 < uVar11) {
                plVar7[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                lVar15 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_58 + 2,0);
                if ((lVar15 != 0) &&
                   (lVar9 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
                goto LAB_0152a8d0;
                uVar11 = *(uint *)(plVar7 + 3);
                if (9 < uVar11) {
                  plVar7[0xd] = lVar15;
                  if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                    lVar15 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,*(undefined8 *)(*plVar7 + 0x40));
                    if (lVar15 == 0) goto LAB_0152a8d0;
                    uVar11 = *(uint *)(plVar7 + 3);
                  }
                  if (10 < uVar11) {
                    plVar7[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                    lVar15 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_58,0);
                    if ((lVar15 != 0) &&
                       (lVar9 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)
                       ) goto LAB_0152a8d0;
                    if (0xb < *(uint *)(plVar7 + 3)) {
                      plVar7[0xf] = lVar15;
                      /*System.String$$Concat*/ func_0x029cfadc(plVar7,0);
                      param_2 = plVar7;
                      if ((*(long *)(param_1 + 0x20) != 0) &&
                         (plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x20),
                         plVar5 != (long *)0x0)) {
                        plVar5 = (long *)(**(code **)(*plVar5 + 0x1c8))
                                                   (plVar5,(long)uStack_58._2_2_,
                                                    (long)uStack_54._2_2_,(long)(short)uStack_58,
                                                    (long)(short)uStack_54,&UNK_00001770,
                                                    *(undefined8 *)(*plVar5 + 0x1d0));
                        return plVar5;
                      }
                      goto LAB_0152a8c4;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0152a8c8;
      }
LAB_0152a8d0:
      uVar6 = func_0x00f78b14();
      goto code_r0x0152a8d4;
    }
  }
  uVar12 = 0x3eb4000;
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
  aiStack_160[3] = 0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    uVar12 = 0x3d1d000;
    /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(param_1 + 0xb8),uRam0000000003d2e6f8);
    param_2 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
    /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(param_2,plVar5,uRam0000000003d3b0f8);
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar15 != 0)) &&
       (lVar15 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar15,0), lVar15 != 0)) {
      uVar12 = 0x3d6c000;
      aiStack_d4[0] = *(int *)(lVar15 + 0x18);
      uVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_d4,0);
      /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar6,0);
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar15 != 0)) &&
         (lVar15 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar15,0), lVar15 != 0)) {
        uVar12 = 0x3d32bf8;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_188,lVar15,uRam0000000003d3b6b8);
        uStack_f8 = uStack_180;
        uStack_100 = uStack_188;
        uStack_e8 = uStack_170;
        uStack_f0 = uStack_178;
        uStack_e0 = uStack_168;
code_r0x0152aba4:
        uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_100,uRam0000000003d32bf8);
        if ((uVar10 & 1) != 0) {
          sVar2 = uStack_e8._4_2_;
          sVar1 = (short)uStack_e8;
          if (uStack_e8._4_2_ != uStack_f0._4_2_) {
            sVar1 = uStack_f0._4_2_;
          }
          if (*(long *)(param_1 + 0xb8) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          iVar13 = (int)sVar1;
          uVar10 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(param_1 + 0xb8),iVar13,uRam0000000003d2e700);
          if ((uVar10 & 1) == 0) {
            if (*(long *)(param_1 + 0xb8) == 0) {
              func_0x00f78af4();
              goto code_r0x0152af9c;
            }
            /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(param_1 + 0xb8),iVar13,0,uRam0000000003d2e6f0);
          }
          lVar15 = *(long *)(param_1 + 0xb8);
          if (lVar15 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          aiStack_d4[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar15,iVar13,uRam0000000003d2e748);
          /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar15,iVar13,aiStack_d4[0] + 1,uRam0000000003d2e750);
          if (*(long *)(param_1 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(param_1 + 0x28),(int)sVar2,&uStack_108,0);
          if (param_2 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          uVar11 = *(uint *)(param_2 + 3);
          if (0 < (int)uVar11) {
            uVar14 = 0;
            do {
              if (uVar11 <= uVar14) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar15 = *(long *)(param_2[2] + (long)(int)uVar14 * 8 + 0x20);
              if (lVar15 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar15 + 0x18),uStack_108,0);
              if ((uVar10 & 1) != 0) {
                /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_108,0);
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(param_2,uVar14,uRam0000000003d3b130);
                break;
              }
              uVar14 = uVar14 + 1;
              uVar11 = *(uint *)(param_2 + 3);
            } while ((int)uVar14 < (int)uVar11);
          }
          goto code_r0x0152aba4;
        }
        aiStack_160[0] = 0x136;
        /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_100,uRam0000000003d32bf0);
        aiStack_160[3] = 0;
        if (*(long *)(param_1 + 0xb8) != 0) {
          /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_188,*(long *)(param_1 + 0xb8),uRam0000000003d2e710);
          uStack_128 = uStack_180;
          uStack_130 = uStack_188;
          uStack_118 = uStack_170;
          uStack_120 = uStack_178;
code_r0x0152ad1c:
          uVar12 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_130,uRam0000000003d33da0);
          if ((uVar12 & 1) != 0) {
            if (*(int *)(param_1 + 0x10) <= uStack_120._4_4_) {
              if (*(long *)(param_1 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(param_1 + 0x28),(int)(short)uStack_120,&uStack_138,0);
              if (param_2 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar11 = *(uint *)(param_2 + 3);
              if (0 < (int)uVar11) {
                uVar14 = 0;
                do {
                  if (uVar11 <= uVar14) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar15 = *(long *)(param_2[2] + (long)(int)uVar14 * 8 + 0x20);
                  if (lVar15 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar12 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar15 + 0x18),uStack_138,0);
                  if ((uVar12 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_138,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(param_2,uVar14,uRam0000000003d3b130);
                    break;
                  }
                  uVar14 = uVar14 + 1;
                  uVar11 = *(uint *)(param_2 + 3);
                } while ((int)uVar14 < (int)uVar11);
              }
            }
            goto code_r0x0152ad1c;
          }
          param_1 = (ulong)(uint)aiStack_160[3];
          bVar4 = aiStack_160[3] != 0xffffffff;
          aiStack_160[3] = aiStack_160[3] + 1;
          uVar12 = (ulong)(uint)aiStack_160[3];
          aiStack_160[0] = 0x1d1;
          /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_130,uRam0000000003d33d98);
          if (bVar4) goto code_r0x0152ae34;
          uVar12 = 0;
          iVar13 = 0;
          if (param_2 != (long *)0x0) goto code_r0x0152ae5c;
        }
      }
    }
  }
  do {
    func_0x00f78af4();
code_r0x0152ae34:
    if (aiStack_160[(int)(uint)param_1] == 0x1d1) {
      uVar12 = param_1;
      aiStack_160[3] = (uint)param_1;
    }
    iVar13 = (int)uVar12;
  } while (param_2 == (long *)0x0);
code_r0x0152ae5c:
  aiStack_d4[0] = (int)param_2[3];
  uVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_d4,0);
  uVar6 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar6,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_150,param_2,uRam0000000003d3b120);
  while( true ) {
    uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_150,uRam0000000003d32988);
    if ((uVar12 & 1) == 0) {
      aiStack_160[iVar13] = 0x23d;
      aiStack_160[3] = aiStack_160[3] + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_150,uRam0000000003d32980);
      if ((int)param_2[3] < 2) {
        param_2 = plVar5;
      }
      return param_2;
    }
    if (lStack_140 == 0) break;
    uVar6 = /*System.String$$Concat*/ func_0x029be39c(uVar6,*(undefined8 *)(lStack_140 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
  }
  func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x152afa0);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x152a8dc | Atlas.UI.VotingManager.FilterMapsFromTournament
// ============================================================

long Atlas_UI_VotingManager__FilterMapsFromTournament(ulong param_1,long param_2)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long unaff_x20;
  uint uVar11;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int aiStack_100 [4];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int aiStack_74 [5];
  
  uVar10 = 0x3eb4000;
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
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  aiStack_100[3] = 0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    uVar10 = 0x3d1d000;
    /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(param_1 + 0xb8),uRam0000000003d2e6f8);
    unaff_x20 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
    /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(unaff_x20,param_2,uRam0000000003d3b0f8);
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar6 != 0)) &&
       (lVar6 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar6,0), lVar6 != 0)) {
      uVar10 = 0x3d6c000;
      aiStack_74[0] = *(int *)(lVar6 + 0x18);
      uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_74,0);
      /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar7,0);
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar6 != 0)) &&
         (lVar6 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar6,0), lVar6 != 0)) {
        uVar10 = 0x3d32bf8;
        /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_128,lVar6,uRam0000000003d3b6b8);
        uStack_98 = uStack_120;
        uStack_a0 = uStack_128;
        uStack_88 = uStack_110;
        uStack_90 = uStack_118;
        uStack_80 = uStack_108;
LAB_0152aba4:
        uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_a0,uRam0000000003d32bf8);
        if ((uVar8 & 1) != 0) {
          sVar3 = uStack_88._4_2_;
          sVar1 = (short)uStack_88;
          if (uStack_88._4_2_ != uStack_90._4_2_) {
            sVar1 = uStack_90._4_2_;
          }
          if (*(long *)(param_1 + 0xb8) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          iVar9 = (int)sVar1;
          uVar8 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(param_1 + 0xb8),iVar9,uRam0000000003d2e700);
          if ((uVar8 & 1) == 0) {
            if (*(long *)(param_1 + 0xb8) == 0) {
              func_0x00f78af4();
              goto code_r0x0152af9c;
            }
            /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(param_1 + 0xb8),iVar9,0,uRam0000000003d2e6f0);
          }
          lVar6 = *(long *)(param_1 + 0xb8);
          if (lVar6 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          aiStack_74[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar6,iVar9,uRam0000000003d2e748);
          /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar6,iVar9,aiStack_74[0] + 1,uRam0000000003d2e750);
          if (*(long *)(param_1 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(param_1 + 0x28),(int)sVar3,&uStack_a8,0);
          if (unaff_x20 == 0) {
            func_0x00f78af4();
            goto code_r0x0152af9c;
          }
          uVar2 = *(uint *)(unaff_x20 + 0x18);
          if (0 < (int)uVar2) {
            uVar11 = 0;
            do {
              if (uVar2 <= uVar11) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar6 = *(long *)(*(long *)(unaff_x20 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
              if (lVar6 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar6 + 0x18),uStack_a8,0);
              if ((uVar8 & 1) != 0) {
                /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_a8,0);
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(unaff_x20,uVar11,uRam0000000003d3b130);
                break;
              }
              uVar11 = uVar11 + 1;
              uVar2 = *(uint *)(unaff_x20 + 0x18);
            } while ((int)uVar11 < (int)uVar2);
          }
          goto LAB_0152aba4;
        }
        aiStack_100[0] = 0x136;
        /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_a0,uRam0000000003d32bf0);
        aiStack_100[3] = 0;
        if (*(long *)(param_1 + 0xb8) != 0) {
          /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_128,*(long *)(param_1 + 0xb8),uRam0000000003d2e710);
          uStack_c8 = uStack_120;
          uStack_d0 = uStack_128;
          uStack_b8 = uStack_110;
          uStack_c0 = uStack_118;
code_r0x0152ad1c:
          uVar10 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_d0,uRam0000000003d33da0);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(param_1 + 0x10) <= uStack_c0._4_4_) {
              if (*(long *)(param_1 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(param_1 + 0x28),(int)(short)uStack_c0,&uStack_d8,0);
              if (unaff_x20 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar2 = *(uint *)(unaff_x20 + 0x18);
              if (0 < (int)uVar2) {
                uVar11 = 0;
                do {
                  if (uVar2 <= uVar11) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
                  if (lVar6 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar6 + 0x18),uStack_d8,0);
                  if ((uVar10 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_d8,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(unaff_x20,uVar11,uRam0000000003d3b130);
                    break;
                  }
                  uVar11 = uVar11 + 1;
                  uVar2 = *(uint *)(unaff_x20 + 0x18);
                } while ((int)uVar11 < (int)uVar2);
              }
            }
            goto code_r0x0152ad1c;
          }
          param_1 = (ulong)(uint)aiStack_100[3];
          bVar5 = aiStack_100[3] != 0xffffffff;
          aiStack_100[3] = aiStack_100[3] + 1;
          uVar10 = (ulong)(uint)aiStack_100[3];
          aiStack_100[0] = 0x1d1;
          /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_d0,uRam0000000003d33d98);
          if (bVar5) goto code_r0x0152ae34;
          uVar10 = 0;
          iVar9 = 0;
          if (unaff_x20 != 0) goto code_r0x0152ae5c;
        }
      }
    }
  }
  do {
    func_0x00f78af4();
code_r0x0152ae34:
    if (aiStack_100[(int)(uint)param_1] == 0x1d1) {
      uVar10 = param_1;
      aiStack_100[3] = (uint)param_1;
    }
    iVar9 = (int)uVar10;
  } while (unaff_x20 == 0);
code_r0x0152ae5c:
  aiStack_74[0] = *(int *)(unaff_x20 + 0x18);
  uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_74,0);
  uVar7 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar7,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_f0,unaff_x20,uRam0000000003d3b120);
  while( true ) {
    uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_f0,uRam0000000003d32988);
    if ((uVar10 & 1) == 0) {
      aiStack_100[iVar9] = 0x23d;
      aiStack_100[3] = aiStack_100[3] + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,uRam0000000003d32980);
      if (*(int *)(unaff_x20 + 0x18) < 2) {
        unaff_x20 = param_2;
      }
      return unaff_x20;
    }
    if (lStack_e0 == 0) break;
    uVar7 = /*System.String$$Concat*/ func_0x029be39c(uVar7,*(undefined8 *)(lStack_e0 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
  }
  func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x152afa0);
  (*pcVar4)();
}



// ============================================================
// RVA: 0x152b0b8 | Atlas.UI.VotingManager.SelectMapsForVoting
// ============================================================

void Atlas_UI_VotingManager__SelectMapsForVoting
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4e7d & 1) == 0) {
    func_0x00f78a20(0x3d3de78);
    bRam0000000003eb4e7d = 1;
  }
  fVar6 = (float)/*Atlas.UI.VotingManager$$FillWeightedMapList*/ func_0x0152c040(param_1,param_2);
  fVar7 = (float)/*UnityEngine.Random$$get_value*/ func_0x03252940(0);
  auVar10 = /*Atlas.UI.VotingManager$$SelectWeightedMapAndRemove*/ func_0x0152c2b8(fVar6 * fVar7,param_1,*(undefined8 *)(param_1 + 0xe8));
  fVar7 = (float)/*UnityEngine.Random$$get_value*/ func_0x03252940(0);
  uVar2 = /*Atlas.UI.VotingManager$$SelectWeightedMapAndRemove*/ func_0x0152c2b8(fVar7 * (fVar6 - auVar10._8_4_),param_1,*(undefined8 *)(param_1 + 0xe8));
  if (*(long *)(param_1 + 0xe8) == 0) {
    lVar3 = func_0x00f78af4();
    puStack_58 = &Atlas_UI_VotingManager__OnHostMigrationSynced;
    puStack_70 = param_3;
    puStack_68 = param_4;
    puStack_60 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4e76 & 1) == 0) {
      func_0x00f78a20(0x3d2e6f8);
      func_0x00f78a20(0x3d3b518);
      bRam0000000003eb4e76 = 1;
    }
    if ((*(long *)(lVar3 + 0x20) != 0) &&
       (lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x20), lVar4 != 0)) {
      iVar1 = /*Core.Networking.NetworkSession$$GetNetworkStateType*/ func_0x0165e4c8(lVar4,0);
      if (iVar1 != 3) {
        return;
      }
      if (*(long *)(lVar3 + 200) != 0) {
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(lVar3 + 200),uRam0000000003d2e6f8);
        if (*(long *)(lVar3 + 0xc0) != 0) {
          /*System.Collections.Generic.List<NetworkPlayer>$$Clear*/ func_0x02413dcc(*(long *)(lVar3 + 0xc0),uRam0000000003d3b518);
          if ((*(long *)(lVar3 + 0x20) != 0) &&
             (lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x20), lVar4 != 0)) {
            uVar8 = *(undefined8 *)(lVar4 + 0x100);
            uVar2 = *(undefined8 *)(lVar4 + 0xf8);
            *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(lVar4 + 0x108);
            *(undefined8 *)(lVar3 + 0x60) = uVar8;
            *(undefined8 *)(lVar3 + 0x58) = uVar2;
            return;
          }
        }
      }
    }
    auVar9 = func_0x00f78af4();
    puVar5 = auVar9._8_8_;
    lVar4 = auVar9._0_8_;
    uStack_90 = 0x3eb4000;
    puStack_78 = &Atlas_UI_VotingManager__OnVoteStarted;
    uStack_a8 = puVar5[1];
    uStack_b0 = *puVar5;
    uStack_98 = puVar5[3];
    uStack_a0 = puVar5[2];
    lStack_88 = lVar3;
    ppuStack_80 = &puStack_60;
    Atlas_UI_VotingManager__SetVoteData(lVar4,&uStack_b0);
    uVar2 = puVar5[1];
    uVar8 = puVar5[3];
    *(undefined8 *)(lVar4 + 0x60) = puVar5[2];
    *(undefined8 *)(lVar4 + 0x58) = uVar2;
    *(undefined8 *)(lVar4 + 0x68) = uVar8;
    Atlas_UI_VotingManager__set_VotingManagerStage(lVar4,1);
    return;
  }
  /*System.Collections.Generic.List<VotingManager.WeightedMap>$$Clear*/ func_0x025cbf04(*(long *)(param_1 + 0xe8),uRam0000000003d3de78);
  *param_3 = auVar10._0_8_;
  *param_4 = uVar2;
  return;
}



// ============================================================
// RVA: 0x152b18c | Atlas.UI.VotingManager.OnHostMigrationSynced
// ============================================================

void Atlas_UI_VotingManager__OnHostMigrationSynced(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4e76 & 1) == 0) {
    func_0x00f78a20(0x3d2e6f8);
    func_0x00f78a20(0x3d3b518);
    bRam0000000003eb4e76 = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar2 != 0)) {
    iVar1 = /*Core.Networking.NetworkSession$$GetNetworkStateType*/ func_0x0165e4c8(lVar2,0);
    if (iVar1 != 3) {
      return;
    }
    if (*(long *)(param_1 + 200) != 0) {
      /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(param_1 + 200),uRam0000000003d2e6f8);
      if (*(long *)(param_1 + 0xc0) != 0) {
        /*System.Collections.Generic.List<NetworkPlayer>$$Clear*/ func_0x02413dcc(*(long *)(param_1 + 0xc0),uRam0000000003d3b518);
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar2 != 0)) {
          uVar5 = *(undefined8 *)(lVar2 + 0x100);
          uVar4 = *(undefined8 *)(lVar2 + 0xf8);
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar2 + 0x108);
          *(undefined8 *)(param_1 + 0x60) = uVar5;
          *(undefined8 *)(param_1 + 0x58) = uVar4;
          return;
        }
      }
    }
  }
  auVar6 = func_0x00f78af4();
  puVar3 = auVar6._8_8_;
  lVar2 = auVar6._0_8_;
  uStack_40 = 0x3eb4000;
  puStack_28 = &Atlas_UI_VotingManager__OnVoteStarted;
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_48 = puVar3[3];
  uStack_50 = puVar3[2];
  lStack_38 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  Atlas_UI_VotingManager__SetVoteData(lVar2,&uStack_60);
  uVar4 = puVar3[1];
  uVar5 = puVar3[3];
  *(undefined8 *)(lVar2 + 0x60) = puVar3[2];
  *(undefined8 *)(lVar2 + 0x58) = uVar4;
  *(undefined8 *)(lVar2 + 0x68) = uVar5;
  Atlas_UI_VotingManager__set_VotingManagerStage(lVar2,1);
  return;
}



// ============================================================
// RVA: 0x152b24c | Atlas.UI.VotingManager.OnVoteStarted
// ============================================================

void Atlas_UI_VotingManager__OnVoteStarted(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  Atlas_UI_VotingManager__SetVoteData(param_1,&uStack_40);
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  *(undefined8 *)(param_1 + 0x60) = param_2[2];
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  Atlas_UI_VotingManager__set_VotingManagerStage(param_1,1);
  return;
}



// ============================================================
// RVA: 0x152b2a8 | Atlas.UI.VotingManager.OnVoteUpdate
// ============================================================

void Atlas_UI_VotingManager__OnVoteUpdate(long param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *unaff_x26;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined1 auVar23 [16];
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
  undefined8 uStack_100;
  undefined4 uStack_f8;
  long lStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb4e77 & 1) == 0) {
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b690);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d76238);
    bRam0000000003eb4e77 = 1;
  }
  uVar11 = SUB84(param_3,0);
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  if ((param_2 != 0) && (lVar13 = *(long *)(param_2 + 0x10), lVar13 != 0)) {
    uVar12 = (ulong)*(uint *)(lVar13 + 0x18);
    if (0 < (int)*(uint *)(lVar13 + 0x18)) {
      lVar17 = 0;
      uVar18 = 0;
      puVar22 = (undefined8 *)0x3d1f498;
      puVar20 = (undefined8 *)0x3d1f498;
      lVar6 = /*STR('VotingManager OnVoteUpdate')*/ lRam0000000003d76238;
      do {
        uVar11 = SUB84(param_3,0);
        if ((uVar12 & 0xffffffff) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        unaff_x26 = puVar22;
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_0152b5b4;
        param_3 = &lStack_68;
        /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(param_1 + 0x28),
                        (long)*(short *)(*(long *)(lVar13 + 0x10) + lVar17 + 0x24),param_3,0);
        plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
        uVar11 = SUB84(param_3,0);
        if (plVar5 == (long *)0x0) goto LAB_0152b5b4;
        if (lVar6 != 0) {
          lVar13 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar5 + 0x40));
          uVar11 = SUB84(param_3,0);
          if (lVar13 == 0) goto LAB_0152b5b8;
        }
        uVar11 = SUB84(param_3,0);
        uVar12 = plVar5[3];
        if ((int)uVar12 == 0) {
LAB_0152b5ac:
          uVar7 = func_0x00f78b24();
          goto code_r0x0152b5bc;
        }
        plVar5[4] = lVar6;
        if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
          lVar13 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar5 + 0x40));
          uVar11 = SUB84(param_3,0);
          if (lVar13 == 0) goto LAB_0152b5b8;
          uVar12 = plVar5[3];
        }
        uVar11 = SUB84(param_3,0);
        if ((uVar12 & 0xfffffffe) == 0) goto LAB_0152b5ac;
        plVar5[5] = /*STR(' ')*/ lRam0000000003d65ed8;
        lVar13 = *(long *)(param_2 + 0x10);
        unaff_x26 = puVar20;
        if (lVar13 == 0) goto LAB_0152b5b4;
        if (*(uint *)(lVar13 + 0x18) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar13 = *(long *)(lVar13 + 0x10) + lVar17;
        uStack_78 = *(undefined8 *)(lVar13 + 0x20);
        uStack_70 = *(undefined4 *)(lVar13 + 0x28);
        lVar13 = /*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_78,0);
        if (lVar13 != 0) {
          lVar6 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar5 + 0x40));
          uVar11 = SUB84(param_3,0);
          if (lVar6 == 0) goto LAB_0152b5b8;
        }
        uVar11 = SUB84(param_3,0);
        uVar12 = plVar5[3];
        if ((uint)uVar12 < 3) goto LAB_0152b5ac;
        plVar5[6] = lVar13;
        if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
          lVar13 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar5 + 0x40));
          uVar11 = SUB84(param_3,0);
          if (lVar13 == 0) goto LAB_0152b5b8;
          uVar12 = plVar5[3];
        }
        uVar11 = SUB84(param_3,0);
        if ((uVar12 & 0xfffffffc) == 0) goto LAB_0152b5ac;
        plVar5[7] = /*STR(' ')*/ lRam0000000003d65ed8;
        lVar13 = *(long *)(param_2 + 0x10);
        if (lVar13 == 0) goto LAB_0152b5b4;
        if (*(uint *)(lVar13 + 0x18) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar13 = *(long *)(lVar13 + 0x10) + lVar17;
        uStack_78 = *(undefined8 *)(lVar13 + 0x20);
        uStack_70 = *(undefined4 *)(lVar13 + 0x28);
        lVar13 = /*System.Int16$$ToString*/ func_0x02ae8e6c((ulong)&uStack_78 | 4,0);
        if (lVar13 != 0) {
          lVar6 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar5 + 0x40));
          uVar11 = SUB84(param_3,0);
          if (lVar6 == 0) goto LAB_0152b5b8;
        }
        uVar11 = SUB84(param_3,0);
        uVar4 = *(uint *)(plVar5 + 3);
        if (uVar4 < 5) goto LAB_0152b5ac;
        plVar5[8] = lVar13;
        if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
          lVar13 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar5 + 0x40));
          uVar11 = SUB84(param_3,0);
          if (lVar13 == 0) goto LAB_0152b5b8;
          uVar4 = *(uint *)(plVar5 + 3);
        }
        lVar13 = lStack_68;
        uVar11 = SUB84(param_3,0);
        if (uVar4 < 6) goto LAB_0152b5ac;
        plVar5[9] = /*STR(' ')*/ lRam0000000003d65ed8;
        if (lStack_68 != 0) {
          lVar6 = func_0x00f78adc(lStack_68,*(undefined8 *)(*plVar5 + 0x40));
          uVar11 = SUB84(param_3,0);
          if (lVar6 == 0) goto LAB_0152b5b8;
          uVar4 = *(uint *)(plVar5 + 3);
        }
        uVar11 = SUB84(param_3,0);
        if (uVar4 < 7) goto LAB_0152b5ac;
        plVar5[10] = lVar13;
        lVar6 = /*System.String$$Concat*/ func_0x029cfadc(plVar5,0);
        uVar11 = SUB84(param_3,0);
        lVar13 = *(long *)(param_2 + 0x10);
        if (lVar13 == 0) goto LAB_0152b5b4;
        uVar18 = uVar18 + 1;
        uVar12 = (ulong)*(int *)(lVar13 + 0x18);
        lVar17 = lVar17 + 0xc;
      } while ((long)uVar18 < (long)uVar12);
    }
    return;
  }
LAB_0152b5b4:
  func_0x00f78af4();
LAB_0152b5b8:
  uVar7 = func_0x00f78b14();
  puVar22 = unaff_x26;
code_r0x0152b5bc:
  auVar23 = func_0x00f78ac0(uVar7,0);
  lVar17 = auVar23._8_8_;
  lVar13 = auVar23._0_8_;
  uStack_e4 = uVar11;
  if ((bRam0000000003eb4e78 & 1) == 0) {
    func_0x00f78a20(0x3d2fc38);
    func_0x00f78a20(0x3d2fc40);
    func_0x00f78a20(0x3d2fc48);
    func_0x00f78a20(0x3d2fc50);
    func_0x00f78a20(0x3d2fc78);
    func_0x00f78a20(0x3d2fc80);
    func_0x00f78a20(0x3d34e68);
    func_0x00f78a20(0x3d34e70);
    func_0x00f78a20(0x3d34e78);
    func_0x00f78a20(0x3d39348);
    func_0x00f78a20(0x3d39350);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bfb8);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d3b690);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25a38);
    func_0x00f78a20(0x3d761f0);
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d76218);
    func_0x00f78a20(0x3d76208);
    func_0x00f78a20(0x3d76220);
    func_0x00f78a20(0x3d76228);
    func_0x00f78a20(0x3d76210);
    bRam0000000003eb4e78 = 1;
  }
  iStack_e8 = 0;
  lStack_f0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (*(long *)(lVar13 + 0x48) != 0) {
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Clear*/ func_0x01ece8b4(*(long *)(lVar13 + 0x48),uRam0000000003d2fc40);
    lVar6 = *(long *)(lVar13 + 0x18);
    if (lVar6 != 0) {
      uVar12 = 0;
      puVar20 = (undefined8 *)0x3d65ed8;
      puVar21 = (undefined8 *)0x3d65ed8;
      lVar16 = 0x28;
      do {
        puVar22 = puVar20;
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar12) {
          plVar5 = (long *)func_0x00f78ae0(/*Core.Networking.VoteEndReason_TypeInfo*/ uRam0000000003d25a38,&uStack_e4);
          puVar22 = puVar21;
          if (plVar5 != (long *)0x0) {
            uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
            puVar8 = (undefined4 *)func_0x00f78ae4(plVar5);
            uStack_e4 = *puVar8;
            if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) {
              iStack_e8 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18);
              uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e8,0);
              lVar6 = /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager OnAllPlayersVoted1 voteEndReason ')*/ uRam0000000003d76208,uVar7,/*STR('VoteCount: ')*/ uRam0000000003d761f0,uVar9,0);
              lVar16 = *(long *)(lVar17 + 0x10);
              if (lVar16 != 0) {
                lVar19 = 0;
                uVar12 = 0;
                goto code_r0x0152b8d0;
              }
            }
          }
          break;
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto code_r0x0152be14;
        if (*(long *)(lVar13 + 0x48) == 0) break;
        uVar18 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$ContainsKey*/ func_0x01ece954(*(long *)(lVar13 + 0x48),*(undefined8 *)(lVar6 + lVar16),
                                 uRam0000000003d2fc48);
        if ((uVar18 & 1) == 0) {
          lVar6 = *(long *)(lVar13 + 0x18);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar12) goto code_r0x0152be14;
          puVar22 = puVar21;
          if (*(long *)(lVar13 + 0x48) == 0) break;
          /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(*(long *)(lVar13 + 0x48),*(undefined8 *)(lVar6 + lVar16),0,
                          uRam0000000003d2fc38);
        }
        uVar12 = uVar12 + 1;
        lVar6 = *(long *)(lVar13 + 0x18);
        lVar16 = lVar16 + 0x10;
        puVar22 = puVar21;
      } while (lVar6 != 0);
    }
  }
  goto code_r0x0152bb34;
code_r0x0152b8d0:
  do {
    puVar22 = puVar20;
    if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)uVar12) goto code_r0x0152bb38;
    if (*(uint *)(lVar16 + 0x18) <= uVar12) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    puVar22 = puVar21;
    if (*(long *)(lVar13 + 0x28) == 0) break;
    /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar13 + 0x28),
                    (long)*(short *)(*(long *)(lVar16 + 0x10) + lVar19 + 0x24),&lStack_f0,0);
    plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
    if (plVar5 == (long *)0x0) break;
    if ((lVar6 != 0) &&
       (lVar16 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar16 == 0)) {
code_r0x0152be1c:
      uVar7 = func_0x00f78b14();
      goto code_r0x0152be20;
    }
    uVar18 = plVar5[3];
    if ((int)uVar18 == 0) goto code_r0x0152be14;
    plVar5[4] = lVar6;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto code_r0x0152be1c;
      uVar18 = plVar5[3];
    }
    if ((uVar18 & 0xfffffffe) == 0) goto code_r0x0152be14;
    plVar5[5] = /*STR(' ')*/ lRam0000000003d65ed8;
    lVar6 = *(long *)(lVar17 + 0x10);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(lVar6 + 0x10) + lVar19;
    uStack_100 = *(undefined8 *)(lVar6 + 0x20);
    uStack_f8 = *(undefined4 *)(lVar6 + 0x28);
    lVar6 = /*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_100,0);
    if ((lVar6 != 0) &&
       (lVar16 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar16 == 0))
    goto code_r0x0152be1c;
    uVar18 = plVar5[3];
    if ((uint)uVar18 < 3) goto code_r0x0152be14;
    plVar5[6] = lVar6;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto code_r0x0152be1c;
      uVar18 = plVar5[3];
    }
    if ((uVar18 & 0xfffffffc) == 0) goto code_r0x0152be14;
    plVar5[7] = /*STR(' ')*/ lRam0000000003d65ed8;
    lVar6 = *(long *)(lVar17 + 0x10);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(lVar6 + 0x10) + lVar19;
    uStack_100 = *(undefined8 *)(lVar6 + 0x20);
    uStack_f8 = *(undefined4 *)(lVar6 + 0x28);
    lVar6 = /*System.Int16$$ToString*/ func_0x02ae8e6c((ulong)&uStack_100 | 4,0);
    if ((lVar6 != 0) &&
       (lVar16 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar16 == 0))
    goto code_r0x0152be1c;
    uVar4 = *(uint *)(plVar5 + 3);
    if (uVar4 < 5) goto code_r0x0152be14;
    plVar5[8] = lVar6;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto code_r0x0152be1c;
      uVar4 = *(uint *)(plVar5 + 3);
    }
    lVar6 = lStack_f0;
    if (uVar4 < 6) goto code_r0x0152be14;
    plVar5[9] = /*STR(' ')*/ lRam0000000003d65ed8;
    if (lStack_f0 != 0) {
      lVar16 = func_0x00f78adc(lStack_f0,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar16 == 0) goto code_r0x0152be1c;
      uVar4 = *(uint *)(plVar5 + 3);
    }
    if (uVar4 < 7) goto code_r0x0152be14;
    plVar5[10] = lVar6;
    lVar6 = /*System.String$$Concat*/ func_0x029cfadc(plVar5,0);
    lVar16 = lStack_f0;
    lVar14 = *(long *)(lVar13 + 0x48);
    if (lVar14 == 0) break;
    iStack_e8 = /*System.Collections.Generic.Dictionary<Type, int>$$get_Item*/ func_0x01ece608(lVar14,lStack_f0,uRam0000000003d2fc78);
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$set_Item*/ func_0x01ece6a4(lVar14,lVar16,iStack_e8 + 1,uRam0000000003d2fc80);
    uVar12 = uVar12 + 1;
    lVar16 = *(long *)(lVar17 + 0x10);
    lVar19 = lVar19 + 0xc;
  } while (lVar16 != 0);
code_r0x0152bb34:
  do {
    do {
      do {
        func_0x00f78af4();
code_r0x0152bb38:
        lVar17 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar17,uRam0000000003d3bf88);
      } while (*(long *)(lVar13 + 0x48) == 0);
      /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$GetEnumerator*/ func_0x01ecec64(&uStack_158,*(long *)(lVar13 + 0x48),uRam0000000003d2fc50);
      uStack_128 = uStack_150;
      uStack_130 = uStack_158;
      uStack_118 = uStack_140;
      uStack_120 = uStack_148;
      uStack_110 = uStack_138;
      uVar7 = 0xffffffff;
code_r0x0152bbb0:
      while (uVar12 = /*System.Collections.Generic.Dictionary.Enumerator<UIAtlasButton, int>$$MoveNext*/ func_0x01fd38c0(&uStack_130,uRam0000000003d34e70), uVar1 = uStack_118,
            uVar9 = uStack_120, (uVar12 & 1) != 0) {
        iVar15 = (int)uStack_118;
        iStack_e8 = iVar15;
        uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e8,0);
        /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager OnAllPlayersVoted4 ')*/ uRam0000000003d76210,uVar9,*puVar22,uVar10,0);
        iVar3 = (int)uVar7;
        if (iVar3 != iVar15) goto code_r0x0152bc40;
        if (lVar17 == 0) goto code_r0x0152be28;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar17,uVar9,uRam0000000003d3bfa0);
        iStack_e8 = iVar3;
        uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e8,0);
        /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager OnAllPlayersVoted5 ')*/ uRam0000000003d76218,uVar9,*puVar22,uVar10,0);
        if (iVar3 < iVar15) goto code_r0x0152bc4c;
      }
      /*System.Collections.Generic.Dictionary.Enumerator<UIAtlasButton, int>$$Dispose*/ func_0x01fd3a3c(&uStack_130,uRam0000000003d34e68);
    } while (lVar17 == 0);
    uVar11 = 1;
    if (*(int *)(lVar17 + 0x18) < 2) {
      uVar11 = 2;
    }
    *(undefined4 *)(lVar13 + 0xa8) = uVar11;
    iVar3 = /*Atlas.UI.VotingManager.VoteOptionIds$$AreSet*/ func_0x0156dca8(lVar13 + 0x98,0);
    if (iVar3 != 0) {
      Atlas_UI_VotingManager__set_VotingManagerStage(lVar13,2);
    }
  } while (*(long *)(lVar13 + 0x20) == 0);
  iVar3 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(lVar13 + 0x20),0);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(lVar13 + 0xa8) == 1) {
    plVar5 = *(long **)(lVar13 + 0x50);
    if (plVar5 == (long *)0x0) goto code_r0x0152bb34;
    uVar4 = (**(code **)(*plVar5 + 0x188))
                      (plVar5,0,*(undefined4 *)(lVar17 + 0x18),*(undefined8 *)(*plVar5 + 400));
    if (*(uint *)(lVar17 + 0x18) <= uVar4) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar17 = *(long *)(lVar17 + 0x10) + (long)(int)uVar4 * 8;
  }
  else {
    if (*(int *)(lVar17 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
  }
  lVar6 = *(long *)(lVar13 + 0x18);
  if (lVar6 != 0) {
    lVar16 = 0;
    uVar12 = 0;
    uVar7 = *(undefined8 *)(lVar17 + 0x20);
    do {
      if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar12) {
        return;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar12) goto code_r0x0152be14;
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar7,*(undefined8 *)(lVar6 + lVar16 + 0x28),0);
      if (iVar3 != 0) {
        /*System.String$$Concat*/ func_0x029bdb88(/*STR('VotingManager OnAllPlayersVoted7 winningChoice ')*/ uRam0000000003d76228,uVar7,0);
        lVar17 = *(long *)(lVar13 + 0x18);
        if (lVar17 != 0) {
          if ((uint)uVar12 < *(uint *)(lVar17 + 0x18)) {
            /*Atlas.UI.VotingManager$$SetVoteResult*/ func_0x0152beb8(lVar13,*(undefined8 *)(lVar17 + lVar16 + 0x20),
                            *(undefined8 *)(lVar17 + lVar16 + 0x28));
            return;
          }
          goto code_r0x0152be14;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      lVar6 = *(long *)(lVar13 + 0x18);
      lVar16 = lVar16 + 0x10;
    } while (lVar6 != 0);
  }
  goto code_r0x0152bb34;
code_r0x0152bc40:
  if (iVar3 < iVar15) {
    if (lVar17 == 0) {
      func_0x00f78af4();
      goto code_r0x0152be34;
    }
code_r0x0152bc4c:
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar17,uRam0000000003d3bfb8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar17,uVar9,uRam0000000003d3bfa0);
    iStack_e8 = iVar15;
    uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e8,0);
    /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager OnAllPlayersVoted6 ')*/ uRam0000000003d76220,uVar9,*puVar22,uVar7,0);
    uVar7 = uVar1;
  }
  goto code_r0x0152bbb0;
code_r0x0152be14:
  uVar7 = func_0x00f78b24();
code_r0x0152be20:
  func_0x00f78ac0(uVar7,0);
code_r0x0152be28:
  func_0x00f78af4();
code_r0x0152be34:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x152be38);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x152b5c4 | Atlas.UI.VotingManager.OnAllPlayersVoted
// ============================================================

void Atlas_UI_VotingManager__OnAllPlayersVoted(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined8 *unaff_x26;
  undefined8 *puVar19;
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
  undefined4 uStack_78;
  long lStack_70;
  int iStack_68;
  undefined4 uStack_64;
  
  uStack_64 = param_3;
  if ((bRam0000000003eb4e78 & 1) == 0) {
    func_0x00f78a20(0x3d2fc38);
    func_0x00f78a20(0x3d2fc40);
    func_0x00f78a20(0x3d2fc48);
    func_0x00f78a20(0x3d2fc50);
    func_0x00f78a20(0x3d2fc78);
    func_0x00f78a20(0x3d2fc80);
    func_0x00f78a20(0x3d34e68);
    func_0x00f78a20(0x3d34e70);
    func_0x00f78a20(0x3d34e78);
    func_0x00f78a20(0x3d39348);
    func_0x00f78a20(0x3d39350);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bfb8);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d3b690);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25a38);
    func_0x00f78a20(0x3d761f0);
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d76218);
    func_0x00f78a20(0x3d76208);
    func_0x00f78a20(0x3d76220);
    func_0x00f78a20(0x3d76228);
    func_0x00f78a20(0x3d76210);
    bRam0000000003eb4e78 = 1;
  }
  iStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Clear*/ func_0x01ece8b4(*(long *)(param_1 + 0x48),uRam0000000003d2fc40);
    lVar13 = *(long *)(param_1 + 0x18);
    if (lVar13 != 0) {
      uVar14 = 0;
      puVar1 = (undefined8 *)0x3d65ed8;
      puVar19 = (undefined8 *)0x3d65ed8;
      lVar18 = 0x28;
      do {
        unaff_x26 = puVar1;
        if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar14) {
          plVar11 = (long *)func_0x00f78ae0(/*Core.Networking.VoteEndReason_TypeInfo*/ uRam0000000003d25a38,&uStack_64);
          unaff_x26 = puVar19;
          if (plVar11 != (long *)0x0) {
            uVar10 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            puVar7 = (undefined4 *)func_0x00f78ae4(plVar11);
            uStack_64 = *puVar7;
            if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
              iStack_68 = *(int *)(*(long *)(param_2 + 0x10) + 0x18);
              uVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_68,0);
              lVar13 = /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager OnAllPlayersVoted1 voteEndReason ')*/ uRam0000000003d76208,uVar10,/*STR('VoteCount: ')*/ uRam0000000003d761f0,uVar8,0);
              lVar18 = *(long *)(param_2 + 0x10);
              if (lVar18 != 0) {
                lVar15 = 0;
                uVar14 = 0;
                goto code_r0x0152b8d0;
              }
            }
          }
          break;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_0152be14;
        if (*(long *)(param_1 + 0x48) == 0) break;
        uVar6 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$ContainsKey*/ func_0x01ece954(*(long *)(param_1 + 0x48),*(undefined8 *)(lVar13 + lVar18),
                                uRam0000000003d2fc48);
        if ((uVar6 & 1) == 0) {
          lVar13 = *(long *)(param_1 + 0x18);
          if (lVar13 == 0) break;
          if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_0152be14;
          unaff_x26 = puVar19;
          if (*(long *)(param_1 + 0x48) == 0) break;
          /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(*(long *)(param_1 + 0x48),*(undefined8 *)(lVar13 + lVar18),0,
                          uRam0000000003d2fc38);
        }
        uVar14 = uVar14 + 1;
        lVar13 = *(long *)(param_1 + 0x18);
        lVar18 = lVar18 + 0x10;
        unaff_x26 = puVar19;
      } while (lVar13 != 0);
    }
  }
  goto LAB_0152bb34;
code_r0x0152b8d0:
  do {
    unaff_x26 = puVar1;
    if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar14) goto code_r0x0152bb38;
    if (*(uint *)(lVar18 + 0x18) <= uVar14) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    unaff_x26 = puVar19;
    if (*(long *)(param_1 + 0x28) == 0) break;
    /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(param_1 + 0x28),
                    (long)*(short *)(*(long *)(lVar18 + 0x10) + lVar15 + 0x24),&lStack_70,0);
    plVar11 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
    if (plVar11 == (long *)0x0) break;
    if ((lVar13 != 0) &&
       (lVar18 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar18 == 0)) {
code_r0x0152be1c:
      uVar10 = func_0x00f78b14();
      goto code_r0x0152be20;
    }
    uVar6 = plVar11[3];
    if ((int)uVar6 == 0) goto LAB_0152be14;
    plVar11[4] = lVar13;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar13 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar13 == 0) goto code_r0x0152be1c;
      uVar6 = plVar11[3];
    }
    if ((uVar6 & 0xfffffffe) == 0) goto LAB_0152be14;
    plVar11[5] = /*STR(' ')*/ lRam0000000003d65ed8;
    lVar13 = *(long *)(param_2 + 0x10);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar13 = *(long *)(lVar13 + 0x10) + lVar15;
    uStack_80 = *(undefined8 *)(lVar13 + 0x20);
    uStack_78 = *(undefined4 *)(lVar13 + 0x28);
    lVar13 = /*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_80,0);
    if ((lVar13 != 0) &&
       (lVar18 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar18 == 0))
    goto code_r0x0152be1c;
    uVar6 = plVar11[3];
    if ((uint)uVar6 < 3) goto LAB_0152be14;
    plVar11[6] = lVar13;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar13 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar13 == 0) goto code_r0x0152be1c;
      uVar6 = plVar11[3];
    }
    if ((uVar6 & 0xfffffffc) == 0) goto LAB_0152be14;
    plVar11[7] = /*STR(' ')*/ lRam0000000003d65ed8;
    lVar13 = *(long *)(param_2 + 0x10);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar13 = *(long *)(lVar13 + 0x10) + lVar15;
    uStack_80 = *(undefined8 *)(lVar13 + 0x20);
    uStack_78 = *(undefined4 *)(lVar13 + 0x28);
    lVar13 = /*System.Int16$$ToString*/ func_0x02ae8e6c((ulong)&uStack_80 | 4,0);
    if ((lVar13 != 0) &&
       (lVar18 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar18 == 0))
    goto code_r0x0152be1c;
    uVar5 = *(uint *)(plVar11 + 3);
    if (uVar5 < 5) goto LAB_0152be14;
    plVar11[8] = lVar13;
    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
      lVar13 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar13 == 0) goto code_r0x0152be1c;
      uVar5 = *(uint *)(plVar11 + 3);
    }
    lVar13 = lStack_70;
    if (uVar5 < 6) goto LAB_0152be14;
    plVar11[9] = /*STR(' ')*/ lRam0000000003d65ed8;
    if (lStack_70 != 0) {
      lVar18 = func_0x00f78adc(lStack_70,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar18 == 0) goto code_r0x0152be1c;
      uVar5 = *(uint *)(plVar11 + 3);
    }
    if (uVar5 < 7) goto LAB_0152be14;
    plVar11[10] = lVar13;
    lVar13 = /*System.String$$Concat*/ func_0x029cfadc(plVar11,0);
    lVar18 = lStack_70;
    lVar16 = *(long *)(param_1 + 0x48);
    if (lVar16 == 0) break;
    iStack_68 = /*System.Collections.Generic.Dictionary<Type, int>$$get_Item*/ func_0x01ece608(lVar16,lStack_70,uRam0000000003d2fc78);
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$set_Item*/ func_0x01ece6a4(lVar16,lVar18,iStack_68 + 1,uRam0000000003d2fc80);
    uVar14 = uVar14 + 1;
    lVar18 = *(long *)(param_2 + 0x10);
    lVar15 = lVar15 + 0xc;
  } while (lVar18 != 0);
LAB_0152bb34:
  do {
    do {
      do {
        func_0x00f78af4();
code_r0x0152bb38:
        lVar13 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar13,uRam0000000003d3bf88);
      } while (*(long *)(param_1 + 0x48) == 0);
      /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$GetEnumerator*/ func_0x01ecec64(&uStack_d8,*(long *)(param_1 + 0x48),uRam0000000003d2fc50);
      uStack_a8 = uStack_d0;
      uStack_b0 = uStack_d8;
      uStack_98 = uStack_c0;
      uStack_a0 = uStack_c8;
      uStack_90 = uStack_b8;
      uVar10 = 0xffffffff;
code_r0x0152bbb0:
      while (uVar14 = /*System.Collections.Generic.Dictionary.Enumerator<UIAtlasButton, int>$$MoveNext*/ func_0x01fd38c0(&uStack_b0,uRam0000000003d34e70), uVar2 = uStack_98,
            uVar8 = uStack_a0, (uVar14 & 1) != 0) {
        iVar17 = (int)uStack_98;
        iStack_68 = iVar17;
        uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_68,0);
        /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager OnAllPlayersVoted4 ')*/ uRam0000000003d76210,uVar8,*unaff_x26,uVar9,0);
        iVar4 = (int)uVar10;
        if (iVar4 != iVar17) goto code_r0x0152bc40;
        if (lVar13 == 0) goto code_r0x0152be28;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar13,uVar8,uRam0000000003d3bfa0);
        iStack_68 = iVar4;
        uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_68,0);
        /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager OnAllPlayersVoted5 ')*/ uRam0000000003d76218,uVar8,*unaff_x26,uVar9,0);
        if (iVar4 < iVar17) goto code_r0x0152bc4c;
      }
      /*System.Collections.Generic.Dictionary.Enumerator<UIAtlasButton, int>$$Dispose*/ func_0x01fd3a3c(&uStack_b0,uRam0000000003d34e68);
    } while (lVar13 == 0);
    uVar12 = 1;
    if (*(int *)(lVar13 + 0x18) < 2) {
      uVar12 = 2;
    }
    *(undefined4 *)(param_1 + 0xa8) = uVar12;
    iVar4 = /*Atlas.UI.VotingManager.VoteOptionIds$$AreSet*/ func_0x0156dca8(param_1 + 0x98,0);
    if (iVar4 != 0) {
      Atlas_UI_VotingManager__set_VotingManagerStage(param_1,2);
    }
  } while (*(long *)(param_1 + 0x20) == 0);
  iVar4 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(param_1 + 0x20),0);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xa8) == 1) {
    plVar11 = *(long **)(param_1 + 0x50);
    if (plVar11 == (long *)0x0) goto LAB_0152bb34;
    uVar5 = (**(code **)(*plVar11 + 0x188))
                      (plVar11,0,*(undefined4 *)(lVar13 + 0x18),*(undefined8 *)(*plVar11 + 400));
    if (*(uint *)(lVar13 + 0x18) <= uVar5) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar13 = *(long *)(lVar13 + 0x10) + (long)(int)uVar5 * 8;
  }
  else {
    if (*(int *)(lVar13 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
  }
  lVar18 = *(long *)(param_1 + 0x18);
  if (lVar18 != 0) {
    lVar15 = 0;
    uVar14 = 0;
    uVar10 = *(undefined8 *)(lVar13 + 0x20);
    do {
      if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar14) {
        return;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_0152be14;
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar10,*(undefined8 *)(lVar18 + lVar15 + 0x28),0);
      if (iVar4 != 0) {
        /*System.String$$Concat*/ func_0x029bdb88(/*STR('VotingManager OnAllPlayersVoted7 winningChoice ')*/ uRam0000000003d76228,uVar10,0);
        lVar13 = *(long *)(param_1 + 0x18);
        if (lVar13 != 0) {
          if ((uint)uVar14 < *(uint *)(lVar13 + 0x18)) {
            /*Atlas.UI.VotingManager$$SetVoteResult*/ func_0x0152beb8(param_1,*(undefined8 *)(lVar13 + lVar15 + 0x20),
                            *(undefined8 *)(lVar13 + lVar15 + 0x28));
            return;
          }
          goto LAB_0152be14;
        }
        break;
      }
      uVar14 = uVar14 + 1;
      lVar18 = *(long *)(param_1 + 0x18);
      lVar15 = lVar15 + 0x10;
    } while (lVar18 != 0);
  }
  goto LAB_0152bb34;
code_r0x0152bc40:
  if (iVar4 < iVar17) {
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x0152be34;
    }
code_r0x0152bc4c:
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar13,uRam0000000003d3bfb8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar13,uVar8,uRam0000000003d3bfa0);
    iStack_68 = iVar17;
    uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_68,0);
    /*System.String$$Concat*/ func_0x029be818(/*STR('VotingManager OnAllPlayersVoted6 ')*/ uRam0000000003d76220,uVar8,*unaff_x26,uVar10,0);
    uVar10 = uVar2;
  }
  goto code_r0x0152bbb0;
LAB_0152be14:
  uVar10 = func_0x00f78b24();
code_r0x0152be20:
  func_0x00f78ac0(uVar10,0);
code_r0x0152be28:
  func_0x00f78af4();
code_r0x0152be34:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x152be38);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x152be9c | Atlas.UI.VotingManager.IsVoteResultFinal
// ============================================================

/* WARNING: Possible PIC construction at 0x0156dd14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0156dd18) */
/* WARNING: Removing unreachable block (ram,0x0156dd5c) */
/* WARNING: Removing unreachable block (ram,0x0156dd1c) */
/* WARNING: Removing unreachable block (ram,0x0156dd2c) */
/* WARNING: Removing unreachable block (ram,0x0156dd34) */
/* WARNING: Removing unreachable block (ram,0x0156dd3c) */

uint Atlas_UI_VotingManager__IsVoteResultFinal(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    if ((bRam0000000003eb5019 & 1) == 0) {
      func_0x00f78a20(0x3d21270,0);
      bRam0000000003eb5019 = 1;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    if ((bRam0000000003eb574c & 1) == 0) {
      func_0x00f78a20(0x3d21270,uVar2,0);
      bRam0000000003eb574c = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar3,uVar2);
    return uVar1 ^ 1;
  }
  return 0;
}



// ============================================================
// RVA: 0x152beb8 | Atlas.UI.VotingManager.SetVoteResult
// ============================================================

void Atlas_UI_VotingManager__SetVoteResult(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_98 [16];
  undefined2 uStack_82;
  undefined4 uStack_34;
  
  uStack_34 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(param_1 + 0x20),0);
    if (iVar1 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x28),param_3,&uStack_34,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x28),param_2,(long)&uStack_34 + 2,0);
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x20), plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 0x1f8))
                    (plVar2,(long)(short)uStack_34,(long)uStack_34._2_2_,
                     *(undefined8 *)(*plVar2 + 0x200));
          return;
        }
      }
    }
  }
  auVar5 = func_0x00f78af4();
  lVar3 = auVar5._0_8_;
  if ((bRam0000000003eb4e79 & 1) == 0) {
    func_0x00f78a20(0x3d22900);
    func_0x00f78a20(0x3d29740);
    func_0x00f78a20(0x3d76230);
    bRam0000000003eb4e79 = 1;
  }
  uStack_82 = auVar5._8_2_;
  uVar4 = func_0x00f78ae0(/*short_TypeInfo*/ uRam0000000003d22900,&uStack_82);
  /*System.String$$Format*/ func_0x029bc688(/*STR('VotingManager OnVoteFinished winningChoice {0}')*/ uRam0000000003d76230,uVar4,0);
  auStack_98 = Atlas_UI_VotingManager__GetWinningIds(lVar3,auVar5._8_8_ & 0xffffffff);
  *(undefined1 (*) [16])(lVar3 + 0x98) = auStack_98;
  uVar4 = func_0x00f78ae0(/*Atlas.UI.VotingManager.VoteOptionIds_TypeInfo*/ uRam0000000003d29740,auStack_98);
  /*System.String$$Format*/ func_0x029bc688(/*STR('VotingManager OnVoteFinished winningChoice {0}')*/ uRam0000000003d76230,uVar4,0);
  Atlas_UI_VotingManager__set_VotingManagerStage(lVar3,2);
  return;
}



// ============================================================
// RVA: 0x152bf5c | Atlas.UI.VotingManager.OnVoteFinished
// ============================================================

void Atlas_UI_VotingManager__OnVoteFinished(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  undefined2 uStack_42;
  
  if ((bRam0000000003eb4e79 & 1) == 0) {
    func_0x00f78a20(0x3d22900);
    func_0x00f78a20(0x3d29740);
    func_0x00f78a20(0x3d76230);
    bRam0000000003eb4e79 = 1;
  }
  uStack_42 = (undefined2)param_2;
  uVar1 = func_0x00f78ae0(/*short_TypeInfo*/ uRam0000000003d22900,&uStack_42);
  /*System.String$$Format*/ func_0x029bc688(/*STR('VotingManager OnVoteFinished winningChoice {0}')*/ uRam0000000003d76230,uVar1,0);
  auStack_58 = Atlas_UI_VotingManager__GetWinningIds(param_1,param_2);
  *(undefined1 (*) [16])(param_1 + 0x98) = auStack_58;
  uVar1 = func_0x00f78ae0(/*Atlas.UI.VotingManager.VoteOptionIds_TypeInfo*/ uRam0000000003d29740,auStack_58);
  /*System.String$$Format*/ func_0x029bc688(/*STR('VotingManager OnVoteFinished winningChoice {0}')*/ uRam0000000003d76230,uVar1,0);
  Atlas_UI_VotingManager__set_VotingManagerStage(param_1,2);
  return;
}



// ============================================================
// RVA: 0x152c040 | Atlas.UI.VotingManager.FillWeightedMapList
// ============================================================

float Atlas_UI_VotingManager__FillWeightedMapList(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000003eb4e7c & 1) == 0) {
    func_0x00f78a20(0x3d32980);
    func_0x00f78a20(0x3d32988);
    func_0x00f78a20(0x3d32990);
    func_0x00f78a20(0x3d3de70);
    func_0x00f78a20(0x3d3b120);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb4e7c = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  if (param_2 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a0,param_2,uRam0000000003d3b120);
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    lStack_60 = lStack_90;
    fVar6 = 0.0;
    do {
      do {
        uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_70,uRam0000000003d32988);
        lVar1 = lStack_60;
        if ((uVar3 & 1) == 0) {
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_70,uRam0000000003d32980);
          return fVar6;
        }
        if (*(long *)(param_1 + 0xb0) == 0) {
          func_0x00f78af4();
          goto code_r0x0152c250;
        }
        uStack_78 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(param_1 + 0xb0),lStack_60,0);
        uVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_78,0);
      } while ((uVar3 & 1) == 0);
      uVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(uStack_78,/*STR('RaceGameContext')*/ uRam0000000003d71920,0);
      if ((uVar3 & 1) == 0) {
        if (lVar1 == 0) {
          func_0x00f78af4();
          goto code_r0x0152c250;
        }
        lVar4 = *(long *)(param_1 + 0xd0);
        if (*(char *)(lVar1 + 0xa1) == '\0') {
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x0152c250;
          }
          pfVar5 = (float *)(lVar4 + 0x38);
        }
        else {
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x0152c250;
          }
          pfVar5 = (float *)(lVar4 + 0x40);
        }
      }
      else {
        if (lVar1 == 0) {
          func_0x00f78af4();
          goto code_r0x0152c250;
        }
        lVar4 = *(long *)(param_1 + 0xd0);
        if (*(char *)(lVar1 + 0xa1) == '\0') {
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x0152c250;
          }
          pfVar5 = (float *)(lVar4 + 0x34);
        }
        else {
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x0152c250;
          }
          pfVar5 = (float *)(lVar4 + 0x3c);
        }
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,*pfVar5);
      fVar6 = fVar6 + *pfVar5;
      if (*(long *)(param_1 + 0xe8) == 0) goto code_r0x0152c21c;
      /*System.Collections.Generic.List<VotingManager.WeightedMap>$$Add*/ func_0x025cbc10(*(long *)(param_1 + 0xe8),lVar1,uStack_80,uRam0000000003d3de70);
    } while( true );
  }
  func_0x00f78af4();
code_r0x0152c21c:
  func_0x00f78af4();
code_r0x0152c250:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x152c254);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x152c2b8 | Atlas.UI.VotingManager.SelectWeightedMapAndRemove
// ============================================================

/* WARNING: Possible PIC construction at 0x0152c30c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152c310) */
/* WARNING: Removing unreachable block (ram,0x0152c370) */
/* WARNING: Removing unreachable block (ram,0x0152c314) */
/* WARNING: Removing unreachable block (ram,0x0152c32c) */
/* WARNING: Removing unreachable block (ram,0x0152c334) */

ulong Atlas_UI_VotingManager__SelectWeightedMapAndRemove
                (float param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  
  if ((bRam0000000003eb4e7f & 1) == 0) {
    func_0x00f78a20(0x3d3de80);
    func_0x00f78a20(0x3d3de90);
    bRam0000000003eb4e7f = 1;
  }
  if ((bRam0000000003eb4e7e & 1) == 0) {
    func_0x00f78a20(0x3d3de88);
    func_0x00f78a20(0x3d3de90);
    bRam0000000003eb4e7e = 1;
  }
  if (param_3 == 0) {
    uVar2 = func_0x00f78af4();
    if ((bRam0000000003eb4e80 & 1) == 0) {
      func_0x00f78a20(0x3d2e6e0);
      func_0x00f78a20(0x3d2fc20);
      func_0x00f78a20(0x3d1c2a8);
      func_0x00f78a20(0x3d1c4a0);
      func_0x00f78a20(0x3d3b4f0);
      func_0x00f78a20(0x3d3de68);
      func_0x00f78a20(0x3d3b100);
      func_0x00f78a20(0x3d1db90);
      func_0x00f78a20(0x3d1e3d8);
      func_0x00f78a20(0x3d1dc38);
      func_0x00f78a20(0x3d240a8);
      func_0x00f78a20(0x3d1f910);
      bRam0000000003eb4e80 = 1;
    }
    *(undefined4 *)(uVar2 + 0x10) = 2;
    uVar3 = func_0x00f78a34(/*Atlas.UI.VotingManager.VoteOptionIds[]_TypeInfo*/ uRam0000000003d1f910,2);
    *(undefined8 *)(uVar2 + 0x18) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, int>_TypeInfo*/ uRam0000000003d1c4a0);
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar3,uRam0000000003d2fc20);
    *(undefined8 *)(uVar2 + 0x48) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
    /*System.Random$$.ctor*/ func_0x0297f008(uVar3,0);
    *(undefined8 *)(uVar2 + 0x50) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<short, int>_TypeInfo*/ uRam0000000003d1c2a8);
    /*System.Collections.Generic.Dictionary<short, int>$$.ctor*/ func_0x01e7d0ec(uVar3,uRam0000000003d2e6e0);
    *(undefined8 *)(uVar2 + 0xb8) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
    /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412db4(uVar3,uRam0000000003d3b4f0);
    *(undefined8 *)(uVar2 + 0xc0) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<short, int>_TypeInfo*/ uRam0000000003d1c2a8);
    /*System.Collections.Generic.Dictionary<short, int>$$.ctor*/ func_0x01e7d0ec(uVar3,uRam0000000003d2e6e0);
    *(undefined8 *)(uVar2 + 200) = uVar3;
    *(undefined4 *)(uVar2 + 0xd8) = 0x7f7fffff;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
    /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar3,100,uRam0000000003d3b100);
    *(undefined8 *)(uVar2 + 0xe0) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<VotingManager.WeightedMap>_TypeInfo*/ uRam0000000003d1e3d8);
    /*System.Collections.Generic.List<VotingManager.WeightedMap>$$.ctor*/ func_0x025cb014(uVar3,100,uRam0000000003d3de68);
    *(undefined8 *)(uVar2 + 0xe8) = uVar3;
    return uVar2;
  }
  uVar1 = *(uint *)(param_3 + 0x18);
  uVar4 = (ulong)uVar1;
  uVar2 = (ulong)(uVar1 - 1);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    uVar6 = uVar4 - 1;
    fVar8 = 0.0;
    lVar7 = 0x28;
    while( true ) {
      if (uVar4 <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      fVar8 = fVar8 + *(float *)(*(long *)(param_3 + 0x10) + lVar7);
      uVar2 = uVar5;
      if ((param_1 <= fVar8) || (uVar2 = (ulong)(uVar1 - 1), uVar6 == uVar5)) break;
      uVar4 = (ulong)*(uint *)(param_3 + 0x18);
      lVar7 = lVar7 + 0x10;
      uVar5 = uVar5 + 1;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x152c374 | Atlas.UI.VotingManager.SelectWeightedMapIndex
// ============================================================

ulong Atlas_UI_VotingManager__SelectWeightedMapIndex(float param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  
  if ((bRam0000000003eb4e7e & 1) == 0) {
    func_0x00f78a20(0x3d3de88);
    func_0x00f78a20(0x3d3de90);
    bRam0000000003eb4e7e = 1;
  }
  if (param_3 == 0) {
    uVar2 = func_0x00f78af4();
    if ((bRam0000000003eb4e80 & 1) == 0) {
      func_0x00f78a20(0x3d2e6e0);
      func_0x00f78a20(0x3d2fc20);
      func_0x00f78a20(0x3d1c2a8);
      func_0x00f78a20(0x3d1c4a0);
      func_0x00f78a20(0x3d3b4f0);
      func_0x00f78a20(0x3d3de68);
      func_0x00f78a20(0x3d3b100);
      func_0x00f78a20(0x3d1db90);
      func_0x00f78a20(0x3d1e3d8);
      func_0x00f78a20(0x3d1dc38);
      func_0x00f78a20(0x3d240a8);
      func_0x00f78a20(0x3d1f910);
      bRam0000000003eb4e80 = 1;
    }
    *(undefined4 *)(uVar2 + 0x10) = 2;
    uVar3 = func_0x00f78a34(/*Atlas.UI.VotingManager.VoteOptionIds[]_TypeInfo*/ uRam0000000003d1f910,2);
    *(undefined8 *)(uVar2 + 0x18) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, int>_TypeInfo*/ uRam0000000003d1c4a0);
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar3,uRam0000000003d2fc20);
    *(undefined8 *)(uVar2 + 0x48) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
    /*System.Random$$.ctor*/ func_0x0297f008(uVar3,0);
    *(undefined8 *)(uVar2 + 0x50) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<short, int>_TypeInfo*/ uRam0000000003d1c2a8);
    /*System.Collections.Generic.Dictionary<short, int>$$.ctor*/ func_0x01e7d0ec(uVar3,uRam0000000003d2e6e0);
    *(undefined8 *)(uVar2 + 0xb8) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
    /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412db4(uVar3,uRam0000000003d3b4f0);
    *(undefined8 *)(uVar2 + 0xc0) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<short, int>_TypeInfo*/ uRam0000000003d1c2a8);
    /*System.Collections.Generic.Dictionary<short, int>$$.ctor*/ func_0x01e7d0ec(uVar3,uRam0000000003d2e6e0);
    *(undefined8 *)(uVar2 + 200) = uVar3;
    *(undefined4 *)(uVar2 + 0xd8) = 0x7f7fffff;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
    /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar3,100,uRam0000000003d3b100);
    *(undefined8 *)(uVar2 + 0xe0) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<VotingManager.WeightedMap>_TypeInfo*/ uRam0000000003d1e3d8);
    /*System.Collections.Generic.List<VotingManager.WeightedMap>$$.ctor*/ func_0x025cb014(uVar3,100,uRam0000000003d3de68);
    *(undefined8 *)(uVar2 + 0xe8) = uVar3;
    return uVar2;
  }
  uVar1 = *(uint *)(param_3 + 0x18);
  uVar4 = (ulong)uVar1;
  uVar2 = (ulong)(uVar1 - 1);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    uVar6 = uVar4 - 1;
    fVar8 = 0.0;
    lVar7 = 0x28;
    while( true ) {
      if (uVar4 <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      fVar8 = fVar8 + *(float *)(*(long *)(param_3 + 0x10) + lVar7);
      uVar2 = uVar5;
      if ((param_1 <= fVar8) || (uVar2 = (ulong)(uVar1 - 1), uVar6 == uVar5)) break;
      uVar4 = (ulong)*(uint *)(param_3 + 0x18);
      lVar7 = lVar7 + 0x10;
      uVar5 = uVar5 + 1;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x152c440 | Atlas.UI.VotingManager..ctor
// ============================================================

undefined1  [16] Atlas_UI_VotingManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4e80 & 1) == 0) {
    func_0x00f78a20(0x3d2e6e0);
    func_0x00f78a20(0x3d2fc20);
    func_0x00f78a20(0x3d1c2a8);
    func_0x00f78a20(0x3d1c4a0);
    func_0x00f78a20(0x3d3b4f0);
    func_0x00f78a20(0x3d3de68);
    func_0x00f78a20(0x3d3b100);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d1e3d8);
    func_0x00f78a20(0x3d1dc38);
    func_0x00f78a20(0x3d240a8);
    func_0x00f78a20(0x3d1f910);
    bRam0000000003eb4e80 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 2;
  uVar1 = func_0x00f78a34(/*Atlas.UI.VotingManager.VoteOptionIds[]_TypeInfo*/ uRam0000000003d1f910,2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, int>_TypeInfo*/ uRam0000000003d1c4a0);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar1,uRam0000000003d2fc20);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f008(uVar1,0);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<short, int>_TypeInfo*/ uRam0000000003d1c2a8);
  /*System.Collections.Generic.Dictionary<short, int>$$.ctor*/ func_0x01e7d0ec(uVar1,uRam0000000003d2e6e0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
  /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412db4(uVar1,uRam0000000003d3b4f0);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<short, int>_TypeInfo*/ uRam0000000003d1c2a8);
  /*System.Collections.Generic.Dictionary<short, int>$$.ctor*/ func_0x01e7d0ec(uVar1,uRam0000000003d2e6e0);
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined4 *)(param_1 + 0xd8) = 0x7f7fffff;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,100,uRam0000000003d3b100);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<VotingManager.WeightedMap>_TypeInfo*/ uRam0000000003d1e3d8);
  /*System.Collections.Generic.List<VotingManager.WeightedMap>$$.ctor*/ func_0x025cb014(uVar1,100,uRam0000000003d3de68);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



