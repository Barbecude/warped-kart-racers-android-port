// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.MatchReceiveDataFunc

// ============================================================
// RVA: 0x167da30 | Core.Services.MatchReceiveDataFunc..ctor
// ============================================================

void Core_Services_MatchReceiveDataFunc___ctor(long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 **)(param_1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x167da40 | Core.Services.MatchReceiveDataFunc.Invoke
// ============================================================

void Core_Services_MatchReceiveDataFunc__Invoke
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined4 param_6)

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
  long *plVar13;
  code *pcVar14;
  long lVar15;
  long lStack_68;
  
  lStack_68 = param_1;
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    plVar13 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar8 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar13 = (long *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = plVar13[lVar8];
    pcVar14 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9);
    }
    iVar4 = func_0x00f78a4c(lVar9);
    bVar3 = *(char *)(lVar9 + 0x4a) == '\x05';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x0167dbf8:
          (*pcVar14)(param_2,param_3,param_4,param_5,param_6,lVar9);
        }
        else {
          if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(param_1 + 0x18) == 0)) goto code_r0x0167dad8;
          iVar4 = func_0x00f78a44(lVar9);
          iVar5 = func_0x00f78ec0(lVar9);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar5 == 0) {
              lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar9 + 0x138))
                        (plVar1,param_2,param_3,param_4,param_5,param_6,
                         *(undefined8 *)(lVar9 + 0x140));
              goto code_r0x0167dc14;
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
                  goto code_r0x0167ddd0;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x0167ddd0:
            pcVar14 = (code *)*puVar7;
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
                    goto code_r0x0167dda8;
                  }
                  piVar12 = piVar12 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              lVar10 = func_0x00fac1f0(plVar1);
code_r0x0167dda8:
              uVar6 = *(undefined8 *)(lVar10 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,param_4,param_5,param_6,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar9 + 0x48) == -1) || (*(long *)(param_1 + 0x18) == 0))
        goto code_r0x0167dbf8;
        iVar4 = func_0x00f78a44(lVar9);
        iVar5 = func_0x00f78ec0(lVar9);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar9 + 0x48);
          if (iVar5 == 0) {
            lVar9 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar9 + 0x138))
                      (param_2,param_3,param_4,param_5,param_6,*(undefined8 *)(lVar9 + 0x140));
            goto code_r0x0167dc14;
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
                goto code_r0x0167dd4c;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar9,(ulong)uVar2);
code_r0x0167dd4c:
          pcVar14 = (code *)*puVar7;
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
                  goto code_r0x0167dd24;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar10 = func_0x00fac1f0(param_2);
code_r0x0167dd24:
            uVar6 = *(undefined8 *)(lVar10 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,param_4,param_5,param_6,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x0167dbf8;
code_r0x0167dad8:
      (*pcVar14)(plVar1,param_2,param_3,param_4,param_5,param_6,lVar9);
    }
code_r0x0167dc14:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x167de14 | Core.Services.MatchReceiveDataFunc.BeginInvoke
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
Core_Services_MatchReceiveDataFunc__BeginInvoke
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 *param_8)

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
  long lStack_110;
  undefined1 auStack_108 [8];
  undefined1 uStack_9d;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR_03a5d648;
  uStack_9d = param_6;
  uStack_9c = param_5;
  uStack_98 = param_4;
  uStack_8c = param_3;
  if ((bRam0000000003eb59e2 & 1) == 0) {
    func_0x00f78a20(0x3d203a0);
    func_0x00f78a20(0x3d22940);
    func_0x00f78a20(0x3d25628);
    bRam0000000003eb59e2 = 1;
  }
  uStack_60 = 0;
  uStack_88 = param_2;
  uStack_80 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_8c);
  uStack_78 = func_0x00f78ae0(/*IntPtr_TypeInfo*/ uRam0000000003d22940,&uStack_98);
  uStack_70 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_9c);
  uStack_68 = func_0x00f78ae0(/*byte_TypeInfo*/ uRam0000000003d203a0,&uStack_9d);
  uVar3 = func_0x00f789cc(param_1,&uStack_88,param_7);
  if (*(long *)PTR_03a5d648 == lStack_58) {
    return uVar3;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_110;
  uVar3 = func_0x00ff58b0(extraout_x1,auStack_108,&lStack_110);
  if (lStack_110 == 0) {
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
  func_0x00f7a980(param_8,uVar1);
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
        puVar2 = (undefined8 *)func_0x00faf4d8(*param_8,8,(long)iVar10);
        *puVar2 = uVar1;
        func_0x00f774c4(*param_8,puVar2,uVar1);
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
// RVA: 0x167df44 | Core.Services.MatchReceiveDataFunc.EndInvoke
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
Core_Services_MatchReceiveDataFunc__EndInvoke
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



