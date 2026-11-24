// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartUsableManager

// ============================================================
// RVA: 0x15e1a64 | Atlas.Gameplay.Kart.KartUsableManager.get_CurrentGroupId
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartUsableManager__get_CurrentGroupId(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15e1a6c | Atlas.Gameplay.Kart.KartUsableManager.set_CurrentGroupId
// ============================================================

void Atlas_Gameplay_Kart_KartUsableManager__set_CurrentGroupId(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ============================================================
// RVA: 0x15e1a74 | Atlas.Gameplay.Kart.KartUsableManager.get_UsesRemaining
// ============================================================

ulong Atlas_Gameplay_Kart_KartUsableManager__get_UsesRemaining(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_var;
  long lVar3;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x70);
    iVar2 = *(int *)(*(long *)(param_1 + 0x80) + 0x20);
    if ((bRam0000000003eb53ca & 1) == 0) {
      func_0x00f78a20(0x3d2edf0);
      bRam0000000003eb53ca = 1;
    }
    if (*(long *)(param_1 + 0xc0) != 0) {
      /*System.Collections.Generic.Dictionary<int, KartUsableManager.CommandsReceived>$$get_Item*/ func_0x01e9840c(*(long *)(param_1 + 0xc0),uVar1,uRam0000000003d2edf0);
      return (ulong)(uint)(iVar2 - extraout_var);
    }
    lVar3 = func_0x00f78af4();
    return *(ulong *)(lVar3 + 0x78);
  }
  lVar3 = func_0x00f78af4();
  return (ulong)(*(long *)(lVar3 + 0x78) != 0);
}



// ============================================================
// RVA: 0x15e1aac | Atlas.Gameplay.Kart.KartUsableManager.get_HasUsableEquipped
// ============================================================

bool Atlas_Gameplay_Kart_KartUsableManager__get_HasUsableEquipped(long param_1)

{
  return *(long *)(param_1 + 0x78) != 0;
}



// ============================================================
// RVA: 0x15e1abc | Atlas.Gameplay.Kart.KartUsableManager.GetUsesLeft
// ============================================================

ulong Atlas_Gameplay_Kart_KartUsableManager__GetUsesLeft
                (long param_1,undefined8 param_2,int param_3)

{
  int extraout_var;
  long lVar1;
  
  if ((bRam0000000003eb53ca & 1) == 0) {
    func_0x00f78a20(0x3d2edf0);
    bRam0000000003eb53ca = 1;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    /*System.Collections.Generic.Dictionary<int, KartUsableManager.CommandsReceived>$$get_Item*/ func_0x01e9840c(*(long *)(param_1 + 0xc0),param_2,uRam0000000003d2edf0);
    return (ulong)(uint)(param_3 - extraout_var);
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 0x78);
}



// ============================================================
// RVA: 0x15e1b30 | Atlas.Gameplay.Kart.KartUsableManager.get_CurHeldUsable
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartUsableManager__get_CurHeldUsable(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15e1b38 | Atlas.Gameplay.Kart.KartUsableManager.get_CanStartUseLocal
// ============================================================

ulong Atlas_Gameplay_Kart_KartUsableManager__get_CanStartUseLocal(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = Atlas_Gameplay_Kart_KartUsableManager__get_UsesRemaining();
  if ((((iVar1 < 1) || (*(long *)(param_1 + 0x78) == 0)) || (0 < *(int *)(param_1 + 0xa8))) ||
     (0 < *(int *)(param_1 + 0xb8))) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 == 0) {
      lVar3 = func_0x00f78af4();
      return (ulong)(0 < *(int *)(lVar3 + 0xa8));
    }
    uStack_38 = *(undefined8 *)(lVar3 + 0x50);
    uStack_40 = *(undefined8 *)(lVar3 + 0x48);
    uStack_28 = *(undefined8 *)(lVar3 + 0x60);
    uStack_30 = *(undefined8 *)(lVar3 + 0x58);
    uVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_40,0);
    if ((int)uVar2 != 0) {
      uVar2 = (ulong)(*(int *)(param_1 + 0xbc) < 1);
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15e1bc4 | Atlas.Gameplay.Kart.KartUsableManager.get_IsShuffling
// ============================================================

bool Atlas_Gameplay_Kart_KartUsableManager__get_IsShuffling(long param_1)

{
  return 0 < *(int *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15e1bd4 | Atlas.Gameplay.Kart.KartUsableManager.get_IsActivating
// ============================================================

bool Atlas_Gameplay_Kart_KartUsableManager__get_IsActivating(long param_1)

{
  if (*(long *)(param_1 + 0x78) != 0) {
    return 0 < *(int *)(param_1 + 0xb8);
  }
  return false;
}



// ============================================================
// RVA: 0x15e1bf4 | Atlas.Gameplay.Kart.KartUsableManager.get_IsReEquipping
// ============================================================

bool Atlas_Gameplay_Kart_KartUsableManager__get_IsReEquipping(long param_1)

{
  return 0 < *(int *)(param_1 + 0xbc);
}



// ============================================================
// RVA: 0x15e1c04 | Atlas.Gameplay.Kart.KartUsableManager.get_IsEquipping
// ============================================================

bool Atlas_Gameplay_Kart_KartUsableManager__get_IsEquipping(long param_1)

{
  if (*(long *)(param_1 + 0x78) != 0) {
    return 0 < *(int *)(param_1 + 0xb4);
  }
  return false;
}



// ============================================================
// RVA: 0x15e1c24 | Atlas.Gameplay.Kart.KartUsableManager.get_HasUsableEquippedOrShuffling
// ============================================================

bool Atlas_Gameplay_Kart_KartUsableManager__get_HasUsableEquippedOrShuffling(long param_1)

{
  if (*(long *)(param_1 + 0x78) != 0) {
    return true;
  }
  return 0 < *(int *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15e1c44 | Atlas.Gameplay.Kart.KartUsableManager.get_IgnoreUseCount
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartUsableManager__get_IgnoreUseCount(long param_1)

{
  return *(undefined1 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x15e1c4c | Atlas.Gameplay.Kart.KartUsableManager.set_IgnoreUseCount
// ============================================================

void Atlas_Gameplay_Kart_KartUsableManager__set_IgnoreUseCount(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 200) = param_2;
  return;
}



// ============================================================
// RVA: 0x15e1c54 | Atlas.Gameplay.Kart.KartUsableManager.IncrementGroupID
// ============================================================

int Atlas_Gameplay_Kart_KartUsableManager__IncrementGroupID(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28) + 1;
  *(int *)(param_1 + 0x28) = iVar1;
  return iVar1;
}



// ============================================================
// RVA: 0x15e1c68 | Atlas.Gameplay.Kart.KartUsableManager.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e1e30 | Atlas.Gameplay.Kart.KartUsableManager.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e1f1c | Atlas.Gameplay.Kart.KartUsableManager.Update
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e1fb0 | Atlas.Gameplay.Kart.KartUsableManager.UpdateTimers
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e21cc | Atlas.Gameplay.Kart.KartUsableManager.StartUseLocal
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e233c | Atlas.Gameplay.Kart.KartUsableManager.FinishUse
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e23f4 | Atlas.Gameplay.Kart.KartUsableManager.ReEquip
// ============================================================

/* WARNING: Possible PIC construction at 0x015e2808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e2854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e286c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e2858) */
/* WARNING: Removing unreachable block (ram,0x015e280c) */
/* WARNING: Removing unreachable block (ram,0x015e2810) */
/* WARNING: Removing unreachable block (ram,0x015e2828) */
/* WARNING: Removing unreachable block (ram,0x015e2830) */
/* WARNING: Removing unreachable block (ram,0x015e2870) */
/* WARNING: Removing unreachable block (ram,0x015e289c) */
/* WARNING: Removing unreachable block (ram,0x015e2874) */
/* WARNING: Removing unreachable block (ram,0x015e287c) */
/* WARNING: Removing unreachable block (ram,0x015e28b0) */
/* WARNING: Removing unreachable block (ram,0x015e28d0) */
/* WARNING: Removing unreachable block (ram,0x015e28e4) */
/* WARNING: Removing unreachable block (ram,0x015e28f4) */
/* WARNING: Removing unreachable block (ram,0x015e28fc) */
/* WARNING: Removing unreachable block (ram,0x015e2904) */
/* WARNING: Removing unreachable block (ram,0x015e2920) */
/* WARNING: Removing unreachable block (ram,0x015e2928) */
/* WARNING: Removing unreachable block (ram,0x015e2930) */
/* WARNING: Removing unreachable block (ram,0x015e293c) */
/* WARNING: Removing unreachable block (ram,0x015e294c) */
/* WARNING: Removing unreachable block (ram,0x015e2954) */
/* WARNING: Removing unreachable block (ram,0x015e2964) */
/* WARNING: Removing unreachable block (ram,0x015e2988) */
/* WARNING: Removing unreachable block (ram,0x015e296c) */
/* WARNING: Removing unreachable block (ram,0x015e2994) */
/* WARNING: Removing unreachable block (ram,0x015e29c0) */
/* WARNING: Removing unreachable block (ram,0x015e29ec) */
/* WARNING: Removing unreachable block (ram,0x015e29f4) */
/* WARNING: Removing unreachable block (ram,0x015e2a10) */
/* WARNING: Removing unreachable block (ram,0x015e2a20) */
/* WARNING: Removing unreachable block (ram,0x015e2a28) */
/* WARNING: Removing unreachable block (ram,0x015e2a30) */
/* WARNING: Removing unreachable block (ram,0x015e2a4c) */
/* WARNING: Removing unreachable block (ram,0x015e2a5c) */
/* WARNING: Removing unreachable block (ram,0x015e2a70) */
/* WARNING: Removing unreachable block (ram,0x015e2a78) */
/* WARNING: Removing unreachable block (ram,0x015e2a84) */
/* WARNING: Removing unreachable block (ram,0x015e2a8c) */
/* WARNING: Removing unreachable block (ram,0x015e2a94) */
/* WARNING: Removing unreachable block (ram,0x015e2a9c) */
/* WARNING: Removing unreachable block (ram,0x015e2aa4) */
/* WARNING: Removing unreachable block (ram,0x015e2aac) */
/* WARNING: Removing unreachable block (ram,0x015e2ab4) */
/* WARNING: Removing unreachable block (ram,0x015e2ad0) */
/* WARNING: Removing unreachable block (ram,0x015e2ad8) */
/* WARNING: Removing unreachable block (ram,0x015e2adc) */
/* WARNING: Removing unreachable block (ram,0x015e2aec) */
/* WARNING: Removing unreachable block (ram,0x015e2b10) */
/* WARNING: Removing unreachable block (ram,0x015e2b2c) */
/* WARNING: Removing unreachable block (ram,0x015e2b34) */
/* WARNING: Removing unreachable block (ram,0x015e2b40) */
/* WARNING: Removing unreachable block (ram,0x015e2b54) */
/* WARNING: Removing unreachable block (ram,0x015e2b78) */
/* WARNING: Removing unreachable block (ram,0x015e2ba0) */
/* WARNING: Removing unreachable block (ram,0x015e2bb4) */
/* WARNING: Removing unreachable block (ram,0x015e2bbc) */
/* WARNING: Removing unreachable block (ram,0x015e2bc4) */
/* WARNING: Removing unreachable block (ram,0x015e2bcc) */
/* WARNING: Removing unreachable block (ram,0x015e2be8) */
/* WARNING: Removing unreachable block (ram,0x015e2c20) */
/* WARNING: Removing unreachable block (ram,0x015e2bf8) */
/* WARNING: Removing unreachable block (ram,0x015e2c0c) */
/* WARNING: Removing unreachable block (ram,0x015e2c10) */
/* WARNING: Removing unreachable block (ram,0x015e2b5c) */
/* WARNING: Removing unreachable block (ram,0x015e2b64) */
/* WARNING: Removing unreachable block (ram,0x015e2974) */
/* WARNING: Removing unreachable block (ram,0x015a5c14) */
/* WARNING: Removing unreachable block (ram,0x015a5c24) */
/* WARNING: Removing unreachable block (ram,0x015a5c1c) */
/* WARNING: Removing unreachable block (ram,0x015522f4) */
/* WARNING: Removing unreachable block (ram,0x01552334) */
/* WARNING: Removing unreachable block (ram,0x01552324) */
/* WARNING: Removing unreachable block (ram,0x0155232c) */
/* WARNING: Removing unreachable block (ram,0x0155233c) */
/* WARNING: Removing unreachable block (ram,0x01552340) */
/* WARNING: Removing unreachable block (ram,0x01552358) */
/* WARNING: Removing unreachable block (ram,0x01552360) */
/* WARNING: Removing unreachable block (ram,0x0155238c) */
/* WARNING: Removing unreachable block (ram,0x01552410) */
/* WARNING: Removing unreachable block (ram,0x0155241c) */
/* WARNING: Removing unreachable block (ram,0x01552424) */
/* WARNING: Removing unreachable block (ram,0x0155249c) */
/* WARNING: Removing unreachable block (ram,0x01552500) */
/* WARNING: Removing unreachable block (ram,0x015524a4) */
/* WARNING: Removing unreachable block (ram,0x015524bc) */
/* WARNING: Removing unreachable block (ram,0x015524c4) */
/* WARNING: Removing unreachable block (ram,0x015525a4) */
/* WARNING: Removing unreachable block (ram,0x015524d0) */
/* WARNING: Removing unreachable block (ram,0x015524dc) */
/* WARNING: Removing unreachable block (ram,0x015525b4) */
/* WARNING: Removing unreachable block (ram,0x0155243c) */
/* WARNING: Removing unreachable block (ram,0x015524ec) */
/* WARNING: Removing unreachable block (ram,0x01552440) */
/* WARNING: Removing unreachable block (ram,0x01552454) */
/* WARNING: Removing unreachable block (ram,0x0155245c) */
/* WARNING: Removing unreachable block (ram,0x0155257c) */
/* WARNING: Removing unreachable block (ram,0x01552468) */
/* WARNING: Removing unreachable block (ram,0x01552474) */
/* WARNING: Removing unreachable block (ram,0x0155258c) */
/* WARNING: Removing unreachable block (ram,0x01552590) */
/* WARNING: Removing unreachable block (ram,0x015525b8) */
/* WARNING: Removing unreachable block (ram,0x01552390) */
/* WARNING: Removing unreachable block (ram,0x01552394) */
/* WARNING: Removing unreachable block (ram,0x015523a0) */
/* WARNING: Removing unreachable block (ram,0x015523ac) */
/* WARNING: Removing unreachable block (ram,0x015523b4) */
/* WARNING: Removing unreachable block (ram,0x01552518) */
/* WARNING: Removing unreachable block (ram,0x015525c4) */
/* WARNING: Removing unreachable block (ram,0x01552520) */
/* WARNING: Removing unreachable block (ram,0x01552538) */
/* WARNING: Removing unreachable block (ram,0x01552540) */
/* WARNING: Removing unreachable block (ram,0x01552608) */
/* WARNING: Removing unreachable block (ram,0x0155254c) */
/* WARNING: Removing unreachable block (ram,0x01552558) */
/* WARNING: Removing unreachable block (ram,0x01552618) */
/* WARNING: Removing unreachable block (ram,0x015523cc) */
/* WARNING: Removing unreachable block (ram,0x01552568) */
/* WARNING: Removing unreachable block (ram,0x015523d0) */
/* WARNING: Removing unreachable block (ram,0x015523e4) */
/* WARNING: Removing unreachable block (ram,0x015523ec) */
/* WARNING: Removing unreachable block (ram,0x015525e0) */
/* WARNING: Removing unreachable block (ram,0x015523f8) */
/* WARNING: Removing unreachable block (ram,0x01552404) */
/* WARNING: Removing unreachable block (ram,0x015525f0) */
/* WARNING: Removing unreachable block (ram,0x015525f4) */
/* WARNING: Removing unreachable block (ram,0x0155261c) */
/* WARNING: Removing unreachable block (ram,0x01552374) */
/* WARNING: Removing unreachable block (ram,0x01552480) */
/* WARNING: Removing unreachable block (ram,0x01552378) */
/* WARNING: Removing unreachable block (ram,0x0155248c) */
/* WARNING: Removing unreachable block (ram,0x01552498) */
/* WARNING: Removing unreachable block (ram,0x0155262c) */
/* WARNING: Removing unreachable block (ram,0x015e2884) */
/* WARNING: Removing unreachable block (ram,0x015c0ed0) */
/* WARNING: Removing unreachable block (ram,0x015c0ef0) */
/* WARNING: Removing unreachable block (ram,0x015c0f10) */
/* WARNING: Removing unreachable block (ram,0x015c0f28) */
/* WARNING: Removing unreachable block (ram,0x015c0f40) */
/* WARNING: Removing unreachable block (ram,0x015c0f48) */
/* WARNING: Removing unreachable block (ram,0x015c0f4c) */
/* WARNING: Removing unreachable block (ram,0x015c0f50) */
/* WARNING: Removing unreachable block (ram,0x015c0f74) */
/* WARNING: Removing unreachable block (ram,0x015c0f88) */
/* WARNING: Removing unreachable block (ram,0x015c0fb4) */
/* WARNING: Removing unreachable block (ram,0x015c0fa0) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x015c0f18) */

ulong Atlas_Gameplay_Kart_KartUsableManager__ReEquip
                (ulong param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar12;
  undefined8 *extraout_x8;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined1 *puVar16;
  undefined8 unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 *puVar11;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    return param_1;
  }
  uStack_48 = *(undefined8 *)(param_1 + 0x78);
  uStack_50 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = *(undefined8 *)(param_1 + 0x88);
  uStack_40 = *(undefined8 *)(param_1 + 0x80);
  uStack_28 = *(undefined8 *)(param_1 + 0x98);
  uStack_30 = *(undefined8 *)(param_1 + 0x90);
  uVar7 = /*Atlas.Gameplay.Kart.KartUsableManager$$SpawnUsable*/ func_0x015e3a50(param_1,&uStack_50);
  *(undefined8 *)(param_1 + 0x78) = uVar7;
  /*Atlas.Gameplay.Kart.KartUsableManager$$AttachToHandVisuals*/ func_0x015e3ab0(param_1,uVar7);
  if ((((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x78) != 0)) &&
      (lVar14 = *(long *)(*(long *)(param_1 + 0x78) + 0x30), lVar14 != 0)) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 0x30), lVar8 != 0)) {
    uVar9 = /*Atlas.Gameplay.Kart.KartVisualAnimation$$PlayItemPickup*/ func_0x015e3af0(lVar8,*(char *)(lVar14 + 0x49) != '\0');
    if (*(long *)(param_1 + 0x80) != 0) {
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x28);
      return uVar9;
    }
  }
  puVar17 = &Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal;
  uVar9 = func_0x00f78af4();
  puVar6 = &uStack_50;
  do {
    *(undefined8 *)((long)puVar6 + -0x20) = unaff_x20;
    *(ulong *)((long)puVar6 + -0x18) = param_1;
    *(undefined1 **)((long)puVar6 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)puVar6 + -8) = puVar17;
    if (*(long *)(uVar9 + 0x78) != 0) {
      return 0;
    }
    lVar14 = *(long *)(uVar9 + 0x58);
    uVar7 = param_4;
    if (lVar14 != 0) {
      uVar7 = *(undefined8 *)(lVar14 + 0x48);
      uVar19 = *(undefined8 *)(lVar14 + 0x60);
      uVar13 = *(undefined8 *)(lVar14 + 0x58);
      *(undefined8 *)((long)puVar6 + -0x38) = *(undefined8 *)(lVar14 + 0x50);
      *(undefined8 *)((long)puVar6 + -0x40) = uVar7;
      *(undefined8 *)((long)puVar6 + -0x28) = uVar19;
      *(undefined8 *)((long)puVar6 + -0x30) = uVar13;
      uVar10 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90((undefined1 *)((long)puVar6 + -0x40),0);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      uVar7 = param_4;
      if ((*(long *)(uVar9 + 0x58) != 0) &&
         (lVar14 = *(long *)(*(long *)(uVar9 + 0x58) + 0x90), lVar14 != 0)) {
        return (ulong)(*(char *)(lVar14 + 0x98) == '\0');
      }
    }
    auVar23 = func_0x00f78af4();
    lVar14 = auVar23._0_8_;
    auVar25._8_8_ = lVar14;
    auVar25._0_8_ = unaff_x22;
    *(undefined8 *)((long)puVar6 + -0x70) = unaff_x22;
    *(undefined8 *)((long)puVar6 + -0x68) = unaff_x21;
    *(undefined8 *)((long)puVar6 + -0x60) = unaff_x20;
    *(ulong *)((long)puVar6 + -0x58) = uVar9;
    *(undefined1 **)((long)puVar6 + -0x50) = (undefined1 *)((long)puVar6 + -0x10);
    *(undefined **)((long)puVar6 + -0x48) = &Atlas_Gameplay_Kart_KartUsableManager__HasUsesRemaining
    ;
    if ((bRam0000000003eb53c1 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c1 = 1;
    }
    if (((*(long *)(lVar14 + 0x30) != 0) &&
        (lVar8 = *(long *)(*(long *)(lVar14 + 0x30) + 0x10), lVar8 != 0)) &&
       (param_3 = puRam0000000003d57318, lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,auVar23._8_8_), lVar8 != 0))
    {
      return (ulong)(0 < *(int *)(lVar8 + 0x20));
    }
    auVar24 = func_0x00f78af4();
    lVar8 = auVar24._0_8_;
    auVar5._8_8_ = lVar14;
    auVar5._0_8_ = lVar8;
    *(undefined8 *)((long)puVar6 + -0xa0) = unaff_x22;
    *(undefined8 *)((long)puVar6 + -0x98) = 0x3eb5000;
    *(undefined1 (*) [16])((long)puVar6 + -0x90) = auVar23;
    *(undefined1 **)((long)puVar6 + -0x80) = (undefined1 *)((long)puVar6 + -0x50);
    *(undefined **)((long)puVar6 + -0x78) =
         &Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand;
    *(undefined8 *)((long)puVar6 + -0xa8) = *(undefined8 *)PTR_03a5d648;
    *(undefined4 *)((long)puVar6 + -0xc4) = 0;
    *(undefined2 *)((long)puVar6 + -0xd4) = 0;
    *(undefined1 *)((long)puVar6 + -0xd2) = 0;
    puVar12 = param_3;
    puVar16 = (undefined1 *)0x3eb5000;
    if ((*(long *)(lVar8 + 0x48) == 0) ||
       (lVar14 = *(long *)(*(long *)(lVar8 + 0x48) + 0x20), auVar25 = auVar5, lVar14 == 0)) {
code_r0x015e2660:
      auVar24 = auVar25;
      func_0x00f78af4();
    }
    else {
      uVar9 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)puVar6 + -0xf0),lVar14,0);
      *(undefined8 *)((long)puVar6 + -0xb8) = *(undefined8 *)((long)puVar6 + -0xe8);
      *(undefined8 *)((long)puVar6 + -0xc0) = *(undefined8 *)((long)puVar6 + -0xf0);
      *(undefined8 *)((long)puVar6 + -0xb0) = *(undefined8 *)((long)puVar6 + -0xe0);
      uVar13 = *(undefined8 *)(lVar8 + 0xa0);
      *(undefined8 *)((long)puVar6 + -0xd1) = 0;
      *(undefined4 *)((long)puVar6 + -0xc9) = 0;
      puVar16 = param_3;
      auVar25 = auVar24;
      if (param_3 == (undefined1 *)0x0) goto code_r0x015e2660;
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      *(int *)extraout_x8 = auVar24._8_4_;
      *(undefined4 *)((long)extraout_x8 + 4) = 0;
      extraout_x8[1] = uVar13;
      *(undefined4 *)(extraout_x8 + 2) = uVar2;
      uVar13 = *(undefined8 *)((long)puVar6 + -0xc4);
      *(undefined8 *)((long)extraout_x8 + 0x1c) = *(undefined8 *)((long)puVar6 + -0xbc);
      *(undefined8 *)((long)extraout_x8 + 0x14) = uVar13;
      uVar13 = *(undefined8 *)((long)puVar6 + -0xb8);
      extraout_x8[5] = *(undefined8 *)((long)puVar6 + -0xb0);
      extraout_x8[4] = uVar13;
      *(undefined1 *)(extraout_x8 + 6) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x31) = *(undefined8 *)((long)puVar6 + -0xd4);
      extraout_x8[7] = *(undefined8 *)((long)puVar6 + -0xcd);
      if (*(long *)PTR_03a5d648 == *(long *)((long)puVar6 + -0xa8)) {
        return uVar9;
      }
    }
    auVar25 = ___stack_chk_fail();
    puVar11 = auVar25._8_8_;
    lVar14 = auVar25._0_8_;
    register0x00000008 = (BADSPACEBASE *)((long)puVar6 + -0x220);
    *(undefined8 *)((long)puVar6 + -0x130) = unaff_x24;
    *(undefined1 **)((long)puVar6 + -0x128) = unaff_x23;
    *(long *)((long)puVar6 + -0x120) = auVar24._0_8_;
    *(undefined1 **)((long)puVar6 + -0x118) = puVar16;
    *(long *)((long)puVar6 + -0x110) = auVar24._8_8_;
    *(undefined8 **)((long)puVar6 + -0x108) = extraout_x8;
    *(undefined1 **)((long)puVar6 + -0x100) = (undefined1 *)((long)puVar6 + -0x80);
    *(undefined **)((long)puVar6 + -0xf8) =
         &Atlas_Gameplay_Kart_KartUsableManager__AddNetworkUsableCommand;
    *(undefined8 *)((long)puVar6 + -0x138) = *(undefined8 *)PTR_03a5d648;
    *(undefined2 *)((long)puVar6 + -0x15a) = 0;
    param_3 = puVar12;
    param_4 = uVar7;
    puVar15 = extraout_x8;
    unaff_x22 = auVar24._0_8_;
    if (*(long *)(lVar14 + 0x50) == 0) {
code_r0x015e27c0:
      func_0x00f78af4();
    }
    else {
      param_3 = (undefined1 *)((long)puVar6 + -0x15a);
      param_4 = 0;
      uVar9 = /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar14 + 0x50),puVar11[1]);
      puVar15 = puVar11;
      puVar16 = puVar12;
      unaff_x22 = uVar7;
      if ((int)uVar9 != 0) {
        unaff_x23 = (undefined1 *)((long)puVar6 + -0x1a0);
        if ((int)uVar7 != 0) {
          uVar7 = *puVar11;
          uVar20 = puVar11[3];
          uVar19 = puVar11[2];
          *(undefined8 *)((long)puVar6 + -0x198) = puVar11[1];
          *(undefined8 *)((long)puVar6 + -0x1a0) = uVar7;
          uVar13 = puVar11[5];
          uVar7 = puVar11[4];
          uVar22 = puVar11[7];
          uVar21 = puVar11[6];
          *(undefined8 *)((long)puVar6 + -0x188) = uVar20;
          *(undefined8 *)((long)puVar6 + -400) = uVar19;
          *(undefined8 *)((long)puVar6 + -0x178) = uVar13;
          *(undefined8 *)((long)puVar6 + -0x180) = uVar7;
          *(undefined8 *)((long)puVar6 + -0x168) = uVar22;
          *(undefined8 *)((long)puVar6 + -0x170) = uVar21;
          /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar14,(undefined1 *)((long)puVar6 + -0x1a0));
        }
        *(undefined1 *)((long)puVar6 + -0x154) = 0;
        *(undefined4 *)((long)puVar6 + -0x158) = 0;
        if (*(long *)(lVar14 + 0x58) != 0) {
          uVar3 = *(undefined4 *)(*(long *)(lVar14 + 0x58) + 0x54);
          uVar2 = *(undefined4 *)puVar11;
          iVar1 = *(int *)((long)puVar11 + 4);
          uVar7 = puVar11[2];
          uVar19 = puVar11[5];
          uVar13 = puVar11[4];
          *(undefined8 *)((long)puVar6 + -0x1c8) = puVar11[3];
          *(undefined8 *)((long)puVar6 + -0x1d0) = uVar7;
          *(undefined8 *)((long)puVar6 + -0x1b8) = uVar19;
          *(undefined8 *)((long)puVar6 + -0x1c0) = uVar13;
          *(undefined8 *)((long)puVar6 + -0x14b) = *(undefined8 *)((long)puVar6 + -0x1c0);
          *(undefined8 *)((long)puVar6 + -0x153) = *(undefined8 *)((long)puVar6 + -0x1c8);
          *(undefined8 *)((long)puVar6 + -0x143) = *(undefined8 *)((long)puVar6 + -0x1b8);
          uVar7 = 0;
          uVar18 = 0;
          if (((int)puVar12 == 5) && (iVar1 == 1)) {
            uVar7 = *(undefined8 *)((long)puVar11 + 0x34);
            uVar18 = *(undefined4 *)((long)puVar11 + 0x3c);
          }
          if ((*(long *)(lVar14 + 0x48) != 0) &&
             (lVar8 = *(long *)(*(long *)(lVar14 + 0x48) + 0x20), lVar8 != 0)) {
            uVar4 = *(undefined4 *)(puVar11 + 2);
            *(undefined4 *)((long)puVar6 + -0x218) = uVar3;
            *(short *)((long)puVar6 + -0x214) = (short)uVar2;
            *(char *)((long)puVar6 + -0x212) = (char)uVar4;
            *(undefined1 *)((long)puVar6 + -0x211) = 0;
            *(undefined2 *)((long)puVar6 + -0x210) = *(undefined2 *)((long)puVar6 + -0x15a);
            *(char *)((long)puVar6 + -0x20e) = (char)iVar1;
            *(undefined8 *)((long)puVar6 + -0x205) = *(undefined8 *)((long)puVar6 + -0x150);
            *(undefined8 *)((long)puVar6 + -0x20d) = *(undefined8 *)((long)puVar6 + -0x158);
            *(undefined8 *)((long)puVar6 + -0x1f8) = *(undefined8 *)((long)puVar6 + -0x143);
            *(undefined8 *)((long)puVar6 + -0x200) = *(undefined8 *)((long)puVar6 + -0x14b);
            *(undefined8 *)((long)puVar6 + -0x1f0) = uVar7;
            *(undefined4 *)((long)puVar6 + -0x1e8) = uVar18;
            *(undefined4 *)((long)puVar6 + -0x1e4) = 0;
            param_3 = (undefined1 *)0x0;
            uVar9 = /*Core.Networking.NetworkSession$$AddOutgoingUsableUpdate*/ func_0x0165e984(lVar8,(undefined1 *)((long)puVar6 + -0x218));
            goto code_r0x015e2790;
          }
        }
        goto code_r0x015e27c0;
      }
code_r0x015e2790:
      if (*(long *)PTR_03a5d648 == *(long *)((long)puVar6 + -0x138)) {
        return uVar9;
      }
    }
    auVar25 = ___stack_chk_fail();
    unaff_x20 = auVar25._8_8_;
    uVar9 = auVar25._0_8_;
    *(undefined8 *)((long)puVar6 + -0x250) = unaff_x22;
    *(undefined1 **)((long)puVar6 + -0x248) = puVar16;
    *(long *)((long)puVar6 + -0x240) = lVar14;
    *(undefined8 **)((long)puVar6 + -0x238) = puVar15;
    *(undefined1 **)((long)puVar6 + -0x230) = (undefined1 *)((long)puVar6 + -0x100);
    *(undefined **)((long)puVar6 + -0x228) = &Atlas_Gameplay_Kart_KartUsableManager__StartEquipLocal
    ;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb53c2 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c2 = 1;
    }
    puVar17 = &UNK_015e280c;
    puVar6 = (undefined8 *)((long)puVar6 + -0x290);
    param_1 = uVar9;
  } while( true );
}



// ============================================================
// RVA: 0x15e248c | Atlas.Gameplay.Kart.KartUsableManager.CanEquipLocal
// ============================================================

/* WARNING: Possible PIC construction at 0x015e2854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e286c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e2858) */
/* WARNING: Removing unreachable block (ram,0x015e2870) */
/* WARNING: Removing unreachable block (ram,0x015e2874) */
/* WARNING: Removing unreachable block (ram,0x015e287c) */
/* WARNING: Removing unreachable block (ram,0x015e2884) */
/* WARNING: Removing unreachable block (ram,0x015c0ed0) */
/* WARNING: Removing unreachable block (ram,0x015c0ef0) */
/* WARNING: Removing unreachable block (ram,0x015c0f10) */
/* WARNING: Removing unreachable block (ram,0x015c0f28) */
/* WARNING: Removing unreachable block (ram,0x015c0f40) */
/* WARNING: Removing unreachable block (ram,0x015c0f48) */
/* WARNING: Removing unreachable block (ram,0x015c0f4c) */
/* WARNING: Removing unreachable block (ram,0x015c0f50) */
/* WARNING: Removing unreachable block (ram,0x015c0f74) */
/* WARNING: Removing unreachable block (ram,0x015c0f88) */
/* WARNING: Removing unreachable block (ram,0x015c0fb4) */
/* WARNING: Removing unreachable block (ram,0x015c0fa0) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x015c0f18) */

ulong Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  bool bVar10;
  int iVar11;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar12;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  undefined8 *extraout_x8;
  undefined8 uVar23;
  int *piVar24;
  undefined8 unaff_x22;
  code *pcVar25;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar26;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar27;
  undefined *puVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    lVar22 = *(long *)(param_1 + 0x58);
    if (lVar22 == 0) {
code_r0x015e2500:
      auVar34 = func_0x00f78af4();
      puVar8 = &stack0xffffffffffffff90;
      puStack_48 = &Atlas_Gameplay_Kart_KartUsableManager__HasUsesRemaining;
      ppuVar27 = &puStack_50;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb53c1 & 1) == 0) {
        func_0x00f78a20(0x3d57318);
        bRam0000000003eb53c1 = 1;
      }
      lVar22 = *(long *)(auVar34._0_8_ + 0x30);
      if (((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x10), lVar22 != 0)) &&
         (param_3 = lRam0000000003d57318, lVar22 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar22,auVar34._8_8_),
         lVar22 != 0)) {
        return (ulong)(0 < *(int *)(lVar22 + 0x20));
      }
      puVar28 = &Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand;
      auVar35 = func_0x00f78af4();
      puVar14 = extraout_x8;
      do {
        lVar18 = auVar35._0_8_;
        auVar7._8_8_ = auVar34._0_8_;
        auVar7._0_8_ = lVar18;
        auVar6._8_8_ = auVar34._0_8_;
        auVar6._0_8_ = unaff_x22;
        *(undefined8 *)(puVar8 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar8 + -0x28) = 0x3eb5000;
        *(undefined1 (*) [16])(puVar8 + -0x20) = auVar34;
        *(undefined1 ***)(puVar8 + -0x10) = ppuVar27;
        *(undefined **)(puVar8 + -8) = puVar28;
        *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)PTR_03a5d648;
        *(undefined4 *)(puVar8 + -0x54) = 0;
        *(undefined2 *)(puVar8 + -100) = 0;
        puVar8[-0x62] = 0;
        lVar22 = param_3;
        lVar17 = 0x3eb5000;
        if ((*(long *)(lVar18 + 0x48) == 0) ||
           (lVar16 = *(long *)(*(long *)(lVar18 + 0x48) + 0x20), auVar6 = auVar7, lVar16 == 0)) {
code_r0x015e2660:
          func_0x00f78af4();
          uVar23 = param_4;
        }
        else {
          uVar15 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar8 + -0x80,lVar16,0);
          *(undefined8 *)(puVar8 + -0x48) = *(undefined8 *)(puVar8 + -0x78);
          *(undefined8 *)(puVar8 + -0x50) = *(undefined8 *)(puVar8 + -0x80);
          *(undefined8 *)(puVar8 + -0x40) = *(undefined8 *)(puVar8 + -0x70);
          uVar23 = *(undefined8 *)(lVar18 + 0xa0);
          *(undefined8 *)(puVar8 + -0x61) = 0;
          *(undefined4 *)(puVar8 + -0x59) = 0;
          lVar17 = param_3;
          auVar6 = auVar35;
          if (param_3 == 0) goto code_r0x015e2660;
          uVar2 = *(undefined4 *)(param_3 + 0x20);
          *(int *)puVar14 = auVar35._8_4_;
          *(undefined4 *)((long)puVar14 + 4) = 0;
          puVar14[1] = uVar23;
          *(undefined4 *)(puVar14 + 2) = uVar2;
          uVar23 = *(undefined8 *)(puVar8 + -0x54);
          *(undefined8 *)((long)puVar14 + 0x1c) = *(undefined8 *)(puVar8 + -0x4c);
          *(undefined8 *)((long)puVar14 + 0x14) = uVar23;
          uVar23 = *(undefined8 *)(puVar8 + -0x48);
          puVar14[5] = *(undefined8 *)(puVar8 + -0x40);
          puVar14[4] = uVar23;
          *(undefined1 *)(puVar14 + 6) = 0;
          *(undefined8 *)((long)puVar14 + 0x31) = *(undefined8 *)(puVar8 + -100);
          puVar14[7] = *(undefined8 *)(puVar8 + -0x5d);
          uVar23 = param_4;
          if (*(long *)PTR_03a5d648 == *(long *)(puVar8 + -0x38)) {
            return uVar15;
          }
        }
        auVar34 = ___stack_chk_fail();
        puVar20 = auVar34._8_8_;
        lVar18 = auVar34._0_8_;
        *(undefined8 *)(puVar8 + -0xc0) = unaff_x24;
        *(undefined1 **)(puVar8 + -0xb8) = unaff_x23;
        *(long *)(puVar8 + -0xb0) = auVar6._0_8_;
        *(long *)(puVar8 + -0xa8) = lVar17;
        *(long *)(puVar8 + -0xa0) = auVar6._8_8_;
        *(undefined8 **)(puVar8 + -0x98) = puVar14;
        *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
        *(undefined **)(puVar8 + -0x88) =
             &Atlas_Gameplay_Kart_KartUsableManager__AddNetworkUsableCommand;
        puVar26 = puVar8 + -0x90;
        *(undefined8 *)(puVar8 + -200) = *(undefined8 *)PTR_03a5d648;
        *(undefined2 *)(puVar8 + -0xea) = 0;
        param_4 = uVar23;
        unaff_x22 = auVar6._0_8_;
        if (*(long *)(lVar18 + 0x50) == 0) {
code_r0x015e27c0:
          func_0x00f78af4();
        }
        else {
          param_4 = 0;
          uVar15 = /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar18 + 0x50),puVar20[1],puVar8 + -0xea);
          puVar14 = puVar20;
          lVar17 = lVar22;
          unaff_x22 = uVar23;
          if ((int)uVar15 != 0) {
            unaff_x23 = puVar8 + -0x130;
            if ((int)uVar23 != 0) {
              uVar23 = *puVar20;
              uVar31 = puVar20[3];
              uVar30 = puVar20[2];
              *(undefined8 *)(puVar8 + -0x128) = puVar20[1];
              *(undefined8 *)(puVar8 + -0x130) = uVar23;
              uVar19 = puVar20[5];
              uVar23 = puVar20[4];
              uVar33 = puVar20[7];
              uVar32 = puVar20[6];
              *(undefined8 *)(puVar8 + -0x118) = uVar31;
              *(undefined8 *)(puVar8 + -0x120) = uVar30;
              *(undefined8 *)(puVar8 + -0x108) = uVar19;
              *(undefined8 *)(puVar8 + -0x110) = uVar23;
              *(undefined8 *)(puVar8 + -0xf8) = uVar33;
              *(undefined8 *)(puVar8 + -0x100) = uVar32;
              /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar18,puVar8 + -0x130);
            }
            puVar8[-0xe4] = 0;
            *(undefined4 *)(puVar8 + -0xe8) = 0;
            if (*(long *)(lVar18 + 0x58) != 0) {
              uVar3 = *(undefined4 *)(*(long *)(lVar18 + 0x58) + 0x54);
              uVar2 = *(undefined4 *)puVar20;
              iVar12 = *(int *)((long)puVar20 + 4);
              uVar23 = puVar20[2];
              uVar30 = puVar20[5];
              uVar19 = puVar20[4];
              *(undefined8 *)(puVar8 + -0x158) = puVar20[3];
              *(undefined8 *)(puVar8 + -0x160) = uVar23;
              *(undefined8 *)(puVar8 + -0x148) = uVar30;
              *(undefined8 *)(puVar8 + -0x150) = uVar19;
              *(undefined8 *)(puVar8 + -0xdb) = *(undefined8 *)(puVar8 + -0x150);
              *(undefined8 *)(puVar8 + -0xe3) = *(undefined8 *)(puVar8 + -0x158);
              *(undefined8 *)(puVar8 + -0xd3) = *(undefined8 *)(puVar8 + -0x148);
              uVar23 = 0;
              uVar29 = 0;
              if (((int)lVar22 == 5) && (iVar12 == 1)) {
                uVar23 = *(undefined8 *)((long)puVar20 + 0x34);
                uVar29 = *(undefined4 *)((long)puVar20 + 0x3c);
              }
              if ((*(long *)(lVar18 + 0x48) != 0) &&
                 (lVar22 = *(long *)(*(long *)(lVar18 + 0x48) + 0x20), lVar22 != 0)) {
                uVar4 = *(undefined4 *)(puVar20 + 2);
                *(undefined4 *)(puVar8 + -0x1a8) = uVar3;
                *(short *)(puVar8 + -0x1a4) = (short)uVar2;
                puVar8[-0x1a2] = (char)uVar4;
                puVar8[-0x1a1] = 0;
                *(undefined2 *)(puVar8 + -0x1a0) = *(undefined2 *)(puVar8 + -0xea);
                puVar8[-0x19e] = (char)iVar12;
                *(undefined8 *)(puVar8 + -0x195) = *(undefined8 *)(puVar8 + -0xe0);
                *(undefined8 *)(puVar8 + -0x19d) = *(undefined8 *)(puVar8 + -0xe8);
                *(undefined8 *)(puVar8 + -0x188) = *(undefined8 *)(puVar8 + -0xd3);
                *(undefined8 *)(puVar8 + -400) = *(undefined8 *)(puVar8 + -0xdb);
                *(undefined8 *)(puVar8 + -0x180) = uVar23;
                *(undefined4 *)(puVar8 + -0x178) = uVar29;
                *(undefined4 *)(puVar8 + -0x174) = 0;
                uVar15 = /*Core.Networking.NetworkSession$$AddOutgoingUsableUpdate*/ func_0x0165e984(lVar22,puVar8 + -0x1a8,0);
                goto code_r0x015e2790;
              }
            }
            goto code_r0x015e27c0;
          }
code_r0x015e2790:
          if (*(long *)PTR_03a5d648 == *(long *)(puVar8 + -200)) {
            return uVar15;
          }
        }
        auVar36._8_8_ = puVar14;
        auVar36._0_8_ = lVar18;
        puVar28 = &Atlas_Gameplay_Kart_KartUsableManager__StartEquipLocal;
        auVar35 = ___stack_chk_fail();
        puVar9 = puVar8 + -0x1b0;
        while( true ) {
          lVar22 = auVar35._0_8_;
          auVar34._8_8_ = lVar22;
          auVar34._0_8_ = auVar35._8_8_;
          puVar8 = puVar9 + -0x70;
          puVar14 = (undefined8 *)(puVar9 + -0x70);
          *(undefined8 *)(puVar9 + -0x30) = unaff_x22;
          *(long *)(puVar9 + -0x28) = lVar17;
          *(undefined1 (*) [16])(puVar9 + -0x20) = auVar36;
          *(undefined1 **)(puVar9 + -0x10) = puVar26;
          *(undefined **)(puVar9 + -8) = puVar28;
          ppuVar27 = (undefined1 **)(puVar9 + -0x10);
          if ((bRam0000000003eb53c2 & 1) == 0) {
            func_0x00f78a20(0x3d57318);
            bRam0000000003eb53c2 = 1;
          }
          uVar15 = Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal(lVar22);
          if ((int)uVar15 == 0) {
            return uVar15;
          }
          *(undefined1 *)(lVar22 + 0x60) = 0;
          *(int *)(lVar22 + 0x28) = *(int *)(lVar22 + 0x28) + 1;
          if ((*(long *)(lVar22 + 0x30) != 0) &&
             (lVar17 = *(long *)(*(long *)(lVar22 + 0x30) + 0x10), lVar17 != 0)) break;
          lVar17 = func_0x00f78af4();
          *(long *)(puVar9 + -0x90) = auVar35._8_8_;
          *(long *)(puVar9 + -0x88) = lVar22;
          *(undefined1 ***)(puVar9 + -0x80) = ppuVar27;
          *(undefined **)(puVar9 + -0x78) = &Atlas_Gameplay_Kart_KartUsableManager__CancelShuffle;
          if ((bRam0000000003eb53c7 & 1) == 0) {
            func_0x00f78a20(0x3d57318);
            bRam0000000003eb53c7 = 1;
          }
          iVar12 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar17 + 0xa0,0);
          if (iVar12 == 0) {
code_r0x015e293c:
            *(undefined4 *)(lVar17 + 0xa8) = 0xffffffff;
            if ((*(long *)(lVar17 + 0x58) != 0) &&
               (lVar22 = *(long *)(*(long *)(lVar17 + 0x58) + 0x70), lVar22 != 0)) {
              /*Atlas.Audio.KartAudio$$StopShuffleCancelled*/ func_0x015c0e1c(lVar22,0);
              if (*(long *)(lVar17 + 0x68) != 0) {
                lVar22 = *(long *)(*(long *)(lVar17 + 0x68) + 0x40);
                if (lVar22 == 0) {
                  return 0;
                }
                if (*(long *)(lVar17 + 0x58) != 0) {
                  plVar21 = *(long **)(*(long *)(lVar17 + 0x58) + 0x90);
                  uVar15 = *(ulong *)(lVar22 + 0x68);
                  if (uVar15 == 0) {
                    return 0;
                  }
                  *(undefined8 *)(puVar9 + -0xc0) = unaff_x26;
                  *(undefined8 *)(puVar9 + -0xb8) = unaff_x25;
                  *(undefined8 *)(puVar9 + -0xb0) = unaff_x24;
                  *(undefined1 **)(puVar9 + -0xa8) = unaff_x23;
                  *(undefined8 *)(puVar9 + -0xa0) = unaff_x22;
                  *(undefined8 *)(puVar9 + -0x98) = 0x3eb5000;
                  *(undefined8 *)(puVar9 + -0x90) = *(undefined8 *)(puVar9 + -0x90);
                  *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x88);
                  *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(puVar9 + -0x80);
                  *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x78);
                  *(ulong *)(puVar9 + -200) = uVar15;
                  lVar22 = *(long *)(uVar15 + 0x68);
                  if (lVar22 == 0) {
                    puVar26 = puVar9 + -200;
                    lVar17 = 1;
                  }
                  else {
                    lVar17 = *(long *)(lVar22 + 0x18);
                    if (lVar17 == 0) {
                      return uVar15;
                    }
                    puVar26 = (undefined1 *)(lVar22 + 0x20);
                  }
                  lVar22 = 0;
                  goto code_r0x01552340;
                }
              }
            }
          }
          else if ((*(long *)(lVar17 + 0x30) != 0) &&
                  (lVar22 = *(long *)(*(long *)(lVar17 + 0x30) + 0x10), lVar22 != 0)) {
            lVar22 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar22,*(undefined8 *)(lVar17 + 0xa0),lRam0000000003d57318);
            if ((*(long *)(lVar17 + 0x68) != 0) &&
               ((lVar22 != 0 && (lVar18 = *(long *)(*(long *)(lVar17 + 0x68) + 0x1e8), lVar18 != 0))
               )) {
              param_4 = 0;
              /*Atlas.Gameplay.Pickups.PickupManager$$OnUsableDespawned*/ func_0x014bb17c(lVar18,lVar22,*(undefined4 *)(lVar22 + 0x20));
              goto code_r0x015e293c;
            }
          }
          auVar34 = func_0x00f78af4();
          uVar23 = auVar34._8_8_;
          lVar22 = auVar34._0_8_;
          *(undefined8 *)(puVar9 + -0xc0) = unaff_x22;
          *(undefined8 *)(puVar9 + -0xb8) = 0x3eb5000;
          *(undefined8 *)(puVar9 + -0xb0) = 0x3eb5000;
          *(long *)(puVar9 + -0xa8) = lVar17;
          *(undefined1 **)(puVar9 + -0xa0) = puVar9 + -0x80;
          *(undefined **)(puVar9 + -0x98) =
               &Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal;
          lVar17 = 0x3eb5000;
          if ((bRam0000000003eb53bf & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d57288);
            func_0x00f78a20(0x3d57318);
            bRam0000000003eb53bf = 1;
          }
          lVar18 = *(long *)(lVar22 + 0x58);
          if (lVar18 != 0) {
            uVar19 = *(undefined8 *)(lVar18 + 0x48);
            uVar31 = *(undefined8 *)(lVar18 + 0x60);
            uVar30 = *(undefined8 *)(lVar18 + 0x58);
            *(undefined8 *)(puVar9 + -0xd8) = *(undefined8 *)(lVar18 + 0x50);
            *(undefined8 *)(puVar9 + -0xe0) = uVar19;
            *(undefined8 *)(puVar9 + -200) = uVar31;
            *(undefined8 *)(puVar9 + -0xd0) = uVar30;
            uVar15 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar9 + -0xe0,0);
            if ((int)uVar15 == 0) {
              return uVar15;
            }
            uVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar23,0);
            if ((uVar15 & 1) == 0) {
              if ((*(long *)(lVar22 + 0x30) != 0) &&
                 (lVar18 = *(long *)(*(long *)(lVar22 + 0x30) + 0x10), lVar18 != 0)) {
                lVar17 = *(long *)(lVar22 + 0x38);
                plVar21 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar18,uVar23,lRam0000000003d57318);
                if ((plVar21 != (long *)0x0) &&
                   (uVar19 = (**(code **)(*plVar21 + 0x188))
                                       (plVar21,*(undefined8 *)(*plVar21 + 400)), lVar17 != 0)) {
                  uVar15 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar17,uVar19,0);
                  if ((int)uVar15 == 0) {
                    return uVar15;
                  }
                  goto code_r0x015e2a70;
                }
              }
            }
            else {
code_r0x015e2a70:
              if ((*(long *)(lVar22 + 0x78) != 0) || (0 < *(int *)(lVar22 + 0xa8))) {
                return uVar15;
              }
              if ((*(long *)(lVar22 + 0x58) != 0) &&
                 (lVar18 = *(long *)(*(long *)(lVar22 + 0x58) + 0x90), lVar18 != 0)) {
                if (*(char *)(lVar18 + 0x98) != '\0') {
                  return uVar15;
                }
                if (((*(long *)(lVar22 + 0x30) != 0) && (*(long *)(lVar22 + 0x68) != 0)) &&
                   (lVar18 = *(long *)(*(long *)(lVar22 + 0x68) + 0x1c0), lVar18 != 0)) {
                  lVar17 = *(long *)(*(long *)(lVar22 + 0x30) + 0x10);
                  unaff_x22 = *(undefined8 *)(lVar18 + 0x10);
                  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
                  if (lVar17 != 0) {
                    lVar18 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar17,uVar19,uRam0000000003d57288);
                    *(undefined4 *)(lVar22 + 0xac) = *(undefined4 *)(lVar22 + 0x28);
                    if (lVar18 != 0) {
                      uVar19 = /*Atlas.Definitions.GameContextDefinition$$get_UsableShuffleDuration*/ func_0x015a4c6c(lVar18,0);
                      *(int *)(lVar22 + 0xb0) = (int)uVar19;
                      *(int *)(lVar22 + 0xa8) = (int)uVar19;
                      *(undefined8 *)(lVar22 + 0xa0) = uVar23;
                      if (((*(long *)(lVar22 + 0x68) != 0) && (*(long *)(lVar22 + 0x58) != 0)) &&
                         (lVar18 = *(long *)(*(long *)(lVar22 + 0x68) + 0x40), lVar18 != 0)) {
                        param_4 = 0;
                        /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsablePickedUp*/ func_0x015a5ac0(lVar18,*(undefined8 *)(*(long *)(lVar22 + 0x58) + 0x90),
                                        uVar19);
                        if ((*(long *)(lVar22 + 0x58) != 0) &&
                           (lVar18 = *(long *)(*(long *)(lVar22 + 0x58) + 0x70), lVar18 != 0)) {
                          uVar15 = /*Atlas.Audio.KartAudio$$StartShuffle*/ func_0x015c0d6c(lVar18,0);
                          return uVar15;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          auVar36 = func_0x00f78af4();
          uVar13 = auVar36._0_8_;
          *(undefined8 *)(puVar9 + -0x110) = unaff_x22;
          *(long *)(puVar9 + -0x108) = lVar17;
          *(undefined8 *)(puVar9 + -0x100) = uVar23;
          *(long *)(puVar9 + -0xf8) = lVar22;
          *(undefined1 **)(puVar9 + -0xf0) = puVar9 + -0xa0;
          *(undefined **)(puVar9 + -0xe8) =
               &Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData;
          puVar26 = puVar9 + -0xf0;
          lVar17 = 0x3eb5000;
          uVar15 = uVar13;
          if ((bRam0000000003eb53c0 & 1) == 0) {
            uVar15 = func_0x00f78a20(0x3d57318);
            bRam0000000003eb53c0 = 1;
          }
          if (*(int *)(uVar13 + 0xa8) < 0) {
            return uVar15;
          }
          if ((*(long *)(uVar13 + 0x30) != 0) &&
             (lVar22 = *(long *)(*(long *)(uVar13 + 0x30) + 0x10), lVar22 != 0)) {
            lVar17 = *(long *)(uVar13 + 0x38);
            plVar21 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar22,auVar36._8_8_,lRam0000000003d57318);
            if ((plVar21 != (long *)0x0) &&
               (uVar23 = (**(code **)(*plVar21 + 0x188))(plVar21,*(undefined8 *)(*plVar21 + 400)),
               lVar17 != 0)) {
              uVar15 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar17,uVar23,0);
              if ((int)uVar15 == 0) {
                return uVar15;
              }
              *(long *)(uVar13 + 0xa0) = auVar36._8_8_;
              return uVar15;
            }
          }
          puVar28 = &Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal;
          auVar35 = func_0x00f78af4();
          *(long *)(auVar35._0_8_ + 0xa0) = auVar35._8_8_;
          puVar9 = puVar9 + -0x110;
        }
        param_3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar17,*(undefined8 *)(lVar22 + 0xa0),lRam0000000003d57318);
        auVar35._8_4_ = *(undefined4 *)(lVar22 + 0x28);
        auVar35._0_8_ = lVar22;
        auVar35._12_4_ = 0;
        puVar28 = &UNK_015e2858;
      } while( true );
    }
    uStack_38 = *(undefined8 *)(lVar22 + 0x50);
    uStack_40 = *(undefined8 *)(lVar22 + 0x48);
    uStack_28 = *(undefined8 *)(lVar22 + 0x60);
    uStack_30 = *(undefined8 *)(lVar22 + 0x58);
    uVar15 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_40,0);
    if ((int)uVar15 != 0) {
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar22 = *(long *)(*(long *)(param_1 + 0x58) + 0x90), lVar22 == 0)) goto code_r0x015e2500;
      uVar15 = (ulong)(*(char *)(lVar22 + 0x98) == '\0');
    }
  }
  else {
    uVar15 = 0;
  }
  return uVar15;
code_r0x01552340:
  lVar18 = *(long *)(puVar26 + lVar22 * 8);
  pcVar25 = *(code **)(lVar18 + 0x10);
  plVar1 = *(long **)(lVar18 + 0x20);
  lVar18 = *(long *)(lVar18 + 0x28);
  if (*(short *)(lVar18 + 0x48) == -1) {
    func_0x00f78ad8(lVar18);
  }
  iVar12 = func_0x00f78a4c(lVar18);
  bVar10 = *(char *)(lVar18 + 0x4a) == '\x01';
  if (iVar12 == 0) {
    if (bVar10) {
      if (plVar1 == (long *)0x0) {
code_r0x01552480:
        uVar13 = (*pcVar25)(plVar21,lVar18);
      }
      else {
        if (((*(short *)(lVar18 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(uVar15 + 0x18) == 0)) goto code_r0x01552378;
        iVar12 = func_0x00f78a44(lVar18);
        iVar11 = func_0x00f78ec0(lVar18);
        if (iVar12 == 0) {
          uVar5 = *(ushort *)(lVar18 + 0x48);
          if (iVar11 == 0) {
            lVar18 = *plVar1 + (ulong)uVar5 * 0x10;
            uVar13 = (**(code **)(lVar18 + 0x138))(plVar1,plVar21,*(undefined8 *)(lVar18 + 0x140));
            goto code_r0x0155248c;
          }
          lVar18 = func_0x00f78a48(lVar18);
          lVar16 = *plVar1;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar13 != 0) {
            piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar18) {
                puVar14 = (undefined8 *)
                          (lVar16 + (long)(int)(*piVar24 + (uint)uVar5) * 0x10 + 0x138);
                goto code_r0x01552618;
              }
              piVar24 = piVar24 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)func_0x00fac1f0(plVar1,lVar18,(ulong)uVar5);
code_r0x01552618:
          pcVar25 = (code *)*puVar14;
          puVar14 = (undefined8 *)puVar14[1];
        }
        else {
          if (iVar11 == 0) {
            uVar23 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar16 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar13 != 0) {
              piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)(lVar18 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar18 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015525f0;
                }
                piVar24 = piVar24 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar16 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
            uVar23 = *(undefined8 *)(lVar16 + 8);
          }
          puVar14 = (undefined8 *)func_0x00f78acc(uVar23,lVar18);
          pcVar25 = (code *)*puVar14;
        }
        uVar13 = (*pcVar25)(plVar1,plVar21,puVar14);
      }
    }
    else {
      if ((*(short *)(lVar18 + 0x48) == -1) || (*(long *)(uVar15 + 0x18) == 0))
      goto code_r0x01552480;
      iVar12 = func_0x00f78a44(lVar18);
      iVar11 = func_0x00f78ec0(lVar18);
      if (iVar12 == 0) {
        uVar5 = *(ushort *)(lVar18 + 0x48);
        if (iVar11 == 0) {
          lVar18 = *plVar21 + (ulong)uVar5 * 0x10;
          uVar13 = (**(code **)(lVar18 + 0x138))(plVar21,*(undefined8 *)(lVar18 + 0x140));
          goto code_r0x0155248c;
        }
        lVar18 = func_0x00f78a48(lVar18);
        lVar16 = *plVar21;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar13 != 0) {
          piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar18) {
              puVar14 = (undefined8 *)(lVar16 + (long)(int)(*piVar24 + (uint)uVar5) * 0x10 + 0x138);
              goto code_r0x015525b4;
            }
            piVar24 = piVar24 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)func_0x00fac1f0(plVar21,lVar18,(ulong)uVar5);
code_r0x015525b4:
        pcVar25 = (code *)*puVar14;
        puVar14 = (undefined8 *)puVar14[1];
      }
      else {
        if (iVar11 == 0) {
          uVar23 = *(undefined8 *)(*plVar21 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar16 = *plVar21;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar13 != 0) {
            piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)(lVar18 + 0x18)) {
                lVar16 = lVar16 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar18 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155258c;
              }
              piVar24 = piVar24 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          lVar16 = func_0x00fac1f0(plVar21);
code_r0x0155258c:
          uVar23 = *(undefined8 *)(lVar16 + 8);
        }
        puVar14 = (undefined8 *)func_0x00f78acc(uVar23,lVar18);
        pcVar25 = (code *)*puVar14;
      }
      uVar13 = (*pcVar25)(plVar21,puVar14);
    }
  }
  else {
    if (bVar10) goto code_r0x01552480;
code_r0x01552378:
    uVar13 = (*pcVar25)(plVar1,plVar21,lVar18);
  }
code_r0x0155248c:
  lVar22 = lVar22 + 1;
  if (lVar22 == lVar17) {
    return uVar13;
  }
  goto code_r0x01552340;
}



// ============================================================
// RVA: 0x15e2504 | Atlas.Gameplay.Kart.KartUsableManager.HasUsesRemaining
// ============================================================

/* WARNING: Possible PIC construction at 0x015e2854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e2858) */
/* WARNING: Removing unreachable block (ram,0x015e2874) */
/* WARNING: Removing unreachable block (ram,0x015e287c) */
/* WARNING: Removing unreachable block (ram,0x015e2884) */
/* WARNING: Removing unreachable block (ram,0x015c0ed0) */
/* WARNING: Removing unreachable block (ram,0x015c0ef0) */
/* WARNING: Removing unreachable block (ram,0x015c0f10) */
/* WARNING: Removing unreachable block (ram,0x015c0f28) */
/* WARNING: Removing unreachable block (ram,0x015c0f40) */
/* WARNING: Removing unreachable block (ram,0x015c0f48) */
/* WARNING: Removing unreachable block (ram,0x015c0f4c) */
/* WARNING: Removing unreachable block (ram,0x015c0f50) */
/* WARNING: Removing unreachable block (ram,0x015c0f74) */
/* WARNING: Removing unreachable block (ram,0x015c0f88) */
/* WARNING: Removing unreachable block (ram,0x015c0fb4) */
/* WARNING: Removing unreachable block (ram,0x015c0fa0) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x015c0f18) */

ulong Atlas_Gameplay_Kart_KartUsableManager__HasUsesRemaining
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  bool bVar10;
  int iVar11;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int iVar12;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar22;
  undefined8 *extraout_x8;
  undefined8 uVar23;
  int *piVar24;
  undefined8 unaff_x22;
  code *pcVar25;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar26;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *puVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 *puVar21;
  
  auVar34._8_8_ = param_1;
  auVar34._0_8_ = param_2;
  puVar8 = &stack0xffffffffffffffd0;
  puVar26 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb53c1 & 1) == 0) {
    func_0x00f78a20(0x3d57318);
    bRam0000000003eb53c1 = 1;
  }
  if (((*(long *)(param_1 + 0x30) != 0) &&
      (lVar15 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar15 != 0)) &&
     (param_3 = lRam0000000003d57318, lVar15 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,param_2), lVar15 != 0)) {
    return (ulong)(0 < *(int *)(lVar15 + 0x20));
  }
  puVar27 = &Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand;
  auVar33 = func_0x00f78af4();
  puVar14 = extraout_x8;
  do {
    uVar23 = auVar34._8_8_;
    auVar6._8_8_ = uVar23;
    auVar6._0_8_ = unaff_x22;
    lVar19 = auVar33._0_8_;
    auVar7._8_8_ = uVar23;
    auVar7._0_8_ = lVar19;
    *(undefined8 *)(puVar8 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar8 + -0x28) = 0x3eb5000;
    *(undefined8 *)(puVar8 + -0x20) = uVar23;
    *(long *)(puVar8 + -0x18) = auVar34._0_8_;
    *(undefined1 **)(puVar8 + -0x10) = puVar26;
    *(undefined **)(puVar8 + -8) = puVar27;
    *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)PTR_03a5d648;
    *(undefined4 *)(puVar8 + -0x54) = 0;
    *(undefined2 *)(puVar8 + -100) = 0;
    puVar8[-0x62] = 0;
    lVar15 = param_3;
    lVar18 = 0x3eb5000;
    if ((*(long *)(lVar19 + 0x48) == 0) ||
       (lVar16 = *(long *)(*(long *)(lVar19 + 0x48) + 0x20), auVar6 = auVar7, lVar16 == 0)) {
code_r0x015e2660:
      func_0x00f78af4();
      uVar23 = param_4;
    }
    else {
      uVar17 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar8 + -0x80,lVar16,0);
      *(undefined8 *)(puVar8 + -0x48) = *(undefined8 *)(puVar8 + -0x78);
      *(undefined8 *)(puVar8 + -0x50) = *(undefined8 *)(puVar8 + -0x80);
      *(undefined8 *)(puVar8 + -0x40) = *(undefined8 *)(puVar8 + -0x70);
      uVar23 = *(undefined8 *)(lVar19 + 0xa0);
      *(undefined8 *)(puVar8 + -0x61) = 0;
      *(undefined4 *)(puVar8 + -0x59) = 0;
      lVar18 = param_3;
      auVar6 = auVar33;
      if (param_3 == 0) goto code_r0x015e2660;
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      *(int *)puVar14 = auVar33._8_4_;
      *(undefined4 *)((long)puVar14 + 4) = 0;
      puVar14[1] = uVar23;
      *(undefined4 *)(puVar14 + 2) = uVar2;
      uVar23 = *(undefined8 *)(puVar8 + -0x54);
      *(undefined8 *)((long)puVar14 + 0x1c) = *(undefined8 *)(puVar8 + -0x4c);
      *(undefined8 *)((long)puVar14 + 0x14) = uVar23;
      uVar23 = *(undefined8 *)(puVar8 + -0x48);
      puVar14[5] = *(undefined8 *)(puVar8 + -0x40);
      puVar14[4] = uVar23;
      *(undefined1 *)(puVar14 + 6) = 0;
      *(undefined8 *)((long)puVar14 + 0x31) = *(undefined8 *)(puVar8 + -100);
      puVar14[7] = *(undefined8 *)(puVar8 + -0x5d);
      uVar23 = param_4;
      if (*(long *)PTR_03a5d648 == *(long *)(puVar8 + -0x38)) {
        return uVar17;
      }
    }
    auVar34 = ___stack_chk_fail();
    puVar21 = auVar34._8_8_;
    lVar19 = auVar34._0_8_;
    *(undefined8 *)(puVar8 + -0xc0) = unaff_x24;
    *(undefined1 **)(puVar8 + -0xb8) = unaff_x23;
    *(long *)(puVar8 + -0xb0) = auVar6._0_8_;
    *(long *)(puVar8 + -0xa8) = lVar18;
    *(long *)(puVar8 + -0xa0) = auVar6._8_8_;
    *(undefined8 **)(puVar8 + -0x98) = puVar14;
    *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
    *(undefined **)(puVar8 + -0x88) =
         &Atlas_Gameplay_Kart_KartUsableManager__AddNetworkUsableCommand;
    puVar26 = puVar8 + -0x90;
    *(undefined8 *)(puVar8 + -200) = *(undefined8 *)PTR_03a5d648;
    *(undefined2 *)(puVar8 + -0xea) = 0;
    param_4 = uVar23;
    unaff_x22 = auVar6._0_8_;
    if (*(long *)(lVar19 + 0x50) == 0) {
code_r0x015e27c0:
      func_0x00f78af4();
    }
    else {
      param_4 = 0;
      uVar17 = /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar19 + 0x50),puVar21[1],puVar8 + -0xea);
      puVar14 = puVar21;
      lVar18 = lVar15;
      unaff_x22 = uVar23;
      if ((int)uVar17 != 0) {
        unaff_x23 = puVar8 + -0x130;
        if ((int)uVar23 != 0) {
          uVar23 = *puVar21;
          uVar30 = puVar21[3];
          uVar29 = puVar21[2];
          *(undefined8 *)(puVar8 + -0x128) = puVar21[1];
          *(undefined8 *)(puVar8 + -0x130) = uVar23;
          uVar20 = puVar21[5];
          uVar23 = puVar21[4];
          uVar32 = puVar21[7];
          uVar31 = puVar21[6];
          *(undefined8 *)(puVar8 + -0x118) = uVar30;
          *(undefined8 *)(puVar8 + -0x120) = uVar29;
          *(undefined8 *)(puVar8 + -0x108) = uVar20;
          *(undefined8 *)(puVar8 + -0x110) = uVar23;
          *(undefined8 *)(puVar8 + -0xf8) = uVar32;
          *(undefined8 *)(puVar8 + -0x100) = uVar31;
          /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar19,puVar8 + -0x130);
        }
        puVar8[-0xe4] = 0;
        *(undefined4 *)(puVar8 + -0xe8) = 0;
        if (*(long *)(lVar19 + 0x58) != 0) {
          uVar3 = *(undefined4 *)(*(long *)(lVar19 + 0x58) + 0x54);
          uVar2 = *(undefined4 *)puVar21;
          iVar12 = *(int *)((long)puVar21 + 4);
          uVar23 = puVar21[2];
          uVar29 = puVar21[5];
          uVar20 = puVar21[4];
          *(undefined8 *)(puVar8 + -0x158) = puVar21[3];
          *(undefined8 *)(puVar8 + -0x160) = uVar23;
          *(undefined8 *)(puVar8 + -0x148) = uVar29;
          *(undefined8 *)(puVar8 + -0x150) = uVar20;
          *(undefined8 *)(puVar8 + -0xdb) = *(undefined8 *)(puVar8 + -0x150);
          *(undefined8 *)(puVar8 + -0xe3) = *(undefined8 *)(puVar8 + -0x158);
          *(undefined8 *)(puVar8 + -0xd3) = *(undefined8 *)(puVar8 + -0x148);
          uVar23 = 0;
          uVar28 = 0;
          if (((int)lVar15 == 5) && (iVar12 == 1)) {
            uVar23 = *(undefined8 *)((long)puVar21 + 0x34);
            uVar28 = *(undefined4 *)((long)puVar21 + 0x3c);
          }
          if ((*(long *)(lVar19 + 0x48) != 0) &&
             (lVar15 = *(long *)(*(long *)(lVar19 + 0x48) + 0x20), lVar15 != 0)) {
            uVar4 = *(undefined4 *)(puVar21 + 2);
            *(undefined4 *)(puVar8 + -0x1a8) = uVar3;
            *(short *)(puVar8 + -0x1a4) = (short)uVar2;
            puVar8[-0x1a2] = (char)uVar4;
            puVar8[-0x1a1] = 0;
            *(undefined2 *)(puVar8 + -0x1a0) = *(undefined2 *)(puVar8 + -0xea);
            puVar8[-0x19e] = (char)iVar12;
            *(undefined8 *)(puVar8 + -0x195) = *(undefined8 *)(puVar8 + -0xe0);
            *(undefined8 *)(puVar8 + -0x19d) = *(undefined8 *)(puVar8 + -0xe8);
            *(undefined8 *)(puVar8 + -0x188) = *(undefined8 *)(puVar8 + -0xd3);
            *(undefined8 *)(puVar8 + -400) = *(undefined8 *)(puVar8 + -0xdb);
            *(undefined8 *)(puVar8 + -0x180) = uVar23;
            *(undefined4 *)(puVar8 + -0x178) = uVar28;
            *(undefined4 *)(puVar8 + -0x174) = 0;
            uVar17 = /*Core.Networking.NetworkSession$$AddOutgoingUsableUpdate*/ func_0x0165e984(lVar15,puVar8 + -0x1a8,0);
            goto code_r0x015e2790;
          }
        }
        goto code_r0x015e27c0;
      }
code_r0x015e2790:
      if (*(long *)PTR_03a5d648 == *(long *)(puVar8 + -200)) {
        return uVar17;
      }
    }
    auVar35._8_8_ = puVar14;
    auVar35._0_8_ = lVar19;
    puVar27 = &Atlas_Gameplay_Kart_KartUsableManager__StartEquipLocal;
    auVar34 = ___stack_chk_fail();
    puVar9 = puVar8 + -0x1b0;
    while( true ) {
      lVar15 = auVar34._0_8_;
      puVar8 = puVar9 + -0x70;
      puVar14 = (undefined8 *)(puVar9 + -0x70);
      *(undefined8 *)(puVar9 + -0x30) = unaff_x22;
      *(long *)(puVar9 + -0x28) = lVar18;
      *(undefined1 (*) [16])(puVar9 + -0x20) = auVar35;
      *(undefined1 **)(puVar9 + -0x10) = puVar26;
      *(undefined **)(puVar9 + -8) = puVar27;
      puVar26 = puVar9 + -0x10;
      if ((bRam0000000003eb53c2 & 1) == 0) {
        func_0x00f78a20(0x3d57318);
        bRam0000000003eb53c2 = 1;
      }
      uVar17 = Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal(lVar15);
      if ((int)uVar17 == 0) {
        return uVar17;
      }
      *(undefined1 *)(lVar15 + 0x60) = 0;
      *(int *)(lVar15 + 0x28) = *(int *)(lVar15 + 0x28) + 1;
      if ((*(long *)(lVar15 + 0x30) != 0) &&
         (lVar18 = *(long *)(*(long *)(lVar15 + 0x30) + 0x10), lVar18 != 0)) break;
      lVar18 = func_0x00f78af4();
      *(long *)(puVar9 + -0x90) = auVar34._8_8_;
      *(long *)(puVar9 + -0x88) = lVar15;
      *(undefined1 **)(puVar9 + -0x80) = puVar26;
      *(undefined **)(puVar9 + -0x78) = &Atlas_Gameplay_Kart_KartUsableManager__CancelShuffle;
      if ((bRam0000000003eb53c7 & 1) == 0) {
        func_0x00f78a20(0x3d57318);
        bRam0000000003eb53c7 = 1;
      }
      iVar12 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar18 + 0xa0,0);
      if (iVar12 == 0) {
code_r0x015e293c:
        *(undefined4 *)(lVar18 + 0xa8) = 0xffffffff;
        if ((*(long *)(lVar18 + 0x58) != 0) &&
           (lVar15 = *(long *)(*(long *)(lVar18 + 0x58) + 0x70), lVar15 != 0)) {
          /*Atlas.Audio.KartAudio$$StopShuffleCancelled*/ func_0x015c0e1c(lVar15,0);
          if (*(long *)(lVar18 + 0x68) != 0) {
            lVar15 = *(long *)(*(long *)(lVar18 + 0x68) + 0x40);
            if (lVar15 == 0) {
              return 0;
            }
            if (*(long *)(lVar18 + 0x58) != 0) {
              plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + 0x90);
              uVar17 = *(ulong *)(lVar15 + 0x68);
              if (uVar17 == 0) {
                return 0;
              }
              *(undefined8 *)(puVar9 + -0xc0) = unaff_x26;
              *(undefined8 *)(puVar9 + -0xb8) = unaff_x25;
              *(undefined8 *)(puVar9 + -0xb0) = unaff_x24;
              *(undefined1 **)(puVar9 + -0xa8) = unaff_x23;
              *(undefined8 *)(puVar9 + -0xa0) = unaff_x22;
              *(undefined8 *)(puVar9 + -0x98) = 0x3eb5000;
              *(undefined8 *)(puVar9 + -0x90) = *(undefined8 *)(puVar9 + -0x90);
              *(undefined8 *)(puVar9 + -0x88) = *(undefined8 *)(puVar9 + -0x88);
              *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(puVar9 + -0x80);
              *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x78);
              *(ulong *)(puVar9 + -200) = uVar17;
              lVar15 = *(long *)(uVar17 + 0x68);
              if (lVar15 == 0) {
                puVar26 = puVar9 + -200;
                lVar18 = 1;
              }
              else {
                lVar18 = *(long *)(lVar15 + 0x18);
                if (lVar18 == 0) {
                  return uVar17;
                }
                puVar26 = (undefined1 *)(lVar15 + 0x20);
              }
              lVar15 = 0;
              goto code_r0x01552340;
            }
          }
        }
      }
      else if ((*(long *)(lVar18 + 0x30) != 0) &&
              (lVar15 = *(long *)(*(long *)(lVar18 + 0x30) + 0x10), lVar15 != 0)) {
        lVar15 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,*(undefined8 *)(lVar18 + 0xa0),lRam0000000003d57318);
        if ((*(long *)(lVar18 + 0x68) != 0) &&
           ((lVar15 != 0 && (lVar19 = *(long *)(*(long *)(lVar18 + 0x68) + 0x1e8), lVar19 != 0)))) {
          param_4 = 0;
          /*Atlas.Gameplay.Pickups.PickupManager$$OnUsableDespawned*/ func_0x014bb17c(lVar19,lVar15,*(undefined4 *)(lVar15 + 0x20));
          goto code_r0x015e293c;
        }
      }
      auVar34 = func_0x00f78af4();
      uVar23 = auVar34._8_8_;
      lVar15 = auVar34._0_8_;
      *(undefined8 *)(puVar9 + -0xc0) = unaff_x22;
      *(undefined8 *)(puVar9 + -0xb8) = 0x3eb5000;
      *(undefined8 *)(puVar9 + -0xb0) = 0x3eb5000;
      *(long *)(puVar9 + -0xa8) = lVar18;
      *(undefined1 **)(puVar9 + -0xa0) = puVar9 + -0x80;
      *(undefined **)(puVar9 + -0x98) = &Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal;
      lVar18 = 0x3eb5000;
      if ((bRam0000000003eb53bf & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d57288);
        func_0x00f78a20(0x3d57318);
        bRam0000000003eb53bf = 1;
      }
      lVar19 = *(long *)(lVar15 + 0x58);
      if (lVar19 != 0) {
        uVar20 = *(undefined8 *)(lVar19 + 0x48);
        uVar30 = *(undefined8 *)(lVar19 + 0x60);
        uVar29 = *(undefined8 *)(lVar19 + 0x58);
        *(undefined8 *)(puVar9 + -0xd8) = *(undefined8 *)(lVar19 + 0x50);
        *(undefined8 *)(puVar9 + -0xe0) = uVar20;
        *(undefined8 *)(puVar9 + -200) = uVar30;
        *(undefined8 *)(puVar9 + -0xd0) = uVar29;
        uVar17 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar9 + -0xe0,0);
        if ((int)uVar17 == 0) {
          return uVar17;
        }
        uVar17 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar23,0);
        if ((uVar17 & 1) == 0) {
          if ((*(long *)(lVar15 + 0x30) != 0) &&
             (lVar19 = *(long *)(*(long *)(lVar15 + 0x30) + 0x10), lVar19 != 0)) {
            lVar18 = *(long *)(lVar15 + 0x38);
            plVar22 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar19,uVar23,lRam0000000003d57318);
            if ((plVar22 != (long *)0x0) &&
               (uVar20 = (**(code **)(*plVar22 + 0x188))(plVar22,*(undefined8 *)(*plVar22 + 400)),
               lVar18 != 0)) {
              uVar17 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar18,uVar20,0);
              if ((int)uVar17 == 0) {
                return uVar17;
              }
              goto code_r0x015e2a70;
            }
          }
        }
        else {
code_r0x015e2a70:
          if ((*(long *)(lVar15 + 0x78) != 0) || (0 < *(int *)(lVar15 + 0xa8))) {
            return uVar17;
          }
          if ((*(long *)(lVar15 + 0x58) != 0) &&
             (lVar19 = *(long *)(*(long *)(lVar15 + 0x58) + 0x90), lVar19 != 0)) {
            if (*(char *)(lVar19 + 0x98) != '\0') {
              return uVar17;
            }
            if (((*(long *)(lVar15 + 0x30) != 0) && (*(long *)(lVar15 + 0x68) != 0)) &&
               (lVar19 = *(long *)(*(long *)(lVar15 + 0x68) + 0x1c0), lVar19 != 0)) {
              lVar18 = *(long *)(*(long *)(lVar15 + 0x30) + 0x10);
              unaff_x22 = *(undefined8 *)(lVar19 + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
              if (lVar18 != 0) {
                lVar19 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar18,uVar20,uRam0000000003d57288);
                *(undefined4 *)(lVar15 + 0xac) = *(undefined4 *)(lVar15 + 0x28);
                if (lVar19 != 0) {
                  uVar20 = /*Atlas.Definitions.GameContextDefinition$$get_UsableShuffleDuration*/ func_0x015a4c6c(lVar19,0);
                  *(int *)(lVar15 + 0xb0) = (int)uVar20;
                  *(int *)(lVar15 + 0xa8) = (int)uVar20;
                  *(undefined8 *)(lVar15 + 0xa0) = uVar23;
                  if (((*(long *)(lVar15 + 0x68) != 0) && (*(long *)(lVar15 + 0x58) != 0)) &&
                     (lVar19 = *(long *)(*(long *)(lVar15 + 0x68) + 0x40), lVar19 != 0)) {
                    param_4 = 0;
                    /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsablePickedUp*/ func_0x015a5ac0(lVar19,*(undefined8 *)(*(long *)(lVar15 + 0x58) + 0x90),uVar20);
                    if ((*(long *)(lVar15 + 0x58) != 0) &&
                       (lVar19 = *(long *)(*(long *)(lVar15 + 0x58) + 0x70), lVar19 != 0)) {
                      uVar17 = /*Atlas.Audio.KartAudio$$StartShuffle*/ func_0x015c0d6c(lVar19,0);
                      return uVar17;
                    }
                  }
                }
              }
            }
          }
        }
      }
      auVar35 = func_0x00f78af4();
      uVar13 = auVar35._0_8_;
      *(undefined8 *)(puVar9 + -0x110) = unaff_x22;
      *(long *)(puVar9 + -0x108) = lVar18;
      *(undefined8 *)(puVar9 + -0x100) = uVar23;
      *(long *)(puVar9 + -0xf8) = lVar15;
      *(undefined1 **)(puVar9 + -0xf0) = puVar9 + -0xa0;
      *(undefined **)(puVar9 + -0xe8) = &Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData;
      puVar26 = puVar9 + -0xf0;
      lVar18 = 0x3eb5000;
      uVar17 = uVar13;
      if ((bRam0000000003eb53c0 & 1) == 0) {
        uVar17 = func_0x00f78a20(0x3d57318);
        bRam0000000003eb53c0 = 1;
      }
      if (*(int *)(uVar13 + 0xa8) < 0) {
        return uVar17;
      }
      if ((*(long *)(uVar13 + 0x30) != 0) &&
         (lVar15 = *(long *)(*(long *)(uVar13 + 0x30) + 0x10), lVar15 != 0)) {
        lVar18 = *(long *)(uVar13 + 0x38);
        plVar22 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,auVar35._8_8_,lRam0000000003d57318);
        if ((plVar22 != (long *)0x0) &&
           (uVar23 = (**(code **)(*plVar22 + 0x188))(plVar22,*(undefined8 *)(*plVar22 + 400)),
           lVar18 != 0)) {
          uVar17 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar18,uVar23,0);
          if ((int)uVar17 == 0) {
            return uVar17;
          }
          *(long *)(uVar13 + 0xa0) = auVar35._8_8_;
          return uVar17;
        }
      }
      puVar27 = &Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal;
      auVar34 = func_0x00f78af4();
      *(long *)(auVar34._0_8_ + 0xa0) = auVar34._8_8_;
      puVar9 = puVar9 + -0x110;
    }
    param_3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar18,*(undefined8 *)(lVar15 + 0xa0),lRam0000000003d57318);
    auVar33._8_4_ = *(undefined4 *)(lVar15 + 0x28);
    auVar33._0_8_ = lVar15;
    auVar33._12_4_ = 0;
    puVar27 = &UNK_015e2858;
  } while( true );
code_r0x01552340:
  lVar19 = *(long *)(puVar26 + lVar15 * 8);
  pcVar25 = *(code **)(lVar19 + 0x10);
  plVar1 = *(long **)(lVar19 + 0x20);
  lVar19 = *(long *)(lVar19 + 0x28);
  if (*(short *)(lVar19 + 0x48) == -1) {
    func_0x00f78ad8(lVar19);
  }
  iVar12 = func_0x00f78a4c(lVar19);
  bVar10 = *(char *)(lVar19 + 0x4a) == '\x01';
  if (iVar12 == 0) {
    if (bVar10) {
      if (plVar1 == (long *)0x0) {
code_r0x01552480:
        uVar13 = (*pcVar25)(plVar22,lVar19);
      }
      else {
        if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(uVar17 + 0x18) == 0)) goto code_r0x01552378;
        iVar12 = func_0x00f78a44(lVar19);
        iVar11 = func_0x00f78ec0(lVar19);
        if (iVar12 == 0) {
          uVar5 = *(ushort *)(lVar19 + 0x48);
          if (iVar11 == 0) {
            lVar19 = *plVar1 + (ulong)uVar5 * 0x10;
            uVar13 = (**(code **)(lVar19 + 0x138))(plVar1,plVar22,*(undefined8 *)(lVar19 + 0x140));
            goto code_r0x0155248c;
          }
          lVar19 = func_0x00f78a48(lVar19);
          lVar16 = *plVar1;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar13 != 0) {
            piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar19) {
                puVar14 = (undefined8 *)
                          (lVar16 + (long)(int)(*piVar24 + (uint)uVar5) * 0x10 + 0x138);
                goto code_r0x01552618;
              }
              piVar24 = piVar24 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar5);
code_r0x01552618:
          pcVar25 = (code *)*puVar14;
          puVar14 = (undefined8 *)puVar14[1];
        }
        else {
          if (iVar11 == 0) {
            uVar23 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar16 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar13 != 0) {
              piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)(lVar19 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar19 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015525f0;
                }
                piVar24 = piVar24 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar16 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
            uVar23 = *(undefined8 *)(lVar16 + 8);
          }
          puVar14 = (undefined8 *)func_0x00f78acc(uVar23,lVar19);
          pcVar25 = (code *)*puVar14;
        }
        uVar13 = (*pcVar25)(plVar1,plVar22,puVar14);
      }
    }
    else {
      if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(uVar17 + 0x18) == 0))
      goto code_r0x01552480;
      iVar12 = func_0x00f78a44(lVar19);
      iVar11 = func_0x00f78ec0(lVar19);
      if (iVar12 == 0) {
        uVar5 = *(ushort *)(lVar19 + 0x48);
        if (iVar11 == 0) {
          lVar19 = *plVar22 + (ulong)uVar5 * 0x10;
          uVar13 = (**(code **)(lVar19 + 0x138))(plVar22,*(undefined8 *)(lVar19 + 0x140));
          goto code_r0x0155248c;
        }
        lVar19 = func_0x00f78a48(lVar19);
        lVar16 = *plVar22;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar13 != 0) {
          piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar19) {
              puVar14 = (undefined8 *)(lVar16 + (long)(int)(*piVar24 + (uint)uVar5) * 0x10 + 0x138);
              goto code_r0x015525b4;
            }
            piVar24 = piVar24 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)func_0x00fac1f0(plVar22,lVar19,(ulong)uVar5);
code_r0x015525b4:
        pcVar25 = (code *)*puVar14;
        puVar14 = (undefined8 *)puVar14[1];
      }
      else {
        if (iVar11 == 0) {
          uVar23 = *(undefined8 *)(*plVar22 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar16 = *plVar22;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar13 != 0) {
            piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)(lVar19 + 0x18)) {
                lVar16 = lVar16 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar19 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155258c;
              }
              piVar24 = piVar24 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          lVar16 = func_0x00fac1f0(plVar22);
code_r0x0155258c:
          uVar23 = *(undefined8 *)(lVar16 + 8);
        }
        puVar14 = (undefined8 *)func_0x00f78acc(uVar23,lVar19);
        pcVar25 = (code *)*puVar14;
      }
      uVar13 = (*pcVar25)(plVar22,puVar14);
    }
  }
  else {
    if (bVar10) goto code_r0x01552480;
code_r0x01552378:
    uVar13 = (*pcVar25)(plVar1,plVar22,lVar19);
  }
code_r0x0155248c:
  lVar15 = lVar15 + 1;
  if (lVar15 == lVar18) {
    return uVar13;
  }
  goto code_r0x01552340;
}



// ============================================================
// RVA: 0x15e2584 | Atlas.Gameplay.Kart.KartUsableManager.CreateEquipCommand
// ============================================================

ulong Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand
                (undefined8 *param_1,long param_2,undefined4 param_3,long param_4,long param_5)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar6;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  int *piVar17;
  long unaff_x21;
  long unaff_x22;
  code *pcVar18;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar19;
  undefined *puVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_1b0 [8];
  undefined4 uStack_1a8;
  undefined2 uStack_1a4;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  undefined2 uStack_1a0;
  undefined1 uStack_19e;
  long lStack_19d;
  undefined5 uStack_195;
  undefined3 uStack_190;
  undefined5 uStack_18d;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_ea;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined8 uStack_d3;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined4 uStack_61;
  undefined4 uStack_5d;
  undefined4 uStack_59;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR_03a5d648;
  uStack_54 = 0;
  uStack_64 = 0;
  uStack_62 = 0;
  lVar11 = param_4;
  if ((*(long *)(param_2 + 0x48) == 0) ||
     (lVar9 = *(long *)(*(long *)(param_2 + 0x48) + 0x20), unaff_x22 = param_2, lVar9 == 0)) {
LAB_015e2660:
    func_0x00f78af4();
  }
  else {
    uVar10 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(auStack_80,lVar9,0);
    uStack_48 = (undefined4)uStack_78;
    uStack_44 = (undefined4)((ulong)uStack_78 >> 0x20);
    uStack_50 = auStack_80._0_4_;
    uStack_4c = auStack_80._4_4_;
    uStack_40 = uStack_70;
    uVar16 = *(undefined8 *)(param_2 + 0xa0);
    uStack_61 = 0;
    uStack_5d = 0;
    uStack_59 = 0;
    unaff_x21 = param_4;
    if (param_4 == 0) goto LAB_015e2660;
    uVar21 = *(undefined4 *)(param_4 + 0x20);
    *(undefined4 *)param_1 = param_3;
    *(undefined4 *)((long)param_1 + 4) = 0;
    param_1[1] = uVar16;
    *(undefined4 *)(param_1 + 2) = uVar21;
    *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_48,uStack_4c);
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack_50,uStack_54);
    param_1[5] = uStack_70;
    param_1[4] = uStack_78;
    *(undefined1 *)(param_1 + 6) = 0;
    *(ulong *)((long)param_1 + 0x31) = (ulong)CONCAT12(uStack_62,uStack_64);
    param_1[7] = 0;
    if (*(long *)PTR_03a5d648 == lStack_38) {
      return uVar10;
    }
  }
  auVar24 = ___stack_chk_fail();
  puVar7 = auVar24._8_8_;
  lVar9 = auVar24._0_8_;
  puStack_88 = &Atlas_Gameplay_Kart_KartUsableManager__AddNetworkUsableCommand;
  ppuVar19 = &puStack_90;
  lStack_c8 = *(long *)PTR_03a5d648;
  uStack_ea = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar9 + 0x50) != 0) {
    uVar10 = /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(lVar9 + 0x50),puVar7[1],&uStack_ea,0);
    param_1 = puVar7;
    unaff_x21 = lVar11;
    unaff_x22 = param_5;
    if ((int)uVar10 == 0) {
code_r0x015e2790:
      if (*(long *)PTR_03a5d648 == lStack_c8) {
        return uVar10;
      }
      goto code_r0x015e27c4;
    }
    unaff_x23 = &uStack_130;
    if ((int)param_5 != 0) {
      uStack_128 = puVar7[1];
      uStack_130 = *puVar7;
      uStack_118 = puVar7[3];
      uStack_120 = puVar7[2];
      uStack_108 = puVar7[5];
      uStack_110 = puVar7[4];
      uStack_f8 = puVar7[7];
      uStack_100 = puVar7[6];
      /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar9,&uStack_130);
    }
    uStack_e4 = uStack_e4 & 0xffffff00;
    uStack_e8 = 0;
    if (*(long *)(lVar9 + 0x58) != 0) {
      lStack_158 = puVar7[3];
      uStack_160 = puVar7[2];
      uStack_148 = puVar7[5];
      uStack_150 = puVar7[4];
      uStack_db = (undefined3)uStack_150;
      uStack_d8 = (undefined5)((ulong)uStack_150 >> 0x18);
      uStack_e4._1_3_ = (uint3)lStack_158;
      uStack_e4 = (uint)uStack_e4._1_3_ << 8;
      uStack_e0 = (undefined5)((ulong)lStack_158 >> 0x18);
      uVar16 = 0;
      uVar21 = 0;
      if (((int)lVar11 == 5) && (*(int *)((long)puVar7 + 4) == 1)) {
        uVar16 = *(undefined8 *)((long)puVar7 + 0x34);
        uVar21 = *(undefined4 *)((long)puVar7 + 0x3c);
      }
      uStack_d3 = uStack_148;
      if ((*(long *)(lVar9 + 0x48) != 0) &&
         (lVar11 = *(long *)(*(long *)(lVar9 + 0x48) + 0x20), lVar11 != 0)) {
        uStack_1a4 = (undefined2)*(undefined4 *)puVar7;
        uStack_1a2 = (undefined1)*(undefined4 *)(puVar7 + 2);
        uStack_1a1 = 0;
        uStack_1a0 = uStack_ea;
        uStack_19e = (undefined1)*(int *)((long)puVar7 + 4);
        lStack_19d = lStack_158 << 0x28;
        uStack_195 = uStack_e0;
        uStack_174 = 0;
        uStack_1a8 = *(undefined4 *)(*(long *)(lVar9 + 0x58) + 0x54);
        uStack_190 = uStack_db;
        uStack_18d = uStack_d8;
        uStack_188 = uStack_148;
        uStack_180 = uVar16;
        uStack_178 = uVar21;
        uVar10 = /*Core.Networking.NetworkSession$$AddOutgoingUsableUpdate*/ func_0x0165e984(lVar11,&uStack_1a8,0);
        goto code_r0x015e2790;
      }
    }
  }
  func_0x00f78af4();
code_r0x015e27c4:
  auVar25._8_8_ = param_1;
  auVar25._0_8_ = lVar9;
  puVar20 = &Atlas_Gameplay_Kart_KartUsableManager__StartEquipLocal;
  auVar24 = ___stack_chk_fail();
  puVar3 = auStack_1b0;
  do {
    lVar11 = auVar24._0_8_;
    *(long *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar3 + -0x20) = auVar25;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar19;
    *(undefined **)(puVar3 + -8) = puVar20;
    if ((bRam0000000003eb53c2 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c2 = 1;
    }
    uVar10 = Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal(lVar11);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    *(undefined1 *)(lVar11 + 0x60) = 0;
    *(int *)(lVar11 + 0x28) = *(int *)(lVar11 + 0x28) + 1;
    if ((*(long *)(lVar11 + 0x30) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar11 + 0x30) + 0x10), lVar9 != 0)) {
      uVar16 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)(lVar11 + 0xa0),uRam0000000003d57318);
      Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand
                (puVar3 + -0x70,lVar11,*(undefined4 *)(lVar11 + 0x28),uVar16);
      /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar11,puVar3 + -0x70);
      uVar10 = Atlas_Gameplay_Kart_KartUsableManager__HasUsesRemaining(lVar11,auVar24._8_8_);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      if ((*(long *)(lVar11 + 0x58) != 0) &&
         (uVar10 = *(ulong *)(*(long *)(lVar11 + 0x58) + 0x70), uVar10 != 0)) {
        *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
        *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        uVar8 = uVar10;
        if ((bRam0000000003eb52e1 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28,0);
          uVar8 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52e1 = 1;
        }
        if (*(char *)(uVar10 + 0x38) != '\0') {
          return uVar8;
        }
        lVar11 = *(long *)(uVar10 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((lVar11 != 0) &&
           (lVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar11,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                                     uRam0000000003d2fb00), lVar11 != 0)) {
          /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar11,0,0);
          if ((*(long *)(uVar10 + 0x150) != 0) &&
             (uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(uVar10 + 0x150),
                                       *(undefined8 *)
                                        (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2a0),
                                       uRam0000000003d2fb00), uVar10 != 0)) {
            *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
            *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
            *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
            *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar10,0,0);
            return uVar10;
          }
        }
        uVar10 = func_0x00f78af4();
        return uVar10;
      }
    }
    lVar9 = func_0x00f78af4();
    *(long *)(puVar3 + -0x90) = auVar24._8_8_;
    *(long *)(puVar3 + -0x88) = lVar11;
    *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x78) = &Atlas_Gameplay_Kart_KartUsableManager__CancelShuffle;
    if ((bRam0000000003eb53c7 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c7 = 1;
    }
    iVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar9 + 0xa0,0);
    if (iVar6 == 0) {
code_r0x015e293c:
      *(undefined4 *)(lVar9 + 0xa8) = 0xffffffff;
      if ((*(long *)(lVar9 + 0x58) != 0) &&
         (lVar11 = *(long *)(*(long *)(lVar9 + 0x58) + 0x70), lVar11 != 0)) {
        /*Atlas.Audio.KartAudio$$StopShuffleCancelled*/ func_0x015c0e1c(lVar11,0);
        if (*(long *)(lVar9 + 0x68) != 0) {
          lVar11 = *(long *)(*(long *)(lVar9 + 0x68) + 0x40);
          if (lVar11 == 0) {
            return 0;
          }
          if (*(long *)(lVar9 + 0x58) != 0) {
            plVar14 = *(long **)(*(long *)(lVar9 + 0x58) + 0x90);
            uVar10 = *(ulong *)(lVar11 + 0x68);
            if (uVar10 == 0) {
              return 0;
            }
            *(undefined8 *)(puVar3 + -0xc0) = unaff_x26;
            *(undefined8 *)(puVar3 + -0xb8) = unaff_x25;
            *(undefined8 *)(puVar3 + -0xb0) = unaff_x24;
            *(undefined8 **)(puVar3 + -0xa8) = unaff_x23;
            *(long *)(puVar3 + -0xa0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0x98) = 0x3eb5000;
            *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
            *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
            *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x78);
            *(ulong *)(puVar3 + -200) = uVar10;
            lVar11 = *(long *)(uVar10 + 0x68);
            if (lVar11 == 0) {
              puVar3 = puVar3 + -200;
              lVar9 = 1;
            }
            else {
              lVar9 = *(long *)(lVar11 + 0x18);
              if (lVar9 == 0) {
                return uVar10;
              }
              puVar3 = (undefined1 *)(lVar11 + 0x20);
            }
            lVar11 = 0;
            break;
          }
        }
      }
    }
    else if ((*(long *)(lVar9 + 0x30) != 0) &&
            (lVar11 = *(long *)(*(long *)(lVar9 + 0x30) + 0x10), lVar11 != 0)) {
      lVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,*(undefined8 *)(lVar9 + 0xa0),uRam0000000003d57318);
      if ((*(long *)(lVar9 + 0x68) != 0) &&
         ((lVar11 != 0 && (lVar12 = *(long *)(*(long *)(lVar9 + 0x68) + 0x1e8), lVar12 != 0)))) {
        /*Atlas.Gameplay.Pickups.PickupManager$$OnUsableDespawned*/ func_0x014bb17c(lVar12,lVar11,*(undefined4 *)(lVar11 + 0x20),0);
        goto code_r0x015e293c;
      }
    }
    auVar24 = func_0x00f78af4();
    uVar16 = auVar24._8_8_;
    lVar11 = auVar24._0_8_;
    *(long *)(puVar3 + -0xc0) = unaff_x22;
    *(undefined8 *)(puVar3 + -0xb8) = 0x3eb5000;
    *(undefined8 *)(puVar3 + -0xb0) = 0x3eb5000;
    *(long *)(puVar3 + -0xa8) = lVar9;
    *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x80;
    *(undefined **)(puVar3 + -0x98) = &Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal;
    lVar9 = 0x3eb5000;
    if ((bRam0000000003eb53bf & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57288);
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53bf = 1;
    }
    lVar12 = *(long *)(lVar11 + 0x58);
    if (lVar12 != 0) {
      uVar13 = *(undefined8 *)(lVar12 + 0x48);
      uVar23 = *(undefined8 *)(lVar12 + 0x60);
      uVar22 = *(undefined8 *)(lVar12 + 0x58);
      *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(lVar12 + 0x50);
      *(undefined8 *)(puVar3 + -0xe0) = uVar13;
      *(undefined8 *)(puVar3 + -200) = uVar23;
      *(undefined8 *)(puVar3 + -0xd0) = uVar22;
      uVar10 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar3 + -0xe0,0);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar16,0);
      if ((uVar10 & 1) == 0) {
        if ((*(long *)(lVar11 + 0x30) != 0) &&
           (lVar12 = *(long *)(*(long *)(lVar11 + 0x30) + 0x10), lVar12 != 0)) {
          lVar9 = *(long *)(lVar11 + 0x38);
          plVar14 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,uVar16,uRam0000000003d57318);
          if ((plVar14 != (long *)0x0) &&
             (uVar13 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400)),
             lVar9 != 0)) {
            uVar10 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar9,uVar13,0);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
            goto code_r0x015e2a70;
          }
        }
      }
      else {
code_r0x015e2a70:
        if ((*(long *)(lVar11 + 0x78) != 0) || (0 < *(int *)(lVar11 + 0xa8))) {
          return uVar10;
        }
        if ((*(long *)(lVar11 + 0x58) != 0) &&
           (lVar12 = *(long *)(*(long *)(lVar11 + 0x58) + 0x90), lVar12 != 0)) {
          if (*(char *)(lVar12 + 0x98) != '\0') {
            return uVar10;
          }
          if (((*(long *)(lVar11 + 0x30) != 0) && (*(long *)(lVar11 + 0x68) != 0)) &&
             (lVar12 = *(long *)(*(long *)(lVar11 + 0x68) + 0x1c0), lVar12 != 0)) {
            lVar9 = *(long *)(*(long *)(lVar11 + 0x30) + 0x10);
            unaff_x22 = *(long *)(lVar12 + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
            if (lVar9 != 0) {
              lVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,uVar13,uRam0000000003d57288);
              *(undefined4 *)(lVar11 + 0xac) = *(undefined4 *)(lVar11 + 0x28);
              if (lVar12 != 0) {
                uVar13 = /*Atlas.Definitions.GameContextDefinition$$get_UsableShuffleDuration*/ func_0x015a4c6c(lVar12,0);
                *(int *)(lVar11 + 0xb0) = (int)uVar13;
                *(int *)(lVar11 + 0xa8) = (int)uVar13;
                *(undefined8 *)(lVar11 + 0xa0) = uVar16;
                if (((*(long *)(lVar11 + 0x68) != 0) && (*(long *)(lVar11 + 0x58) != 0)) &&
                   (lVar12 = *(long *)(*(long *)(lVar11 + 0x68) + 0x40), lVar12 != 0)) {
                  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsablePickedUp*/ func_0x015a5ac0(lVar12,*(undefined8 *)(*(long *)(lVar11 + 0x58) + 0x90),uVar13,0);
                  if ((*(long *)(lVar11 + 0x58) != 0) &&
                     (lVar12 = *(long *)(*(long *)(lVar11 + 0x58) + 0x70), lVar12 != 0)) {
                    uVar10 = /*Atlas.Audio.KartAudio$$StartShuffle*/ func_0x015c0d6c(lVar12,0);
                    return uVar10;
                  }
                }
              }
            }
          }
        }
      }
    }
    auVar25 = func_0x00f78af4();
    uVar8 = auVar25._0_8_;
    *(long *)(puVar3 + -0x110) = unaff_x22;
    *(long *)(puVar3 + -0x108) = lVar9;
    *(undefined8 *)(puVar3 + -0x100) = uVar16;
    *(long *)(puVar3 + -0xf8) = lVar11;
    *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0xa0;
    *(undefined **)(puVar3 + -0xe8) = &Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData;
    ppuVar19 = (undefined1 **)(puVar3 + -0xf0);
    unaff_x21 = 0x3eb5000;
    uVar10 = uVar8;
    if ((bRam0000000003eb53c0 & 1) == 0) {
      uVar10 = func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c0 = 1;
    }
    if (*(int *)(uVar8 + 0xa8) < 0) {
      return uVar10;
    }
    if ((*(long *)(uVar8 + 0x30) != 0) &&
       (lVar11 = *(long *)(*(long *)(uVar8 + 0x30) + 0x10), lVar11 != 0)) {
      unaff_x21 = *(long *)(uVar8 + 0x38);
      plVar14 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,auVar25._8_8_,uRam0000000003d57318);
      if ((plVar14 != (long *)0x0) &&
         (uVar16 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400)),
         unaff_x21 != 0)) {
        uVar10 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(unaff_x21,uVar16,0);
        if ((int)uVar10 != 0) {
          *(long *)(uVar8 + 0xa0) = auVar25._8_8_;
        }
        return uVar10;
      }
    }
    puVar20 = &Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal;
    auVar24 = func_0x00f78af4();
    *(long *)(auVar24._0_8_ + 0xa0) = auVar24._8_8_;
    puVar3 = puVar3 + -0x110;
  } while( true );
code_r0x01552340:
  lVar12 = *(long *)(puVar3 + lVar11 * 8);
  pcVar18 = *(code **)(lVar12 + 0x10);
  plVar1 = *(long **)(lVar12 + 0x20);
  lVar12 = *(long *)(lVar12 + 0x28);
  if (*(short *)(lVar12 + 0x48) == -1) {
    func_0x00f78ad8(lVar12);
  }
  iVar6 = func_0x00f78a4c(lVar12);
  bVar4 = *(char *)(lVar12 + 0x4a) == '\x01';
  if (iVar6 == 0) {
    if (bVar4) {
      if (plVar1 == (long *)0x0) {
code_r0x01552480:
        uVar8 = (*pcVar18)(plVar14,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(uVar10 + 0x18) == 0)) goto code_r0x01552378;
        iVar6 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar6 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar8 = (**(code **)(lVar12 + 0x138))(plVar1,plVar14,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x0155248c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar15 = *plVar1;
          uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar15 + (long)(int)(*piVar17 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552618;
              }
              piVar17 = piVar17 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01552618:
          pcVar18 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar16 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar15 = *plVar1;
            uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar15 = lVar15 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015525f0;
                }
                piVar17 = piVar17 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            lVar15 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
            uVar16 = *(undefined8 *)(lVar15 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar16,lVar12);
          pcVar18 = (code *)*puVar7;
        }
        uVar8 = (*pcVar18)(plVar1,plVar14,puVar7);
      }
    }
    else {
      if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(uVar10 + 0x18) == 0))
      goto code_r0x01552480;
      iVar6 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar6 == 0) {
        uVar2 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar14 + (ulong)uVar2 * 0x10;
          uVar8 = (**(code **)(lVar12 + 0x138))(plVar14,*(undefined8 *)(lVar12 + 0x140));
          goto code_r0x0155248c;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar15 = *plVar14;
        uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar15 + (long)(int)(*piVar17 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x015525b4;
            }
            piVar17 = piVar17 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar14,lVar12,(ulong)uVar2);
code_r0x015525b4:
        pcVar18 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar16 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar15 = *plVar14;
          uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar15 = lVar15 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155258c;
              }
              piVar17 = piVar17 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          lVar15 = func_0x00fac1f0(plVar14);
code_r0x0155258c:
          uVar16 = *(undefined8 *)(lVar15 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar16,lVar12);
        pcVar18 = (code *)*puVar7;
      }
      uVar8 = (*pcVar18)(plVar14,puVar7);
    }
  }
  else {
    if (bVar4) goto code_r0x01552480;
code_r0x01552378:
    uVar8 = (*pcVar18)(plVar1,plVar14,lVar12);
  }
code_r0x0155248c:
  lVar11 = lVar11 + 1;
  if (lVar11 == lVar9) {
    return uVar8;
  }
  goto code_r0x01552340;
}



// ============================================================
// RVA: 0x15e2668 | Atlas.Gameplay.Kart.KartUsableManager.AddNetworkUsableCommand
// ============================================================

ulong Atlas_Gameplay_Kart_KartUsableManager__AddNetworkUsableCommand
                (ulong param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 unaff_x22;
  code *pcVar17;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *puVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_130 [8];
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  long lStack_11d;
  undefined5 uStack_115;
  undefined3 uStack_110;
  undefined5 uStack_10d;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  uint uStack_64;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined8 uStack_53;
  long lStack_48;
  
  puVar18 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR_03a5d648;
  uStack_6a = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar9 = /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x50),param_2[1],&uStack_6a,0);
    unaff_x19 = param_2;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    if ((int)uVar9 == 0) {
LAB_015e2790:
      if (*(long *)PTR_03a5d648 == lStack_48) {
        return uVar9;
      }
      goto LAB_015e27c4;
    }
    unaff_x23 = &uStack_b0;
    if ((int)param_4 != 0) {
      uStack_a8 = param_2[1];
      uStack_b0 = *param_2;
      uStack_98 = param_2[3];
      uStack_a0 = param_2[2];
      uStack_88 = param_2[5];
      uStack_90 = param_2[4];
      uStack_78 = param_2[7];
      uStack_80 = param_2[6];
      /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(param_1,&uStack_b0);
    }
    uStack_64 = uStack_64 & 0xffffff00;
    uStack_68 = 0;
    if (*(long *)(param_1 + 0x58) != 0) {
      lStack_d8 = param_2[3];
      uStack_e0 = param_2[2];
      uStack_c8 = param_2[5];
      uStack_d0 = param_2[4];
      uStack_5b = (undefined3)uStack_d0;
      uStack_58 = (undefined5)((ulong)uStack_d0 >> 0x18);
      uStack_64._1_3_ = (uint3)lStack_d8;
      uStack_64 = (uint)uStack_64._1_3_ << 8;
      uStack_60 = (undefined5)((ulong)lStack_d8 >> 0x18);
      uVar20 = 0;
      uVar21 = 0;
      if (((int)param_3 == 5) && (*(int *)((long)param_2 + 4) == 1)) {
        uVar20 = *(undefined8 *)((long)param_2 + 0x34);
        uVar21 = *(undefined4 *)((long)param_2 + 0x3c);
      }
      uStack_53 = uStack_c8;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar10 != 0)) {
        uStack_124 = (undefined2)*(undefined4 *)param_2;
        uStack_122 = (undefined1)*(undefined4 *)(param_2 + 2);
        uStack_121 = 0;
        uStack_120 = uStack_6a;
        uStack_11e = (undefined1)*(int *)((long)param_2 + 4);
        lStack_11d = lStack_d8 << 0x28;
        uStack_115 = uStack_60;
        uStack_f4 = 0;
        uStack_128 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x54);
        uStack_110 = uStack_5b;
        uStack_10d = uStack_58;
        uStack_108 = uStack_c8;
        uStack_100 = uVar20;
        uStack_f8 = uVar21;
        uVar9 = /*Core.Networking.NetworkSession$$AddOutgoingUsableUpdate*/ func_0x0165e984(lVar10,&uStack_128,0);
        goto LAB_015e2790;
      }
    }
  }
  func_0x00f78af4();
LAB_015e27c4:
  puVar19 = &Atlas_Gameplay_Kart_KartUsableManager__StartEquipLocal;
  auVar24 = ___stack_chk_fail();
  puVar3 = auStack_130;
  do {
    lVar10 = auVar24._0_8_;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(ulong *)(puVar3 + -0x20) = param_1;
    *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar18;
    *(undefined **)(puVar3 + -8) = puVar19;
    if ((bRam0000000003eb53c2 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c2 = 1;
    }
    uVar9 = Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal(lVar10);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    *(undefined1 *)(lVar10 + 0x60) = 0;
    *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + 1;
    if ((*(long *)(lVar10 + 0x30) != 0) &&
       (lVar11 = *(long *)(*(long *)(lVar10 + 0x30) + 0x10), lVar11 != 0)) {
      uVar20 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,*(undefined8 *)(lVar10 + 0xa0),uRam0000000003d57318);
      Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand
                (puVar3 + -0x70,lVar10,*(undefined4 *)(lVar10 + 0x28),uVar20);
      /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar10,puVar3 + -0x70);
      uVar9 = Atlas_Gameplay_Kart_KartUsableManager__HasUsesRemaining(lVar10,auVar24._8_8_);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      if ((*(long *)(lVar10 + 0x58) != 0) &&
         (uVar9 = *(ulong *)(*(long *)(lVar10 + 0x58) + 0x70), uVar9 != 0)) {
        *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
        *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        uVar8 = uVar9;
        if ((bRam0000000003eb52e1 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28,0);
          uVar8 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52e1 = 1;
        }
        if (*(char *)(uVar9 + 0x38) != '\0') {
          return uVar8;
        }
        lVar10 = *(long *)(uVar9 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((lVar10 != 0) &&
           (lVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar10,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                                     uRam0000000003d2fb00), lVar10 != 0)) {
          /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar10,0,0);
          if ((*(long *)(uVar9 + 0x150) != 0) &&
             (uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(uVar9 + 0x150),
                                      *(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2a0),
                                      uRam0000000003d2fb00), uVar9 != 0)) {
            *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
            *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
            *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
            *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar9,0,0);
            return uVar9;
          }
        }
        uVar9 = func_0x00f78af4();
        return uVar9;
      }
    }
    lVar11 = func_0x00f78af4();
    *(long *)(puVar3 + -0x90) = auVar24._8_8_;
    *(long *)(puVar3 + -0x88) = lVar10;
    *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x78) = &Atlas_Gameplay_Kart_KartUsableManager__CancelShuffle;
    if ((bRam0000000003eb53c7 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c7 = 1;
    }
    iVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar11 + 0xa0,0);
    if (iVar6 == 0) {
code_r0x015e293c:
      *(undefined4 *)(lVar11 + 0xa8) = 0xffffffff;
      if ((*(long *)(lVar11 + 0x58) != 0) &&
         (lVar10 = *(long *)(*(long *)(lVar11 + 0x58) + 0x70), lVar10 != 0)) {
        /*Atlas.Audio.KartAudio$$StopShuffleCancelled*/ func_0x015c0e1c(lVar10,0);
        if (*(long *)(lVar11 + 0x68) != 0) {
          lVar10 = *(long *)(*(long *)(lVar11 + 0x68) + 0x40);
          if (lVar10 == 0) {
            return 0;
          }
          if (*(long *)(lVar11 + 0x58) != 0) {
            plVar14 = *(long **)(*(long *)(lVar11 + 0x58) + 0x90);
            uVar9 = *(ulong *)(lVar10 + 0x68);
            if (uVar9 == 0) {
              return 0;
            }
            *(undefined8 *)(puVar3 + -0xc0) = unaff_x26;
            *(undefined8 *)(puVar3 + -0xb8) = unaff_x25;
            *(undefined8 *)(puVar3 + -0xb0) = unaff_x24;
            *(undefined8 **)(puVar3 + -0xa8) = unaff_x23;
            *(undefined8 *)(puVar3 + -0xa0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0x98) = 0x3eb5000;
            *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
            *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
            *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x78);
            *(ulong *)(puVar3 + -200) = uVar9;
            lVar10 = *(long *)(uVar9 + 0x68);
            if (lVar10 == 0) {
              puVar18 = puVar3 + -200;
              lVar11 = 1;
            }
            else {
              lVar11 = *(long *)(lVar10 + 0x18);
              if (lVar11 == 0) {
                return uVar9;
              }
              puVar18 = (undefined1 *)(lVar10 + 0x20);
            }
            lVar10 = 0;
            break;
          }
        }
      }
    }
    else if ((*(long *)(lVar11 + 0x30) != 0) &&
            (lVar10 = *(long *)(*(long *)(lVar11 + 0x30) + 0x10), lVar10 != 0)) {
      lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)(lVar11 + 0xa0),uRam0000000003d57318);
      if ((*(long *)(lVar11 + 0x68) != 0) &&
         ((lVar10 != 0 && (lVar12 = *(long *)(*(long *)(lVar11 + 0x68) + 0x1e8), lVar12 != 0)))) {
        /*Atlas.Gameplay.Pickups.PickupManager$$OnUsableDespawned*/ func_0x014bb17c(lVar12,lVar10,*(undefined4 *)(lVar10 + 0x20),0);
        goto code_r0x015e293c;
      }
    }
    auVar24 = func_0x00f78af4();
    uVar20 = auVar24._8_8_;
    lVar10 = auVar24._0_8_;
    *(undefined8 *)(puVar3 + -0xc0) = unaff_x22;
    *(undefined8 *)(puVar3 + -0xb8) = 0x3eb5000;
    *(undefined8 *)(puVar3 + -0xb0) = 0x3eb5000;
    *(long *)(puVar3 + -0xa8) = lVar11;
    *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x80;
    *(undefined **)(puVar3 + -0x98) = &Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal;
    lVar11 = 0x3eb5000;
    if ((bRam0000000003eb53bf & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57288);
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53bf = 1;
    }
    lVar12 = *(long *)(lVar10 + 0x58);
    if (lVar12 != 0) {
      uVar13 = *(undefined8 *)(lVar12 + 0x48);
      uVar23 = *(undefined8 *)(lVar12 + 0x60);
      uVar22 = *(undefined8 *)(lVar12 + 0x58);
      *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(lVar12 + 0x50);
      *(undefined8 *)(puVar3 + -0xe0) = uVar13;
      *(undefined8 *)(puVar3 + -200) = uVar23;
      *(undefined8 *)(puVar3 + -0xd0) = uVar22;
      uVar9 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar3 + -0xe0,0);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar20,0);
      if ((uVar9 & 1) == 0) {
        if ((*(long *)(lVar10 + 0x30) != 0) &&
           (lVar12 = *(long *)(*(long *)(lVar10 + 0x30) + 0x10), lVar12 != 0)) {
          lVar11 = *(long *)(lVar10 + 0x38);
          plVar14 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,uVar20,uRam0000000003d57318);
          if ((plVar14 != (long *)0x0) &&
             (uVar13 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400)),
             lVar11 != 0)) {
            uVar9 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar11,uVar13,0);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            goto code_r0x015e2a70;
          }
        }
      }
      else {
code_r0x015e2a70:
        if ((*(long *)(lVar10 + 0x78) != 0) || (0 < *(int *)(lVar10 + 0xa8))) {
          return uVar9;
        }
        if ((*(long *)(lVar10 + 0x58) != 0) &&
           (lVar12 = *(long *)(*(long *)(lVar10 + 0x58) + 0x90), lVar12 != 0)) {
          if (*(char *)(lVar12 + 0x98) != '\0') {
            return uVar9;
          }
          if (((*(long *)(lVar10 + 0x30) != 0) && (*(long *)(lVar10 + 0x68) != 0)) &&
             (lVar12 = *(long *)(*(long *)(lVar10 + 0x68) + 0x1c0), lVar12 != 0)) {
            lVar11 = *(long *)(*(long *)(lVar10 + 0x30) + 0x10);
            unaff_x22 = *(undefined8 *)(lVar12 + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
            if (lVar11 != 0) {
              lVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar13,uRam0000000003d57288);
              *(undefined4 *)(lVar10 + 0xac) = *(undefined4 *)(lVar10 + 0x28);
              if (lVar12 != 0) {
                uVar13 = /*Atlas.Definitions.GameContextDefinition$$get_UsableShuffleDuration*/ func_0x015a4c6c(lVar12,0);
                *(int *)(lVar10 + 0xb0) = (int)uVar13;
                *(int *)(lVar10 + 0xa8) = (int)uVar13;
                *(undefined8 *)(lVar10 + 0xa0) = uVar20;
                if (((*(long *)(lVar10 + 0x68) != 0) && (*(long *)(lVar10 + 0x58) != 0)) &&
                   (lVar12 = *(long *)(*(long *)(lVar10 + 0x68) + 0x40), lVar12 != 0)) {
                  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsablePickedUp*/ func_0x015a5ac0(lVar12,*(undefined8 *)(*(long *)(lVar10 + 0x58) + 0x90),uVar13,0);
                  if ((*(long *)(lVar10 + 0x58) != 0) &&
                     (lVar12 = *(long *)(*(long *)(lVar10 + 0x58) + 0x70), lVar12 != 0)) {
                    uVar9 = /*Atlas.Audio.KartAudio$$StartShuffle*/ func_0x015c0d6c(lVar12,0);
                    return uVar9;
                  }
                }
              }
            }
          }
        }
      }
    }
    auVar24 = func_0x00f78af4();
    unaff_x19 = auVar24._8_8_;
    param_1 = auVar24._0_8_;
    *(undefined8 *)(puVar3 + -0x110) = unaff_x22;
    *(long *)(puVar3 + -0x108) = lVar11;
    *(undefined8 *)(puVar3 + -0x100) = uVar20;
    *(long *)(puVar3 + -0xf8) = lVar10;
    *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0xa0;
    *(undefined **)(puVar3 + -0xe8) = &Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData;
    puVar18 = puVar3 + -0xf0;
    unaff_x21 = 0x3eb5000;
    uVar9 = param_1;
    if ((bRam0000000003eb53c0 & 1) == 0) {
      uVar9 = func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c0 = 1;
    }
    if (*(int *)(param_1 + 0xa8) < 0) {
      return uVar9;
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar10 != 0)) {
      unaff_x21 = *(long *)(param_1 + 0x38);
      plVar14 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,unaff_x19,uRam0000000003d57318);
      if ((plVar14 != (long *)0x0) &&
         (uVar20 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400)),
         unaff_x21 != 0)) {
        uVar9 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(unaff_x21,uVar20,0);
        if ((int)uVar9 != 0) {
          *(undefined8 **)(param_1 + 0xa0) = unaff_x19;
        }
        return uVar9;
      }
    }
    puVar19 = &Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal;
    auVar24 = func_0x00f78af4();
    *(long *)(auVar24._0_8_ + 0xa0) = auVar24._8_8_;
    puVar3 = puVar3 + -0x110;
  } while( true );
code_r0x01552340:
  lVar12 = *(long *)(puVar18 + lVar10 * 8);
  pcVar17 = *(code **)(lVar12 + 0x10);
  plVar1 = *(long **)(lVar12 + 0x20);
  lVar12 = *(long *)(lVar12 + 0x28);
  if (*(short *)(lVar12 + 0x48) == -1) {
    func_0x00f78ad8(lVar12);
  }
  iVar6 = func_0x00f78a4c(lVar12);
  bVar4 = *(char *)(lVar12 + 0x4a) == '\x01';
  if (iVar6 == 0) {
    if (bVar4) {
      if (plVar1 == (long *)0x0) {
code_r0x01552480:
        uVar8 = (*pcVar17)(plVar14,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(uVar9 + 0x18) == 0)) goto code_r0x01552378;
        iVar6 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar6 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar8 = (**(code **)(lVar12 + 0x138))(plVar1,plVar14,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x0155248c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar15 = *plVar1;
          uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar15 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552618;
              }
              piVar16 = piVar16 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01552618:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar20 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar15 = *plVar1;
            uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar8 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015525f0;
                }
                piVar16 = piVar16 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            lVar15 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
            uVar20 = *(undefined8 *)(lVar15 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar20,lVar12);
          pcVar17 = (code *)*puVar7;
        }
        uVar8 = (*pcVar17)(plVar1,plVar14,puVar7);
      }
    }
    else {
      if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(uVar9 + 0x18) == 0))
      goto code_r0x01552480;
      iVar6 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar6 == 0) {
        uVar2 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar14 + (ulong)uVar2 * 0x10;
          uVar8 = (**(code **)(lVar12 + 0x138))(plVar14,*(undefined8 *)(lVar12 + 0x140));
          goto code_r0x0155248c;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar15 = *plVar14;
        uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar15 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x015525b4;
            }
            piVar16 = piVar16 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar14,lVar12,(ulong)uVar2);
code_r0x015525b4:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar20 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar15 = *plVar14;
          uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155258c;
              }
              piVar16 = piVar16 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          lVar15 = func_0x00fac1f0(plVar14);
code_r0x0155258c:
          uVar20 = *(undefined8 *)(lVar15 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar20,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      uVar8 = (*pcVar17)(plVar14,puVar7);
    }
  }
  else {
    if (bVar4) goto code_r0x01552480;
code_r0x01552378:
    uVar8 = (*pcVar17)(plVar1,plVar14,lVar12);
  }
code_r0x0155248c:
  lVar10 = lVar10 + 1;
  if (lVar10 == lVar11) {
    return uVar8;
  }
  goto code_r0x01552340;
}



// ============================================================
// RVA: 0x15e27c8 | Atlas.Gameplay.Kart.KartUsableManager.StartEquipLocal
// ============================================================

ulong Atlas_Gameplay_Kart_KartUsableManager__StartEquipLocal(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar5;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  undefined8 unaff_x19;
  long lVar16;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  code *pcVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  auVar21._8_8_ = unaff_x19;
  auVar21._0_8_ = unaff_x20;
  do {
    lVar16 = auVar22._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar21;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb53c2 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c2 = 1;
    }
    uVar8 = Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal(lVar16);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    *(undefined1 *)(lVar16 + 0x60) = 0;
    *(int *)(lVar16 + 0x28) = *(int *)(lVar16 + 0x28) + 1;
    if ((*(long *)(lVar16 + 0x30) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar16 + 0x30) + 0x10), lVar9 != 0)) {
      uVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)(lVar16 + 0xa0),uRam0000000003d57318);
      Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand
                ((undefined1 *)((long)register0x00000008 + -0x70),lVar16,
                 *(undefined4 *)(lVar16 + 0x28),uVar10);
      /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar16,(undefined1 *)((long)register0x00000008 + -0x70));
      uVar8 = Atlas_Gameplay_Kart_KartUsableManager__HasUsesRemaining(lVar16,auVar22._8_8_);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if ((*(long *)(lVar16 + 0x58) != 0) &&
         (uVar8 = *(ulong *)(*(long *)(lVar16 + 0x58) + 0x70), uVar8 != 0)) {
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        uVar7 = uVar8;
        if ((bRam0000000003eb52e1 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28,0);
          uVar7 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52e1 = 1;
        }
        if (*(char *)(uVar8 + 0x38) != '\0') {
          return uVar7;
        }
        lVar16 = *(long *)(uVar8 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((lVar16 != 0) &&
           (lVar16 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                                     uRam0000000003d2fb00), lVar16 != 0)) {
          /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar16,0,0);
          if ((*(long *)(uVar8 + 0x150) != 0) &&
             (uVar8 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(uVar8 + 0x150),
                                      *(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2a0),
                                      uRam0000000003d2fb00), uVar8 != 0)) {
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar8,0,0);
            return uVar8;
          }
        }
        uVar8 = func_0x00f78af4();
        return uVar8;
      }
    }
    lVar9 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x90) = auVar22._8_8_;
    *(long *)((long)register0x00000008 + -0x88) = lVar16;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_Gameplay_Kart_KartUsableManager__CancelShuffle;
    if ((bRam0000000003eb53c7 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c7 = 1;
    }
    iVar5 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar9 + 0xa0,0);
    if (iVar5 == 0) {
code_r0x015e293c:
      *(undefined4 *)(lVar9 + 0xa8) = 0xffffffff;
      if ((*(long *)(lVar9 + 0x58) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar9 + 0x58) + 0x70), lVar16 != 0)) {
        /*Atlas.Audio.KartAudio$$StopShuffleCancelled*/ func_0x015c0e1c(lVar16,0);
        if (*(long *)(lVar9 + 0x68) != 0) {
          lVar16 = *(long *)(*(long *)(lVar9 + 0x68) + 0x40);
          if (lVar16 == 0) {
            return 0;
          }
          if (*(long *)(lVar9 + 0x58) != 0) {
            plVar13 = *(long **)(*(long *)(lVar9 + 0x58) + 0x90);
            uVar8 = *(ulong *)(lVar16 + 0x68);
            if (uVar8 == 0) {
              return 0;
            }
            *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
            *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x23;
            *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3eb5000;
            *(undefined8 *)((long)register0x00000008 + -0x90) =
                 *(undefined8 *)((long)register0x00000008 + -0x90);
            *(undefined8 *)((long)register0x00000008 + -0x88) =
                 *(undefined8 *)((long)register0x00000008 + -0x88);
            *(undefined8 *)((long)register0x00000008 + -0x80) =
                 *(undefined8 *)((long)register0x00000008 + -0x80);
            *(undefined8 *)((long)register0x00000008 + -0x78) =
                 *(undefined8 *)((long)register0x00000008 + -0x78);
            *(ulong *)((long)register0x00000008 + -200) = uVar8;
            lVar16 = *(long *)(uVar8 + 0x68);
            if (lVar16 == 0) {
              puVar18 = (undefined1 *)((long)register0x00000008 + -200);
              lVar9 = 1;
            }
            else {
              lVar9 = *(long *)(lVar16 + 0x18);
              if (lVar9 == 0) {
                return uVar8;
              }
              puVar18 = (undefined1 *)(lVar16 + 0x20);
            }
            lVar16 = 0;
            break;
          }
        }
      }
    }
    else if ((*(long *)(lVar9 + 0x30) != 0) &&
            (lVar16 = *(long *)(*(long *)(lVar9 + 0x30) + 0x10), lVar16 != 0)) {
      lVar16 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,*(undefined8 *)(lVar9 + 0xa0),uRam0000000003d57318);
      if ((*(long *)(lVar9 + 0x68) != 0) &&
         ((lVar16 != 0 && (lVar11 = *(long *)(*(long *)(lVar9 + 0x68) + 0x1e8), lVar11 != 0)))) {
        /*Atlas.Gameplay.Pickups.PickupManager$$OnUsableDespawned*/ func_0x014bb17c(lVar11,lVar16,*(undefined4 *)(lVar16 + 0x20),0);
        goto code_r0x015e293c;
      }
    }
    auVar21 = func_0x00f78af4();
    uVar10 = auVar21._8_8_;
    lVar16 = auVar21._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3eb5000;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3eb5000;
    *(long *)((long)register0x00000008 + -0xa8) = lVar9;
    *(undefined1 **)((long)register0x00000008 + -0xa0) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0x98) =
         &Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal;
    lVar9 = 0x3eb5000;
    if ((bRam0000000003eb53bf & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57288);
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53bf = 1;
    }
    lVar11 = *(long *)(lVar16 + 0x58);
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(lVar11 + 0x48);
      uVar20 = *(undefined8 *)(lVar11 + 0x60);
      uVar19 = *(undefined8 *)(lVar11 + 0x58);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(lVar11 + 0x50);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -200) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar19;
      uVar8 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90((undefined1 *)((long)register0x00000008 + -0xe0),0);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar10,0);
      if ((uVar8 & 1) == 0) {
        if ((*(long *)(lVar16 + 0x30) != 0) &&
           (lVar11 = *(long *)(*(long *)(lVar16 + 0x30) + 0x10), lVar11 != 0)) {
          lVar9 = *(long *)(lVar16 + 0x38);
          plVar13 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar10,uRam0000000003d57318);
          if ((plVar13 != (long *)0x0) &&
             (uVar12 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400)),
             lVar9 != 0)) {
            uVar8 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar9,uVar12,0);
            if ((int)uVar8 == 0) {
              return uVar8;
            }
            goto code_r0x015e2a70;
          }
        }
      }
      else {
code_r0x015e2a70:
        if ((*(long *)(lVar16 + 0x78) != 0) || (0 < *(int *)(lVar16 + 0xa8))) {
          return uVar8;
        }
        if ((*(long *)(lVar16 + 0x58) != 0) &&
           (lVar11 = *(long *)(*(long *)(lVar16 + 0x58) + 0x90), lVar11 != 0)) {
          if (*(char *)(lVar11 + 0x98) != '\0') {
            return uVar8;
          }
          if (((*(long *)(lVar16 + 0x30) != 0) && (*(long *)(lVar16 + 0x68) != 0)) &&
             (lVar11 = *(long *)(*(long *)(lVar16 + 0x68) + 0x1c0), lVar11 != 0)) {
            lVar9 = *(long *)(*(long *)(lVar16 + 0x30) + 0x10);
            unaff_x22 = *(undefined8 *)(lVar11 + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
            if (lVar9 != 0) {
              lVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,uVar12,uRam0000000003d57288);
              *(undefined4 *)(lVar16 + 0xac) = *(undefined4 *)(lVar16 + 0x28);
              if (lVar11 != 0) {
                uVar12 = /*Atlas.Definitions.GameContextDefinition$$get_UsableShuffleDuration*/ func_0x015a4c6c(lVar11,0);
                *(int *)(lVar16 + 0xb0) = (int)uVar12;
                *(int *)(lVar16 + 0xa8) = (int)uVar12;
                *(undefined8 *)(lVar16 + 0xa0) = uVar10;
                if (((*(long *)(lVar16 + 0x68) != 0) && (*(long *)(lVar16 + 0x58) != 0)) &&
                   (lVar11 = *(long *)(*(long *)(lVar16 + 0x68) + 0x40), lVar11 != 0)) {
                  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsablePickedUp*/ func_0x015a5ac0(lVar11,*(undefined8 *)(*(long *)(lVar16 + 0x58) + 0x90),uVar12,0);
                  if ((*(long *)(lVar16 + 0x58) != 0) &&
                     (lVar11 = *(long *)(*(long *)(lVar16 + 0x58) + 0x70), lVar11 != 0)) {
                    uVar8 = /*Atlas.Audio.KartAudio$$StartShuffle*/ func_0x015c0d6c(lVar11,0);
                    return uVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
    auVar21 = func_0x00f78af4();
    uVar7 = auVar21._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x108) = lVar9;
    *(undefined8 *)((long)register0x00000008 + -0x100) = uVar10;
    *(long *)((long)register0x00000008 + -0xf8) = lVar16;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -0xe8) =
         &Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xf0);
    unaff_x21 = 0x3eb5000;
    uVar8 = uVar7;
    if ((bRam0000000003eb53c0 & 1) == 0) {
      uVar8 = func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c0 = 1;
    }
    if (*(int *)(uVar7 + 0xa8) < 0) {
      return uVar8;
    }
    if ((*(long *)(uVar7 + 0x30) != 0) &&
       (lVar16 = *(long *)(*(long *)(uVar7 + 0x30) + 0x10), lVar16 != 0)) {
      unaff_x21 = *(long *)(uVar7 + 0x38);
      plVar13 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,auVar21._8_8_,uRam0000000003d57318);
      if ((plVar13 != (long *)0x0) &&
         (uVar10 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400)),
         unaff_x21 != 0)) {
        uVar8 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(unaff_x21,uVar10,0);
        if ((int)uVar8 != 0) {
          *(long *)(uVar7 + 0xa0) = auVar21._8_8_;
        }
        return uVar8;
      }
    }
    unaff_x30 = &Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal;
    auVar22 = func_0x00f78af4();
    *(long *)(auVar22._0_8_ + 0xa0) = auVar22._8_8_;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
code_r0x01552340:
  lVar11 = *(long *)(puVar18 + lVar16 * 8);
  pcVar17 = *(code **)(lVar11 + 0x10);
  plVar1 = *(long **)(lVar11 + 0x20);
  lVar11 = *(long *)(lVar11 + 0x28);
  if (*(short *)(lVar11 + 0x48) == -1) {
    func_0x00f78ad8(lVar11);
  }
  iVar5 = func_0x00f78a4c(lVar11);
  bVar3 = *(char *)(lVar11 + 0x4a) == '\x01';
  if (iVar5 == 0) {
    if (bVar3) {
      if (plVar1 == (long *)0x0) {
code_r0x01552480:
        uVar7 = (*pcVar17)(plVar13,lVar11);
      }
      else {
        if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(uVar8 + 0x18) == 0)) goto code_r0x01552378;
        iVar5 = func_0x00f78a44(lVar11);
        iVar4 = func_0x00f78ec0(lVar11);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar4 == 0) {
            lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar7 = (**(code **)(lVar11 + 0x138))(plVar1,plVar13,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x0155248c;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar14 = *plVar1;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552618;
              }
              piVar15 = piVar15 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01552618:
          pcVar17 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if (iVar4 == 0) {
            uVar10 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar1;
            uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar7 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015525f0;
                }
                piVar15 = piVar15 + 4;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
            uVar10 = *(undefined8 *)(lVar14 + 8);
          }
          puVar6 = (undefined8 *)func_0x00f78acc(uVar10,lVar11);
          pcVar17 = (code *)*puVar6;
        }
        uVar7 = (*pcVar17)(plVar1,plVar13,puVar6);
      }
    }
    else {
      if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(uVar8 + 0x18) == 0))
      goto code_r0x01552480;
      iVar5 = func_0x00f78a44(lVar11);
      iVar4 = func_0x00f78ec0(lVar11);
      if (iVar5 == 0) {
        uVar2 = *(ushort *)(lVar11 + 0x48);
        if (iVar4 == 0) {
          lVar11 = *plVar13 + (ulong)uVar2 * 0x10;
          uVar7 = (**(code **)(lVar11 + 0x138))(plVar13,*(undefined8 *)(lVar11 + 0x140));
          goto code_r0x0155248c;
        }
        lVar11 = func_0x00f78a48(lVar11);
        lVar14 = *plVar13;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x015525b4;
            }
            piVar15 = piVar15 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar13,lVar11,(ulong)uVar2);
code_r0x015525b4:
        pcVar17 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar10 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar14 = *plVar13;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar11 + 0x18)) {
                lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155258c;
              }
              piVar15 = piVar15 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          lVar14 = func_0x00fac1f0(plVar13);
code_r0x0155258c:
          uVar10 = *(undefined8 *)(lVar14 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar10,lVar11);
        pcVar17 = (code *)*puVar6;
      }
      uVar7 = (*pcVar17)(plVar13,puVar6);
    }
  }
  else {
    if (bVar3) goto code_r0x01552480;
code_r0x01552378:
    uVar7 = (*pcVar17)(plVar1,plVar13,lVar11);
  }
code_r0x0155248c:
  lVar16 = lVar16 + 1;
  if (lVar16 == lVar9) {
    return uVar7;
  }
  goto code_r0x01552340;
}



// ============================================================
// RVA: 0x15e28b4 | Atlas.Gameplay.Kart.KartUsableManager.CancelShuffle
// ============================================================

ulong Atlas_Gameplay_Kart_KartUsableManager__CancelShuffle(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar5;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar21._8_8_ = unaff_x20;
  auVar21._0_8_ = unaff_x19;
  do {
    *(long *)((long)register0x00000008 + -0x20) = auVar21._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar21._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb53c7 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c7 = 1;
    }
    iVar5 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1 + 0xa0,0);
    if (iVar5 == 0) {
LAB_015e293c:
      *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (lVar10 = *(long *)(*(long *)(param_1 + 0x58) + 0x70), lVar10 != 0)) {
        /*Atlas.Audio.KartAudio$$StopShuffleCancelled*/ func_0x015c0e1c(lVar10,0);
        if (*(long *)(param_1 + 0x68) != 0) {
          lVar10 = *(long *)(*(long *)(param_1 + 0x68) + 0x40);
          if (lVar10 == 0) {
            return 0;
          }
          if (*(long *)(param_1 + 0x58) != 0) {
            plVar13 = *(long **)(*(long *)(param_1 + 0x58) + 0x90);
            uVar9 = *(ulong *)(lVar10 + 0x68);
            if (uVar9 == 0) {
              return 0;
            }
            *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
            *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
            *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            *(ulong *)((long)register0x00000008 + -0x58) = uVar9;
            lVar10 = *(long *)(uVar9 + 0x68);
            if (lVar10 == 0) {
              puVar18 = (undefined1 *)((long)register0x00000008 + -0x58);
              lVar11 = 1;
            }
            else {
              lVar11 = *(long *)(lVar10 + 0x18);
              if (lVar11 == 0) {
                return uVar9;
              }
              puVar18 = (undefined1 *)(lVar10 + 0x20);
            }
            lVar10 = 0;
            break;
          }
        }
      }
    }
    else if ((*(long *)(param_1 + 0x30) != 0) &&
            (lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar10 != 0)) {
      lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)(param_1 + 0xa0),uRam0000000003d57318);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         ((lVar10 != 0 && (lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 0x1e8), lVar11 != 0)))) {
        /*Atlas.Gameplay.Pickups.PickupManager$$OnUsableDespawned*/ func_0x014bb17c(lVar11,lVar10,*(undefined4 *)(lVar10 + 0x20),0);
        goto LAB_015e293c;
      }
    }
    auVar21 = func_0x00f78af4();
    uVar7 = auVar21._8_8_;
    lVar10 = auVar21._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x3eb5000;
    *(long *)((long)register0x00000008 + -0x38) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal;
    lVar11 = 0x3eb5000;
    if ((bRam0000000003eb53bf & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57288);
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53bf = 1;
    }
    lVar14 = *(long *)(lVar10 + 0x58);
    if (lVar14 != 0) {
      uVar12 = *(undefined8 *)(lVar14 + 0x48);
      uVar20 = *(undefined8 *)(lVar14 + 0x60);
      uVar19 = *(undefined8 *)(lVar14 + 0x58);
      *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar14 + 0x50);
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0x58) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar19;
      uVar9 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90((undefined1 *)((long)register0x00000008 + -0x70),0);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar7,0);
      if ((uVar9 & 1) == 0) {
        if ((*(long *)(lVar10 + 0x30) != 0) &&
           (lVar14 = *(long *)(*(long *)(lVar10 + 0x30) + 0x10), lVar14 != 0)) {
          lVar11 = *(long *)(lVar10 + 0x38);
          plVar13 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,uVar7,uRam0000000003d57318);
          if ((plVar13 != (long *)0x0) &&
             (uVar12 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400)),
             lVar11 != 0)) {
            uVar9 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar11,uVar12,0);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            goto code_r0x015e2a70;
          }
        }
      }
      else {
code_r0x015e2a70:
        if ((*(long *)(lVar10 + 0x78) != 0) || (0 < *(int *)(lVar10 + 0xa8))) {
          return uVar9;
        }
        if ((*(long *)(lVar10 + 0x58) != 0) &&
           (lVar14 = *(long *)(*(long *)(lVar10 + 0x58) + 0x90), lVar14 != 0)) {
          if (*(char *)(lVar14 + 0x98) != '\0') {
            return uVar9;
          }
          if (((*(long *)(lVar10 + 0x30) != 0) && (*(long *)(lVar10 + 0x68) != 0)) &&
             (lVar14 = *(long *)(*(long *)(lVar10 + 0x68) + 0x1c0), lVar14 != 0)) {
            lVar11 = *(long *)(*(long *)(lVar10 + 0x30) + 0x10);
            unaff_x22 = *(undefined8 *)(lVar14 + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
            if (lVar11 != 0) {
              lVar14 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar12,uRam0000000003d57288);
              *(undefined4 *)(lVar10 + 0xac) = *(undefined4 *)(lVar10 + 0x28);
              if (lVar14 != 0) {
                uVar12 = /*Atlas.Definitions.GameContextDefinition$$get_UsableShuffleDuration*/ func_0x015a4c6c(lVar14,0);
                *(int *)(lVar10 + 0xb0) = (int)uVar12;
                *(int *)(lVar10 + 0xa8) = (int)uVar12;
                *(undefined8 *)(lVar10 + 0xa0) = uVar7;
                if (((*(long *)(lVar10 + 0x68) != 0) && (*(long *)(lVar10 + 0x58) != 0)) &&
                   (lVar14 = *(long *)(*(long *)(lVar10 + 0x68) + 0x40), lVar14 != 0)) {
                  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsablePickedUp*/ func_0x015a5ac0(lVar14,*(undefined8 *)(*(long *)(lVar10 + 0x58) + 0x90),uVar12,0);
                  if ((*(long *)(lVar10 + 0x58) != 0) &&
                     (lVar14 = *(long *)(*(long *)(lVar10 + 0x58) + 0x70), lVar14 != 0)) {
                    uVar9 = /*Atlas.Audio.KartAudio$$StartShuffle*/ func_0x015c0d6c(lVar14,0);
                    return uVar9;
                  }
                }
              }
            }
          }
        }
      }
    }
    auVar22 = func_0x00f78af4();
    uVar6 = auVar22._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x98) = lVar11;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar7;
    *(long *)((long)register0x00000008 + -0x88) = lVar10;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData;
    lVar10 = 0x3eb5000;
    uVar9 = uVar6;
    if ((bRam0000000003eb53c0 & 1) == 0) {
      uVar9 = func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c0 = 1;
    }
    if (*(int *)(uVar6 + 0xa8) < 0) {
      return uVar9;
    }
    if ((*(long *)(uVar6 + 0x30) != 0) &&
       (lVar11 = *(long *)(*(long *)(uVar6 + 0x30) + 0x10), lVar11 != 0)) {
      lVar10 = *(long *)(uVar6 + 0x38);
      plVar13 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,auVar22._8_8_,uRam0000000003d57318);
      if ((plVar13 != (long *)0x0) &&
         (uVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400)),
         lVar10 != 0)) {
        uVar9 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar10,uVar7,0);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        *(long *)(uVar6 + 0xa0) = auVar22._8_8_;
        return uVar9;
      }
    }
    auVar21 = func_0x00f78af4();
    lVar11 = auVar21._0_8_;
    *(long *)(lVar11 + 0xa0) = auVar21._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x22;
    *(long *)((long)register0x00000008 + -200) = lVar10;
    *(undefined1 (*) [16])((long)register0x00000008 + -0xc0) = auVar22;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0xa8) =
         &Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xb0);
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb53c2 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c2 = 1;
    }
    uVar9 = Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal(lVar11);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    *(undefined1 *)(lVar11 + 0x60) = 0;
    *(int *)(lVar11 + 0x28) = *(int *)(lVar11 + 0x28) + 1;
    if ((*(long *)(lVar11 + 0x30) != 0) &&
       (lVar10 = *(long *)(*(long *)(lVar11 + 0x30) + 0x10), lVar10 != 0)) {
      uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)(lVar11 + 0xa0),uRam0000000003d57318);
      Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand
                ((undefined1 *)((long)register0x00000008 + -0x110),lVar11,
                 *(undefined4 *)(lVar11 + 0x28),uVar7);
      /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar11,(undefined1 *)((long)register0x00000008 + -0x110));
      uVar9 = Atlas_Gameplay_Kart_KartUsableManager__HasUsesRemaining(lVar11,auVar21._8_8_);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      if ((*(long *)(lVar11 + 0x58) != 0) &&
         (uVar9 = *(ulong *)(*(long *)(lVar11 + 0x58) + 0x70), uVar9 != 0)) {
        *(undefined8 *)((long)register0x00000008 + -0xd0) =
             *(undefined8 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -200) =
             *(undefined8 *)((long)register0x00000008 + -200);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0xc0);
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0xb8);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        uVar6 = uVar9;
        if ((bRam0000000003eb52e1 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28,0);
          uVar6 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52e1 = 1;
        }
        if (*(char *)(uVar9 + 0x38) != '\0') {
          return uVar6;
        }
        lVar10 = *(long *)(uVar9 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((lVar10 != 0) &&
           (lVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar10,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                                     uRam0000000003d2fb00), lVar10 != 0)) {
          /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar10,0,0);
          if ((*(long *)(uVar9 + 0x150) != 0) &&
             (uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(uVar9 + 0x150),
                                      *(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2a0),
                                      uRam0000000003d2fb00), uVar9 != 0)) {
            *(undefined8 *)((long)register0x00000008 + -0xc0) =
                 *(undefined8 *)((long)register0x00000008 + -0xc0);
            *(undefined8 *)((long)register0x00000008 + -0xb8) =
                 *(undefined8 *)((long)register0x00000008 + -0xb8);
            *(undefined8 *)((long)register0x00000008 + -0xb0) =
                 *(undefined8 *)((long)register0x00000008 + -0xb0);
            *(undefined8 *)((long)register0x00000008 + -0xa8) =
                 *(undefined8 *)((long)register0x00000008 + -0xa8);
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar9,0,0);
            return uVar9;
          }
        }
        uVar9 = func_0x00f78af4();
        return uVar9;
      }
    }
    unaff_x30 = Atlas_Gameplay_Kart_KartUsableManager__CancelShuffle;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
code_r0x01552340:
  lVar14 = *(long *)(puVar18 + lVar10 * 8);
  pcVar17 = *(code **)(lVar14 + 0x10);
  plVar1 = *(long **)(lVar14 + 0x20);
  lVar14 = *(long *)(lVar14 + 0x28);
  if (*(short *)(lVar14 + 0x48) == -1) {
    func_0x00f78ad8(lVar14);
  }
  iVar5 = func_0x00f78a4c(lVar14);
  bVar3 = *(char *)(lVar14 + 0x4a) == '\x01';
  if (iVar5 == 0) {
    if (bVar3) {
      if (plVar1 == (long *)0x0) {
code_r0x01552480:
        uVar6 = (*pcVar17)(plVar13,lVar14);
      }
      else {
        if (((*(short *)(lVar14 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(uVar9 + 0x18) == 0)) goto code_r0x01552378;
        iVar5 = func_0x00f78a44(lVar14);
        iVar4 = func_0x00f78ec0(lVar14);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar14 + 0x48);
          if (iVar4 == 0) {
            lVar14 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar6 = (**(code **)(lVar14 + 0x138))(plVar1,plVar13,*(undefined8 *)(lVar14 + 0x140));
            goto code_r0x0155248c;
          }
          lVar14 = func_0x00f78a48(lVar14);
          lVar15 = *plVar1;
          uVar6 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar6 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar14) {
                puVar8 = (undefined8 *)(lVar15 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552618;
              }
              piVar16 = piVar16 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar14,(ulong)uVar2);
code_r0x01552618:
          pcVar17 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if (iVar4 == 0) {
            uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar15 = *plVar1;
            uVar6 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar6 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar14 + 0x18)) {
                  lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar14 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015525f0;
                }
                piVar16 = piVar16 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            lVar15 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
            uVar7 = *(undefined8 *)(lVar15 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar14);
          pcVar17 = (code *)*puVar8;
        }
        uVar6 = (*pcVar17)(plVar1,plVar13,puVar8);
      }
    }
    else {
      if ((*(short *)(lVar14 + 0x48) == -1) || (*(long *)(uVar9 + 0x18) == 0))
      goto code_r0x01552480;
      iVar5 = func_0x00f78a44(lVar14);
      iVar4 = func_0x00f78ec0(lVar14);
      if (iVar5 == 0) {
        uVar2 = *(ushort *)(lVar14 + 0x48);
        if (iVar4 == 0) {
          lVar14 = *plVar13 + (ulong)uVar2 * 0x10;
          uVar6 = (**(code **)(lVar14 + 0x138))(plVar13,*(undefined8 *)(lVar14 + 0x140));
          goto code_r0x0155248c;
        }
        lVar14 = func_0x00f78a48(lVar14);
        lVar15 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar14) {
              puVar8 = (undefined8 *)(lVar15 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x015525b4;
            }
            piVar16 = piVar16 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar13,lVar14,(ulong)uVar2);
code_r0x015525b4:
        pcVar17 = (code *)*puVar8;
        puVar8 = (undefined8 *)puVar8[1];
      }
      else {
        if (iVar4 == 0) {
          uVar7 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar15 = *plVar13;
          uVar6 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar6 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar14 + 0x18)) {
                lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar14 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155258c;
              }
              piVar16 = piVar16 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          lVar15 = func_0x00fac1f0(plVar13);
code_r0x0155258c:
          uVar7 = *(undefined8 *)(lVar15 + 8);
        }
        puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar14);
        pcVar17 = (code *)*puVar8;
      }
      uVar6 = (*pcVar17)(plVar13,puVar8);
    }
  }
  else {
    if (bVar3) goto code_r0x01552480;
code_r0x01552378:
    uVar6 = (*pcVar17)(plVar1,plVar13,lVar14);
  }
code_r0x0155248c:
  lVar10 = lVar10 + 1;
  if (lVar10 == lVar11) {
    return uVar6;
  }
  goto code_r0x01552340;
}



// ============================================================
// RVA: 0x15e2998 | Atlas.Gameplay.Kart.KartUsableManager.StartShuffleLocal
// ============================================================

ulong Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal
                (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar15;
  long lVar16;
  undefined8 unaff_x22;
  code *pcVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = param_1;
  do {
    uVar11 = auVar21._8_8_;
    lVar16 = auVar21._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar15 = 0x3eb5000;
    if ((bRam0000000003eb53bf & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57288);
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53bf = 1;
    }
    lVar13 = *(long *)(lVar16 + 0x58);
    if (lVar13 != 0) {
      uVar10 = *(undefined8 *)(lVar13 + 0x48);
      uVar20 = *(undefined8 *)(lVar13 + 0x60);
      uVar19 = *(undefined8 *)(lVar13 + 0x58);
      *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar13 + 0x50);
      *(undefined8 *)((long)register0x00000008 + -0x50) = uVar10;
      *(undefined8 *)((long)register0x00000008 + -0x38) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0x40) = uVar19;
      uVar8 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90((undefined1 *)((long)register0x00000008 + -0x50),0);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar11,0);
      if ((uVar8 & 1) == 0) {
        if ((*(long *)(lVar16 + 0x30) != 0) &&
           (lVar13 = *(long *)(*(long *)(lVar16 + 0x30) + 0x10), lVar13 != 0)) {
          lVar15 = *(long *)(lVar16 + 0x38);
          plVar9 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,uVar11,uRam0000000003d57318);
          if ((plVar9 != (long *)0x0) &&
             (uVar10 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400)),
             lVar15 != 0)) {
            uVar8 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar15,uVar10,0);
            if ((int)uVar8 == 0) {
              return uVar8;
            }
            goto LAB_015e2a70;
          }
        }
      }
      else {
LAB_015e2a70:
        if ((*(long *)(lVar16 + 0x78) != 0) || (0 < *(int *)(lVar16 + 0xa8))) {
          return uVar8;
        }
        if ((*(long *)(lVar16 + 0x58) != 0) &&
           (lVar13 = *(long *)(*(long *)(lVar16 + 0x58) + 0x90), lVar13 != 0)) {
          if (*(char *)(lVar13 + 0x98) != '\0') {
            return uVar8;
          }
          if (((*(long *)(lVar16 + 0x30) != 0) && (*(long *)(lVar16 + 0x68) != 0)) &&
             (lVar13 = *(long *)(*(long *)(lVar16 + 0x68) + 0x1c0), lVar13 != 0)) {
            lVar15 = *(long *)(*(long *)(lVar16 + 0x30) + 0x10);
            unaff_x22 = *(undefined8 *)(lVar13 + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
            if (lVar15 != 0) {
              lVar13 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,uVar10,uRam0000000003d57288);
              *(undefined4 *)(lVar16 + 0xac) = *(undefined4 *)(lVar16 + 0x28);
              if (lVar13 != 0) {
                uVar10 = /*Atlas.Definitions.GameContextDefinition$$get_UsableShuffleDuration*/ func_0x015a4c6c(lVar13,0);
                *(int *)(lVar16 + 0xb0) = (int)uVar10;
                *(int *)(lVar16 + 0xa8) = (int)uVar10;
                *(undefined8 *)(lVar16 + 0xa0) = uVar11;
                if (((*(long *)(lVar16 + 0x68) != 0) && (*(long *)(lVar16 + 0x58) != 0)) &&
                   (lVar13 = *(long *)(*(long *)(lVar16 + 0x68) + 0x40), lVar13 != 0)) {
                  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsablePickedUp*/ func_0x015a5ac0(lVar13,*(undefined8 *)(*(long *)(lVar16 + 0x58) + 0x90),uVar10,0);
                  if ((*(long *)(lVar16 + 0x58) != 0) &&
                     (lVar13 = *(long *)(*(long *)(lVar16 + 0x58) + 0x70), lVar13 != 0)) {
                    uVar8 = /*Atlas.Audio.KartAudio$$StartShuffle*/ func_0x015c0d6c(lVar13,0);
                    return uVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
    auVar21 = func_0x00f78af4();
    uVar7 = auVar21._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x78) = lVar15;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar11;
    *(long *)((long)register0x00000008 + -0x68) = lVar16;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData;
    lVar16 = 0x3eb5000;
    uVar8 = uVar7;
    if ((bRam0000000003eb53c0 & 1) == 0) {
      uVar8 = func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c0 = 1;
    }
    if (*(int *)(uVar7 + 0xa8) < 0) {
      return uVar8;
    }
    if ((*(long *)(uVar7 + 0x30) != 0) &&
       (lVar15 = *(long *)(*(long *)(uVar7 + 0x30) + 0x10), lVar15 != 0)) {
      lVar16 = *(long *)(uVar7 + 0x38);
      plVar9 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,auVar21._8_8_,uRam0000000003d57318);
      if ((plVar9 != (long *)0x0) &&
         (uVar11 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400)),
         lVar16 != 0)) {
        uVar8 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar16,uVar11,0);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        *(long *)(uVar7 + 0xa0) = auVar21._8_8_;
        return uVar8;
      }
    }
    auVar22 = func_0x00f78af4();
    uVar11 = auVar22._8_8_;
    lVar15 = auVar22._0_8_;
    *(undefined8 *)(lVar15 + 0xa0) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(long *)((long)register0x00000008 + -0xa8) = lVar16;
    *(undefined1 (*) [16])((long)register0x00000008 + -0xa0) = auVar21;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0x88) =
         &Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb53c2 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c2 = 1;
    }
    uVar8 = Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal(lVar15);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    *(undefined1 *)(lVar15 + 0x60) = 0;
    *(int *)(lVar15 + 0x28) = *(int *)(lVar15 + 0x28) + 1;
    if ((*(long *)(lVar15 + 0x30) != 0) &&
       (lVar16 = *(long *)(*(long *)(lVar15 + 0x30) + 0x10), lVar16 != 0)) {
      uVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,*(undefined8 *)(lVar15 + 0xa0),uRam0000000003d57318);
      Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand
                ((undefined1 *)((long)register0x00000008 + -0xf0),lVar15,
                 *(undefined4 *)(lVar15 + 0x28),uVar10);
      /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar15,(undefined1 *)((long)register0x00000008 + -0xf0));
      uVar8 = Atlas_Gameplay_Kart_KartUsableManager__HasUsesRemaining(lVar15,uVar11);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if ((*(long *)(lVar15 + 0x58) != 0) &&
         (uVar8 = *(ulong *)(*(long *)(lVar15 + 0x58) + 0x70), uVar8 != 0)) {
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0xa0) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0x88) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        uVar7 = uVar8;
        if ((bRam0000000003eb52e1 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28,0);
          uVar7 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52e1 = 1;
        }
        if (*(char *)(uVar8 + 0x38) != '\0') {
          return uVar7;
        }
        lVar16 = *(long *)(uVar8 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((lVar16 != 0) &&
           (lVar16 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                                     uRam0000000003d2fb00), lVar16 != 0)) {
          /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar16,0,0);
          if ((*(long *)(uVar8 + 0x150) != 0) &&
             (uVar8 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(uVar8 + 0x150),
                                      *(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2a0),
                                      uRam0000000003d2fb00), uVar8 != 0)) {
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)((long)register0x00000008 + -0xa0);
            *(undefined8 *)((long)register0x00000008 + -0x98) =
                 *(undefined8 *)((long)register0x00000008 + -0x98);
            *(undefined8 *)((long)register0x00000008 + -0x90) =
                 *(undefined8 *)((long)register0x00000008 + -0x90);
            *(undefined8 *)((long)register0x00000008 + -0x88) =
                 *(undefined8 *)((long)register0x00000008 + -0x88);
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar8,0,0);
            return uVar8;
          }
        }
        uVar8 = func_0x00f78af4();
        return uVar8;
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x110) = uVar11;
    *(long *)((long)register0x00000008 + -0x108) = lVar15;
    *(undefined1 **)((long)register0x00000008 + -0x100) =
         (undefined1 *)((long)register0x00000008 + -0x90);
    *(code **)((long)register0x00000008 + -0xf8) =
         Atlas_Gameplay_Kart_KartUsableManager__CancelShuffle;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x100);
    unaff_x20 = 0x3eb5000;
    if ((bRam0000000003eb53c7 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c7 = 1;
    }
    iVar5 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x19 + 0xa0,0);
    if (iVar5 == 0) {
LAB_015e293c:
      *(undefined4 *)(unaff_x19 + 0xa8) = 0xffffffff;
      if ((*(long *)(unaff_x19 + 0x58) != 0) &&
         (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x58) + 0x70), lVar16 != 0)) {
        /*Atlas.Audio.KartAudio$$StopShuffleCancelled*/ func_0x015c0e1c(lVar16,0);
        if (*(long *)(unaff_x19 + 0x68) != 0) {
          lVar16 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x40);
          if (lVar16 == 0) {
            return 0;
          }
          if (*(long *)(unaff_x19 + 0x58) != 0) break;
        }
      }
    }
    else if ((*(long *)(unaff_x19 + 0x30) != 0) &&
            (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10), lVar16 != 0)) {
      lVar16 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,*(undefined8 *)(unaff_x19 + 0xa0),uRam0000000003d57318);
      if ((*(long *)(unaff_x19 + 0x68) != 0) &&
         ((lVar16 != 0 && (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x1e8), lVar15 != 0))))
      {
        /*Atlas.Gameplay.Pickups.PickupManager$$OnUsableDespawned*/ func_0x014bb17c(lVar15,lVar16,*(undefined4 *)(lVar16 + 0x20),0);
        goto LAB_015e293c;
      }
    }
    unaff_x30 = Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal;
    auVar21 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
  plVar9 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0x90);
  uVar8 = *(ulong *)(lVar16 + 0x68);
  if (uVar8 == 0) {
    return 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0x3eb5000;
  *(undefined8 *)((long)register0x00000008 + -0x110) =
       *(undefined8 *)((long)register0x00000008 + -0x110);
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)((long)register0x00000008 + -0x108);
  *(undefined8 *)((long)register0x00000008 + -0x100) =
       *(undefined8 *)((long)register0x00000008 + -0x100);
  *(undefined8 *)((long)register0x00000008 + -0xf8) =
       *(undefined8 *)((long)register0x00000008 + -0xf8);
  *(ulong *)((long)register0x00000008 + -0x148) = uVar8;
  lVar16 = *(long *)(uVar8 + 0x68);
  if (lVar16 == 0) {
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x148);
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar16 + 0x18);
    if (lVar15 == 0) {
      return uVar8;
    }
    puVar18 = (undefined1 *)(lVar16 + 0x20);
  }
  lVar16 = 0;
  do {
    lVar13 = *(long *)(puVar18 + lVar16 * 8);
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar5 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x01';
    if (iVar5 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01552480:
          uVar7 = (*pcVar17)(plVar9,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(uVar8 + 0x18) == 0)) goto code_r0x01552378;
          iVar5 = func_0x00f78a44(lVar13);
          iVar4 = func_0x00f78ec0(lVar13);
          if (iVar5 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar4 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              uVar7 = (**(code **)(lVar13 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x0155248c;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar12 = *plVar1;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar13) {
                  puVar6 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01552618;
                }
                piVar14 = piVar14 + 4;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01552618:
            pcVar17 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if (iVar4 == 0) {
              uVar11 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar1;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x015525f0;
                  }
                  piVar14 = piVar14 + 4;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
              uVar11 = *(undefined8 *)(lVar12 + 8);
            }
            puVar6 = (undefined8 *)func_0x00f78acc(uVar11,lVar13);
            pcVar17 = (code *)*puVar6;
          }
          uVar7 = (*pcVar17)(plVar1,plVar9,puVar6);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(uVar8 + 0x18) == 0))
        goto code_r0x01552480;
        iVar5 = func_0x00f78a44(lVar13);
        iVar4 = func_0x00f78ec0(lVar13);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar4 == 0) {
            lVar13 = *plVar9 + (ulong)uVar2 * 0x10;
            uVar7 = (**(code **)(lVar13 + 0x138))(plVar9,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x0155248c;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar12 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar13) {
                puVar6 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x015525b4;
              }
              piVar14 = piVar14 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar9,lVar13,(ulong)uVar2);
code_r0x015525b4:
          pcVar17 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if (iVar4 == 0) {
            uVar11 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0155258c;
                }
                piVar14 = piVar14 + 4;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar9);
code_r0x0155258c:
            uVar11 = *(undefined8 *)(lVar12 + 8);
          }
          puVar6 = (undefined8 *)func_0x00f78acc(uVar11,lVar13);
          pcVar17 = (code *)*puVar6;
        }
        uVar7 = (*pcVar17)(plVar9,puVar6);
      }
    }
    else {
      if (bVar3) goto code_r0x01552480;
code_r0x01552378:
      uVar7 = (*pcVar17)(plVar1,plVar9,lVar13);
    }
code_r0x0155248c:
    lVar16 = lVar16 + 1;
    if (lVar16 == lVar15) {
      return uVar7;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15e2b7c | Atlas.Gameplay.Kart.KartUsableManager.UpdateShuffleData
// ============================================================

ulong Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData
                (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar16;
  undefined8 unaff_x22;
  code *pcVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = param_1;
  auVar22._8_8_ = unaff_x20;
  auVar22._0_8_ = unaff_x19;
  do {
    uVar7 = auVar21._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar22._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar22._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar16 = 0x3eb5000;
    uVar10 = uVar7;
    if ((bRam0000000003eb53c0 & 1) == 0) {
      uVar10 = func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c0 = 1;
    }
    if (*(int *)(uVar7 + 0xa8) < 0) {
      return uVar10;
    }
    if ((*(long *)(uVar7 + 0x30) != 0) &&
       (lVar11 = *(long *)(*(long *)(uVar7 + 0x30) + 0x10), lVar11 != 0)) {
      lVar16 = *(long *)(uVar7 + 0x38);
      plVar12 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,auVar21._8_8_,uRam0000000003d57318);
      if ((plVar12 != (long *)0x0) &&
         (uVar13 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400)),
         lVar16 != 0)) {
        uVar10 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar16,uVar13,0);
        if ((int)uVar10 == 0) {
          return uVar10;
        }
        *(long *)(uVar7 + 0xa0) = auVar21._8_8_;
        return uVar10;
      }
    }
    auVar22 = func_0x00f78af4();
    uVar13 = auVar22._8_8_;
    lVar11 = auVar22._0_8_;
    *(undefined8 *)(lVar11 + 0xa0) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x58) = lVar16;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x50) = auVar21;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal;
    if ((bRam0000000003eb53c2 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c2 = 1;
    }
    uVar10 = Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal(lVar11);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    *(undefined1 *)(lVar11 + 0x60) = 0;
    *(int *)(lVar11 + 0x28) = *(int *)(lVar11 + 0x28) + 1;
    if ((*(long *)(lVar11 + 0x30) != 0) &&
       (lVar16 = *(long *)(*(long *)(lVar11 + 0x30) + 0x10), lVar16 != 0)) {
      uVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,*(undefined8 *)(lVar11 + 0xa0),uRam0000000003d57318);
      Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand
                ((undefined1 *)((long)register0x00000008 + -0xa0),lVar11,
                 *(undefined4 *)(lVar11 + 0x28),uVar8);
      /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar11,(undefined1 *)((long)register0x00000008 + -0xa0));
      uVar10 = Atlas_Gameplay_Kart_KartUsableManager__HasUsesRemaining(lVar11,uVar13);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      if ((*(long *)(lVar11 + 0x58) != 0) &&
         (uVar10 = *(ulong *)(*(long *)(lVar11 + 0x58) + 0x70), uVar10 != 0)) {
        *(undefined8 *)((long)register0x00000008 + -0x60) =
             *(undefined8 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)((long)register0x00000008 + -0x58);
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        *(undefined8 *)((long)register0x00000008 + -0x40) =
             *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        uVar7 = uVar10;
        if ((bRam0000000003eb52e1 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28,0);
          uVar7 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52e1 = 1;
        }
        if (*(char *)(uVar10 + 0x38) != '\0') {
          return uVar7;
        }
        lVar16 = *(long *)(uVar10 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((lVar16 != 0) &&
           (lVar16 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                                     uRam0000000003d2fb00), lVar16 != 0)) {
          /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar16,0,0);
          if ((*(long *)(uVar10 + 0x150) != 0) &&
             (uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(uVar10 + 0x150),
                                       *(undefined8 *)
                                        (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2a0),
                                       uRam0000000003d2fb00), uVar10 != 0)) {
            *(undefined8 *)((long)register0x00000008 + -0x50) =
                 *(undefined8 *)((long)register0x00000008 + -0x50);
            *(undefined8 *)((long)register0x00000008 + -0x48) =
                 *(undefined8 *)((long)register0x00000008 + -0x48);
            *(undefined8 *)((long)register0x00000008 + -0x40) =
                 *(undefined8 *)((long)register0x00000008 + -0x40);
            *(undefined8 *)((long)register0x00000008 + -0x38) =
                 *(undefined8 *)((long)register0x00000008 + -0x38);
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar10,0,0);
            return uVar10;
          }
        }
        uVar10 = func_0x00f78af4();
        return uVar10;
      }
    }
    lVar16 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar13;
    *(long *)((long)register0x00000008 + -0xb8) = lVar11;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(code **)((long)register0x00000008 + -0xa8) =
         Atlas_Gameplay_Kart_KartUsableManager__CancelShuffle;
    if ((bRam0000000003eb53c7 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c7 = 1;
    }
    iVar5 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar16 + 0xa0,0);
    if (iVar5 == 0) {
LAB_015e293c:
      *(undefined4 *)(lVar16 + 0xa8) = 0xffffffff;
      if ((*(long *)(lVar16 + 0x58) != 0) &&
         (lVar11 = *(long *)(*(long *)(lVar16 + 0x58) + 0x70), lVar11 != 0)) {
        /*Atlas.Audio.KartAudio$$StopShuffleCancelled*/ func_0x015c0e1c(lVar11,0);
        if (*(long *)(lVar16 + 0x68) != 0) {
          lVar11 = *(long *)(*(long *)(lVar16 + 0x68) + 0x40);
          if (lVar11 == 0) {
            return 0;
          }
          if (*(long *)(lVar16 + 0x58) != 0) {
            plVar12 = *(long **)(*(long *)(lVar16 + 0x58) + 0x90);
            uVar10 = *(ulong *)(lVar11 + 0x68);
            if (uVar10 == 0) {
              return 0;
            }
            *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0xe8) = unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x24;
            *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x23;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -200) = 0x3eb5000;
            *(undefined8 *)((long)register0x00000008 + -0xc0) =
                 *(undefined8 *)((long)register0x00000008 + -0xc0);
            *(undefined8 *)((long)register0x00000008 + -0xb8) =
                 *(undefined8 *)((long)register0x00000008 + -0xb8);
            *(undefined8 *)((long)register0x00000008 + -0xb0) =
                 *(undefined8 *)((long)register0x00000008 + -0xb0);
            *(undefined8 *)((long)register0x00000008 + -0xa8) =
                 *(undefined8 *)((long)register0x00000008 + -0xa8);
            *(ulong *)((long)register0x00000008 + -0xf8) = uVar10;
            lVar16 = *(long *)(uVar10 + 0x68);
            if (lVar16 == 0) {
              puVar18 = (undefined1 *)((long)register0x00000008 + -0xf8);
              lVar11 = 1;
            }
            else {
              lVar11 = *(long *)(lVar16 + 0x18);
              if (lVar11 == 0) {
                return uVar10;
              }
              puVar18 = (undefined1 *)(lVar16 + 0x20);
            }
            lVar16 = 0;
            break;
          }
        }
      }
    }
    else if ((*(long *)(lVar16 + 0x30) != 0) &&
            (lVar11 = *(long *)(*(long *)(lVar16 + 0x30) + 0x10), lVar11 != 0)) {
      lVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,*(undefined8 *)(lVar16 + 0xa0),uRam0000000003d57318);
      if ((*(long *)(lVar16 + 0x68) != 0) &&
         ((lVar11 != 0 && (lVar9 = *(long *)(*(long *)(lVar16 + 0x68) + 0x1e8), lVar9 != 0)))) {
        /*Atlas.Gameplay.Pickups.PickupManager$$OnUsableDespawned*/ func_0x014bb17c(lVar9,lVar11,*(undefined4 *)(lVar11 + 0x20),0);
        goto LAB_015e293c;
      }
    }
    auVar22 = func_0x00f78af4();
    uVar13 = auVar22._8_8_;
    lVar11 = auVar22._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3eb5000;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3eb5000;
    *(long *)((long)register0x00000008 + -0xd8) = lVar16;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(code **)((long)register0x00000008 + -200) =
         Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xd0);
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb53bf & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57288);
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53bf = 1;
    }
    lVar16 = *(long *)(lVar11 + 0x58);
    if (lVar16 != 0) {
      uVar8 = *(undefined8 *)(lVar16 + 0x48);
      uVar20 = *(undefined8 *)(lVar16 + 0x60);
      uVar19 = *(undefined8 *)(lVar16 + 0x58);
      *(undefined8 *)((long)register0x00000008 + -0x108) = *(undefined8 *)(lVar16 + 0x50);
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar8;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0x100) = uVar19;
      uVar10 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90((undefined1 *)((long)register0x00000008 + -0x110),0);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar13,0);
      if ((uVar10 & 1) == 0) {
        if ((*(long *)(lVar11 + 0x30) != 0) &&
           (lVar16 = *(long *)(*(long *)(lVar11 + 0x30) + 0x10), lVar16 != 0)) {
          unaff_x21 = *(long *)(lVar11 + 0x38);
          plVar12 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,uVar13,uRam0000000003d57318);
          if ((plVar12 != (long *)0x0) &&
             (uVar8 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400)),
             unaff_x21 != 0)) {
            uVar10 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(unaff_x21,uVar8,0);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
            goto LAB_015e2a70;
          }
        }
      }
      else {
LAB_015e2a70:
        if (*(long *)(lVar11 + 0x78) != 0) {
          return uVar10;
        }
        if (0 < *(int *)(lVar11 + 0xa8)) {
          return uVar10;
        }
        if ((*(long *)(lVar11 + 0x58) != 0) &&
           (lVar16 = *(long *)(*(long *)(lVar11 + 0x58) + 0x90), lVar16 != 0)) {
          if (*(char *)(lVar16 + 0x98) != '\0') {
            return uVar10;
          }
          if (((*(long *)(lVar11 + 0x30) != 0) && (*(long *)(lVar11 + 0x68) != 0)) &&
             (lVar16 = *(long *)(*(long *)(lVar11 + 0x68) + 0x1c0), lVar16 != 0)) {
            unaff_x21 = *(long *)(*(long *)(lVar11 + 0x30) + 0x10);
            unaff_x22 = *(undefined8 *)(lVar16 + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
            if (unaff_x21 != 0) {
              lVar16 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x21,uVar8,uRam0000000003d57288);
              *(undefined4 *)(lVar11 + 0xac) = *(undefined4 *)(lVar11 + 0x28);
              if (lVar16 != 0) {
                uVar8 = /*Atlas.Definitions.GameContextDefinition$$get_UsableShuffleDuration*/ func_0x015a4c6c(lVar16,0);
                *(int *)(lVar11 + 0xb0) = (int)uVar8;
                *(int *)(lVar11 + 0xa8) = (int)uVar8;
                *(undefined8 *)(lVar11 + 0xa0) = uVar13;
                if (((*(long *)(lVar11 + 0x68) != 0) && (*(long *)(lVar11 + 0x58) != 0)) &&
                   (lVar16 = *(long *)(*(long *)(lVar11 + 0x68) + 0x40), lVar16 != 0)) {
                  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsablePickedUp*/ func_0x015a5ac0(lVar16,*(undefined8 *)(*(long *)(lVar11 + 0x58) + 0x90),uVar8,0);
                  if ((*(long *)(lVar11 + 0x58) != 0) &&
                     (lVar16 = *(long *)(*(long *)(lVar11 + 0x58) + 0x70), lVar16 != 0)) {
                    uVar10 = /*Atlas.Audio.KartAudio$$StartShuffle*/ func_0x015c0d6c(lVar16,0);
                    return uVar10;
                  }
                }
              }
            }
          }
        }
      }
    }
    unaff_x30 = Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData;
    auVar21 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
code_r0x01552340:
  lVar9 = *(long *)(puVar18 + lVar16 * 8);
  pcVar17 = *(code **)(lVar9 + 0x10);
  plVar1 = *(long **)(lVar9 + 0x20);
  lVar9 = *(long *)(lVar9 + 0x28);
  if (*(short *)(lVar9 + 0x48) == -1) {
    func_0x00f78ad8(lVar9);
  }
  iVar5 = func_0x00f78a4c(lVar9);
  bVar3 = *(char *)(lVar9 + 0x4a) == '\x01';
  if (iVar5 == 0) {
    if (bVar3) {
      if (plVar1 == (long *)0x0) {
code_r0x01552480:
        uVar7 = (*pcVar17)(plVar12,lVar9);
      }
      else {
        if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(uVar10 + 0x18) == 0)) goto code_r0x01552378;
        iVar5 = func_0x00f78a44(lVar9);
        iVar4 = func_0x00f78ec0(lVar9);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar9 + 0x48);
          if (iVar4 == 0) {
            lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar7 = (**(code **)(lVar9 + 0x138))(plVar1,plVar12,*(undefined8 *)(lVar9 + 0x140));
            goto code_r0x0155248c;
          }
          lVar9 = func_0x00f78a48(lVar9);
          lVar14 = *plVar1;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552618;
              }
              piVar15 = piVar15 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x01552618:
          pcVar17 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if (iVar4 == 0) {
            uVar13 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar1;
            uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar7 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x015525f0;
                }
                piVar15 = piVar15 + 4;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
            uVar13 = *(undefined8 *)(lVar14 + 8);
          }
          puVar6 = (undefined8 *)func_0x00f78acc(uVar13,lVar9);
          pcVar17 = (code *)*puVar6;
        }
        uVar7 = (*pcVar17)(plVar1,plVar12,puVar6);
      }
    }
    else {
      if ((*(short *)(lVar9 + 0x48) == -1) || (*(long *)(uVar10 + 0x18) == 0))
      goto code_r0x01552480;
      iVar5 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar5 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar12 + (ulong)uVar2 * 0x10;
          uVar7 = (**(code **)(lVar9 + 0x138))(plVar12,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x0155248c;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar14 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar9) {
              puVar6 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x015525b4;
            }
            piVar15 = piVar15 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar12,lVar9,(ulong)uVar2);
code_r0x015525b4:
        pcVar17 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar13 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar14 = *plVar12;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155258c;
              }
              piVar15 = piVar15 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          lVar14 = func_0x00fac1f0(plVar12);
code_r0x0155258c:
          uVar13 = *(undefined8 *)(lVar14 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar13,lVar9);
        pcVar17 = (code *)*puVar6;
      }
      uVar7 = (*pcVar17)(plVar12,puVar6);
    }
  }
  else {
    if (bVar3) goto code_r0x01552480;
code_r0x01552378:
    uVar7 = (*pcVar17)(plVar1,plVar12,lVar9);
  }
code_r0x0155248c:
  lVar16 = lVar16 + 1;
  if (lVar16 == lVar11) {
    return uVar7;
  }
  goto code_r0x01552340;
}



// ============================================================
// RVA: 0x15e2c24 | Atlas.Gameplay.Kart.KartUsableManager.ForceEquipLocal
// ============================================================

ulong Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  undefined8 unaff_x19;
  long lVar16;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  code *pcVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  auVar21._8_8_ = unaff_x19;
  auVar21._0_8_ = unaff_x20;
  do {
    uVar6 = auVar22._8_8_;
    lVar16 = auVar22._0_8_;
    *(undefined8 *)(lVar16 + 0xa0) = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar21;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb53c2 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c2 = 1;
    }
    uVar9 = Atlas_Gameplay_Kart_KartUsableManager__CanEquipLocal(lVar16);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    *(undefined1 *)(lVar16 + 0x60) = 0;
    *(int *)(lVar16 + 0x28) = *(int *)(lVar16 + 0x28) + 1;
    if ((*(long *)(lVar16 + 0x30) != 0) &&
       (lVar10 = *(long *)(*(long *)(lVar16 + 0x30) + 0x10), lVar10 != 0)) {
      uVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)(lVar16 + 0xa0),uRam0000000003d57318);
      Atlas_Gameplay_Kart_KartUsableManager__CreateEquipCommand
                ((undefined1 *)((long)register0x00000008 + -0x70),lVar16,
                 *(undefined4 *)(lVar16 + 0x28),uVar11);
      /*Atlas.Gameplay.Kart.KartUsableManager$$ExecuteCommand*/ func_0x015e2c2c(lVar16,(undefined1 *)((long)register0x00000008 + -0x70));
      uVar9 = Atlas_Gameplay_Kart_KartUsableManager__HasUsesRemaining(lVar16,uVar6);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      if ((*(long *)(lVar16 + 0x58) != 0) &&
         (uVar9 = *(ulong *)(*(long *)(lVar16 + 0x58) + 0x70), uVar9 != 0)) {
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        uVar8 = uVar9;
        if ((bRam0000000003eb52e1 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28,0);
          uVar8 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52e1 = 1;
        }
        if (*(char *)(uVar9 + 0x38) != '\0') {
          return uVar8;
        }
        lVar16 = *(long *)(uVar9 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((lVar16 != 0) &&
           (lVar16 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                                     uRam0000000003d2fb00), lVar16 != 0)) {
          /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar16,0,0);
          if ((*(long *)(uVar9 + 0x150) != 0) &&
             (uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(uVar9 + 0x150),
                                      *(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2a0),
                                      uRam0000000003d2fb00), uVar9 != 0)) {
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar9,0,0);
            return uVar9;
          }
        }
        uVar9 = func_0x00f78af4();
        return uVar9;
      }
    }
    lVar10 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar6;
    *(long *)((long)register0x00000008 + -0x88) = lVar16;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) =
         Atlas_Gameplay_Kart_KartUsableManager__CancelShuffle;
    if ((bRam0000000003eb53c7 & 1) == 0) {
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c7 = 1;
    }
    iVar5 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar10 + 0xa0,0);
    if (iVar5 == 0) {
LAB_015e293c:
      *(undefined4 *)(lVar10 + 0xa8) = 0xffffffff;
      if ((*(long *)(lVar10 + 0x58) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar10 + 0x58) + 0x70), lVar16 != 0)) {
        /*Atlas.Audio.KartAudio$$StopShuffleCancelled*/ func_0x015c0e1c(lVar16,0);
        if (*(long *)(lVar10 + 0x68) != 0) {
          lVar16 = *(long *)(*(long *)(lVar10 + 0x68) + 0x40);
          if (lVar16 == 0) {
            return 0;
          }
          if (*(long *)(lVar10 + 0x58) != 0) {
            plVar13 = *(long **)(*(long *)(lVar10 + 0x58) + 0x90);
            uVar9 = *(ulong *)(lVar16 + 0x68);
            if (uVar9 == 0) {
              return 0;
            }
            *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
            *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x23;
            *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3eb5000;
            *(undefined8 *)((long)register0x00000008 + -0x90) =
                 *(undefined8 *)((long)register0x00000008 + -0x90);
            *(undefined8 *)((long)register0x00000008 + -0x88) =
                 *(undefined8 *)((long)register0x00000008 + -0x88);
            *(undefined8 *)((long)register0x00000008 + -0x80) =
                 *(undefined8 *)((long)register0x00000008 + -0x80);
            *(undefined8 *)((long)register0x00000008 + -0x78) =
                 *(undefined8 *)((long)register0x00000008 + -0x78);
            *(ulong *)((long)register0x00000008 + -200) = uVar9;
            lVar16 = *(long *)(uVar9 + 0x68);
            if (lVar16 == 0) {
              puVar18 = (undefined1 *)((long)register0x00000008 + -200);
              lVar10 = 1;
            }
            else {
              lVar10 = *(long *)(lVar16 + 0x18);
              if (lVar10 == 0) {
                return uVar9;
              }
              puVar18 = (undefined1 *)(lVar16 + 0x20);
            }
            lVar16 = 0;
            break;
          }
        }
      }
    }
    else if ((*(long *)(lVar10 + 0x30) != 0) &&
            (lVar16 = *(long *)(*(long *)(lVar10 + 0x30) + 0x10), lVar16 != 0)) {
      lVar16 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,*(undefined8 *)(lVar10 + 0xa0),uRam0000000003d57318);
      if ((*(long *)(lVar10 + 0x68) != 0) &&
         ((lVar16 != 0 && (lVar12 = *(long *)(*(long *)(lVar10 + 0x68) + 0x1e8), lVar12 != 0)))) {
        /*Atlas.Gameplay.Pickups.PickupManager$$OnUsableDespawned*/ func_0x014bb17c(lVar12,lVar16,*(undefined4 *)(lVar16 + 0x20),0);
        goto LAB_015e293c;
      }
    }
    auVar21 = func_0x00f78af4();
    uVar6 = auVar21._8_8_;
    lVar16 = auVar21._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3eb5000;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3eb5000;
    *(long *)((long)register0x00000008 + -0xa8) = lVar10;
    *(undefined1 **)((long)register0x00000008 + -0xa0) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(code **)((long)register0x00000008 + -0x98) =
         Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal;
    lVar10 = 0x3eb5000;
    if ((bRam0000000003eb53bf & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57288);
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb53bf = 1;
    }
    lVar12 = *(long *)(lVar16 + 0x58);
    if (lVar12 != 0) {
      uVar11 = *(undefined8 *)(lVar12 + 0x48);
      uVar20 = *(undefined8 *)(lVar12 + 0x60);
      uVar19 = *(undefined8 *)(lVar12 + 0x58);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(lVar12 + 0x50);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -200) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar19;
      uVar9 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90((undefined1 *)((long)register0x00000008 + -0xe0),0);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar6,0);
      if ((uVar9 & 1) == 0) {
        if ((*(long *)(lVar16 + 0x30) != 0) &&
           (lVar12 = *(long *)(*(long *)(lVar16 + 0x30) + 0x10), lVar12 != 0)) {
          lVar10 = *(long *)(lVar16 + 0x38);
          plVar13 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,uVar6,uRam0000000003d57318);
          if ((plVar13 != (long *)0x0) &&
             (uVar11 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400)),
             lVar10 != 0)) {
            uVar9 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(lVar10,uVar11,0);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            goto LAB_015e2a70;
          }
        }
      }
      else {
LAB_015e2a70:
        if ((*(long *)(lVar16 + 0x78) != 0) || (0 < *(int *)(lVar16 + 0xa8))) {
          return uVar9;
        }
        if ((*(long *)(lVar16 + 0x58) != 0) &&
           (lVar12 = *(long *)(*(long *)(lVar16 + 0x58) + 0x90), lVar12 != 0)) {
          if (*(char *)(lVar12 + 0x98) != '\0') {
            return uVar9;
          }
          if (((*(long *)(lVar16 + 0x30) != 0) && (*(long *)(lVar16 + 0x68) != 0)) &&
             (lVar12 = *(long *)(*(long *)(lVar16 + 0x68) + 0x1c0), lVar12 != 0)) {
            lVar10 = *(long *)(*(long *)(lVar16 + 0x30) + 0x10);
            unaff_x22 = *(undefined8 *)(lVar12 + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
            if (lVar10 != 0) {
              lVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar11,uRam0000000003d57288);
              *(undefined4 *)(lVar16 + 0xac) = *(undefined4 *)(lVar16 + 0x28);
              if (lVar12 != 0) {
                uVar11 = /*Atlas.Definitions.GameContextDefinition$$get_UsableShuffleDuration*/ func_0x015a4c6c(lVar12,0);
                *(int *)(lVar16 + 0xb0) = (int)uVar11;
                *(int *)(lVar16 + 0xa8) = (int)uVar11;
                *(undefined8 *)(lVar16 + 0xa0) = uVar6;
                if (((*(long *)(lVar16 + 0x68) != 0) && (*(long *)(lVar16 + 0x58) != 0)) &&
                   (lVar12 = *(long *)(*(long *)(lVar16 + 0x68) + 0x40), lVar12 != 0)) {
                  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsablePickedUp*/ func_0x015a5ac0(lVar12,*(undefined8 *)(*(long *)(lVar16 + 0x58) + 0x90),uVar11,0);
                  if ((*(long *)(lVar16 + 0x58) != 0) &&
                     (lVar12 = *(long *)(*(long *)(lVar16 + 0x58) + 0x70), lVar12 != 0)) {
                    uVar9 = /*Atlas.Audio.KartAudio$$StartShuffle*/ func_0x015c0d6c(lVar12,0);
                    return uVar9;
                  }
                }
              }
            }
          }
        }
      }
    }
    auVar21 = func_0x00f78af4();
    uVar8 = auVar21._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x108) = lVar10;
    *(undefined8 *)((long)register0x00000008 + -0x100) = uVar6;
    *(long *)((long)register0x00000008 + -0xf8) = lVar16;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(code **)((long)register0x00000008 + -0xe8) =
         Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xf0);
    unaff_x21 = 0x3eb5000;
    uVar9 = uVar8;
    if ((bRam0000000003eb53c0 & 1) == 0) {
      uVar9 = func_0x00f78a20(0x3d57318);
      bRam0000000003eb53c0 = 1;
    }
    if (*(int *)(uVar8 + 0xa8) < 0) {
      return uVar9;
    }
    if ((*(long *)(uVar8 + 0x30) != 0) &&
       (lVar16 = *(long *)(*(long *)(uVar8 + 0x30) + 0x10), lVar16 != 0)) {
      unaff_x21 = *(long *)(uVar8 + 0x38);
      plVar13 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,auVar21._8_8_,uRam0000000003d57318);
      if ((plVar13 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400)),
         unaff_x21 != 0)) {
        uVar9 = /*Atlas.Gameplay.Usables.UsableManager$$AreAnyUsablesLeftInPool*/ func_0x015266c8(unaff_x21,uVar6,0);
        if ((int)uVar9 != 0) {
          *(long *)(uVar8 + 0xa0) = auVar21._8_8_;
        }
        return uVar9;
      }
    }
    unaff_x30 = Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal;
    auVar22 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
code_r0x01552340:
  lVar12 = *(long *)(puVar18 + lVar16 * 8);
  pcVar17 = *(code **)(lVar12 + 0x10);
  plVar1 = *(long **)(lVar12 + 0x20);
  lVar12 = *(long *)(lVar12 + 0x28);
  if (*(short *)(lVar12 + 0x48) == -1) {
    func_0x00f78ad8(lVar12);
  }
  iVar5 = func_0x00f78a4c(lVar12);
  bVar3 = *(char *)(lVar12 + 0x4a) == '\x01';
  if (iVar5 == 0) {
    if (bVar3) {
      if (plVar1 == (long *)0x0) {
code_r0x01552480:
        uVar8 = (*pcVar17)(plVar13,lVar12);
      }
      else {
        if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(uVar9 + 0x18) == 0)) goto code_r0x01552378;
        iVar5 = func_0x00f78a44(lVar12);
        iVar4 = func_0x00f78ec0(lVar12);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar4 == 0) {
            lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar8 = (**(code **)(lVar12 + 0x138))(plVar1,plVar13,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x0155248c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar14 = *plVar1;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552618;
              }
              piVar15 = piVar15 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01552618:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar4 == 0) {
            uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar1;
            uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015525f0;
                }
                piVar15 = piVar15 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar17 = (code *)*puVar7;
        }
        uVar8 = (*pcVar17)(plVar1,plVar13,puVar7);
      }
    }
    else {
      if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(uVar9 + 0x18) == 0))
      goto code_r0x01552480;
      iVar5 = func_0x00f78a44(lVar12);
      iVar4 = func_0x00f78ec0(lVar12);
      if (iVar5 == 0) {
        uVar2 = *(ushort *)(lVar12 + 0x48);
        if (iVar4 == 0) {
          lVar12 = *plVar13 + (ulong)uVar2 * 0x10;
          uVar8 = (**(code **)(lVar12 + 0x138))(plVar13,*(undefined8 *)(lVar12 + 0x140));
          goto code_r0x0155248c;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar14 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x015525b4;
            }
            piVar15 = piVar15 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar13,lVar12,(ulong)uVar2);
code_r0x015525b4:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar4 == 0) {
          uVar6 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar14 = *plVar13;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155258c;
              }
              piVar15 = piVar15 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          lVar14 = func_0x00fac1f0(plVar13);
code_r0x0155258c:
          uVar6 = *(undefined8 *)(lVar14 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      uVar8 = (*pcVar17)(plVar13,puVar7);
    }
  }
  else {
    if (bVar3) goto code_r0x01552480;
code_r0x01552378:
    uVar8 = (*pcVar17)(plVar1,plVar13,lVar12);
  }
code_r0x0155248c:
  lVar16 = lVar16 + 1;
  if (lVar16 == lVar10) {
    return uVar8;
  }
  goto code_r0x01552340;
}



// ============================================================
// RVA: 0x15e2c2c | Atlas.Gameplay.Kart.KartUsableManager.ExecuteCommand
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e2d28 | Atlas.Gameplay.Kart.KartUsableManager.ConsumeLocal
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e2df0 | Atlas.Gameplay.Kart.KartUsableManager.UnEquipLocal
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e2f84 | Atlas.Gameplay.Kart.KartUsableManager.UnEquip
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e30f8 | Atlas.Gameplay.Kart.KartUsableManager.MigrationForceEquip
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e31dc | Atlas.Gameplay.Kart.KartUsableManager.EquipUsable
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e3588 | Atlas.Gameplay.Kart.KartUsableManager.StartUse
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e39ec | Atlas.Gameplay.Kart.KartUsableManager.Consume
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e3a50 | Atlas.Gameplay.Kart.KartUsableManager.SpawnUsable
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e3ab0 | Atlas.Gameplay.Kart.KartUsableManager.AttachToHandVisuals
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e3be0 | Atlas.Gameplay.Kart.KartUsableManager.RegisterStartUseReceived
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e3d30 | Atlas.Gameplay.Kart.KartUsableManager.SpawnAndUseImmediate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e3f2c | Atlas.Gameplay.Kart.KartUsableManager.OnHostMigrationStarted
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e3f34 | Atlas.Gameplay.Kart.KartUsableManager.CommandToString
// ============================================================

long Atlas_Gameplay_Kart_KartUsableManager__CommandToString(long param_1,long param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x19;
  long unaff_x20;
  int iVar9;
  ulong unaff_x21;
  uint uVar10;
  ulong unaff_x22;
  long lVar11;
  uint uVar12;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar13 [16];
  
  if ((bRam0000000003eb53cb & 1) == 0) {
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66140);
    func_0x00f78a20(0x3d66080);
    func_0x00f78a20(0x3d6ee90);
    func_0x00f78a20(0x3d66088);
    bRam0000000003eb53cb = 1;
  }
  plVar2 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,8);
  if (plVar2 == (long *)0x0) goto LAB_015e418c;
  if ((/*STR('Kart: ')*/ lRam0000000003d6ee90 != 0) &&
     (lVar3 = func_0x00f78adc(/*STR('Kart: ')*/ lRam0000000003d6ee90,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
  goto LAB_015e4180;
  uVar8 = plVar2[3];
  if ((int)uVar8 == 0) {
LAB_015e4178:
    uVar5 = func_0x00f78b24();
  }
  else {
    plVar2[4] = /*STR('Kart: ')*/ lRam0000000003d6ee90;
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_015e418c;
    lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0x58);
    if (lVar3 != 0) {
      lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar4 == 0) goto LAB_015e4180;
      uVar8 = plVar2[3];
    }
    uVar10 = (uint)uVar8;
    if ((uVar8 & 0xfffffffe) == 0) goto LAB_015e4178;
    plVar2[5] = lVar3;
    if (/*STR(' Group No: ')*/ lRam0000000003d66088 != 0) {
      lVar3 = func_0x00f78adc(/*STR(' Group No: ')*/ lRam0000000003d66088,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar3 == 0) goto LAB_015e4180;
      uVar10 = (uint)plVar2[3];
    }
    if (uVar10 < 3) goto LAB_015e4178;
    plVar2[6] = /*STR(' Group No: ')*/ lRam0000000003d66088;
    lVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(param_2,0);
    if ((lVar3 == 0) || (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 != 0)
       ) {
      uVar10 = (uint)plVar2[3];
      if ((plVar2[3] & 0xfffffffcU) != 0) {
        plVar2[7] = lVar3;
        if (/*STR(' Sequence No ')*/ lRam0000000003d66140 != 0) {
          lVar3 = func_0x00f78adc(/*STR(' Sequence No ')*/ lRam0000000003d66140,*(undefined8 *)(*plVar2 + 0x40));
          if (lVar3 == 0) goto LAB_015e4180;
          uVar10 = (uint)plVar2[3];
        }
        if (4 < uVar10) {
          plVar2[8] = /*STR(' Sequence No ')*/ lRam0000000003d66140;
          lVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(param_2 + 0x10,0);
          if ((lVar3 != 0) &&
             (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_015e4180;
          uVar10 = *(uint *)(plVar2 + 3);
          if (5 < uVar10) {
            plVar2[9] = lVar3;
            if (/*STR(' ExTime: ')*/ lRam0000000003d66080 != 0) {
              lVar3 = func_0x00f78adc(/*STR(' ExTime: ')*/ lRam0000000003d66080,*(undefined8 *)(*plVar2 + 0x40));
              if (lVar3 == 0) goto LAB_015e4180;
              uVar10 = *(uint *)(plVar2 + 3);
            }
            if (6 < uVar10) {
              plVar2[10] = /*STR(' ExTime: ')*/ lRam0000000003d66080;
              lVar3 = /*Core.Networking.NetworkSessionTime$$ToString*/ func_0x01660d98(param_2 + 0x18,0);
              if ((lVar3 != 0) &&
                 (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
              goto LAB_015e4180;
              if ((*(uint *)(plVar2 + 3) & 0xfffffff8) != 0) {
                plVar2[0xb] = lVar3;
                auVar13._8_8_ = 0;
                auVar13._0_8_ = plVar2;
                puVar1 = (undefined1 *)register0x00000008;
                do {
                  lVar3 = auVar13._0_8_;
                  *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
                  *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
                  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
                  *(long **)(puVar1 + -0x38) = unaff_x23;
                  *(ulong *)(puVar1 + -0x30) = unaff_x22;
                  *(ulong *)(puVar1 + -0x28) = unaff_x21;
                  *(long *)(puVar1 + -0x20) = unaff_x20;
                  *(long **)(puVar1 + -0x18) = unaff_x19;
                  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
                  *(undefined **)(puVar1 + -8) = unaff_x30;
                  if ((bRam0000000003eb946a & 1) == 0) {
                    func_0x00f78a20(0x3d1f498,auVar13._8_8_);
                    func_0x00f78a20(0x3d24dd0);
                    bRam0000000003eb946a = 1;
                  }
                  if (lVar3 == 0) goto code_r0x029cfc54;
                  unaff_x19 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,
                                                      *(undefined4 *)(lVar3 + 0x18));
                  uVar10 = *(uint *)(lVar3 + 0x18);
                  if ((int)uVar10 < 1) {
                    iVar9 = 0;
                  }
                  else {
                    lVar4 = 0;
                    iVar9 = 0;
                    do {
                      uVar12 = (uint)lVar4;
                      if (uVar10 <= uVar12) {
code_r0x029cfc0c:
                        uVar5 = func_0x00f78b24();
code_r0x029cfc18:
                        func_0x00f78ac0(uVar5,0);
code_r0x029cfc20:
                        func_0x00f78a24(0x3d23ae8);
                        uVar5 = func_0x00f78aec();
                        /*System.OutOfMemoryException$$.ctor*/ func_0x02965294(uVar5,0);
                        do {
                          uVar7 = func_0x00f78a24(0x3d5da90);
                          func_0x00f78ac0(uVar5,uVar7);
code_r0x029cfc54:
                          func_0x00f78a24(0x3d1fcf0);
                          uVar5 = func_0x00f78aec();
                          uVar7 = func_0x00f78a24(0x3d7c5e8);
                          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar7,0);
                        } while( true );
                      }
                      lVar11 = *(long *)(lVar3 + (lVar4 + 4) * 8);
                      if (lVar11 == 0) {
                        lVar11 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                      }
                      if (unaff_x19 == (long *)0x0) {
                        func_0x00f78af4();
code_r0x029cfbf4:
                        if (uVar12 < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[lVar4 + 4] = lVar11;
                          func_0x00f78af4();
                        }
                        goto code_r0x029cfc0c;
                      }
                      if (lVar11 == 0) goto code_r0x029cfbf4;
                      lVar6 = func_0x00f78adc(lVar11,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar6 == 0) {
                        uVar5 = func_0x00f78b14();
                        goto code_r0x029cfc18;
                      }
                      if (*(uint *)(unaff_x19 + 3) <= uVar12) goto code_r0x029cfc0c;
                      unaff_x19[lVar4 + 4] = lVar11;
                      iVar9 = *(int *)(lVar11 + 0x10) + iVar9;
                      if (iVar9 < 0) goto code_r0x029cfc20;
                      uVar10 = *(uint *)(lVar3 + 0x18);
                      lVar4 = lVar4 + 1;
                    } while ((int)lVar4 < (int)uVar10);
                  }
                  unaff_x20 = *(long *)(puVar1 + -0x20);
                  unaff_x22 = *(ulong *)(puVar1 + -0x30);
                  unaff_x21 = *(ulong *)(puVar1 + -0x28);
                  unaff_x24 = *(undefined8 *)(puVar1 + -0x40);
                  unaff_x23 = *(long **)(puVar1 + -0x38);
                  unaff_x26 = *(undefined8 *)(puVar1 + -0x50);
                  unaff_x25 = *(undefined8 *)(puVar1 + -0x48);
                  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
                  *(long **)(puVar1 + -0x38) = unaff_x23;
                  *(ulong *)(puVar1 + -0x30) = unaff_x22;
                  *(ulong *)(puVar1 + -0x28) = unaff_x21;
                  *(long *)(puVar1 + -0x20) = unaff_x20;
                  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
                  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
                  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
                  unaff_x29 = puVar1 + -0x10;
                  lVar3 = func_0x00f834ac(iVar9);
                  if (unaff_x19 != (long *)0x0) {
                    uVar8 = (ulong)*(uint *)(unaff_x19 + 3);
                    if ((int)*(uint *)(unaff_x19 + 3) < 1) {
                      return lVar3;
                    }
                    unaff_x22 = 0;
                    unaff_x21 = 0;
                    while (uVar10 = (uint)unaff_x22, unaff_x20 = lVar3, uVar10 < (uint)uVar8) {
                      unaff_x23 = unaff_x19 + (long)(int)uVar10 + 4;
                      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,unaff_x21,*unaff_x23);
                      uVar8 = unaff_x19[3];
                      if ((uint)uVar8 <= uVar10) break;
                      if (*unaff_x23 == 0) goto code_r0x029cfad8;
                      unaff_x21 = (ulong)(uint)(*(int *)(*unaff_x23 + 0x10) + (int)unaff_x21);
                      unaff_x22 = (ulong)(uVar10 + 1);
                      if ((int)(uint)uVar8 <= (int)(uVar10 + 1)) {
                        return lVar3;
                      }
                    }
                    uVar5 = func_0x00f78b24();
                    func_0x00f78ac0(uVar5,0);
                  }
code_r0x029cfad8:
                  unaff_x30 = &System_String__Concat;
                  auVar13 = func_0x00f78af4();
                  puVar1 = puVar1 + -0x40;
                } while( true );
              }
            }
          }
        }
      }
      goto LAB_015e4178;
    }
LAB_015e4180:
    uVar5 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar5,0);
LAB_015e418c:
  lVar3 = func_0x00f78af4();
  *(undefined4 *)(lVar3 + 0xa8) = 0xffffffff;
  *(undefined8 *)(lVar3 + 0xb4) = 0xffffffffffffffff;
  *(undefined4 *)(lVar3 + 0xbc) = 0xffffffff;
  return lVar3;
}



// ============================================================
// RVA: 0x15e4190 | Atlas.Gameplay.Kart.KartUsableManager..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartUsableManager___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb4) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  return;
}



