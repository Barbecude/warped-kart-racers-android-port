// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugMenu.<>c__DisplayClass78_0

// ============================================================
// RVA: 0x1641dd4 | Core.DebugMenu.DebugMenu.<>c__DisplayClass78_0..ctor
// ============================================================

void Core_DebugMenu_DebugMenu___c__DisplayClass78_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1644754 | Core.DebugMenu.DebugMenu.<>c__DisplayClass78_0.<ConfigureSlider>b__0
// ============================================================

void Core_DebugMenu_DebugMenu___c__DisplayClass78_0___ConfigureSlider_b__0
               (undefined4 param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_c8;
  
  if ((bRam0000000003eb5743 & 1) == 0) {
    func_0x00f78a20(0x3d41620);
    bRam0000000003eb5743 = 1;
  }
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 == 0) {
    auVar19 = func_0x00f78af4();
    uVar8 = auVar19._8_8_;
    if ((bRam0000000003eb5744 & 1) == 0) {
      func_0x00f78a20(0x3d41610);
      bRam0000000003eb5744 = 1;
    }
    lVar6 = *(long *)(auVar19._0_8_ + 0x10);
    if (lVar6 == 0) {
      auVar19 = func_0x00f78af4();
      uVar8 = auVar19._8_8_;
      if ((bRam0000000003eb5745 & 1) == 0) {
        func_0x00f78a20(0x3d41600);
        bRam0000000003eb5745 = 1;
      }
      lVar6 = *(long *)(auVar19._0_8_ + 0x10);
      if (lVar6 == 0) {
        func_0x00f78af4();
        return;
      }
      uVar2 = *(undefined4 *)(auVar19._0_8_ + 0x18);
      lStack_c8 = lVar6;
      lVar10 = *(long *)(lVar6 + 0x68);
      if (lVar10 == 0) {
        plVar18 = &lStack_c8;
        lVar16 = 1;
      }
      else {
        lVar16 = *(long *)(lVar10 + 0x18);
        if (lVar16 == 0) {
          return;
        }
        plVar18 = (long *)(lVar10 + 0x20);
      }
      lVar10 = 0;
      do {
        lVar11 = plVar18[lVar10];
        pcVar15 = *(code **)(lVar11 + 0x10);
        plVar1 = *(long **)(lVar11 + 0x20);
        lVar11 = *(long *)(lVar11 + 0x28);
        if (*(short *)(lVar11 + 0x48) == -1) {
          func_0x00f78ad8(lVar11);
        }
        iVar4 = func_0x00f78a4c(lVar11);
        if (iVar4 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
          goto code_r0x01b7fbfc;
          iVar4 = func_0x00f78a44(lVar11);
          iVar5 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar3 = *(ushort *)(lVar11 + 0x48);
            if (iVar5 == 0) {
              lVar11 = *plVar1 + (ulong)uVar3 * 0x10;
              (**(code **)(lVar11 + 0x138))(plVar1,uVar2,uVar8,*(undefined8 *)(lVar11 + 0x140));
              goto code_r0x01b7fc10;
            }
            lVar11 = func_0x00f78a48(lVar11);
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar9 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar14 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x01b7fcdc;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar3);
code_r0x01b7fcdc:
            pcVar15 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar5 == 0) {
              uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
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
                    goto code_r0x01b7fcb4;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x01b7fcb4:
              uVar7 = *(undefined8 *)(lVar12 + 8);
            }
            puVar9 = (undefined8 *)func_0x00f78acc(uVar7,lVar11);
            pcVar15 = (code *)*puVar9;
          }
          (*pcVar15)(plVar1,uVar2,uVar8,puVar9);
        }
        else if (*(char *)(lVar11 + 0x4a) == '\x02') {
          (*pcVar15)(uVar2,uVar8,lVar11);
        }
        else {
code_r0x01b7fbfc:
          (*pcVar15)(plVar1,uVar2,uVar8,lVar11);
        }
code_r0x01b7fc10:
        lVar10 = lVar10 + 1;
        if (lVar10 == lVar16) {
          return;
        }
      } while( true );
    }
    uVar2 = *(undefined4 *)(auVar19._0_8_ + 0x18);
    lVar10 = *(long *)(lVar6 + 0x68);
    if (lVar10 == 0) {
      puVar17 = &stack0xffffffffffffff68;
      lVar16 = 1;
    }
    else {
      lVar16 = *(long *)(lVar10 + 0x18);
      if (lVar16 == 0) {
        return;
      }
      puVar17 = (undefined1 *)(lVar10 + 0x20);
    }
    lVar10 = 0;
    do {
      lVar11 = *(long *)(puVar17 + lVar10 * 8);
      pcVar15 = *(code **)(lVar11 + 0x10);
      plVar18 = *(long **)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      if (*(short *)(lVar11 + 0x48) == -1) {
        func_0x00f78ad8(lVar11);
      }
      iVar4 = func_0x00f78a4c(lVar11);
      if (iVar4 == 0) {
        if (((plVar18 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
           (((*(byte *)(*plVar18 + 0x115) & 1) != 0 || (*(long *)(lVar6 + 0x18) == 0))))
        goto code_r0x01b7ff34;
        iVar4 = func_0x00f78a44(lVar11);
        iVar5 = func_0x00f78ec0(lVar11);
        if (iVar4 == 0) {
          uVar3 = *(ushort *)(lVar11 + 0x48);
          if (iVar5 == 0) {
            lVar11 = *plVar18 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar18,uVar2,uVar8,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x01b7ff48;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar18;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar9 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto code_r0x01b80014;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar18,lVar11,(ulong)uVar3);
code_r0x01b80014:
          pcVar15 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar5 == 0) {
            uVar7 = *(undefined8 *)(*plVar18 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar18;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01b7ffec;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar18);
code_r0x01b7ffec:
            uVar7 = *(undefined8 *)(lVar12 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar7,lVar11);
          pcVar15 = (code *)*puVar9;
        }
        (*pcVar15)(plVar18,uVar2,uVar8,puVar9);
      }
      else if (*(char *)(lVar11 + 0x4a) == '\x02') {
        (*pcVar15)(uVar2,uVar8,lVar11);
      }
      else {
code_r0x01b7ff34:
        (*pcVar15)(plVar18,uVar2,uVar8,lVar11);
      }
code_r0x01b7ff48:
      lVar10 = lVar10 + 1;
      if (lVar10 == lVar16) {
        return;
      }
    } while( true );
  }
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  lVar10 = *(long *)(lVar6 + 0x68);
  if (lVar10 == 0) {
    puVar17 = &stack0xffffffffffffff98;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar10 + 0x18);
    if (lVar16 == 0) {
      return;
    }
    puVar17 = (undefined1 *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = *(long *)(puVar17 + lVar10 * 8);
    pcVar15 = *(code **)(lVar11 + 0x10);
    plVar18 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    if (iVar4 == 0) {
      if (((plVar18 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
         (((*(byte *)(*plVar18 + 0x115) & 1) != 0 || (*(long *)(lVar6 + 0x18) == 0))))
      goto code_r0x01b80568;
      iVar4 = func_0x00f78a44(lVar11);
      iVar5 = func_0x00f78ec0(lVar11);
      if (iVar4 == 0) {
        uVar3 = *(ushort *)(lVar11 + 0x48);
        if (iVar5 == 0) {
          lVar11 = *plVar18 + (ulong)uVar3 * 0x10;
          (**(code **)(lVar11 + 0x138))(param_1,plVar18,uVar2,*(undefined8 *)(lVar11 + 0x140));
          goto code_r0x01b8057c;
        }
        lVar11 = func_0x00f78a48(lVar11);
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar9 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01b80648;
            }
            piVar14 = piVar14 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar18,lVar11,(ulong)uVar3);
code_r0x01b80648:
        pcVar15 = (code *)*puVar9;
        puVar9 = (undefined8 *)puVar9[1];
      }
      else {
        if (iVar5 == 0) {
          uVar8 = *(undefined8 *)(*plVar18 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar12 = *plVar18;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01b80620;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          lVar12 = func_0x00fac1f0(plVar18);
code_r0x01b80620:
          uVar8 = *(undefined8 *)(lVar12 + 8);
        }
        puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
        pcVar15 = (code *)*puVar9;
      }
      (*pcVar15)(param_1,plVar18,uVar2,puVar9);
    }
    else if (*(char *)(lVar11 + 0x4a) == '\x02') {
      (*pcVar15)(param_1,uVar2,lVar11);
    }
    else {
code_r0x01b80568:
      (*pcVar15)(param_1,plVar18,uVar2,lVar11);
    }
code_r0x01b8057c:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar16) {
      return;
    }
  } while( true );
}



