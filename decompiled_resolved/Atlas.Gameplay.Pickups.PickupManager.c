// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Pickups.PickupManager

// ============================================================
// RVA: 0x14b90bc | Atlas.Gameplay.Pickups.PickupManager.get_LoadedBoxes
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupManager__get_LoadedBoxes(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x14b90c4 | Atlas.Gameplay.Pickups.PickupManager.get_UsablesInPlay
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupManager__get_UsablesInPlay(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x14b90cc | Atlas.Gameplay.Pickups.PickupManager.get_UsablePickupLimits
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupManager__get_UsablePickupLimits(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x14b90d4 | Atlas.Gameplay.Pickups.PickupManager.get_UsableCooldownTimers
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupManager__get_UsableCooldownTimers(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x14b90dc | Atlas.Gameplay.Pickups.PickupManager.get_CurrentUsableTypes
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupManager__get_CurrentUsableTypes(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x14b90e4 | Atlas.Gameplay.Pickups.PickupManager.set_TrackUsableCounts
// ============================================================

void Atlas_Gameplay_Pickups_PickupManager__set_TrackUsableCounts(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa8) = param_2;
  return;
}



// ============================================================
// RVA: 0x14b90ec | Atlas.Gameplay.Pickups.PickupManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014b9358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b935c) */
/* WARNING: Removing unreachable block (ram,0x014b9398) */
/* WARNING: Removing unreachable block (ram,0x014b93a0) */
/* WARNING: Removing unreachable block (ram,0x014b93a4) */
/* WARNING: Removing unreachable block (ram,0x014b9458) */
/* WARNING: Removing unreachable block (ram,0x014b93b8) */
/* WARNING: Removing unreachable block (ram,0x014b93bc) */
/* WARNING: Removing unreachable block (ram,0x014b93c4) */
/* WARNING: Removing unreachable block (ram,0x014b9480) */
/* WARNING: Removing unreachable block (ram,0x014b9488) */
/* WARNING: Removing unreachable block (ram,0x014b9490) */
/* WARNING: Removing unreachable block (ram,0x014b94cc) */
/* WARNING: Removing unreachable block (ram,0x014b954c) */
/* WARNING: Removing unreachable block (ram,0x014b94dc) */
/* WARNING: Removing unreachable block (ram,0x014b97b8) */
/* WARNING: Removing unreachable block (ram,0x014b94e4) */
/* WARNING: Removing unreachable block (ram,0x014b97c0) */
/* WARNING: Removing unreachable block (ram,0x014b94ec) */
/* WARNING: Removing unreachable block (ram,0x014b94f4) */
/* WARNING: Removing unreachable block (ram,0x014b9510) */
/* WARNING: Removing unreachable block (ram,0x014b9518) */
/* WARNING: Removing unreachable block (ram,0x014b951c) */
/* WARNING: Removing unreachable block (ram,0x014b9530) */
/* WARNING: Removing unreachable block (ram,0x014b97d0) */
/* WARNING: Removing unreachable block (ram,0x014b9534) */
/* WARNING: Removing unreachable block (ram,0x014b97c8) */
/* WARNING: Removing unreachable block (ram,0x014b953c) */
/* WARNING: Removing unreachable block (ram,0x014b93d4) */
/* WARNING: Removing unreachable block (ram,0x014b93dc) */
/* WARNING: Removing unreachable block (ram,0x014b93e4) */
/* WARNING: Removing unreachable block (ram,0x014b93ec) */
/* WARNING: Removing unreachable block (ram,0x014b9414) */
/* WARNING: Removing unreachable block (ram,0x014b941c) */
/* WARNING: Removing unreachable block (ram,0x014b9420) */
/* WARNING: Removing unreachable block (ram,0x014b9438) */
/* WARNING: Removing unreachable block (ram,0x014b9440) */
/* WARNING: Removing unreachable block (ram,0x014b9560) */
/* WARNING: Removing unreachable block (ram,0x014b9568) */
/* WARNING: Removing unreachable block (ram,0x014b9570) */
/* WARNING: Removing unreachable block (ram,0x014b959c) */
/* WARNING: Removing unreachable block (ram,0x014b95c8) */
/* WARNING: Removing unreachable block (ram,0x014b95d0) */
/* WARNING: Removing unreachable block (ram,0x014b95d4) */
/* WARNING: Removing unreachable block (ram,0x014b95f0) */
/* WARNING: Removing unreachable block (ram,0x014b95f8) */
/* WARNING: Removing unreachable block (ram,0x014b95fc) */
/* WARNING: Removing unreachable block (ram,0x014b960c) */
/* WARNING: Removing unreachable block (ram,0x014b968c) */
/* WARNING: Removing unreachable block (ram,0x014b96a4) */
/* WARNING: Removing unreachable block (ram,0x014b96ac) */
/* WARNING: Removing unreachable block (ram,0x014b96b4) */
/* WARNING: Removing unreachable block (ram,0x014b9700) */
/* WARNING: Removing unreachable block (ram,0x014b9710) */
/* WARNING: Removing unreachable block (ram,0x014b971c) */
/* WARNING: Removing unreachable block (ram,0x014b9724) */
/* WARNING: Removing unreachable block (ram,0x014b972c) */
/* WARNING: Removing unreachable block (ram,0x014b9778) */
/* WARNING: Removing unreachable block (ram,0x014b97d8) */
/* WARNING: Removing unreachable block (ram,0x014b9800) */
/* WARNING: Removing unreachable block (ram,0x014b9808) */
/* WARNING: Removing unreachable block (ram,0x014b982c) */
/* WARNING: Removing unreachable block (ram,0x014b9838) */
/* WARNING: Removing unreachable block (ram,0x014b9788) */

void Atlas_Gameplay_Pickups_PickupManager__Init
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb4ae0 & 1) == 0) {
    func_0x00f78a20(0x3d2a118);
    func_0x00f78a20(0x3d1b490);
    func_0x00f78a20(0x3d2a460);
    func_0x00f78a20(0x3d1b640);
    func_0x00f78a20(0x3d55078);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d55158);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d32d68);
    func_0x00f78a20(0x3d32d70);
    func_0x00f78a20(0x3d32d78);
    func_0x00f78a20(0x3d572e0);
    func_0x00f78a20(0x3d36168);
    func_0x00f78a20(0x3d36160);
    func_0x00f78a20(0x3d1ce80);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d3b860);
    func_0x00f78a20(0x3d3b828);
    func_0x00f78a20(0x3d3b820);
    func_0x00f78a20(0x3d3b868);
    func_0x00f78a20(0x3d1dcb0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5b578);
    func_0x00f78a20(0x3d5b580);
    func_0x00f78a20(0x3d5b588);
    func_0x00f78a20(0x3d23c38);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d296d0);
    func_0x00f78a20(0x3d1a130);
    bRam0000000003eb4ae0 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(long *)(param_1 + 0x50) = param_2;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x50);
    if (param_7 != 0) {
      uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_7,uRam0000000003d55078);
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_7,uRam0000000003d55090);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_7,uRam0000000003d55158);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_7,uRam0000000003d55150);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      *(undefined8 *)(param_1 + 0x58) = param_4;
      *(undefined8 *)(param_1 + 0x40) = param_5;
      *(undefined8 *)(param_1 + 0x48) = param_6;
      func_0x00f78aec(/*Atlas.Gameplay.Pickups.PickupTable_TypeInfo*/ uRam0000000003d23c38);
      return;
    }
  }
  func_0x00f78af4();
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14b97d8);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14b9844 | Atlas.Gameplay.Pickups.PickupManager.DeInit
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014b9eb0) */
/* WARNING: Removing unreachable block (ram,0x014b9ff4) */

long Atlas_Gameplay_Pickups_PickupManager__DeInit(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int extraout_w1;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *unaff_x22;
  undefined8 *unaff_x23;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  int aiStack_190 [4];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  
  if ((bRam0000000003eb4ae1 & 1) == 0) {
    func_0x00f78a20(0x3d2a118);
    func_0x00f78a20(0x3d1b490);
    func_0x00f78a20(0x3d2a460);
    func_0x00f78a20(0x3d1b640);
    func_0x00f78a20(0x3d36170);
    func_0x00f78a20(0x3d3b838);
    func_0x00f78a20(0x3d5b578);
    func_0x00f78a20(0x3d5b580);
    func_0x00f78a20(0x3d5b588);
    func_0x00f78a20(0x3d296d0);
    bRam0000000003eb4ae1 = 1;
  }
  if (((*(long *)(param_1 + 0x30) != 0) &&
      (lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar7 != 0)) &&
     (unaff_x22 = *(long **)(lVar7 + 0x10), unaff_x22 != (long *)0x0)) {
    unaff_x23 = (undefined8 *)0x3d1b640;
    lVar7 = unaff_x22[6];
    uVar3 = func_0x00f78aec(/*System.Action<short, NetworkPlayer>_TypeInfo*/ lRam0000000003d1b640);
    /*System.Action<short, NetworkPlayer>$$.ctor*/ func_0x01e6c010(uVar3,param_1,uRam0000000003d5b580,uRam0000000003d2a460);
    plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar3,0);
    if ((plVar4 != (long *)0x0) && (*plVar4 != /*System.Action<short, NetworkPlayer>_TypeInfo*/ lRam0000000003d1b640)) goto LAB_014b9a9c;
    unaff_x22[6] = (long)plVar4;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       ((lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar7 != 0 &&
        (unaff_x22 = *(long **)(lVar7 + 0x10), unaff_x23 = (undefined8 *)0x3d1b640,
        unaff_x22 != (long *)0x0)))) {
      unaff_x23 = (undefined8 *)0x3d1b490;
      lVar7 = unaff_x22[7];
      uVar3 = func_0x00f78aec(/*System.Action<short>_TypeInfo*/ lRam0000000003d1b490);
      /*System.Action<short>$$.ctor*/ func_0x01b477bc(uVar3,param_1,uRam0000000003d5b588,uRam0000000003d2a118);
      plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar3,0);
      if ((plVar4 != (long *)0x0) && (*plVar4 != /*System.Action<short>_TypeInfo*/ lRam0000000003d1b490)) goto LAB_014b9a9c;
      unaff_x22[7] = (long)plVar4;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (*(long *)(param_1 + 0x68) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x68),uRam0000000003d3b838);
      }
      unaff_x23 = (undefined8 *)0x3d5b578;
      lVar7 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = 0;
      if (lVar7 != 0) {
        /*System.Collections.Generic.HashSet<string>$$Clear*/ func_0x021e9538(lVar7,uRam0000000003d36170);
      }
      unaff_x22 = (long *)(param_1 + 0x58);
      lVar7 = *unaff_x22;
      *(long *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      uVar3 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableDespawned_TypeInfo*/ uRam0000000003d296d0);
      Atlas_Gameplay_Usables_UsableManagerEvents_UsableDespawned___ctor
                (uVar3,param_1,uRam0000000003d5b578,0);
      if (lVar7 != 0) {
        lVar7 = Atlas_Gameplay_Usables_UsableManager__remove_OnUsableDespawned(lVar7,uVar3,0);
        *unaff_x22 = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        return lVar7;
      }
    }
  }
  func_0x00f78af4();
LAB_014b9a9c:
  uVar3 = func_0x00f78e5c();
  if ((bRam0000000003eb4ae2 & 1) == 0) {
    func_0x00f78a20(0x3d285c0);
    bRam0000000003eb4ae2 = 1;
  }
  lVar7 = func_0x00f78aec(/*Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36_TypeInfo*/ uRam0000000003d285c0);
  /*Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36$$.ctor*/ func_0x01561b4c(lVar7,0,0);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x20) = uVar3;
    return lVar7;
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb4ae3 & 1) == 0) {
    func_0x00f78a20(0x3d2a4e0);
    func_0x00f78a20(0x3d1b688);
    func_0x00f78a20(0x3d32d50);
    func_0x00f78a20(0x3d32d58);
    func_0x00f78a20(0x3d32d60);
    func_0x00f78a20(0x3d3b838);
    func_0x00f78a20(0x3d3b840);
    func_0x00f78a20(0x3d5b560);
    bRam0000000003eb4ae3 = 1;
  }
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  if (*(long *)(lVar7 + 0x68) == 0) goto code_r0x014b9c90;
  unaff_x22 = (long *)0x3d3b838;
  unaff_x23 = (undefined8 *)0x3d32d50;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_f8,*(long *)(lVar7 + 0x68),uRam0000000003d3b840);
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_f8,uRam0000000003d32d58), lVar11 = lStack_e8,
        (uVar5 & 1) != 0) {
    uVar3 = func_0x00f78aec(/*System.Action<PickupBox, KartComposite>_TypeInfo*/ uRam0000000003d1b688);
    /*System.Action<TabController.TabPanel, TabController.TabPanel>$$.ctor*/ func_0x01e6eb20(uVar3,lVar7,uRam0000000003d5b560,uRam0000000003d2a4e0);
    if (lVar11 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14b9c90);
      (*pcVar1)();
    }
    Atlas_Gameplay_Pickups_PickupBox__remove_OnBoxHit(lVar11,uVar3);
    Atlas_Gameplay_Pickups_PickupBox__DestroyBox(lVar11);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f8,uRam0000000003d32d50);
  do {
    if (*(long *)(lVar7 + 0x68) != 0) {
      lVar7 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar7 + 0x68),*unaff_x22);
      return lVar7;
    }
code_r0x014b9c90:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014b9ccc;
    plVar4 = (long *)___cxa_begin_catch();
    lVar11 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f8,*unaff_x23);
  } while (lVar11 == 0);
  func_0x00f78ac0(lVar11,0);
code_r0x014b9ccc:
  auVar15 = __Unwind_Resume();
  plVar4 = auVar15._8_8_;
  lVar7 = auVar15._0_8_;
  if ((bRam0000000003eb4ae4 & 1) == 0) {
    func_0x00f78a20(0x3d32d50);
    func_0x00f78a20(0x3d32d58);
    func_0x00f78a20(0x3d32d60);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3b840);
    func_0x00f78a20(0x3d23c30);
    bRam0000000003eb4ae4 = 1;
  }
  uStack_180 = 0;
  uStack_178 = 0;
  lStack_170 = 0;
  aiStack_190[2] = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = **(undefined8 **)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
  if (*(long *)(lVar7 + 0x68) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1a8,*(long *)(lVar7 + 0x68),uRam0000000003d3b840);
    uStack_178 = uStack_1a0;
    uStack_180 = uStack_1a8;
    lStack_170 = lStack_198;
    while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_180,uRam0000000003d32d58), lVar11 = lStack_170,
          (uVar5 & 1) != 0) {
      if (lStack_170 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba000;
      }
      if (0.0 < *(float *)(lStack_170 + 0x40)) {
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014ba000;
        }
        lVar8 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x014b9e50;
            }
            piVar10 = piVar10 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b9e50:
        fVar13 = (float)(*(code *)*puVar6)(plVar4,puVar6[1]);
        fVar13 = *(float *)(lVar11 + 0x40) - fVar13;
        *(float *)(lVar11 + 0x40) = fVar13;
        if (fVar13 <= 0.0) {
          Atlas_Gameplay_Pickups_PickupBox__SpawnBox(lVar11);
        }
      }
      Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox(lVar11);
    }
    aiStack_190[0] = 0x6f;
    aiStack_190[2] = 1;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_180,uRam0000000003d32d50);
    bVar2 = aiStack_190[0] == 0x6f;
    if (bVar2) {
      aiStack_190[2] = 0;
    }
    lVar11 = *(long *)(lVar7 + 0x98);
    if (lVar11 != 0) {
      uVar5 = 0;
      do {
        if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar5) {
          aiStack_190[(int)(uint)!bVar2] = 0xbd;
          aiStack_190[2] = aiStack_190[2] + 1;
          lVar7 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar3,0);
          return lVar7;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar5) {
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x014ba000;
        }
        pfVar12 = (float *)(lVar11 + uVar5 * 4 + 0x20);
        fVar13 = *pfVar12;
        if (0.0 < fVar13) {
          if (plVar4 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014ba000;
          }
          lVar11 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                puVar6 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                goto code_r0x014b9f58;
              }
              piVar10 = piVar10 + 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b9f58:
          fVar14 = (float)(*(code *)*puVar6)(plVar4,puVar6[1]);
          *pfVar12 = fVar13 - fVar14;
          lVar11 = *(long *)(lVar7 + 0x98);
        }
        uVar5 = uVar5 + 1;
      } while (lVar11 != 0);
    }
    func_0x00f78af4();
  }
code_r0x014ba000:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ba004);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14b9aa0 | Atlas.Gameplay.Pickups.PickupManager.LoadAndSpawnPickupBoxes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014b9eb0) */
/* WARNING: Removing unreachable block (ram,0x014b9ff4) */

long Atlas_Gameplay_Pickups_PickupManager__LoadAndSpawnPickupBoxes(undefined8 param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int extraout_w1;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  int aiStack_140 [4];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  if ((bRam0000000003eb4ae2 & 1) == 0) {
    func_0x00f78a20(0x3d285c0);
    bRam0000000003eb4ae2 = 1;
  }
  lVar3 = func_0x00f78aec(/*Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36_TypeInfo*/ uRam0000000003d285c0);
  /*Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36$$.ctor*/ func_0x01561b4c(lVar3,0,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = param_1;
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4ae3 & 1) == 0) {
    func_0x00f78a20(0x3d2a4e0);
    func_0x00f78a20(0x3d1b688);
    func_0x00f78a20(0x3d32d50);
    func_0x00f78a20(0x3d32d58);
    func_0x00f78a20(0x3d32d60);
    func_0x00f78a20(0x3d3b838);
    func_0x00f78a20(0x3d3b840);
    func_0x00f78a20(0x3d5b560);
    bRam0000000003eb4ae3 = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  if (*(long *)(lVar3 + 0x68) == 0) goto code_r0x014b9c90;
  unaff_x22 = (undefined8 *)0x3d3b838;
  unaff_x23 = (undefined8 *)0x3d32d50;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar3 + 0x68),uRam0000000003d3b840);
  while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a8,uRam0000000003d32d58), lVar11 = lStack_98,
        (uVar4 & 1) != 0) {
    uVar5 = func_0x00f78aec(/*System.Action<PickupBox, KartComposite>_TypeInfo*/ uRam0000000003d1b688);
    /*System.Action<TabController.TabPanel, TabController.TabPanel>$$.ctor*/ func_0x01e6eb20(uVar5,lVar3,uRam0000000003d5b560,uRam0000000003d2a4e0);
    if (lVar11 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14b9c90);
      (*pcVar1)();
    }
    Atlas_Gameplay_Pickups_PickupBox__remove_OnBoxHit(lVar11,uVar5);
    Atlas_Gameplay_Pickups_PickupBox__DestroyBox(lVar11);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d32d50);
  do {
    if (*(long *)(lVar3 + 0x68) != 0) {
      lVar3 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar3 + 0x68),*unaff_x22);
      return lVar3;
    }
code_r0x014b9c90:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014b9ccc;
    plVar6 = (long *)___cxa_begin_catch();
    lVar11 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,*unaff_x23);
  } while (lVar11 == 0);
  func_0x00f78ac0(lVar11,0);
code_r0x014b9ccc:
  auVar15 = __Unwind_Resume();
  plVar6 = auVar15._8_8_;
  lVar3 = auVar15._0_8_;
  if ((bRam0000000003eb4ae4 & 1) == 0) {
    func_0x00f78a20(0x3d32d50);
    func_0x00f78a20(0x3d32d58);
    func_0x00f78a20(0x3d32d60);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3b840);
    func_0x00f78a20(0x3d23c30);
    bRam0000000003eb4ae4 = 1;
  }
  uStack_130 = 0;
  uStack_128 = 0;
  lStack_120 = 0;
  aiStack_140[2] = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = **(undefined8 **)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  if (*(long *)(lVar3 + 0x68) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_158,*(long *)(lVar3 + 0x68),uRam0000000003d3b840);
    uStack_128 = uStack_150;
    uStack_130 = uStack_158;
    lStack_120 = lStack_148;
    while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_130,uRam0000000003d32d58), lVar11 = lStack_120,
          (uVar4 & 1) != 0) {
      if (lStack_120 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba000;
      }
      if (0.0 < *(float *)(lStack_120 + 0x40)) {
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014ba000;
        }
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x014b9e50;
            }
            piVar10 = piVar10 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b9e50:
        fVar13 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
        fVar13 = *(float *)(lVar11 + 0x40) - fVar13;
        *(float *)(lVar11 + 0x40) = fVar13;
        if (fVar13 <= 0.0) {
          Atlas_Gameplay_Pickups_PickupBox__SpawnBox(lVar11);
        }
      }
      Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox(lVar11);
    }
    aiStack_140[0] = 0x6f;
    aiStack_140[2] = 1;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_130,uRam0000000003d32d50);
    bVar2 = aiStack_140[0] == 0x6f;
    if (bVar2) {
      aiStack_140[2] = 0;
    }
    lVar11 = *(long *)(lVar3 + 0x98);
    if (lVar11 != 0) {
      uVar4 = 0;
      do {
        if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar4) {
          aiStack_140[(int)(uint)!bVar2] = 0xbd;
          aiStack_140[2] = aiStack_140[2] + 1;
          lVar3 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar5,0);
          return lVar3;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar4) {
          uVar5 = func_0x00f78b24();
          func_0x00f78ac0(uVar5,0);
          goto code_r0x014ba000;
        }
        pfVar12 = (float *)(lVar11 + uVar4 * 4 + 0x20);
        fVar13 = *pfVar12;
        if (0.0 < fVar13) {
          if (plVar6 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014ba000;
          }
          lVar11 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                goto code_r0x014b9f58;
              }
              piVar10 = piVar10 + 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b9f58:
          fVar14 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
          *pfVar12 = fVar13 - fVar14;
          lVar11 = *(long *)(lVar3 + 0x98);
        }
        uVar4 = uVar4 + 1;
      } while (lVar11 != 0);
    }
    func_0x00f78af4();
  }
code_r0x014ba000:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ba004);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14b9b14 | Atlas.Gameplay.Pickups.PickupManager.DestroyAndDeSpawnBoxes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014b9eb0) */
/* WARNING: Removing unreachable block (ram,0x014b9ff4) */

void Atlas_Gameplay_Pickups_PickupManager__DestroyAndDeSpawnBoxes(long param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int extraout_w1;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  int aiStack_110 [4];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb4ae3 & 1) == 0) {
    func_0x00f78a20(0x3d2a4e0);
    func_0x00f78a20(0x3d1b688);
    func_0x00f78a20(0x3d32d50);
    func_0x00f78a20(0x3d32d58);
    func_0x00f78a20(0x3d32d60);
    func_0x00f78a20(0x3d3b838);
    func_0x00f78a20(0x3d3b840);
    func_0x00f78a20(0x3d5b560);
    bRam0000000003eb4ae3 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  if (*(long *)(param_1 + 0x68) == 0) goto LAB_014b9c90;
  unaff_x22 = (undefined8 *)0x3d3b838;
  unaff_x23 = (undefined8 *)0x3d32d50;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,*(long *)(param_1 + 0x68),uRam0000000003d3b840);
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d32d58), lVar11 = lStack_68,
        (uVar3 & 1) != 0) {
    uVar4 = func_0x00f78aec(/*System.Action<PickupBox, KartComposite>_TypeInfo*/ uRam0000000003d1b688);
    /*System.Action<TabController.TabPanel, TabController.TabPanel>$$.ctor*/ func_0x01e6eb20(uVar4,param_1,uRam0000000003d5b560,uRam0000000003d2a4e0);
    if (lVar11 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14b9c90);
      (*pcVar1)();
    }
    Atlas_Gameplay_Pickups_PickupBox__remove_OnBoxHit(lVar11,uVar4);
    Atlas_Gameplay_Pickups_PickupBox__DestroyBox(lVar11);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d32d50);
  do {
    if (*(long *)(param_1 + 0x68) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x68),*unaff_x22);
      return;
    }
LAB_014b9c90:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014b9ccc;
    plVar5 = (long *)___cxa_begin_catch();
    lVar11 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,*unaff_x23);
  } while (lVar11 == 0);
  func_0x00f78ac0(lVar11,0);
code_r0x014b9ccc:
  auVar15 = __Unwind_Resume();
  plVar5 = auVar15._8_8_;
  lVar11 = auVar15._0_8_;
  if ((bRam0000000003eb4ae4 & 1) == 0) {
    func_0x00f78a20(0x3d32d50);
    func_0x00f78a20(0x3d32d58);
    func_0x00f78a20(0x3d32d60);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3b840);
    func_0x00f78a20(0x3d23c30);
    bRam0000000003eb4ae4 = 1;
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  aiStack_110[2] = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = **(undefined8 **)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
  if (*(long *)(lVar11 + 0x68) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_128,*(long *)(lVar11 + 0x68),uRam0000000003d3b840);
    uStack_f8 = uStack_120;
    uStack_100 = uStack_128;
    lStack_f0 = lStack_118;
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_100,uRam0000000003d32d58), lVar8 = lStack_f0,
          (uVar3 & 1) != 0) {
      if (lStack_f0 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba000;
      }
      if (0.0 < *(float *)(lStack_f0 + 0x40)) {
        if (plVar5 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014ba000;
        }
        lVar7 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x014b9e50;
            }
            piVar10 = piVar10 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b9e50:
        fVar13 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
        fVar13 = *(float *)(lVar8 + 0x40) - fVar13;
        *(float *)(lVar8 + 0x40) = fVar13;
        if (fVar13 <= 0.0) {
          Atlas_Gameplay_Pickups_PickupBox__SpawnBox(lVar8);
        }
      }
      Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox(lVar8);
    }
    aiStack_110[0] = 0x6f;
    aiStack_110[2] = 1;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_100,uRam0000000003d32d50);
    bVar2 = aiStack_110[0] == 0x6f;
    if (bVar2) {
      aiStack_110[2] = 0;
    }
    lVar8 = *(long *)(lVar11 + 0x98);
    if (lVar8 != 0) {
      uVar3 = 0;
      do {
        if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar3) {
          aiStack_110[(int)(uint)!bVar2] = 0xbd;
          aiStack_110[2] = aiStack_110[2] + 1;
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar4,0);
          return;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar3) {
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto code_r0x014ba000;
        }
        pfVar12 = (float *)(lVar8 + uVar3 * 4 + 0x20);
        fVar13 = *pfVar12;
        if (0.0 < fVar13) {
          if (plVar5 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014ba000;
          }
          lVar8 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto code_r0x014b9f58;
              }
              piVar10 = piVar10 + 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b9f58:
          fVar14 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
          *pfVar12 = fVar13 - fVar14;
          lVar8 = *(long *)(lVar11 + 0x98);
        }
        uVar3 = uVar3 + 1;
      } while (lVar8 != 0);
    }
    func_0x00f78af4();
  }
code_r0x014ba000:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ba004);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14b9cd0 | Atlas.Gameplay.Pickups.PickupManager.Update
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014b9eb0) */
/* WARNING: Removing unreachable block (ram,0x014b9ff4) */

void Atlas_Gameplay_Pickups_PickupManager__Update(long param_1,long *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  int aiStack_90 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb4ae4 & 1) == 0) {
    func_0x00f78a20(0x3d32d50);
    func_0x00f78a20(0x3d32d58);
    func_0x00f78a20(0x3d32d60);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3b840);
    func_0x00f78a20(0x3d23c30);
    bRam0000000003eb4ae4 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  aiStack_90[2] = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = **(undefined8 **)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar9,0);
  if (*(long *)(param_1 + 0x68) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(param_1 + 0x68),uRam0000000003d3b840);
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
    lStack_70 = lStack_98;
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32d58), lVar6 = lStack_70,
          (uVar3 & 1) != 0) {
      if (lStack_70 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba000;
      }
      if (0.0 < *(float *)(lStack_70 + 0x40)) {
        if (param_2 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014ba000;
        }
        lVar5 = *param_2;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_014b9e50;
            }
            piVar8 = piVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014b9e50:
        fVar11 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
        fVar11 = *(float *)(lVar6 + 0x40) - fVar11;
        *(float *)(lVar6 + 0x40) = fVar11;
        if (fVar11 <= 0.0) {
          Atlas_Gameplay_Pickups_PickupBox__SpawnBox(lVar6);
        }
      }
      Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox(lVar6);
    }
    aiStack_90[0] = 0x6f;
    aiStack_90[2] = 1;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32d50);
    bVar2 = aiStack_90[0] == 0x6f;
    if (bVar2) {
      aiStack_90[2] = 0;
    }
    lVar6 = *(long *)(param_1 + 0x98);
    if (lVar6 != 0) {
      uVar3 = 0;
      do {
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar3) {
          aiStack_90[(int)(uint)!bVar2] = 0xbd;
          aiStack_90[2] = aiStack_90[2] + 1;
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar9,0);
          return;
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
          uVar9 = func_0x00f78b24();
          func_0x00f78ac0(uVar9,0);
          goto code_r0x014ba000;
        }
        pfVar10 = (float *)(lVar6 + uVar3 * 4 + 0x20);
        fVar11 = *pfVar10;
        if (0.0 < fVar11) {
          if (param_2 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014ba000;
          }
          lVar6 = *param_2;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto code_r0x014b9f58;
              }
              piVar8 = piVar8 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b9f58:
          fVar12 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
          *pfVar10 = fVar11 - fVar12;
          lVar6 = *(long *)(param_1 + 0x98);
        }
        uVar3 = uVar3 + 1;
      } while (lVar6 != 0);
    }
    func_0x00f78af4();
  }
code_r0x014ba000:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ba004);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14ba0a8 | Atlas.Gameplay.Pickups.PickupManager.OnLoadPickupBoxSuccess
// ============================================================

/* WARNING: Possible PIC construction at 0x014ba11c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ba320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ba120) */
/* WARNING: Removing unreachable block (ram,0x014ba324) */

ulong Atlas_Gameplay_Pickups_PickupManager__OnLoadPickupBoxSuccess
                (long param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int extraout_w1;
  long *plVar11;
  undefined8 *puVar12;
  uint extraout_w8;
  uint uVar13;
  long extraout_x9;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_38;
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
  if ((bRam0000000003eb4ae5 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    bRam0000000003eb4ae5 = 1;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00f78af4();
LAB_014ba138:
    auVar17 = func_0x00f78e5c(param_2);
  }
  else {
    lStack_38 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
    if ((param_2 != (long *)0x0) && (*param_2 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) goto LAB_014ba138;
    param_3 = &lStack_38;
  }
  lVar7 = auVar17._8_8_;
  lVar4 = auVar17._0_8_;
  plVar11 = param_3;
  if ((bRam0000000003eb4ae6 & 1) == 0) {
    func_0x00f78a20(0x3d32d68);
    func_0x00f78a20(0x3d32d70);
    func_0x00f78a20(0x3d32d78);
    func_0x00f78a20(0x3d572e0);
    func_0x00f78a20(0x3d578c0);
    func_0x00f78a20(0x3d3b860);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ae6 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  if (*param_3 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar8 = (long *)___cxa_begin_catch();
      lVar7 = *plVar8;
      ___cxa_end_catch();
      uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003eb4000);
      if (lVar7 == 0) {
        return uVar5;
      }
      func_0x00f78ac0(lVar7,0);
    }
    auVar18 = __Unwind_Resume();
    puVar12 = auVar18._8_8_;
    auVar17._8_8_ = lVar7;
    auVar17._0_8_ = auVar18._0_8_;
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_f0,*param_3,uRam0000000003d3b860);
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    lStack_b0 = lStack_e0;
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d32d70);
      lVar9 = lStack_b0;
      if ((uVar5 & 1) == 0) {
        uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d32d68);
        return uVar5;
      }
      lVar14 = *(long *)(lVar4 + 0x78);
      lStack_c8 = lStack_b0;
      lStack_d0 = lVar14;
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar14,0,0);
      if ((uVar5 & 1) == 0) break;
      if (*(long *)(lVar4 + 0x18) == 0) {
        func_0x00f78af4();
        goto code_r0x014ba380;
      }
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba380;
      }
      lVar14 = *(long *)(*(long *)(lVar4 + 0x18) + 0x10);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba380;
      }
      lStack_d0 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,*(undefined8 *)(lVar9 + 0x20),uRam0000000003d572e0);
      if (lStack_d0 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba380;
      }
      if (lVar7 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba380;
      }
      uVar15 = *(undefined8 *)(lStack_d0 + 0x20);
      uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar7,0);
      uVar5 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar15,uVar6,0);
    } while ((uVar5 & 1) != 0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(lVar7,uRam0000000003d5b098);
    if (lVar7 == 0) {
      func_0x00f78af4();
code_r0x014ba380:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14ba384);
      (*pcVar2)();
    }
    uStack_d8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar7,uRam0000000003d578c0);
    puVar12 = &uStack_d8;
    plVar11 = &lStack_d0;
    param_4 = &lStack_c8;
  }
  lVar7 = auVar17._0_8_;
  if ((bRam0000000003eb4ae7 & 1) == 0) {
    func_0x00f78a20(0x3d2a4e0);
    func_0x00f78a20(0x3d1b688);
    func_0x00f78a20(0x3d3b830);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23c10);
    func_0x00f78a20(0x3d5b560);
    bRam0000000003eb4ae7 = 1;
  }
  lVar9 = func_0x00f78aec(/*Atlas.Gameplay.Pickups.PickupBox_TypeInfo*/ uRam0000000003d23c10);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar9,0);
  if (*(long *)(lVar7 + 0x50) == 0) goto code_r0x014ba5a4;
  uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x50) + 0x68);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar3 == 0) {
    uVar6 = 0xfffffffe;
  }
  else {
    if ((*(long *)(lVar7 + 0x50) == 0) || (*param_4 == 0)) goto code_r0x014ba5a4;
    lVar16 = *(long *)(*(long *)(lVar7 + 0x50) + 0x68);
    lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*param_4,0);
    if ((lVar14 == 0) || (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar14,0), lVar16 == 0)) goto code_r0x014ba5a4;
    uVar6 = /*BattleAIMapBoundsBehaviour$$GetNearestTargetAreaIndex*/ func_0x01539460(lVar16,0);
  }
  if (lVar9 == 0) {
code_r0x014ba5a4:
    uVar5 = func_0x00f78af4();
    return uVar5;
  }
  Atlas_Gameplay_Pickups_PickupBox__Init
            (lVar9,puVar12,plVar11,param_4,*(undefined8 *)(lVar7 + 0x18),uVar6);
  uVar6 = func_0x00f78aec(/*System.Action<PickupBox, KartComposite>_TypeInfo*/ uRam0000000003d1b688);
  /*System.Action<TabController.TabPanel, TabController.TabPanel>$$.ctor*/ func_0x01e6eb20(uVar6,lVar7,uRam0000000003d5b560,uRam0000000003d2a4e0);
  Atlas_Gameplay_Pickups_PickupBox__add_OnBoxHit(lVar9,uVar6);
  uVar5 = *(ulong *)(lVar7 + 0x68);
  if (uVar5 == 0) goto code_r0x014ba5a4;
  lVar7 = *(long *)(uVar5 + 0x10);
  puVar12 = puRam0000000003d3b830;
  uVar1 = auVar17._8_8_;
  if (lVar7 == 0) {
code_r0x0242716c:
    lVar9 = lVar4;
    uVar5 = uVar1;
    uVar10 = func_0x00f78af4();
    lVar7 = extraout_x9;
    uVar13 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar5 + 0x18) = uVar13 + 1;
  }
  else {
    uVar13 = *(uint *)(uVar5 + 0x18);
    uVar10 = uVar5;
    if (uVar13 != *(uint *)(lVar7 + 0x18)) goto code_r0x02427170;
    puVar12 = *(undefined8 **)(*(long *)(puRam0000000003d3b830[3] + 0xc0) + 0x60);
    uVar10 = (*(code *)*puVar12)(uVar5,uVar13 + 1);
    lVar7 = *(long *)(uVar5 + 0x10);
    uVar13 = *(uint *)(uVar5 + 0x18);
    *(uint *)(uVar5 + 0x18) = uVar13 + 1;
    uVar1 = uVar5;
    lVar4 = lVar9;
    if (lVar7 == 0) goto code_r0x0242716c;
  }
  if (uVar13 < *(uint *)(lVar7 + 0x18)) {
    *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20) = lVar9;
    *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
    return uVar10;
  }
  uVar6 = func_0x00f78b24();
  auVar17 = func_0x00f78ac0(uVar6,0);
  lVar7 = auVar17._8_8_;
  lVar4 = auVar17._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x48))(lVar7,0x14);
  if (lVar4 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar2)();
  }
  pcVar2 = (code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x28);
  lVar9 = *(long *)(*(long *)(puVar12[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar9);
  }
  if (lVar7 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = func_0x00f78adc(lVar7,lVar9);
    if (lVar14 == 0) {
      func_0x00f78e5c(lVar7,lVar9);
      goto code_r0x0242734c;
    }
  }
  (*pcVar2)(lVar4,lVar14,*(undefined8 *)(*(long *)(puVar12[3] + 0xc0) + 0x28));
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x68))(lVar4);
  return (ulong)(iVar3 - 1);
}



// ============================================================
// RVA: 0x14ba140 | Atlas.Gameplay.Pickups.PickupManager.CreatePickupSpotsAndBoxes
// ============================================================

/* WARNING: Possible PIC construction at 0x014ba320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ba324) */

ulong Atlas_Gameplay_Pickups_PickupManager__CreatePickupSpotsAndBoxes
                (long param_1,ulong param_2,long *param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  int extraout_w1;
  long *plVar9;
  undefined8 *puVar10;
  uint extraout_w8;
  uint uVar11;
  long extraout_x9;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  plVar9 = param_3;
  if ((bRam0000000003eb4ae6 & 1) == 0) {
    func_0x00f78a20(0x3d32d68);
    func_0x00f78a20(0x3d32d70);
    func_0x00f78a20(0x3d32d78);
    func_0x00f78a20(0x3d572e0);
    func_0x00f78a20(0x3d578c0);
    func_0x00f78a20(0x3d3b860);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ae6 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if (*param_3 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      puVar6 = (ulong *)___cxa_begin_catch();
      param_2 = *puVar6;
      ___cxa_end_catch();
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003eb4000);
      if (param_2 == 0) {
        return uVar3;
      }
      func_0x00f78ac0(param_2,0);
    }
    auVar15 = __Unwind_Resume();
    puVar10 = auVar15._8_8_;
    lVar5 = auVar15._0_8_;
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_b0,*param_3,uRam0000000003d3b860);
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    lStack_70 = lStack_a0;
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32d70);
      lVar5 = lStack_70;
      if ((uVar3 & 1) == 0) {
        uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32d68);
        return uVar3;
      }
      lVar12 = *(long *)(param_1 + 0x78);
      lStack_88 = lStack_70;
      lStack_90 = lVar12;
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0,0);
      if ((uVar3 & 1) == 0) break;
      if (*(long *)(param_1 + 0x18) == 0) {
        func_0x00f78af4();
        goto code_r0x014ba380;
      }
      if (lVar5 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba380;
      }
      lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
      if (lVar12 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba380;
      }
      lStack_90 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,*(undefined8 *)(lVar5 + 0x20),uRam0000000003d572e0);
      if (lStack_90 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba380;
      }
      if (param_2 == 0) {
        func_0x00f78af4();
        goto code_r0x014ba380;
      }
      uVar13 = *(undefined8 *)(lStack_90 + 0x20);
      uVar4 = /*UnityEngine.Object$$get_name*/ func_0x03244608(param_2,0);
      uVar3 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar13,uVar4,0);
    } while ((uVar3 & 1) != 0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(param_2,uRam0000000003d5b098);
    if (lVar5 == 0) {
      func_0x00f78af4();
code_r0x014ba380:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14ba384);
      (*pcVar1)();
    }
    uStack_98 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d578c0);
    puVar10 = &uStack_98;
    plVar9 = &lStack_90;
    param_4 = &lStack_88;
    lVar5 = param_1;
  }
  if ((bRam0000000003eb4ae7 & 1) == 0) {
    func_0x00f78a20(0x3d2a4e0);
    func_0x00f78a20(0x3d1b688);
    func_0x00f78a20(0x3d3b830);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23c10);
    func_0x00f78a20(0x3d5b560);
    bRam0000000003eb4ae7 = 1;
  }
  lVar12 = func_0x00f78aec(/*Atlas.Gameplay.Pickups.PickupBox_TypeInfo*/ uRam0000000003d23c10);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar12,0);
  if (*(long *)(lVar5 + 0x50) == 0) goto code_r0x014ba5a4;
  uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + 0x68);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if (iVar2 == 0) {
    uVar4 = 0xfffffffe;
  }
  else {
    if ((*(long *)(lVar5 + 0x50) == 0) || (*param_4 == 0)) goto code_r0x014ba5a4;
    lVar14 = *(long *)(*(long *)(lVar5 + 0x50) + 0x68);
    lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*param_4,0);
    if ((lVar7 == 0) || (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0), lVar14 == 0)) goto code_r0x014ba5a4;
    uVar4 = /*BattleAIMapBoundsBehaviour$$GetNearestTargetAreaIndex*/ func_0x01539460(lVar14,0);
  }
  if (lVar12 == 0) {
code_r0x014ba5a4:
    uVar3 = func_0x00f78af4();
    return uVar3;
  }
  Atlas_Gameplay_Pickups_PickupBox__Init
            (lVar12,puVar10,plVar9,param_4,*(undefined8 *)(lVar5 + 0x18),uVar4);
  uVar4 = func_0x00f78aec(/*System.Action<PickupBox, KartComposite>_TypeInfo*/ uRam0000000003d1b688);
  /*System.Action<TabController.TabPanel, TabController.TabPanel>$$.ctor*/ func_0x01e6eb20(uVar4,lVar5,uRam0000000003d5b560,uRam0000000003d2a4e0);
  Atlas_Gameplay_Pickups_PickupBox__add_OnBoxHit(lVar12,uVar4);
  uVar3 = *(ulong *)(lVar5 + 0x68);
  if (uVar3 == 0) goto code_r0x014ba5a4;
  lVar5 = *(long *)(uVar3 + 0x10);
  puVar10 = puRam0000000003d3b830;
  if (lVar5 == 0) {
code_r0x0242716c:
    lVar12 = param_1;
    uVar3 = param_2;
    uVar8 = func_0x00f78af4();
    lVar5 = extraout_x9;
    uVar11 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar3 + 0x18) = uVar11 + 1;
  }
  else {
    uVar11 = *(uint *)(uVar3 + 0x18);
    uVar8 = uVar3;
    if (uVar11 != *(uint *)(lVar5 + 0x18)) goto code_r0x02427170;
    puVar10 = *(undefined8 **)(*(long *)(puRam0000000003d3b830[3] + 0xc0) + 0x60);
    uVar8 = (*(code *)*puVar10)(uVar3,uVar11 + 1);
    lVar5 = *(long *)(uVar3 + 0x10);
    uVar11 = *(uint *)(uVar3 + 0x18);
    *(uint *)(uVar3 + 0x18) = uVar11 + 1;
    param_2 = uVar3;
    param_1 = lVar12;
    if (lVar5 == 0) goto code_r0x0242716c;
  }
  if (uVar11 < *(uint *)(lVar5 + 0x18)) {
    *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20) = lVar12;
    *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
    return uVar8;
  }
  uVar4 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar4,0);
  lVar12 = auVar15._8_8_;
  lVar5 = auVar15._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(lVar12,0x14);
  if (lVar5 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar1)();
  }
  pcVar1 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
  lVar7 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if (lVar12 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = func_0x00f78adc(lVar12,lVar7);
    if (lVar14 == 0) {
      func_0x00f78e5c(lVar12,lVar7);
      goto code_r0x0242734c;
    }
  }
  (*pcVar1)(lVar5,lVar14,*(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28));
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar5);
  return (ulong)(iVar2 - 1);
}



// ============================================================
// RVA: 0x14ba3f4 | Atlas.Gameplay.Pickups.PickupManager.CreatePickupBox
// ============================================================

ulong Atlas_Gameplay_Pickups_PickupManager__CreatePickupBox
                (long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  uint uVar8;
  long extraout_x9;
  ulong unaff_x19;
  long unaff_x20;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000003eb4ae7 & 1) == 0) {
    func_0x00f78a20(0x3d2a4e0);
    func_0x00f78a20(0x3d1b688);
    func_0x00f78a20(0x3d3b830);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23c10);
    func_0x00f78a20(0x3d5b560);
    bRam0000000003eb4ae7 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Gameplay.Pickups.PickupBox_TypeInfo*/ uRam0000000003d23c10);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar2,0);
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_014ba5a4;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x68);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
  if (iVar1 == 0) {
    uVar10 = 0xfffffffe;
  }
  else {
    if ((*(long *)(param_1 + 0x50) == 0) || (*param_4 == 0)) goto LAB_014ba5a4;
    lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 0x68);
    lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*param_4,0);
    if ((lVar3 == 0) || (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0), lVar11 == 0)) goto LAB_014ba5a4;
    uVar10 = /*BattleAIMapBoundsBehaviour$$GetNearestTargetAreaIndex*/ func_0x01539460(lVar11,0);
  }
  if (lVar2 == 0) {
LAB_014ba5a4:
    uVar4 = func_0x00f78af4();
    return uVar4;
  }
  Atlas_Gameplay_Pickups_PickupBox__Init
            (lVar2,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x18),uVar10);
  uVar10 = func_0x00f78aec(/*System.Action<PickupBox, KartComposite>_TypeInfo*/ uRam0000000003d1b688);
  /*System.Action<TabController.TabPanel, TabController.TabPanel>$$.ctor*/ func_0x01e6eb20(uVar10,param_1,uRam0000000003d5b560,uRam0000000003d2a4e0);
  Atlas_Gameplay_Pickups_PickupBox__add_OnBoxHit(lVar2,uVar10);
  uVar4 = *(ulong *)(param_1 + 0x68);
  if (uVar4 == 0) goto LAB_014ba5a4;
  lVar3 = *(long *)(uVar4 + 0x10);
  puVar7 = puRam0000000003d3b830;
  if (lVar3 == 0) {
code_r0x0242716c:
    lVar2 = unaff_x20;
    uVar4 = unaff_x19;
    uVar5 = func_0x00f78af4();
    lVar3 = extraout_x9;
    uVar8 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar4 + 0x18) = uVar8 + 1;
  }
  else {
    uVar8 = *(uint *)(uVar4 + 0x18);
    uVar5 = uVar4;
    if (uVar8 != *(uint *)(lVar3 + 0x18)) goto code_r0x02427170;
    puVar7 = *(undefined8 **)(*(long *)(puRam0000000003d3b830[3] + 0xc0) + 0x60);
    uVar5 = (*(code *)*puVar7)(uVar4,uVar8 + 1);
    lVar3 = *(long *)(uVar4 + 0x10);
    uVar8 = *(uint *)(uVar4 + 0x18);
    *(uint *)(uVar4 + 0x18) = uVar8 + 1;
    unaff_x19 = uVar4;
    unaff_x20 = lVar2;
    if (lVar3 == 0) goto code_r0x0242716c;
  }
  if (uVar8 < *(uint *)(lVar3 + 0x18)) {
    *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20) = lVar2;
    *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
    return uVar5;
  }
  uVar10 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar10,0);
  lVar3 = auVar12._8_8_;
  lVar2 = auVar12._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(lVar3,0x14);
  if (lVar2 != 0) {
    pcVar9 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
    lVar11 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = func_0x00f78adc(lVar3,lVar11);
      if (lVar6 == 0) {
        func_0x00f78e5c(lVar3,lVar11);
        goto code_r0x0242734c;
      }
    }
    (*pcVar9)(lVar2,lVar6,*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar2);
    return (ulong)(iVar1 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar9)();
}



// ============================================================
// RVA: 0x14ba5a8 | Atlas.Gameplay.Pickups.PickupManager.OnLoadPickupBoxFailure
// ============================================================

void Atlas_Gameplay_Pickups_PickupManager__OnLoadPickupBoxFailure(void)

{
  return;
}



// ============================================================
// RVA: 0x14ba5ac | Atlas.Gameplay.Pickups.PickupManager.OnBoxHit
// ============================================================

/* WARNING: Possible PIC construction at 0x014ba728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baa58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bac3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bac68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bad88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baf04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ba6b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ba708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ba6b4) */
/* WARNING: Removing unreachable block (ram,0x014baed8) */
/* WARNING: Removing unreachable block (ram,0x014baee0) */
/* WARNING: Removing unreachable block (ram,0x014baeec) */
/* WARNING: Removing unreachable block (ram,0x014baef8) */
/* WARNING: Removing unreachable block (ram,0x014baefc) */
/* WARNING: Removing unreachable block (ram,0x014bad8c) */
/* WARNING: Removing unreachable block (ram,0x014bad90) */
/* WARNING: Removing unreachable block (ram,0x014bad98) */
/* WARNING: Removing unreachable block (ram,0x014bada0) */
/* WARNING: Removing unreachable block (ram,0x014badb4) */
/* WARNING: Removing unreachable block (ram,0x014badbc) */
/* WARNING: Removing unreachable block (ram,0x014badc4) */
/* WARNING: Removing unreachable block (ram,0x0185d89c) */
/* WARNING: Removing unreachable block (ram,0x0185d8b0) */
/* WARNING: Removing unreachable block (ram,0x0185d8b8) */
/* WARNING: Removing unreachable block (ram,0x0185d8bc) */
/* WARNING: Removing unreachable block (ram,0x0185d8cc) */
/* WARNING: Removing unreachable block (ram,0x0185d8d8) */
/* WARNING: Removing unreachable block (ram,0x0185d8dc) */
/* WARNING: Removing unreachable block (ram,0x0185d69c) */
/* WARNING: Removing unreachable block (ram,0x0185d6b0) */
/* WARNING: Removing unreachable block (ram,0x0185d6b8) */
/* WARNING: Removing unreachable block (ram,0x0185d6bc) */
/* WARNING: Removing unreachable block (ram,0x0185d6cc) */
/* WARNING: Removing unreachable block (ram,0x0185d6d8) */
/* WARNING: Removing unreachable block (ram,0x0185d6dc) */
/* WARNING: Removing unreachable block (ram,0x0185d4d4) */
/* WARNING: Removing unreachable block (ram,0x0185d4e8) */
/* WARNING: Removing unreachable block (ram,0x0185d4f0) */
/* WARNING: Removing unreachable block (ram,0x0185d4f4) */
/* WARNING: Removing unreachable block (ram,0x0185d504) */
/* WARNING: Removing unreachable block (ram,0x0185d510) */
/* WARNING: Removing unreachable block (ram,0x0185d514) */
/* WARNING: Removing unreachable block (ram,0x014bac6c) */
/* WARNING: Removing unreachable block (ram,0x014bad0c) */
/* WARNING: Removing unreachable block (ram,0x014bac70) */
/* WARNING: Removing unreachable block (ram,0x014bac78) */
/* WARNING: Removing unreachable block (ram,0x014bac80) */
/* WARNING: Removing unreachable block (ram,0x014bac88) */
/* WARNING: Removing unreachable block (ram,0x014baca0) */
/* WARNING: Removing unreachable block (ram,0x014bacb4) */
/* WARNING: Removing unreachable block (ram,0x014baccc) */
/* WARNING: Removing unreachable block (ram,0x014bacd4) */
/* WARNING: Removing unreachable block (ram,0x014bacd8) */
/* WARNING: Removing unreachable block (ram,0x014bace8) */
/* WARNING: Removing unreachable block (ram,0x014bac40) */
/* WARNING: Removing unreachable block (ram,0x014bac48) */
/* WARNING: Removing unreachable block (ram,0x014bac54) */
/* WARNING: Removing unreachable block (ram,0x014baa5c) */
/* WARNING: Removing unreachable block (ram,0x014baa3c) */
/* WARNING: Removing unreachable block (ram,0x014ba72c) */
/* WARNING: Removing unreachable block (ram,0x014ba748) */
/* WARNING: Removing unreachable block (ram,0x014ba730) */
/* WARNING: Removing unreachable block (ram,0x014ba70c) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Pickups_PickupManager__OnBoxHit
                 (long param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  code *pcVar1;
  long **pplVar2;
  long **pplVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar11;
  long *plVar12;
  int iVar9;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar10;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  int extraout_w1;
  long extraout_x1;
  long lVar20;
  undefined8 uVar21;
  undefined8 extraout_x1_00;
  int extraout_w1_00;
  long *extraout_x1_01;
  int extraout_w1_01;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  uint extraout_w8;
  long lVar25;
  undefined8 *extraout_x8;
  long extraout_x9;
  ulong uVar26;
  int *piVar27;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar28;
  long *plVar29;
  long *unaff_x22;
  undefined8 unaff_x23;
  code *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar30;
  undefined1 *puVar31;
  undefined *puVar32;
  float fVar33;
  float extraout_s0;
  float fVar34;
  ulong extraout_d0;
  ulong unaff_d8;
  uint uVar35;
  undefined4 uVar36;
  ulong unaff_d9;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  long *plStack_f0;
  long *plStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [14];
  short sStack_52;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  auVar38._8_8_ = param_3;
  auVar38._0_8_ = param_1;
  puVar5 = auStack_60;
  pppppppuVar30 = (undefined8 *******)&stack0xfffffffffffffff0;
  sStack_52 = 0;
  plVar22 = param_3;
  if ((param_3 == (long *)0x0) || (unaff_x21 = param_1, *(long *)(param_1 + 0x40) == 0)) {
LAB_014ba710:
    puVar32 = &Atlas_Gameplay_Pickups_PickupManager__RollPickup;
    auVar38 = func_0x00f78af4();
    plVar12 = plVar22;
    param_2 = unaff_x19;
    param_3 = unaff_x20;
    param_1 = unaff_x21;
  }
  else {
    plVar22 = (long *)0x0;
    /*Atlas.Stats.AtlasStats$$OnBoxHit*/ func_0x0146f0a4(*(long *)(param_1 + 0x40),param_3[0x12]);
    lStack_48 = param_3[10];
    lStack_50 = param_3[9];
    lStack_38 = param_3[0xc];
    lStack_40 = param_3[0xb];
    iVar8 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&lStack_50,0);
    unaff_x19 = param_2;
    unaff_x20 = param_3;
    if (iVar8 == 0) {
LAB_014ba63c:
      if (param_2 != (long *)0x0) {
        plVar22 = (long *)Atlas_Gameplay_Pickups_PickupBox__DeSpawnBox(param_2);
        return plVar22;
      }
      goto LAB_014ba710;
    }
    if (param_3[0x12] == 0) goto LAB_014ba710;
    if (*(char *)(param_3[0x12] + 0x98) != '\0') goto LAB_014ba63c;
    if (param_3[7] == 0) goto LAB_014ba710;
    uVar11 = Atlas_Gameplay_Kart_KartUsableManager__get_HasUsableEquipped(param_3[7],0);
    if ((uVar11 & 1) != 0) goto LAB_014ba63c;
    if (param_3[7] == 0) goto LAB_014ba710;
    uVar11 = Atlas_Gameplay_Kart_KartUsableManager__get_IsShuffling(param_3[7],0);
    if ((uVar11 & 1) != 0) goto LAB_014ba63c;
    if (param_2 == (long *)0x0) goto LAB_014ba710;
    *(long *)(param_1 + 0xa0) = param_2[7];
    iVar8 = Atlas_Gameplay_Kart_KartComposite__get_IsAI(param_3,0);
    lVar20 = 0x30;
    if (iVar8 == 0) {
      lVar20 = 0x28;
    }
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar13 == 0)) goto LAB_014ba710;
    plVar12 = *(long **)((long)param_2 + lVar20);
    iVar8 = /*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar13,0);
    unaff_x22 = plVar12;
    if (iVar8 == 0) {
      if ((plVar12 != (long *)0x0) && (*(long *)(param_1 + 0x28) != 0)) {
        plVar22 = (long *)&sStack_52;
        param_4 = (undefined8 *)0x0;
        /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x28),plVar12[3]);
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (plVar12 = *(long **)(*(long *)(param_1 + 0x30) + 0x20), plVar12 != (long *)0x0)) {
          plVar22 = *(long **)(*plVar12 + 0x210);
          (**(code **)(*plVar12 + 0x208))(plVar12,(long)sStack_52);
          plVar23 = (long *)param_3[0x12];
          if (plVar23 != (long *)0x0) {
            lVar20 = 0;
            puVar32 = &UNK_014ba70c;
            goto code_r0x015a561c;
          }
        }
      }
      goto LAB_014ba710;
    }
    puVar32 = &UNK_014ba6b4;
  }
  plVar29 = auVar38._8_8_;
  lVar20 = auVar38._0_8_;
  pppppppuStack_90 = &pppppppuStack_70;
  puStack_88 = &UNK_014ba72c;
  plVar22 = (long *)0x3eb4000;
  plVar23 = plVar12;
  plStack_80 = param_3;
  plStack_78 = param_2;
  pppppppuStack_70 = pppppppuVar30;
  puStack_68 = puVar32;
  if ((bRam0000000003eb4ae9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ae9 = 1;
  }
  uVar11 = unaff_d8;
  uVar26 = unaff_d9;
  if ((*(long *)(lVar20 + 0x10) != 0) &&
     (lVar13 = *(long *)(*(long *)(lVar20 + 0x10) + 0x1d0), lVar13 != 0)) {
    plVar22 = *(long **)(lVar13 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar23 = (long *)0x0;
    iVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar22,0);
    if (iVar8 == 0) {
      if ((plVar29 != (long *)0x0) && (plVar29[0x12] != 0)) {
        fVar34 = (float)*(int *)(plVar29[0x12] + 0x74);
code_r0x014ba870:
        uVar11 = (ulong)(uint)fVar34;
        pplVar3 = &plStack_80;
        pppppppuVar30 = pppppppuStack_90;
        puVar32 = puStack_88;
        auVar41 = auVar38;
        goto code_r0x014babd0;
      }
    }
    else if ((plVar29 != (long *)0x0) && (lVar13 = plVar29[0x12], lVar13 != 0)) {
      uVar10 = *(uint *)(lVar13 + 0x6c);
      uVar11 = (ulong)uVar10;
      uVar35 = *(uint *)(lVar13 + 0x70);
      uVar26 = (ulong)uVar35;
      iVar8 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar13,0);
      if (plVar22 != (long *)0x0) {
        plVar23 = (long *)0x0;
        fVar33 = (float)/*Atlas.Gameplay.RaceSplineRootBehaviour$$GetDistanceAtTrackCoord*/ func_0x014dd0e4(uVar10,uVar35,plVar22,iVar8 + -1);
        if ((*(long *)(lVar20 + 0x10) != 0) &&
           (lVar13 = *(long *)(*(long *)(lVar20 + 0x10) + 0x40), lVar13 != 0)) {
          plVar23 = (long *)0x0;
          lVar13 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetNthPlacedPlayer*/ func_0x015a3554(lVar13,1);
          uVar11 = (ulong)(uint)fVar33;
          if (lVar13 != 0) {
            uVar36 = *(undefined4 *)(lVar13 + 0x6c);
            uVar37 = *(undefined4 *)(lVar13 + 0x70);
            iVar8 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar13,0);
            fVar34 = (float)/*Atlas.Gameplay.RaceSplineRootBehaviour$$GetDistanceAtTrackCoord*/ func_0x014dd0e4(uVar36,uVar37,plVar22,iVar8 + -1,0);
            fVar34 = fVar34 - fVar33;
            goto code_r0x014ba870;
          }
        }
      }
    }
  }
  func_0x00f78af4();
  pplVar2 = &plStack_f0;
  puStack_d8 = &Atlas_Gameplay_Pickups_PickupManager__OnUsablePickedUp;
  pppppppuVar30 = &pppppppuStack_e0;
  plVar18 = plVar23;
  plStack_f0 = plVar29;
  plStack_e8 = plVar12;
  pppppppuStack_e0 = &pppppppuStack_90;
  plVar12 = (long *)/*Atlas.Gameplay.Pickups.PickupManager$$IncrementUsableInPlay*/ func_0x014baac8();
  if ((int)plVar12 == 0) {
    return plVar12;
  }
  if ((extraout_x1 == 0) || (plVar23 == (long *)0x0)) {
    puVar32 = &Atlas_Gameplay_Pickups_PickupManager__RollPickupForRemote;
    auVar39 = func_0x00f78af4();
    auVar40._8_8_ = plVar18;
    auVar40._0_8_ = extraout_x1;
    unaff_d8 = uVar11;
    unaff_d9 = uVar26;
    while( true ) {
      unaff_x22 = auVar40._8_8_;
      param_1 = auVar39._8_8_;
      lVar13 = auVar39._0_8_;
      puVar6 = (undefined1 *)((long)pplVar2 + -0x70);
      *(code **)((long)pplVar2 + -0x40) = unaff_x24;
      *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
      *(long **)((long)pplVar2 + -0x30) = plVar22;
      *(long *)((long)pplVar2 + -0x28) = lVar20;
      *(long *)((long)pplVar2 + -0x20) = auVar40._0_8_;
      *(long **)((long)pplVar2 + -0x18) = plVar23;
      *(undefined8 ********)((long)pplVar2 + -0x10) = pppppppuVar30;
      *(undefined **)((long)pplVar2 + -8) = puVar32;
      puVar31 = (undefined1 *)((long)pplVar2 + -0x10);
      unaff_x23 = 0x3eb4000;
      plVar12 = unaff_x22;
      if ((bRam0000000003eb4ae8 & 1) == 0) {
        func_0x00f78a20(0x3d328c8);
        func_0x00f78a20(0x3d328d0);
        func_0x00f78a20(0x3d328d8);
        func_0x00f78a20(0x3d572f0);
        func_0x00f78a20(0x3d3ae20);
        bRam0000000003eb4ae8 = 1;
      }
      *(undefined8 *)((long)pplVar2 + -0x50) = 0;
      *(undefined8 *)((long)pplVar2 + -0x48) = 0;
      *(undefined8 *)((long)pplVar2 + -0x60) = 0;
      *(undefined8 *)((long)pplVar2 + -0x58) = 0;
      *param_4 = 0;
      if (*(long *)(lVar13 + 0x28) != 0) break;
code_r0x014baa68:
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        param_4 = (undefined8 *)___cxa_begin_catch();
        param_4 = (undefined8 *)*param_4;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)pplVar2 + -0x60),uRam0000000003d328c8);
        if (param_4 == (undefined8 *)0x0) {
          return (long *)0x0;
        }
      }
      else {
        __Unwind_Resume();
      }
      auVar38 = func_0x00f78ac0(param_4,0);
      plVar22 = auVar38._8_8_;
      puVar15 = auVar38._0_8_;
      pplVar3 = (long **)((long)pplVar2 + -0xa0);
      *(long **)((long)pplVar2 + -0xa0) = unaff_x22;
      *(long *)((long)pplVar2 + -0x98) = param_1;
      *(long *)((long)pplVar2 + -0x90) = lVar13;
      *(undefined8 **)((long)pplVar2 + -0x88) = param_4;
      *(undefined1 **)((long)pplVar2 + -0x80) = puVar31;
      *(undefined **)((long)pplVar2 + -0x78) =
           &Atlas_Gameplay_Pickups_PickupManager__IncrementUsableInPlay;
      if (*(char *)(puVar15 + 0x15) == '\0') goto code_r0x014babac;
      if (plVar22 == (long *)0x0) {
code_r0x014babc0:
        func_0x00f78af4();
      }
      else {
        param_1 = (**(code **)(*plVar22 + 0x188))(plVar22,*(undefined8 *)(*plVar22 + 400));
        unaff_x22 = (long *)puVar15[9];
        uVar21 = (**(code **)(*plVar22 + 0x188))(plVar22,*(undefined8 *)(*plVar22 + 400));
        param_4 = puVar15;
        if (unaff_x22 == (long *)0x0) goto code_r0x014babc0;
        iVar8 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(unaff_x22,uVar21);
        lVar20 = plVar22[4];
        uVar10 = (uint)param_1;
        if (iVar8 == 0) {
code_r0x014bab7c:
          if (*(int *)((long)plVar22 + 0x4c) < 1) {
code_r0x014babac:
            return (long *)((long)&MACH_HEADER.magic + 1);
          }
          lVar13 = puVar15[0x12];
          if (lVar13 != 0) {
            if (uVar10 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)uVar10 * 4;
              *(int *)(lVar13 + 0x20) = *(int *)(lVar13 + 0x20) + (int)lVar20;
              goto code_r0x014babac;
            }
            goto code_r0x014babc4;
          }
          goto code_r0x014babc0;
        }
        lVar25 = puVar15[0x11];
        lVar13 = lVar25 + (long)(int)uVar10 * 4;
        if (iVar8 < 1) {
          if (lVar25 == 0) goto code_r0x014babc0;
code_r0x014bab64:
          if (uVar10 < *(uint *)(lVar25 + 0x18)) {
            *(int *)(lVar13 + 0x20) = *(int *)(lVar13 + 0x20) + (int)lVar20;
            goto code_r0x014bab7c;
          }
        }
        else {
          if (lVar25 == 0) goto code_r0x014babc0;
          if (uVar10 < *(uint *)(lVar25 + 0x18)) {
            if (iVar8 <= *(int *)(lVar13 + 0x20)) {
              return (long *)0x0;
            }
            goto code_r0x014bab64;
          }
        }
      }
code_r0x014babc4:
      auVar41._8_8_ = plVar22;
      auVar41._0_8_ = param_4;
      uVar21 = func_0x00f78b24();
      uVar21 = func_0x00f78ac0(uVar21,0);
      auVar38._8_8_ = extraout_x1_00;
      auVar38._0_8_ = uVar21;
      pppppppuVar30 = (undefined8 *******)((long)pplVar2 + -0x80);
      puVar32 = &Atlas_Gameplay_Pickups_PickupManager__RollUsableTable;
      uVar11 = extraout_d0;
code_r0x014babd0:
      puVar15 = auVar38._0_8_;
      puVar4 = (undefined1 *)((long)pplVar3 + -0x50);
      *(ulong *)((long)pplVar3 + -0x50) = unaff_d9;
      *(ulong *)((long)pplVar3 + -0x48) = unaff_d8;
      *(code **)((long)pplVar3 + -0x40) = unaff_x24;
      *(undefined8 *)((long)pplVar3 + -0x38) = unaff_x23;
      *(long **)((long)pplVar3 + -0x30) = unaff_x22;
      *(long *)((long)pplVar3 + -0x28) = param_1;
      *(long *)((long)pplVar3 + -0x20) = auVar41._8_8_;
      *(long *)((long)pplVar3 + -0x18) = auVar41._0_8_;
      *(undefined8 ********)((long)pplVar3 + -0x10) = pppppppuVar30;
      *(undefined **)((long)pplVar3 + -8) = puVar32;
      puVar31 = (undefined1 *)((long)pplVar3 + -0x10);
      unaff_d8 = uVar11 & 0xffffffff;
      uVar28 = 0x3eb4000;
      plVar23 = plVar12;
      if ((bRam0000000003eb4aeb & 1) == 0) {
        func_0x00f78a20(0x3d21270,auVar38._8_8_);
        func_0x00f78a20(0x3d57318);
        bRam0000000003eb4aeb = 1;
      }
      unaff_x22 = (long *)0x3d57318;
      unaff_x23 = 5;
      lVar20 = puVar15[0xc];
      if (lVar20 != 0) {
        fVar34 = (float)uVar11;
        puVar32 = &UNK_014bac40;
        param_4 = puVar15;
        plVar22 = plVar12;
code_r0x014baf20:
        *(long **)(puVar4 + -0x20) = plVar22;
        *(undefined8 **)(puVar4 + -0x18) = param_4;
        *(undefined1 **)(puVar4 + -0x10) = puVar31;
        *(undefined **)(puVar4 + -8) = puVar32;
        if ((plVar12 == (long *)0x0) || (lVar13 = plVar12[4], lVar13 == 0)) goto code_r0x014bafd8;
        iVar8 = (int)*(ulong *)(lVar13 + 0x18);
        if (iVar8 == 0) {
          if ((bRam0000000003eb4aee & 1) == 0) {
            func_0x00f78a20(0x3d75da8);
            bRam0000000003eb4aee = 1;
            return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
          }
          return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
        }
        uVar10 = iVar8 - 1;
        uVar11 = (ulong)uVar10;
        if ((int)uVar10 < 1) goto code_r0x014baf7c;
        uVar26 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
        piVar27 = (int *)(lVar13 + 0x20);
        goto code_r0x014baf58;
      }
      auVar40 = func_0x00f78af4();
      lVar20 = auVar40._8_8_;
      plVar22 = auVar40._0_8_;
      pplVar2 = (long **)((long)pplVar3 + -0xd0);
      auVar39._8_8_ = (undefined1 *)((long)pplVar3 + -0xd0);
      auVar39._0_8_ = plVar22;
      *(undefined8 *)((long)pplVar3 + -0x80) = 0x3d57318;
      *(undefined8 *)((long)pplVar3 + -0x78) = 0x3eb4000;
      *(long **)((long)pplVar3 + -0x70) = plVar12;
      *(undefined8 **)((long)pplVar3 + -0x68) = puVar15;
      *(undefined1 **)((long)pplVar3 + -0x60) = puVar31;
      *(undefined **)((long)pplVar3 + -0x58) =
           &Atlas_Gameplay_Pickups_PickupManager__OnUsableRequested;
      pppppppuVar30 = (undefined8 *******)((long)pplVar3 + -0x60);
      *(undefined8 *)((long)pplVar3 + -0xa8) = 0;
      *(undefined2 *)((long)pplVar3 + -0xaa) = 0;
      if ((plVar22[6] == 0) ||
         (lVar13 = *(long *)(plVar22[6] + 0x20), plVar12 = plVar22, lVar13 == 0)) {
        auVar38 = func_0x00f78af4();
        plVar22 = auVar38._8_8_;
        param_4 = auVar38._0_8_;
        puVar6 = (undefined1 *)((long)pplVar3 + -0x110);
        puVar4 = (undefined1 *)((long)pplVar3 + -0x110);
        *(undefined8 *)((long)pplVar3 + -0x100) = 0x3d57318;
        *(undefined8 *)((long)pplVar3 + -0xf8) = 0x3eb4000;
        *(long **)((long)pplVar3 + -0xf0) = plVar12;
        *(undefined8 **)((long)pplVar3 + -0xe8) = puVar15;
        *(undefined8 ********)((long)pplVar3 + -0xe0) = pppppppuVar30;
        *(undefined **)((long)pplVar3 + -0xd8) =
             &Atlas_Gameplay_Pickups_PickupManager__OnUsableResponse;
        puVar31 = (undefined1 *)((long)pplVar3 + -0xe0);
        uVar28 = 0x3eb4000;
        if ((bRam0000000003eb4aea & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d57318);
          bRam0000000003eb4aea = 1;
        }
        *(undefined8 *)((long)pplVar3 + -0x108) = 0;
        if ((param_4[6] != 0) && (lVar20 = *(long *)(param_4[6] + 0x20), lVar20 != 0)) {
          plVar12 = (long *)/*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar20,0);
          if (((ulong)plVar12 & 1) != 0) {
            return plVar12;
          }
          if (param_4[5] != 0) {
            plVar23 = (long *)((long)pplVar3 + -0x108);
            lVar20 = 0;
            plVar12 = (long *)/*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(param_4[5],plVar22);
            if ((int)plVar12 == 0) {
              return plVar12;
            }
            if (param_4[3] != 0) {
              lVar25 = *(long *)(param_4[3] + 0x10);
              uVar28 = *(undefined8 *)((long)pplVar3 + -0x108);
              auVar39._8_8_ = uVar28;
              auVar39._0_8_ = lVar25;
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar28,0);
              plVar22 = (long *)0x0;
              if (lVar25 != 0) {
                puVar32 = &UNK_014baed8;
                plVar22 = plRam0000000003d57318;
                goto code_r0x0185c46c;
              }
            }
          }
        }
        puVar32 = &Atlas_Gameplay_Pickups_PickupTable__Roll;
        lVar20 = func_0x00f78af4();
        plVar12 = extraout_x1_01;
        fVar34 = extraout_s0;
        goto code_r0x014baf20;
      }
      plVar22 = (long *)/*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar13,0);
      if ((int)plVar22 == 0) {
        return plVar22;
      }
      lVar13 = *plVar23;
      lVar14 = plVar23[3];
      lVar25 = plVar23[2];
      *(long *)((long)pplVar3 + -200) = plVar23[1];
      *(long *)((long)pplVar3 + -0xd0) = lVar13;
      *(long *)((long)pplVar3 + -0xb8) = lVar14;
      *(long *)((long)pplVar3 + -0xc0) = lVar25;
      param_4 = (undefined8 *)((long)pplVar3 + -0xa8);
      puVar32 = &UNK_014bad8c;
      plVar22 = unaff_x22;
    }
    plVar12 = (long *)((long)pplVar2 + -0x48);
    lVar20 = 0;
    plVar22 = (long *)/*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar13 + 0x28),unaff_x22);
    if ((int)plVar22 == 0) {
      return plVar22;
    }
    if (((*(long *)(lVar13 + 0x10) == 0) ||
        (lVar25 = *(long *)(*(long *)(lVar13 + 0x10) + 0x130), lVar25 == 0)) ||
       (lVar25 = *(long *)(lVar25 + 0x10), lVar25 == 0)) goto code_r0x014baa68;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)pplVar2 + -0x60),lVar25,uRam0000000003d3ae20);
    unaff_x23 = 0x3d328d0;
    do {
      uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)pplVar2 + -0x60),uRam0000000003d328d0);
      if ((uVar11 & 1) == 0) {
        unaff_x22 = (long *)0x0;
        break;
      }
      unaff_x22 = *(long **)((long)pplVar2 + -0x50);
      if (unaff_x22 == (long *)0x0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14baa68);
        (*pcVar1)();
      }
    } while (*(int *)((long)unaff_x22 + 0x54) != *(int *)(param_1 + 0xc));
    *(undefined4 *)((long)pplVar2 + -0x70) = 0x6a;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)pplVar2 + -0x60),uRam0000000003d328c8);
    if (*(int *)((long)pplVar2 + -0x70) == 0x6a) {
      *(undefined4 *)((long)pplVar2 + -0x68) = 0;
    }
    if (unaff_x22 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(long *)(lVar13 + 0x18) == 0) ||
       (lVar25 = *(long *)(*(long *)(lVar13 + 0x18) + 0x10), lVar25 == 0)) goto code_r0x014baa68;
    uVar21 = *(undefined8 *)((long)pplVar2 + -0x48);
    puVar32 = &UNK_014baa3c;
    plVar22 = plRam0000000003d572f0;
code_r0x0185c46c:
    *(long **)(puVar6 + -0x30) = unaff_x22;
    *(long *)(puVar6 + -0x28) = auVar39._8_8_;
    *(long *)(puVar6 + -0x20) = auVar39._0_8_;
    *(undefined8 **)(puVar6 + -0x18) = param_4;
    *(undefined1 **)(puVar6 + -0x10) = puVar31;
    *(undefined **)(puVar6 + -8) = puVar32;
    plVar12 = plVar22;
    if ((bRam0000000003eb64d5 & 1) == 0) {
      func_0x00f78a20(0x3d2e280);
      bRam0000000003eb64d5 = 1;
    }
    *(undefined8 *)(puVar6 + -0x40) = 0;
    *(undefined8 *)(puVar6 + -0x38) = 0;
    if (lVar25 != 0) {
      plVar12 = *(long **)plVar22[6];
      iVar8 = (*(code *)*plVar12)(lVar25,puVar6 + -0x38);
      if (iVar8 == 0) {
        return (long *)0x0;
      }
      if (*(long *)(puVar6 + -0x38) != 0) {
        lVar20 = *(long *)(*(long *)(puVar6 + -0x38) + 0x18);
        if (lVar20 == 0) {
          return (long *)0x0;
        }
        iVar8 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$TryGetValue*/ func_0x01e3dc3c(lVar20,uVar21,puVar6 + -0x40,lRam0000000003d2e280);
        if (iVar8 == 0) {
          return (long *)0x0;
        }
        lVar13 = *(long *)(puVar6 + -0x40);
        lVar20 = *(long *)(plVar22[6] + 8);
        if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar20);
        }
        if (lVar13 == 0) {
          return (long *)0x0;
        }
        plVar22 = (long *)func_0x00f78adc(lVar13,lVar20);
        if (plVar22 == (long *)0x0) {
          func_0x00f78e5c(lVar13,lVar20);
          return (long *)0x0;
        }
        return plVar22;
      }
    }
    auVar38 = func_0x00f78af4();
    lVar13 = auVar38._8_8_;
    *(undefined8 *)(puVar6 + -0x70) = 0x3eb6000;
    *(long *)(puVar6 + -0x68) = lVar25;
    *(undefined8 *)(puVar6 + -0x60) = uVar21;
    *(long **)(puVar6 + -0x58) = plVar22;
    *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x48) =
         &Core_Definitions_GameDefinitions__GetDefinitionList_UsableDefinition_;
    lVar25 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar25);
    }
    plVar22 = (long *)func_0x00f78aec(lVar25);
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))();
    if (auVar38._0_8_ != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x10))(auVar38._0_8_,plVar22);
      return plVar22;
    }
    auVar38 = func_0x00f78af4();
    lVar25 = auVar38._8_8_;
    plVar29 = auVar38._0_8_;
    *(code **)(puVar6 + -0xb0) = unaff_x24;
    *(undefined8 *)(puVar6 + -0xa8) = unaff_x23;
    *(undefined8 *)(puVar6 + -0xa0) = 0x3eb6000;
    *(long **)(puVar6 + -0x98) = plVar22;
    *(long *)(puVar6 + -0x90) = lVar13;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x50;
    *(undefined **)(puVar6 + -0x78) = &Core_Definitions_GameDefinitions__GetDefinitionList_object_;
    lVar13 = 0x3eb6000;
    plVar22 = plVar29;
    plVar23 = plVar12;
    if ((bRam0000000003eb64d6 & 1) == 0) {
      func_0x00f78a20(0x3d2e288);
      func_0x00f78a20(0x3d33bb0);
      func_0x00f78a20(0x3d33bb8);
      func_0x00f78a20(0x3d1c7a8);
      func_0x00f78a20(0x3d220f0);
      plVar22 = (long *)func_0x00f78a20(0x3d41958);
      bRam0000000003eb64d6 = 1;
    }
    *(undefined8 *)(puVar6 + -0xc0) = 0;
    *(undefined8 *)(puVar6 + -0xb8) = 0;
    *(undefined8 *)(puVar6 + -0xd0) = 0;
    *(undefined8 *)(puVar6 + -200) = 0;
    if (lVar25 == 0) {
      return plVar22;
    }
    if (plVar29 == (long *)0x0) {
code_r0x0185c7c8:
      func_0x00f78af4();
      goto code_r0x0185c7cc;
    }
    plVar23 = *(long **)plVar12[6];
    plVar22 = (long *)(*(code *)*plVar23)(plVar29,puVar6 + -0xb8);
    if ((int)plVar22 == 0) {
      return plVar22;
    }
    if (((*(long *)(puVar6 + -0xb8) == 0) ||
        (lVar14 = *(long *)(*(long *)(puVar6 + -0xb8) + 0x18), lVar14 == 0)) ||
       (lVar14 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$get_Values*/ func_0x01e3bed0(lVar14,uRam0000000003d2e288), lVar14 == 0)) goto code_r0x0185c7c8;
    /*System.Collections.Generic.Dictionary.ValueCollection<DefinitionID, object>$$GetEnumerator*/ func_0x01b8d894(puVar6 + -0xd0,lVar14,uRam0000000003d41958);
    unaff_x23 = 0x3d33bb0;
    while (uVar11 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, object>$$MoveNext*/ func_0x01fbc848(puVar6 + -0xd0,uRam0000000003d33bb0), (uVar11 & 1) != 0) {
      plVar29 = *(long **)(puVar6 + -0xc0);
      lVar13 = *(long *)(plVar12[6] + 8);
      unaff_x24 = (code *)**(undefined8 **)(plVar12[6] + 0x10);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (plVar29 == (long *)0x0) {
        lVar14 = 0;
      }
      else {
        lVar14 = func_0x00f78adc(plVar29,lVar13);
        if (lVar14 == 0) {
          func_0x00f78e5c(plVar29,lVar13);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x185c7c8);
          (*pcVar1)();
        }
      }
      plVar23 = *(long **)(plVar12[6] + 0x10);
      (*unaff_x24)(lVar25,lVar14);
    }
    plVar12 = (long *)0x0;
    do {
      *(long *)(puVar6 + -0xe0) = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8;
      uVar11 = (ulong)*(ushort *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + 0x12a);
      if (uVar11 != 0) {
        piVar27 = (int *)(*(long *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar15 = (undefined8 *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + (long)*piVar27 * 0x10 + 0x138);
            goto code_r0x0185c788;
          }
          piVar27 = piVar27 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      plVar23 = (long *)0x0;
      puVar15 = (undefined8 *)func_0x00fac1f0(puVar6 + -0xe0);
code_r0x0185c788:
      plVar22 = (long *)(*(code *)*puVar15)(puVar6 + -0xe0,puVar15[1]);
      if (plVar12 == (long *)0x0) {
        return plVar22;
      }
code_r0x0185c7cc:
      func_0x00f78ac0(plVar12,0);
      if (extraout_w1_00 != 1) goto code_r0x0185c7f8;
      puVar15 = (undefined8 *)___cxa_begin_catch();
      plVar12 = (long *)*puVar15;
      ___cxa_end_catch();
    } while( true );
  }
  lVar20 = *(long *)(extraout_x1 + 0x18);
  puVar5 = &stack0xffffffffffffff30;
  param_2 = plStack_e8;
  param_3 = plStack_f0;
  pppppppuVar30 = pppppppuStack_e0;
  puVar32 = puStack_d8;
code_r0x015a561c:
  *(long **)(puVar5 + -0x20) = param_3;
  *(long **)(puVar5 + -0x18) = param_2;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar30;
  *(undefined **)(puVar5 + -8) = puVar32;
  plVar22 = plVar23;
  if (plVar23[2] != 0) {
    lVar13 = *(long *)(plVar23[2] + 0x38);
    if (lVar13 == 0) {
      auVar38 = func_0x00f78af4(0,lVar20,0);
      plVar12 = auVar38._0_8_;
      *(long **)(puVar5 + -0x40) = plVar23;
      *(long **)(puVar5 + -0x38) = param_2;
      *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x28) =
           &Atlas_Gameplay_Player_GameContextPlayer__UsablePickedUpResponse;
      plVar22 = plVar12;
      if (plVar12[2] != 0) {
        lVar20 = *(long *)(plVar12[2] + 0x38);
        if (lVar20 == 0) {
          plVar22 = (long *)func_0x00f78af4();
          return plVar22;
        }
        plVar22 = (long *)Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData
                                    (lVar20,auVar38._8_8_,0);
        plVar12[0x18] = auVar38._8_8_;
      }
      return plVar22;
    }
    plVar22 = (long *)Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal(lVar13,lVar20,0);
    plVar23[0x18] = lVar20;
  }
  return plVar22;
code_r0x0185c7f8:
  auVar38 = __Unwind_Resume();
  *(long *)(puVar6 + -0x110) = lVar13;
  *(long **)(puVar6 + -0x108) = plVar29;
  *(long *)(puVar6 + -0x100) = lVar25;
  *(long **)(puVar6 + -0xf8) = plVar12;
  *(undefined1 **)(puVar6 + -0xf0) = puVar6 + -0x80;
  *(undefined **)(puVar6 + -0xe8) = &Core_Definitions_GameDefinitions__GetFirstDefinition_object_;
  if ((bRam0000000003eb64d7 & 1) == 0) {
    func_0x00f78a20(0x3d3a8b0);
    func_0x00f78a20(0x3d3a8b8);
    bRam0000000003eb64d7 = 1;
  }
  *(undefined8 *)(puVar6 + -0x118) = 0;
  if (auVar38._0_8_ != 0) {
    plVar23 = (long *)**(undefined8 **)(auVar38._8_8_ + 0x30);
    iVar8 = (*(code *)*plVar23)(auVar38._0_8_,puVar6 + -0x118);
    if (iVar8 == 0) {
      return (long *)0x0;
    }
    if ((*(long *)(puVar6 + -0x118) != 0) &&
       (lVar25 = *(long *)(*(long *)(puVar6 + -0x118) + 0x20), lVar25 != 0)) {
      if (*(int *)(lVar25 + 0x18) < 1) {
        return (long *)0x0;
      }
      lVar13 = *(long *)(*(long *)(lVar25 + 0x10) + 0x20);
      lVar20 = *(long *)(*(long *)(auVar38._8_8_ + 0x30) + 8);
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      if (lVar13 == 0) {
        return (long *)0x0;
      }
      plVar22 = (long *)func_0x00f78adc(lVar13,lVar20);
      if (plVar22 == (long *)0x0) {
        func_0x00f78e5c(lVar13,lVar20);
        return (long *)0x0;
      }
      return plVar22;
    }
  }
  auVar41 = func_0x00f78af4();
  *(long *)(puVar6 + -0x150) = lVar13;
  *(undefined8 *)(puVar6 + -0x148) = 0x3eb6000;
  *(undefined1 (*) [16])(puVar6 + -0x140) = auVar38;
  *(undefined1 **)(puVar6 + -0x130) = puVar6 + -0xf0;
  *(undefined **)(puVar6 + -0x128) =
       &Core_Definitions_GameDefinitions__GetRandomDefinition_WheelsDefinition_;
  uVar21 = 0x3eb6000;
  if ((bRam0000000003eb64d8 & 1) == 0) {
    func_0x00f78a20(0x3d3a8b0);
    func_0x00f78a20(0x3d3a8b8);
    bRam0000000003eb64d8 = 1;
  }
  *(undefined8 *)(puVar6 + -0x158) = 0;
  if (auVar41._0_8_ != 0) {
    plVar23 = (long *)**(undefined8 **)(auVar41._8_8_ + 0x30);
    iVar8 = (*(code *)*plVar23)(auVar41._0_8_,puVar6 + -0x158);
    if (iVar8 == 0) {
      return (long *)0x0;
    }
    if ((*(long *)(puVar6 + -0x158) != 0) &&
       (lVar25 = *(long *)(*(long *)(puVar6 + -0x158) + 0x20), lVar25 != 0)) {
      if (*(int *)(lVar25 + 0x18) < 1) {
        return (long *)0x0;
      }
      plVar23 = (long *)0x0;
      uVar10 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0);
      if (*(long *)(puVar6 + -0x158) != 0) {
        lVar25 = *(long *)(*(long *)(puVar6 + -0x158) + 0x20);
        uVar21 = 0;
        if (lVar25 != 0) {
          if (*(uint *)(lVar25 + 0x18) <= uVar10) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar13 = *(long *)(*(long *)(lVar25 + 0x10) + (long)(int)uVar10 * 8 + 0x20);
          lVar20 = *(long *)(*(long *)(auVar41._8_8_ + 0x30) + 8);
          if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar20);
          }
          if (lVar13 == 0) {
            return (long *)0x0;
          }
          plVar22 = (long *)func_0x00f78adc(lVar13,lVar20);
          if (plVar22 == (long *)0x0) {
            func_0x00f78e5c(lVar13,lVar20);
            return (long *)0x0;
          }
          return plVar22;
        }
      }
    }
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)(puVar6 + -0x170) = puVar6 + -0x130;
  *(undefined **)(puVar6 + -0x168) = &Core_Definitions_GameDefinitions__IsTypeRegistered_object_;
  *(undefined8 *)(puVar6 + -0x178) = 0;
  if (auVar38._0_8_ != 0) {
    plVar22 = (long *)(**(code **)**(undefined8 **)(auVar38._8_8_ + 0x30))
                                (auVar38._0_8_,puVar6 + -0x178);
    return plVar22;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)(puVar6 + -400) = puVar6 + -0x170;
  *(undefined **)(puVar6 + -0x188) = &Core_Definitions_GameDefinitions__IsValidID_object_;
  *(undefined8 *)(puVar6 + -0x198) = 0;
  if (auVar38._0_8_ != 0) {
    plVar22 = (long *)(*(code *)**(undefined8 **)plVar23[6])
                                (auVar38._0_8_,auVar38._8_8_,puVar6 + -0x198);
    return plVar22;
  }
  auVar38 = func_0x00f78af4();
  lVar14 = auVar38._8_8_;
  lVar25 = auVar38._0_8_;
  *(long *)(puVar6 + -0x1d0) = lVar13;
  *(undefined8 *)(puVar6 + -0x1c8) = uVar21;
  *(undefined1 (*) [16])(puVar6 + -0x1c0) = auVar41;
  *(undefined1 **)(puVar6 + -0x1b0) = puVar6 + -400;
  *(undefined **)(puVar6 + -0x1a8) =
       &Core_Definitions_GameDefinitions__RegisterType_WheelsDefinition_;
  if ((bRam0000000003eb64d9 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64d9 = 1;
  }
  uVar21 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar22 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
  if ((plVar22 != (long *)0x0) &&
     (uVar28 = (**(code **)(*plVar22 + 0x1b8))(plVar22,*(undefined8 *)(*plVar22 + 0x1c0)),
     lVar25 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0185cb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar22 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar25,uVar28);
    return plVar22;
  }
  auVar38 = func_0x00f78af4();
  lVar13 = auVar38._0_8_;
  *(undefined8 *)(puVar6 + -0x200) = 0x3d25458;
  *(undefined8 *)(puVar6 + -0x1f8) = uVar21;
  *(long *)(puVar6 + -0x1f0) = lVar14;
  *(long *)(puVar6 + -0x1e8) = lVar25;
  *(undefined1 **)(puVar6 + -0x1e0) = puVar6 + -0x1b0;
  *(undefined **)(puVar6 + -0x1d8) = &Core_Definitions_GameDefinitions__RegisterType_object_;
  uVar21 = 0x3eb6000;
  plVar22 = plVar23;
  if ((bRam0000000003eb64da & 1) == 0) {
    func_0x00f78a20(0x3d21268);
    func_0x00f78a20(0x3d3a478);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64da = 1;
  }
  if (lVar13 != 0) {
    plVar22 = (long *)(*(code *)**(undefined8 **)plVar23[6])(lVar13);
    if (((ulong)plVar22 & 1) != 0) {
      return plVar22;
    }
    uVar21 = *(undefined8 *)(plVar23[6] + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
    plVar23 = (long *)func_0x00f78aec(/*Core.Definitions.DefinitionData_TypeInfo*/ uRam0000000003d21268);
    lVar20 = 0;
    plVar22 = auVar38._8_8_;
    /*Core.Definitions.DefinitionData$$.ctor*/ func_0x0164515c(plVar23,uVar21);
    plVar12 = *(long **)(lVar13 + 0x18);
    if (plVar12 != (long *)0x0) {
      plVar22 = *(long **)(puVar6 + -0x1f0);
      plVar29 = *(long **)(puVar6 + -0x1e8);
      uVar21 = *(undefined8 *)(puVar6 + -0x200);
      uVar28 = *(undefined8 *)(puVar6 + -0x1f8);
      *(long **)(puVar6 + -0x1f0) = plVar22;
      *(long **)(puVar6 + -0x1e8) = plVar29;
      *(undefined8 *)(puVar6 + -0x1e0) = *(undefined8 *)(puVar6 + -0x1e0);
      *(undefined8 *)(puVar6 + -0x1d8) = *(undefined8 *)(puVar6 + -0x1d8);
      lVar20 = plVar12[2];
      puVar15 = puRam0000000003d3a478;
      if (lVar20 == 0) {
code_r0x0242716c:
        plVar23 = plVar22;
        plVar12 = plVar29;
        plVar18 = (long *)func_0x00f78af4();
        lVar20 = extraout_x9;
        uVar10 = extraout_w8;
code_r0x02427170:
        *(uint *)(plVar12 + 3) = uVar10 + 1;
      }
      else {
        uVar10 = *(uint *)(plVar12 + 3);
        plVar18 = plVar12;
        if (uVar10 != *(uint *)(lVar20 + 0x18)) goto code_r0x02427170;
        puVar15 = *(undefined8 **)(*(long *)(puRam0000000003d3a478[3] + 0xc0) + 0x60);
        plVar18 = (long *)(*(code *)*puVar15)(plVar12,uVar10 + 1);
        lVar20 = plVar12[2];
        uVar10 = *(uint *)(plVar12 + 3);
        *(uint *)(plVar12 + 3) = uVar10 + 1;
        plVar29 = plVar12;
        plVar22 = plVar23;
        if (lVar20 == 0) goto code_r0x0242716c;
      }
      if (uVar10 < *(uint *)(lVar20 + 0x18)) {
        *(long **)(lVar20 + (long)(int)uVar10 * 8 + 0x20) = plVar23;
        *(int *)((long)plVar12 + 0x1c) = *(int *)((long)plVar12 + 0x1c) + 1;
        return plVar18;
      }
      uVar19 = func_0x00f78b24();
      auVar38 = func_0x00f78ac0(uVar19,0);
      lVar13 = auVar38._8_8_;
      lVar20 = auVar38._0_8_;
      *(code **)(puVar6 + -0x230) = unaff_x24;
      *(undefined8 *)(puVar6 + -0x228) = unaff_x23;
      *(undefined8 *)(puVar6 + -0x220) = uVar21;
      *(undefined8 *)(puVar6 + -0x218) = uVar28;
      *(long **)(puVar6 + -0x210) = plVar23;
      *(long **)(puVar6 + -0x208) = plVar12;
      *(undefined1 **)(puVar6 + -0x200) = puVar6 + -0x1e0;
      *(undefined **)(puVar6 + -0x1f8) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x48))(lVar13,0x14);
      if (lVar20 != 0) {
        pcVar1 = (code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x28);
        lVar25 = *(long *)(*(long *)(puVar15[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar25);
        }
        if (lVar13 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = func_0x00f78adc(lVar13,lVar25);
          if (lVar14 == 0) {
            func_0x00f78e5c(lVar13,lVar25);
            goto code_r0x0242734c;
          }
        }
        (*pcVar1)(lVar20,lVar14,*(undefined8 *)(*(long *)(puVar15[3] + 0xc0) + 0x28));
        iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x68))(lVar20);
        return (long *)(ulong)(iVar8 - 1);
      }
      func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x2427350);
      (*pcVar1)();
    }
  }
  auVar42 = func_0x00f78af4();
  plVar29 = (long *)(puVar6 + -0x250);
  *(code **)(puVar6 + -0x240) = unaff_x24;
  *(undefined8 *)(puVar6 + -0x238) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x230) = uVar21;
  *(long **)(puVar6 + -0x228) = plVar23;
  *(long **)(puVar6 + -0x220) = auVar38._8_8_;
  *(long *)(puVar6 + -0x218) = lVar13;
  *(undefined1 **)(puVar6 + -0x210) = puVar6 + -0x1e0;
  *(undefined **)(puVar6 + -0x208) = &Core_Definitions_GameDefinitions__TryGetDefinition_object_;
  plVar12 = (long *)0x3eb6000;
  plVar23 = plVar22;
  lVar13 = lVar20;
  if ((bRam0000000003eb64db & 1) == 0) {
    func_0x00f78a20(0x3d2e280);
    bRam0000000003eb64db = 1;
  }
  *(undefined8 *)(puVar6 + -0x250) = 0;
  *(undefined8 *)(puVar6 + -0x248) = 0;
  if (auVar42._0_8_ == 0) {
code_r0x0185cd4c:
    plVar29 = plVar23;
    func_0x00f78af4();
  }
  else {
    plVar23 = (long *)**(undefined8 **)(lVar20 + 0x30);
    iVar8 = (*(code *)*plVar23)(auVar42._0_8_,puVar6 + -0x248);
    if (iVar8 == 0) {
code_r0x0185ccf0:
      *plVar22 = 0;
      return (long *)0x0;
    }
    if (*(long *)(puVar6 + -0x248) == 0) goto code_r0x0185cd4c;
    lVar25 = *(long *)(*(long *)(puVar6 + -0x248) + 0x18);
    if ((lVar25 == 0) ||
       (lVar13 = lRam0000000003d2e280, iVar8 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$TryGetValue*/ func_0x01e3dc3c(lVar25,auVar42._8_8_), iVar8 == 0))
    goto code_r0x0185ccf0;
    lVar25 = *(long *)(puVar6 + -0x250);
    lVar14 = *(long *)(*(long *)(lVar20 + 0x30) + 8);
    auVar42._8_8_ = lVar25;
    auVar42._0_8_ = lVar14;
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (lVar25 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = func_0x00f78adc(lVar25,lVar14);
      if (lVar16 == 0) {
        func_0x00f78e5c(lVar25,lVar14);
        goto code_r0x0185ccf0;
      }
    }
    *plVar22 = lVar16;
    plVar22 = *(long **)(*(long *)(lVar20 + 0x30) + 8);
    if ((*(ushort *)((long)plVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(plVar22);
    }
    if ((lVar25 == 0) || (lVar25 = func_0x00f78adc(lVar25,plVar22), lVar25 != 0)) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
  }
  auVar38 = func_0x00f78e5c(auVar42._8_8_,plVar22);
  *(long *)(puVar6 + -0x270) = lVar20;
  *(long **)(puVar6 + -0x268) = plVar22;
  *(undefined1 **)(puVar6 + -0x260) = puVar6 + -0x210;
  *(undefined **)(puVar6 + -600) = &Core_Definitions_GameDefinitions__TryGetDefinition_object_;
  *(undefined8 *)(puVar6 + -0x278) = 0;
  if (auVar38._0_8_ != 0) {
    plVar22 = (long *)(**(code **)**(undefined8 **)(lVar13 + 0x30))
                                (auVar38._0_8_,auVar38._8_8_,puVar6 + -0x278);
    lVar20 = *(long *)(puVar6 + -0x278);
    if ((int)plVar22 == 0) {
      lVar20 = 0;
    }
    *plVar29 = lVar20;
    return plVar22;
  }
  auVar38 = func_0x00f78af4();
  plVar23 = auVar38._8_8_;
  lVar25 = auVar38._0_8_;
  *(undefined8 *)(puVar6 + -0x2e0) = unaff_x28;
  *(undefined8 *)(puVar6 + -0x2d8) = unaff_x27;
  *(undefined8 *)(puVar6 + -0x2d0) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x2c8) = unaff_x25;
  *(code **)(puVar6 + -0x2c0) = unaff_x24;
  *(undefined8 *)(puVar6 + -0x2b8) = 0x3eb6000;
  *(undefined1 (*) [16])(puVar6 + -0x2b0) = auVar42;
  *(long *)(puVar6 + -0x2a0) = lVar20;
  *(long **)(puVar6 + -0x298) = plVar22;
  *(undefined1 **)(puVar6 + -0x290) = puVar6 + -0x260;
  *(undefined **)(puVar6 + -0x288) = &Core_Definitions_GameDefinitions__TryGetDefinitionData_object_
  ;
  lVar20 = 0x3eb6000;
  plVar22 = plVar29;
  if ((bRam0000000003eb64dc & 1) == 0) {
    func_0x00f78a20(0x3d323e8);
    func_0x00f78a20(0x3d323f0);
    func_0x00f78a20(0x3d1c730);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3a480);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64dc = 1;
  }
  *(undefined4 *)(puVar6 + -0x308) = 0;
  if (*(long *)(lVar25 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0185cfdc;
  }
  unaff_x26 = 0x3d25458;
  unaff_x24 = (code *)0x3d1c730;
  plVar12 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar6 + -0x328,*(long *)(lVar25 + 0x18),uRam0000000003d3a480);
  *(undefined8 *)(puVar6 + -0x2f8) = *(undefined8 *)(puVar6 + -800);
  *(undefined8 *)(puVar6 + -0x300) = *(undefined8 *)(puVar6 + -0x328);
  *(undefined8 *)(puVar6 + -0x2f0) = *(undefined8 *)(puVar6 + -0x318);
  do {
    uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar6 + -0x300,uRam0000000003d323e8);
    if ((uVar11 & 1) == 0) {
      unaff_x25 = 0;
      lVar20 = 0;
      lVar25 = 0;
      plVar29 = (long *)0x0;
      *(undefined4 *)(puVar6 + -0x310) = 0x4d;
      *(undefined4 *)(puVar6 + -0x308) = 1;
      goto code_r0x0185cf28;
    }
    lVar14 = *(long *)(puVar6 + -0x2f0);
    if (lVar14 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x185cfd8);
      (*pcVar1)();
    }
    uVar21 = *(undefined8 *)(lVar14 + 0x10);
    uVar28 = *(undefined8 *)plVar29[6];
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
    plVar22 = (long *)0x0;
    uVar11 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar21,uVar28);
  } while ((uVar11 & 1) == 0);
  unaff_x25 = 0;
  lVar20 = 0;
  lVar25 = 0;
  *plVar23 = lVar14;
  plVar29 = (long *)((long)&MACH_HEADER.magic + 1);
  *(undefined4 *)(puVar6 + -0x310) = 0x52;
  *(undefined4 *)(puVar6 + -0x308) = 1;
code_r0x0185cf28:
  do {
    lVar14 = *(long *)unaff_x24;
    *(long *)(puVar6 + -0x328) = lVar14;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar11 != 0) {
      piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *plVar12) {
          puVar15 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
          goto code_r0x0185cf78;
        }
        piVar27 = piVar27 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    plVar22 = (long *)0x0;
    puVar15 = (undefined8 *)func_0x00fac1f0(puVar6 + -0x328);
code_r0x0185cf78:
    (*(code *)*puVar15)(puVar6 + -0x310,puVar15[1]);
    if (lVar25 == 0) {
      if (((int)unaff_x25 != 0) || (*(int *)(puVar6 + lVar20 * 4 + -0x310) != 0x52)) {
        plVar29 = (long *)0x0;
        *plVar23 = 0;
      }
      return plVar29;
    }
code_r0x0185cfdc:
    func_0x00f78ac0(lVar25,0);
    if (extraout_w1_01 != 1) {
      auVar38 = __Unwind_Resume();
      *(long **)(puVar6 + -0x350) = plVar29;
      *(long **)(puVar6 + -0x348) = plVar23;
      *(undefined1 **)(puVar6 + -0x340) = puVar6 + -0x290;
      *(undefined **)(puVar6 + -0x338) =
           &Core_Definitions_GameDefinitions__TryGetDefinitionList_WheelsDefinition_;
      *(undefined8 *)(puVar6 + -0x358) = 0;
      if (auVar38._0_8_ != 0) {
        plVar22 = *(long **)plVar22[6];
        plVar18 = (long *)(*(code *)*plVar22)(auVar38._0_8_,puVar6 + -0x358);
        if ((int)plVar18 == 0) {
          lVar20 = 0;
        }
        else {
          plVar23 = auVar38._8_8_;
          if (*(long *)(puVar6 + -0x358) == 0) goto code_r0x0185d07c;
          lVar20 = *(long *)(*(long *)(puVar6 + -0x358) + 0x28);
        }
        *auVar38._8_8_ = lVar20;
        return plVar18;
      }
code_r0x0185d07c:
      auVar38 = func_0x00f78af4();
      lVar14 = auVar38._8_8_;
      *(long *)(puVar6 + -0x390) = lVar20;
      *(long *)(puVar6 + -0x388) = lVar25;
      *(long **)(puVar6 + -0x380) = plVar29;
      *(long **)(puVar6 + -0x378) = plVar23;
      *(undefined1 **)(puVar6 + -0x370) = puVar6 + -0x340;
      *(undefined **)(puVar6 + -0x368) =
           &UnityEngine_GameObject__AddComponent_TMP_Dropdown_DropdownItem_;
      if ((bRam0000000003eb64dd & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64dd = 1;
      }
      uVar21 = **(undefined8 **)(lVar14 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
      if (auVar38._0_8_ != 0) {
        uVar21 = /*UnityEngine.GameObject$$AddComponent*/ func_0x0322ed6c(auVar38._0_8_,uVar28,0);
        lVar20 = *(long *)(*(long *)(lVar14 + 0x30) + 8);
        if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar20);
        }
        lVar20 = func_0x00f78adc(uVar21,lVar20);
        lVar13 = *(long *)(*(long *)(lVar14 + 0x30) + 8);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        if (lVar20 != 0) {
          plVar22 = (long *)func_0x00f78adc(lVar20,lVar13);
          if (plVar22 != (long *)0x0) {
            return plVar22;
          }
          func_0x00f78e5c(lVar20,lVar13);
        }
        return (long *)0x0;
      }
      auVar38 = func_0x00f78af4();
      *(undefined8 *)(puVar6 + -0x3c0) = 0x3d25458;
      *(undefined8 *)(puVar6 + -0x3b8) = uVar21;
      *(undefined8 *)(puVar6 + -0x3b0) = 0;
      *(long *)(puVar6 + -0x3a8) = lVar14;
      *(undefined1 **)(puVar6 + -0x3a0) = puVar6 + -0x370;
      *(undefined **)(puVar6 + -0x398) = &UnityEngine_GameObject__GetComponent_VirtualCamera_;
      if ((bRam0000000003eb64de & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64de = 1;
      }
      *(undefined8 *)(puVar6 + -0x3d0) = 0;
      *(undefined8 *)(puVar6 + -0x3c8) = 0;
      uVar21 = **(undefined8 **)(auVar38._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
      if (auVar38._0_8_ != 0) {
        /*UnityEngine.GameObject$$GetComponentFastPath*/ func_0x0322e3dc(auVar38._0_8_,uVar28,puVar6 + -0x3c8,0);
        return *(long **)(puVar6 + -0x3d0);
      }
      auVar38 = func_0x00f78af4();
      *(undefined1 **)(puVar6 + -0x3e0) = puVar6 + -0x3a0;
      *(undefined **)(puVar6 + -0x3d8) =
           &UnityEngine_GameObject__GetComponentInChildren_TMP_Dropdown_DropdownItem_;
      if (auVar38._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar22 = (long *)(**(code **)**(undefined8 **)(auVar38._8_8_ + 0x30))(auVar38._0_8_,0);
        return plVar22;
      }
      auVar38 = func_0x00f78af4();
      *(code **)(puVar6 + -0x420) = unaff_x24;
      *(long **)(puVar6 + -0x418) = plVar12;
      *(undefined8 *)(puVar6 + -0x410) = 0x3eb6000;
      *(undefined8 *)(puVar6 + -0x408) = 0x3d25458;
      *(undefined8 *)(puVar6 + -0x400) = uVar21;
      *(undefined8 *)(puVar6 + -0x3f8) = 0;
      *(undefined1 **)(puVar6 + -0x3f0) = puVar6 + -0x3e0;
      *(undefined **)(puVar6 + -1000) = &UnityEngine_GameObject__GetComponentInChildren_object_;
      plVar12 = plVar22;
      if ((bRam0000000003eb64df & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64df = 1;
      }
      uVar21 = *(undefined8 *)plVar22[6];
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
      if (auVar38._0_8_ != 0) {
        lVar20 = /*UnityEngine.GameObject$$GetComponentInChildren*/ func_0x03227bec(auVar38._0_8_,uVar28,auVar38._8_8_,0);
        lVar13 = *(long *)(plVar22[6] + 8);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        if (lVar20 != 0) {
          plVar22 = (long *)func_0x00f78adc(lVar20,lVar13);
          if (plVar22 != (long *)0x0) {
            return plVar22;
          }
          func_0x00f78e5c(lVar20,lVar13);
        }
        return (long *)0x0;
      }
      auVar41 = func_0x00f78af4();
      *(undefined1 **)(puVar6 + -0x430) = puVar6 + -0x3f0;
      *(undefined **)(puVar6 + -0x428) = &UnityEngine_GameObject__GetComponentInParent_object_;
      if (auVar41._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar22 = (long *)(**(code **)**(undefined8 **)(auVar41._8_8_ + 0x30))(auVar41._0_8_,0);
        return plVar22;
      }
      auVar41 = func_0x00f78af4();
      *(code **)(puVar6 + -0x470) = unaff_x24;
      *(undefined8 *)(puVar6 + -0x468) = 0x3d25458;
      *(undefined8 *)(puVar6 + -0x460) = uVar21;
      *(undefined8 *)(puVar6 + -0x458) = 0;
      *(long *)(puVar6 + -0x450) = auVar38._8_8_;
      *(long **)(puVar6 + -0x448) = plVar22;
      *(undefined1 **)(puVar6 + -0x440) = puVar6 + -0x430;
      *(undefined **)(puVar6 + -0x438) = &UnityEngine_GameObject__GetComponentInParent_UITweenGroup_
      ;
      uVar21 = 0x3d25458;
      plVar22 = plVar12;
      if ((bRam0000000003eb64e0 & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64e0 = 1;
      }
      uVar28 = *(undefined8 *)plVar12[6];
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
      if (auVar41._0_8_ == 0) {
        auVar43 = func_0x00f78af4();
        lVar20 = auVar43._0_8_;
        puVar7 = puVar6 + -0x4a0;
        *(undefined8 *)(puVar6 + -0x4a0) = uVar28;
        *(undefined8 *)(puVar6 + -0x498) = 0;
        *(long *)(puVar6 + -0x490) = auVar41._8_8_;
        *(long **)(puVar6 + -0x488) = plVar12;
        *(undefined1 **)(puVar6 + -0x480) = puVar6 + -0x440;
        *(undefined **)(puVar6 + -0x478) = &UnityEngine_GameObject__GetComponents_object_;
        puVar31 = puVar6 + -0x480;
        uVar28 = 0x3d25458;
        if ((bRam0000000003eb64e1 & 1) == 0) {
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb64e1 = 1;
        }
        uVar19 = **(undefined8 **)(auVar43._8_8_ + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
        if (lVar20 == 0) {
          auVar38 = func_0x00f78af4();
          plVar12 = auVar38._8_8_;
          *(code **)(puVar6 + -0x4e0) = unaff_x24;
          *(undefined8 *)(puVar6 + -0x4d8) = 0x3d25458;
          *(undefined8 *)(puVar6 + -0x4d0) = 0x3d25458;
          *(undefined8 *)(puVar6 + -0x4c8) = uVar19;
          *(undefined8 *)(puVar6 + -0x4c0) = 0;
          *(long *)(puVar6 + -0x4b8) = auVar43._8_8_;
          *(undefined1 **)(puVar6 + -0x4b0) = puVar31;
          *(undefined **)(puVar6 + -0x4a8) = &UnityEngine_GameObject__GetComponents_Volume_;
          plVar23 = plVar22;
          if ((bRam0000000003eb64e2 & 1) == 0) {
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb64e2 = 1;
          }
          uVar21 = *(undefined8 *)plVar22[6];
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
          if (auVar38._0_8_ == 0) {
            auVar38 = func_0x00f78af4();
            *(undefined1 **)(puVar6 + -0x4f0) = puVar6 + -0x4b0;
            *(undefined **)(puVar6 + -0x4e8) =
                 &UnityEngine_GameObject__GetComponentsInChildren_RectTransform_;
            if (auVar38._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar22 = (long *)(**(code **)**(undefined8 **)(auVar38._8_8_ + 0x30))
                                          (auVar38._0_8_,0);
              return plVar22;
            }
            auVar44 = func_0x00f78af4();
            lVar20 = auVar44._8_8_;
            auVar43._8_8_ = plVar23;
            auVar43._0_8_ = auVar44._0_8_;
            puVar7 = puVar6 + -0x530;
            *(code **)(puVar6 + -0x530) = unaff_x24;
            *(undefined8 *)(puVar6 + -0x528) = 0x3eb6000;
            *(undefined8 *)(puVar6 + -0x520) = 0x3d25458;
            *(undefined8 *)(puVar6 + -0x518) = uVar21;
            *(undefined8 *)(puVar6 + -0x510) = 0;
            *(long **)(puVar6 + -0x508) = plVar12;
            *(undefined1 **)(puVar6 + -0x500) = puVar6 + -0x4f0;
            *(undefined **)(puVar6 + -0x4f8) =
                 &UnityEngine_GameObject__GetComponentsInChildren_object_;
            puVar31 = puVar6 + -0x500;
            uVar21 = 0x3d25458;
            plVar12 = plVar23;
            if ((bRam0000000003eb64e3 & 1) == 0) {
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb64e3 = 1;
            }
            uVar28 = *(undefined8 *)plVar23[6];
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
            if (auVar44._0_8_ == 0) {
              auVar38 = func_0x00f78af4();
              *(undefined1 **)(puVar6 + -0x540) = puVar31;
              *(undefined **)(puVar6 + -0x538) =
                   &UnityEngine_GameObject__GetComponentsInChildren_object_;
              if (auVar38._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar22 = (long *)(*(code *)**(undefined8 **)plVar12[6])
                                            (auVar38._0_8_,0,auVar38._8_8_);
                return plVar22;
              }
              auVar38 = func_0x00f78af4();
              *(code **)(puVar6 + -0x580) = unaff_x24;
              *(undefined8 *)(puVar6 + -0x578) = 0x3d25458;
              *(undefined8 *)(puVar6 + -0x570) = uVar28;
              *(undefined8 *)(puVar6 + -0x568) = 0;
              *(long *)(puVar6 + -0x560) = lVar20;
              *(long **)(puVar6 + -0x558) = plVar23;
              *(undefined1 **)(puVar6 + -0x550) = puVar6 + -0x540;
              *(undefined **)(puVar6 + -0x548) =
                   &UnityEngine_GameObject__GetComponentsInChildren_Renderer_;
              unaff_x24 = (code *)0x3eb6000;
              plVar22 = plVar12;
              lVar25 = lVar13;
              if ((bRam0000000003eb64e4 & 1) == 0) {
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb64e4 = 1;
              }
              uVar21 = **(undefined8 **)(lVar13 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
              if (auVar38._0_8_ == 0) {
                auVar41 = func_0x00f78af4();
                *(undefined1 **)(puVar6 + -0x590) = puVar6 + -0x550;
                *(undefined **)(puVar6 + -0x588) =
                     &UnityEngine_GameObject__GetComponentsInParent_object_;
                if (auVar41._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar22 = (long *)(**(code **)**(undefined8 **)(auVar41._8_8_ + 0x30))
                                              (auVar41._0_8_,0);
                  return plVar22;
                }
                auVar44 = func_0x00f78af4();
                lVar20 = auVar44._8_8_;
                auVar43._8_8_ = plVar22;
                auVar43._0_8_ = auVar44._0_8_;
                puVar7 = puVar6 + -0x5d0;
                *(undefined8 *)(puVar6 + -0x5d0) = 0x3eb6000;
                *(undefined8 *)(puVar6 + -0x5c8) = 0x3d25458;
                *(undefined8 *)(puVar6 + -0x5c0) = uVar21;
                *(undefined8 *)(puVar6 + -0x5b8) = 0;
                *(long *)(puVar6 + -0x5b0) = auVar38._8_8_;
                *(long **)(puVar6 + -0x5a8) = plVar12;
                *(undefined1 **)(puVar6 + -0x5a0) = puVar6 + -0x590;
                *(undefined **)(puVar6 + -0x598) =
                     &UnityEngine_GameObject__GetComponentsInParent_object_;
                puVar31 = puVar6 + -0x5a0;
                uVar21 = 0x3d25458;
                plVar12 = plVar22;
                if ((bRam0000000003eb64e5 & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64e5 = 1;
                }
                uVar28 = *(undefined8 *)plVar22[6];
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
                if (auVar44._0_8_ == 0) {
                  auVar38 = func_0x00f78af4();
                  *(undefined8 *)(puVar6 + -0x610) = 0x3eb6000;
                  *(undefined8 *)(puVar6 + -0x608) = 0x3d25458;
                  *(undefined8 *)(puVar6 + -0x600) = uVar28;
                  *(undefined8 *)(puVar6 + -0x5f8) = 0;
                  *(long *)(puVar6 + -0x5f0) = lVar20;
                  *(long **)(puVar6 + -0x5e8) = plVar22;
                  *(undefined1 **)(puVar6 + -0x5e0) = puVar31;
                  *(undefined **)(puVar6 + -0x5d8) =
                       &UnityEngine_GameObject__GetComponentsInParent_RectMask2D_;
                  plVar22 = plVar12;
                  if ((bRam0000000003eb64e6 & 1) == 0) {
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb64e6 = 1;
                  }
                  uVar21 = **(undefined8 **)(lVar25 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
                  if (auVar38._0_8_ == 0) {
                    auVar41 = func_0x00f78af4();
                    *(undefined8 *)(puVar6 + -0x650) = 0x3eb6000;
                    *(undefined8 *)(puVar6 + -0x648) = 0x3d25458;
                    *(undefined8 *)(puVar6 + -0x640) = uVar21;
                    *(undefined8 *)(puVar6 + -0x638) = 0;
                    *(long *)(puVar6 + -0x630) = auVar38._8_8_;
                    *(long **)(puVar6 + -0x628) = plVar12;
                    *(undefined1 **)(puVar6 + -0x620) = puVar6 + -0x5e0;
                    *(undefined **)(puVar6 + -0x618) =
                         &UnityEngine_GameObject__TryGetComponent_UniversalAdditionalLightData_;
                    if ((bRam0000000003eb64e7 & 1) == 0) {
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb64e7 = 1;
                    }
                    *(undefined8 *)(puVar6 + -0x660) = 0;
                    *(undefined8 *)(puVar6 + -0x658) = 0;
                    uVar21 = *(undefined8 *)plVar22[6];
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
                    if (auVar41._0_8_ != 0) {
                      /*UnityEngine.GameObject$$TryGetComponentFastPath*/ func_0x0322e9a8(auVar41._0_8_,uVar28,puVar6 + -0x658,0);
                      lVar20 = *(long *)(puVar6 + -0x660);
                      *auVar41._8_8_ = lVar20;
                      return (long *)(ulong)(lVar20 != 0);
                    }
                    auVar38 = func_0x00f78af4();
                    *(undefined8 *)(puVar6 + -0x690) = 0x3d25458;
                    *(undefined8 *)(puVar6 + -0x688) = uVar21;
                    *(undefined8 *)(puVar6 + -0x680) = 0;
                    *(long **)(puVar6 + -0x678) = auVar41._8_8_;
                    *(undefined1 **)(puVar6 + -0x670) = puVar6 + -0x620;
                    *(undefined **)(puVar6 + -0x668) =
                         &Core_Networking_HostUpdateHolder__Update_HostCarUpdate_;
                    plVar22 = (long *)/*FlatBuffers.Table$$__offset*/ func_0x016cf120(auVar38._0_8_,6,0);
                    if ((int)plVar22 == 0) {
                      *extraout_x8 = 0;
                      extraout_x8[1] = 0;
                      extraout_x8[2] = 0;
                    }
                    else {
                      auVar41 = /*FlatBuffers.Table$$__union<HostCarUpdate>*/ func_0x018e3e90(auVar38._0_8_,plVar22,
                                                **(undefined8 **)(auVar38._8_8_ + 0x30));
                      *(undefined8 *)(puVar6 + -0x6a8) = 0;
                      *(undefined8 *)(puVar6 + -0x6a0) = 0;
                      *(undefined8 *)(puVar6 + -0x698) = 0;
                      plVar22 = (long *)/*System.Nullable<HostCarUpdate>$$.ctor*/ func_0x02652304(puVar6 + -0x6a8,auVar41._0_8_,auVar41._8_8_,
                                                        *(undefined8 *)
                                                         (*(long *)(auVar38._8_8_ + 0x30) + 0x10));
                      uVar21 = *(undefined8 *)(puVar6 + -0x6a8);
                      extraout_x8[1] = *(undefined8 *)(puVar6 + -0x6a0);
                      *extraout_x8 = uVar21;
                      extraout_x8[2] = *(undefined8 *)(puVar6 + -0x698);
                    }
                    return plVar22;
                  }
                  uVar24 = 1;
                  uVar19 = 1;
                  puVar31 = *(undefined1 **)(puVar6 + -0x5e0);
                  puVar32 = *(undefined **)(puVar6 + -0x5d8);
                  lVar20 = *(long *)(puVar6 + -0x5f0);
                  auVar43._8_8_ = *(undefined8 *)(puVar6 + -0x5e8);
                  auVar43._0_8_ = auVar38._0_8_;
                  uVar28 = *(undefined8 *)(puVar6 + -0x600);
                  auVar44._8_8_ = auVar38._8_8_;
                  auVar44._0_8_ = *(undefined8 *)(puVar6 + -0x5f8);
                  puVar7 = puVar6 + -0x5d0;
                  unaff_x24 = *(code **)(puVar6 + -0x610);
                  uVar21 = *(undefined8 *)(puVar6 + -0x608);
                }
                else {
                  uVar24 = 1;
                  uVar19 = 1;
                  plVar12 = (long *)0x0;
                  puVar32 = &UNK_0185d89c;
                }
              }
              else {
                uVar24 = 1;
                uVar19 = 0;
                puVar31 = *(undefined1 **)(puVar6 + -0x550);
                puVar32 = *(undefined **)(puVar6 + -0x548);
                lVar20 = *(long *)(puVar6 + -0x560);
                auVar43._8_8_ = *(undefined8 *)(puVar6 + -0x558);
                auVar43._0_8_ = auVar38._0_8_;
                uVar28 = *(undefined8 *)(puVar6 + -0x570);
                auVar44._8_8_ = auVar38._8_8_;
                auVar44._0_8_ = *(undefined8 *)(puVar6 + -0x568);
                puVar7 = puVar6 + -0x540;
                unaff_x24 = *(code **)(puVar6 + -0x580);
                uVar21 = *(undefined8 *)(puVar6 + -0x578);
              }
            }
            else {
              uVar24 = 1;
              uVar19 = 0;
              plVar12 = (long *)0x0;
              puVar32 = &UNK_0185d69c;
            }
          }
          else {
            uVar24 = 0;
            uVar19 = 0;
            puVar31 = *(undefined1 **)(puVar6 + -0x4b0);
            puVar32 = *(undefined **)(puVar6 + -0x4a8);
            lVar20 = *(long *)(puVar6 + -0x4c0);
            auVar43._8_8_ = *(undefined8 *)(puVar6 + -0x4b8);
            auVar43._0_8_ = auVar38._0_8_;
            uVar28 = *(undefined8 *)(puVar6 + -0x4d0);
            auVar44._8_8_ = 1;
            auVar44._0_8_ = *(undefined8 *)(puVar6 + -0x4c8);
            puVar7 = puVar6 + -0x4a0;
            unaff_x24 = *(code **)(puVar6 + -0x4e0);
            uVar21 = *(undefined8 *)(puVar6 + -0x4d8);
          }
        }
        else {
          uVar24 = 0;
          auVar44._8_8_ = 1;
          auVar44._0_8_ = uVar19;
          uVar19 = 0;
          plVar12 = (long *)0x0;
          puVar32 = &UNK_0185d4d4;
        }
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar7 + -0x48) = unaff_x25;
        *(code **)(puVar7 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar7 + -0x38) = uVar21;
        *(undefined8 *)(puVar7 + -0x30) = uVar28;
        *(long *)(puVar7 + -0x28) = auVar44._0_8_;
        *(long *)(puVar7 + -0x20) = lVar20;
        *(long *)(puVar7 + -0x18) = auVar43._8_8_;
        *(undefined1 **)(puVar7 + -0x10) = puVar31;
        *(undefined **)(puVar7 + -8) = puVar32;
        if (pcRam0000000003ebf468 == (code *)0x0) {
          pcRam0000000003ebf468 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0322e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar22 = (long *)(*pcRam0000000003ebf468)
                                    (auVar43._0_8_,uVar17,1,uVar24,auVar44._8_8_,uVar19,plVar12);
        return plVar22;
      }
      lVar20 = /*UnityEngine.GameObject$$GetComponentInParent*/ func_0x0322e528(auVar41._0_8_,uVar19,auVar41._8_8_,0);
      lVar13 = *(long *)(plVar12[6] + 8);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (lVar20 != 0) {
        plVar22 = (long *)func_0x00f78adc(lVar20,lVar13);
        if (plVar22 != (long *)0x0) {
          return plVar22;
        }
        func_0x00f78e5c(lVar20,lVar13);
      }
      return (long *)0x0;
    }
    plVar29 = (long *)___cxa_begin_catch();
    lVar25 = *plVar29;
    ___cxa_end_catch();
    plVar29 = (long *)0x0;
    lVar20 = -1;
    unaff_x25 = 1;
  } while( true );
code_r0x014baf58:
  if (uVar26 == 0) {
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
code_r0x014bafd8:
    puVar15 = (undefined8 *)func_0x00f78af4();
    *(code **)(puVar4 + -0x60) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x58) = 5;
    *(undefined8 *)(puVar4 + -0x50) = 0x3d57318;
    *(undefined8 *)(puVar4 + -0x48) = uVar28;
    *(long **)(puVar4 + -0x40) = plVar22;
    *(undefined8 **)(puVar4 + -0x38) = param_4;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x28) = &Atlas_Gameplay_Pickups_PickupManager__IsUseableAvailable;
    if (plVar23 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar23 + 0x188))(plVar23,*(undefined8 *)(*plVar23 + 400));
      lVar20 = puVar15[9];
      uVar21 = (**(code **)(*plVar23 + 0x188))(plVar23,*(undefined8 *)(*plVar23 + 400));
      param_4 = puVar15;
      plVar22 = plVar23;
      if (lVar20 != 0) {
        iVar8 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(lVar20,uVar21);
        lVar20 = puVar15[0xb];
        uVar21 = (**(code **)(*plVar23 + 0x188))(plVar23,*(undefined8 *)(*plVar23 + 400));
        if (lVar20 != 0) {
          iVar9 = Atlas_Gameplay_Usables_UsableManager__AreAnyUsablesLeftInPool(lVar20,uVar21,0);
          if (iVar9 == 0 || iVar8 == 0) {
            return (long *)0x0;
          }
          if (0 < iVar8) {
            lVar20 = puVar15[0x11];
            if (lVar20 == 0) goto code_r0x014bb124;
            if (*(uint *)(lVar20 + 0x18) <= uVar10) goto code_r0x014bb128;
            if (iVar8 < (int)plVar23[4] + *(int *)(lVar20 + (long)(int)uVar10 * 4 + 0x20)) {
              return (long *)0x0;
            }
          }
          iVar8 = *(int *)((long)plVar23 + 0x4c);
          if (iVar8 == 0) {
            return (long *)0x0;
          }
          if (0 < iVar8) {
            lVar20 = puVar15[0x12];
            if (lVar20 == 0) goto code_r0x014bb124;
            if (*(uint *)(lVar20 + 0x18) <= uVar10) goto code_r0x014bb128;
            if (iVar8 < (int)plVar23[4] + *(int *)(lVar20 + (long)(int)uVar10 * 4 + 0x20)) {
              return (long *)0x0;
            }
          }
          if (*(float *)(plVar23 + 10) <= 0.0) {
            return (long *)((long)&MACH_HEADER.magic + 1);
          }
          if (puVar15[0x13] != 0) {
            fVar34 = (float)func_0x0001c0c4(puVar15[0x13],(long)(int)uVar10);
            return (long *)(ulong)(fVar34 <= 0.0);
          }
        }
      }
    }
code_r0x014bb124:
    func_0x00f78af4();
code_r0x014bb128:
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
    *(long **)(puVar4 + -0x80) = plVar22;
    *(undefined8 **)(puVar4 + -0x78) = param_4;
    *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x30;
    *(undefined **)(puVar4 + -0x68) = &Atlas_Gameplay_Pickups_PickupTable__get_FallbackUsableID;
    if ((bRam0000000003eb4aee & 1) == 0) {
      func_0x00f78a20(0x3d75da8);
      bRam0000000003eb4aee = 1;
    }
    return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
  }
  if (fVar34 < (float)*piVar27) {
    uVar21 = *(undefined8 *)piVar27;
    uVar28 = *(undefined8 *)(piVar27 + 2);
    goto code_r0x014bafbc;
  }
  piVar27 = piVar27 + 4;
  uVar26 = uVar26 - 1;
  uVar11 = uVar11 - 1;
  if (uVar11 == 0) {
code_r0x014baf7c:
    lVar13 = lVar13 + (long)(int)uVar10 * 0x10;
    uVar21 = *(undefined8 *)(lVar13 + 0x20);
    uVar28 = *(undefined8 *)(lVar13 + 0x28);
code_r0x014bafbc:
    plVar22 = (long *)/*Atlas.Gameplay.Pickups.PickupTable$$RollFromRow*/ func_0x014bb504(lVar20,uVar21,uVar28);
    return plVar22;
  }
  goto code_r0x014baf58;
}



// ============================================================
// RVA: 0x14ba714 | Atlas.Gameplay.Pickups.PickupManager.RollPickup
// ============================================================

/* WARNING: Possible PIC construction at 0x014ba728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baa58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bac3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bac68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bad88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baf04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bad8c) */
/* WARNING: Removing unreachable block (ram,0x014bad90) */
/* WARNING: Removing unreachable block (ram,0x014bad98) */
/* WARNING: Removing unreachable block (ram,0x014bada0) */
/* WARNING: Removing unreachable block (ram,0x014badb4) */
/* WARNING: Removing unreachable block (ram,0x014badbc) */
/* WARNING: Removing unreachable block (ram,0x014badc4) */
/* WARNING: Removing unreachable block (ram,0x0185d89c) */
/* WARNING: Removing unreachable block (ram,0x0185d8b0) */
/* WARNING: Removing unreachable block (ram,0x0185d8b8) */
/* WARNING: Removing unreachable block (ram,0x0185d8bc) */
/* WARNING: Removing unreachable block (ram,0x0185d8cc) */
/* WARNING: Removing unreachable block (ram,0x0185d8d8) */
/* WARNING: Removing unreachable block (ram,0x0185d8dc) */
/* WARNING: Removing unreachable block (ram,0x0185d69c) */
/* WARNING: Removing unreachable block (ram,0x0185d6b0) */
/* WARNING: Removing unreachable block (ram,0x0185d6b8) */
/* WARNING: Removing unreachable block (ram,0x0185d6bc) */
/* WARNING: Removing unreachable block (ram,0x0185d6cc) */
/* WARNING: Removing unreachable block (ram,0x0185d6d8) */
/* WARNING: Removing unreachable block (ram,0x0185d6dc) */
/* WARNING: Removing unreachable block (ram,0x0185d4d4) */
/* WARNING: Removing unreachable block (ram,0x0185d4e8) */
/* WARNING: Removing unreachable block (ram,0x0185d4f0) */
/* WARNING: Removing unreachable block (ram,0x0185d4f4) */
/* WARNING: Removing unreachable block (ram,0x0185d504) */
/* WARNING: Removing unreachable block (ram,0x0185d510) */
/* WARNING: Removing unreachable block (ram,0x0185d514) */
/* WARNING: Removing unreachable block (ram,0x014bac6c) */
/* WARNING: Removing unreachable block (ram,0x014bad0c) */
/* WARNING: Removing unreachable block (ram,0x014bac70) */
/* WARNING: Removing unreachable block (ram,0x014bac78) */
/* WARNING: Removing unreachable block (ram,0x014bac80) */
/* WARNING: Removing unreachable block (ram,0x014bac88) */
/* WARNING: Removing unreachable block (ram,0x014baca0) */
/* WARNING: Removing unreachable block (ram,0x014bacb4) */
/* WARNING: Removing unreachable block (ram,0x014baccc) */
/* WARNING: Removing unreachable block (ram,0x014bacd4) */
/* WARNING: Removing unreachable block (ram,0x014bacd8) */
/* WARNING: Removing unreachable block (ram,0x014bace8) */
/* WARNING: Removing unreachable block (ram,0x014bac40) */
/* WARNING: Removing unreachable block (ram,0x014bac48) */
/* WARNING: Removing unreachable block (ram,0x014bac54) */
/* WARNING: Removing unreachable block (ram,0x014baa5c) */
/* WARNING: Removing unreachable block (ram,0x014baa3c) */
/* WARNING: Removing unreachable block (ram,0x014ba72c) */
/* WARNING: Removing unreachable block (ram,0x014ba748) */
/* WARNING: Removing unreachable block (ram,0x014ba730) */
/* WARNING: Removing unreachable block (ram,0x014baed8) */
/* WARNING: Removing unreachable block (ram,0x014baee0) */
/* WARNING: Removing unreachable block (ram,0x014baeec) */
/* WARNING: Removing unreachable block (ram,0x014baef8) */
/* WARNING: Removing unreachable block (ram,0x014baefc) */

long * Atlas_Gameplay_Pickups_PickupManager__RollPickup
                 (undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  code *pcVar1;
  long **pplVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar9;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  int extraout_w1;
  long extraout_x1;
  long lVar21;
  undefined8 uVar22;
  long *extraout_x1_00;
  long *extraout_x1_01;
  int extraout_w1_00;
  int extraout_w1_01;
  long *plVar23;
  undefined8 uVar24;
  uint extraout_w8;
  long lVar25;
  undefined8 *extraout_x8;
  long extraout_x9;
  ulong uVar26;
  int *piVar27;
  long unaff_x21;
  undefined8 uVar28;
  long *unaff_x22;
  undefined8 unaff_x23;
  code *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar29;
  undefined1 *puVar30;
  undefined *puVar31;
  float fVar32;
  float extraout_s0;
  float fVar33;
  ulong extraout_d0;
  ulong unaff_d8;
  uint uVar34;
  undefined4 uVar35;
  ulong unaff_d9;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  long *plStack_90;
  long *plStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  puStack_28 = (undefined *)0x14ba72c;
  plVar13 = (long *)0x3eb4000;
  plVar14 = param_3;
  if ((bRam0000000003eb4ae9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ae9 = 1;
  }
  uVar11 = unaff_d8;
  uVar26 = unaff_d9;
  if ((param_1[2] != 0) && (lVar21 = *(long *)(param_1[2] + 0x1d0), lVar21 != 0)) {
    plVar13 = *(long **)(lVar21 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)0x0;
    iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar13,0);
    if (iVar7 == 0) {
      if ((param_2 != (long *)0x0) && (param_2[0x12] != 0)) {
        fVar33 = (float)*(int *)(param_2[0x12] + 0x74);
code_r0x014ba870:
        uVar11 = (ulong)(uint)fVar33;
        puVar3 = &stack0xffffffffffffffe0;
        param_4 = param_1;
        plVar14 = param_2;
        puVar30 = puStack_30;
        puVar31 = puStack_28;
        goto code_r0x014babd0;
      }
    }
    else if ((param_2 != (long *)0x0) && (lVar21 = param_2[0x12], lVar21 != 0)) {
      uVar9 = *(uint *)(lVar21 + 0x6c);
      uVar11 = (ulong)uVar9;
      uVar34 = *(uint *)(lVar21 + 0x70);
      uVar26 = (ulong)uVar34;
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar21,0);
      if (plVar13 != (long *)0x0) {
        plVar14 = (long *)0x0;
        fVar32 = (float)/*Atlas.Gameplay.RaceSplineRootBehaviour$$GetDistanceAtTrackCoord*/ func_0x014dd0e4(uVar9,uVar34,plVar13,iVar7 + -1);
        if ((param_1[2] != 0) && (lVar21 = *(long *)(param_1[2] + 0x40), lVar21 != 0)) {
          plVar14 = (long *)0x0;
          lVar21 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetNthPlacedPlayer*/ func_0x015a3554(lVar21,1);
          uVar11 = (ulong)(uint)fVar32;
          if (lVar21 != 0) {
            uVar35 = *(undefined4 *)(lVar21 + 0x6c);
            uVar36 = *(undefined4 *)(lVar21 + 0x70);
            iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar21,0);
            fVar33 = (float)/*Atlas.Gameplay.RaceSplineRootBehaviour$$GetDistanceAtTrackCoord*/ func_0x014dd0e4(uVar35,uVar36,plVar13,iVar7 + -1,0);
            fVar33 = fVar33 - fVar32;
            goto code_r0x014ba870;
          }
        }
      }
    }
  }
  func_0x00f78af4();
  pplVar2 = &plStack_90;
  puStack_78 = &Atlas_Gameplay_Pickups_PickupManager__OnUsablePickedUp;
  pppuVar29 = &ppuStack_80;
  plVar23 = plVar14;
  plStack_90 = param_2;
  plStack_88 = param_3;
  ppuStack_80 = &puStack_30;
  plVar10 = (long *)/*Atlas.Gameplay.Pickups.PickupManager$$IncrementUsableInPlay*/ func_0x014baac8();
  if ((int)plVar10 == 0) {
    return plVar10;
  }
  if ((extraout_x1 != 0) && (plVar14 != (long *)0x0)) {
    lVar21 = *(long *)(extraout_x1 + 0x18);
    plVar13 = plVar14;
    if (plVar14[2] != 0) {
      lVar12 = *(long *)(plVar14[2] + 0x38);
      if (lVar12 == 0) {
        auVar37 = func_0x00f78af4(0,lVar21,0);
        plVar13 = auVar37._0_8_;
        plVar14 = plVar13;
        if (plVar13[2] != 0) {
          lVar21 = *(long *)(plVar13[2] + 0x38);
          if (lVar21 == 0) {
            plVar14 = (long *)func_0x00f78af4();
            return plVar14;
          }
          plVar14 = (long *)Atlas_Gameplay_Kart_KartUsableManager__UpdateShuffleData
                                      (lVar21,auVar37._8_8_,0);
          plVar13[0x18] = auVar37._8_8_;
        }
        return plVar14;
      }
      plVar13 = (long *)Atlas_Gameplay_Kart_KartUsableManager__StartShuffleLocal(lVar12,lVar21,0);
      plVar14[0x18] = lVar21;
    }
    return plVar13;
  }
  puVar31 = &Atlas_Gameplay_Pickups_PickupManager__RollPickupForRemote;
  auVar37 = func_0x00f78af4();
  auVar38._8_8_ = plVar23;
  auVar38._0_8_ = extraout_x1;
  puVar16 = param_1;
  unaff_d8 = uVar11;
  unaff_d9 = uVar26;
  while( true ) {
    unaff_x22 = auVar38._8_8_;
    unaff_x21 = auVar37._8_8_;
    lVar21 = auVar37._0_8_;
    puVar5 = (undefined1 *)((long)pplVar2 + -0x70);
    *(code **)((long)pplVar2 + -0x40) = unaff_x24;
    *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
    *(long **)((long)pplVar2 + -0x30) = plVar13;
    *(undefined8 **)((long)pplVar2 + -0x28) = puVar16;
    *(long *)((long)pplVar2 + -0x20) = auVar38._0_8_;
    *(long **)((long)pplVar2 + -0x18) = plVar14;
    *(undefined1 ****)((long)pplVar2 + -0x10) = pppuVar29;
    *(undefined **)((long)pplVar2 + -8) = puVar31;
    puVar30 = (undefined1 *)((long)pplVar2 + -0x10);
    unaff_x23 = 0x3eb4000;
    param_3 = unaff_x22;
    if ((bRam0000000003eb4ae8 & 1) == 0) {
      func_0x00f78a20(0x3d328c8);
      func_0x00f78a20(0x3d328d0);
      func_0x00f78a20(0x3d328d8);
      func_0x00f78a20(0x3d572f0);
      func_0x00f78a20(0x3d3ae20);
      bRam0000000003eb4ae8 = 1;
    }
    *(undefined8 *)((long)pplVar2 + -0x50) = 0;
    *(undefined8 *)((long)pplVar2 + -0x48) = 0;
    *(undefined8 *)((long)pplVar2 + -0x60) = 0;
    *(undefined8 *)((long)pplVar2 + -0x58) = 0;
    *param_4 = 0;
    if (*(long *)(lVar21 + 0x28) != 0) break;
code_r0x014baa68:
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      param_4 = (undefined8 *)___cxa_begin_catch();
      param_4 = (undefined8 *)*param_4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)pplVar2 + -0x60),uRam0000000003d328c8);
      if (param_4 == (undefined8 *)0x0) {
        return (long *)0x0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar37 = func_0x00f78ac0(param_4,0);
    plVar14 = auVar37._8_8_;
    puVar16 = auVar37._0_8_;
    puVar3 = (undefined1 *)((long)pplVar2 + -0xa0);
    *(long **)((long)pplVar2 + -0xa0) = unaff_x22;
    *(long *)((long)pplVar2 + -0x98) = unaff_x21;
    *(long *)((long)pplVar2 + -0x90) = lVar21;
    *(undefined8 **)((long)pplVar2 + -0x88) = param_4;
    *(undefined1 **)((long)pplVar2 + -0x80) = puVar30;
    *(undefined **)((long)pplVar2 + -0x78) =
         &Atlas_Gameplay_Pickups_PickupManager__IncrementUsableInPlay;
    if (*(char *)(puVar16 + 0x15) == '\0') goto code_r0x014babac;
    if (plVar14 == (long *)0x0) {
code_r0x014babc0:
      func_0x00f78af4();
    }
    else {
      unaff_x21 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
      unaff_x22 = (long *)puVar16[9];
      uVar22 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
      param_4 = puVar16;
      if (unaff_x22 == (long *)0x0) goto code_r0x014babc0;
      iVar7 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(unaff_x22,uVar22);
      lVar21 = plVar14[4];
      uVar9 = (uint)unaff_x21;
      if (iVar7 == 0) {
code_r0x014bab7c:
        if (*(int *)((long)plVar14 + 0x4c) < 1) {
code_r0x014babac:
          return (long *)((long)&MACH_HEADER.magic + 1);
        }
        lVar12 = puVar16[0x12];
        if (lVar12 != 0) {
          if (uVar9 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar9 * 4;
            *(int *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) + (int)lVar21;
            goto code_r0x014babac;
          }
          goto code_r0x014babc4;
        }
        goto code_r0x014babc0;
      }
      lVar25 = puVar16[0x11];
      lVar12 = lVar25 + (long)(int)uVar9 * 4;
      if (iVar7 < 1) {
        if (lVar25 == 0) goto code_r0x014babc0;
code_r0x014bab64:
        if (uVar9 < *(uint *)(lVar25 + 0x18)) {
          *(int *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) + (int)lVar21;
          goto code_r0x014bab7c;
        }
      }
      else {
        if (lVar25 == 0) goto code_r0x014babc0;
        if (uVar9 < *(uint *)(lVar25 + 0x18)) {
          if (iVar7 <= *(int *)(lVar12 + 0x20)) {
            return (long *)0x0;
          }
          goto code_r0x014bab64;
        }
      }
    }
code_r0x014babc4:
    uVar22 = func_0x00f78b24();
    param_1 = (undefined8 *)func_0x00f78ac0(uVar22,0);
    param_2 = extraout_x1_00;
    puVar30 = (undefined1 *)((long)pplVar2 + -0x80);
    puVar31 = &Atlas_Gameplay_Pickups_PickupManager__RollUsableTable;
    uVar11 = extraout_d0;
code_r0x014babd0:
    puVar4 = puVar3 + -0x50;
    *(ulong *)(puVar3 + -0x50) = unaff_d9;
    *(ulong *)(puVar3 + -0x48) = unaff_d8;
    *(code **)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(long **)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(long **)(puVar3 + -0x20) = plVar14;
    *(undefined8 **)(puVar3 + -0x18) = param_4;
    *(undefined1 **)(puVar3 + -0x10) = puVar30;
    *(undefined **)(puVar3 + -8) = puVar31;
    puVar30 = puVar3 + -0x10;
    unaff_d8 = uVar11 & 0xffffffff;
    uVar28 = 0x3eb4000;
    plVar14 = param_3;
    if ((bRam0000000003eb4aeb & 1) == 0) {
      func_0x00f78a20(0x3d21270,param_2);
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb4aeb = 1;
    }
    unaff_x22 = (long *)0x3d57318;
    unaff_x23 = 5;
    lVar21 = param_1[0xc];
    if (lVar21 != 0) {
      fVar33 = (float)uVar11;
      puVar31 = &UNK_014bac40;
      param_4 = param_1;
      plVar13 = param_3;
code_r0x014baf20:
      *(long **)(puVar4 + -0x20) = plVar13;
      *(undefined8 **)(puVar4 + -0x18) = param_4;
      *(undefined1 **)(puVar4 + -0x10) = puVar30;
      *(undefined **)(puVar4 + -8) = puVar31;
      if ((param_3 == (long *)0x0) || (lVar12 = param_3[4], lVar12 == 0)) goto code_r0x014bafd8;
      iVar7 = (int)*(ulong *)(lVar12 + 0x18);
      if (iVar7 == 0) {
        if ((bRam0000000003eb4aee & 1) == 0) {
          func_0x00f78a20(0x3d75da8);
          bRam0000000003eb4aee = 1;
          return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
        }
        return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
      }
      uVar9 = iVar7 - 1;
      uVar11 = (ulong)uVar9;
      if ((int)uVar9 < 1) goto code_r0x014baf7c;
      uVar26 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      piVar27 = (int *)(lVar12 + 0x20);
      goto code_r0x014baf58;
    }
    auVar38 = func_0x00f78af4();
    puVar16 = auVar38._8_8_;
    plVar13 = auVar38._0_8_;
    pplVar2 = (long **)(puVar3 + -0xd0);
    auVar37._8_8_ = puVar3 + -0xd0;
    auVar37._0_8_ = plVar13;
    *(undefined8 *)(puVar3 + -0x80) = 0x3d57318;
    *(undefined8 *)(puVar3 + -0x78) = 0x3eb4000;
    *(long **)(puVar3 + -0x70) = param_3;
    *(undefined8 **)(puVar3 + -0x68) = param_1;
    *(undefined1 **)(puVar3 + -0x60) = puVar30;
    *(undefined **)(puVar3 + -0x58) = &Atlas_Gameplay_Pickups_PickupManager__OnUsableRequested;
    pppuVar29 = (undefined1 ***)(puVar3 + -0x60);
    *(undefined8 *)(puVar3 + -0xa8) = 0;
    *(undefined2 *)(puVar3 + -0xaa) = 0;
    if ((plVar13[6] == 0) || (lVar21 = *(long *)(plVar13[6] + 0x20), param_3 = plVar13, lVar21 == 0)
       ) {
      auVar37 = func_0x00f78af4();
      plVar13 = auVar37._8_8_;
      param_4 = auVar37._0_8_;
      puVar5 = puVar3 + -0x110;
      puVar4 = puVar3 + -0x110;
      *(undefined8 *)(puVar3 + -0x100) = 0x3d57318;
      *(undefined8 *)(puVar3 + -0xf8) = 0x3eb4000;
      *(long **)(puVar3 + -0xf0) = param_3;
      *(undefined8 **)(puVar3 + -0xe8) = param_1;
      *(undefined1 ****)(puVar3 + -0xe0) = pppuVar29;
      *(undefined **)(puVar3 + -0xd8) = &Atlas_Gameplay_Pickups_PickupManager__OnUsableResponse;
      puVar30 = puVar3 + -0xe0;
      uVar28 = 0x3eb4000;
      if ((bRam0000000003eb4aea & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d57318);
        bRam0000000003eb4aea = 1;
      }
      *(undefined8 *)(puVar3 + -0x108) = 0;
      if ((param_4[6] != 0) && (lVar21 = *(long *)(param_4[6] + 0x20), lVar21 != 0)) {
        plVar23 = (long *)/*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar21,0);
        if (((ulong)plVar23 & 1) != 0) {
          return plVar23;
        }
        if (param_4[5] != 0) {
          plVar14 = (long *)(puVar3 + -0x108);
          lVar12 = 0;
          plVar23 = (long *)/*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(param_4[5],plVar13);
          if ((int)plVar23 == 0) {
            return plVar23;
          }
          if (param_4[3] != 0) {
            lVar25 = *(long *)(param_4[3] + 0x10);
            uVar28 = *(undefined8 *)(puVar3 + -0x108);
            auVar37._8_8_ = uVar28;
            auVar37._0_8_ = lVar25;
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar22 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar28,0);
            plVar13 = (long *)0x0;
            if (lVar25 != 0) {
              puVar31 = &UNK_014baed8;
              plVar14 = plRam0000000003d57318;
              goto code_r0x0185c46c;
            }
          }
        }
      }
      puVar31 = &Atlas_Gameplay_Pickups_PickupTable__Roll;
      lVar21 = func_0x00f78af4();
      param_3 = extraout_x1_01;
      fVar33 = extraout_s0;
      goto code_r0x014baf20;
    }
    plVar13 = (long *)/*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar21,0);
    if ((int)plVar13 == 0) {
      return plVar13;
    }
    lVar21 = *plVar14;
    lVar25 = plVar14[3];
    lVar12 = plVar14[2];
    *(long *)(puVar3 + -200) = plVar14[1];
    *(long *)(puVar3 + -0xd0) = lVar21;
    *(long *)(puVar3 + -0xb8) = lVar25;
    *(long *)(puVar3 + -0xc0) = lVar12;
    param_4 = (undefined8 *)(puVar3 + -0xa8);
    puVar31 = &UNK_014bad8c;
    plVar13 = unaff_x22;
  }
  param_3 = (long *)((long)pplVar2 + -0x48);
  lVar12 = 0;
  plVar14 = (long *)/*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar21 + 0x28),unaff_x22);
  if ((int)plVar14 == 0) {
    return plVar14;
  }
  if (((*(long *)(lVar21 + 0x10) == 0) ||
      (lVar25 = *(long *)(*(long *)(lVar21 + 0x10) + 0x130), lVar25 == 0)) ||
     (lVar25 = *(long *)(lVar25 + 0x10), lVar25 == 0)) goto code_r0x014baa68;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)pplVar2 + -0x60),lVar25,uRam0000000003d3ae20);
  unaff_x23 = 0x3d328d0;
  do {
    uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)pplVar2 + -0x60),uRam0000000003d328d0);
    if ((uVar11 & 1) == 0) {
      unaff_x22 = (long *)0x0;
      break;
    }
    unaff_x22 = *(long **)((long)pplVar2 + -0x50);
    if (unaff_x22 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14baa68);
      (*pcVar1)();
    }
  } while (*(int *)((long)unaff_x22 + 0x54) != *(int *)(unaff_x21 + 0xc));
  *(undefined4 *)((long)pplVar2 + -0x70) = 0x6a;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)pplVar2 + -0x60),uRam0000000003d328c8);
  if (*(int *)((long)pplVar2 + -0x70) == 0x6a) {
    *(undefined4 *)((long)pplVar2 + -0x68) = 0;
  }
  if (unaff_x22 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*(long *)(lVar21 + 0x18) == 0) ||
     (lVar25 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar25 == 0)) goto code_r0x014baa68;
  uVar22 = *(undefined8 *)((long)pplVar2 + -0x48);
  puVar31 = &UNK_014baa3c;
  plVar14 = plRam0000000003d572f0;
code_r0x0185c46c:
  *(long **)(puVar5 + -0x30) = unaff_x22;
  *(long *)(puVar5 + -0x28) = auVar37._8_8_;
  *(long *)(puVar5 + -0x20) = auVar37._0_8_;
  *(undefined8 **)(puVar5 + -0x18) = param_4;
  *(undefined1 **)(puVar5 + -0x10) = puVar30;
  *(undefined **)(puVar5 + -8) = puVar31;
  plVar13 = plVar14;
  if ((bRam0000000003eb64d5 & 1) == 0) {
    func_0x00f78a20(0x3d2e280);
    bRam0000000003eb64d5 = 1;
  }
  *(undefined8 *)(puVar5 + -0x40) = 0;
  *(undefined8 *)(puVar5 + -0x38) = 0;
  if (lVar25 != 0) {
    plVar13 = *(long **)plVar14[6];
    iVar7 = (*(code *)*plVar13)(lVar25,puVar5 + -0x38);
    if (iVar7 == 0) {
      return (long *)0x0;
    }
    if (*(long *)(puVar5 + -0x38) != 0) {
      lVar21 = *(long *)(*(long *)(puVar5 + -0x38) + 0x18);
      if (lVar21 == 0) {
        return (long *)0x0;
      }
      iVar7 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$TryGetValue*/ func_0x01e3dc3c(lVar21,uVar22,puVar5 + -0x40,lRam0000000003d2e280);
      if (iVar7 == 0) {
        return (long *)0x0;
      }
      lVar12 = *(long *)(puVar5 + -0x40);
      lVar21 = *(long *)(plVar14[6] + 8);
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
      }
      if (lVar12 == 0) {
        return (long *)0x0;
      }
      plVar14 = (long *)func_0x00f78adc(lVar12,lVar21);
      if (plVar14 == (long *)0x0) {
        func_0x00f78e5c(lVar12,lVar21);
        return (long *)0x0;
      }
      return plVar14;
    }
  }
  auVar37 = func_0x00f78af4();
  lVar21 = auVar37._8_8_;
  *(undefined8 *)(puVar5 + -0x70) = 0x3eb6000;
  *(long *)(puVar5 + -0x68) = lVar25;
  *(undefined8 *)(puVar5 + -0x60) = uVar22;
  *(long **)(puVar5 + -0x58) = plVar14;
  *(undefined1 **)(puVar5 + -0x50) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x48) =
       &Core_Definitions_GameDefinitions__GetDefinitionList_UsableDefinition_;
  lVar25 = **(long **)(lVar21 + 0x30);
  if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar25);
  }
  plVar14 = (long *)func_0x00f78aec(lVar25);
  (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))();
  if (auVar37._0_8_ != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10))(auVar37._0_8_,plVar14);
    return plVar14;
  }
  auVar37 = func_0x00f78af4();
  lVar25 = auVar37._8_8_;
  plVar10 = auVar37._0_8_;
  *(code **)(puVar5 + -0xb0) = unaff_x24;
  *(undefined8 *)(puVar5 + -0xa8) = unaff_x23;
  *(undefined8 *)(puVar5 + -0xa0) = 0x3eb6000;
  *(long **)(puVar5 + -0x98) = plVar14;
  *(long *)(puVar5 + -0x90) = lVar21;
  *(undefined8 *)(puVar5 + -0x88) = 0;
  *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x50;
  *(undefined **)(puVar5 + -0x78) = &Core_Definitions_GameDefinitions__GetDefinitionList_object_;
  lVar21 = 0x3eb6000;
  plVar14 = plVar10;
  plVar23 = plVar13;
  if ((bRam0000000003eb64d6 & 1) == 0) {
    func_0x00f78a20(0x3d2e288);
    func_0x00f78a20(0x3d33bb0);
    func_0x00f78a20(0x3d33bb8);
    func_0x00f78a20(0x3d1c7a8);
    func_0x00f78a20(0x3d220f0);
    plVar14 = (long *)func_0x00f78a20(0x3d41958);
    bRam0000000003eb64d6 = 1;
  }
  *(undefined8 *)(puVar5 + -0xc0) = 0;
  *(undefined8 *)(puVar5 + -0xb8) = 0;
  *(undefined8 *)(puVar5 + -0xd0) = 0;
  *(undefined8 *)(puVar5 + -200) = 0;
  if (lVar25 == 0) {
    return plVar14;
  }
  if (plVar10 == (long *)0x0) {
code_r0x0185c7c8:
    func_0x00f78af4();
    goto code_r0x0185c7cc;
  }
  plVar23 = *(long **)plVar13[6];
  plVar14 = (long *)(*(code *)*plVar23)(plVar10,puVar5 + -0xb8);
  if ((int)plVar14 == 0) {
    return plVar14;
  }
  if (((*(long *)(puVar5 + -0xb8) == 0) ||
      (lVar15 = *(long *)(*(long *)(puVar5 + -0xb8) + 0x18), lVar15 == 0)) ||
     (lVar15 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$get_Values*/ func_0x01e3bed0(lVar15,uRam0000000003d2e288), lVar15 == 0)) goto code_r0x0185c7c8;
  /*System.Collections.Generic.Dictionary.ValueCollection<DefinitionID, object>$$GetEnumerator*/ func_0x01b8d894(puVar5 + -0xd0,lVar15,uRam0000000003d41958);
  unaff_x23 = 0x3d33bb0;
  while (uVar11 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, object>$$MoveNext*/ func_0x01fbc848(puVar5 + -0xd0,uRam0000000003d33bb0), (uVar11 & 1) != 0) {
    plVar10 = *(long **)(puVar5 + -0xc0);
    lVar21 = *(long *)(plVar13[6] + 8);
    unaff_x24 = (code *)**(undefined8 **)(plVar13[6] + 0x10);
    if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar21);
    }
    if (plVar10 == (long *)0x0) {
      lVar15 = 0;
    }
    else {
      lVar15 = func_0x00f78adc(plVar10,lVar21);
      if (lVar15 == 0) {
        func_0x00f78e5c(plVar10,lVar21);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x185c7c8);
        (*pcVar1)();
      }
    }
    plVar23 = *(long **)(plVar13[6] + 0x10);
    (*unaff_x24)(lVar25,lVar15);
  }
  plVar13 = (long *)0x0;
  do {
    *(long *)(puVar5 + -0xe0) = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8;
    uVar11 = (ulong)*(ushort *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + 0x12a);
    if (uVar11 != 0) {
      piVar27 = (int *)(*(long *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar16 = (undefined8 *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + (long)*piVar27 * 0x10 + 0x138);
          goto code_r0x0185c788;
        }
        piVar27 = piVar27 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    plVar23 = (long *)0x0;
    puVar16 = (undefined8 *)func_0x00fac1f0(puVar5 + -0xe0);
code_r0x0185c788:
    plVar14 = (long *)(*(code *)*puVar16)(puVar5 + -0xe0,puVar16[1]);
    if (plVar13 == (long *)0x0) {
      return plVar14;
    }
code_r0x0185c7cc:
    func_0x00f78ac0(plVar13,0);
    if (extraout_w1_00 != 1) break;
    puVar16 = (undefined8 *)___cxa_begin_catch();
    plVar13 = (long *)*puVar16;
    ___cxa_end_catch();
  } while( true );
  auVar37 = __Unwind_Resume();
  *(long *)(puVar5 + -0x110) = lVar21;
  *(long **)(puVar5 + -0x108) = plVar10;
  *(long *)(puVar5 + -0x100) = lVar25;
  *(long **)(puVar5 + -0xf8) = plVar13;
  *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0x80;
  *(undefined **)(puVar5 + -0xe8) = &Core_Definitions_GameDefinitions__GetFirstDefinition_object_;
  if ((bRam0000000003eb64d7 & 1) == 0) {
    func_0x00f78a20(0x3d3a8b0);
    func_0x00f78a20(0x3d3a8b8);
    bRam0000000003eb64d7 = 1;
  }
  *(undefined8 *)(puVar5 + -0x118) = 0;
  if (auVar37._0_8_ != 0) {
    plVar23 = (long *)**(undefined8 **)(auVar37._8_8_ + 0x30);
    iVar7 = (*(code *)*plVar23)(auVar37._0_8_,puVar5 + -0x118);
    if (iVar7 == 0) {
      return (long *)0x0;
    }
    if ((*(long *)(puVar5 + -0x118) != 0) &&
       (lVar25 = *(long *)(*(long *)(puVar5 + -0x118) + 0x20), lVar25 != 0)) {
      if (*(int *)(lVar25 + 0x18) < 1) {
        return (long *)0x0;
      }
      lVar12 = *(long *)(*(long *)(lVar25 + 0x10) + 0x20);
      lVar21 = *(long *)(*(long *)(auVar37._8_8_ + 0x30) + 8);
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
      }
      if (lVar12 == 0) {
        return (long *)0x0;
      }
      plVar14 = (long *)func_0x00f78adc(lVar12,lVar21);
      if (plVar14 == (long *)0x0) {
        func_0x00f78e5c(lVar12,lVar21);
        return (long *)0x0;
      }
      return plVar14;
    }
  }
  auVar38 = func_0x00f78af4();
  *(long *)(puVar5 + -0x150) = lVar21;
  *(undefined8 *)(puVar5 + -0x148) = 0x3eb6000;
  *(undefined1 (*) [16])(puVar5 + -0x140) = auVar37;
  *(undefined1 **)(puVar5 + -0x130) = puVar5 + -0xf0;
  *(undefined **)(puVar5 + -0x128) =
       &Core_Definitions_GameDefinitions__GetRandomDefinition_WheelsDefinition_;
  uVar22 = 0x3eb6000;
  if ((bRam0000000003eb64d8 & 1) == 0) {
    func_0x00f78a20(0x3d3a8b0);
    func_0x00f78a20(0x3d3a8b8);
    bRam0000000003eb64d8 = 1;
  }
  *(undefined8 *)(puVar5 + -0x158) = 0;
  if (auVar38._0_8_ != 0) {
    plVar23 = (long *)**(undefined8 **)(auVar38._8_8_ + 0x30);
    iVar7 = (*(code *)*plVar23)(auVar38._0_8_,puVar5 + -0x158);
    if (iVar7 == 0) {
      return (long *)0x0;
    }
    if ((*(long *)(puVar5 + -0x158) != 0) &&
       (lVar25 = *(long *)(*(long *)(puVar5 + -0x158) + 0x20), lVar25 != 0)) {
      if (*(int *)(lVar25 + 0x18) < 1) {
        return (long *)0x0;
      }
      plVar23 = (long *)0x0;
      uVar9 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0);
      if (*(long *)(puVar5 + -0x158) != 0) {
        lVar25 = *(long *)(*(long *)(puVar5 + -0x158) + 0x20);
        uVar22 = 0;
        if (lVar25 != 0) {
          if (*(uint *)(lVar25 + 0x18) <= uVar9) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar12 = *(long *)(*(long *)(lVar25 + 0x10) + (long)(int)uVar9 * 8 + 0x20);
          lVar21 = *(long *)(*(long *)(auVar38._8_8_ + 0x30) + 8);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          if (lVar12 == 0) {
            return (long *)0x0;
          }
          plVar14 = (long *)func_0x00f78adc(lVar12,lVar21);
          if (plVar14 == (long *)0x0) {
            func_0x00f78e5c(lVar12,lVar21);
            return (long *)0x0;
          }
          return plVar14;
        }
      }
    }
  }
  auVar37 = func_0x00f78af4();
  *(undefined1 **)(puVar5 + -0x170) = puVar5 + -0x130;
  *(undefined **)(puVar5 + -0x168) = &Core_Definitions_GameDefinitions__IsTypeRegistered_object_;
  *(undefined8 *)(puVar5 + -0x178) = 0;
  if (auVar37._0_8_ != 0) {
    plVar14 = (long *)(**(code **)**(undefined8 **)(auVar37._8_8_ + 0x30))
                                (auVar37._0_8_,puVar5 + -0x178);
    return plVar14;
  }
  auVar37 = func_0x00f78af4();
  *(undefined1 **)(puVar5 + -400) = puVar5 + -0x170;
  *(undefined **)(puVar5 + -0x188) = &Core_Definitions_GameDefinitions__IsValidID_object_;
  *(undefined8 *)(puVar5 + -0x198) = 0;
  if (auVar37._0_8_ != 0) {
    plVar14 = (long *)(*(code *)**(undefined8 **)plVar23[6])
                                (auVar37._0_8_,auVar37._8_8_,puVar5 + -0x198);
    return plVar14;
  }
  auVar37 = func_0x00f78af4();
  lVar15 = auVar37._8_8_;
  lVar25 = auVar37._0_8_;
  *(long *)(puVar5 + -0x1d0) = lVar21;
  *(undefined8 *)(puVar5 + -0x1c8) = uVar22;
  *(undefined1 (*) [16])(puVar5 + -0x1c0) = auVar38;
  *(undefined1 **)(puVar5 + -0x1b0) = puVar5 + -400;
  *(undefined **)(puVar5 + -0x1a8) =
       &Core_Definitions_GameDefinitions__RegisterType_WheelsDefinition_;
  if ((bRam0000000003eb64d9 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64d9 = 1;
  }
  uVar22 = **(undefined8 **)(lVar15 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
  if ((plVar14 != (long *)0x0) &&
     (uVar28 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0)),
     lVar25 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0185cb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar14 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(lVar25,uVar28);
    return plVar14;
  }
  auVar37 = func_0x00f78af4();
  lVar21 = auVar37._0_8_;
  *(undefined8 *)(puVar5 + -0x200) = 0x3d25458;
  *(undefined8 *)(puVar5 + -0x1f8) = uVar22;
  *(long *)(puVar5 + -0x1f0) = lVar15;
  *(long *)(puVar5 + -0x1e8) = lVar25;
  *(undefined1 **)(puVar5 + -0x1e0) = puVar5 + -0x1b0;
  *(undefined **)(puVar5 + -0x1d8) = &Core_Definitions_GameDefinitions__RegisterType_object_;
  uVar22 = 0x3eb6000;
  plVar14 = plVar23;
  if ((bRam0000000003eb64da & 1) == 0) {
    func_0x00f78a20(0x3d21268);
    func_0x00f78a20(0x3d3a478);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64da = 1;
  }
  if (lVar21 != 0) {
    plVar14 = (long *)(*(code *)**(undefined8 **)plVar23[6])(lVar21);
    if (((ulong)plVar14 & 1) != 0) {
      return plVar14;
    }
    uVar22 = *(undefined8 *)(plVar23[6] + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar22 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
    plVar23 = (long *)func_0x00f78aec(/*Core.Definitions.DefinitionData_TypeInfo*/ uRam0000000003d21268);
    lVar12 = 0;
    plVar14 = auVar37._8_8_;
    /*Core.Definitions.DefinitionData$$.ctor*/ func_0x0164515c(plVar23,uVar22);
    plVar13 = *(long **)(lVar21 + 0x18);
    if (plVar13 != (long *)0x0) {
      plVar14 = *(long **)(puVar5 + -0x1f0);
      plVar10 = *(long **)(puVar5 + -0x1e8);
      uVar22 = *(undefined8 *)(puVar5 + -0x200);
      uVar28 = *(undefined8 *)(puVar5 + -0x1f8);
      *(long **)(puVar5 + -0x1f0) = plVar14;
      *(long **)(puVar5 + -0x1e8) = plVar10;
      *(undefined8 *)(puVar5 + -0x1e0) = *(undefined8 *)(puVar5 + -0x1e0);
      *(undefined8 *)(puVar5 + -0x1d8) = *(undefined8 *)(puVar5 + -0x1d8);
      lVar21 = plVar13[2];
      puVar16 = puRam0000000003d3a478;
      if (lVar21 == 0) {
code_r0x0242716c:
        plVar23 = plVar14;
        plVar13 = plVar10;
        plVar19 = (long *)func_0x00f78af4();
        lVar21 = extraout_x9;
        uVar9 = extraout_w8;
code_r0x02427170:
        *(uint *)(plVar13 + 3) = uVar9 + 1;
      }
      else {
        uVar9 = *(uint *)(plVar13 + 3);
        plVar19 = plVar13;
        if (uVar9 != *(uint *)(lVar21 + 0x18)) goto code_r0x02427170;
        puVar16 = *(undefined8 **)(*(long *)(puRam0000000003d3a478[3] + 0xc0) + 0x60);
        plVar19 = (long *)(*(code *)*puVar16)(plVar13,uVar9 + 1);
        lVar21 = plVar13[2];
        uVar9 = *(uint *)(plVar13 + 3);
        *(uint *)(plVar13 + 3) = uVar9 + 1;
        plVar10 = plVar13;
        plVar14 = plVar23;
        if (lVar21 == 0) goto code_r0x0242716c;
      }
      if (uVar9 < *(uint *)(lVar21 + 0x18)) {
        *(long **)(lVar21 + (long)(int)uVar9 * 8 + 0x20) = plVar23;
        *(int *)((long)plVar13 + 0x1c) = *(int *)((long)plVar13 + 0x1c) + 1;
        return plVar19;
      }
      uVar20 = func_0x00f78b24();
      auVar37 = func_0x00f78ac0(uVar20,0);
      lVar12 = auVar37._8_8_;
      lVar21 = auVar37._0_8_;
      *(code **)(puVar5 + -0x230) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x228) = unaff_x23;
      *(undefined8 *)(puVar5 + -0x220) = uVar22;
      *(undefined8 *)(puVar5 + -0x218) = uVar28;
      *(long **)(puVar5 + -0x210) = plVar23;
      *(long **)(puVar5 + -0x208) = plVar13;
      *(undefined1 **)(puVar5 + -0x200) = puVar5 + -0x1e0;
      *(undefined **)(puVar5 + -0x1f8) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x48))(lVar12,0x14);
      if (lVar21 != 0) {
        pcVar1 = (code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x28);
        lVar25 = *(long *)(*(long *)(puVar16[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar25);
        }
        if (lVar12 == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = func_0x00f78adc(lVar12,lVar25);
          if (lVar15 == 0) {
            func_0x00f78e5c(lVar12,lVar25);
            goto code_r0x0242734c;
          }
        }
        (*pcVar1)(lVar21,lVar15,*(undefined8 *)(*(long *)(puVar16[3] + 0xc0) + 0x28));
        iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x68))(lVar21);
        return (long *)(ulong)(iVar7 - 1);
      }
      func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x2427350);
      (*pcVar1)();
    }
  }
  auVar39 = func_0x00f78af4();
  plVar10 = (long *)(puVar5 + -0x250);
  *(code **)(puVar5 + -0x240) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x238) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x230) = uVar22;
  *(long **)(puVar5 + -0x228) = plVar23;
  *(long **)(puVar5 + -0x220) = auVar37._8_8_;
  *(long *)(puVar5 + -0x218) = lVar21;
  *(undefined1 **)(puVar5 + -0x210) = puVar5 + -0x1e0;
  *(undefined **)(puVar5 + -0x208) = &Core_Definitions_GameDefinitions__TryGetDefinition_object_;
  plVar13 = (long *)0x3eb6000;
  plVar23 = plVar14;
  lVar21 = lVar12;
  if ((bRam0000000003eb64db & 1) == 0) {
    func_0x00f78a20(0x3d2e280);
    bRam0000000003eb64db = 1;
  }
  *(undefined8 *)(puVar5 + -0x250) = 0;
  *(undefined8 *)(puVar5 + -0x248) = 0;
  if (auVar39._0_8_ == 0) {
code_r0x0185cd4c:
    plVar10 = plVar23;
    func_0x00f78af4();
  }
  else {
    plVar23 = (long *)**(undefined8 **)(lVar12 + 0x30);
    iVar7 = (*(code *)*plVar23)(auVar39._0_8_,puVar5 + -0x248);
    if (iVar7 == 0) {
code_r0x0185ccf0:
      *plVar14 = 0;
      return (long *)0x0;
    }
    if (*(long *)(puVar5 + -0x248) == 0) goto code_r0x0185cd4c;
    lVar25 = *(long *)(*(long *)(puVar5 + -0x248) + 0x18);
    if ((lVar25 == 0) ||
       (lVar21 = lRam0000000003d2e280, iVar7 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$TryGetValue*/ func_0x01e3dc3c(lVar25,auVar39._8_8_), iVar7 == 0))
    goto code_r0x0185ccf0;
    lVar25 = *(long *)(puVar5 + -0x250);
    lVar15 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    auVar39._8_8_ = lVar25;
    auVar39._0_8_ = lVar15;
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    if (lVar25 == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = func_0x00f78adc(lVar25,lVar15);
      if (lVar17 == 0) {
        func_0x00f78e5c(lVar25,lVar15);
        goto code_r0x0185ccf0;
      }
    }
    *plVar14 = lVar17;
    plVar14 = *(long **)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)((long)plVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(plVar14);
    }
    if ((lVar25 == 0) || (lVar25 = func_0x00f78adc(lVar25,plVar14), lVar25 != 0)) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
  }
  auVar37 = func_0x00f78e5c(auVar39._8_8_,plVar14);
  *(long *)(puVar5 + -0x270) = lVar12;
  *(long **)(puVar5 + -0x268) = plVar14;
  *(undefined1 **)(puVar5 + -0x260) = puVar5 + -0x210;
  *(undefined **)(puVar5 + -600) = &Core_Definitions_GameDefinitions__TryGetDefinition_object_;
  *(undefined8 *)(puVar5 + -0x278) = 0;
  if (auVar37._0_8_ != 0) {
    plVar14 = (long *)(**(code **)**(undefined8 **)(lVar21 + 0x30))
                                (auVar37._0_8_,auVar37._8_8_,puVar5 + -0x278);
    lVar21 = *(long *)(puVar5 + -0x278);
    if ((int)plVar14 == 0) {
      lVar21 = 0;
    }
    *plVar10 = lVar21;
    return plVar14;
  }
  auVar37 = func_0x00f78af4();
  plVar23 = auVar37._8_8_;
  lVar25 = auVar37._0_8_;
  *(undefined8 *)(puVar5 + -0x2e0) = unaff_x28;
  *(undefined8 *)(puVar5 + -0x2d8) = unaff_x27;
  *(undefined8 *)(puVar5 + -0x2d0) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x2c8) = unaff_x25;
  *(code **)(puVar5 + -0x2c0) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x2b8) = 0x3eb6000;
  *(undefined1 (*) [16])(puVar5 + -0x2b0) = auVar39;
  *(long *)(puVar5 + -0x2a0) = lVar12;
  *(long **)(puVar5 + -0x298) = plVar14;
  *(undefined1 **)(puVar5 + -0x290) = puVar5 + -0x260;
  *(undefined **)(puVar5 + -0x288) = &Core_Definitions_GameDefinitions__TryGetDefinitionData_object_
  ;
  lVar12 = 0x3eb6000;
  plVar14 = plVar10;
  if ((bRam0000000003eb64dc & 1) == 0) {
    func_0x00f78a20(0x3d323e8);
    func_0x00f78a20(0x3d323f0);
    func_0x00f78a20(0x3d1c730);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3a480);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64dc = 1;
  }
  *(undefined4 *)(puVar5 + -0x308) = 0;
  if (*(long *)(lVar25 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0185cfdc;
  }
  unaff_x26 = 0x3d25458;
  unaff_x24 = (code *)0x3d1c730;
  plVar13 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar5 + -0x328,*(long *)(lVar25 + 0x18),uRam0000000003d3a480);
  *(undefined8 *)(puVar5 + -0x2f8) = *(undefined8 *)(puVar5 + -800);
  *(undefined8 *)(puVar5 + -0x300) = *(undefined8 *)(puVar5 + -0x328);
  *(undefined8 *)(puVar5 + -0x2f0) = *(undefined8 *)(puVar5 + -0x318);
  do {
    uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar5 + -0x300,uRam0000000003d323e8);
    if ((uVar11 & 1) == 0) {
      unaff_x25 = 0;
      lVar12 = 0;
      lVar25 = 0;
      plVar10 = (long *)0x0;
      *(undefined4 *)(puVar5 + -0x310) = 0x4d;
      *(undefined4 *)(puVar5 + -0x308) = 1;
      goto code_r0x0185cf28;
    }
    lVar15 = *(long *)(puVar5 + -0x2f0);
    if (lVar15 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x185cfd8);
      (*pcVar1)();
    }
    uVar22 = *(undefined8 *)(lVar15 + 0x10);
    uVar28 = *(undefined8 *)plVar10[6];
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
    plVar14 = (long *)0x0;
    uVar11 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar22,uVar28);
  } while ((uVar11 & 1) == 0);
  unaff_x25 = 0;
  lVar12 = 0;
  lVar25 = 0;
  *plVar23 = lVar15;
  plVar10 = (long *)((long)&MACH_HEADER.magic + 1);
  *(undefined4 *)(puVar5 + -0x310) = 0x52;
  *(undefined4 *)(puVar5 + -0x308) = 1;
code_r0x0185cf28:
  do {
    lVar15 = *(long *)unaff_x24;
    *(long *)(puVar5 + -0x328) = lVar15;
    uVar11 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar11 != 0) {
      piVar27 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *plVar13) {
          puVar16 = (undefined8 *)(lVar15 + (long)*piVar27 * 0x10 + 0x138);
          goto code_r0x0185cf78;
        }
        piVar27 = piVar27 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    plVar14 = (long *)0x0;
    puVar16 = (undefined8 *)func_0x00fac1f0(puVar5 + -0x328);
code_r0x0185cf78:
    (*(code *)*puVar16)(puVar5 + -0x310,puVar16[1]);
    if (lVar25 == 0) {
      if (((int)unaff_x25 != 0) || (*(int *)(puVar5 + lVar12 * 4 + -0x310) != 0x52)) {
        plVar10 = (long *)0x0;
        *plVar23 = 0;
      }
      return plVar10;
    }
code_r0x0185cfdc:
    func_0x00f78ac0(lVar25,0);
    if (extraout_w1_01 != 1) {
      auVar37 = __Unwind_Resume();
      *(long **)(puVar5 + -0x350) = plVar10;
      *(long **)(puVar5 + -0x348) = plVar23;
      *(undefined1 **)(puVar5 + -0x340) = puVar5 + -0x290;
      *(undefined **)(puVar5 + -0x338) =
           &Core_Definitions_GameDefinitions__TryGetDefinitionList_WheelsDefinition_;
      *(undefined8 *)(puVar5 + -0x358) = 0;
      if (auVar37._0_8_ != 0) {
        plVar14 = *(long **)plVar14[6];
        plVar19 = (long *)(*(code *)*plVar14)(auVar37._0_8_,puVar5 + -0x358);
        if ((int)plVar19 == 0) {
          lVar21 = 0;
        }
        else {
          plVar23 = auVar37._8_8_;
          if (*(long *)(puVar5 + -0x358) == 0) goto code_r0x0185d07c;
          lVar21 = *(long *)(*(long *)(puVar5 + -0x358) + 0x28);
        }
        *auVar37._8_8_ = lVar21;
        return plVar19;
      }
code_r0x0185d07c:
      auVar37 = func_0x00f78af4();
      lVar15 = auVar37._8_8_;
      *(long *)(puVar5 + -0x390) = lVar12;
      *(long *)(puVar5 + -0x388) = lVar25;
      *(long **)(puVar5 + -0x380) = plVar10;
      *(long **)(puVar5 + -0x378) = plVar23;
      *(undefined1 **)(puVar5 + -0x370) = puVar5 + -0x340;
      *(undefined **)(puVar5 + -0x368) =
           &UnityEngine_GameObject__AddComponent_TMP_Dropdown_DropdownItem_;
      if ((bRam0000000003eb64dd & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64dd = 1;
      }
      uVar22 = **(undefined8 **)(lVar15 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
      if (auVar37._0_8_ != 0) {
        uVar22 = /*UnityEngine.GameObject$$AddComponent*/ func_0x0322ed6c(auVar37._0_8_,uVar28,0);
        lVar21 = *(long *)(*(long *)(lVar15 + 0x30) + 8);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        lVar21 = func_0x00f78adc(uVar22,lVar21);
        lVar12 = *(long *)(*(long *)(lVar15 + 0x30) + 8);
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        if (lVar21 != 0) {
          plVar14 = (long *)func_0x00f78adc(lVar21,lVar12);
          if (plVar14 != (long *)0x0) {
            return plVar14;
          }
          func_0x00f78e5c(lVar21,lVar12);
        }
        return (long *)0x0;
      }
      auVar37 = func_0x00f78af4();
      *(undefined8 *)(puVar5 + -0x3c0) = 0x3d25458;
      *(undefined8 *)(puVar5 + -0x3b8) = uVar22;
      *(undefined8 *)(puVar5 + -0x3b0) = 0;
      *(long *)(puVar5 + -0x3a8) = lVar15;
      *(undefined1 **)(puVar5 + -0x3a0) = puVar5 + -0x370;
      *(undefined **)(puVar5 + -0x398) = &UnityEngine_GameObject__GetComponent_VirtualCamera_;
      if ((bRam0000000003eb64de & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64de = 1;
      }
      *(undefined8 *)(puVar5 + -0x3d0) = 0;
      *(undefined8 *)(puVar5 + -0x3c8) = 0;
      uVar22 = **(undefined8 **)(auVar37._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
      if (auVar37._0_8_ != 0) {
        /*UnityEngine.GameObject$$GetComponentFastPath*/ func_0x0322e3dc(auVar37._0_8_,uVar28,puVar5 + -0x3c8,0);
        return *(long **)(puVar5 + -0x3d0);
      }
      auVar37 = func_0x00f78af4();
      *(undefined1 **)(puVar5 + -0x3e0) = puVar5 + -0x3a0;
      *(undefined **)(puVar5 + -0x3d8) =
           &UnityEngine_GameObject__GetComponentInChildren_TMP_Dropdown_DropdownItem_;
      if (auVar37._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar14 = (long *)(**(code **)**(undefined8 **)(auVar37._8_8_ + 0x30))(auVar37._0_8_,0);
        return plVar14;
      }
      auVar37 = func_0x00f78af4();
      *(code **)(puVar5 + -0x420) = unaff_x24;
      *(long **)(puVar5 + -0x418) = plVar13;
      *(undefined8 *)(puVar5 + -0x410) = 0x3eb6000;
      *(undefined8 *)(puVar5 + -0x408) = 0x3d25458;
      *(undefined8 *)(puVar5 + -0x400) = uVar22;
      *(undefined8 *)(puVar5 + -0x3f8) = 0;
      *(undefined1 **)(puVar5 + -0x3f0) = puVar5 + -0x3e0;
      *(undefined **)(puVar5 + -1000) = &UnityEngine_GameObject__GetComponentInChildren_object_;
      plVar13 = plVar14;
      if ((bRam0000000003eb64df & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64df = 1;
      }
      uVar22 = *(undefined8 *)plVar14[6];
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
      if (auVar37._0_8_ == 0) {
        auVar38 = func_0x00f78af4();
        *(undefined1 **)(puVar5 + -0x430) = puVar5 + -0x3f0;
        *(undefined **)(puVar5 + -0x428) = &UnityEngine_GameObject__GetComponentInParent_object_;
        if (auVar38._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar14 = (long *)(**(code **)**(undefined8 **)(auVar38._8_8_ + 0x30))(auVar38._0_8_,0);
          return plVar14;
        }
        auVar38 = func_0x00f78af4();
        *(code **)(puVar5 + -0x470) = unaff_x24;
        *(undefined8 *)(puVar5 + -0x468) = 0x3d25458;
        *(undefined8 *)(puVar5 + -0x460) = uVar22;
        *(undefined8 *)(puVar5 + -0x458) = 0;
        *(long *)(puVar5 + -0x450) = auVar37._8_8_;
        *(long **)(puVar5 + -0x448) = plVar14;
        *(undefined1 **)(puVar5 + -0x440) = puVar5 + -0x430;
        *(undefined **)(puVar5 + -0x438) =
             &UnityEngine_GameObject__GetComponentInParent_UITweenGroup_;
        uVar22 = 0x3d25458;
        plVar14 = plVar13;
        if ((bRam0000000003eb64e0 & 1) == 0) {
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb64e0 = 1;
        }
        uVar28 = *(undefined8 *)plVar13[6];
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
        if (auVar38._0_8_ == 0) {
          auVar40 = func_0x00f78af4();
          lVar12 = auVar40._0_8_;
          puVar6 = puVar5 + -0x4a0;
          *(undefined8 *)(puVar5 + -0x4a0) = uVar28;
          *(undefined8 *)(puVar5 + -0x498) = 0;
          *(long *)(puVar5 + -0x490) = auVar38._8_8_;
          *(long **)(puVar5 + -0x488) = plVar13;
          *(undefined1 **)(puVar5 + -0x480) = puVar5 + -0x440;
          *(undefined **)(puVar5 + -0x478) = &UnityEngine_GameObject__GetComponents_object_;
          puVar30 = puVar5 + -0x480;
          uVar28 = 0x3d25458;
          if ((bRam0000000003eb64e1 & 1) == 0) {
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb64e1 = 1;
          }
          uVar20 = **(undefined8 **)(auVar40._8_8_ + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar20,0);
          if (lVar12 == 0) {
            auVar37 = func_0x00f78af4();
            plVar13 = auVar37._8_8_;
            *(code **)(puVar5 + -0x4e0) = unaff_x24;
            *(undefined8 *)(puVar5 + -0x4d8) = 0x3d25458;
            *(undefined8 *)(puVar5 + -0x4d0) = 0x3d25458;
            *(undefined8 *)(puVar5 + -0x4c8) = uVar20;
            *(undefined8 *)(puVar5 + -0x4c0) = 0;
            *(long *)(puVar5 + -0x4b8) = auVar40._8_8_;
            *(undefined1 **)(puVar5 + -0x4b0) = puVar30;
            *(undefined **)(puVar5 + -0x4a8) = &UnityEngine_GameObject__GetComponents_Volume_;
            plVar23 = plVar14;
            if ((bRam0000000003eb64e2 & 1) == 0) {
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb64e2 = 1;
            }
            uVar22 = *(undefined8 *)plVar14[6];
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
            if (auVar37._0_8_ == 0) {
              auVar37 = func_0x00f78af4();
              *(undefined1 **)(puVar5 + -0x4f0) = puVar5 + -0x4b0;
              *(undefined **)(puVar5 + -0x4e8) =
                   &UnityEngine_GameObject__GetComponentsInChildren_RectTransform_;
              if (auVar37._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar14 = (long *)(**(code **)**(undefined8 **)(auVar37._8_8_ + 0x30))
                                            (auVar37._0_8_,0);
                return plVar14;
              }
              auVar41 = func_0x00f78af4();
              lVar12 = auVar41._8_8_;
              auVar40._8_8_ = plVar23;
              auVar40._0_8_ = auVar41._0_8_;
              puVar6 = puVar5 + -0x530;
              *(code **)(puVar5 + -0x530) = unaff_x24;
              *(undefined8 *)(puVar5 + -0x528) = 0x3eb6000;
              *(undefined8 *)(puVar5 + -0x520) = 0x3d25458;
              *(undefined8 *)(puVar5 + -0x518) = uVar22;
              *(undefined8 *)(puVar5 + -0x510) = 0;
              *(long **)(puVar5 + -0x508) = plVar13;
              *(undefined1 **)(puVar5 + -0x500) = puVar5 + -0x4f0;
              *(undefined **)(puVar5 + -0x4f8) =
                   &UnityEngine_GameObject__GetComponentsInChildren_object_;
              puVar30 = puVar5 + -0x500;
              uVar22 = 0x3d25458;
              plVar13 = plVar23;
              if ((bRam0000000003eb64e3 & 1) == 0) {
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb64e3 = 1;
              }
              uVar28 = *(undefined8 *)plVar23[6];
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
              if (auVar41._0_8_ == 0) {
                auVar37 = func_0x00f78af4();
                *(undefined1 **)(puVar5 + -0x540) = puVar30;
                *(undefined **)(puVar5 + -0x538) =
                     &UnityEngine_GameObject__GetComponentsInChildren_object_;
                if (auVar37._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar14 = (long *)(*(code *)**(undefined8 **)plVar13[6])
                                              (auVar37._0_8_,0,auVar37._8_8_);
                  return plVar14;
                }
                auVar37 = func_0x00f78af4();
                *(code **)(puVar5 + -0x580) = unaff_x24;
                *(undefined8 *)(puVar5 + -0x578) = 0x3d25458;
                *(undefined8 *)(puVar5 + -0x570) = uVar28;
                *(undefined8 *)(puVar5 + -0x568) = 0;
                *(long *)(puVar5 + -0x560) = lVar12;
                *(long **)(puVar5 + -0x558) = plVar23;
                *(undefined1 **)(puVar5 + -0x550) = puVar5 + -0x540;
                *(undefined **)(puVar5 + -0x548) =
                     &UnityEngine_GameObject__GetComponentsInChildren_Renderer_;
                unaff_x24 = (code *)0x3eb6000;
                plVar14 = plVar13;
                lVar25 = lVar21;
                if ((bRam0000000003eb64e4 & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64e4 = 1;
                }
                uVar22 = **(undefined8 **)(lVar21 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
                if (auVar37._0_8_ == 0) {
                  auVar38 = func_0x00f78af4();
                  *(undefined1 **)(puVar5 + -0x590) = puVar5 + -0x550;
                  *(undefined **)(puVar5 + -0x588) =
                       &UnityEngine_GameObject__GetComponentsInParent_object_;
                  if (auVar38._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    plVar14 = (long *)(**(code **)**(undefined8 **)(auVar38._8_8_ + 0x30))
                                                (auVar38._0_8_,0);
                    return plVar14;
                  }
                  auVar41 = func_0x00f78af4();
                  lVar12 = auVar41._8_8_;
                  auVar40._8_8_ = plVar14;
                  auVar40._0_8_ = auVar41._0_8_;
                  puVar6 = puVar5 + -0x5d0;
                  *(undefined8 *)(puVar5 + -0x5d0) = 0x3eb6000;
                  *(undefined8 *)(puVar5 + -0x5c8) = 0x3d25458;
                  *(undefined8 *)(puVar5 + -0x5c0) = uVar22;
                  *(undefined8 *)(puVar5 + -0x5b8) = 0;
                  *(long *)(puVar5 + -0x5b0) = auVar37._8_8_;
                  *(long **)(puVar5 + -0x5a8) = plVar13;
                  *(undefined1 **)(puVar5 + -0x5a0) = puVar5 + -0x590;
                  *(undefined **)(puVar5 + -0x598) =
                       &UnityEngine_GameObject__GetComponentsInParent_object_;
                  puVar30 = puVar5 + -0x5a0;
                  uVar22 = 0x3d25458;
                  plVar13 = plVar14;
                  if ((bRam0000000003eb64e5 & 1) == 0) {
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb64e5 = 1;
                  }
                  uVar28 = *(undefined8 *)plVar14[6];
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
                  if (auVar41._0_8_ == 0) {
                    auVar37 = func_0x00f78af4();
                    *(undefined8 *)(puVar5 + -0x610) = 0x3eb6000;
                    *(undefined8 *)(puVar5 + -0x608) = 0x3d25458;
                    *(undefined8 *)(puVar5 + -0x600) = uVar28;
                    *(undefined8 *)(puVar5 + -0x5f8) = 0;
                    *(long *)(puVar5 + -0x5f0) = lVar12;
                    *(long **)(puVar5 + -0x5e8) = plVar14;
                    *(undefined1 **)(puVar5 + -0x5e0) = puVar30;
                    *(undefined **)(puVar5 + -0x5d8) =
                         &UnityEngine_GameObject__GetComponentsInParent_RectMask2D_;
                    plVar14 = plVar13;
                    if ((bRam0000000003eb64e6 & 1) == 0) {
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb64e6 = 1;
                    }
                    uVar22 = **(undefined8 **)(lVar25 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
                    if (auVar37._0_8_ == 0) {
                      auVar38 = func_0x00f78af4();
                      *(undefined8 *)(puVar5 + -0x650) = 0x3eb6000;
                      *(undefined8 *)(puVar5 + -0x648) = 0x3d25458;
                      *(undefined8 *)(puVar5 + -0x640) = uVar22;
                      *(undefined8 *)(puVar5 + -0x638) = 0;
                      *(long *)(puVar5 + -0x630) = auVar37._8_8_;
                      *(long **)(puVar5 + -0x628) = plVar13;
                      *(undefined1 **)(puVar5 + -0x620) = puVar5 + -0x5e0;
                      *(undefined **)(puVar5 + -0x618) =
                           &UnityEngine_GameObject__TryGetComponent_UniversalAdditionalLightData_;
                      if ((bRam0000000003eb64e7 & 1) == 0) {
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb64e7 = 1;
                      }
                      *(undefined8 *)(puVar5 + -0x660) = 0;
                      *(undefined8 *)(puVar5 + -0x658) = 0;
                      uVar22 = *(undefined8 *)plVar14[6];
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
                      if (auVar38._0_8_ != 0) {
                        /*UnityEngine.GameObject$$TryGetComponentFastPath*/ func_0x0322e9a8(auVar38._0_8_,uVar28,puVar5 + -0x658,0);
                        lVar21 = *(long *)(puVar5 + -0x660);
                        *auVar38._8_8_ = lVar21;
                        return (long *)(ulong)(lVar21 != 0);
                      }
                      auVar37 = func_0x00f78af4();
                      *(undefined8 *)(puVar5 + -0x690) = 0x3d25458;
                      *(undefined8 *)(puVar5 + -0x688) = uVar22;
                      *(undefined8 *)(puVar5 + -0x680) = 0;
                      *(long **)(puVar5 + -0x678) = auVar38._8_8_;
                      *(undefined1 **)(puVar5 + -0x670) = puVar5 + -0x620;
                      *(undefined **)(puVar5 + -0x668) =
                           &Core_Networking_HostUpdateHolder__Update_HostCarUpdate_;
                      plVar14 = (long *)/*FlatBuffers.Table$$__offset*/ func_0x016cf120(auVar37._0_8_,6,0);
                      if ((int)plVar14 == 0) {
                        *extraout_x8 = 0;
                        extraout_x8[1] = 0;
                        extraout_x8[2] = 0;
                      }
                      else {
                        auVar38 = /*FlatBuffers.Table$$__union<HostCarUpdate>*/ func_0x018e3e90(auVar37._0_8_,plVar14,
                                                  **(undefined8 **)(auVar37._8_8_ + 0x30));
                        *(undefined8 *)(puVar5 + -0x6a8) = 0;
                        *(undefined8 *)(puVar5 + -0x6a0) = 0;
                        *(undefined8 *)(puVar5 + -0x698) = 0;
                        plVar14 = (long *)/*System.Nullable<HostCarUpdate>$$.ctor*/ func_0x02652304(puVar5 + -0x6a8,auVar38._0_8_,
                                                          auVar38._8_8_,
                                                          *(undefined8 *)
                                                           (*(long *)(auVar37._8_8_ + 0x30) + 0x10))
                        ;
                        uVar22 = *(undefined8 *)(puVar5 + -0x6a8);
                        extraout_x8[1] = *(undefined8 *)(puVar5 + -0x6a0);
                        *extraout_x8 = uVar22;
                        extraout_x8[2] = *(undefined8 *)(puVar5 + -0x698);
                      }
                      return plVar14;
                    }
                    uVar24 = 1;
                    uVar20 = 1;
                    puVar30 = *(undefined1 **)(puVar5 + -0x5e0);
                    puVar31 = *(undefined **)(puVar5 + -0x5d8);
                    lVar12 = *(long *)(puVar5 + -0x5f0);
                    auVar40._8_8_ = *(undefined8 *)(puVar5 + -0x5e8);
                    auVar40._0_8_ = auVar37._0_8_;
                    uVar28 = *(undefined8 *)(puVar5 + -0x600);
                    auVar41._8_8_ = auVar37._8_8_;
                    auVar41._0_8_ = *(undefined8 *)(puVar5 + -0x5f8);
                    puVar6 = puVar5 + -0x5d0;
                    unaff_x24 = *(code **)(puVar5 + -0x610);
                    uVar22 = *(undefined8 *)(puVar5 + -0x608);
                  }
                  else {
                    uVar24 = 1;
                    uVar20 = 1;
                    plVar13 = (long *)0x0;
                    puVar31 = &UNK_0185d89c;
                  }
                }
                else {
                  uVar24 = 1;
                  uVar20 = 0;
                  puVar30 = *(undefined1 **)(puVar5 + -0x550);
                  puVar31 = *(undefined **)(puVar5 + -0x548);
                  lVar12 = *(long *)(puVar5 + -0x560);
                  auVar40._8_8_ = *(undefined8 *)(puVar5 + -0x558);
                  auVar40._0_8_ = auVar37._0_8_;
                  uVar28 = *(undefined8 *)(puVar5 + -0x570);
                  auVar41._8_8_ = auVar37._8_8_;
                  auVar41._0_8_ = *(undefined8 *)(puVar5 + -0x568);
                  puVar6 = puVar5 + -0x540;
                  unaff_x24 = *(code **)(puVar5 + -0x580);
                  uVar22 = *(undefined8 *)(puVar5 + -0x578);
                }
              }
              else {
                uVar24 = 1;
                uVar20 = 0;
                plVar13 = (long *)0x0;
                puVar31 = &UNK_0185d69c;
              }
            }
            else {
              uVar24 = 0;
              uVar20 = 0;
              puVar30 = *(undefined1 **)(puVar5 + -0x4b0);
              puVar31 = *(undefined **)(puVar5 + -0x4a8);
              lVar12 = *(long *)(puVar5 + -0x4c0);
              auVar40._8_8_ = *(undefined8 *)(puVar5 + -0x4b8);
              auVar40._0_8_ = auVar37._0_8_;
              uVar28 = *(undefined8 *)(puVar5 + -0x4d0);
              auVar41._8_8_ = 1;
              auVar41._0_8_ = *(undefined8 *)(puVar5 + -0x4c8);
              puVar6 = puVar5 + -0x4a0;
              unaff_x24 = *(code **)(puVar5 + -0x4e0);
              uVar22 = *(undefined8 *)(puVar5 + -0x4d8);
            }
          }
          else {
            uVar24 = 0;
            auVar41._8_8_ = 1;
            auVar41._0_8_ = uVar20;
            uVar20 = 0;
            plVar13 = (long *)0x0;
            puVar31 = &UNK_0185d4d4;
          }
          *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
          *(code **)(puVar6 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar6 + -0x38) = uVar22;
          *(undefined8 *)(puVar6 + -0x30) = uVar28;
          *(long *)(puVar6 + -0x28) = auVar41._0_8_;
          *(long *)(puVar6 + -0x20) = lVar12;
          *(long *)(puVar6 + -0x18) = auVar40._8_8_;
          *(undefined1 **)(puVar6 + -0x10) = puVar30;
          *(undefined **)(puVar6 + -8) = puVar31;
          if (pcRam0000000003ebf468 == (code *)0x0) {
            pcRam0000000003ebf468 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x0322e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar14 = (long *)(*pcRam0000000003ebf468)
                                      (auVar40._0_8_,uVar18,1,uVar24,auVar41._8_8_,uVar20,plVar13);
          return plVar14;
        }
        lVar21 = /*UnityEngine.GameObject$$GetComponentInParent*/ func_0x0322e528(auVar38._0_8_,uVar20,auVar38._8_8_,0);
        lVar12 = *(long *)(plVar13[6] + 8);
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        if (lVar21 != 0) {
          plVar14 = (long *)func_0x00f78adc(lVar21,lVar12);
          if (plVar14 != (long *)0x0) {
            return plVar14;
          }
          func_0x00f78e5c(lVar21,lVar12);
        }
        return (long *)0x0;
      }
      lVar21 = /*UnityEngine.GameObject$$GetComponentInChildren*/ func_0x03227bec(auVar37._0_8_,uVar28,auVar37._8_8_,0);
      lVar12 = *(long *)(plVar14[6] + 8);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      if (lVar21 != 0) {
        plVar14 = (long *)func_0x00f78adc(lVar21,lVar12);
        if (plVar14 != (long *)0x0) {
          return plVar14;
        }
        func_0x00f78e5c(lVar21,lVar12);
      }
      return (long *)0x0;
    }
    plVar10 = (long *)___cxa_begin_catch();
    lVar25 = *plVar10;
    ___cxa_end_catch();
    plVar10 = (long *)0x0;
    lVar12 = -1;
    unaff_x25 = 1;
  } while( true );
code_r0x014baf58:
  if (uVar26 == 0) {
    uVar22 = func_0x00f78b24();
    func_0x00f78ac0(uVar22,0);
code_r0x014bafd8:
    puVar16 = (undefined8 *)func_0x00f78af4();
    *(code **)(puVar4 + -0x60) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x58) = 5;
    *(undefined8 *)(puVar4 + -0x50) = 0x3d57318;
    *(undefined8 *)(puVar4 + -0x48) = uVar28;
    *(long **)(puVar4 + -0x40) = plVar13;
    *(undefined8 **)(puVar4 + -0x38) = param_4;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x28) = &Atlas_Gameplay_Pickups_PickupManager__IsUseableAvailable;
    if (plVar14 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
      lVar21 = puVar16[9];
      uVar22 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
      param_4 = puVar16;
      plVar13 = plVar14;
      if (lVar21 != 0) {
        iVar7 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(lVar21,uVar22);
        lVar21 = puVar16[0xb];
        uVar22 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
        if (lVar21 != 0) {
          iVar8 = Atlas_Gameplay_Usables_UsableManager__AreAnyUsablesLeftInPool(lVar21,uVar22,0);
          if (iVar8 == 0 || iVar7 == 0) {
            return (long *)0x0;
          }
          if (0 < iVar7) {
            lVar21 = puVar16[0x11];
            if (lVar21 == 0) goto code_r0x014bb124;
            if (*(uint *)(lVar21 + 0x18) <= uVar9) goto code_r0x014bb128;
            if (iVar7 < (int)plVar14[4] + *(int *)(lVar21 + (long)(int)uVar9 * 4 + 0x20)) {
              return (long *)0x0;
            }
          }
          iVar7 = *(int *)((long)plVar14 + 0x4c);
          if (iVar7 == 0) {
            return (long *)0x0;
          }
          if (0 < iVar7) {
            lVar21 = puVar16[0x12];
            if (lVar21 == 0) goto code_r0x014bb124;
            if (*(uint *)(lVar21 + 0x18) <= uVar9) goto code_r0x014bb128;
            if (iVar7 < (int)plVar14[4] + *(int *)(lVar21 + (long)(int)uVar9 * 4 + 0x20)) {
              return (long *)0x0;
            }
          }
          if (*(float *)(plVar14 + 10) <= 0.0) {
            return (long *)((long)&MACH_HEADER.magic + 1);
          }
          if (puVar16[0x13] != 0) {
            fVar33 = (float)func_0x0001c0c4(puVar16[0x13],(long)(int)uVar9);
            return (long *)(ulong)(fVar33 <= 0.0);
          }
        }
      }
    }
code_r0x014bb124:
    func_0x00f78af4();
code_r0x014bb128:
    uVar22 = func_0x00f78b24();
    func_0x00f78ac0(uVar22,0);
    *(long **)(puVar4 + -0x80) = plVar13;
    *(undefined8 **)(puVar4 + -0x78) = param_4;
    *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x30;
    *(undefined **)(puVar4 + -0x68) = &Atlas_Gameplay_Pickups_PickupTable__get_FallbackUsableID;
    if ((bRam0000000003eb4aee & 1) == 0) {
      func_0x00f78a20(0x3d75da8);
      bRam0000000003eb4aee = 1;
    }
    return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
  }
  if (fVar33 < (float)*piVar27) {
    uVar22 = *(undefined8 *)piVar27;
    uVar28 = *(undefined8 *)(piVar27 + 2);
    goto code_r0x014bafbc;
  }
  piVar27 = piVar27 + 4;
  uVar26 = uVar26 - 1;
  uVar11 = uVar11 - 1;
  if (uVar11 == 0) {
code_r0x014baf7c:
    lVar12 = lVar12 + (long)(int)uVar9 * 0x10;
    uVar22 = *(undefined8 *)(lVar12 + 0x20);
    uVar28 = *(undefined8 *)(lVar12 + 0x28);
code_r0x014bafbc:
    plVar14 = (long *)/*Atlas.Gameplay.Pickups.PickupTable$$RollFromRow*/ func_0x014bb504(lVar21,uVar22,uVar28);
    return plVar14;
  }
  goto code_r0x014baf58;
}



// ============================================================
// RVA: 0x14ba74c | Atlas.Gameplay.Pickups.PickupManager.RollPickupInternal
// ============================================================

/* WARNING: Possible PIC construction at 0x014bac3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bac68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bad88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baf04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ba8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baa58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014baa3c) */
/* WARNING: Removing unreachable block (ram,0x014ba8b0) */
/* WARNING: Removing unreachable block (ram,0x014ba8d4) */
/* WARNING: Removing unreachable block (ram,0x014ba8b4) */
/* WARNING: Removing unreachable block (ram,0x014ba8b8) */
/* WARNING: Removing unreachable block (ram,0x014ba8e0) */
/* WARNING: Removing unreachable block (ram,0x014ba8bc) */
/* WARNING: Removing unreachable block (ram,0x015a561c) */
/* WARNING: Removing unreachable block (ram,0x015a5630) */
/* WARNING: Removing unreachable block (ram,0x015a5658) */
/* WARNING: Removing unreachable block (ram,0x015a563c) */
/* WARNING: Removing unreachable block (ram,0x015a564c) */
/* WARNING: Removing unreachable block (ram,0x014baed8) */
/* WARNING: Removing unreachable block (ram,0x014baee0) */
/* WARNING: Removing unreachable block (ram,0x014baeec) */
/* WARNING: Removing unreachable block (ram,0x014baef8) */
/* WARNING: Removing unreachable block (ram,0x014baefc) */
/* WARNING: Removing unreachable block (ram,0x015a565c) */
/* WARNING: Removing unreachable block (ram,0x015a5670) */
/* WARNING: Removing unreachable block (ram,0x015a5698) */
/* WARNING: Removing unreachable block (ram,0x015a567c) */
/* WARNING: Removing unreachable block (ram,0x015a568c) */
/* WARNING: Removing unreachable block (ram,0x014bad8c) */
/* WARNING: Removing unreachable block (ram,0x014bad90) */
/* WARNING: Removing unreachable block (ram,0x014bad98) */
/* WARNING: Removing unreachable block (ram,0x014bada0) */
/* WARNING: Removing unreachable block (ram,0x014badb4) */
/* WARNING: Removing unreachable block (ram,0x014badbc) */
/* WARNING: Removing unreachable block (ram,0x014badc4) */
/* WARNING: Removing unreachable block (ram,0x0185d89c) */
/* WARNING: Removing unreachable block (ram,0x0185d8b0) */
/* WARNING: Removing unreachable block (ram,0x0185d8b8) */
/* WARNING: Removing unreachable block (ram,0x0185d8bc) */
/* WARNING: Removing unreachable block (ram,0x0185d8cc) */
/* WARNING: Removing unreachable block (ram,0x0185d8d8) */
/* WARNING: Removing unreachable block (ram,0x0185d8dc) */
/* WARNING: Removing unreachable block (ram,0x0185d69c) */
/* WARNING: Removing unreachable block (ram,0x0185d6b0) */
/* WARNING: Removing unreachable block (ram,0x0185d6b8) */
/* WARNING: Removing unreachable block (ram,0x0185d6bc) */
/* WARNING: Removing unreachable block (ram,0x0185d6cc) */
/* WARNING: Removing unreachable block (ram,0x0185d6d8) */
/* WARNING: Removing unreachable block (ram,0x0185d6dc) */
/* WARNING: Removing unreachable block (ram,0x0185d4d4) */
/* WARNING: Removing unreachable block (ram,0x0185d4e8) */
/* WARNING: Removing unreachable block (ram,0x0185d4f0) */
/* WARNING: Removing unreachable block (ram,0x0185d4f4) */
/* WARNING: Removing unreachable block (ram,0x0185d504) */
/* WARNING: Removing unreachable block (ram,0x0185d510) */
/* WARNING: Removing unreachable block (ram,0x0185d514) */
/* WARNING: Removing unreachable block (ram,0x014bac6c) */
/* WARNING: Removing unreachable block (ram,0x014bad0c) */
/* WARNING: Removing unreachable block (ram,0x014bac70) */
/* WARNING: Removing unreachable block (ram,0x014bac78) */
/* WARNING: Removing unreachable block (ram,0x014bac80) */
/* WARNING: Removing unreachable block (ram,0x014bac88) */
/* WARNING: Removing unreachable block (ram,0x014baca0) */
/* WARNING: Removing unreachable block (ram,0x014bacb4) */
/* WARNING: Removing unreachable block (ram,0x014baccc) */
/* WARNING: Removing unreachable block (ram,0x014bacd4) */
/* WARNING: Removing unreachable block (ram,0x014bacd8) */
/* WARNING: Removing unreachable block (ram,0x014bace8) */
/* WARNING: Removing unreachable block (ram,0x014bac40) */
/* WARNING: Removing unreachable block (ram,0x014bac48) */
/* WARNING: Removing unreachable block (ram,0x014bac54) */
/* WARNING: Removing unreachable block (ram,0x014baa5c) */

long * Atlas_Gameplay_Pickups_PickupManager__RollPickupInternal
                 (long *param_1,long param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  int extraout_w1;
  long extraout_x1;
  long extraout_x1_00;
  long *extraout_x1_01;
  int extraout_w1_00;
  int extraout_w1_01;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  uint extraout_w8;
  long lVar19;
  undefined8 *extraout_x8;
  long extraout_x9;
  ulong uVar20;
  int *piVar21;
  long *unaff_x19;
  long *unaff_x20;
  long lVar22;
  long *unaff_x21;
  undefined1 *puVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  long *unaff_x22;
  long *plVar27;
  undefined8 unaff_x23;
  code *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 **ppuVar28;
  undefined1 *puVar29;
  undefined *unaff_x30;
  undefined *puVar30;
  float fVar31;
  float fVar32;
  float extraout_s0;
  ulong extraout_d0;
  uint uVar33;
  ulong unaff_d8;
  uint uVar34;
  undefined4 uVar35;
  ulong unaff_d9;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  plVar16 = param_3;
  if ((bRam0000000003eb4ae9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ae9 = 1;
  }
  plVar27 = (long *)0x3eb4000;
  uVar9 = unaff_d8;
  uVar20 = unaff_d9;
  if ((param_1[2] != 0) && (lVar19 = *(long *)(param_1[2] + 0x1d0), lVar19 != 0)) {
    plVar27 = *(long **)(lVar19 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar16 = (long *)0x0;
    iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar27,0);
    if (iVar6 == 0) {
      if ((param_2 != 0) && (*(long *)(param_2 + 0x90) != 0)) {
        fVar32 = (float)*(int *)(*(long *)(param_2 + 0x90) + 0x74);
LAB_014ba870:
        uVar9 = (ulong)(uint)fVar32;
        plVar16 = param_3;
        goto code_r0x014babd0;
      }
    }
    else if ((param_2 != 0) && (lVar19 = *(long *)(param_2 + 0x90), lVar19 != 0)) {
      uVar33 = *(uint *)(lVar19 + 0x6c);
      uVar9 = (ulong)uVar33;
      uVar34 = *(uint *)(lVar19 + 0x70);
      uVar20 = (ulong)uVar34;
      iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar19,0);
      if (plVar27 != (long *)0x0) {
        plVar16 = (long *)0x0;
        fVar31 = (float)/*Atlas.Gameplay.RaceSplineRootBehaviour$$GetDistanceAtTrackCoord*/ func_0x014dd0e4(uVar33,uVar34,plVar27,iVar6 + -1);
        if ((param_1[2] != 0) && (lVar19 = *(long *)(param_1[2] + 0x40), lVar19 != 0)) {
          plVar16 = (long *)0x0;
          lVar19 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetNthPlacedPlayer*/ func_0x015a3554(lVar19,1);
          uVar9 = (ulong)(uint)fVar31;
          if (lVar19 != 0) {
            uVar35 = *(undefined4 *)(lVar19 + 0x6c);
            uVar36 = *(undefined4 *)(lVar19 + 0x70);
            iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar19,0);
            fVar32 = (float)/*Atlas.Gameplay.RaceSplineRootBehaviour$$GetDistanceAtTrackCoord*/ func_0x014dd0e4(uVar35,uVar36,plVar27,iVar6 + -1,0);
            fVar32 = fVar32 - fVar31;
            goto LAB_014ba870;
          }
        }
      }
    }
  }
  unaff_x22 = plVar27;
  auVar37 = func_0x00f78af4();
  plVar27 = auVar37._8_8_;
  plVar2 = &lStack_70;
  puStack_58 = &Atlas_Gameplay_Pickups_PickupManager__OnUsablePickedUp;
  ppuVar28 = &puStack_60;
  puVar30 = &UNK_014ba8b0;
  unaff_x19 = plVar16;
  unaff_x21 = param_1;
  unaff_d8 = uVar9;
  unaff_d9 = uVar20;
  lStack_70 = param_2;
  plStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
code_r0x014baac8:
  unaff_x20 = auVar37._8_8_;
  plVar17 = auVar37._0_8_;
  register0x00000008 = (BADSPACEBASE *)((long)plVar2 + -0x30);
  *(long **)((long)plVar2 + -0x30) = unaff_x22;
  *(long **)((long)plVar2 + -0x28) = unaff_x21;
  *(long **)((long)plVar2 + -0x20) = plVar27;
  *(long **)((long)plVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)plVar2 + -0x10) = ppuVar28;
  *(undefined **)((long)plVar2 + -8) = puVar30;
  unaff_x29 = (undefined1 *)((long)plVar2 + -0x10);
  if ((char)plVar17[0x15] == '\0') {
code_r0x014babac:
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  if (unaff_x20 == (long *)0x0) {
code_r0x014babc0:
    func_0x00f78af4();
  }
  else {
    unaff_x21 = (long *)(**(code **)(*unaff_x20 + 0x188))
                                  (unaff_x20,*(undefined8 *)(*unaff_x20 + 400));
    unaff_x22 = (long *)plVar17[9];
    uVar26 = (**(code **)(*unaff_x20 + 0x188))(unaff_x20,*(undefined8 *)(*unaff_x20 + 400));
    unaff_x19 = plVar17;
    if (unaff_x22 == (long *)0x0) goto code_r0x014babc0;
    iVar6 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(unaff_x22,uVar26);
    lVar19 = unaff_x20[4];
    uVar33 = (uint)unaff_x21;
    if (iVar6 == 0) {
code_r0x014bab7c:
      if (0 < *(int *)((long)unaff_x20 + 0x4c)) {
        lVar22 = plVar17[0x12];
        if (lVar22 == 0) goto code_r0x014babc0;
        if (*(uint *)(lVar22 + 0x18) <= uVar33) goto code_r0x014babc4;
        lVar22 = lVar22 + (long)(int)uVar33 * 4;
        *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + (int)lVar19;
      }
      goto code_r0x014babac;
    }
    lVar24 = plVar17[0x11];
    lVar22 = lVar24 + (long)(int)uVar33 * 4;
    if (iVar6 < 1) {
      if (lVar24 == 0) goto code_r0x014babc0;
code_r0x014bab64:
      if (uVar33 < *(uint *)(lVar24 + 0x18)) {
        *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + (int)lVar19;
        goto code_r0x014bab7c;
      }
    }
    else {
      if (lVar24 == 0) goto code_r0x014babc0;
      if (uVar33 < *(uint *)(lVar24 + 0x18)) {
        if (iVar6 <= *(int *)(lVar22 + 0x20)) {
          return (long *)0x0;
        }
        goto code_r0x014bab64;
      }
    }
  }
code_r0x014babc4:
  uVar26 = func_0x00f78b24();
  unaff_x30 = &Atlas_Gameplay_Pickups_PickupManager__RollUsableTable;
  param_1 = (long *)func_0x00f78ac0(uVar26,0);
  param_2 = extraout_x1;
  uVar9 = extraout_d0;
code_r0x014babd0:
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
  *(code **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar29 = (undefined1 *)((long)register0x00000008 + -0x10);
  unaff_d8 = uVar9 & 0xffffffff;
  puVar23 = (undefined1 *)0x3eb4000;
  plVar17 = plVar16;
  if ((bRam0000000003eb4aeb & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57318);
    bRam0000000003eb4aeb = 1;
    param_2 = extraout_x1_00;
  }
  unaff_x22 = (long *)0x3d57318;
  unaff_x23 = 5;
  lVar19 = param_1[0xc];
  if (lVar19 != 0) {
    fVar32 = (float)uVar9;
    puVar30 = &UNK_014bac40;
    unaff_x19 = param_1;
    plVar27 = plVar16;
code_r0x014baf20:
    *(long **)(puVar3 + -0x20) = plVar27;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar29;
    *(undefined **)(puVar3 + -8) = puVar30;
    if ((plVar16 == (long *)0x0) || (lVar22 = plVar16[4], lVar22 == 0)) goto code_r0x014bafd8;
    iVar6 = (int)*(ulong *)(lVar22 + 0x18);
    if (iVar6 == 0) {
      if ((bRam0000000003eb4aee & 1) == 0) {
        func_0x00f78a20(0x3d75da8);
        bRam0000000003eb4aee = 1;
        return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
      }
      return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
    }
    uVar33 = iVar6 - 1;
    uVar9 = (ulong)uVar33;
    if ((int)uVar33 < 1) goto code_r0x014baf7c;
    uVar20 = *(ulong *)(lVar22 + 0x18) & 0xffffffff;
    piVar21 = (int *)(lVar22 + 0x20);
    goto code_r0x014baf58;
  }
  auVar37 = func_0x00f78af4(0,param_2);
  plVar25 = auVar37._8_8_;
  plVar27 = auVar37._0_8_;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0xd0);
  unaff_x21 = (long *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3d57318;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3eb4000;
  *(long **)((long)register0x00000008 + -0x70) = plVar16;
  *(long **)((long)register0x00000008 + -0x68) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x60) = puVar29;
  *(undefined **)((long)register0x00000008 + -0x58) =
       &Atlas_Gameplay_Pickups_PickupManager__OnUsableRequested;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined2 *)((long)register0x00000008 + -0xaa) = 0;
  if ((plVar27[6] == 0) || (lVar19 = *(long *)(plVar27[6] + 0x20), plVar16 = plVar27, lVar19 == 0))
  {
    auVar37 = func_0x00f78af4();
    plVar27 = auVar37._8_8_;
    unaff_x19 = auVar37._0_8_;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x110);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3d57318;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0x3eb4000;
    *(long **)((long)register0x00000008 + -0xf0) = plVar16;
    *(long **)((long)register0x00000008 + -0xe8) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0xe0) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0xd8) =
         &Atlas_Gameplay_Pickups_PickupManager__OnUsableResponse;
    puVar29 = (undefined1 *)((long)register0x00000008 + -0xe0);
    puVar23 = (undefined1 *)0x3eb4000;
    if ((bRam0000000003eb4aea & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb4aea = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    if ((unaff_x19[6] != 0) && (lVar19 = *(long *)(unaff_x19[6] + 0x20), lVar19 != 0)) {
      plVar16 = (long *)/*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar19,0);
      if (((ulong)plVar16 & 1) != 0) {
        return plVar16;
      }
      if (unaff_x19[5] != 0) {
        plVar17 = (long *)((long)register0x00000008 + -0x108);
        lVar19 = 0;
        plVar16 = (long *)/*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(unaff_x19[5],plVar27);
        if ((int)plVar16 == 0) {
          return plVar16;
        }
        if (unaff_x19[3] != 0) {
          plVar25 = *(long **)(unaff_x19[3] + 0x10);
          puVar23 = *(undefined1 **)((long)register0x00000008 + -0x108);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar26 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(puVar23,0);
          plVar27 = (long *)0x0;
          if (plVar25 != (long *)0x0) {
            puVar30 = &UNK_014baed8;
            plVar16 = plRam0000000003d57318;
            plVar27 = plVar25;
            goto code_r0x0185c46c;
          }
        }
      }
    }
    puVar30 = &Atlas_Gameplay_Pickups_PickupTable__Roll;
    lVar19 = func_0x00f78af4();
    plVar16 = extraout_x1_01;
    fVar32 = extraout_s0;
    goto code_r0x014baf20;
  }
  plVar16 = (long *)/*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar19,0);
  if ((int)plVar16 == 0) {
    return plVar16;
  }
  lVar19 = *plVar17;
  lVar24 = plVar17[3];
  lVar22 = plVar17[2];
  *(long *)((long)register0x00000008 + -200) = plVar17[1];
  *(long *)((long)register0x00000008 + -0xd0) = lVar19;
  *(long *)((long)register0x00000008 + -0xb8) = lVar24;
  *(long *)((long)register0x00000008 + -0xc0) = lVar22;
  unaff_x19 = (long *)((long)register0x00000008 + -0xa8);
  puVar4 = (undefined1 *)((long)register0x00000008 + -0x140);
  plVar2 = (long *)((long)register0x00000008 + -0x140);
  *(code **)((long)register0x00000008 + -0x110) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x108) = 5;
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3d57318;
  *(long **)((long)register0x00000008 + -0xf8) = plVar25;
  *(long **)((long)register0x00000008 + -0xf0) = plVar27;
  *(long **)((long)register0x00000008 + -0xe8) = plVar17;
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_014bad8c;
  ppuVar28 = (undefined1 **)((long)register0x00000008 + -0xe0);
  unaff_x23 = 0x3eb4000;
  plVar16 = plVar25;
  if ((bRam0000000003eb4ae8 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d572f0);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb4ae8 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
  *unaff_x19 = 0;
  unaff_x22 = plVar25;
  if (plVar27[5] != 0) {
    plVar16 = (long *)((long)register0x00000008 + -0x118);
    lVar19 = 0;
    plVar17 = (long *)/*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(plVar27[5],plVar25);
    if ((int)plVar17 == 0) {
      return plVar17;
    }
    if (((plVar27[2] != 0) && (lVar22 = *(long *)(plVar27[2] + 0x130), lVar22 != 0)) &&
       (lVar22 = *(long *)(lVar22 + 0x10), lVar22 != 0)) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x130),lVar22,uRam0000000003d3ae20)
      ;
      unaff_x23 = 0x3d328d0;
      do {
        uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x130),
                                uRam0000000003d328d0);
        if ((uVar9 & 1) == 0) {
          unaff_x22 = (long *)0x0;
          break;
        }
        unaff_x22 = *(long **)((long)register0x00000008 + -0x120);
        if (unaff_x22 == (long *)0x0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14baa68);
          (*pcVar1)();
        }
      } while (*(int *)((long)unaff_x22 + 0x54) != *(int *)((long)register0x00000008 + -0xc4));
      *(undefined4 *)((long)register0x00000008 + -0x140) = 0x6a;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x130),uRam0000000003d328c8);
      if (*(int *)((long)register0x00000008 + -0x140) == 0x6a) {
        *(undefined4 *)((long)register0x00000008 + -0x138) = 0;
      }
      if (unaff_x22 == (long *)0x0) {
        return (long *)0x0;
      }
      if ((plVar27[3] != 0) && (plVar25 = *(long **)(plVar27[3] + 0x10), plVar25 != (long *)0x0)) {
        uVar26 = *(undefined8 *)((long)register0x00000008 + -0x118);
        puVar30 = &UNK_014baa3c;
        plVar16 = plRam0000000003d572f0;
code_r0x0185c46c:
        *(long **)(puVar4 + -0x30) = unaff_x22;
        *(undefined1 **)(puVar4 + -0x28) = puVar23;
        *(long **)(puVar4 + -0x20) = plVar27;
        *(long **)(puVar4 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar4 + -0x10) = (undefined1 *)((long)register0x00000008 + -0xe0);
        *(undefined **)(puVar4 + -8) = puVar30;
        plVar27 = plVar16;
        if ((bRam0000000003eb64d5 & 1) == 0) {
          func_0x00f78a20(0x3d2e280);
          bRam0000000003eb64d5 = 1;
        }
        *(undefined8 *)(puVar4 + -0x40) = 0;
        *(undefined8 *)(puVar4 + -0x38) = 0;
        if (plVar25 != (long *)0x0) {
          plVar27 = *(long **)plVar16[6];
          iVar6 = (*(code *)*plVar27)(plVar25,puVar4 + -0x38);
          if (iVar6 == 0) {
            return (long *)0x0;
          }
          if (*(long *)(puVar4 + -0x38) != 0) {
            lVar19 = *(long *)(*(long *)(puVar4 + -0x38) + 0x18);
            if (lVar19 == 0) {
              return (long *)0x0;
            }
            iVar6 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$TryGetValue*/ func_0x01e3dc3c(lVar19,uVar26,puVar4 + -0x40,lRam0000000003d2e280);
            if (iVar6 == 0) {
              return (long *)0x0;
            }
            lVar22 = *(long *)(puVar4 + -0x40);
            lVar19 = *(long *)(plVar16[6] + 8);
            if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar19);
            }
            if (lVar22 == 0) {
              return (long *)0x0;
            }
            plVar16 = (long *)func_0x00f78adc(lVar22,lVar19);
            if (plVar16 == (long *)0x0) {
              func_0x00f78e5c(lVar22,lVar19);
              return (long *)0x0;
            }
            return plVar16;
          }
        }
        auVar37 = func_0x00f78af4();
        lVar22 = auVar37._8_8_;
        *(undefined8 *)(puVar4 + -0x70) = 0x3eb6000;
        *(long **)(puVar4 + -0x68) = plVar25;
        *(undefined8 *)(puVar4 + -0x60) = uVar26;
        *(long **)(puVar4 + -0x58) = plVar16;
        *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x48) =
             &Core_Definitions_GameDefinitions__GetDefinitionList_UsableDefinition_;
        lVar24 = **(long **)(lVar22 + 0x30);
        if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar24);
        }
        plVar16 = (long *)func_0x00f78aec(lVar24);
        (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))();
        if (auVar37._0_8_ != 0) {
          (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))(auVar37._0_8_,plVar16);
          return plVar16;
        }
        auVar37 = func_0x00f78af4();
        lVar24 = auVar37._8_8_;
        plVar25 = auVar37._0_8_;
        *(code **)(puVar4 + -0xb0) = unaff_x24;
        *(undefined8 *)(puVar4 + -0xa8) = unaff_x23;
        *(undefined8 *)(puVar4 + -0xa0) = 0x3eb6000;
        *(long **)(puVar4 + -0x98) = plVar16;
        *(long *)(puVar4 + -0x90) = lVar22;
        *(undefined8 *)(puVar4 + -0x88) = 0;
        *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x50;
        *(undefined **)(puVar4 + -0x78) =
             &Core_Definitions_GameDefinitions__GetDefinitionList_object_;
        lVar22 = 0x3eb6000;
        plVar16 = plVar25;
        plVar17 = plVar27;
        if ((bRam0000000003eb64d6 & 1) == 0) {
          func_0x00f78a20(0x3d2e288);
          func_0x00f78a20(0x3d33bb0);
          func_0x00f78a20(0x3d33bb8);
          func_0x00f78a20(0x3d1c7a8);
          func_0x00f78a20(0x3d220f0);
          plVar16 = (long *)func_0x00f78a20(0x3d41958);
          bRam0000000003eb64d6 = 1;
        }
        *(undefined8 *)(puVar4 + -0xc0) = 0;
        *(undefined8 *)(puVar4 + -0xb8) = 0;
        *(undefined8 *)(puVar4 + -0xd0) = 0;
        *(undefined8 *)(puVar4 + -200) = 0;
        if (lVar24 == 0) {
          return plVar16;
        }
        if (plVar25 == (long *)0x0) {
code_r0x0185c7c8:
          func_0x00f78af4();
          goto code_r0x0185c7cc;
        }
        plVar17 = *(long **)plVar27[6];
        plVar16 = (long *)(*(code *)*plVar17)(plVar25,puVar4 + -0xb8);
        if ((int)plVar16 == 0) {
          return plVar16;
        }
        if (((*(long *)(puVar4 + -0xb8) == 0) ||
            (lVar8 = *(long *)(*(long *)(puVar4 + -0xb8) + 0x18), lVar8 == 0)) ||
           (lVar8 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$get_Values*/ func_0x01e3bed0(lVar8,uRam0000000003d2e288), lVar8 == 0)) goto code_r0x0185c7c8;
        /*System.Collections.Generic.Dictionary.ValueCollection<DefinitionID, object>$$GetEnumerator*/ func_0x01b8d894(puVar4 + -0xd0,lVar8,uRam0000000003d41958);
        unaff_x23 = 0x3d33bb0;
        while (uVar9 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, object>$$MoveNext*/ func_0x01fbc848(puVar4 + -0xd0,uRam0000000003d33bb0), (uVar9 & 1) != 0) {
          plVar25 = *(long **)(puVar4 + -0xc0);
          lVar22 = *(long *)(plVar27[6] + 8);
          unaff_x24 = (code *)**(undefined8 **)(plVar27[6] + 0x10);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          if (plVar25 == (long *)0x0) {
            lVar8 = 0;
          }
          else {
            lVar8 = func_0x00f78adc(plVar25,lVar22);
            if (lVar8 == 0) {
              func_0x00f78e5c(plVar25,lVar22);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x185c7c8);
              (*pcVar1)();
            }
          }
          plVar17 = *(long **)(plVar27[6] + 0x10);
          (*unaff_x24)(lVar24,lVar8);
        }
        plVar27 = (long *)0x0;
        do {
          *(long *)(puVar4 + -0xe0) = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8;
          uVar9 = (ulong)*(ushort *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + 0x12a);
          if (uVar9 != 0) {
            piVar21 = (int *)(*(long *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar10 = (undefined8 *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x0185c788;
              }
              piVar21 = piVar21 + 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          plVar17 = (long *)0x0;
          puVar10 = (undefined8 *)func_0x00fac1f0(puVar4 + -0xe0);
code_r0x0185c788:
          plVar16 = (long *)(*(code *)*puVar10)(puVar4 + -0xe0,puVar10[1]);
          if (plVar27 == (long *)0x0) {
            return plVar16;
          }
code_r0x0185c7cc:
          func_0x00f78ac0(plVar27,0);
          if (extraout_w1_00 != 1) goto code_r0x0185c7f8;
          puVar10 = (undefined8 *)___cxa_begin_catch();
          plVar27 = (long *)*puVar10;
          ___cxa_end_catch();
        } while( true );
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    puVar10 = (undefined8 *)___cxa_begin_catch();
    unaff_x19 = (long *)*puVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x130),uRam0000000003d328c8);
    if (unaff_x19 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  else {
    __Unwind_Resume();
  }
  puVar30 = &Atlas_Gameplay_Pickups_PickupManager__IncrementUsableInPlay;
  auVar37 = func_0x00f78ac0(unaff_x19,0);
  goto code_r0x014baac8;
code_r0x014baf58:
  if (uVar20 == 0) {
    uVar26 = func_0x00f78b24();
    func_0x00f78ac0(uVar26,0);
code_r0x014bafd8:
    plVar16 = (long *)func_0x00f78af4();
    *(code **)(puVar3 + -0x60) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x58) = 5;
    *(undefined8 *)(puVar3 + -0x50) = 0x3d57318;
    *(undefined1 **)(puVar3 + -0x48) = puVar23;
    *(long **)(puVar3 + -0x40) = plVar27;
    *(long **)(puVar3 + -0x38) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_Gameplay_Pickups_PickupManager__IsUseableAvailable;
    if (plVar17 != (long *)0x0) {
      uVar33 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
      lVar19 = plVar16[9];
      uVar26 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
      unaff_x19 = plVar16;
      plVar27 = plVar17;
      if (lVar19 != 0) {
        iVar6 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(lVar19,uVar26);
        lVar19 = plVar16[0xb];
        uVar26 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
        if (lVar19 != 0) {
          iVar7 = Atlas_Gameplay_Usables_UsableManager__AreAnyUsablesLeftInPool(lVar19,uVar26,0);
          if (iVar7 == 0 || iVar6 == 0) {
            return (long *)0x0;
          }
          if (0 < iVar6) {
            lVar19 = plVar16[0x11];
            if (lVar19 == 0) goto code_r0x014bb124;
            if (*(uint *)(lVar19 + 0x18) <= uVar33) goto code_r0x014bb128;
            if (iVar6 < (int)plVar17[4] + *(int *)(lVar19 + (long)(int)uVar33 * 4 + 0x20)) {
              return (long *)0x0;
            }
          }
          iVar6 = *(int *)((long)plVar17 + 0x4c);
          if (iVar6 == 0) {
            return (long *)0x0;
          }
          if (0 < iVar6) {
            lVar19 = plVar16[0x12];
            if (lVar19 == 0) goto code_r0x014bb124;
            if (*(uint *)(lVar19 + 0x18) <= uVar33) goto code_r0x014bb128;
            if (iVar6 < (int)plVar17[4] + *(int *)(lVar19 + (long)(int)uVar33 * 4 + 0x20)) {
              return (long *)0x0;
            }
          }
          if (*(float *)(plVar17 + 10) <= 0.0) {
            return (long *)((long)&MACH_HEADER.magic + 1);
          }
          if (plVar16[0x13] != 0) {
            fVar32 = (float)func_0x0001c0c4(plVar16[0x13],(long)(int)uVar33);
            return (long *)(ulong)(fVar32 <= 0.0);
          }
        }
      }
    }
code_r0x014bb124:
    func_0x00f78af4();
code_r0x014bb128:
    uVar26 = func_0x00f78b24();
    func_0x00f78ac0(uVar26,0);
    *(long **)(puVar3 + -0x80) = plVar27;
    *(long **)(puVar3 + -0x78) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x30;
    *(undefined **)(puVar3 + -0x68) = &Atlas_Gameplay_Pickups_PickupTable__get_FallbackUsableID;
    if ((bRam0000000003eb4aee & 1) == 0) {
      func_0x00f78a20(0x3d75da8);
      bRam0000000003eb4aee = 1;
    }
    return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
  }
  if (fVar32 < (float)*piVar21) {
    uVar26 = *(undefined8 *)piVar21;
    uVar11 = *(undefined8 *)(piVar21 + 2);
    goto code_r0x014bafbc;
  }
  piVar21 = piVar21 + 4;
  uVar20 = uVar20 - 1;
  uVar9 = uVar9 - 1;
  if (uVar9 == 0) {
code_r0x014baf7c:
    lVar22 = lVar22 + (long)(int)uVar33 * 0x10;
    uVar26 = *(undefined8 *)(lVar22 + 0x20);
    uVar11 = *(undefined8 *)(lVar22 + 0x28);
code_r0x014bafbc:
    plVar16 = (long *)/*Atlas.Gameplay.Pickups.PickupTable$$RollFromRow*/ func_0x014bb504(lVar19,uVar26,uVar11);
    return plVar16;
  }
  goto code_r0x014baf58;
code_r0x0185c7f8:
  auVar37 = __Unwind_Resume();
  *(long *)(puVar4 + -0x110) = lVar22;
  *(long **)(puVar4 + -0x108) = plVar25;
  *(long *)(puVar4 + -0x100) = lVar24;
  *(long **)(puVar4 + -0xf8) = plVar27;
  *(undefined1 **)(puVar4 + -0xf0) = puVar4 + -0x80;
  *(undefined **)(puVar4 + -0xe8) = &Core_Definitions_GameDefinitions__GetFirstDefinition_object_;
  if ((bRam0000000003eb64d7 & 1) == 0) {
    func_0x00f78a20(0x3d3a8b0);
    func_0x00f78a20(0x3d3a8b8);
    bRam0000000003eb64d7 = 1;
  }
  *(undefined8 *)(puVar4 + -0x118) = 0;
  if (auVar37._0_8_ != 0) {
    plVar17 = (long *)**(undefined8 **)(auVar37._8_8_ + 0x30);
    iVar6 = (*(code *)*plVar17)(auVar37._0_8_,puVar4 + -0x118);
    if (iVar6 == 0) {
      return (long *)0x0;
    }
    if ((*(long *)(puVar4 + -0x118) != 0) &&
       (lVar24 = *(long *)(*(long *)(puVar4 + -0x118) + 0x20), lVar24 != 0)) {
      if (*(int *)(lVar24 + 0x18) < 1) {
        return (long *)0x0;
      }
      lVar22 = *(long *)(*(long *)(lVar24 + 0x10) + 0x20);
      lVar19 = *(long *)(*(long *)(auVar37._8_8_ + 0x30) + 8);
      if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar19);
      }
      if (lVar22 == 0) {
        return (long *)0x0;
      }
      plVar16 = (long *)func_0x00f78adc(lVar22,lVar19);
      if (plVar16 == (long *)0x0) {
        func_0x00f78e5c(lVar22,lVar19);
        return (long *)0x0;
      }
      return plVar16;
    }
  }
  auVar38 = func_0x00f78af4();
  *(long *)(puVar4 + -0x150) = lVar22;
  *(undefined8 *)(puVar4 + -0x148) = 0x3eb6000;
  *(undefined1 (*) [16])(puVar4 + -0x140) = auVar37;
  *(undefined1 **)(puVar4 + -0x130) = puVar4 + -0xf0;
  *(undefined **)(puVar4 + -0x128) =
       &Core_Definitions_GameDefinitions__GetRandomDefinition_WheelsDefinition_;
  uVar26 = 0x3eb6000;
  if ((bRam0000000003eb64d8 & 1) == 0) {
    func_0x00f78a20(0x3d3a8b0);
    func_0x00f78a20(0x3d3a8b8);
    bRam0000000003eb64d8 = 1;
  }
  *(undefined8 *)(puVar4 + -0x158) = 0;
  if (auVar38._0_8_ != 0) {
    plVar17 = (long *)**(undefined8 **)(auVar38._8_8_ + 0x30);
    iVar6 = (*(code *)*plVar17)(auVar38._0_8_,puVar4 + -0x158);
    if (iVar6 == 0) {
      return (long *)0x0;
    }
    if ((*(long *)(puVar4 + -0x158) != 0) &&
       (lVar24 = *(long *)(*(long *)(puVar4 + -0x158) + 0x20), lVar24 != 0)) {
      if (*(int *)(lVar24 + 0x18) < 1) {
        return (long *)0x0;
      }
      plVar17 = (long *)0x0;
      uVar33 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0);
      if (*(long *)(puVar4 + -0x158) != 0) {
        lVar24 = *(long *)(*(long *)(puVar4 + -0x158) + 0x20);
        uVar26 = 0;
        if (lVar24 != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar33) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar22 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)uVar33 * 8 + 0x20);
          lVar19 = *(long *)(*(long *)(auVar38._8_8_ + 0x30) + 8);
          if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar19);
          }
          if (lVar22 == 0) {
            return (long *)0x0;
          }
          plVar16 = (long *)func_0x00f78adc(lVar22,lVar19);
          if (plVar16 == (long *)0x0) {
            func_0x00f78e5c(lVar22,lVar19);
            return (long *)0x0;
          }
          return plVar16;
        }
      }
    }
  }
  auVar37 = func_0x00f78af4();
  *(undefined1 **)(puVar4 + -0x170) = puVar4 + -0x130;
  *(undefined **)(puVar4 + -0x168) = &Core_Definitions_GameDefinitions__IsTypeRegistered_object_;
  *(undefined8 *)(puVar4 + -0x178) = 0;
  if (auVar37._0_8_ != 0) {
    plVar16 = (long *)(**(code **)**(undefined8 **)(auVar37._8_8_ + 0x30))
                                (auVar37._0_8_,puVar4 + -0x178);
    return plVar16;
  }
  auVar37 = func_0x00f78af4();
  *(undefined1 **)(puVar4 + -400) = puVar4 + -0x170;
  *(undefined **)(puVar4 + -0x188) = &Core_Definitions_GameDefinitions__IsValidID_object_;
  *(undefined8 *)(puVar4 + -0x198) = 0;
  if (auVar37._0_8_ != 0) {
    plVar16 = (long *)(*(code *)**(undefined8 **)plVar17[6])
                                (auVar37._0_8_,auVar37._8_8_,puVar4 + -0x198);
    return plVar16;
  }
  auVar37 = func_0x00f78af4();
  lVar8 = auVar37._8_8_;
  lVar24 = auVar37._0_8_;
  *(long *)(puVar4 + -0x1d0) = lVar22;
  *(undefined8 *)(puVar4 + -0x1c8) = uVar26;
  *(undefined1 (*) [16])(puVar4 + -0x1c0) = auVar38;
  *(undefined1 **)(puVar4 + -0x1b0) = puVar4 + -400;
  *(undefined **)(puVar4 + -0x1a8) =
       &Core_Definitions_GameDefinitions__RegisterType_WheelsDefinition_;
  if ((bRam0000000003eb64d9 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64d9 = 1;
  }
  uVar26 = **(undefined8 **)(lVar8 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar16 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
  if ((plVar16 != (long *)0x0) &&
     (uVar11 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0)),
     lVar24 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0185cb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar16 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))(lVar24,uVar11);
    return plVar16;
  }
  auVar37 = func_0x00f78af4();
  lVar22 = auVar37._0_8_;
  *(undefined8 *)(puVar4 + -0x200) = 0x3d25458;
  *(undefined8 *)(puVar4 + -0x1f8) = uVar26;
  *(long *)(puVar4 + -0x1f0) = lVar8;
  *(long *)(puVar4 + -0x1e8) = lVar24;
  *(undefined1 **)(puVar4 + -0x1e0) = puVar4 + -0x1b0;
  *(undefined **)(puVar4 + -0x1d8) = &Core_Definitions_GameDefinitions__RegisterType_object_;
  uVar26 = 0x3eb6000;
  plVar16 = plVar17;
  if ((bRam0000000003eb64da & 1) == 0) {
    func_0x00f78a20(0x3d21268);
    func_0x00f78a20(0x3d3a478);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64da = 1;
  }
  if (lVar22 != 0) {
    plVar16 = (long *)(*(code *)**(undefined8 **)plVar17[6])(lVar22);
    if (((ulong)plVar16 & 1) != 0) {
      return plVar16;
    }
    uVar26 = *(undefined8 *)(plVar17[6] + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
    plVar17 = (long *)func_0x00f78aec(/*Core.Definitions.DefinitionData_TypeInfo*/ uRam0000000003d21268);
    lVar19 = 0;
    plVar16 = auVar37._8_8_;
    /*Core.Definitions.DefinitionData$$.ctor*/ func_0x0164515c(plVar17,uVar26);
    plVar27 = *(long **)(lVar22 + 0x18);
    if (plVar27 != (long *)0x0) {
      plVar16 = *(long **)(puVar4 + -0x1f0);
      plVar25 = *(long **)(puVar4 + -0x1e8);
      uVar26 = *(undefined8 *)(puVar4 + -0x200);
      uVar11 = *(undefined8 *)(puVar4 + -0x1f8);
      *(long **)(puVar4 + -0x1f0) = plVar16;
      *(long **)(puVar4 + -0x1e8) = plVar25;
      *(undefined8 *)(puVar4 + -0x1e0) = *(undefined8 *)(puVar4 + -0x1e0);
      *(undefined8 *)(puVar4 + -0x1d8) = *(undefined8 *)(puVar4 + -0x1d8);
      lVar19 = plVar27[2];
      puVar10 = puRam0000000003d3a478;
      if (lVar19 == 0) {
code_r0x0242716c:
        plVar17 = plVar16;
        plVar27 = plVar25;
        plVar14 = (long *)func_0x00f78af4();
        lVar19 = extraout_x9;
        uVar33 = extraout_w8;
code_r0x02427170:
        *(uint *)(plVar27 + 3) = uVar33 + 1;
      }
      else {
        uVar33 = *(uint *)(plVar27 + 3);
        plVar14 = plVar27;
        if (uVar33 != *(uint *)(lVar19 + 0x18)) goto code_r0x02427170;
        puVar10 = *(undefined8 **)(*(long *)(puRam0000000003d3a478[3] + 0xc0) + 0x60);
        plVar14 = (long *)(*(code *)*puVar10)(plVar27,uVar33 + 1);
        lVar19 = plVar27[2];
        uVar33 = *(uint *)(plVar27 + 3);
        *(uint *)(plVar27 + 3) = uVar33 + 1;
        plVar25 = plVar27;
        plVar16 = plVar17;
        if (lVar19 == 0) goto code_r0x0242716c;
      }
      if (uVar33 < *(uint *)(lVar19 + 0x18)) {
        *(long **)(lVar19 + (long)(int)uVar33 * 8 + 0x20) = plVar17;
        *(int *)((long)plVar27 + 0x1c) = *(int *)((long)plVar27 + 0x1c) + 1;
        return plVar14;
      }
      uVar15 = func_0x00f78b24();
      auVar37 = func_0x00f78ac0(uVar15,0);
      lVar22 = auVar37._8_8_;
      lVar19 = auVar37._0_8_;
      *(code **)(puVar4 + -0x230) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x228) = unaff_x23;
      *(undefined8 *)(puVar4 + -0x220) = uVar26;
      *(undefined8 *)(puVar4 + -0x218) = uVar11;
      *(long **)(puVar4 + -0x210) = plVar17;
      *(long **)(puVar4 + -0x208) = plVar27;
      *(undefined1 **)(puVar4 + -0x200) = puVar4 + -0x1e0;
      *(undefined **)(puVar4 + -0x1f8) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(lVar22,0x14);
      if (lVar19 != 0) {
        pcVar1 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
        lVar24 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar24);
        }
        if (lVar22 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = func_0x00f78adc(lVar22,lVar24);
          if (lVar8 == 0) {
            func_0x00f78e5c(lVar22,lVar24);
            goto code_r0x0242734c;
          }
        }
        (*pcVar1)(lVar19,lVar8,*(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28));
        iVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar19);
        return (long *)(ulong)(iVar6 - 1);
      }
      func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x2427350);
      (*pcVar1)();
    }
  }
  auVar38 = func_0x00f78af4();
  plVar25 = (long *)(puVar4 + -0x250);
  *(code **)(puVar4 + -0x240) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x238) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x230) = uVar26;
  *(long **)(puVar4 + -0x228) = plVar17;
  *(long **)(puVar4 + -0x220) = auVar37._8_8_;
  *(long *)(puVar4 + -0x218) = lVar22;
  *(undefined1 **)(puVar4 + -0x210) = puVar4 + -0x1e0;
  *(undefined **)(puVar4 + -0x208) = &Core_Definitions_GameDefinitions__TryGetDefinition_object_;
  plVar27 = (long *)0x3eb6000;
  plVar17 = plVar16;
  lVar22 = lVar19;
  if ((bRam0000000003eb64db & 1) == 0) {
    func_0x00f78a20(0x3d2e280);
    bRam0000000003eb64db = 1;
  }
  *(undefined8 *)(puVar4 + -0x250) = 0;
  *(undefined8 *)(puVar4 + -0x248) = 0;
  if (auVar38._0_8_ == 0) {
code_r0x0185cd4c:
    plVar25 = plVar17;
    func_0x00f78af4();
  }
  else {
    plVar17 = (long *)**(undefined8 **)(lVar19 + 0x30);
    iVar6 = (*(code *)*plVar17)(auVar38._0_8_,puVar4 + -0x248);
    if (iVar6 == 0) {
code_r0x0185ccf0:
      *plVar16 = 0;
      return (long *)0x0;
    }
    if (*(long *)(puVar4 + -0x248) == 0) goto code_r0x0185cd4c;
    lVar24 = *(long *)(*(long *)(puVar4 + -0x248) + 0x18);
    if ((lVar24 == 0) ||
       (lVar22 = lRam0000000003d2e280, iVar6 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$TryGetValue*/ func_0x01e3dc3c(lVar24,auVar38._8_8_), iVar6 == 0))
    goto code_r0x0185ccf0;
    lVar24 = *(long *)(puVar4 + -0x250);
    lVar8 = *(long *)(*(long *)(lVar19 + 0x30) + 8);
    auVar38._8_8_ = lVar24;
    auVar38._0_8_ = lVar8;
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    if (lVar24 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = func_0x00f78adc(lVar24,lVar8);
      if (lVar12 == 0) {
        func_0x00f78e5c(lVar24,lVar8);
        goto code_r0x0185ccf0;
      }
    }
    *plVar16 = lVar12;
    plVar16 = *(long **)(*(long *)(lVar19 + 0x30) + 8);
    if ((*(ushort *)((long)plVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(plVar16);
    }
    if ((lVar24 == 0) || (lVar24 = func_0x00f78adc(lVar24,plVar16), lVar24 != 0)) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
  }
  auVar37 = func_0x00f78e5c(auVar38._8_8_,plVar16);
  *(long *)(puVar4 + -0x270) = lVar19;
  *(long **)(puVar4 + -0x268) = plVar16;
  *(undefined1 **)(puVar4 + -0x260) = puVar4 + -0x210;
  *(undefined **)(puVar4 + -600) = &Core_Definitions_GameDefinitions__TryGetDefinition_object_;
  *(undefined8 *)(puVar4 + -0x278) = 0;
  if (auVar37._0_8_ != 0) {
    plVar16 = (long *)(**(code **)**(undefined8 **)(lVar22 + 0x30))
                                (auVar37._0_8_,auVar37._8_8_,puVar4 + -0x278);
    lVar19 = *(long *)(puVar4 + -0x278);
    if ((int)plVar16 == 0) {
      lVar19 = 0;
    }
    *plVar25 = lVar19;
    return plVar16;
  }
  auVar37 = func_0x00f78af4();
  plVar17 = auVar37._8_8_;
  lVar24 = auVar37._0_8_;
  *(undefined8 *)(puVar4 + -0x2e0) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x2d8) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x2d0) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x2c8) = unaff_x25;
  *(code **)(puVar4 + -0x2c0) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x2b8) = 0x3eb6000;
  *(undefined1 (*) [16])(puVar4 + -0x2b0) = auVar38;
  *(long *)(puVar4 + -0x2a0) = lVar19;
  *(long **)(puVar4 + -0x298) = plVar16;
  *(undefined1 **)(puVar4 + -0x290) = puVar4 + -0x260;
  *(undefined **)(puVar4 + -0x288) = &Core_Definitions_GameDefinitions__TryGetDefinitionData_object_
  ;
  lVar19 = 0x3eb6000;
  plVar16 = plVar25;
  if ((bRam0000000003eb64dc & 1) == 0) {
    func_0x00f78a20(0x3d323e8);
    func_0x00f78a20(0x3d323f0);
    func_0x00f78a20(0x3d1c730);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3a480);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64dc = 1;
  }
  *(undefined4 *)(puVar4 + -0x308) = 0;
  if (*(long *)(lVar24 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0185cfdc;
  }
  unaff_x26 = 0x3d25458;
  unaff_x24 = (code *)0x3d1c730;
  plVar27 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x328,*(long *)(lVar24 + 0x18),uRam0000000003d3a480);
  *(undefined8 *)(puVar4 + -0x2f8) = *(undefined8 *)(puVar4 + -800);
  *(undefined8 *)(puVar4 + -0x300) = *(undefined8 *)(puVar4 + -0x328);
  *(undefined8 *)(puVar4 + -0x2f0) = *(undefined8 *)(puVar4 + -0x318);
  do {
    uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0x300,uRam0000000003d323e8);
    if ((uVar9 & 1) == 0) {
      unaff_x25 = 0;
      lVar19 = 0;
      lVar24 = 0;
      plVar25 = (long *)0x0;
      *(undefined4 *)(puVar4 + -0x310) = 0x4d;
      *(undefined4 *)(puVar4 + -0x308) = 1;
      goto code_r0x0185cf28;
    }
    lVar8 = *(long *)(puVar4 + -0x2f0);
    if (lVar8 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x185cfd8);
      (*pcVar1)();
    }
    uVar26 = *(undefined8 *)(lVar8 + 0x10);
    uVar11 = *(undefined8 *)plVar25[6];
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
    plVar16 = (long *)0x0;
    uVar9 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar26,uVar11);
  } while ((uVar9 & 1) == 0);
  unaff_x25 = 0;
  lVar19 = 0;
  lVar24 = 0;
  *plVar17 = lVar8;
  plVar25 = (long *)((long)&MACH_HEADER.magic + 1);
  *(undefined4 *)(puVar4 + -0x310) = 0x52;
  *(undefined4 *)(puVar4 + -0x308) = 1;
code_r0x0185cf28:
  do {
    lVar8 = *(long *)unaff_x24;
    *(long *)(puVar4 + -0x328) = lVar8;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar21 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *plVar27) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x0185cf78;
        }
        piVar21 = piVar21 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    plVar16 = (long *)0x0;
    puVar10 = (undefined8 *)func_0x00fac1f0(puVar4 + -0x328);
code_r0x0185cf78:
    (*(code *)*puVar10)(puVar4 + -0x310,puVar10[1]);
    if (lVar24 == 0) {
      if (((int)unaff_x25 != 0) || (*(int *)(puVar4 + lVar19 * 4 + -0x310) != 0x52)) {
        plVar25 = (long *)0x0;
        *plVar17 = 0;
      }
      return plVar25;
    }
code_r0x0185cfdc:
    func_0x00f78ac0(lVar24,0);
    if (extraout_w1_01 != 1) {
      auVar37 = __Unwind_Resume();
      *(long **)(puVar4 + -0x350) = plVar25;
      *(long **)(puVar4 + -0x348) = plVar17;
      *(undefined1 **)(puVar4 + -0x340) = puVar4 + -0x290;
      *(undefined **)(puVar4 + -0x338) =
           &Core_Definitions_GameDefinitions__TryGetDefinitionList_WheelsDefinition_;
      *(undefined8 *)(puVar4 + -0x358) = 0;
      if (auVar37._0_8_ != 0) {
        plVar16 = *(long **)plVar16[6];
        plVar14 = (long *)(*(code *)*plVar16)(auVar37._0_8_,puVar4 + -0x358);
        if ((int)plVar14 == 0) {
          lVar19 = 0;
        }
        else {
          plVar17 = auVar37._8_8_;
          if (*(long *)(puVar4 + -0x358) == 0) goto code_r0x0185d07c;
          lVar19 = *(long *)(*(long *)(puVar4 + -0x358) + 0x28);
        }
        *auVar37._8_8_ = lVar19;
        return plVar14;
      }
code_r0x0185d07c:
      auVar37 = func_0x00f78af4();
      lVar8 = auVar37._8_8_;
      *(long *)(puVar4 + -0x390) = lVar19;
      *(long *)(puVar4 + -0x388) = lVar24;
      *(long **)(puVar4 + -0x380) = plVar25;
      *(long **)(puVar4 + -0x378) = plVar17;
      *(undefined1 **)(puVar4 + -0x370) = puVar4 + -0x340;
      *(undefined **)(puVar4 + -0x368) =
           &UnityEngine_GameObject__AddComponent_TMP_Dropdown_DropdownItem_;
      if ((bRam0000000003eb64dd & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64dd = 1;
      }
      uVar26 = **(undefined8 **)(lVar8 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
      if (auVar37._0_8_ != 0) {
        uVar26 = /*UnityEngine.GameObject$$AddComponent*/ func_0x0322ed6c(auVar37._0_8_,uVar11,0);
        lVar19 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
        if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar19);
        }
        lVar19 = func_0x00f78adc(uVar26,lVar19);
        lVar22 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        if (lVar19 != 0) {
          plVar16 = (long *)func_0x00f78adc(lVar19,lVar22);
          if (plVar16 != (long *)0x0) {
            return plVar16;
          }
          func_0x00f78e5c(lVar19,lVar22);
        }
        return (long *)0x0;
      }
      auVar37 = func_0x00f78af4();
      *(undefined8 *)(puVar4 + -0x3c0) = 0x3d25458;
      *(undefined8 *)(puVar4 + -0x3b8) = uVar26;
      *(undefined8 *)(puVar4 + -0x3b0) = 0;
      *(long *)(puVar4 + -0x3a8) = lVar8;
      *(undefined1 **)(puVar4 + -0x3a0) = puVar4 + -0x370;
      *(undefined **)(puVar4 + -0x398) = &UnityEngine_GameObject__GetComponent_VirtualCamera_;
      if ((bRam0000000003eb64de & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64de = 1;
      }
      *(undefined8 *)(puVar4 + -0x3d0) = 0;
      *(undefined8 *)(puVar4 + -0x3c8) = 0;
      uVar26 = **(undefined8 **)(auVar37._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
      if (auVar37._0_8_ != 0) {
        /*UnityEngine.GameObject$$GetComponentFastPath*/ func_0x0322e3dc(auVar37._0_8_,uVar11,puVar4 + -0x3c8,0);
        return *(long **)(puVar4 + -0x3d0);
      }
      auVar37 = func_0x00f78af4();
      *(undefined1 **)(puVar4 + -0x3e0) = puVar4 + -0x3a0;
      *(undefined **)(puVar4 + -0x3d8) =
           &UnityEngine_GameObject__GetComponentInChildren_TMP_Dropdown_DropdownItem_;
      if (auVar37._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar16 = (long *)(**(code **)**(undefined8 **)(auVar37._8_8_ + 0x30))(auVar37._0_8_,0);
        return plVar16;
      }
      auVar37 = func_0x00f78af4();
      *(code **)(puVar4 + -0x420) = unaff_x24;
      *(long **)(puVar4 + -0x418) = plVar27;
      *(undefined8 *)(puVar4 + -0x410) = 0x3eb6000;
      *(undefined8 *)(puVar4 + -0x408) = 0x3d25458;
      *(undefined8 *)(puVar4 + -0x400) = uVar26;
      *(undefined8 *)(puVar4 + -0x3f8) = 0;
      *(undefined1 **)(puVar4 + -0x3f0) = puVar4 + -0x3e0;
      *(undefined **)(puVar4 + -1000) = &UnityEngine_GameObject__GetComponentInChildren_object_;
      plVar27 = plVar16;
      if ((bRam0000000003eb64df & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64df = 1;
      }
      uVar26 = *(undefined8 *)plVar16[6];
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
      if (auVar37._0_8_ != 0) {
        lVar19 = /*UnityEngine.GameObject$$GetComponentInChildren*/ func_0x03227bec(auVar37._0_8_,uVar11,auVar37._8_8_,0);
        lVar22 = *(long *)(plVar16[6] + 8);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        if (lVar19 != 0) {
          plVar16 = (long *)func_0x00f78adc(lVar19,lVar22);
          if (plVar16 != (long *)0x0) {
            return plVar16;
          }
          func_0x00f78e5c(lVar19,lVar22);
        }
        return (long *)0x0;
      }
      auVar38 = func_0x00f78af4();
      *(undefined1 **)(puVar4 + -0x430) = puVar4 + -0x3f0;
      *(undefined **)(puVar4 + -0x428) = &UnityEngine_GameObject__GetComponentInParent_object_;
      if (auVar38._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar16 = (long *)(**(code **)**(undefined8 **)(auVar38._8_8_ + 0x30))(auVar38._0_8_,0);
        return plVar16;
      }
      auVar38 = func_0x00f78af4();
      *(code **)(puVar4 + -0x470) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x468) = 0x3d25458;
      *(undefined8 *)(puVar4 + -0x460) = uVar26;
      *(undefined8 *)(puVar4 + -0x458) = 0;
      *(long *)(puVar4 + -0x450) = auVar37._8_8_;
      *(long **)(puVar4 + -0x448) = plVar16;
      *(undefined1 **)(puVar4 + -0x440) = puVar4 + -0x430;
      *(undefined **)(puVar4 + -0x438) = &UnityEngine_GameObject__GetComponentInParent_UITweenGroup_
      ;
      uVar26 = 0x3d25458;
      plVar16 = plVar27;
      if ((bRam0000000003eb64e0 & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64e0 = 1;
      }
      uVar11 = *(undefined8 *)plVar27[6];
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
      if (auVar38._0_8_ == 0) {
        auVar37 = func_0x00f78af4();
        lVar19 = auVar37._0_8_;
        puVar5 = puVar4 + -0x4a0;
        *(undefined8 *)(puVar4 + -0x4a0) = uVar11;
        *(undefined8 *)(puVar4 + -0x498) = 0;
        *(long *)(puVar4 + -0x490) = auVar38._8_8_;
        *(long **)(puVar4 + -0x488) = plVar27;
        *(undefined1 **)(puVar4 + -0x480) = puVar4 + -0x440;
        *(undefined **)(puVar4 + -0x478) = &UnityEngine_GameObject__GetComponents_object_;
        puVar29 = puVar4 + -0x480;
        uVar11 = 0x3d25458;
        if ((bRam0000000003eb64e1 & 1) == 0) {
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb64e1 = 1;
        }
        uVar15 = **(undefined8 **)(auVar37._8_8_ + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
        if (lVar19 == 0) {
          auVar38 = func_0x00f78af4();
          plVar27 = auVar38._8_8_;
          *(code **)(puVar4 + -0x4e0) = unaff_x24;
          *(undefined8 *)(puVar4 + -0x4d8) = 0x3d25458;
          *(undefined8 *)(puVar4 + -0x4d0) = 0x3d25458;
          *(undefined8 *)(puVar4 + -0x4c8) = uVar15;
          *(undefined8 *)(puVar4 + -0x4c0) = 0;
          *(long *)(puVar4 + -0x4b8) = auVar37._8_8_;
          *(undefined1 **)(puVar4 + -0x4b0) = puVar29;
          *(undefined **)(puVar4 + -0x4a8) = &UnityEngine_GameObject__GetComponents_Volume_;
          plVar17 = plVar16;
          if ((bRam0000000003eb64e2 & 1) == 0) {
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb64e2 = 1;
          }
          uVar26 = *(undefined8 *)plVar16[6];
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
          if (auVar38._0_8_ == 0) {
            auVar37 = func_0x00f78af4();
            *(undefined1 **)(puVar4 + -0x4f0) = puVar4 + -0x4b0;
            *(undefined **)(puVar4 + -0x4e8) =
                 &UnityEngine_GameObject__GetComponentsInChildren_RectTransform_;
            if (auVar37._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar16 = (long *)(**(code **)**(undefined8 **)(auVar37._8_8_ + 0x30))
                                          (auVar37._0_8_,0);
              return plVar16;
            }
            auVar39 = func_0x00f78af4();
            lVar19 = auVar39._8_8_;
            auVar37._8_8_ = plVar17;
            auVar37._0_8_ = auVar39._0_8_;
            puVar5 = puVar4 + -0x530;
            *(code **)(puVar4 + -0x530) = unaff_x24;
            *(undefined8 *)(puVar4 + -0x528) = 0x3eb6000;
            *(undefined8 *)(puVar4 + -0x520) = 0x3d25458;
            *(undefined8 *)(puVar4 + -0x518) = uVar26;
            *(undefined8 *)(puVar4 + -0x510) = 0;
            *(long **)(puVar4 + -0x508) = plVar27;
            *(undefined1 **)(puVar4 + -0x500) = puVar4 + -0x4f0;
            *(undefined **)(puVar4 + -0x4f8) =
                 &UnityEngine_GameObject__GetComponentsInChildren_object_;
            puVar29 = puVar4 + -0x500;
            uVar26 = 0x3d25458;
            plVar27 = plVar17;
            if ((bRam0000000003eb64e3 & 1) == 0) {
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb64e3 = 1;
            }
            uVar11 = *(undefined8 *)plVar17[6];
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
            if (auVar39._0_8_ == 0) {
              auVar37 = func_0x00f78af4();
              *(undefined1 **)(puVar4 + -0x540) = puVar29;
              *(undefined **)(puVar4 + -0x538) =
                   &UnityEngine_GameObject__GetComponentsInChildren_object_;
              if (auVar37._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar16 = (long *)(*(code *)**(undefined8 **)plVar27[6])
                                            (auVar37._0_8_,0,auVar37._8_8_);
                return plVar16;
              }
              auVar38 = func_0x00f78af4();
              *(code **)(puVar4 + -0x580) = unaff_x24;
              *(undefined8 *)(puVar4 + -0x578) = 0x3d25458;
              *(undefined8 *)(puVar4 + -0x570) = uVar11;
              *(undefined8 *)(puVar4 + -0x568) = 0;
              *(long *)(puVar4 + -0x560) = lVar19;
              *(long **)(puVar4 + -0x558) = plVar17;
              *(undefined1 **)(puVar4 + -0x550) = puVar4 + -0x540;
              *(undefined **)(puVar4 + -0x548) =
                   &UnityEngine_GameObject__GetComponentsInChildren_Renderer_;
              unaff_x24 = (code *)0x3eb6000;
              plVar16 = plVar27;
              lVar24 = lVar22;
              if ((bRam0000000003eb64e4 & 1) == 0) {
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb64e4 = 1;
              }
              uVar26 = **(undefined8 **)(lVar22 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
              if (auVar38._0_8_ == 0) {
                auVar37 = func_0x00f78af4();
                *(undefined1 **)(puVar4 + -0x590) = puVar4 + -0x550;
                *(undefined **)(puVar4 + -0x588) =
                     &UnityEngine_GameObject__GetComponentsInParent_object_;
                if (auVar37._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar16 = (long *)(**(code **)**(undefined8 **)(auVar37._8_8_ + 0x30))
                                              (auVar37._0_8_,0);
                  return plVar16;
                }
                auVar39 = func_0x00f78af4();
                lVar19 = auVar39._8_8_;
                auVar37._8_8_ = plVar16;
                auVar37._0_8_ = auVar39._0_8_;
                puVar5 = puVar4 + -0x5d0;
                *(undefined8 *)(puVar4 + -0x5d0) = 0x3eb6000;
                *(undefined8 *)(puVar4 + -0x5c8) = 0x3d25458;
                *(undefined8 *)(puVar4 + -0x5c0) = uVar26;
                *(undefined8 *)(puVar4 + -0x5b8) = 0;
                *(long *)(puVar4 + -0x5b0) = auVar38._8_8_;
                *(long **)(puVar4 + -0x5a8) = plVar27;
                *(undefined1 **)(puVar4 + -0x5a0) = puVar4 + -0x590;
                *(undefined **)(puVar4 + -0x598) =
                     &UnityEngine_GameObject__GetComponentsInParent_object_;
                puVar29 = puVar4 + -0x5a0;
                uVar26 = 0x3d25458;
                plVar27 = plVar16;
                if ((bRam0000000003eb64e5 & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64e5 = 1;
                }
                uVar11 = *(undefined8 *)plVar16[6];
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
                if (auVar39._0_8_ == 0) {
                  auVar38 = func_0x00f78af4();
                  *(undefined8 *)(puVar4 + -0x610) = 0x3eb6000;
                  *(undefined8 *)(puVar4 + -0x608) = 0x3d25458;
                  *(undefined8 *)(puVar4 + -0x600) = uVar11;
                  *(undefined8 *)(puVar4 + -0x5f8) = 0;
                  *(long *)(puVar4 + -0x5f0) = lVar19;
                  *(long **)(puVar4 + -0x5e8) = plVar16;
                  *(undefined1 **)(puVar4 + -0x5e0) = puVar29;
                  *(undefined **)(puVar4 + -0x5d8) =
                       &UnityEngine_GameObject__GetComponentsInParent_RectMask2D_;
                  plVar16 = plVar27;
                  if ((bRam0000000003eb64e6 & 1) == 0) {
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb64e6 = 1;
                  }
                  uVar26 = **(undefined8 **)(lVar24 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
                  if (auVar38._0_8_ == 0) {
                    auVar37 = func_0x00f78af4();
                    *(undefined8 *)(puVar4 + -0x650) = 0x3eb6000;
                    *(undefined8 *)(puVar4 + -0x648) = 0x3d25458;
                    *(undefined8 *)(puVar4 + -0x640) = uVar26;
                    *(undefined8 *)(puVar4 + -0x638) = 0;
                    *(long *)(puVar4 + -0x630) = auVar38._8_8_;
                    *(long **)(puVar4 + -0x628) = plVar27;
                    *(undefined1 **)(puVar4 + -0x620) = puVar4 + -0x5e0;
                    *(undefined **)(puVar4 + -0x618) =
                         &UnityEngine_GameObject__TryGetComponent_UniversalAdditionalLightData_;
                    if ((bRam0000000003eb64e7 & 1) == 0) {
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb64e7 = 1;
                    }
                    *(undefined8 *)(puVar4 + -0x660) = 0;
                    *(undefined8 *)(puVar4 + -0x658) = 0;
                    uVar26 = *(undefined8 *)plVar16[6];
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
                    if (auVar37._0_8_ != 0) {
                      /*UnityEngine.GameObject$$TryGetComponentFastPath*/ func_0x0322e9a8(auVar37._0_8_,uVar11,puVar4 + -0x658,0);
                      lVar19 = *(long *)(puVar4 + -0x660);
                      *auVar37._8_8_ = lVar19;
                      return (long *)(ulong)(lVar19 != 0);
                    }
                    auVar38 = func_0x00f78af4();
                    *(undefined8 *)(puVar4 + -0x690) = 0x3d25458;
                    *(undefined8 *)(puVar4 + -0x688) = uVar26;
                    *(undefined8 *)(puVar4 + -0x680) = 0;
                    *(long **)(puVar4 + -0x678) = auVar37._8_8_;
                    *(undefined1 **)(puVar4 + -0x670) = puVar4 + -0x620;
                    *(undefined **)(puVar4 + -0x668) =
                         &Core_Networking_HostUpdateHolder__Update_HostCarUpdate_;
                    plVar16 = (long *)/*FlatBuffers.Table$$__offset*/ func_0x016cf120(auVar38._0_8_,6,0);
                    if ((int)plVar16 == 0) {
                      *extraout_x8 = 0;
                      extraout_x8[1] = 0;
                      extraout_x8[2] = 0;
                    }
                    else {
                      auVar37 = /*FlatBuffers.Table$$__union<HostCarUpdate>*/ func_0x018e3e90(auVar38._0_8_,plVar16,
                                                **(undefined8 **)(auVar38._8_8_ + 0x30));
                      *(undefined8 *)(puVar4 + -0x6a8) = 0;
                      *(undefined8 *)(puVar4 + -0x6a0) = 0;
                      *(undefined8 *)(puVar4 + -0x698) = 0;
                      plVar16 = (long *)/*System.Nullable<HostCarUpdate>$$.ctor*/ func_0x02652304(puVar4 + -0x6a8,auVar37._0_8_,auVar37._8_8_,
                                                        *(undefined8 *)
                                                         (*(long *)(auVar38._8_8_ + 0x30) + 0x10));
                      uVar26 = *(undefined8 *)(puVar4 + -0x6a8);
                      extraout_x8[1] = *(undefined8 *)(puVar4 + -0x6a0);
                      *extraout_x8 = uVar26;
                      extraout_x8[2] = *(undefined8 *)(puVar4 + -0x698);
                    }
                    return plVar16;
                  }
                  uVar18 = 1;
                  uVar15 = 1;
                  puVar29 = *(undefined1 **)(puVar4 + -0x5e0);
                  puVar30 = *(undefined **)(puVar4 + -0x5d8);
                  lVar19 = *(long *)(puVar4 + -0x5f0);
                  auVar37._8_8_ = *(undefined8 *)(puVar4 + -0x5e8);
                  auVar37._0_8_ = auVar38._0_8_;
                  uVar11 = *(undefined8 *)(puVar4 + -0x600);
                  auVar39._8_8_ = auVar38._8_8_;
                  auVar39._0_8_ = *(undefined8 *)(puVar4 + -0x5f8);
                  puVar5 = puVar4 + -0x5d0;
                  unaff_x24 = *(code **)(puVar4 + -0x610);
                  uVar26 = *(undefined8 *)(puVar4 + -0x608);
                }
                else {
                  uVar18 = 1;
                  uVar15 = 1;
                  plVar27 = (long *)0x0;
                  puVar30 = &UNK_0185d89c;
                }
              }
              else {
                uVar18 = 1;
                uVar15 = 0;
                puVar29 = *(undefined1 **)(puVar4 + -0x550);
                puVar30 = *(undefined **)(puVar4 + -0x548);
                lVar19 = *(long *)(puVar4 + -0x560);
                auVar37._8_8_ = *(undefined8 *)(puVar4 + -0x558);
                auVar37._0_8_ = auVar38._0_8_;
                uVar11 = *(undefined8 *)(puVar4 + -0x570);
                auVar39._8_8_ = auVar38._8_8_;
                auVar39._0_8_ = *(undefined8 *)(puVar4 + -0x568);
                puVar5 = puVar4 + -0x540;
                unaff_x24 = *(code **)(puVar4 + -0x580);
                uVar26 = *(undefined8 *)(puVar4 + -0x578);
              }
            }
            else {
              uVar18 = 1;
              uVar15 = 0;
              plVar27 = (long *)0x0;
              puVar30 = &UNK_0185d69c;
            }
          }
          else {
            uVar18 = 0;
            uVar15 = 0;
            puVar29 = *(undefined1 **)(puVar4 + -0x4b0);
            puVar30 = *(undefined **)(puVar4 + -0x4a8);
            lVar19 = *(long *)(puVar4 + -0x4c0);
            auVar37._8_8_ = *(undefined8 *)(puVar4 + -0x4b8);
            auVar37._0_8_ = auVar38._0_8_;
            uVar11 = *(undefined8 *)(puVar4 + -0x4d0);
            auVar39._8_8_ = 1;
            auVar39._0_8_ = *(undefined8 *)(puVar4 + -0x4c8);
            puVar5 = puVar4 + -0x4a0;
            unaff_x24 = *(code **)(puVar4 + -0x4e0);
            uVar26 = *(undefined8 *)(puVar4 + -0x4d8);
          }
        }
        else {
          uVar18 = 0;
          auVar39._8_8_ = 1;
          auVar39._0_8_ = uVar15;
          uVar15 = 0;
          plVar27 = (long *)0x0;
          puVar30 = &UNK_0185d4d4;
        }
        *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
        *(code **)(puVar5 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar5 + -0x38) = uVar26;
        *(undefined8 *)(puVar5 + -0x30) = uVar11;
        *(long *)(puVar5 + -0x28) = auVar39._0_8_;
        *(long *)(puVar5 + -0x20) = lVar19;
        *(long *)(puVar5 + -0x18) = auVar37._8_8_;
        *(undefined1 **)(puVar5 + -0x10) = puVar29;
        *(undefined **)(puVar5 + -8) = puVar30;
        if (pcRam0000000003ebf468 == (code *)0x0) {
          pcRam0000000003ebf468 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0322e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar16 = (long *)(*pcRam0000000003ebf468)
                                    (auVar37._0_8_,uVar13,1,uVar18,auVar39._8_8_,uVar15,plVar27);
        return plVar16;
      }
      lVar19 = /*UnityEngine.GameObject$$GetComponentInParent*/ func_0x0322e528(auVar38._0_8_,uVar15,auVar38._8_8_,0);
      lVar22 = *(long *)(plVar27[6] + 8);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      if (lVar19 != 0) {
        plVar16 = (long *)func_0x00f78adc(lVar19,lVar22);
        if (plVar16 != (long *)0x0) {
          return plVar16;
        }
        func_0x00f78e5c(lVar19,lVar22);
      }
      return (long *)0x0;
    }
    plVar25 = (long *)___cxa_begin_catch();
    lVar24 = *plVar25;
    ___cxa_end_catch();
    plVar25 = (long *)0x0;
    lVar19 = -1;
    unaff_x25 = 1;
  } while( true );
}



// ============================================================
// RVA: 0x14ba898 | Atlas.Gameplay.Pickups.PickupManager.OnUsablePickedUp
// ============================================================

/* WARNING: Possible PIC construction at 0x014ba8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baa58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bac3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bac68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bad88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014baf04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bad8c) */
/* WARNING: Removing unreachable block (ram,0x014bad90) */
/* WARNING: Removing unreachable block (ram,0x014bad98) */
/* WARNING: Removing unreachable block (ram,0x014bada0) */
/* WARNING: Removing unreachable block (ram,0x014badb4) */
/* WARNING: Removing unreachable block (ram,0x014badbc) */
/* WARNING: Removing unreachable block (ram,0x014badc4) */
/* WARNING: Removing unreachable block (ram,0x0185d89c) */
/* WARNING: Removing unreachable block (ram,0x0185d8b0) */
/* WARNING: Removing unreachable block (ram,0x0185d8b8) */
/* WARNING: Removing unreachable block (ram,0x0185d8bc) */
/* WARNING: Removing unreachable block (ram,0x0185d8cc) */
/* WARNING: Removing unreachable block (ram,0x0185d8d8) */
/* WARNING: Removing unreachable block (ram,0x0185d8dc) */
/* WARNING: Removing unreachable block (ram,0x0185d69c) */
/* WARNING: Removing unreachable block (ram,0x0185d6b0) */
/* WARNING: Removing unreachable block (ram,0x0185d6b8) */
/* WARNING: Removing unreachable block (ram,0x0185d6bc) */
/* WARNING: Removing unreachable block (ram,0x0185d6cc) */
/* WARNING: Removing unreachable block (ram,0x0185d6d8) */
/* WARNING: Removing unreachable block (ram,0x0185d6dc) */
/* WARNING: Removing unreachable block (ram,0x0185d4d4) */
/* WARNING: Removing unreachable block (ram,0x0185d4e8) */
/* WARNING: Removing unreachable block (ram,0x0185d4f0) */
/* WARNING: Removing unreachable block (ram,0x0185d4f4) */
/* WARNING: Removing unreachable block (ram,0x0185d504) */
/* WARNING: Removing unreachable block (ram,0x0185d510) */
/* WARNING: Removing unreachable block (ram,0x0185d514) */
/* WARNING: Removing unreachable block (ram,0x014bac6c) */
/* WARNING: Removing unreachable block (ram,0x014bad0c) */
/* WARNING: Removing unreachable block (ram,0x014bac70) */
/* WARNING: Removing unreachable block (ram,0x014bac78) */
/* WARNING: Removing unreachable block (ram,0x014bac80) */
/* WARNING: Removing unreachable block (ram,0x014bac88) */
/* WARNING: Removing unreachable block (ram,0x014baca0) */
/* WARNING: Removing unreachable block (ram,0x014bacb4) */
/* WARNING: Removing unreachable block (ram,0x014baccc) */
/* WARNING: Removing unreachable block (ram,0x014bacd4) */
/* WARNING: Removing unreachable block (ram,0x014bacd8) */
/* WARNING: Removing unreachable block (ram,0x014bace8) */
/* WARNING: Removing unreachable block (ram,0x014bac40) */
/* WARNING: Removing unreachable block (ram,0x014bac48) */
/* WARNING: Removing unreachable block (ram,0x014bac54) */
/* WARNING: Removing unreachable block (ram,0x014baa5c) */
/* WARNING: Removing unreachable block (ram,0x014baa3c) */
/* WARNING: Removing unreachable block (ram,0x014ba8b0) */
/* WARNING: Removing unreachable block (ram,0x014ba8d4) */
/* WARNING: Removing unreachable block (ram,0x014ba8b4) */
/* WARNING: Removing unreachable block (ram,0x014ba8b8) */
/* WARNING: Removing unreachable block (ram,0x014ba8e0) */
/* WARNING: Removing unreachable block (ram,0x014ba8bc) */
/* WARNING: Removing unreachable block (ram,0x015a561c) */
/* WARNING: Removing unreachable block (ram,0x015a5630) */
/* WARNING: Removing unreachable block (ram,0x015a5658) */
/* WARNING: Removing unreachable block (ram,0x015a563c) */
/* WARNING: Removing unreachable block (ram,0x015a564c) */
/* WARNING: Removing unreachable block (ram,0x014baed8) */
/* WARNING: Removing unreachable block (ram,0x014baee0) */
/* WARNING: Removing unreachable block (ram,0x014baeec) */
/* WARNING: Removing unreachable block (ram,0x014baef8) */
/* WARNING: Removing unreachable block (ram,0x014baefc) */
/* WARNING: Removing unreachable block (ram,0x015a565c) */
/* WARNING: Removing unreachable block (ram,0x015a5670) */
/* WARNING: Removing unreachable block (ram,0x015a5698) */
/* WARNING: Removing unreachable block (ram,0x015a567c) */
/* WARNING: Removing unreachable block (ram,0x015a568c) */

long * Atlas_Gameplay_Pickups_PickupManager__OnUsablePickedUp
                 (undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar7;
  long lVar13;
  uint uVar8;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  int extraout_w1;
  undefined8 uVar19;
  int extraout_w1_00;
  long *extraout_x1;
  int extraout_w1_01;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  uint extraout_w8;
  long lVar23;
  undefined8 *extraout_x8;
  long extraout_x9;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  long *plVar27;
  undefined1 *unaff_x21;
  undefined1 *puVar28;
  long *unaff_x22;
  undefined8 unaff_x23;
  code *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar29;
  undefined *puVar30;
  float extraout_s0;
  float extraout_s0_00;
  float fVar31;
  float unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = param_1;
  puVar29 = &stack0xfffffffffffffff0;
  puVar30 = (undefined *)0x14ba8b0;
  puVar2 = &stack0xffffffffffffffe0;
  plVar27 = param_3;
code_r0x014baac8:
  plVar20 = auVar32._8_8_;
  plVar9 = auVar32._0_8_;
  *(long **)(puVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
  *(long **)(puVar2 + -0x20) = param_2;
  *(long **)(puVar2 + -0x18) = plVar27;
  *(undefined1 **)(puVar2 + -0x10) = puVar29;
  *(undefined **)(puVar2 + -8) = puVar30;
  if ((char)plVar9[0x15] == '\0') {
code_r0x014babac:
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  if (plVar20 == (long *)0x0) {
code_r0x014babc0:
    func_0x00f78af4();
  }
  else {
    unaff_x21 = (undefined1 *)
                (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
    unaff_x22 = (long *)plVar9[9];
    uVar19 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
    plVar27 = plVar9;
    if (unaff_x22 == (long *)0x0) goto code_r0x014babc0;
    iVar6 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(unaff_x22,uVar19);
    lVar21 = plVar20[4];
    uVar8 = (uint)unaff_x21;
    if (iVar6 == 0) {
code_r0x014bab7c:
      if (0 < *(int *)((long)plVar20 + 0x4c)) {
        lVar23 = plVar9[0x12];
        if (lVar23 == 0) goto code_r0x014babc0;
        if (*(uint *)(lVar23 + 0x18) <= uVar8) goto code_r0x014babc4;
        lVar23 = lVar23 + (long)(int)uVar8 * 4;
        *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + (int)lVar21;
      }
      goto code_r0x014babac;
    }
    lVar24 = plVar9[0x11];
    lVar23 = lVar24 + (long)(int)uVar8 * 4;
    if (iVar6 < 1) {
      if (lVar24 == 0) goto code_r0x014babc0;
code_r0x014bab64:
      if (uVar8 < *(uint *)(lVar24 + 0x18)) {
        *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + (int)lVar21;
        goto code_r0x014bab7c;
      }
    }
    else {
      if (lVar24 == 0) goto code_r0x014babc0;
      if (uVar8 < *(uint *)(lVar24 + 0x18)) {
        if (iVar6 <= *(int *)(lVar23 + 0x20)) {
          return (long *)0x0;
        }
        goto code_r0x014bab64;
      }
    }
  }
code_r0x014babc4:
  uVar19 = func_0x00f78b24();
  plVar11 = (long *)func_0x00f78ac0(uVar19,0);
  puVar3 = puVar2 + -0x80;
  *(undefined8 *)(puVar2 + -0x80) = unaff_d9;
  *(ulong *)(puVar2 + -0x78) = CONCAT44(unaff_00005104,unaff_s8);
  *(code **)(puVar2 + -0x70) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x68) = unaff_x23;
  *(long **)(puVar2 + -0x60) = unaff_x22;
  *(undefined1 **)(puVar2 + -0x58) = unaff_x21;
  *(long **)(puVar2 + -0x50) = plVar20;
  *(long **)(puVar2 + -0x48) = plVar27;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) = &Atlas_Gameplay_Pickups_PickupManager__RollUsableTable;
  puVar29 = puVar2 + -0x40;
  unaff_00005104 = 0;
  puVar28 = (undefined1 *)0x3eb4000;
  plVar9 = param_3;
  if ((bRam0000000003eb4aeb & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57318);
    bRam0000000003eb4aeb = 1;
  }
  unaff_x22 = (long *)0x3d57318;
  unaff_x23 = 5;
  lVar21 = plVar11[0xc];
  if (lVar21 != 0) {
    puVar30 = &UNK_014bac40;
    plVar27 = plVar11;
    plVar20 = param_3;
    fVar31 = extraout_s0;
code_r0x014baf20:
    *(long **)(puVar3 + -0x20) = plVar20;
    *(long **)(puVar3 + -0x18) = plVar27;
    *(undefined1 **)(puVar3 + -0x10) = puVar29;
    *(undefined **)(puVar3 + -8) = puVar30;
    if ((param_3 == (long *)0x0) || (lVar23 = param_3[4], lVar23 == 0)) goto code_r0x014bafd8;
    iVar6 = (int)*(ulong *)(lVar23 + 0x18);
    if (iVar6 == 0) {
      if ((bRam0000000003eb4aee & 1) == 0) {
        func_0x00f78a20(0x3d75da8);
        bRam0000000003eb4aee = 1;
        return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
      }
      return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
    }
    uVar8 = iVar6 - 1;
    uVar10 = (ulong)uVar8;
    if ((int)uVar8 < 1) goto code_r0x014baf7c;
    uVar25 = *(ulong *)(lVar23 + 0x18) & 0xffffffff;
    piVar26 = (int *)(lVar23 + 0x20);
    goto code_r0x014baf58;
  }
  auVar32 = func_0x00f78af4();
  plVar20 = auVar32._8_8_;
  param_2 = auVar32._0_8_;
  unaff_x21 = puVar2 + -0x100;
  puVar28 = puVar2 + -0x100;
  *(undefined8 *)(puVar2 + -0xb0) = 0x3d57318;
  *(undefined8 *)(puVar2 + -0xa8) = 0x3eb4000;
  *(long **)(puVar2 + -0xa0) = param_3;
  *(long **)(puVar2 + -0x98) = plVar11;
  *(undefined1 **)(puVar2 + -0x90) = puVar29;
  *(undefined **)(puVar2 + -0x88) = &Atlas_Gameplay_Pickups_PickupManager__OnUsableRequested;
  *(undefined8 *)(puVar2 + -0xd8) = 0;
  *(undefined2 *)(puVar2 + -0xda) = 0;
  if ((param_2[6] == 0) || (lVar21 = *(long *)(param_2[6] + 0x20), param_3 = param_2, lVar21 == 0))
  {
    auVar32 = func_0x00f78af4();
    plVar20 = auVar32._8_8_;
    plVar27 = auVar32._0_8_;
    puVar4 = puVar2 + -0x140;
    puVar3 = puVar2 + -0x140;
    *(undefined8 *)(puVar2 + -0x130) = 0x3d57318;
    *(undefined8 *)(puVar2 + -0x128) = 0x3eb4000;
    *(long **)(puVar2 + -0x120) = param_3;
    *(long **)(puVar2 + -0x118) = plVar11;
    *(undefined1 **)(puVar2 + -0x110) = puVar2 + -0x90;
    *(undefined **)(puVar2 + -0x108) = &Atlas_Gameplay_Pickups_PickupManager__OnUsableResponse;
    puVar29 = puVar2 + -0x110;
    puVar28 = (undefined1 *)0x3eb4000;
    if ((bRam0000000003eb4aea & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d57318);
      bRam0000000003eb4aea = 1;
    }
    *(undefined8 *)(puVar2 + -0x138) = 0;
    if ((plVar27[6] != 0) && (lVar21 = *(long *)(plVar27[6] + 0x20), lVar21 != 0)) {
      plVar11 = (long *)/*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar21,0);
      if (((ulong)plVar11 & 1) != 0) {
        return plVar11;
      }
      if (plVar27[5] != 0) {
        plVar9 = (long *)(puVar2 + -0x138);
        lVar21 = 0;
        plVar11 = (long *)/*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(plVar27[5],plVar20);
        if ((int)plVar11 == 0) {
          return plVar11;
        }
        if (plVar27[3] != 0) {
          plVar11 = *(long **)(plVar27[3] + 0x10);
          puVar28 = *(undefined1 **)(puVar2 + -0x138);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(puVar28,0);
          plVar20 = (long *)0x0;
          if (plVar11 != (long *)0x0) {
            puVar30 = &UNK_014baed8;
            plVar9 = plRam0000000003d57318;
            param_2 = plVar11;
            goto code_r0x0185c46c;
          }
        }
      }
    }
    puVar30 = &Atlas_Gameplay_Pickups_PickupTable__Roll;
    lVar21 = func_0x00f78af4();
    param_3 = extraout_x1;
    fVar31 = extraout_s0_00;
    goto code_r0x014baf20;
  }
  plVar27 = (long *)/*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar21,0);
  if ((int)plVar27 == 0) {
    return plVar27;
  }
  lVar21 = *plVar9;
  lVar24 = plVar9[3];
  lVar23 = plVar9[2];
  *(long *)(puVar2 + -0xf8) = plVar9[1];
  *(long *)(puVar2 + -0x100) = lVar21;
  *(long *)(puVar2 + -0xe8) = lVar24;
  *(long *)(puVar2 + -0xf0) = lVar23;
  plVar27 = (long *)(puVar2 + -0xd8);
  puVar4 = puVar2 + -0x170;
  *(code **)(puVar2 + -0x140) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x138) = 5;
  *(undefined8 *)(puVar2 + -0x130) = 0x3d57318;
  *(long **)(puVar2 + -0x128) = plVar20;
  *(long **)(puVar2 + -0x120) = param_2;
  *(long **)(puVar2 + -0x118) = plVar9;
  *(undefined1 **)(puVar2 + -0x110) = puVar2 + -0x90;
  *(undefined **)(puVar2 + -0x108) = &UNK_014bad8c;
  puVar29 = puVar2 + -0x110;
  unaff_x23 = 0x3eb4000;
  param_3 = plVar20;
  if ((bRam0000000003eb4ae8 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d572f0);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb4ae8 = 1;
  }
  *(undefined8 *)(puVar2 + -0x150) = 0;
  *(undefined8 *)(puVar2 + -0x148) = 0;
  *(undefined8 *)(puVar2 + -0x160) = 0;
  *(undefined8 *)(puVar2 + -0x158) = 0;
  *plVar27 = 0;
  unaff_x22 = plVar20;
  if (param_2[5] != 0) {
    param_3 = (long *)(puVar2 + -0x148);
    lVar21 = 0;
    plVar9 = (long *)/*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(param_2[5],plVar20);
    if ((int)plVar9 == 0) {
      return plVar9;
    }
    if (((param_2[2] != 0) && (lVar23 = *(long *)(param_2[2] + 0x130), lVar23 != 0)) &&
       (lVar23 = *(long *)(lVar23 + 0x10), lVar23 != 0)) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x160,lVar23,uRam0000000003d3ae20);
      unaff_x23 = 0x3d328d0;
      do {
        uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x160,uRam0000000003d328d0);
        if ((uVar10 & 1) == 0) {
          unaff_x22 = (long *)0x0;
          break;
        }
        unaff_x22 = *(long **)(puVar2 + -0x150);
        if (unaff_x22 == (long *)0x0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14baa68);
          (*pcVar1)();
        }
      } while (*(int *)((long)unaff_x22 + 0x54) != *(int *)(puVar2 + -0xf4));
      *(undefined4 *)(puVar2 + -0x170) = 0x6a;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x160,uRam0000000003d328c8);
      if (*(int *)(puVar2 + -0x170) == 0x6a) {
        *(undefined4 *)(puVar2 + -0x168) = 0;
      }
      if (unaff_x22 == (long *)0x0) {
        return (long *)0x0;
      }
      if ((param_2[3] != 0) && (plVar11 = *(long **)(param_2[3] + 0x10), plVar11 != (long *)0x0)) {
        uVar19 = *(undefined8 *)(puVar2 + -0x148);
        puVar30 = &UNK_014baa3c;
        plVar9 = plRam0000000003d572f0;
code_r0x0185c46c:
        *(long **)(puVar4 + -0x30) = unaff_x22;
        *(undefined1 **)(puVar4 + -0x28) = puVar28;
        *(long **)(puVar4 + -0x20) = param_2;
        *(long **)(puVar4 + -0x18) = plVar27;
        *(undefined1 **)(puVar4 + -0x10) = puVar2 + -0x110;
        *(undefined **)(puVar4 + -8) = puVar30;
        plVar27 = plVar9;
        if ((bRam0000000003eb64d5 & 1) == 0) {
          func_0x00f78a20(0x3d2e280);
          bRam0000000003eb64d5 = 1;
        }
        *(undefined8 *)(puVar4 + -0x40) = 0;
        *(undefined8 *)(puVar4 + -0x38) = 0;
        if (plVar11 != (long *)0x0) {
          plVar27 = *(long **)plVar9[6];
          iVar6 = (*(code *)*plVar27)(plVar11,puVar4 + -0x38);
          if (iVar6 == 0) {
            return (long *)0x0;
          }
          if (*(long *)(puVar4 + -0x38) != 0) {
            lVar21 = *(long *)(*(long *)(puVar4 + -0x38) + 0x18);
            if (lVar21 == 0) {
              return (long *)0x0;
            }
            iVar6 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$TryGetValue*/ func_0x01e3dc3c(lVar21,uVar19,puVar4 + -0x40,lRam0000000003d2e280);
            if (iVar6 == 0) {
              return (long *)0x0;
            }
            lVar23 = *(long *)(puVar4 + -0x40);
            lVar21 = *(long *)(plVar9[6] + 8);
            if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar21);
            }
            if (lVar23 == 0) {
              return (long *)0x0;
            }
            plVar27 = (long *)func_0x00f78adc(lVar23,lVar21);
            if (plVar27 == (long *)0x0) {
              func_0x00f78e5c(lVar23,lVar21);
              return (long *)0x0;
            }
            return plVar27;
          }
        }
        auVar32 = func_0x00f78af4();
        lVar23 = auVar32._8_8_;
        *(undefined8 *)(puVar4 + -0x70) = 0x3eb6000;
        *(long **)(puVar4 + -0x68) = plVar11;
        *(undefined8 *)(puVar4 + -0x60) = uVar19;
        *(long **)(puVar4 + -0x58) = plVar9;
        *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x48) =
             &Core_Definitions_GameDefinitions__GetDefinitionList_UsableDefinition_;
        lVar24 = **(long **)(lVar23 + 0x30);
        if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar24);
        }
        plVar9 = (long *)func_0x00f78aec(lVar24);
        (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 8))();
        if (auVar32._0_8_ != 0) {
          (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x10))(auVar32._0_8_,plVar9);
          return plVar9;
        }
        auVar32 = func_0x00f78af4();
        lVar24 = auVar32._8_8_;
        plVar11 = auVar32._0_8_;
        *(code **)(puVar4 + -0xb0) = unaff_x24;
        *(undefined8 *)(puVar4 + -0xa8) = unaff_x23;
        *(undefined8 *)(puVar4 + -0xa0) = 0x3eb6000;
        *(long **)(puVar4 + -0x98) = plVar9;
        *(long *)(puVar4 + -0x90) = lVar23;
        *(undefined8 *)(puVar4 + -0x88) = 0;
        *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x50;
        *(undefined **)(puVar4 + -0x78) =
             &Core_Definitions_GameDefinitions__GetDefinitionList_object_;
        lVar23 = 0x3eb6000;
        plVar9 = plVar11;
        plVar20 = plVar27;
        if ((bRam0000000003eb64d6 & 1) == 0) {
          func_0x00f78a20(0x3d2e288);
          func_0x00f78a20(0x3d33bb0);
          func_0x00f78a20(0x3d33bb8);
          func_0x00f78a20(0x3d1c7a8);
          func_0x00f78a20(0x3d220f0);
          plVar9 = (long *)func_0x00f78a20(0x3d41958);
          bRam0000000003eb64d6 = 1;
        }
        *(undefined8 *)(puVar4 + -0xc0) = 0;
        *(undefined8 *)(puVar4 + -0xb8) = 0;
        *(undefined8 *)(puVar4 + -0xd0) = 0;
        *(undefined8 *)(puVar4 + -200) = 0;
        if (lVar24 == 0) {
          return plVar9;
        }
        if (plVar11 == (long *)0x0) {
code_r0x0185c7c8:
          func_0x00f78af4();
          goto code_r0x0185c7cc;
        }
        plVar20 = *(long **)plVar27[6];
        plVar9 = (long *)(*(code *)*plVar20)(plVar11,puVar4 + -0xb8);
        if ((int)plVar9 == 0) {
          return plVar9;
        }
        if (((*(long *)(puVar4 + -0xb8) == 0) ||
            (lVar13 = *(long *)(*(long *)(puVar4 + -0xb8) + 0x18), lVar13 == 0)) ||
           (lVar13 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$get_Values*/ func_0x01e3bed0(lVar13,uRam0000000003d2e288), lVar13 == 0))
        goto code_r0x0185c7c8;
        /*System.Collections.Generic.Dictionary.ValueCollection<DefinitionID, object>$$GetEnumerator*/ func_0x01b8d894(puVar4 + -0xd0,lVar13,uRam0000000003d41958);
        unaff_x23 = 0x3d33bb0;
        while (uVar10 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, object>$$MoveNext*/ func_0x01fbc848(puVar4 + -0xd0,uRam0000000003d33bb0), (uVar10 & 1) != 0) {
          plVar11 = *(long **)(puVar4 + -0xc0);
          lVar23 = *(long *)(plVar27[6] + 8);
          unaff_x24 = (code *)**(undefined8 **)(plVar27[6] + 0x10);
          if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar23);
          }
          if (plVar11 == (long *)0x0) {
            lVar13 = 0;
          }
          else {
            lVar13 = func_0x00f78adc(plVar11,lVar23);
            if (lVar13 == 0) {
              func_0x00f78e5c(plVar11,lVar23);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x185c7c8);
              (*pcVar1)();
            }
          }
          plVar20 = *(long **)(plVar27[6] + 0x10);
          (*unaff_x24)(lVar24,lVar13);
        }
        plVar27 = (long *)0x0;
        do {
          *(long *)(puVar4 + -0xe0) = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8;
          uVar10 = (ulong)*(ushort *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + 0x12a);
          if (uVar10 != 0) {
            piVar26 = (int *)(*(long *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar12 = (undefined8 *)(/*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<DefinitionID, IDefinition>_TypeInfo*/ lRam0000000003d1c7a8 + (long)*piVar26 * 0x10 + 0x138);
                goto code_r0x0185c788;
              }
              piVar26 = piVar26 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          plVar20 = (long *)0x0;
          puVar12 = (undefined8 *)func_0x00fac1f0(puVar4 + -0xe0);
code_r0x0185c788:
          plVar9 = (long *)(*(code *)*puVar12)(puVar4 + -0xe0,puVar12[1]);
          if (plVar27 == (long *)0x0) {
            return plVar9;
          }
code_r0x0185c7cc:
          func_0x00f78ac0(plVar27,0);
          if (extraout_w1_00 != 1) goto code_r0x0185c7f8;
          puVar12 = (undefined8 *)___cxa_begin_catch();
          plVar27 = (long *)*puVar12;
          ___cxa_end_catch();
        } while( true );
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    puVar12 = (undefined8 *)___cxa_begin_catch();
    plVar27 = (long *)*puVar12;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x160,uRam0000000003d328c8);
    if (plVar27 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  else {
    __Unwind_Resume();
  }
  puVar30 = &Atlas_Gameplay_Pickups_PickupManager__IncrementUsableInPlay;
  auVar32 = func_0x00f78ac0(plVar27,0);
  puVar2 = puVar2 + -0x170;
  unaff_s8 = extraout_s0;
  goto code_r0x014baac8;
code_r0x014baf58:
  if (uVar25 == 0) {
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
code_r0x014bafd8:
    plVar11 = (long *)func_0x00f78af4();
    *(code **)(puVar3 + -0x60) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x58) = 5;
    *(undefined8 *)(puVar3 + -0x50) = 0x3d57318;
    *(undefined1 **)(puVar3 + -0x48) = puVar28;
    *(long **)(puVar3 + -0x40) = plVar20;
    *(long **)(puVar3 + -0x38) = plVar27;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_Gameplay_Pickups_PickupManager__IsUseableAvailable;
    if (plVar9 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      lVar21 = plVar11[9];
      uVar19 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      plVar27 = plVar11;
      plVar20 = plVar9;
      if (lVar21 != 0) {
        iVar6 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(lVar21,uVar19);
        lVar21 = plVar11[0xb];
        uVar19 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
        if (lVar21 != 0) {
          iVar7 = Atlas_Gameplay_Usables_UsableManager__AreAnyUsablesLeftInPool(lVar21,uVar19,0);
          if (iVar7 == 0 || iVar6 == 0) {
            return (long *)0x0;
          }
          if (0 < iVar6) {
            lVar21 = plVar11[0x11];
            if (lVar21 == 0) goto code_r0x014bb124;
            if (*(uint *)(lVar21 + 0x18) <= uVar8) goto code_r0x014bb128;
            if (iVar6 < (int)plVar9[4] + *(int *)(lVar21 + (long)(int)uVar8 * 4 + 0x20)) {
              return (long *)0x0;
            }
          }
          iVar6 = *(int *)((long)plVar9 + 0x4c);
          if (iVar6 == 0) {
            return (long *)0x0;
          }
          if (0 < iVar6) {
            lVar21 = plVar11[0x12];
            if (lVar21 == 0) goto code_r0x014bb124;
            if (*(uint *)(lVar21 + 0x18) <= uVar8) goto code_r0x014bb128;
            if (iVar6 < (int)plVar9[4] + *(int *)(lVar21 + (long)(int)uVar8 * 4 + 0x20)) {
              return (long *)0x0;
            }
          }
          if (*(float *)(plVar9 + 10) <= 0.0) {
            return (long *)((long)&MACH_HEADER.magic + 1);
          }
          if (plVar11[0x13] != 0) {
            fVar31 = (float)func_0x0001c0c4(plVar11[0x13],(long)(int)uVar8);
            return (long *)(ulong)(fVar31 <= 0.0);
          }
        }
      }
    }
code_r0x014bb124:
    func_0x00f78af4();
code_r0x014bb128:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
    *(long **)(puVar3 + -0x80) = plVar20;
    *(long **)(puVar3 + -0x78) = plVar27;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x30;
    *(undefined **)(puVar3 + -0x68) = &Atlas_Gameplay_Pickups_PickupTable__get_FallbackUsableID;
    if ((bRam0000000003eb4aee & 1) == 0) {
      func_0x00f78a20(0x3d75da8);
      bRam0000000003eb4aee = 1;
    }
    return /*STR('Usable_Boost_X1')*/ plRam0000000003d75da8;
  }
  if (fVar31 < (float)*piVar26) {
    uVar19 = *(undefined8 *)piVar26;
    uVar14 = *(undefined8 *)(piVar26 + 2);
    goto code_r0x014bafbc;
  }
  piVar26 = piVar26 + 4;
  uVar25 = uVar25 - 1;
  uVar10 = uVar10 - 1;
  if (uVar10 == 0) {
code_r0x014baf7c:
    lVar23 = lVar23 + (long)(int)uVar8 * 0x10;
    uVar19 = *(undefined8 *)(lVar23 + 0x20);
    uVar14 = *(undefined8 *)(lVar23 + 0x28);
code_r0x014bafbc:
    plVar27 = (long *)/*Atlas.Gameplay.Pickups.PickupTable$$RollFromRow*/ func_0x014bb504(lVar21,uVar19,uVar14);
    return plVar27;
  }
  goto code_r0x014baf58;
code_r0x0185c7f8:
  auVar32 = __Unwind_Resume();
  *(long *)(puVar4 + -0x110) = lVar23;
  *(long **)(puVar4 + -0x108) = plVar11;
  *(long *)(puVar4 + -0x100) = lVar24;
  *(long **)(puVar4 + -0xf8) = plVar27;
  *(undefined1 **)(puVar4 + -0xf0) = puVar4 + -0x80;
  *(undefined **)(puVar4 + -0xe8) = &Core_Definitions_GameDefinitions__GetFirstDefinition_object_;
  if ((bRam0000000003eb64d7 & 1) == 0) {
    func_0x00f78a20(0x3d3a8b0);
    func_0x00f78a20(0x3d3a8b8);
    bRam0000000003eb64d7 = 1;
  }
  *(undefined8 *)(puVar4 + -0x118) = 0;
  if (auVar32._0_8_ != 0) {
    plVar20 = (long *)**(undefined8 **)(auVar32._8_8_ + 0x30);
    iVar6 = (*(code *)*plVar20)(auVar32._0_8_,puVar4 + -0x118);
    if (iVar6 == 0) {
      return (long *)0x0;
    }
    if ((*(long *)(puVar4 + -0x118) != 0) &&
       (lVar24 = *(long *)(*(long *)(puVar4 + -0x118) + 0x20), lVar24 != 0)) {
      if (*(int *)(lVar24 + 0x18) < 1) {
        return (long *)0x0;
      }
      lVar23 = *(long *)(*(long *)(lVar24 + 0x10) + 0x20);
      lVar21 = *(long *)(*(long *)(auVar32._8_8_ + 0x30) + 8);
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
      }
      if (lVar23 == 0) {
        return (long *)0x0;
      }
      plVar27 = (long *)func_0x00f78adc(lVar23,lVar21);
      if (plVar27 == (long *)0x0) {
        func_0x00f78e5c(lVar23,lVar21);
        return (long *)0x0;
      }
      return plVar27;
    }
  }
  auVar33 = func_0x00f78af4();
  *(long *)(puVar4 + -0x150) = lVar23;
  *(undefined8 *)(puVar4 + -0x148) = 0x3eb6000;
  *(undefined1 (*) [16])(puVar4 + -0x140) = auVar32;
  *(undefined1 **)(puVar4 + -0x130) = puVar4 + -0xf0;
  *(undefined **)(puVar4 + -0x128) =
       &Core_Definitions_GameDefinitions__GetRandomDefinition_WheelsDefinition_;
  uVar19 = 0x3eb6000;
  if ((bRam0000000003eb64d8 & 1) == 0) {
    func_0x00f78a20(0x3d3a8b0);
    func_0x00f78a20(0x3d3a8b8);
    bRam0000000003eb64d8 = 1;
  }
  *(undefined8 *)(puVar4 + -0x158) = 0;
  if (auVar33._0_8_ != 0) {
    plVar20 = (long *)**(undefined8 **)(auVar33._8_8_ + 0x30);
    iVar6 = (*(code *)*plVar20)(auVar33._0_8_,puVar4 + -0x158);
    if (iVar6 == 0) {
      return (long *)0x0;
    }
    if ((*(long *)(puVar4 + -0x158) != 0) &&
       (lVar24 = *(long *)(*(long *)(puVar4 + -0x158) + 0x20), lVar24 != 0)) {
      if (*(int *)(lVar24 + 0x18) < 1) {
        return (long *)0x0;
      }
      plVar20 = (long *)0x0;
      uVar8 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0);
      if (*(long *)(puVar4 + -0x158) != 0) {
        lVar24 = *(long *)(*(long *)(puVar4 + -0x158) + 0x20);
        uVar19 = 0;
        if (lVar24 != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar8) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar23 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)uVar8 * 8 + 0x20);
          lVar21 = *(long *)(*(long *)(auVar33._8_8_ + 0x30) + 8);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          if (lVar23 == 0) {
            return (long *)0x0;
          }
          plVar27 = (long *)func_0x00f78adc(lVar23,lVar21);
          if (plVar27 == (long *)0x0) {
            func_0x00f78e5c(lVar23,lVar21);
            return (long *)0x0;
          }
          return plVar27;
        }
      }
    }
  }
  auVar32 = func_0x00f78af4();
  *(undefined1 **)(puVar4 + -0x170) = puVar4 + -0x130;
  *(undefined **)(puVar4 + -0x168) = &Core_Definitions_GameDefinitions__IsTypeRegistered_object_;
  *(undefined8 *)(puVar4 + -0x178) = 0;
  if (auVar32._0_8_ != 0) {
    plVar27 = (long *)(**(code **)**(undefined8 **)(auVar32._8_8_ + 0x30))
                                (auVar32._0_8_,puVar4 + -0x178);
    return plVar27;
  }
  auVar32 = func_0x00f78af4();
  *(undefined1 **)(puVar4 + -400) = puVar4 + -0x170;
  *(undefined **)(puVar4 + -0x188) = &Core_Definitions_GameDefinitions__IsValidID_object_;
  *(undefined8 *)(puVar4 + -0x198) = 0;
  if (auVar32._0_8_ != 0) {
    plVar27 = (long *)(*(code *)**(undefined8 **)plVar20[6])
                                (auVar32._0_8_,auVar32._8_8_,puVar4 + -0x198);
    return plVar27;
  }
  auVar32 = func_0x00f78af4();
  lVar13 = auVar32._8_8_;
  lVar24 = auVar32._0_8_;
  *(long *)(puVar4 + -0x1d0) = lVar23;
  *(undefined8 *)(puVar4 + -0x1c8) = uVar19;
  *(undefined1 (*) [16])(puVar4 + -0x1c0) = auVar33;
  *(undefined1 **)(puVar4 + -0x1b0) = puVar4 + -400;
  *(undefined **)(puVar4 + -0x1a8) =
       &Core_Definitions_GameDefinitions__RegisterType_WheelsDefinition_;
  if ((bRam0000000003eb64d9 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64d9 = 1;
  }
  uVar19 = **(undefined8 **)(lVar13 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar27 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if ((plVar27 != (long *)0x0) &&
     (uVar14 = (**(code **)(*plVar27 + 0x1b8))(plVar27,*(undefined8 *)(*plVar27 + 0x1c0)),
     lVar24 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0185cb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar27 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))(lVar24,uVar14);
    return plVar27;
  }
  auVar32 = func_0x00f78af4();
  lVar23 = auVar32._0_8_;
  *(undefined8 *)(puVar4 + -0x200) = 0x3d25458;
  *(undefined8 *)(puVar4 + -0x1f8) = uVar19;
  *(long *)(puVar4 + -0x1f0) = lVar13;
  *(long *)(puVar4 + -0x1e8) = lVar24;
  *(undefined1 **)(puVar4 + -0x1e0) = puVar4 + -0x1b0;
  *(undefined **)(puVar4 + -0x1d8) = &Core_Definitions_GameDefinitions__RegisterType_object_;
  uVar19 = 0x3eb6000;
  plVar27 = plVar20;
  if ((bRam0000000003eb64da & 1) == 0) {
    func_0x00f78a20(0x3d21268);
    func_0x00f78a20(0x3d3a478);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64da = 1;
  }
  if (lVar23 != 0) {
    plVar27 = (long *)(*(code *)**(undefined8 **)plVar20[6])(lVar23);
    if (((ulong)plVar27 & 1) != 0) {
      return plVar27;
    }
    uVar19 = *(undefined8 *)(plVar20[6] + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
    plVar20 = (long *)func_0x00f78aec(/*Core.Definitions.DefinitionData_TypeInfo*/ uRam0000000003d21268);
    lVar21 = 0;
    plVar27 = auVar32._8_8_;
    /*Core.Definitions.DefinitionData$$.ctor*/ func_0x0164515c(plVar20,uVar19);
    plVar9 = *(long **)(lVar23 + 0x18);
    if (plVar9 != (long *)0x0) {
      plVar27 = *(long **)(puVar4 + -0x1f0);
      plVar11 = *(long **)(puVar4 + -0x1e8);
      uVar19 = *(undefined8 *)(puVar4 + -0x200);
      uVar14 = *(undefined8 *)(puVar4 + -0x1f8);
      *(long **)(puVar4 + -0x1f0) = plVar27;
      *(long **)(puVar4 + -0x1e8) = plVar11;
      *(undefined8 *)(puVar4 + -0x1e0) = *(undefined8 *)(puVar4 + -0x1e0);
      *(undefined8 *)(puVar4 + -0x1d8) = *(undefined8 *)(puVar4 + -0x1d8);
      lVar21 = plVar9[2];
      puVar12 = puRam0000000003d3a478;
      if (lVar21 == 0) {
code_r0x0242716c:
        plVar20 = plVar27;
        plVar9 = plVar11;
        plVar17 = (long *)func_0x00f78af4();
        lVar21 = extraout_x9;
        uVar8 = extraout_w8;
code_r0x02427170:
        *(uint *)(plVar9 + 3) = uVar8 + 1;
      }
      else {
        uVar8 = *(uint *)(plVar9 + 3);
        plVar17 = plVar9;
        if (uVar8 != *(uint *)(lVar21 + 0x18)) goto code_r0x02427170;
        puVar12 = *(undefined8 **)(*(long *)(puRam0000000003d3a478[3] + 0xc0) + 0x60);
        plVar17 = (long *)(*(code *)*puVar12)(plVar9,uVar8 + 1);
        lVar21 = plVar9[2];
        uVar8 = *(uint *)(plVar9 + 3);
        *(uint *)(plVar9 + 3) = uVar8 + 1;
        plVar11 = plVar9;
        plVar27 = plVar20;
        if (lVar21 == 0) goto code_r0x0242716c;
      }
      if (uVar8 < *(uint *)(lVar21 + 0x18)) {
        *(long **)(lVar21 + (long)(int)uVar8 * 8 + 0x20) = plVar20;
        *(int *)((long)plVar9 + 0x1c) = *(int *)((long)plVar9 + 0x1c) + 1;
        return plVar17;
      }
      uVar18 = func_0x00f78b24();
      auVar32 = func_0x00f78ac0(uVar18,0);
      lVar23 = auVar32._8_8_;
      lVar21 = auVar32._0_8_;
      *(code **)(puVar4 + -0x230) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x228) = unaff_x23;
      *(undefined8 *)(puVar4 + -0x220) = uVar19;
      *(undefined8 *)(puVar4 + -0x218) = uVar14;
      *(long **)(puVar4 + -0x210) = plVar20;
      *(long **)(puVar4 + -0x208) = plVar9;
      *(undefined1 **)(puVar4 + -0x200) = puVar4 + -0x1e0;
      *(undefined **)(puVar4 + -0x1f8) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x48))(lVar23,0x14);
      if (lVar21 != 0) {
        pcVar1 = (code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x28);
        lVar24 = *(long *)(*(long *)(puVar12[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar24);
        }
        if (lVar23 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = func_0x00f78adc(lVar23,lVar24);
          if (lVar13 == 0) {
            func_0x00f78e5c(lVar23,lVar24);
            goto code_r0x0242734c;
          }
        }
        (*pcVar1)(lVar21,lVar13,*(undefined8 *)(*(long *)(puVar12[3] + 0xc0) + 0x28));
        iVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x68))(lVar21);
        return (long *)(ulong)(iVar6 - 1);
      }
      func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x2427350);
      (*pcVar1)();
    }
  }
  auVar33 = func_0x00f78af4();
  plVar11 = (long *)(puVar4 + -0x250);
  *(code **)(puVar4 + -0x240) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x238) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x230) = uVar19;
  *(long **)(puVar4 + -0x228) = plVar20;
  *(long **)(puVar4 + -0x220) = auVar32._8_8_;
  *(long *)(puVar4 + -0x218) = lVar23;
  *(undefined1 **)(puVar4 + -0x210) = puVar4 + -0x1e0;
  *(undefined **)(puVar4 + -0x208) = &Core_Definitions_GameDefinitions__TryGetDefinition_object_;
  plVar9 = (long *)0x3eb6000;
  plVar20 = plVar27;
  lVar23 = lVar21;
  if ((bRam0000000003eb64db & 1) == 0) {
    func_0x00f78a20(0x3d2e280);
    bRam0000000003eb64db = 1;
  }
  *(undefined8 *)(puVar4 + -0x250) = 0;
  *(undefined8 *)(puVar4 + -0x248) = 0;
  if (auVar33._0_8_ == 0) {
code_r0x0185cd4c:
    plVar11 = plVar20;
    func_0x00f78af4();
  }
  else {
    plVar20 = (long *)**(undefined8 **)(lVar21 + 0x30);
    iVar6 = (*(code *)*plVar20)(auVar33._0_8_,puVar4 + -0x248);
    if (iVar6 == 0) {
code_r0x0185ccf0:
      *plVar27 = 0;
      return (long *)0x0;
    }
    if (*(long *)(puVar4 + -0x248) == 0) goto code_r0x0185cd4c;
    lVar24 = *(long *)(*(long *)(puVar4 + -0x248) + 0x18);
    if ((lVar24 == 0) ||
       (lVar23 = lRam0000000003d2e280, iVar6 = /*System.Collections.Generic.Dictionary<DefinitionID, object>$$TryGetValue*/ func_0x01e3dc3c(lVar24,auVar33._8_8_), iVar6 == 0))
    goto code_r0x0185ccf0;
    lVar24 = *(long *)(puVar4 + -0x250);
    lVar13 = *(long *)(*(long *)(lVar21 + 0x30) + 8);
    auVar33._8_8_ = lVar24;
    auVar33._0_8_ = lVar13;
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    if (lVar24 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = func_0x00f78adc(lVar24,lVar13);
      if (lVar15 == 0) {
        func_0x00f78e5c(lVar24,lVar13);
        goto code_r0x0185ccf0;
      }
    }
    *plVar27 = lVar15;
    plVar27 = *(long **)(*(long *)(lVar21 + 0x30) + 8);
    if ((*(ushort *)((long)plVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(plVar27);
    }
    if ((lVar24 == 0) || (lVar24 = func_0x00f78adc(lVar24,plVar27), lVar24 != 0)) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
  }
  auVar32 = func_0x00f78e5c(auVar33._8_8_,plVar27);
  *(long *)(puVar4 + -0x270) = lVar21;
  *(long **)(puVar4 + -0x268) = plVar27;
  *(undefined1 **)(puVar4 + -0x260) = puVar4 + -0x210;
  *(undefined **)(puVar4 + -600) = &Core_Definitions_GameDefinitions__TryGetDefinition_object_;
  *(undefined8 *)(puVar4 + -0x278) = 0;
  if (auVar32._0_8_ != 0) {
    plVar27 = (long *)(**(code **)**(undefined8 **)(lVar23 + 0x30))
                                (auVar32._0_8_,auVar32._8_8_,puVar4 + -0x278);
    lVar21 = *(long *)(puVar4 + -0x278);
    if ((int)plVar27 == 0) {
      lVar21 = 0;
    }
    *plVar11 = lVar21;
    return plVar27;
  }
  auVar32 = func_0x00f78af4();
  plVar20 = auVar32._8_8_;
  lVar24 = auVar32._0_8_;
  *(undefined8 *)(puVar4 + -0x2e0) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x2d8) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x2d0) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x2c8) = unaff_x25;
  *(code **)(puVar4 + -0x2c0) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x2b8) = 0x3eb6000;
  *(undefined1 (*) [16])(puVar4 + -0x2b0) = auVar33;
  *(long *)(puVar4 + -0x2a0) = lVar21;
  *(long **)(puVar4 + -0x298) = plVar27;
  *(undefined1 **)(puVar4 + -0x290) = puVar4 + -0x260;
  *(undefined **)(puVar4 + -0x288) = &Core_Definitions_GameDefinitions__TryGetDefinitionData_object_
  ;
  lVar21 = 0x3eb6000;
  plVar27 = plVar11;
  if ((bRam0000000003eb64dc & 1) == 0) {
    func_0x00f78a20(0x3d323e8);
    func_0x00f78a20(0x3d323f0);
    func_0x00f78a20(0x3d1c730);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3a480);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb64dc = 1;
  }
  *(undefined4 *)(puVar4 + -0x308) = 0;
  if (*(long *)(lVar24 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0185cfdc;
  }
  unaff_x26 = 0x3d25458;
  unaff_x24 = (code *)0x3d1c730;
  plVar9 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x328,*(long *)(lVar24 + 0x18),uRam0000000003d3a480);
  *(undefined8 *)(puVar4 + -0x2f8) = *(undefined8 *)(puVar4 + -800);
  *(undefined8 *)(puVar4 + -0x300) = *(undefined8 *)(puVar4 + -0x328);
  *(undefined8 *)(puVar4 + -0x2f0) = *(undefined8 *)(puVar4 + -0x318);
  do {
    uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0x300,uRam0000000003d323e8);
    if ((uVar10 & 1) == 0) {
      unaff_x25 = 0;
      lVar21 = 0;
      lVar24 = 0;
      plVar11 = (long *)0x0;
      *(undefined4 *)(puVar4 + -0x310) = 0x4d;
      *(undefined4 *)(puVar4 + -0x308) = 1;
      goto code_r0x0185cf28;
    }
    lVar13 = *(long *)(puVar4 + -0x2f0);
    if (lVar13 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x185cfd8);
      (*pcVar1)();
    }
    uVar19 = *(undefined8 *)(lVar13 + 0x10);
    uVar14 = *(undefined8 *)plVar11[6];
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
    plVar27 = (long *)0x0;
    uVar10 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar19,uVar14);
  } while ((uVar10 & 1) == 0);
  unaff_x25 = 0;
  lVar21 = 0;
  lVar24 = 0;
  *plVar20 = lVar13;
  plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
  *(undefined4 *)(puVar4 + -0x310) = 0x52;
  *(undefined4 *)(puVar4 + -0x308) = 1;
code_r0x0185cf28:
  do {
    lVar13 = *(long *)unaff_x24;
    *(long *)(puVar4 + -0x328) = lVar13;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar10 != 0) {
      piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *plVar9) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
          goto code_r0x0185cf78;
        }
        piVar26 = piVar26 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    plVar27 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x00fac1f0(puVar4 + -0x328);
code_r0x0185cf78:
    (*(code *)*puVar12)(puVar4 + -0x310,puVar12[1]);
    if (lVar24 == 0) {
      if (((int)unaff_x25 != 0) || (*(int *)(puVar4 + lVar21 * 4 + -0x310) != 0x52)) {
        plVar11 = (long *)0x0;
        *plVar20 = 0;
      }
      return plVar11;
    }
code_r0x0185cfdc:
    func_0x00f78ac0(lVar24,0);
    if (extraout_w1_01 != 1) {
      auVar32 = __Unwind_Resume();
      *(long **)(puVar4 + -0x350) = plVar11;
      *(long **)(puVar4 + -0x348) = plVar20;
      *(undefined1 **)(puVar4 + -0x340) = puVar4 + -0x290;
      *(undefined **)(puVar4 + -0x338) =
           &Core_Definitions_GameDefinitions__TryGetDefinitionList_WheelsDefinition_;
      *(undefined8 *)(puVar4 + -0x358) = 0;
      if (auVar32._0_8_ != 0) {
        plVar27 = *(long **)plVar27[6];
        plVar17 = (long *)(*(code *)*plVar27)(auVar32._0_8_,puVar4 + -0x358);
        if ((int)plVar17 == 0) {
          lVar21 = 0;
        }
        else {
          plVar20 = auVar32._8_8_;
          if (*(long *)(puVar4 + -0x358) == 0) goto code_r0x0185d07c;
          lVar21 = *(long *)(*(long *)(puVar4 + -0x358) + 0x28);
        }
        *auVar32._8_8_ = lVar21;
        return plVar17;
      }
code_r0x0185d07c:
      auVar32 = func_0x00f78af4();
      lVar13 = auVar32._8_8_;
      *(long *)(puVar4 + -0x390) = lVar21;
      *(long *)(puVar4 + -0x388) = lVar24;
      *(long **)(puVar4 + -0x380) = plVar11;
      *(long **)(puVar4 + -0x378) = plVar20;
      *(undefined1 **)(puVar4 + -0x370) = puVar4 + -0x340;
      *(undefined **)(puVar4 + -0x368) =
           &UnityEngine_GameObject__AddComponent_TMP_Dropdown_DropdownItem_;
      if ((bRam0000000003eb64dd & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64dd = 1;
      }
      uVar19 = **(undefined8 **)(lVar13 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
      if (auVar32._0_8_ != 0) {
        uVar19 = /*UnityEngine.GameObject$$AddComponent*/ func_0x0322ed6c(auVar32._0_8_,uVar14,0);
        lVar21 = *(long *)(*(long *)(lVar13 + 0x30) + 8);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        lVar21 = func_0x00f78adc(uVar19,lVar21);
        lVar23 = *(long *)(*(long *)(lVar13 + 0x30) + 8);
        if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar23);
        }
        if (lVar21 != 0) {
          plVar27 = (long *)func_0x00f78adc(lVar21,lVar23);
          if (plVar27 != (long *)0x0) {
            return plVar27;
          }
          func_0x00f78e5c(lVar21,lVar23);
        }
        return (long *)0x0;
      }
      auVar32 = func_0x00f78af4();
      *(undefined8 *)(puVar4 + -0x3c0) = 0x3d25458;
      *(undefined8 *)(puVar4 + -0x3b8) = uVar19;
      *(undefined8 *)(puVar4 + -0x3b0) = 0;
      *(long *)(puVar4 + -0x3a8) = lVar13;
      *(undefined1 **)(puVar4 + -0x3a0) = puVar4 + -0x370;
      *(undefined **)(puVar4 + -0x398) = &UnityEngine_GameObject__GetComponent_VirtualCamera_;
      if ((bRam0000000003eb64de & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64de = 1;
      }
      *(undefined8 *)(puVar4 + -0x3d0) = 0;
      *(undefined8 *)(puVar4 + -0x3c8) = 0;
      uVar19 = **(undefined8 **)(auVar32._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
      if (auVar32._0_8_ != 0) {
        /*UnityEngine.GameObject$$GetComponentFastPath*/ func_0x0322e3dc(auVar32._0_8_,uVar14,puVar4 + -0x3c8,0);
        return *(long **)(puVar4 + -0x3d0);
      }
      auVar32 = func_0x00f78af4();
      *(undefined1 **)(puVar4 + -0x3e0) = puVar4 + -0x3a0;
      *(undefined **)(puVar4 + -0x3d8) =
           &UnityEngine_GameObject__GetComponentInChildren_TMP_Dropdown_DropdownItem_;
      if (auVar32._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar27 = (long *)(**(code **)**(undefined8 **)(auVar32._8_8_ + 0x30))(auVar32._0_8_,0);
        return plVar27;
      }
      auVar32 = func_0x00f78af4();
      *(code **)(puVar4 + -0x420) = unaff_x24;
      *(long **)(puVar4 + -0x418) = plVar9;
      *(undefined8 *)(puVar4 + -0x410) = 0x3eb6000;
      *(undefined8 *)(puVar4 + -0x408) = 0x3d25458;
      *(undefined8 *)(puVar4 + -0x400) = uVar19;
      *(undefined8 *)(puVar4 + -0x3f8) = 0;
      *(undefined1 **)(puVar4 + -0x3f0) = puVar4 + -0x3e0;
      *(undefined **)(puVar4 + -1000) = &UnityEngine_GameObject__GetComponentInChildren_object_;
      plVar9 = plVar27;
      if ((bRam0000000003eb64df & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64df = 1;
      }
      uVar19 = *(undefined8 *)plVar27[6];
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
      if (auVar32._0_8_ != 0) {
        lVar21 = /*UnityEngine.GameObject$$GetComponentInChildren*/ func_0x03227bec(auVar32._0_8_,uVar14,auVar32._8_8_,0);
        lVar23 = *(long *)(plVar27[6] + 8);
        if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar23);
        }
        if (lVar21 != 0) {
          plVar27 = (long *)func_0x00f78adc(lVar21,lVar23);
          if (plVar27 != (long *)0x0) {
            return plVar27;
          }
          func_0x00f78e5c(lVar21,lVar23);
        }
        return (long *)0x0;
      }
      auVar33 = func_0x00f78af4();
      *(undefined1 **)(puVar4 + -0x430) = puVar4 + -0x3f0;
      *(undefined **)(puVar4 + -0x428) = &UnityEngine_GameObject__GetComponentInParent_object_;
      if (auVar33._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar27 = (long *)(**(code **)**(undefined8 **)(auVar33._8_8_ + 0x30))(auVar33._0_8_,0);
        return plVar27;
      }
      auVar33 = func_0x00f78af4();
      *(code **)(puVar4 + -0x470) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x468) = 0x3d25458;
      *(undefined8 *)(puVar4 + -0x460) = uVar19;
      *(undefined8 *)(puVar4 + -0x458) = 0;
      *(long *)(puVar4 + -0x450) = auVar32._8_8_;
      *(long **)(puVar4 + -0x448) = plVar27;
      *(undefined1 **)(puVar4 + -0x440) = puVar4 + -0x430;
      *(undefined **)(puVar4 + -0x438) = &UnityEngine_GameObject__GetComponentInParent_UITweenGroup_
      ;
      uVar19 = 0x3d25458;
      plVar27 = plVar9;
      if ((bRam0000000003eb64e0 & 1) == 0) {
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb64e0 = 1;
      }
      uVar14 = *(undefined8 *)plVar9[6];
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
      if (auVar33._0_8_ == 0) {
        auVar34 = func_0x00f78af4();
        lVar21 = auVar34._0_8_;
        puVar5 = puVar4 + -0x4a0;
        *(undefined8 *)(puVar4 + -0x4a0) = uVar14;
        *(undefined8 *)(puVar4 + -0x498) = 0;
        *(long *)(puVar4 + -0x490) = auVar33._8_8_;
        *(long **)(puVar4 + -0x488) = plVar9;
        *(undefined1 **)(puVar4 + -0x480) = puVar4 + -0x440;
        *(undefined **)(puVar4 + -0x478) = &UnityEngine_GameObject__GetComponents_object_;
        puVar29 = puVar4 + -0x480;
        uVar14 = 0x3d25458;
        if ((bRam0000000003eb64e1 & 1) == 0) {
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb64e1 = 1;
        }
        uVar18 = **(undefined8 **)(auVar34._8_8_ + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
        if (lVar21 == 0) {
          auVar32 = func_0x00f78af4();
          plVar9 = auVar32._8_8_;
          *(code **)(puVar4 + -0x4e0) = unaff_x24;
          *(undefined8 *)(puVar4 + -0x4d8) = 0x3d25458;
          *(undefined8 *)(puVar4 + -0x4d0) = 0x3d25458;
          *(undefined8 *)(puVar4 + -0x4c8) = uVar18;
          *(undefined8 *)(puVar4 + -0x4c0) = 0;
          *(long *)(puVar4 + -0x4b8) = auVar34._8_8_;
          *(undefined1 **)(puVar4 + -0x4b0) = puVar29;
          *(undefined **)(puVar4 + -0x4a8) = &UnityEngine_GameObject__GetComponents_Volume_;
          plVar20 = plVar27;
          if ((bRam0000000003eb64e2 & 1) == 0) {
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb64e2 = 1;
          }
          uVar19 = *(undefined8 *)plVar27[6];
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
          if (auVar32._0_8_ == 0) {
            auVar32 = func_0x00f78af4();
            *(undefined1 **)(puVar4 + -0x4f0) = puVar4 + -0x4b0;
            *(undefined **)(puVar4 + -0x4e8) =
                 &UnityEngine_GameObject__GetComponentsInChildren_RectTransform_;
            if (auVar32._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar27 = (long *)(**(code **)**(undefined8 **)(auVar32._8_8_ + 0x30))
                                          (auVar32._0_8_,0);
              return plVar27;
            }
            auVar35 = func_0x00f78af4();
            lVar21 = auVar35._8_8_;
            auVar34._8_8_ = plVar20;
            auVar34._0_8_ = auVar35._0_8_;
            puVar5 = puVar4 + -0x530;
            *(code **)(puVar4 + -0x530) = unaff_x24;
            *(undefined8 *)(puVar4 + -0x528) = 0x3eb6000;
            *(undefined8 *)(puVar4 + -0x520) = 0x3d25458;
            *(undefined8 *)(puVar4 + -0x518) = uVar19;
            *(undefined8 *)(puVar4 + -0x510) = 0;
            *(long **)(puVar4 + -0x508) = plVar9;
            *(undefined1 **)(puVar4 + -0x500) = puVar4 + -0x4f0;
            *(undefined **)(puVar4 + -0x4f8) =
                 &UnityEngine_GameObject__GetComponentsInChildren_object_;
            puVar29 = puVar4 + -0x500;
            uVar19 = 0x3d25458;
            plVar9 = plVar20;
            if ((bRam0000000003eb64e3 & 1) == 0) {
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb64e3 = 1;
            }
            uVar14 = *(undefined8 *)plVar20[6];
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
            if (auVar35._0_8_ == 0) {
              auVar32 = func_0x00f78af4();
              *(undefined1 **)(puVar4 + -0x540) = puVar29;
              *(undefined **)(puVar4 + -0x538) =
                   &UnityEngine_GameObject__GetComponentsInChildren_object_;
              if (auVar32._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar27 = (long *)(*(code *)**(undefined8 **)plVar9[6])
                                            (auVar32._0_8_,0,auVar32._8_8_);
                return plVar27;
              }
              auVar32 = func_0x00f78af4();
              *(code **)(puVar4 + -0x580) = unaff_x24;
              *(undefined8 *)(puVar4 + -0x578) = 0x3d25458;
              *(undefined8 *)(puVar4 + -0x570) = uVar14;
              *(undefined8 *)(puVar4 + -0x568) = 0;
              *(long *)(puVar4 + -0x560) = lVar21;
              *(long **)(puVar4 + -0x558) = plVar20;
              *(undefined1 **)(puVar4 + -0x550) = puVar4 + -0x540;
              *(undefined **)(puVar4 + -0x548) =
                   &UnityEngine_GameObject__GetComponentsInChildren_Renderer_;
              unaff_x24 = (code *)0x3eb6000;
              plVar27 = plVar9;
              lVar24 = lVar23;
              if ((bRam0000000003eb64e4 & 1) == 0) {
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb64e4 = 1;
              }
              uVar19 = **(undefined8 **)(lVar23 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
              if (auVar32._0_8_ == 0) {
                auVar33 = func_0x00f78af4();
                *(undefined1 **)(puVar4 + -0x590) = puVar4 + -0x550;
                *(undefined **)(puVar4 + -0x588) =
                     &UnityEngine_GameObject__GetComponentsInParent_object_;
                if (auVar33._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar27 = (long *)(**(code **)**(undefined8 **)(auVar33._8_8_ + 0x30))
                                              (auVar33._0_8_,0);
                  return plVar27;
                }
                auVar35 = func_0x00f78af4();
                lVar21 = auVar35._8_8_;
                auVar34._8_8_ = plVar27;
                auVar34._0_8_ = auVar35._0_8_;
                puVar5 = puVar4 + -0x5d0;
                *(undefined8 *)(puVar4 + -0x5d0) = 0x3eb6000;
                *(undefined8 *)(puVar4 + -0x5c8) = 0x3d25458;
                *(undefined8 *)(puVar4 + -0x5c0) = uVar19;
                *(undefined8 *)(puVar4 + -0x5b8) = 0;
                *(long *)(puVar4 + -0x5b0) = auVar32._8_8_;
                *(long **)(puVar4 + -0x5a8) = plVar9;
                *(undefined1 **)(puVar4 + -0x5a0) = puVar4 + -0x590;
                *(undefined **)(puVar4 + -0x598) =
                     &UnityEngine_GameObject__GetComponentsInParent_object_;
                puVar29 = puVar4 + -0x5a0;
                uVar19 = 0x3d25458;
                plVar9 = plVar27;
                if ((bRam0000000003eb64e5 & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64e5 = 1;
                }
                uVar14 = *(undefined8 *)plVar27[6];
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                if (auVar35._0_8_ == 0) {
                  auVar32 = func_0x00f78af4();
                  *(undefined8 *)(puVar4 + -0x610) = 0x3eb6000;
                  *(undefined8 *)(puVar4 + -0x608) = 0x3d25458;
                  *(undefined8 *)(puVar4 + -0x600) = uVar14;
                  *(undefined8 *)(puVar4 + -0x5f8) = 0;
                  *(long *)(puVar4 + -0x5f0) = lVar21;
                  *(long **)(puVar4 + -0x5e8) = plVar27;
                  *(undefined1 **)(puVar4 + -0x5e0) = puVar29;
                  *(undefined **)(puVar4 + -0x5d8) =
                       &UnityEngine_GameObject__GetComponentsInParent_RectMask2D_;
                  plVar27 = plVar9;
                  if ((bRam0000000003eb64e6 & 1) == 0) {
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb64e6 = 1;
                  }
                  uVar19 = **(undefined8 **)(lVar24 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
                  if (auVar32._0_8_ == 0) {
                    auVar33 = func_0x00f78af4();
                    *(undefined8 *)(puVar4 + -0x650) = 0x3eb6000;
                    *(undefined8 *)(puVar4 + -0x648) = 0x3d25458;
                    *(undefined8 *)(puVar4 + -0x640) = uVar19;
                    *(undefined8 *)(puVar4 + -0x638) = 0;
                    *(long *)(puVar4 + -0x630) = auVar32._8_8_;
                    *(long **)(puVar4 + -0x628) = plVar9;
                    *(undefined1 **)(puVar4 + -0x620) = puVar4 + -0x5e0;
                    *(undefined **)(puVar4 + -0x618) =
                         &UnityEngine_GameObject__TryGetComponent_UniversalAdditionalLightData_;
                    if ((bRam0000000003eb64e7 & 1) == 0) {
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb64e7 = 1;
                    }
                    *(undefined8 *)(puVar4 + -0x660) = 0;
                    *(undefined8 *)(puVar4 + -0x658) = 0;
                    uVar19 = *(undefined8 *)plVar27[6];
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
                    if (auVar33._0_8_ != 0) {
                      /*UnityEngine.GameObject$$TryGetComponentFastPath*/ func_0x0322e9a8(auVar33._0_8_,uVar14,puVar4 + -0x658,0);
                      lVar21 = *(long *)(puVar4 + -0x660);
                      *auVar33._8_8_ = lVar21;
                      return (long *)(ulong)(lVar21 != 0);
                    }
                    auVar32 = func_0x00f78af4();
                    *(undefined8 *)(puVar4 + -0x690) = 0x3d25458;
                    *(undefined8 *)(puVar4 + -0x688) = uVar19;
                    *(undefined8 *)(puVar4 + -0x680) = 0;
                    *(long **)(puVar4 + -0x678) = auVar33._8_8_;
                    *(undefined1 **)(puVar4 + -0x670) = puVar4 + -0x620;
                    *(undefined **)(puVar4 + -0x668) =
                         &Core_Networking_HostUpdateHolder__Update_HostCarUpdate_;
                    plVar27 = (long *)/*FlatBuffers.Table$$__offset*/ func_0x016cf120(auVar32._0_8_,6,0);
                    if ((int)plVar27 == 0) {
                      *extraout_x8 = 0;
                      extraout_x8[1] = 0;
                      extraout_x8[2] = 0;
                    }
                    else {
                      auVar33 = /*FlatBuffers.Table$$__union<HostCarUpdate>*/ func_0x018e3e90(auVar32._0_8_,plVar27,
                                                **(undefined8 **)(auVar32._8_8_ + 0x30));
                      *(undefined8 *)(puVar4 + -0x6a8) = 0;
                      *(undefined8 *)(puVar4 + -0x6a0) = 0;
                      *(undefined8 *)(puVar4 + -0x698) = 0;
                      plVar27 = (long *)/*System.Nullable<HostCarUpdate>$$.ctor*/ func_0x02652304(puVar4 + -0x6a8,auVar33._0_8_,auVar33._8_8_,
                                                        *(undefined8 *)
                                                         (*(long *)(auVar32._8_8_ + 0x30) + 0x10));
                      uVar19 = *(undefined8 *)(puVar4 + -0x6a8);
                      extraout_x8[1] = *(undefined8 *)(puVar4 + -0x6a0);
                      *extraout_x8 = uVar19;
                      extraout_x8[2] = *(undefined8 *)(puVar4 + -0x698);
                    }
                    return plVar27;
                  }
                  uVar22 = 1;
                  uVar18 = 1;
                  puVar29 = *(undefined1 **)(puVar4 + -0x5e0);
                  puVar30 = *(undefined **)(puVar4 + -0x5d8);
                  lVar21 = *(long *)(puVar4 + -0x5f0);
                  auVar34._8_8_ = *(undefined8 *)(puVar4 + -0x5e8);
                  auVar34._0_8_ = auVar32._0_8_;
                  uVar14 = *(undefined8 *)(puVar4 + -0x600);
                  auVar35._8_8_ = auVar32._8_8_;
                  auVar35._0_8_ = *(undefined8 *)(puVar4 + -0x5f8);
                  puVar5 = puVar4 + -0x5d0;
                  unaff_x24 = *(code **)(puVar4 + -0x610);
                  uVar19 = *(undefined8 *)(puVar4 + -0x608);
                }
                else {
                  uVar22 = 1;
                  uVar18 = 1;
                  plVar9 = (long *)0x0;
                  puVar30 = &UNK_0185d89c;
                }
              }
              else {
                uVar22 = 1;
                uVar18 = 0;
                puVar29 = *(undefined1 **)(puVar4 + -0x550);
                puVar30 = *(undefined **)(puVar4 + -0x548);
                lVar21 = *(long *)(puVar4 + -0x560);
                auVar34._8_8_ = *(undefined8 *)(puVar4 + -0x558);
                auVar34._0_8_ = auVar32._0_8_;
                uVar14 = *(undefined8 *)(puVar4 + -0x570);
                auVar35._8_8_ = auVar32._8_8_;
                auVar35._0_8_ = *(undefined8 *)(puVar4 + -0x568);
                puVar5 = puVar4 + -0x540;
                unaff_x24 = *(code **)(puVar4 + -0x580);
                uVar19 = *(undefined8 *)(puVar4 + -0x578);
              }
            }
            else {
              uVar22 = 1;
              uVar18 = 0;
              plVar9 = (long *)0x0;
              puVar30 = &UNK_0185d69c;
            }
          }
          else {
            uVar22 = 0;
            uVar18 = 0;
            puVar29 = *(undefined1 **)(puVar4 + -0x4b0);
            puVar30 = *(undefined **)(puVar4 + -0x4a8);
            lVar21 = *(long *)(puVar4 + -0x4c0);
            auVar34._8_8_ = *(undefined8 *)(puVar4 + -0x4b8);
            auVar34._0_8_ = auVar32._0_8_;
            uVar14 = *(undefined8 *)(puVar4 + -0x4d0);
            auVar35._8_8_ = 1;
            auVar35._0_8_ = *(undefined8 *)(puVar4 + -0x4c8);
            puVar5 = puVar4 + -0x4a0;
            unaff_x24 = *(code **)(puVar4 + -0x4e0);
            uVar19 = *(undefined8 *)(puVar4 + -0x4d8);
          }
        }
        else {
          uVar22 = 0;
          auVar35._8_8_ = 1;
          auVar35._0_8_ = uVar18;
          uVar18 = 0;
          plVar9 = (long *)0x0;
          puVar30 = &UNK_0185d4d4;
        }
        *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
        *(code **)(puVar5 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar5 + -0x38) = uVar19;
        *(undefined8 *)(puVar5 + -0x30) = uVar14;
        *(long *)(puVar5 + -0x28) = auVar35._0_8_;
        *(long *)(puVar5 + -0x20) = lVar21;
        *(long *)(puVar5 + -0x18) = auVar34._8_8_;
        *(undefined1 **)(puVar5 + -0x10) = puVar29;
        *(undefined **)(puVar5 + -8) = puVar30;
        if (pcRam0000000003ebf468 == (code *)0x0) {
          pcRam0000000003ebf468 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0322e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar27 = (long *)(*pcRam0000000003ebf468)
                                    (auVar34._0_8_,uVar16,1,uVar22,auVar35._8_8_,uVar18,plVar9);
        return plVar27;
      }
      lVar21 = /*UnityEngine.GameObject$$GetComponentInParent*/ func_0x0322e528(auVar33._0_8_,uVar18,auVar33._8_8_,0);
      lVar23 = *(long *)(plVar9[6] + 8);
      if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar23);
      }
      if (lVar21 != 0) {
        plVar27 = (long *)func_0x00f78adc(lVar21,lVar23);
        if (plVar27 != (long *)0x0) {
          return plVar27;
        }
        func_0x00f78e5c(lVar21,lVar23);
      }
      return (long *)0x0;
    }
    plVar11 = (long *)___cxa_begin_catch();
    lVar24 = *plVar11;
    ___cxa_end_catch();
    plVar11 = (long *)0x0;
    lVar21 = -1;
    unaff_x25 = 1;
  } while( true );
}



// ============================================================
// RVA: 0x14ba8e4 | Atlas.Gameplay.Pickups.PickupManager.RollPickupForRemote
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14baac8 | Atlas.Gameplay.Pickups.PickupManager.IncrementUsableInPlay
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14babd0 | Atlas.Gameplay.Pickups.PickupManager.RollUsableTable
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14bad2c | Atlas.Gameplay.Pickups.PickupManager.OnUsableRequested
// ============================================================

ulong Atlas_Gameplay_Pickups_PickupManager__OnUsableRequested
                (long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x1;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  float extraout_s0;
  float fVar15;
  undefined1 auVar16 [16];
  long lStack_b8;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  short sStack_5a;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_58 = 0;
  sStack_5a = 0;
  plVar10 = param_3;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar4 != 0)) {
    uVar5 = /*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar4,0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    lStack_78 = param_3[1];
    lStack_80 = *param_3;
    lStack_68 = param_3[3];
    lStack_70 = param_3[2];
    uVar5 = Atlas_Gameplay_Pickups_PickupManager__RollPickupForRemote
                      (param_1,&lStack_80,param_2,&lStack_58);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    plVar10 = param_2;
    if ((lStack_58 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
      plVar10 = (long *)&sStack_5a;
      uVar5 = /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(param_1 + 0x28),*(undefined8 *)(lStack_58 + 0x18),plVar10,0)
      ;
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0x20), plVar6 != (long *)0x0)) {
        lStack_48 = param_3[1];
        lStack_50 = *param_3;
        lStack_38 = param_3[3];
        lStack_40 = param_3[2];
        uVar5 = (**(code **)(*plVar6 + 0x218))
                          (plVar6,(long)sStack_5a,&lStack_50,*(undefined8 *)(*plVar6 + 0x220));
        return uVar5;
      }
    }
  }
  auVar16 = func_0x00f78af4();
  lVar4 = auVar16._0_8_;
  if ((bRam0000000003eb4aea & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57318);
    bRam0000000003eb4aea = 1;
  }
  lStack_b8 = 0;
  if ((*(long *)(lVar4 + 0x30) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar4 + 0x30) + 0x20), lVar7 != 0)) {
    uVar5 = /*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar7,0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    if (*(long *)(lVar4 + 0x28) != 0) {
      plVar10 = &lStack_b8;
      uVar5 = /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(lVar4 + 0x28),auVar16._8_8_,plVar10,0);
      lVar7 = lStack_b8;
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if (*(long *)(lVar4 + 0x18) != 0) {
        lVar14 = *(long *)(*(long *)(lVar4 + 0x18) + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar7,0);
        if (lVar14 != 0) {
          plVar10 = plRam0000000003d57318;
          lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,uVar8);
          if ((((*(long *)(lVar4 + 0x10) != 0) &&
               (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x40), lVar4 != 0)) &&
              (lVar4 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalHumanPlayer*/ func_0x0159aaf0(lVar4,0), lVar7 != 0)) && (lVar4 != 0)) {
            uVar5 = /*Atlas.Gameplay.Player.GameContextPlayer$$UsablePickedUpResponse*/ func_0x015a565c(lVar4,*(undefined8 *)(lVar7 + 0x18),0);
            return uVar5;
          }
        }
      }
    }
  }
  uVar8 = func_0x00f78af4();
  if ((extraout_x1 != 0) && (lVar4 = *(long *)(extraout_x1 + 0x20), lVar4 != 0)) {
    iVar2 = (int)*(ulong *)(lVar4 + 0x18);
    if (iVar2 == 0) {
      uVar5 = /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
      if ((bRam0000000003eb4aee & 1) == 0) {
        func_0x00f78a20(0x3d75da8);
        bRam0000000003eb4aee = 1;
        uVar5 = /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
      }
    }
    else {
      uVar1 = iVar2 - 1;
      uVar5 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        uVar12 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        piVar13 = (int *)(lVar4 + 0x20);
        do {
          if (uVar12 == 0) {
            uVar8 = func_0x00f78b24();
            func_0x00f78ac0(uVar8,0);
            goto code_r0x014bafd8;
          }
          if (extraout_s0 < (float)*piVar13) {
            uVar9 = *(undefined8 *)piVar13;
            uVar11 = *(undefined8 *)(piVar13 + 2);
            goto code_r0x014bafbc;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
      uVar9 = *(undefined8 *)(lVar4 + 0x20);
      uVar11 = *(undefined8 *)(lVar4 + 0x28);
code_r0x014bafbc:
      uVar5 = /*Atlas.Gameplay.Pickups.PickupTable$$RollFromRow*/ func_0x014bb504(uVar8,uVar9,uVar11);
    }
    return uVar5;
  }
code_r0x014bafd8:
  lVar4 = func_0x00f78af4();
  if (plVar10 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
    lVar7 = *(long *)(lVar4 + 0x48);
    uVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
    if (lVar7 != 0) {
      iVar2 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(lVar7,uVar8);
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
      if (lVar7 != 0) {
        iVar3 = Atlas_Gameplay_Usables_UsableManager__AreAnyUsablesLeftInPool(lVar7,uVar8,0);
        if (iVar3 == 0 || iVar2 == 0) {
          return 0;
        }
        if (0 < iVar2) {
          lVar7 = *(long *)(lVar4 + 0x88);
          if (lVar7 == 0) goto code_r0x014bb124;
          if (*(uint *)(lVar7 + 0x18) <= uVar1) goto code_r0x014bb128;
          if (iVar2 < (int)plVar10[4] + *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20)) {
            return 0;
          }
        }
        iVar2 = *(int *)((long)plVar10 + 0x4c);
        if (iVar2 == 0) {
          return 0;
        }
        if (0 < iVar2) {
          lVar7 = *(long *)(lVar4 + 0x90);
          if (lVar7 == 0) goto code_r0x014bb124;
          if (*(uint *)(lVar7 + 0x18) <= uVar1) goto code_r0x014bb128;
          if (iVar2 < (int)plVar10[4] + *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20)) {
            return 0;
          }
        }
        if (*(float *)(plVar10 + 10) <= 0.0) {
          return 1;
        }
        if (*(long *)(lVar4 + 0x98) != 0) {
          fVar15 = (float)func_0x0001c0c4(*(long *)(lVar4 + 0x98),(long)(int)uVar1);
          return (ulong)(fVar15 <= 0.0);
        }
      }
    }
  }
code_r0x014bb124:
  func_0x00f78af4();
code_r0x014bb128:
  uVar8 = func_0x00f78b24();
  func_0x00f78ac0(uVar8,0);
  if ((bRam0000000003eb4aee & 1) == 0) {
    func_0x00f78a20(0x3d75da8);
    bRam0000000003eb4aee = 1;
  }
  return /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
}



// ============================================================
// RVA: 0x14badfc | Atlas.Gameplay.Pickups.PickupManager.OnUsableResponse
// ============================================================

ulong Atlas_Gameplay_Pickups_PickupManager__OnUsableResponse
                (long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x1;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  float extraout_s0;
  float fVar12;
  long lStack_38;
  
  if ((bRam0000000003eb4aea & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57318);
    bRam0000000003eb4aea = 1;
  }
  lStack_38 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar4 != 0)) {
    uVar5 = /*Core.Networking.NetworkSession$$IsHost*/ func_0x0165ea90(lVar4,0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      param_3 = &lStack_38;
      uVar5 = /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(param_1 + 0x28),param_2,param_3,0);
      lVar4 = lStack_38;
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar4,0);
        if (lVar11 != 0) {
          param_3 = plRam0000000003d57318;
          lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar6);
          if ((((*(long *)(param_1 + 0x10) != 0) &&
               (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar11 != 0)) &&
              (lVar11 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalHumanPlayer*/ func_0x0159aaf0(lVar11,0), lVar4 != 0)) && (lVar11 != 0)) {
            uVar5 = /*Atlas.Gameplay.Player.GameContextPlayer$$UsablePickedUpResponse*/ func_0x015a565c(lVar11,*(undefined8 *)(lVar4 + 0x18),0);
            return uVar5;
          }
        }
      }
    }
  }
  uVar6 = func_0x00f78af4();
  if ((extraout_x1 != 0) && (lVar4 = *(long *)(extraout_x1 + 0x20), lVar4 != 0)) {
    iVar2 = (int)*(ulong *)(lVar4 + 0x18);
    if (iVar2 == 0) {
      uVar5 = /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
      if ((bRam0000000003eb4aee & 1) == 0) {
        func_0x00f78a20(0x3d75da8);
        bRam0000000003eb4aee = 1;
        uVar5 = /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
      }
    }
    else {
      uVar1 = iVar2 - 1;
      uVar5 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        uVar9 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        piVar10 = (int *)(lVar4 + 0x20);
        do {
          if (uVar9 == 0) {
            uVar6 = func_0x00f78b24();
            func_0x00f78ac0(uVar6,0);
            goto code_r0x014bafd8;
          }
          if (extraout_s0 < (float)*piVar10) {
            uVar7 = *(undefined8 *)piVar10;
            uVar8 = *(undefined8 *)(piVar10 + 2);
            goto code_r0x014bafbc;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      uVar8 = *(undefined8 *)(lVar4 + 0x28);
code_r0x014bafbc:
      uVar5 = /*Atlas.Gameplay.Pickups.PickupTable$$RollFromRow*/ func_0x014bb504(uVar6,uVar7,uVar8);
    }
    return uVar5;
  }
code_r0x014bafd8:
  lVar4 = func_0x00f78af4();
  if (param_3 != (long *)0x0) {
    uVar1 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
    lVar11 = *(long *)(lVar4 + 0x48);
    uVar6 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
    if (lVar11 != 0) {
      iVar2 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(lVar11,uVar6);
      lVar11 = *(long *)(lVar4 + 0x58);
      uVar6 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
      if (lVar11 != 0) {
        iVar3 = Atlas_Gameplay_Usables_UsableManager__AreAnyUsablesLeftInPool(lVar11,uVar6,0);
        if (iVar3 == 0 || iVar2 == 0) {
          return 0;
        }
        if (0 < iVar2) {
          lVar11 = *(long *)(lVar4 + 0x88);
          if (lVar11 == 0) goto code_r0x014bb124;
          if (*(uint *)(lVar11 + 0x18) <= uVar1) goto code_r0x014bb128;
          if (iVar2 < (int)param_3[4] + *(int *)(lVar11 + (long)(int)uVar1 * 4 + 0x20)) {
            return 0;
          }
        }
        iVar2 = *(int *)((long)param_3 + 0x4c);
        if (iVar2 == 0) {
          return 0;
        }
        if (0 < iVar2) {
          lVar11 = *(long *)(lVar4 + 0x90);
          if (lVar11 == 0) goto code_r0x014bb124;
          if (*(uint *)(lVar11 + 0x18) <= uVar1) goto code_r0x014bb128;
          if (iVar2 < (int)param_3[4] + *(int *)(lVar11 + (long)(int)uVar1 * 4 + 0x20)) {
            return 0;
          }
        }
        if (*(float *)(param_3 + 10) <= 0.0) {
          return 1;
        }
        if (*(long *)(lVar4 + 0x98) != 0) {
          fVar12 = (float)func_0x0001c0c4(*(long *)(lVar4 + 0x98),(long)(int)uVar1);
          return (ulong)(fVar12 <= 0.0);
        }
      }
    }
  }
code_r0x014bb124:
  func_0x00f78af4();
code_r0x014bb128:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
  if ((bRam0000000003eb4aee & 1) == 0) {
    func_0x00f78a20(0x3d75da8);
    bRam0000000003eb4aee = 1;
  }
  return /*STR('Usable_Boost_X1')*/ uRam0000000003d75da8;
}



// ============================================================
// RVA: 0x14bafdc | Atlas.Gameplay.Pickups.PickupManager.IsUseableAvailable
// ============================================================

ulong Atlas_Gameplay_Pickups_PickupManager__IsUseableAvailable
                (long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  if (param_3 != (long *)0x0) {
    uVar1 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
    lVar5 = *(long *)(param_1 + 0x48);
    uVar4 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
    if (lVar5 != 0) {
      iVar2 = Atlas_Gameplay_PickupLimitsDefinition__GetCapacityByUsableType(lVar5,uVar4);
      lVar5 = *(long *)(param_1 + 0x58);
      uVar4 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
      if (lVar5 != 0) {
        iVar3 = Atlas_Gameplay_Usables_UsableManager__AreAnyUsablesLeftInPool(lVar5,uVar4,0);
        if (iVar3 == 0 || iVar2 == 0) {
          return 0;
        }
        if (0 < iVar2) {
          lVar5 = *(long *)(param_1 + 0x88);
          if (lVar5 == 0) goto LAB_014bb124;
          if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_014bb128;
          if (iVar2 < (int)param_3[4] + *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20)) {
            return 0;
          }
        }
        iVar2 = *(int *)((long)param_3 + 0x4c);
        if (iVar2 == 0) {
          return 0;
        }
        if (0 < iVar2) {
          lVar5 = *(long *)(param_1 + 0x90);
          if (lVar5 == 0) goto LAB_014bb124;
          if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_014bb128;
          if (iVar2 < (int)param_3[4] + *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20)) {
            return 0;
          }
        }
        if (*(float *)(param_3 + 10) <= 0.0) {
          return 1;
        }
        if (*(long *)(param_1 + 0x98) != 0) {
          fVar6 = (float)func_0x0001c0c4(*(long *)(param_1 + 0x98),(long)(int)uVar1);
          return (ulong)(fVar6 <= 0.0);
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
// RVA: 0x14bb178 | Atlas.Gameplay.Pickups.PickupManager.DebugOnUsablePickedUp
// ============================================================

void Atlas_Gameplay_Pickups_PickupManager__DebugOnUsablePickedUp(void)

{
  return;
}



// ============================================================
// RVA: 0x14bb17c | Atlas.Gameplay.Pickups.PickupManager.OnUsableDespawned
// ============================================================

void Atlas_Gameplay_Pickups_PickupManager__OnUsableDespawned(long param_1,long *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  
  if (param_3 < 1) {
    return;
  }
  if (*(char *)(param_1 + 0xa8) == '\0') {
    return;
  }
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_014bb228;
      piVar5 = (int *)(lVar4 + (long)(int)uVar2 * 4 + 0x20);
      iVar1 = *piVar5;
      if (iVar1 < 1) {
        return;
      }
      *piVar5 = iVar1 - param_3;
      if (*(float *)(param_2 + 10) <= 0.0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x98);
      if (lVar4 != 0) {
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          *(float *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = *(float *)(param_2 + 10);
          return;
        }
        goto LAB_014bb228;
      }
    }
  }
  func_0x00f78af4();
LAB_014bb228:
  uVar3 = func_0x00f78b24();
  lVar4 = func_0x00f78ac0(uVar3,0);
  *(undefined1 *)(lVar4 + 0xa8) = 1;
  return;
}



// ============================================================
// RVA: 0x14bb234 | Atlas.Gameplay.Pickups.PickupManager..ctor
// ============================================================

void Atlas_Gameplay_Pickups_PickupManager___ctor(long param_1)

{
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



// ============================================================
// RVA: 0x14bb244 | Atlas.Gameplay.Pickups.PickupManager..cctor
// ============================================================

void Atlas_Gameplay_Pickups_PickupManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4aec & 1) == 0) {
    func_0x00f78a20(0x3d23c30);
    func_0x00f78a20(0x3d71250);
    bRam0000000003eb4aec = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('PickupManager.Update()')*/ uRam0000000003d71250,1,0,0,0);
  **(undefined8 **)(/*Atlas.Gameplay.Pickups.PickupManager_TypeInfo*/ lRam0000000003d23c30 + 0xb8) = uVar1;
  return;
}



