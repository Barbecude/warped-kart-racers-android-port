// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.MatchMakingManager.<>c__DisplayClass57_0

// ============================================================
// RVA: 0x155ddc8 | Atlas.Networking.MatchMakingManager.<>c__DisplayClass57_0..ctor
// ============================================================

void Atlas_Networking_MatchMakingManager___c__DisplayClass57_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x155ddd0 | Atlas.Networking.MatchMakingManager.<>c__DisplayClass57_0.<Quit>b__0
// ============================================================

void Atlas_Networking_MatchMakingManager___c__DisplayClass57_0___Quit_b__0(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar13;
  undefined8 unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar15 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4fb7 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4fb7 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Atlas_Networking_MatchMakingManager__FireAnalytics(*(long *)(param_1 + 0x10),1,0);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0xb8) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      iVar2 = Atlas_Networking_MatchMakingManager__IsInGroup(lVar4,0);
      if (iVar2 != 0) {
        if (((*(long *)(param_1 + 0x10) == 0) ||
            (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x38), lVar4 == 0)) ||
           (plVar5 = *(long **)(lVar4 + 0x30), plVar5 == (long *)0x0)) goto LAB_0155dec0;
        (**(code **)(*plVar5 + 0x808))(plVar5,*(undefined8 *)(*plVar5 + 0x810));
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        Atlas_Networking_MatchMakingManager__RemoveDelegates(*(long *)(param_1 + 0x10),0);
        if (*(long *)(param_1 + 0x10) != 0) {
          Atlas_Networking_MatchMakingManager__Reset(*(long *)(param_1 + 0x10),0);
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar4 != 0)) {
            /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(lVar4,0);
            lVar4 = *(long *)(param_1 + 0x18);
            if (lVar4 == 0) {
              return;
            }
            goto code_r0x0155dec4;
          }
        }
      }
    }
  }
LAB_0155dec0:
  unaff_x30 = &Atlas_Networking_MatchMakingManager_OnQuit__Invoke;
  lVar4 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  unaff_x19 = param_1;
  unaff_x20 = 0x3eb4000;
  unaff_x29 = puVar15;
code_r0x0155dec4:
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = lVar4;
  lVar8 = *(long *)(lVar4 + 0x68);
  if (lVar8 == 0) {
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    puVar15 = (undefined1 *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = *(long *)(puVar15 + lVar8 * 8);
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar5 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9);
    }
    iVar2 = func_0x00f78a4c(lVar9);
    if (iVar2 == 0) {
      if (((plVar5 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
         (((*(byte *)(*plVar5 + 0x115) & 1) != 0 || (*(long *)(lVar4 + 0x18) == 0))))
      goto code_r0x0155dfcc;
      iVar2 = func_0x00f78a44(lVar9);
      iVar3 = func_0x00f78ec0(lVar9);
      if (iVar2 == 0) {
        uVar1 = *(ushort *)(lVar9 + 0x48);
        if (iVar3 == 0) {
          lVar9 = *plVar5 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar9 + 0x138))(plVar5,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x0155dfd8;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x0155e09c;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar5,lVar9,(ulong)uVar1);
code_r0x0155e09c:
        pcVar13 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar3 == 0) {
          uVar6 = *(undefined8 *)(*plVar5 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155e074;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar5);
code_r0x0155e074:
          uVar6 = *(undefined8 *)(lVar10 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
        pcVar13 = (code *)*puVar7;
      }
      (*pcVar13)(plVar5,puVar7);
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      (*pcVar13)(lVar9);
    }
    else {
code_r0x0155dfcc:
      (*pcVar13)(plVar5,lVar9);
    }
code_r0x0155dfd8:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x155e0c8 | Atlas.Networking.MatchMakingManager.<>c__DisplayClass57_0.<Quit>b__1
// ============================================================

void Atlas_Networking_MatchMakingManager___c__DisplayClass57_0___Quit_b__1(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar13;
  undefined8 unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar15 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4fb8 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4fb8 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    unaff_x30 = &Atlas_Networking_MatchMakingManager_OnDeclineToQuit__Invoke;
    lVar5 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x20 = 0x3eb4000;
    unaff_x29 = puVar15;
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb8) =
         **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = lVar5;
  lVar8 = *(long *)(lVar5 + 0x68);
  if (lVar8 == 0) {
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    puVar15 = (undefined1 *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = *(long *)(puVar15 + lVar8 * 8);
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
      goto code_r0x0155e244;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x0155e250;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x0155e314;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x0155e314:
        pcVar13 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar4 == 0) {
          uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155e2ec;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x0155e2ec:
          uVar6 = *(undefined8 *)(lVar10 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
        pcVar13 = (code *)*puVar7;
      }
      (*pcVar13)(plVar1,puVar7);
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      (*pcVar13)(lVar9);
    }
    else {
code_r0x0155e244:
      (*pcVar13)(plVar1,lVar9);
    }
code_r0x0155e250:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x155e340 | Atlas.Networking.MatchMakingManager.<>c__DisplayClass57_0.<Quit>b__2
// ============================================================

void Atlas_Networking_MatchMakingManager___c__DisplayClass57_0___Quit_b__2(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000003eb4fb9 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4fb9 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb8) =
         **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 == 0) {
      return;
    }
    lStack_58 = lVar7;
    lVar10 = *(long *)(lVar7 + 0x68);
    if (lVar10 == 0) {
      plVar9 = &lStack_58;
      lVar15 = 1;
    }
    else {
      lVar15 = *(long *)(lVar10 + 0x18);
      if (lVar15 == 0) {
        return;
      }
      plVar9 = (long *)(lVar10 + 0x20);
    }
    lVar10 = 0;
    do {
      lVar11 = plVar9[lVar10];
      pcVar14 = *(code **)(lVar11 + 0x10);
      plVar1 = *(long **)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      if (*(short *)(lVar11 + 0x48) == -1) {
        func_0x00f78ad8(lVar11);
      }
      iVar3 = func_0x00f78a4c(lVar11);
      if (iVar3 == 0) {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
        goto code_r0x0155e244;
        iVar3 = func_0x00f78a44(lVar11);
        iVar4 = func_0x00f78ec0(lVar11);
        if (iVar3 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar4 == 0) {
            lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar1,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x0155e250;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar1;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar12 + (long)(int)(*piVar8 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x0155e314;
              }
              piVar8 = piVar8 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x0155e314:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if (iVar4 == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x0155e2ec;
                }
                piVar8 = piVar8 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar1);
code_r0x0155e2ec:
            uVar5 = *(undefined8 *)(lVar12 + 8);
          }
          puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar11);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,puVar6);
      }
      else if (*(char *)(lVar11 + 0x4a) == '\0') {
        (*pcVar14)(lVar11);
      }
      else {
code_r0x0155e244:
        (*pcVar14)(plVar1,lVar11);
      }
code_r0x0155e250:
      lVar10 = lVar10 + 1;
      if (lVar10 == lVar15) {
        return;
      }
    } while( true );
  }
  piVar8 = (int *)func_0x00f78af4();
  if ((bRam0000000003eb4fba & 1) == 0) {
    func_0x00f78a20(0x3d521f8);
    bRam0000000003eb4fba = 1;
  }
  uStack_60 = 0;
  lStack_58 = 0;
  lVar7 = *(long *)(piVar8 + 10);
  if (*piVar8 == 0) {
    lStack_58 = *(long *)(piVar8 + 0xc);
    piVar8[0xc] = 0;
    piVar8[0xd] = 0;
    *piVar8 = -1;
  }
  else {
    if (lVar7 == 0) {
      func_0x00f78af4();
      goto code_r0x0155e638;
    }
    if (*(char *)(lVar7 + 0x90) != '\0') goto code_r0x0155e4a8;
    *(undefined1 *)(lVar7 + 0x90) = 1;
    if (*(long *)(lVar7 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x0155e638;
    }
    plVar9 = *(long **)(*(long *)(lVar7 + 0x38) + 0x30);
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0155e638;
    }
    uStack_60 = (**(code **)(*plVar9 + 0x6b8))(plVar9,*(undefined8 *)(*plVar9 + 0x6c0));
    lStack_58 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_60,0);
    uVar13 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&lStack_58,0);
    if ((uVar13 & 1) == 0) {
      *piVar8 = 0;
      *(long *)(piVar8 + 0xc) = lStack_58;
      /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter, MatchMakingManager.<CreatePrivateMatch>d__51>*/ func_0x0182b710(piVar8 + 2,&lStack_58,piVar8,uRam0000000003d521f8);
      return;
    }
  }
  /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&lStack_58,0);
  if (lVar7 == 0) {
    func_0x00f78af4();
code_r0x0155e638:
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x155e63c);
    (*pcVar14)();
  }
  *(undefined1 *)(lVar7 + 0x90) = 0;
code_r0x0155e4a8:
  *piVar8 = -2;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$SetResult*/ func_0x02934048(piVar8 + 2,0);
  return;
}



