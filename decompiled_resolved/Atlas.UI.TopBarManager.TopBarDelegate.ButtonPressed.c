// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed

// ============================================================
// RVA: 0x155d3d8 | Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed..ctor
// ============================================================

void Atlas_UI_TopBarManager_TopBarDelegate_ButtonPressed___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 **)(param_1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x156f004 | Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed.Invoke
// ============================================================

undefined8 Atlas_UI_TopBarManager_TopBarDelegate_ButtonPressed__Invoke(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long lStack_58;
  
  lStack_58 = param_1;
  lVar7 = *(long *)(param_1 + 0x68);
  if (lVar7 == 0) {
    plVar14 = &lStack_58;
    lVar13 = 1;
  }
  else {
    lVar13 = *(long *)(lVar7 + 0x18);
    if (lVar13 == 0) {
      return 0;
    }
    plVar14 = (long *)(lVar7 + 0x20);
  }
  lVar7 = 0;
  do {
    lVar8 = plVar14[lVar7];
    pcVar12 = *(code **)(lVar8 + 0x10);
    plVar1 = *(long **)(lVar8 + 0x20);
    lVar8 = *(long *)(lVar8 + 0x28);
    if (*(short *)(lVar8 + 0x48) == -1) {
      func_0x00f78ad8(lVar8);
    }
    iVar3 = func_0x00f78a4c(lVar8);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar8 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(param_1 + 0x18) == 0))
      goto code_r0x0156f10c;
      iVar3 = func_0x00f78a44(lVar8);
      iVar4 = func_0x00f78ec0(lVar8);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar8 + 0x48);
        if (iVar4 == 0) {
          lVar8 = *plVar1 + (ulong)uVar2 * 0x10;
          uVar5 = (**(code **)(lVar8 + 0x138))(plVar1,*(undefined8 *)(lVar8 + 0x140));
          goto code_r0x0156f118;
        }
        lVar8 = func_0x00f78a48(lVar8);
        lVar9 = *plVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x0156f1dc;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar8,(ulong)uVar2);
code_r0x0156f1dc:
        pcVar12 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar8 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar9 = *plVar1;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)(lVar8 + 0x18)) {
                lVar9 = lVar9 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar8 + 0x48)) * 0x10 +
                        0x138;
                goto code_r0x0156f1b4;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x00fac1f0(plVar1);
code_r0x0156f1b4:
          uVar5 = *(undefined8 *)(lVar9 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar8);
        pcVar12 = (code *)*puVar6;
      }
      uVar5 = (*pcVar12)(plVar1,puVar6);
    }
    else if (*(char *)(lVar8 + 0x4a) == '\0') {
      uVar5 = (*pcVar12)(lVar8);
    }
    else {
code_r0x0156f10c:
      uVar5 = (*pcVar12)(plVar1,lVar8);
    }
code_r0x0156f118:
    lVar7 = lVar7 + 1;
    if (lVar7 == lVar13) {
      return uVar5;
    }
  } while( true );
}



// ============================================================
// RVA: 0x156f20c | Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed.BeginInvoke
// ============================================================

ulong Atlas_UI_TopBarManager_TopBarDelegate_ButtonPressed__BeginInvoke
                (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 extraout_x1;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR_03a5d648;
  uStack_20 = 0;
  uVar1 = func_0x00f789cc(param_1,&uStack_20,param_2,param_3);
  if (*(long *)PTR_03a5d648 == lStack_18) {
    return uVar1;
  }
  ___stack_chk_fail();
  lVar2 = func_0x00f789d0(extraout_x1,0);
  if (lVar2 != 0) {
    pbVar3 = (byte *)func_0x00f78ae4();
    return (ulong)*pbVar3;
  }
  lVar2 = func_0x00f78af4();
  return *(ulong *)(lVar2 + 0x68);
}



// ============================================================
// RVA: 0x156f264 | Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed.EndInvoke
// ============================================================

ulong Atlas_UI_TopBarManager_TopBarDelegate_ButtonPressed__EndInvoke
                (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  
  lVar1 = func_0x00f789d0(param_2,0);
  if (lVar1 != 0) {
    pbVar2 = (byte *)func_0x00f78ae4();
    return (ulong)*pbVar2;
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 0x68);
}



