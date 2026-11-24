// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.OnCollisionDelegate

// ============================================================
// RVA: 0x14b301c | Atlas.Gameplay.Kart.OnCollisionDelegate..ctor
// ============================================================

void Atlas_Gameplay_Kart_OnCollisionDelegate___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 **)(param_1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x14b302c | Atlas.Gameplay.Kart.OnCollisionDelegate.Invoke
// ============================================================

void Atlas_Gameplay_Kart_OnCollisionDelegate__Invoke(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lStack_98 = param_1;
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 == 0) {
    plVar13 = &lStack_98;
    lVar12 = 1;
  }
  else {
    lVar12 = *(long *)(lVar6 + 0x18);
    if (lVar12 == 0) {
      return;
    }
    plVar13 = (long *)(lVar6 + 0x20);
  }
  lVar6 = 0;
  do {
    lVar7 = plVar13[lVar6];
    pcVar11 = *(code **)(lVar7 + 0x10);
    plVar1 = *(long **)(lVar7 + 0x20);
    lVar7 = *(long *)(lVar7 + 0x28);
    if (*(short *)(lVar7 + 0x48) == -1) {
      func_0x00f78ad8(lVar7);
    }
    iVar3 = func_0x00f78a4c(lVar7);
    if (iVar3 == 0) {
      puVar5 = param_2 + -2;
      if (plVar1 == (long *)0x0) goto code_r0x014b31a0;
      if (((*(short *)(lVar7 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
         (*(long *)(param_1 + 0x18) == 0)) {
        uStack_1a8 = param_2[1];
        uStack_1b0 = *param_2;
        uStack_198 = param_2[3];
        uStack_1a0 = param_2[2];
        uStack_190 = param_2[4];
        puVar5 = &uStack_1b0;
        goto code_r0x014b318c;
      }
      iVar3 = func_0x00f78a44(lVar7);
      iVar4 = func_0x00f78ec0(lVar7);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar7 + 0x48);
        if (iVar4 == 0) {
          lVar7 = *plVar1 + (ulong)uVar2 * 0x10;
          uStack_88 = param_2[1];
          uStack_90 = *param_2;
          uStack_78 = param_2[3];
          uStack_80 = param_2[2];
          uStack_70 = param_2[4];
          (**(code **)(lVar7 + 0x138))(plVar1,&uStack_90,*(undefined8 *)(lVar7 + 0x140));
          goto code_r0x014b31a8;
        }
        lVar7 = func_0x00f78a48(lVar7);
        uStack_178 = param_2[1];
        uStack_180 = *param_2;
        uStack_168 = param_2[3];
        uStack_170 = param_2[2];
        uStack_160 = param_2[4];
        lVar8 = *plVar1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(int)(*piVar10 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x014b32d0;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar1,lVar7,(ulong)uVar2);
code_r0x014b32d0:
        pcVar11 = (code *)*puVar5;
        uStack_88 = uStack_178;
        uStack_90 = uStack_180;
        uStack_78 = uStack_168;
        uStack_80 = uStack_170;
        uStack_70 = uStack_160;
        puVar5 = (undefined8 *)puVar5[1];
      }
      else if (iVar4 == 0) {
        uStack_148 = param_2[1];
        uStack_150 = *param_2;
        uStack_138 = param_2[3];
        uStack_140 = param_2[2];
        uStack_130 = param_2[4];
        puVar5 = (undefined8 *)
                 func_0x00f78acc(*(undefined8 *)
                                  (*plVar1 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140),lVar7)
        ;
        pcVar11 = (code *)*puVar5;
        uStack_70 = uStack_130;
        uStack_90 = uStack_150;
        uStack_88 = uStack_148;
        uStack_80 = uStack_140;
        uStack_78 = uStack_138;
      }
      else {
        uStack_118 = param_2[1];
        uStack_120 = *param_2;
        uStack_108 = param_2[3];
        uStack_110 = param_2[2];
        uStack_100 = param_2[4];
        lVar8 = *plVar1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)(lVar7 + 0x18)) {
              lVar8 = lVar8 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10 + 0x138
              ;
              goto code_r0x014b3298;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        lVar8 = func_0x00fac1f0(plVar1);
code_r0x014b3298:
        puVar5 = (undefined8 *)func_0x00f78acc(*(undefined8 *)(lVar8 + 8),lVar7);
        pcVar11 = (code *)*puVar5;
        uStack_70 = uStack_100;
        uStack_90 = uStack_120;
        uStack_88 = uStack_118;
        uStack_80 = uStack_110;
        uStack_78 = uStack_108;
      }
      (*pcVar11)(plVar1,&uStack_90,puVar5);
    }
    else if (*(char *)(lVar7 + 0x4a) == '\x01') {
      uStack_b8 = param_2[1];
      uStack_c0 = *param_2;
      uStack_a8 = param_2[3];
      uStack_b0 = param_2[2];
      uStack_a0 = param_2[4];
      puVar5 = &uStack_c0;
code_r0x014b31a0:
      (*pcVar11)(puVar5,lVar7);
    }
    else {
      uStack_e8 = param_2[1];
      uStack_f0 = *param_2;
      uStack_d8 = param_2[3];
      uStack_e0 = param_2[2];
      uStack_d0 = param_2[4];
      puVar5 = &uStack_f0;
code_r0x014b318c:
      (*pcVar11)(plVar1,puVar5,lVar7);
    }
code_r0x014b31a8:
    lVar6 = lVar6 + 1;
    if (lVar6 == lVar12) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x14b3318 | Atlas.Gameplay.Kart.OnCollisionDelegate.BeginInvoke
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
Atlas_Gameplay_Kart_OnCollisionDelegate__BeginInvoke
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4aaa & 1) == 0) {
    func_0x00f78a20(0x3d22cd0);
    bRam0000000003eb4aaa = 1;
  }
  uStack_50 = 0;
  uStack_58 = func_0x00f78ae0(/*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo_TypeInfo*/ uRam0000000003d22cd0,param_2);
  uVar3 = func_0x00f789cc(param_1,&uStack_58,param_3);
  if (*(long *)PTR_03a5d648 == lStack_48) {
    return uVar3;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_d0;
  uVar3 = func_0x00ff58b0(extraout_x1,auStack_c8,&lStack_d0);
  if (lStack_d0 == 0) {
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
  func_0x00f7a980(param_4,uVar1);
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
        puVar2 = (undefined8 *)func_0x00faf4d8(*param_4,8,(long)iVar10);
        *puVar2 = uVar1;
        func_0x00f774c4(*param_4,puVar2,uVar1);
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
// RVA: 0x14b33d4 | Atlas.Gameplay.Kart.OnCollisionDelegate.EndInvoke
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
Atlas_Gameplay_Kart_OnCollisionDelegate__EndInvoke
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



