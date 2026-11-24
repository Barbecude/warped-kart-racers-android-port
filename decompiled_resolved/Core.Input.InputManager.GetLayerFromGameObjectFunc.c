// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Input.InputManager.GetLayerFromGameObjectFunc

// ============================================================
// RVA: 0x164a720 | Core.Input.InputManager.GetLayerFromGameObjectFunc.Invoke
// ============================================================

undefined8 Core_Input_InputManager_GetLayerFromGameObjectFunc__Invoke(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  lStack_58 = param_1;
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = plVar15[lVar8];
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9);
    }
    iVar4 = func_0x00f78a4c(lVar9);
    bVar3 = *(char *)(lVar9 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x0164a8ac:
          uVar6 = (*pcVar13)(param_2,lVar9);
        }
        else {
          if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(param_1 + 0x18) == 0)) goto code_r0x0164a7a4;
          iVar4 = func_0x00f78a44(lVar9);
          iVar5 = func_0x00f78ec0(lVar9);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar5 == 0) {
              lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
              uVar6 = (**(code **)(lVar9 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar9 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar9 = func_0x00f78a48(lVar9);
            lVar10 = *plVar1;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar9) {
                  puVar7 = (undefined8 *)
                           (lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0164aa44;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x0164aa44:
            pcVar13 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar10 = *plVar1;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x0164aa1c;
                  }
                  piVar12 = piVar12 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              lVar10 = func_0x00fac1f0(plVar1);
code_r0x0164aa1c:
              uVar6 = *(undefined8 *)(lVar10 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
            pcVar13 = (code *)*puVar7;
          }
          uVar6 = (*pcVar13)(plVar1,param_2,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar9 + 0x48) == -1) || (*(long *)(param_1 + 0x18) == 0))
        goto code_r0x0164a8ac;
        iVar4 = func_0x00f78a44(lVar9);
        iVar5 = func_0x00f78ec0(lVar9);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar9 + 0x48);
          if (iVar5 == 0) {
            lVar9 = *param_2 + (ulong)uVar2 * 0x10;
            uVar6 = (**(code **)(lVar9 + 0x138))(param_2,*(undefined8 *)(lVar9 + 0x140));
            goto code_r0x0164a8b8;
          }
          lVar9 = func_0x00f78a48(lVar9);
          lVar10 = *param_2;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0164a9e0;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar9,(ulong)uVar2);
code_r0x0164a9e0:
          pcVar13 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *param_2;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x0164a9b8;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar10 = func_0x00fac1f0(param_2);
code_r0x0164a9b8:
            uVar6 = *(undefined8 *)(lVar10 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
          pcVar13 = (code *)*puVar7;
        }
        uVar6 = (*pcVar13)(param_2,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x0164a8ac;
code_r0x0164a7a4:
      uVar6 = (*pcVar13)(plVar1,param_2,lVar9);
    }
code_r0x0164a8b8:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return uVar6;
    }
  } while( true );
}



// ============================================================
// RVA: 0x164bed4 | Core.Input.InputManager.GetLayerFromGameObjectFunc..ctor
// ============================================================

void Core_Input_InputManager_GetLayerFromGameObjectFunc___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 **)(param_1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x164bee4 | Core.Input.InputManager.GetLayerFromGameObjectFunc.BeginInvoke
// ============================================================

ulong Core_Input_InputManager_GetLayerFromGameObjectFunc__BeginInvoke
                (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  undefined8 extraout_x1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR_03a5d648;
  uStack_20 = 0;
  uStack_28 = param_2;
  uVar2 = func_0x00f789cc(param_1,&uStack_28);
  if (*(long *)PTR_03a5d648 == lStack_18) {
    return uVar2;
  }
  ___stack_chk_fail();
  lVar3 = func_0x00f789d0(extraout_x1,0);
  if (lVar3 != 0) {
    puVar4 = (uint *)func_0x00f78ae4();
    return (ulong)*puVar4;
  }
  iVar1 = func_0x00f78af4();
  return (ulong)(iVar1 < 0xffff);
}



// ============================================================
// RVA: 0x164bf34 | Core.Input.InputManager.GetLayerFromGameObjectFunc.EndInvoke
// ============================================================

uint Core_Input_InputManager_GetLayerFromGameObjectFunc__EndInvoke
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  
  lVar2 = func_0x00f789d0(param_2,0);
  if (lVar2 != 0) {
    puVar3 = (uint *)func_0x00f78ae4();
    return *puVar3;
  }
  iVar1 = func_0x00f78af4();
  return (uint)(iVar1 < 0xffff);
}



