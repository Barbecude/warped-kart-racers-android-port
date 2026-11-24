// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.NativeFunc

// ============================================================
// RVA: 0x168987c | Core.Services.Internal.NativeFunc..ctor
// ============================================================

void Core_Services_Internal_NativeFunc___ctor(long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 **)(param_1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x168988c | Core.Services.Internal.NativeFunc.Invoke
// ============================================================

undefined8 Core_Services_Internal_NativeFunc__Invoke(long param_1,undefined8 param_2)

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
      goto code_r0x016899a0;
      iVar3 = func_0x00f78a44(lVar8);
      iVar4 = func_0x00f78ec0(lVar8);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar8 + 0x48);
        if (iVar4 == 0) {
          lVar8 = *plVar1 + (ulong)uVar2 * 0x10;
          uVar5 = (**(code **)(lVar8 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar8 + 0x140));
          goto code_r0x016899b0;
        }
        lVar8 = func_0x00f78a48(lVar8);
        lVar9 = *plVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x01689a78;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar8,(ulong)uVar2);
code_r0x01689a78:
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
                goto code_r0x01689a50;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x00fac1f0(plVar1);
code_r0x01689a50:
          uVar5 = *(undefined8 *)(lVar9 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar8);
        pcVar12 = (code *)*puVar6;
      }
      uVar5 = (*pcVar12)(plVar1,param_2,puVar6);
    }
    else if (*(char *)(lVar8 + 0x4a) == '\x01') {
      uVar5 = (*pcVar12)(param_2,lVar8);
    }
    else {
code_r0x016899a0:
      uVar5 = (*pcVar12)(plVar1,param_2,lVar8);
    }
code_r0x016899b0:
    lVar7 = lVar7 + 1;
    if (lVar7 == lVar13) {
      return uVar5;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1689aac | Core.Services.Internal.NativeFunc.BeginInvoke
// ============================================================

long Core_Services_Internal_NativeFunc__BeginInvoke
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char *pcVar2;
  undefined8 extraout_x1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  uStack_60 = param_2;
  if ((bRam0000000003eb5a43 & 1) == 0) {
    func_0x00f78a20(0x3d22940);
    bRam0000000003eb5a43 = 1;
  }
  uStack_50 = 0;
  uStack_58 = func_0x00f78ae0(/*IntPtr_TypeInfo*/ uRam0000000003d22940,&uStack_60);
  lVar1 = func_0x00f789cc(param_1,&uStack_58,param_3,param_4);
  if (*(long *)PTR_03a5d648 == lStack_48) {
    return lVar1;
  }
  ___stack_chk_fail();
  lVar1 = func_0x00f789d0(extraout_x1,0);
  if (lVar1 != 0) {
    pcVar2 = (char *)func_0x00f78ae4();
    return (long)*pcVar2;
  }
  lVar1 = func_0x00f78af4();
  return lVar1;
}



// ============================================================
// RVA: 0x1689b68 | Core.Services.Internal.NativeFunc.EndInvoke
// ============================================================

long Core_Services_Internal_NativeFunc__EndInvoke(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = func_0x00f789d0(param_2,0);
  if (lVar1 != 0) {
    pcVar2 = (char *)func_0x00f78ae4();
    return (long)*pcVar2;
  }
  lVar1 = func_0x00f78af4();
  return lVar1;
}



