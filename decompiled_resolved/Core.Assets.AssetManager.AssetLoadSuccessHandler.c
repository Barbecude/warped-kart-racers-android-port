// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetManager.AssetLoadSuccessHandler

// ============================================================
// RVA: 0x1634b60 | Core.Assets.AssetManager.AssetLoadSuccessHandler.Invoke
// ============================================================

void Core_Assets_AssetManager_AssetLoadSuccessHandler__Invoke
               (long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

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
  long lStack_68;
  
  lStack_68 = param_1;
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    plVar15 = &lStack_68;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return;
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
    bVar3 = *(char *)(lVar9 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01634d00:
          (*pcVar13)(param_2,param_3,param_4,lVar9);
        }
        else {
          if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(param_1 + 0x18) == 0)) goto code_r0x01634bf0;
          iVar4 = func_0x00f78a44(lVar9);
          iVar5 = func_0x00f78ec0(lVar9);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar5 == 0) {
              lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar9 + 0x138))
                        (plVar1,param_2,param_3,param_4,*(undefined8 *)(lVar9 + 0x140));
              goto code_r0x01634d14;
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
                  goto code_r0x01634eb8;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x01634eb8:
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
                    goto code_r0x01634e90;
                  }
                  piVar12 = piVar12 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              lVar10 = func_0x00fac1f0(plVar1);
code_r0x01634e90:
              uVar6 = *(undefined8 *)(lVar10 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
            pcVar13 = (code *)*puVar7;
          }
          (*pcVar13)(plVar1,param_2,param_3,param_4,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar9 + 0x48) == -1) || (*(long *)(param_1 + 0x18) == 0))
        goto code_r0x01634d00;
        iVar4 = func_0x00f78a44(lVar9);
        iVar5 = func_0x00f78ec0(lVar9);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar9 + 0x48);
          if (iVar5 == 0) {
            lVar9 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar9 + 0x138))(param_2,param_3,param_4,*(undefined8 *)(lVar9 + 0x140));
            goto code_r0x01634d14;
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
                goto code_r0x01634e44;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar9,(ulong)uVar2);
code_r0x01634e44:
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
                  goto code_r0x01634e1c;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar10 = func_0x00fac1f0(param_2);
code_r0x01634e1c:
            uVar6 = *(undefined8 *)(lVar10 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
          pcVar13 = (code *)*puVar7;
        }
        (*pcVar13)(param_2,param_3,param_4,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01634d00;
code_r0x01634bf0:
      (*pcVar13)(plVar1,param_2,param_3,param_4,lVar9);
    }
code_r0x01634d14:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x16378e4 | Core.Assets.AssetManager.AssetLoadSuccessHandler..ctor
// ============================================================

void Core_Assets_AssetManager_AssetLoadSuccessHandler___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 **)(param_1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x163858c | Core.Assets.AssetManager.AssetLoadSuccessHandler.BeginInvoke
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00fdfb28) */
/* WARNING: Removing unreachable block (ram,0x00fdfb48) */
/* WARNING: Removing unreachable block (ram,0x00fdfb58) */
/* WARNING: Removing unreachable block (ram,0x00fdfb68) */
/* WARNING: Removing unreachable block (ram,0x00fdfb84) */
/* WARNING: Removing unreachable block (ram,0x00fdfb74) */
/* WARNING: Removing unreachable block (ram,0x00fdfba4) */
/* WARNING: Removing unreachable block (ram,0x00fdfbac) */

undefined8
Core_Assets_AssetManager_AssetLoadSuccessHandler__BeginInvoke
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x1;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR_03a5d648;
  auStack_80[0] = param_4;
  if ((bRam0000000003eb56a1 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb56a1 = 1;
  }
  uStack_60 = 0;
  uStack_78 = param_2;
  uStack_70 = param_3;
  uStack_68 = func_0x00f78ae0(/*Core.Assets.AssetManagerHandle_TypeInfo*/ uRam0000000003d1fdb0,auStack_80);
  uVar3 = func_0x00f789cc(param_1,&uStack_78,param_5);
  if (*(long *)PTR_03a5d648 == lStack_58) {
    return uVar3;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_f0;
  uVar3 = func_0x00ff58b0(extraout_x1,auStack_e8,&lStack_f0);
  if (lStack_f0 == 0) {
    return uVar3;
  }
  auVar12 = func_0x00f7723c();
  lVar4 = auVar12._8_8_;
  uVar3 = auVar12._0_8_;
  lVar8 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
  if ((ulong)*(byte *)(lVar8 + 0x4a) == 0) {
    uVar9 = 0;
  }
  else {
    uVar6 = 0;
    uVar9 = 0;
    plVar7 = (long *)(*(long *)(lVar8 + 0x28) + 0x10);
    do {
      uVar9 = ((ulong)(*(uint *)(*plVar7 + 8) >> 0x1e) & 1) + (uVar9 & 0xffffffff);
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 3;
    } while (uVar6 < *(byte *)(lVar8 + 0x4a));
  }
  if (lRam0000000003f95148 == 0) {
    lRam0000000003f95148 = func_0x00f76cd4(uRam0000000003ff75e0,1);
    DataMemoryBarrier(2,3);
  }
  uVar1 = func_0x00f76ce0(lRam0000000003f95148,uVar9);
  func_0x00f7a980(param_6,uVar1);
  func_0x00f7a980(plVar5,0);
  if ((*(byte *)(*(long *)(lVar8 + 0x18) + 0x132) >> 1 & 1) != 0) {
    uVar3 = func_0x00f775e4(uVar3);
  }
  if (*(char *)(lVar8 + 0x4a) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 0x18);
  }
  uVar3 = func_0x00fdecac(lVar8,uVar3,uVar1,plVar5);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x4a);
  if (*(byte *)(lVar8 + 0x4a) != 0) {
    uVar6 = 0;
    iVar10 = 0;
    lVar11 = 0x10;
    do {
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x28) + lVar11) + 0xb) >> 6 & 1) != 0) {
        puVar2 = (undefined8 *)func_0x00faf4d8(*(undefined8 *)(lVar4 + 0x18),8,uVar6);
        uVar1 = *puVar2;
        puVar2 = (undefined8 *)func_0x00faf4d8(*param_6,8,(long)iVar10);
        *puVar2 = uVar1;
        func_0x00f774c4(*param_6,puVar2,uVar1);
        iVar10 = iVar10 + 1;
        uVar9 = (ulong)*(byte *)(lVar8 + 0x4a);
      }
      uVar6 = uVar6 + 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar6 < uVar9);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x163865c | Core.Assets.AssetManager.AssetLoadSuccessHandler.EndInvoke
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00fdfb28) */
/* WARNING: Removing unreachable block (ram,0x00fdfb48) */
/* WARNING: Removing unreachable block (ram,0x00fdfb58) */
/* WARNING: Removing unreachable block (ram,0x00fdfb68) */
/* WARNING: Removing unreachable block (ram,0x00fdfb84) */
/* WARNING: Removing unreachable block (ram,0x00fdfb74) */
/* WARNING: Removing unreachable block (ram,0x00fdfba4) */
/* WARNING: Removing unreachable block (ram,0x00fdfbac) */

undefined8
Core_Assets_AssetManager_AssetLoadSuccessHandler__EndInvoke
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  plVar5 = &lStack_70;
  uVar1 = func_0x00ff58b0(param_2,auStack_68,&lStack_70);
  if (lStack_70 == 0) {
    return uVar1;
  }
  auVar12 = func_0x00f7723c();
  lVar4 = auVar12._8_8_;
  uVar1 = auVar12._0_8_;
  lVar8 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
  if ((ulong)*(byte *)(lVar8 + 0x4a) == 0) {
    uVar9 = 0;
  }
  else {
    uVar6 = 0;
    uVar9 = 0;
    plVar7 = (long *)(*(long *)(lVar8 + 0x28) + 0x10);
    do {
      uVar9 = ((ulong)(*(uint *)(*plVar7 + 8) >> 0x1e) & 1) + (uVar9 & 0xffffffff);
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 3;
    } while (uVar6 < *(byte *)(lVar8 + 0x4a));
  }
  if (lRam0000000003f95148 == 0) {
    lRam0000000003f95148 = func_0x00f76cd4(uRam0000000003ff75e0,1);
    DataMemoryBarrier(2,3);
  }
  uVar2 = func_0x00f76ce0(lRam0000000003f95148,uVar9);
  func_0x00f7a980(param_4,uVar2);
  func_0x00f7a980(plVar5,0);
  if ((*(byte *)(*(long *)(lVar8 + 0x18) + 0x132) >> 1 & 1) != 0) {
    uVar1 = func_0x00f775e4(uVar1);
  }
  if (*(char *)(lVar8 + 0x4a) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
  }
  uVar1 = func_0x00fdecac(lVar8,uVar1,uVar2,plVar5);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x4a);
  if (*(byte *)(lVar8 + 0x4a) != 0) {
    uVar6 = 0;
    iVar10 = 0;
    lVar11 = 0x10;
    do {
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x28) + lVar11) + 0xb) >> 6 & 1) != 0) {
        puVar3 = (undefined8 *)func_0x00faf4d8(*(undefined8 *)(lVar4 + 0x18),8,uVar6);
        uVar2 = *puVar3;
        puVar3 = (undefined8 *)func_0x00faf4d8(*param_4,8,(long)iVar10);
        *puVar3 = uVar2;
        func_0x00f774c4(*param_4,puVar3,uVar2);
        iVar10 = iVar10 + 1;
        uVar9 = (ulong)*(byte *)(lVar8 + 0x4a);
      }
      uVar6 = uVar6 + 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar6 < uVar9);
  }
  return uVar1;
}



