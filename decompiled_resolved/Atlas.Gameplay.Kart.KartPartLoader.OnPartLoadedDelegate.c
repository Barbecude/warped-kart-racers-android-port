// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate

// ============================================================
// RVA: 0x1547c18 | Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartPartLoader_OnPartLoadedDelegate___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 **)(param_1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x15556a4 | Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate.Invoke
// ============================================================

void Atlas_Gameplay_Kart_KartPartLoader_OnPartLoadedDelegate__Invoke
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
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
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  lStack_70 = param_1;
  plStack_68 = param_2;
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    plVar15 = &lStack_70;
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
  lStack_78 = param_1;
  do {
    lVar9 = plVar15[lVar8];
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      plVar5 = &lStack_78;
      if (plVar1 == (long *)0x0) goto code_r0x015557f0;
      if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
         (*(long *)(lStack_78 + 0x18) == 0)) goto code_r0x015557cc;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      plVar5 = plStack_68;
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar9 + 0x138))
                    (plVar1,plStack_68,param_3,param_4,param_5,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x01555804;
        }
        lVar9 = func_0x00f78a48(lVar9);
        plVar5 = plStack_68;
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x015558e4;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x015558e4:
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
                goto code_r0x015558b4;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x015558b4:
          uVar6 = *(undefined8 *)(lVar10 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
        pcVar13 = (code *)*puVar7;
      }
      (*pcVar13)(plVar1,plVar5,param_3,param_4,param_5,puVar7);
    }
    else {
      plVar5 = plStack_68;
      if (*(char *)(lVar9 + 0x4a) == '\x04') {
code_r0x015557f0:
        (*pcVar13)(plVar5,param_3,param_4,param_5,lVar9);
      }
      else {
code_r0x015557cc:
        (*pcVar13)(plVar1,plStack_68,param_3,param_4,param_5,lVar9);
      }
    }
code_r0x01555804:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1555924 | Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate.BeginInvoke
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
Atlas_Gameplay_Kart_KartPartLoader_OnPartLoadedDelegate__BeginInvoke
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 *param_7)

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
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR_03a5d648;
  uStack_8c = param_4;
  uStack_88 = param_2;
  if ((bRam0000000003eb4fa1 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d22cb8);
    bRam0000000003eb4fa1 = 1;
  }
  uStack_60 = 0;
  uStack_80 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ uRam0000000003d21270,&uStack_88);
  uStack_78 = param_3;
  uStack_70 = func_0x00f78ae0(/*Atlas.Gameplay.Kart.KartPart_TypeInfo*/ uRam0000000003d22cb8,&uStack_8c);
  uStack_68 = param_5;
  uVar3 = func_0x00f789cc(param_1,&uStack_80,param_6);
  if (*(long *)PTR_03a5d648 == lStack_58) {
    return uVar3;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_100;
  uVar3 = func_0x00ff58b0(extraout_x1,auStack_f8,&lStack_100);
  if (lStack_100 == 0) {
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
  func_0x00f7a980(param_7,uVar1);
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
        puVar2 = (undefined8 *)func_0x00faf4d8(*param_7,8,(long)iVar10);
        *puVar2 = uVar1;
        func_0x00f774c4(*param_7,puVar2,uVar1);
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
// RVA: 0x1555a18 | Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate.EndInvoke
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
Atlas_Gameplay_Kart_KartPartLoader_OnPartLoadedDelegate__EndInvoke
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



