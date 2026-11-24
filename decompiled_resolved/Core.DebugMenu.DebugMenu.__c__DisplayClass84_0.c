// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0

// ============================================================
// RVA: 0x1642350 | Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0..ctor
// ============================================================

void Core_DebugMenu_DebugMenu___c__DisplayClass84_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1644824 | Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0.<ConfigureToggle>b__0
// ============================================================

void Core_DebugMenu_DebugMenu___c__DisplayClass84_0___ConfigureToggle_b__0
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  if ((bRam0000000003eb5745 & 1) == 0) {
    func_0x00f78a20(0x3d41600);
    bRam0000000003eb5745 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  lStack_68 = lVar6;
  lVar9 = *(long *)(lVar6 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    if (iVar4 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
      goto code_r0x01b7fbfc;
      iVar4 = func_0x00f78a44(lVar10);
      iVar5 = func_0x00f78ec0(lVar10);
      if (iVar4 == 0) {
        uVar3 = *(ushort *)(lVar10 + 0x48);
        if (iVar5 == 0) {
          lVar10 = *plVar1 + (ulong)uVar3 * 0x10;
          (**(code **)(lVar10 + 0x138))(plVar1,uVar2,param_2,*(undefined8 *)(lVar10 + 0x140));
          goto code_r0x01b7fc10;
        }
        lVar10 = func_0x00f78a48(lVar10);
        lVar11 = *plVar1;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01b7fcdc;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar3);
code_r0x01b7fcdc:
        pcVar14 = (code *)*puVar8;
        puVar8 = (undefined8 *)puVar8[1];
      }
      else {
        if (iVar5 == 0) {
          uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar11 = *plVar1;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01b7fcb4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x00fac1f0(plVar1);
code_r0x01b7fcb4:
          uVar7 = *(undefined8 *)(lVar11 + 8);
        }
        puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
        pcVar14 = (code *)*puVar8;
      }
      (*pcVar14)(plVar1,uVar2,param_2,puVar8);
    }
    else if (*(char *)(lVar10 + 0x4a) == '\x02') {
      (*pcVar14)(uVar2,param_2,lVar10);
    }
    else {
code_r0x01b7fbfc:
      (*pcVar14)(plVar1,uVar2,param_2,lVar10);
    }
code_r0x01b7fc10:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



