// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ModalStateMachineBehaviour

// ============================================================
// RVA: 0x1496c28 | Atlas.UI.ModalStateMachineBehaviour.add_StateEntered
// ============================================================

void Atlas_UI_ModalStateMachineBehaviour__add_StateEntered(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  long lStack_b8;
  
  if ((bRam0000000003eb49d2 & 1) == 0) {
    func_0x00f78a20(0x3d1b4d0);
    bRam0000000003eb49d2 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,param_2,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0))) {
    lVar7 = func_0x00ff0f44((long *)(param_1 + 0x20),plVar6,lVar9);
    bVar3 = lVar9 == lVar7;
    lVar9 = lVar7;
    if (bVar3) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar6);
  if ((bRam0000000003eb49d4 & 1) == 0) {
    func_0x00f78a20(0x3d1b4d0);
    bRam0000000003eb49d4 = 1;
  }
  plVar6 = (long *)(auVar18._0_8_ + 0x28);
  lVar9 = *plVar6;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar18._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0))) {
    lVar7 = func_0x00ff0f44(plVar6,plVar8,lVar9);
    bVar3 = lVar9 == lVar7;
    lVar9 = lVar7;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb49cb & 1) == 0) {
    func_0x00f78a20(0x3d415c8);
    bRam0000000003eb49cb = 1;
  }
  if ((auVar19._8_4_ != 3) || (lVar9 = *(long *)(auVar19._0_8_ + 0x28), lVar9 == 0)) {
    return;
  }
  plVar6 = *(long **)(auVar19._0_8_ + 0x50);
  lStack_b8 = lVar9;
  lVar7 = *(long *)(lVar9 + 0x68);
  if (lVar7 == 0) {
    plVar8 = &lStack_b8;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar7 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar8 = (long *)(lVar7 + 0x20);
  }
  lVar7 = 0;
  do {
    lVar12 = plVar8[lVar7];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01b7ec44:
          (*pcVar16)(plVar6,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x01b7eb3c;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar6,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01b7ec50;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar11 = (undefined8 *)
                            (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01b7eddc;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01b7eddc:
            pcVar16 = (code *)*puVar11;
            puVar11 = (undefined8 *)puVar11[1];
          }
          else {
            if (iVar5 == 0) {
              uVar10 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01b7edb4;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01b7edb4:
              uVar10 = *(undefined8 *)(lVar13 + 8);
            }
            puVar11 = (undefined8 *)func_0x00f78acc(uVar10,lVar12);
            pcVar16 = (code *)*puVar11;
          }
          (*pcVar16)(plVar1,plVar6,puVar11);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x01b7ec44;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar6 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar6,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01b7ec50;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar11 = (undefined8 *)
                          (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01b7ed78;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar6,lVar12,(ulong)uVar2);
code_r0x01b7ed78:
          pcVar16 = (code *)*puVar11;
          puVar11 = (undefined8 *)puVar11[1];
        }
        else {
          if (iVar5 == 0) {
            uVar10 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar6;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01b7ed50;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar6);
code_r0x01b7ed50:
            uVar10 = *(undefined8 *)(lVar13 + 8);
          }
          puVar11 = (undefined8 *)func_0x00f78acc(uVar10,lVar12);
          pcVar16 = (code *)*puVar11;
        }
        (*pcVar16)(plVar6,puVar11);
      }
    }
    else {
      if (bVar3) goto code_r0x01b7ec44;
code_r0x01b7eb3c:
      (*pcVar16)(plVar1,plVar6,lVar12);
    }
code_r0x01b7ec50:
    lVar7 = lVar7 + 1;
    if (lVar7 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1496cc8 | Atlas.UI.ModalStateMachineBehaviour.add_StateExited
// ============================================================

void Atlas_UI_ModalStateMachineBehaviour__add_StateExited(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [12];
  long lStack_88;
  
  if ((bRam0000000003eb49d4 & 1) == 0) {
    func_0x00f78a20(0x3d1b4d0);
    bRam0000000003eb49d4 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,param_2,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0))) {
    lVar7 = func_0x00ff0f44((long *)(param_1 + 0x28),plVar6,lVar8);
    bVar3 = lVar8 == lVar7;
    lVar8 = lVar7;
    if (bVar3) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar6);
  if ((bRam0000000003eb49cb & 1) == 0) {
    func_0x00f78a20(0x3d415c8);
    bRam0000000003eb49cb = 1;
  }
  if ((auVar18._8_4_ != 3) || (lVar8 = *(long *)(auVar18._0_8_ + 0x28), lVar8 == 0)) {
    return;
  }
  plVar6 = *(long **)(auVar18._0_8_ + 0x50);
  lStack_88 = lVar8;
  lVar7 = *(long *)(lVar8 + 0x68);
  if (lVar7 == 0) {
    plVar17 = &lStack_88;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar7 + 0x18);
    if (lVar16 == 0) {
      return;
    }
    plVar17 = (long *)(lVar7 + 0x20);
  }
  lVar7 = 0;
  do {
    lVar11 = plVar17[lVar7];
    pcVar15 = *(code **)(lVar11 + 0x10);
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
code_r0x01b7ec44:
          (*pcVar15)(plVar6,lVar11);
        }
        else {
          if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01b7eb3c;
          iVar4 = func_0x00f78a44(lVar11);
          iVar5 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar11 + 0x48);
            if (iVar5 == 0) {
              lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar11 + 0x138))(plVar1,plVar6,*(undefined8 *)(lVar11 + 0x140));
              goto code_r0x01b7ec50;
            }
            lVar11 = func_0x00f78a48(lVar11);
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar10 = (undefined8 *)
                            (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01b7eddc;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01b7eddc:
            pcVar15 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if (iVar5 == 0) {
              uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01b7edb4;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x01b7edb4:
              uVar9 = *(undefined8 *)(lVar12 + 8);
            }
            puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar11);
            pcVar15 = (code *)*puVar10;
          }
          (*pcVar15)(plVar1,plVar6,puVar10);
        }
      }
      else {
        if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01b7ec44;
        iVar4 = func_0x00f78a44(lVar11);
        iVar5 = func_0x00f78ec0(lVar11);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar5 == 0) {
            lVar11 = *plVar6 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar6,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x01b7ec50;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar6;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar10 = (undefined8 *)
                          (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01b7ed78;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar11,(ulong)uVar2);
code_r0x01b7ed78:
          pcVar15 = (code *)*puVar10;
          puVar10 = (undefined8 *)puVar10[1];
        }
        else {
          if (iVar5 == 0) {
            uVar9 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01b7ed50;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar6);
code_r0x01b7ed50:
            uVar9 = *(undefined8 *)(lVar12 + 8);
          }
          puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar11);
          pcVar15 = (code *)*puVar10;
        }
        (*pcVar15)(plVar6,puVar10);
      }
    }
    else {
      if (bVar3) goto code_r0x01b7ec44;
code_r0x01b7eb3c:
      (*pcVar15)(plVar1,plVar6,lVar11);
    }
code_r0x01b7ec50:
    lVar7 = lVar7 + 1;
    if (lVar7 == lVar16) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x14971bc | Atlas.UI.ModalStateMachineBehaviour.remove_StateEntered
// ============================================================

void Atlas_UI_ModalStateMachineBehaviour__remove_StateEntered
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  
  if ((bRam0000000003eb49d3 & 1) == 0) {
    func_0x00f78a20(0x3d1b4d0);
    bRam0000000003eb49d3 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x20),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar10 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb49d5 & 1) == 0) {
    func_0x00f78a20(0x3d1b4d0);
    bRam0000000003eb49d5 = 1;
  }
  plVar2 = (long *)(auVar10._0_8_ + 0x28);
  lVar5 = *plVar2;
  while( true ) {
    puVar6 = (undefined8 *)0x0;
    plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar10._8_8_);
    if ((plVar4 != (long *)0x0) && (*plVar4 != /*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0)) break;
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar10 = func_0x00f78e5c(plVar4);
  lVar5 = auVar10._0_8_;
  puVar7 = &uStack_d0;
  if ((bRam0000000003eb49d6 & 1) == 0) {
    func_0x00f78a20(0x3d2a1b0);
    bRam0000000003eb49d6 = 1;
  }
  uStack_c8 = puVar6[1];
  uStack_d0 = *puVar6;
  uStack_b8 = puVar6[3];
  uStack_c0 = puVar6[2];
  uStack_b0 = *(undefined4 *)(puVar6 + 4);
  /*UnityEngine.StateMachineBehaviour$$OnStateEnter*/ func_0x03214cbc(lVar5,auVar10._8_8_,&uStack_d0,param_4,0);
  if (*(long *)(lVar5 + 0x20) != 0) {
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$Invoke*/ func_0x01b47db4(*(long *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x18),uRam0000000003d2a1b0);
    return;
  }
  auVar10 = func_0x00f78af4();
  lVar5 = auVar10._0_8_;
  if ((bRam0000000003eb49d7 & 1) == 0) {
    func_0x00f78a20(0x3d2a1b0);
    bRam0000000003eb49d7 = 1;
  }
  uStack_138 = puVar7[1];
  uStack_140 = *puVar7;
  uStack_128 = puVar7[3];
  uStack_130 = puVar7[2];
  uStack_120 = *(undefined4 *)(puVar7 + 4);
  /*UnityEngine.StateMachineBehaviour$$OnStateExit*/ func_0x03214cc4(lVar5,auVar10._8_8_,&uStack_140,param_4,0);
  if (*(long *)(lVar5 + 0x28) != 0) {
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$Invoke*/ func_0x01b47db4(*(long *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x18),uRam0000000003d2a1b0);
    return;
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb49d8 & 1) == 0) {
    func_0x00f78a20(0x3d2a1a8);
    func_0x00f78a20(0x3d1b4d0);
    func_0x00f78a20(0x3d63710);
    func_0x00f78a20(0x3d63718);
    func_0x00f78a20(0x3d28108);
    bRam0000000003eb49d8 = 1;
  }
  *(undefined4 *)(lVar5 + 0x18) = 1;
  if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar6 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
  lVar8 = puVar6[1];
  lVar3 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  if (lVar8 == 0) {
    if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar6 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar9 = *puVar6;
    lVar8 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar8,uVar9,uRam0000000003d63710,uRam0000000003d2a1a8);
    lVar3 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 8) = lVar8;
  }
  *(long *)(lVar5 + 0x20) = lVar8;
  if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar3 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  }
  puVar6 = *(undefined8 **)(lVar3 + 0xb8);
  lVar8 = puVar6[2];
  if (lVar8 == 0) {
    if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar6 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar9 = *puVar6;
    lVar8 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar8,uVar9,uRam0000000003d63718,uRam0000000003d2a1a8);
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 0x10) = lVar8;
  }
  *(long *)(lVar5 + 0x28) = lVar8;
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar5,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(lVar5);
  return;
}



// ============================================================
// RVA: 0x149725c | Atlas.UI.ModalStateMachineBehaviour.remove_StateExited
// ============================================================

void Atlas_UI_ModalStateMachineBehaviour__remove_StateExited
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  if ((bRam0000000003eb49d5 & 1) == 0) {
    func_0x00f78a20(0x3d1b4d0);
    bRam0000000003eb49d5 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  while( true ) {
    puVar5 = (undefined8 *)0x0;
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,param_2);
    if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0)) break;
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x28),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar9 = func_0x00f78e5c(plVar2);
  lVar4 = auVar9._0_8_;
  puVar6 = &uStack_a0;
  if ((bRam0000000003eb49d6 & 1) == 0) {
    func_0x00f78a20(0x3d2a1b0);
    bRam0000000003eb49d6 = 1;
  }
  uStack_98 = puVar5[1];
  uStack_a0 = *puVar5;
  uStack_88 = puVar5[3];
  uStack_90 = puVar5[2];
  uStack_80 = *(undefined4 *)(puVar5 + 4);
  /*UnityEngine.StateMachineBehaviour$$OnStateEnter*/ func_0x03214cbc(lVar4,auVar9._8_8_,&uStack_a0,param_4,0);
  if (*(long *)(lVar4 + 0x20) != 0) {
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$Invoke*/ func_0x01b47db4(*(long *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x18),uRam0000000003d2a1b0);
    return;
  }
  auVar9 = func_0x00f78af4();
  lVar4 = auVar9._0_8_;
  if ((bRam0000000003eb49d7 & 1) == 0) {
    func_0x00f78a20(0x3d2a1b0);
    bRam0000000003eb49d7 = 1;
  }
  uStack_108 = puVar6[1];
  uStack_110 = *puVar6;
  uStack_f8 = puVar6[3];
  uStack_100 = puVar6[2];
  uStack_f0 = *(undefined4 *)(puVar6 + 4);
  /*UnityEngine.StateMachineBehaviour$$OnStateExit*/ func_0x03214cc4(lVar4,auVar9._8_8_,&uStack_110,param_4,0);
  if (*(long *)(lVar4 + 0x28) != 0) {
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$Invoke*/ func_0x01b47db4(*(long *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x18),uRam0000000003d2a1b0);
    return;
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb49d8 & 1) == 0) {
    func_0x00f78a20(0x3d2a1a8);
    func_0x00f78a20(0x3d1b4d0);
    func_0x00f78a20(0x3d63710);
    func_0x00f78a20(0x3d63718);
    func_0x00f78a20(0x3d28108);
    bRam0000000003eb49d8 = 1;
  }
  *(undefined4 *)(lVar4 + 0x18) = 1;
  if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar5 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
  lVar7 = puVar5[1];
  lVar3 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  if (lVar7 == 0) {
    if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar5 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar8 = *puVar5;
    lVar7 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar7,uVar8,uRam0000000003d63710,uRam0000000003d2a1a8);
    lVar3 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 8) = lVar7;
  }
  *(long *)(lVar4 + 0x20) = lVar7;
  if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar3 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar5[2];
  if (lVar7 == 0) {
    if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar5 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar8 = *puVar5;
    lVar7 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar7,uVar8,uRam0000000003d63718,uRam0000000003d2a1a8);
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 0x10) = lVar7;
  }
  *(long *)(lVar4 + 0x28) = lVar7;
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar4,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(lVar4);
  return;
}



// ============================================================
// RVA: 0x14972fc | Atlas.UI.ModalStateMachineBehaviour.OnStateEnter
// ============================================================

void Atlas_UI_ModalStateMachineBehaviour__OnStateEnter
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  puVar3 = &uStack_70;
  if ((bRam0000000003eb49d6 & 1) == 0) {
    func_0x00f78a20(0x3d2a1b0);
    bRam0000000003eb49d6 = 1;
  }
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  uStack_50 = *(undefined4 *)(param_3 + 4);
  /*UnityEngine.StateMachineBehaviour$$OnStateEnter*/ func_0x03214cbc(param_1,param_2,&uStack_70,param_4,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$Invoke*/ func_0x01b47db4(*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18),uRam0000000003d2a1b0);
    return;
  }
  auVar6 = func_0x00f78af4();
  lVar1 = auVar6._0_8_;
  if ((bRam0000000003eb49d7 & 1) == 0) {
    func_0x00f78a20(0x3d2a1b0);
    bRam0000000003eb49d7 = 1;
  }
  uStack_d8 = puVar3[1];
  uStack_e0 = *puVar3;
  uStack_c8 = puVar3[3];
  uStack_d0 = puVar3[2];
  uStack_c0 = *(undefined4 *)(puVar3 + 4);
  /*UnityEngine.StateMachineBehaviour$$OnStateExit*/ func_0x03214cc4(lVar1,auVar6._8_8_,&uStack_e0,param_4,0);
  if (*(long *)(lVar1 + 0x28) != 0) {
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$Invoke*/ func_0x01b47db4(*(long *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x18),uRam0000000003d2a1b0);
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb49d8 & 1) == 0) {
    func_0x00f78a20(0x3d2a1a8);
    func_0x00f78a20(0x3d1b4d0);
    func_0x00f78a20(0x3d63710);
    func_0x00f78a20(0x3d63718);
    func_0x00f78a20(0x3d28108);
    bRam0000000003eb49d8 = 1;
  }
  *(undefined4 *)(lVar1 + 0x18) = 1;
  if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar3 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
  lVar4 = puVar3[1];
  lVar2 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  if (lVar4 == 0) {
    if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar3 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ uRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar4,uVar5,uRam0000000003d63710,uRam0000000003d2a1a8);
    lVar2 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 8) = lVar4;
  }
  *(long *)(lVar1 + 0x20) = lVar4;
  if (((*(ushort *)(lVar2 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar2 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar4 = puVar3[2];
  if (lVar4 == 0) {
    if (((*(ushort *)(lVar2 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar3 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ uRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar4,uVar5,uRam0000000003d63718,uRam0000000003d2a1a8);
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 0x10) = lVar4;
  }
  *(long *)(lVar1 + 0x28) = lVar4;
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(lVar1);
  return;
}



// ============================================================
// RVA: 0x14973a4 | Atlas.UI.ModalStateMachineBehaviour.OnStateExit
// ============================================================

void Atlas_UI_ModalStateMachineBehaviour__OnStateExit
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000003eb49d7 & 1) == 0) {
    func_0x00f78a20(0x3d2a1b0);
    bRam0000000003eb49d7 = 1;
  }
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  uStack_50 = *(undefined4 *)(param_3 + 4);
  /*UnityEngine.StateMachineBehaviour$$OnStateExit*/ func_0x03214cc4(param_1,param_2,&uStack_70,param_4,0);
  if (*(long *)(param_1 + 0x28) != 0) {
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$Invoke*/ func_0x01b47db4(*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18),uRam0000000003d2a1b0);
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb49d8 & 1) == 0) {
    func_0x00f78a20(0x3d2a1a8);
    func_0x00f78a20(0x3d1b4d0);
    func_0x00f78a20(0x3d63710);
    func_0x00f78a20(0x3d63718);
    func_0x00f78a20(0x3d28108);
    bRam0000000003eb49d8 = 1;
  }
  *(undefined4 *)(lVar1 + 0x18) = 1;
  if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar3 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
  lVar4 = puVar3[1];
  lVar2 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  if (lVar4 == 0) {
    if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar3 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ uRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar4,uVar5,uRam0000000003d63710,uRam0000000003d2a1a8);
    lVar2 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 8) = lVar4;
  }
  *(long *)(lVar1 + 0x20) = lVar4;
  if (((*(ushort *)(lVar2 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar2 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar4 = puVar3[2];
  if (lVar4 == 0) {
    if (((*(ushort *)(lVar2 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar3 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ uRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar4,uVar5,uRam0000000003d63718,uRam0000000003d2a1a8);
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 0x10) = lVar4;
  }
  *(long *)(lVar1 + 0x28) = lVar4;
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(lVar1);
  return;
}



// ============================================================
// RVA: 0x149744c | Atlas.UI.ModalStateMachineBehaviour..ctor
// ============================================================

void Atlas_UI_ModalStateMachineBehaviour___ctor(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb49d8 & 1) == 0) {
    func_0x00f78a20(0x3d2a1a8);
    func_0x00f78a20(0x3d1b4d0);
    func_0x00f78a20(0x3d63710);
    func_0x00f78a20(0x3d63718);
    func_0x00f78a20(0x3d28108);
    bRam0000000003eb49d8 = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
  lVar3 = puVar2[1];
  lVar1 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  if (lVar3 == 0) {
    if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar2 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ uRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar3,uVar4,uRam0000000003d63710,uRam0000000003d2a1a8);
    lVar1 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 8) = lVar3;
  }
  *(long *)(param_1 + 0x20) = lVar3;
  if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar1 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0xb8);
  lVar3 = puVar2[2];
  if (lVar3 == 0) {
    if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar2 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ uRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar3,uVar4,uRam0000000003d63718,uRam0000000003d2a1a8);
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 0x10) = lVar3;
  }
  *(long *)(param_1 + 0x28) = lVar3;
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



