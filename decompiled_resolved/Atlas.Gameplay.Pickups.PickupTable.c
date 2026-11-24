// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Pickups.PickupTable

// ============================================================
// RVA: 0x14b983c | Atlas.Gameplay.Pickups.PickupTable..ctor
// ============================================================

void Atlas_Gameplay_Pickups_PickupTable___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x14baf20 | Atlas.Gameplay.Pickups.PickupTable.Roll
// ============================================================

ulong Atlas_Gameplay_Pickups_PickupTable__Roll
                (float param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  float fVar11;
  
  if ((param_3 != 0) && (lVar6 = *(long *)(param_3 + 0x20), lVar6 != 0)) {
    iVar2 = (int)*(ulong *)(lVar6 + 0x18);
    if (iVar2 == 0) {
      uVar7 = /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
      if ((bRam0000000003eb4aee & 1) == 0) {
        func_0x00f78a20(0x3d75da8);
        bRam0000000003eb4aee = 1;
        uVar7 = /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
      }
    }
    else {
      uVar1 = iVar2 - 1;
      uVar7 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        piVar9 = (int *)(lVar6 + 0x20);
        do {
          if (uVar8 == 0) {
            uVar4 = func_0x00f78b24();
            func_0x00f78ac0(uVar4,0);
            goto LAB_014bafd8;
          }
          if (param_1 < (float)*piVar9) {
            uVar4 = *(undefined8 *)piVar9;
            uVar5 = *(undefined8 *)(piVar9 + 2);
            goto LAB_014bafbc;
          }
          piVar9 = piVar9 + 4;
          uVar8 = uVar8 - 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
      uVar4 = *(undefined8 *)(lVar6 + 0x20);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
LAB_014bafbc:
      uVar7 = /*Atlas.Gameplay.Pickups.PickupTable$$RollFromRow*/ func_0x014bb504(param_2,uVar4,uVar5);
    }
    return uVar7;
  }
LAB_014bafd8:
  lVar6 = func_0x00f78af4();
  if (param_4 != (long *)0x0) {
    uVar1 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
    lVar10 = *(long *)(lVar6 + 0x48);
    uVar4 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
    if (lVar10 != 0) {
      iVar2 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(lVar10,uVar4);
      lVar10 = *(long *)(lVar6 + 0x58);
      uVar4 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
      if (lVar10 != 0) {
        iVar3 = Atlas_Gameplay_Usables_UsableManager__AreAnyUsablesLeftInPool(lVar10,uVar4,0);
        if (iVar3 == 0 || iVar2 == 0) {
          return 0;
        }
        if (0 < iVar2) {
          lVar10 = *(long *)(lVar6 + 0x88);
          if (lVar10 == 0) goto LAB_014bb124;
          if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_014bb128;
          if (iVar2 < (int)param_4[4] + *(int *)(lVar10 + (long)(int)uVar1 * 4 + 0x20)) {
            return 0;
          }
        }
        iVar2 = *(int *)((long)param_4 + 0x4c);
        if (iVar2 == 0) {
          return 0;
        }
        if (0 < iVar2) {
          lVar10 = *(long *)(lVar6 + 0x90);
          if (lVar10 == 0) goto LAB_014bb124;
          if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_014bb128;
          if (iVar2 < (int)param_4[4] + *(int *)(lVar10 + (long)(int)uVar1 * 4 + 0x20)) {
            return 0;
          }
        }
        if (*(float *)(param_4 + 10) <= 0.0) {
          return 1;
        }
        if (*(long *)(lVar6 + 0x98) != 0) {
          fVar11 = (float)func_0x0001c0c4(*(long *)(lVar6 + 0x98),(long)(int)uVar1);
          return (ulong)(fVar11 <= 0.0);
        }
      }
    }
  }
LAB_014bb124:
  func_0x00f78af4();
LAB_014bb128:
  uVar4 = func_0x00f78b24();
  func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb4aee & 1) == 0) {
    func_0x00f78a20(0x3d75da8);
    bRam0000000003eb4aee = 1;
  }
  return /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
}



// ============================================================
// RVA: 0x14bb134 | Atlas.Gameplay.Pickups.PickupTable.get_FallbackUsableID
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupTable__get_FallbackUsableID(void)

{
  if ((bRam0000000003eb4aee & 1) == 0) {
    func_0x00f78a20(0x3d75da8);
    bRam0000000003eb4aee = 1;
  }
  return /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
}



// ============================================================
// RVA: 0x14bb504 | Atlas.Gameplay.Pickups.PickupTable.RollFromRow
// ============================================================

undefined8
Atlas_Gameplay_Pickups_PickupTable__RollFromRow(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000003eb4aef & 1) == 0) {
    func_0x00f78a20(0x3d55d20);
    func_0x00f78a20(0x3d35928);
    func_0x00f78a20(0x3d1cbe8);
    func_0x00f78a20(0x3d639b8);
    func_0x00f78a20(0x3d285c8);
    bRam0000000003eb4aef = 1;
  }
  if (param_3 == 0) {
LAB_014bb6d4:
    lVar6 = func_0x00f78af4();
    return *(undefined8 *)(lVar6 + 0x20);
  }
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0) {
    uVar7 = /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
    if ((bRam0000000003eb4aee & 1) == 0) {
      func_0x00f78a20(0x3d75da8);
      bRam0000000003eb4aee = 1;
      uVar7 = /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
    }
  }
  else {
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupTable.<>c_TypeInfo*/ lRam0000000003d285c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupTable.<>c_TypeInfo*/ lRam0000000003d285c8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar4 = *(undefined8 **)(/*Atlas.Gameplay.Pickups.PickupTable.<>c_TypeInfo*/ lRam0000000003d285c8 + 0xb8);
    lVar6 = puVar4[1];
    if (lVar6 == 0) {
      if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupTable.<>c_TypeInfo*/ lRam0000000003d285c8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Pickups.PickupTable.<>c_TypeInfo*/ lRam0000000003d285c8 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar4 = *(undefined8 **)(/*Atlas.Gameplay.Pickups.PickupTable.<>c_TypeInfo*/ lRam0000000003d285c8 + 0xb8);
      }
      uVar7 = *puVar4;
      lVar6 = func_0x00f78aec(/*System.Func<PickupTableItem, int>_TypeInfo*/ uRam0000000003d1cbe8);
      /*System.Func<PickupTableItem, int>$$.ctor*/ func_0x0217b7f8(lVar6,uVar7,uRam0000000003d639b8,uRam0000000003d35928);
      *(long *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupTable.<>c_TypeInfo*/ lRam0000000003d285c8 + 0xb8) + 8) = lVar6;
    }
    uVar7 = /*System.Linq.Enumerable$$Sum<PickupTableItem>*/ func_0x01853d2c(param_3,lVar6,uRam0000000003d55d20);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(1,uVar7,0);
    uVar2 = iVar1 - 1;
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        if (*(uint *)(param_3 + 0x18) == uVar5) goto LAB_014bb6c8;
        iVar3 = iVar3 - *(int *)(param_3 + (long)(int)uVar5 * 0x10 + 0x28);
        if (iVar3 < 0) goto LAB_014bb6b0;
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
    uVar5 = uVar2;
    if (*(uint *)(param_3 + 0x18) <= uVar2) {
LAB_014bb6c8:
      uVar7 = func_0x00f78b24();
      func_0x00f78ac0(uVar7,0);
      goto LAB_014bb6d4;
    }
LAB_014bb6b0:
    uVar7 = *(undefined8 *)(param_3 + (long)(int)uVar5 * 0x10 + 0x20);
  }
  return uVar7;
}



