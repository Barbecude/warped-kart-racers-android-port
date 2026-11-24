// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.AtlasStats

// ============================================================
// RVA: 0x146dff4 | Atlas.Stats.AtlasStats.get_StatsManager
// ============================================================

undefined8 Atlas_Stats_AtlasStats__get_StatsManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x146dffc | Atlas.Stats.AtlasStats.get_IsInited
// ============================================================

undefined1 Atlas_Stats_AtlasStats__get_IsInited(long param_1)

{
  return *(undefined1 *)(param_1 + 0x65);
}



// ============================================================
// RVA: 0x146e004 | Atlas.Stats.AtlasStats.Init
// ============================================================

void Atlas_Stats_AtlasStats__Init(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 extraout_w1;
  
  if ((bRam0000000003eb485d & 1) == 0) {
    func_0x00f78a20(0x3d3c040);
    func_0x00f78a20(0x3d1de40);
    func_0x00f78a20(0x3d24d58);
    bRam0000000003eb485d = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Stats.StatsManager_TypeInfo*/ uRam0000000003d24d58);
  /*Atlas.Stats.StatsManager$$.ctor*/ func_0x01505634(lVar1,0);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    /*Atlas.Stats.StatsManager$$Init*/ func_0x01504d00(lVar1,0);
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<StringID>_TypeInfo*/ uRam0000000003d1de40);
    /*System.Collections.Generic.List<StringID>$$.ctor*/ func_0x02465440(uVar2,uRam0000000003d3c040);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x65) = 1;
    return;
  }
  lVar1 = func_0x00f78af4();
  *(undefined1 *)(lVar1 + 0x65) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  if (*(long *)(lVar1 + 0x10) != 0) {
    /*Atlas.Stats.StatsManager$$DeInit*/ func_0x01504e1c(*(long *)(lVar1 + 0x10),0);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    return;
  }
  lVar1 = func_0x00f78af4();
  *(undefined1 *)(lVar1 + 0x5d) = extraout_w1;
  return;
}



// ============================================================
// RVA: 0x146e0c8 | Atlas.Stats.AtlasStats.DeInit
// ============================================================

void Atlas_Stats_AtlasStats__DeInit(long param_1)

{
  long lVar1;
  undefined1 extraout_w1;
  
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Atlas.Stats.StatsManager$$DeInit*/ func_0x01504e1c(*(long *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  lVar1 = func_0x00f78af4();
  *(undefined1 *)(lVar1 + 0x5d) = extraout_w1;
  return;
}



// ============================================================
// RVA: 0x146e104 | Atlas.Stats.AtlasStats.EnableTracking
// ============================================================

void Atlas_Stats_AtlasStats__EnableTracking(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5d) = param_2;
  return;
}



// ============================================================
// RVA: 0x146e10c | Atlas.Stats.AtlasStats.SetTrackingMode
// ============================================================

void Atlas_Stats_AtlasStats__SetTrackingMode(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// ============================================================
// RVA: 0x146e114 | Atlas.Stats.AtlasStats.StartGameContextKartTracking
// ============================================================

/* WARNING: Possible PIC construction at 0x0146e184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146e188) */
/* WARNING: Removing unreachable block (ram,0x0146e190) */
/* WARNING: Removing unreachable block (ram,0x0146e1b0) */
/* WARNING: Removing unreachable block (ram,0x0146e1d8) */
/* WARNING: Removing unreachable block (ram,0x0146e1e0) */
/* WARNING: Removing unreachable block (ram,0x0146e268) */
/* WARNING: Removing unreachable block (ram,0x0146e214) */
/* WARNING: Removing unreachable block (ram,0x0146e234) */
/* WARNING: Removing unreachable block (ram,0x0146e26c) */
/* WARNING: Removing unreachable block (ram,0x0146e248) */
/* WARNING: Removing unreachable block (ram,0x014d2e04) */
/* WARNING: Removing unreachable block (ram,0x014d2e28) */
/* WARNING: Removing unreachable block (ram,0x014d2e3c) */
/* WARNING: Removing unreachable block (ram,0x014d2e48) */
/* WARNING: Removing unreachable block (ram,0x014d2e60) */
/* WARNING: Removing unreachable block (ram,0x014d2e9c) */
/* WARNING: Removing unreachable block (ram,0x014d2ec8) */
/* WARNING: Removing unreachable block (ram,0x014d2edc) */
/* WARNING: Removing unreachable block (ram,0x014d2ee8) */
/* WARNING: Removing unreachable block (ram,0x014d2f00) */
/* WARNING: Removing unreachable block (ram,0x014d2f3c) */
/* WARNING: Removing unreachable block (ram,0x014d2f10) */
/* WARNING: Removing unreachable block (ram,0x014d2f2c) */
/* WARNING: Removing unreachable block (ram,0x014d2e70) */
/* WARNING: Removing unreachable block (ram,0x014d2e8c) */
/* WARNING: Removing unreachable block (ram,0x0146e1c4) */

ulong Atlas_Stats_AtlasStats__StartGameContextKartTracking
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x1;
  long lVar7;
  long extraout_x1_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  undefined1 **ppuVar13;
  undefined *puVar14;
  undefined4 uVar15;
  long alStack_c0 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb485e & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d524d8);
    func_0x00f78a20(0x3d24068);
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb485e = 1;
  }
  uStack_78 = 0x3eb4000;
  uStack_48 = 0x146e188;
  ppuVar13 = &puStack_50;
  plVar12 = (long *)0x3eb4000;
  uStack_70 = param_7;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4865 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d524d8);
    func_0x00f78a20(0x3d3c050);
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb4865 = 1;
  }
  uVar4 = param_7;
  if (*(long *)(param_4 + 0x20) == 0) {
code_r0x0146e360:
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined4 *)(param_4 + 0x28) = 0;
    uVar15 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(param_4 + 0x2c) = uVar15;
    *(undefined4 *)(param_4 + 0x30) = param_2;
    *(undefined4 *)(param_4 + 0x34) = param_3;
    *(undefined8 *)(param_4 + 0x38) = 0;
    *(undefined8 *)(param_4 + 0x40) = 0;
    *(undefined4 *)(param_4 + 0x48) = 0;
    if (*(long *)(param_4 + 0x50) != 0) {
      uVar5 = /*System.Collections.Generic.List<StringID>$$Clear*/ func_0x024663e0(*(long *)(param_4 + 0x50),uRam0000000003d3c050);
      *(undefined4 *)(param_4 + 0x58) = 0;
      *(undefined1 *)(param_4 + 0x5c) = 0;
      if ((int)param_7 != 0) {
        *(undefined4 *)(param_4 + 0x60) = 0;
      }
      return uVar5;
    }
  }
  else if (*(long *)(param_4 + 0x18) != 0) {
    plVar12 = *(long **)(*(long *)(param_4 + 0x18) + 0x68);
    uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar4,param_4,uRam0000000003d524d8,0);
    if (plVar12 != (long *)0x0) {
      if ((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 +
                   -8) != /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) goto code_r0x0146e3c0;
      Atlas_Gameplay_Kart_RaceKartAI__remove_OnLapCompleted(plVar12,uVar4,0);
      *(undefined8 *)(param_4 + 0x20) = 0;
      goto code_r0x0146e360;
    }
  }
  func_0x00f78af4();
code_r0x0146e3c0:
  func_0x00f78e5c(plVar12);
  if ((bRam0000000003eb485f & 1) == 0) {
    func_0x00f78a20(0x3d1fed8);
    bRam0000000003eb485f = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = **(long **)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8);
  puVar14 = &Atlas_Stats_AtlasStats__OnlyTrackedInRaceContext;
  puVar3 = &stack0xffffffffffffff80;
  lVar7 = extraout_x1;
  do {
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    if (lVar7 != 0) {
      uVar5 = 0;
      uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
      uVar9 = (ulong)(int)*(uint *)(lVar7 + 0x18);
      uVar1 = uVar9;
      if ((long)uVar9 < 1) {
        uVar1 = 0;
      }
      if (uVar10 != 1 && (long)(uVar10 << 0x20) < 0x100000001) {
code_r0x0146e468:
        return (ulong)((long)uVar9 <= (long)uVar5);
      }
      uVar5 = 0;
      while (uVar5 != uVar10) {
        if (lVar8 == 0) goto code_r0x0146e4ec;
        iVar2 = *(int *)(lVar8 + 0x18);
        if (iVar2 < 1) goto code_r0x0146e468;
        iVar11 = 0;
        while( true ) {
          if (iVar2 == iVar11) goto code_r0x0146e4e0;
          if (*(int *)(lVar7 + uVar5 * 4 + 0x20) == *(int *)(lVar8 + (long)iVar11 * 4 + 0x20))
          break;
          iVar11 = iVar11 + 1;
          if (iVar2 == iVar11) goto code_r0x0146e468;
        }
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar1) goto code_r0x0146e468;
      }
code_r0x0146e4e0:
      uVar6 = func_0x00f78b24();
      func_0x00f78ac0(uVar6,0);
    }
code_r0x0146e4ec:
    func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x40) = uVar4;
    *(long **)(puVar3 + -0x38) = plVar12;
    *(undefined8 *)(puVar3 + -0x30) = param_7;
    *(long *)(puVar3 + -0x28) = param_4;
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x18) = &Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext;
    if ((bRam0000000003eb4860 & 1) == 0) {
      func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4860 = 1;
    }
    if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = *(long *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8);
    ppuVar13 = *(undefined1 ***)(puVar3 + -0x20);
    puVar14 = *(undefined **)(puVar3 + -0x18);
    param_7 = *(undefined8 *)(puVar3 + -0x30);
    param_4 = *(long *)(puVar3 + -0x28);
    uVar4 = *(undefined8 *)(puVar3 + -0x40);
    plVar12 = *(long **)(puVar3 + -0x38);
    puVar3 = puVar3 + -0x10;
    lVar7 = extraout_x1_00;
  } while( true );
}



// ============================================================
// RVA: 0x146e274 | Atlas.Stats.AtlasStats.ResetKartTracking
// ============================================================

ulong Atlas_Stats_AtlasStats__ResetKartTracking
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x1;
  long lVar6;
  long extraout_x1_00;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  undefined8 unaff_x22;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  long alStack_80 [8];
  
  puVar12 = &stack0xfffffffffffffff0;
  plVar11 = (long *)0x3eb4000;
  if ((bRam0000000003eb4865 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d524d8);
    func_0x00f78a20(0x3d3c050);
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb4865 = 1;
  }
  if (*(long *)(param_4 + 0x20) == 0) {
LAB_0146e360:
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined4 *)(param_4 + 0x28) = 0;
    uVar14 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(param_4 + 0x2c) = uVar14;
    *(undefined4 *)(param_4 + 0x30) = param_2;
    *(undefined4 *)(param_4 + 0x34) = param_3;
    *(undefined8 *)(param_4 + 0x38) = 0;
    *(undefined8 *)(param_4 + 0x40) = 0;
    *(undefined4 *)(param_4 + 0x48) = 0;
    if (*(long *)(param_4 + 0x50) != 0) {
      uVar4 = /*System.Collections.Generic.List<StringID>$$Clear*/ func_0x024663e0(*(long *)(param_4 + 0x50),uRam0000000003d3c050);
      *(undefined4 *)(param_4 + 0x58) = 0;
      *(undefined1 *)(param_4 + 0x5c) = 0;
      if ((int)param_5 != 0) {
        *(undefined4 *)(param_4 + 0x60) = 0;
      }
      return uVar4;
    }
  }
  else if (*(long *)(param_4 + 0x18) != 0) {
    plVar11 = *(long **)(*(long *)(param_4 + 0x18) + 0x68);
    unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,param_4,uRam0000000003d524d8,0);
    if (plVar11 != (long *)0x0) {
      if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 +
                   -8) != /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) goto LAB_0146e3c0;
      Atlas_Gameplay_Kart_RaceKartAI__remove_OnLapCompleted(plVar11,unaff_x22,0);
      *(undefined8 *)(param_4 + 0x20) = 0;
      goto LAB_0146e360;
    }
  }
  func_0x00f78af4();
LAB_0146e3c0:
  func_0x00f78e5c(plVar11);
  if ((bRam0000000003eb485f & 1) == 0) {
    func_0x00f78a20(0x3d1fed8);
    bRam0000000003eb485f = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = **(long **)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8);
  puVar13 = &Atlas_Stats_AtlasStats__OnlyTrackedInRaceContext;
  puVar3 = &stack0xffffffffffffffc0;
  lVar6 = extraout_x1;
  do {
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    if (lVar6 != 0) {
      uVar4 = 0;
      uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
      uVar8 = (ulong)(int)*(uint *)(lVar6 + 0x18);
      uVar1 = uVar8;
      if ((long)uVar8 < 1) {
        uVar1 = 0;
      }
      if (uVar9 != 1 && (long)(uVar9 << 0x20) < 0x100000001) {
code_r0x0146e468:
        return (ulong)((long)uVar8 <= (long)uVar4);
      }
      uVar4 = 0;
      while (uVar4 != uVar9) {
        if (lVar7 == 0) goto code_r0x0146e4ec;
        iVar2 = *(int *)(lVar7 + 0x18);
        if (iVar2 < 1) goto code_r0x0146e468;
        iVar10 = 0;
        while( true ) {
          if (iVar2 == iVar10) goto code_r0x0146e4e0;
          if (*(int *)(lVar6 + uVar4 * 4 + 0x20) == *(int *)(lVar7 + (long)iVar10 * 4 + 0x20))
          break;
          iVar10 = iVar10 + 1;
          if (iVar2 == iVar10) goto code_r0x0146e468;
        }
        uVar4 = uVar4 + 1;
        if (uVar4 == uVar1) goto code_r0x0146e468;
      }
code_r0x0146e4e0:
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
    }
code_r0x0146e4ec:
    func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x40) = unaff_x22;
    *(long **)(puVar3 + -0x38) = plVar11;
    *(undefined8 *)(puVar3 + -0x30) = param_5;
    *(long *)(puVar3 + -0x28) = param_4;
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x18) = &Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext;
    if ((bRam0000000003eb4860 & 1) == 0) {
      func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4860 = 1;
    }
    if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = *(long *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8);
    puVar12 = *(undefined1 **)(puVar3 + -0x20);
    puVar13 = *(undefined **)(puVar3 + -0x18);
    param_5 = *(undefined8 *)(puVar3 + -0x30);
    param_4 = *(long *)(puVar3 + -0x28);
    unaff_x22 = *(undefined8 *)(puVar3 + -0x40);
    plVar11 = *(long **)(puVar3 + -0x38);
    puVar3 = puVar3 + -0x10;
    lVar6 = extraout_x1_00;
  } while( true );
}



// ============================================================
// RVA: 0x146e3c8 | Atlas.Stats.AtlasStats.OnlyTrackedInRaceContext
// ============================================================

bool Atlas_Stats_AtlasStats__OnlyTrackedInRaceContext(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x1;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((bRam0000000003eb485f & 1) == 0) {
    func_0x00f78a20(0x3d1fed8);
    bRam0000000003eb485f = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = **(long **)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8);
  puVar3 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar3 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar3 + -8) = unaff_x30;
    if (param_2 != 0) {
      uVar7 = 0;
      uVar8 = (ulong)*(uint *)(param_2 + 0x18);
      uVar6 = (ulong)(int)*(uint *)(param_2 + 0x18);
      uVar1 = uVar6;
      if ((long)uVar6 < 1) {
        uVar1 = 0;
      }
      if (uVar8 != 1 && (long)(uVar8 << 0x20) < 0x100000001) {
code_r0x0146e468:
        return (long)uVar6 <= (long)uVar7;
      }
      uVar7 = 0;
      while (uVar7 != uVar8) {
        if (lVar5 == 0) goto code_r0x0146e4ec;
        iVar2 = *(int *)(lVar5 + 0x18);
        if (iVar2 < 1) goto code_r0x0146e468;
        iVar9 = 0;
        while( true ) {
          if (iVar2 == iVar9) goto code_r0x0146e4e0;
          if (*(int *)(param_2 + uVar7 * 4 + 0x20) == *(int *)(lVar5 + (long)iVar9 * 4 + 0x20))
          break;
          iVar9 = iVar9 + 1;
          if (iVar2 == iVar9) goto code_r0x0146e468;
        }
        uVar7 = uVar7 + 1;
        if (uVar7 == uVar1) goto code_r0x0146e468;
      }
code_r0x0146e4e0:
      uVar4 = func_0x00f78b24();
      func_0x00f78ac0(uVar4,0);
    }
code_r0x0146e4ec:
    func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x40) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x20;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x18) = &Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext;
    if ((bRam0000000003eb4860 & 1) == 0) {
      func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4860 = 1;
    }
    if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = *(long *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8);
    unaff_x29 = *(undefined8 *)(puVar3 + -0x20);
    unaff_x30 = *(undefined8 *)(puVar3 + -0x18);
    unaff_x20 = *(undefined8 *)(puVar3 + -0x30);
    unaff_x19 = *(undefined8 *)(puVar3 + -0x28);
    unaff_x22 = *(undefined8 *)(puVar3 + -0x40);
    unaff_x21 = *(undefined8 *)(puVar3 + -0x38);
    puVar3 = puVar3 + -0x10;
    param_2 = extraout_x1;
  } while( true );
}



// ============================================================
// RVA: 0x146e43c | Atlas.Stats.AtlasStats.IsSubSetOfOtherStats
// ============================================================

bool Atlas_Stats_AtlasStats__IsSubSetOfOtherStats(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long extraout_x1;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (param_2 != 0) {
      uVar5 = 0;
      uVar6 = (ulong)*(uint *)(param_2 + 0x18);
      uVar4 = (ulong)(int)*(uint *)(param_2 + 0x18);
      uVar1 = uVar4;
      if ((long)uVar4 < 1) {
        uVar1 = 0;
      }
      if (uVar6 != 1 && (long)(uVar6 << 0x20) < 0x100000001) {
code_r0x0146e468:
        return (long)uVar4 <= (long)uVar5;
      }
      uVar5 = 0;
      while (uVar5 != uVar6) {
        if (param_3 == 0) goto LAB_0146e4ec;
        iVar2 = *(int *)(param_3 + 0x18);
        if (iVar2 < 1) goto code_r0x0146e468;
        iVar7 = 0;
        while( true ) {
          if (iVar2 == iVar7) goto code_r0x0146e4e0;
          if (*(int *)(param_2 + uVar5 * 4 + 0x20) == *(int *)(param_3 + (long)iVar7 * 4 + 0x20))
          break;
          iVar7 = iVar7 + 1;
          if (iVar2 == iVar7) goto code_r0x0146e468;
        }
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar1) goto code_r0x0146e468;
      }
code_r0x0146e4e0:
      uVar3 = func_0x00f78b24();
      func_0x00f78ac0(uVar3,0);
    }
LAB_0146e4ec:
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x18) =
         &Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext;
    if ((bRam0000000003eb4860 & 1) == 0) {
      func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4860 = 1;
    }
    if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = *(long *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    param_2 = extraout_x1;
  } while( true );
}



// ============================================================
// RVA: 0x146e4f0 | Atlas.Stats.AtlasStats.OnlyTrackedInBattleContext
// ============================================================

bool Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long extraout_x1;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb4860 & 1) == 0) {
      func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4860 = 1;
    }
    if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = *(long *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    if (param_2 != 0) {
      uVar6 = 0;
      uVar7 = (ulong)*(uint *)(param_2 + 0x18);
      uVar5 = (ulong)(int)*(uint *)(param_2 + 0x18);
      uVar1 = uVar5;
      if ((long)uVar5 < 1) {
        uVar1 = 0;
      }
      if (uVar7 != 1 && (long)(uVar7 << 0x20) < 0x100000001) {
code_r0x0146e468:
        return (long)uVar5 <= (long)uVar6;
      }
      uVar6 = 0;
      while (uVar6 != uVar7) {
        if (lVar4 == 0) goto LAB_0146e4ec;
        iVar2 = *(int *)(lVar4 + 0x18);
        if (iVar2 < 1) goto code_r0x0146e468;
        iVar8 = 0;
        while( true ) {
          if (iVar2 == iVar8) goto code_r0x0146e4e0;
          if (*(int *)(param_2 + uVar6 * 4 + 0x20) == *(int *)(lVar4 + (long)iVar8 * 4 + 0x20))
          break;
          iVar8 = iVar8 + 1;
          if (iVar2 == iVar8) goto code_r0x0146e468;
        }
        uVar6 = uVar6 + 1;
        if (uVar6 == uVar1) goto code_r0x0146e468;
      }
code_r0x0146e4e0:
      uVar3 = func_0x00f78b24();
      func_0x00f78ac0(uVar3,0);
    }
LAB_0146e4ec:
    unaff_x30 = Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext;
    func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    param_2 = extraout_x1;
  } while( true );
}



// ============================================================
// RVA: 0x146e564 | Atlas.Stats.AtlasStats.RecordFinish
// ============================================================

/* WARNING: Possible PIC construction at 0x0146e5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015052b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015053d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146e768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146e938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146e9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ea08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146eab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146e394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146ea0c) */
/* WARNING: Removing unreachable block (ram,0x0146e9a4) */
/* WARNING: Removing unreachable block (ram,0x0146e9ac) */
/* WARNING: Removing unreachable block (ram,0x0146e9c0) */
/* WARNING: Removing unreachable block (ram,0x0146e9c4) */
/* WARNING: Removing unreachable block (ram,0x0146e9c8) */
/* WARNING: Removing unreachable block (ram,0x0146e9e0) */
/* WARNING: Removing unreachable block (ram,0x0146e9f4) */
/* WARNING: Removing unreachable block (ram,0x0146e9f8) */
/* WARNING: Removing unreachable block (ram,0x0146e9fc) */
/* WARNING: Removing unreachable block (ram,0x0146e93c) */
/* WARNING: Removing unreachable block (ram,0x0146e944) */
/* WARNING: Removing unreachable block (ram,0x0146e958) */
/* WARNING: Removing unreachable block (ram,0x0146e95c) */
/* WARNING: Removing unreachable block (ram,0x0146e960) */
/* WARNING: Removing unreachable block (ram,0x0146e978) */
/* WARNING: Removing unreachable block (ram,0x0146e98c) */
/* WARNING: Removing unreachable block (ram,0x0146e990) */
/* WARNING: Removing unreachable block (ram,0x0146e994) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Removing unreachable block (ram,0x015053d4) */
/* WARNING: Removing unreachable block (ram,0x015053e8) */
/* WARNING: Removing unreachable block (ram,0x0150533c) */
/* WARNING: Removing unreachable block (ram,0x01505350) */
/* WARNING: Removing unreachable block (ram,0x015052bc) */
/* WARNING: Removing unreachable block (ram,0x015052c8) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x015051e8) */
/* WARNING: Removing unreachable block (ram,0x015051f0) */
/* WARNING: Removing unreachable block (ram,0x015051f8) */
/* WARNING: Removing unreachable block (ram,0x01505204) */
/* WARNING: Removing unreachable block (ram,0x01505224) */
/* WARNING: Removing unreachable block (ram,0x01505210) */
/* WARNING: Removing unreachable block (ram,0x015051c0) */
/* WARNING: Removing unreachable block (ram,0x015051cc) */
/* WARNING: Removing unreachable block (ram,0x015051e0) */
/* WARNING: Removing unreachable block (ram,0x0146e5cc) */
/* WARNING: Removing unreachable block (ram,0x0146e5d8) */
/* WARNING: Removing unreachable block (ram,0x0146e5e0) */
/* WARNING: Removing unreachable block (ram,0x0146e5f8) */
/* WARNING: Removing unreachable block (ram,0x0146e600) */
/* WARNING: Removing unreachable block (ram,0x0146e634) */
/* WARNING: Removing unreachable block (ram,0x0146e638) */
/* WARNING: Removing unreachable block (ram,0x0146e640) */
/* WARNING: Removing unreachable block (ram,0x0146e608) */
/* WARNING: Removing unreachable block (ram,0x0146e60c) */
/* WARNING: Removing unreachable block (ram,0x0146e618) */
/* WARNING: Removing unreachable block (ram,0x0146e644) */
/* WARNING: Removing unreachable block (ram,0x0146e398) */
/* WARNING: Removing unreachable block (ram,0x0146e3a4) */
/* WARNING: Removing unreachable block (ram,0x0146e3a8) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Stats_AtlasStats__RecordFinish
                (undefined1 param_1 [16],float param_2,float param_3,ulong param_4,
                undefined4 *param_5,ulong param_6,long *param_7,ulong param_8)

{
  char cVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  long **pplVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *******pppppppuVar13;
  bool bVar14;
  undefined4 uVar15;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  int iVar16;
  undefined8 uVar21;
  undefined8 *puVar22;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  int *piVar32;
  undefined8 uVar33;
  long *plVar34;
  long *plVar35;
  code *pcVar36;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar37;
  undefined *puVar38;
  undefined8 uVar39;
  float fVar40;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ulong auStack_180 [8];
  undefined8 *******pppppppuStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  long *plStack_70;
  ulong uStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  pplVar8 = (long **)&stack0xffffffffffffffc0;
  pppppppuVar37 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (*(char *)(param_4 + 0x5d) == '\0') {
    return param_4;
  }
  lVar19 = *(long *)(param_4 + 0x10);
  if ((int)param_7 == 0) {
    if (lVar19 == 0) goto LAB_0146e65c;
    uVar25 = 0x73;
    if ((int)param_8 == 0) {
      uVar25 = 0x74;
    }
LAB_0146e5c4:
    uVar23 = (ulong)uVar25;
    uVar20 = param_8;
    puVar38 = &UNK_0146e5cc;
code_r0x015050bc:
    uVar30 = 0;
    *(long **)((long)pplVar8 + -0x20) = param_7;
    *(ulong *)((long)pplVar8 + -0x18) = uVar20;
    *(undefined8 ********)((long)pplVar8 + -0x10) = pppppppuVar37;
    *(undefined **)((long)pplVar8 + -8) = puVar38;
    if (*(long *)(lVar19 + 0x20) == 0) {
code_r0x01505118:
      func_0x00f78af4();
    }
    else {
      /*Atlas.Stats.StatsData$$IncrementStat*/ func_0x01504a24();
      lVar27 = *(long *)(lVar19 + 0x28);
      uVar20 = uVar23;
      if (lVar27 == 0) goto code_r0x01505118;
      if ((uint)uVar23 < *(uint *)(lVar27 + 0x18)) {
        uVar20 = *(ulong *)(lVar27 + (long)(int)(uint)uVar23 * 8 + 0x20);
        if (uVar20 == 0) {
          return 0;
        }
        uVar21 = *(undefined8 *)((long)pplVar8 + -0x10);
        uVar39 = *(undefined8 *)((long)pplVar8 + -8);
        uVar18 = *(undefined8 *)((long)pplVar8 + -0x20);
        uVar33 = *(undefined8 *)((long)pplVar8 + -0x18);
        puVar9 = (undefined1 *)pplVar8;
        goto System_Action__Invoke;
      }
    }
    uVar21 = func_0x00f78b24();
    auVar44 = func_0x00f78ac0(uVar21,0);
    param_7 = auVar44._0_8_;
    puVar10 = (undefined8 *)((long)pplVar8 + -0x40);
    *(long *)((long)pplVar8 + -0x40) = lVar19;
    *(ulong *)((long)pplVar8 + -0x38) = uVar20;
    *(undefined1 **)((long)pplVar8 + -0x30) = (undefined1 *)((long)pplVar8 + -0x10);
    *(undefined **)((long)pplVar8 + -0x28) = &Atlas_Stats_StatsManager__DecrementStat;
    pppppppuVar37 = (undefined8 *******)((long)pplVar8 + -0x30);
    param_8 = uVar20;
    if (param_7[4] == 0) {
code_r0x01505184:
      func_0x00f78af4();
    }
    else {
      /*Atlas.Stats.StatsData$$DecrementStat*/ func_0x01504a78();
      lVar19 = param_7[5];
      param_8 = auVar44._8_8_;
      if (lVar19 == 0) goto code_r0x01505184;
      if (auVar44._8_4_ < *(uint *)(lVar19 + 0x18)) {
        uVar20 = *(ulong *)(lVar19 + (long)(int)auVar44._8_4_ * 8 + 0x20);
        if (uVar20 == 0) {
          return 0;
        }
        uVar21 = *(undefined8 *)((long)pplVar8 + -0x30);
        uVar39 = *(undefined8 *)((long)pplVar8 + -0x28);
        puVar9 = (undefined1 *)((long)pplVar8 + -0x20);
        uVar18 = *(undefined8 *)((long)pplVar8 + -0x40);
        uVar33 = *(undefined8 *)((long)pplVar8 + -0x38);
System_Action__Invoke:
        uVar24 = 0;
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar9 + -0x40) = unaff_x24;
        *(undefined4 **)(puVar9 + -0x38) = param_5;
        *(ulong *)(puVar9 + -0x30) = param_6;
        *(ulong *)(puVar9 + -0x28) = param_4;
        *(undefined8 *)(puVar9 + -0x20) = uVar18;
        *(undefined8 *)(puVar9 + -0x18) = uVar33;
        *(undefined8 *)(puVar9 + -0x10) = uVar21;
        *(undefined8 *)(puVar9 + -8) = uVar39;
        *(ulong *)(puVar9 + -0x58) = uVar20;
        lVar19 = *(long *)(uVar20 + 0x68);
        if (lVar19 == 0) {
          puVar9 = puVar9 + -0x58;
          lVar27 = 1;
        }
        else {
          lVar27 = *(long *)(lVar19 + 0x18);
          if (lVar27 == 0) {
            return uVar20;
          }
          puVar9 = (undefined1 *)(lVar19 + 0x20);
        }
        lVar19 = 0;
        do {
          lVar28 = *(long *)(puVar9 + lVar19 * 8);
          pcVar36 = *(code **)(lVar28 + 0x10);
          plVar34 = *(long **)(lVar28 + 0x20);
          lVar28 = *(long *)(lVar28 + 0x28);
          if (*(short *)(lVar28 + 0x48) == -1) {
            func_0x00f78ad8(lVar28,uVar24);
          }
          iVar16 = func_0x00f78a4c(lVar28);
          if (iVar16 == 0) {
            if ((((plVar34 == (long *)0x0) || (*(short *)(lVar28 + 0x48) == -1)) ||
                ((*(byte *)(*plVar34 + 0x115) & 1) != 0)) || (*(long *)(uVar20 + 0x18) == 0))
            goto code_r0x02924d98;
            iVar16 = func_0x00f78a44(lVar28);
            iVar17 = func_0x00f78ec0(lVar28);
            if (iVar16 == 0) {
              uVar2 = *(ushort *)(lVar28 + 0x48);
              if (iVar17 == 0) {
                lVar28 = *plVar34 + (ulong)uVar2 * 0x10;
                auVar44 = (**(code **)(lVar28 + 0x138))(plVar34,*(undefined8 *)(lVar28 + 0x140));
                goto code_r0x02924da4;
              }
              lVar28 = func_0x00f78a48(lVar28);
              lVar29 = *plVar34;
              uVar30 = (ulong)*(ushort *)(lVar29 + 0x12a);
              if (uVar30 != 0) {
                piVar32 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar32 + -2) == lVar28) {
                    puVar22 = (undefined8 *)
                              (lVar29 + (long)(int)(*piVar32 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar32 = piVar32 + 4;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
              }
              puVar22 = (undefined8 *)func_0x00fac1f0(plVar34,lVar28,(ulong)uVar2);
code_r0x02924e68:
              pcVar36 = (code *)*puVar22;
              puVar22 = (undefined8 *)puVar22[1];
            }
            else {
              if (iVar17 == 0) {
                uVar21 = *(undefined8 *)
                          (*plVar34 + (ulong)*(ushort *)(lVar28 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar29 = *plVar34;
                uVar30 = (ulong)*(ushort *)(lVar29 + 0x12a);
                if (uVar30 != 0) {
                  piVar32 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar32 + -2) == *(long *)(lVar28 + 0x18)) {
                      lVar29 = lVar29 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar28 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar32 = piVar32 + 4;
                    uVar30 = uVar30 - 1;
                  } while (uVar30 != 0);
                }
                lVar29 = func_0x00fac1f0(plVar34);
code_r0x02924e40:
                uVar21 = *(undefined8 *)(lVar29 + 8);
              }
              puVar22 = (undefined8 *)func_0x00f78acc(uVar21,lVar28);
              pcVar36 = (code *)*puVar22;
            }
            auVar44 = (*pcVar36)(plVar34,puVar22);
          }
          else if (*(char *)(lVar28 + 0x4a) == '\0') {
            auVar44 = (*pcVar36)(lVar28);
          }
          else {
code_r0x02924d98:
            auVar44 = (*pcVar36)(plVar34,lVar28);
          }
code_r0x02924da4:
          uVar24 = auVar44._8_8_;
          lVar19 = lVar19 + 1;
          if (lVar19 == lVar27) {
            return auVar44._0_8_;
          }
        } while( true );
      }
    }
    uVar21 = func_0x00f78b24();
    puVar38 = &Atlas_Stats_StatsManager__SetStat;
    auVar44 = func_0x00f78ac0(uVar21,0);
  }
  else {
    if (lVar19 != 0) {
      uVar25 = 0x72;
      if ((int)param_8 == 0) {
        uVar25 = 0x75;
      }
      goto LAB_0146e5c4;
    }
LAB_0146e65c:
    auVar44 = func_0x00f78af4();
    uVar30 = auVar44._8_8_;
    uVar20 = auVar44._0_8_;
    puStack_48 = &Atlas_Stats_AtlasStats__RecordBattlePoints;
    if (*(char *)(uVar20 + 0x5d) == '\0') {
      return uVar20;
    }
    pppppppuStack_50 = pppppppuVar37;
    if (*(long *)(uVar20 + 0x10) == 0) {
      uVar20 = func_0x00f78af4();
      pplVar8 = &plStack_70;
      puStack_58 = &Atlas_Stats_AtlasStats__OnLapIncreased;
      plStack_70 = param_7;
      uStack_68 = param_8;
      pppppppuStack_60 = &pppppppuStack_50;
      if ((bRam0000000003eb4861 & 1) == 0) {
        pppppppuStack_60 = &pppppppuStack_50;
        func_0x00f78a20(0x3d3c050);
        func_0x00f78a20(0x3d24070);
        bRam0000000003eb4861 = 1;
      }
      param_7 = (long *)0x3eb4000;
      if ((*(long *)(uVar20 + 0x18) == 0) ||
         (param_7 = *(long **)(*(long *)(uVar20 + 0x18) + 0x68), param_7 == (long *)0x0))
      goto code_r0x0146e7ac;
      if ((*(byte *)(*param_7 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300)) ||
         (*(long *)(*(long *)(*param_7 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 +
                   -8) != /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
code_r0x0146e7b0:
        param_8 = func_0x00f78e5c(param_7);
        puVar10 = &uStack_d0;
        puStack_78 = &Atlas_Stats_AtlasStats__FixedUpdateGameContextKartTracking;
        pppppppuVar37 = &pppppppuStack_80;
        if (((*(char *)(param_8 + 0x5d) == '\0') || (*(int *)(param_8 + 0x60) != 1)) ||
           (*(long *)(param_8 + 0x18) == 0)) {
          return param_8;
        }
        lVar19 = *(long *)(*(long *)(param_8 + 0x18) + 0x10);
        pppppppuStack_80 = &pppppppuStack_60;
        if (lVar19 != 0) {
          param_7 = (long *)Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar19,0);
          uVar30 = (ulong)*(uint *)(param_7 + 0x28);
          uVar21 = 0;
          fVar41 = *(float *)((long)param_7 + 0x144);
          uVar20 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)((long)param_7 + 0x13c),0);
          param_3 = (float)extraout_d0;
          if (*(int *)(param_8 + 0x28) < 1) {
            *(float *)(param_8 + 0x2c) = param_3;
            *(float *)(param_8 + 0x30) = (float)uVar30;
            *(float *)(param_8 + 0x34) = fVar41;
            *(int *)(param_8 + 0x28) = *(int *)(param_8 + 0x28) + 1;
            return uVar20;
          }
          fStack_a8 = fVar41 - *(float *)(param_8 + 0x34);
          uStack_b0 = CONCAT44((float)uVar30 -
                               (float)((ulong)*(undefined8 *)(param_8 + 0x2c) >> 0x20),
                               param_3 - (float)*(undefined8 *)(param_8 + 0x2c));
          uStack_d0 = extraout_d0;
          uStack_c8 = extraout_var;
          uStack_c0 = uVar30;
          uStack_b8 = uVar21;
          fVar41 = (float)/*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&uStack_b0,0);
          cVar1 = *(char *)((long)param_7 + 0x3f);
          if (*(char *)((long)param_7 + 0x56) == '\0') {
            bVar14 = false;
            if (*(char *)((long)param_7 + 0x3d) != '\0') {
              bVar14 = *(char *)(param_8 + 100) != '\0';
            }
          }
          else {
            bVar14 = true;
          }
          param_2 = *(float *)((long)param_7 + 100);
          fVar40 = *(float *)((long)param_7 + 0x5c);
          *(bool *)(param_8 + 100) = bVar14;
          if (cVar1 != '\0') {
            param_3 = fVar41 + *(float *)(param_8 + 0x3c);
            *(float *)(param_8 + 0x3c) = param_3;
          }
          if (0.0 < param_2) {
            param_2 = fVar41 + *(float *)(param_8 + 0x38);
            *(float *)(param_8 + 0x38) = param_2;
          }
          if (bVar14 != false) {
            param_2 = fVar41 + *(float *)(param_8 + 0x48);
            *(float *)(param_8 + 0x48) = param_2;
          }
          if (0.0 < fVar40) {
            *(float *)(param_8 + 0x40) = fVar41 + *(float *)(param_8 + 0x40);
            if ((*(long *)(param_8 + 0x18) == 0) ||
               (lVar19 = *(long *)(*(long *)(param_8 + 0x18) + 0x10), lVar19 == 0))
            goto code_r0x0146ea38;
            lVar19 = Atlas_Gameplay_Kart_KartPhysics__get_Suspension(lVar19,0);
            iVar16 = Atlas_Gameplay_Kart_SurfaceTags__IsSurfaceOffRoad
                               (*(undefined4 *)(lVar19 + 0x50),0);
            if (iVar16 != 0) {
              *(float *)(param_8 + 0x44) = fVar41 + *(float *)(param_8 + 0x44);
            }
          }
          if (*(long *)(param_8 + 0x10) != 0) {
            fVar40 = *(float *)(param_8 + 0x38);
            fVar41 = -fVar40;
            if (fVar40 != INFINITY) {
              fVar41 = fVar40;
            }
            uVar30 = (ulong)(uint)(int)fVar41;
            auVar44._8_8_ = 0xe;
            auVar44._0_8_ = *(long *)(param_8 + 0x10);
            puVar38 = &UNK_0146e93c;
            goto code_r0x01505194;
          }
        }
code_r0x0146ea38:
        uVar20 = func_0x00f78af4();
        pplVar8 = (long **)&uStack_100;
        puStack_d8 = &Atlas_Stats_AtlasStats__UpdateGameContextKartTracking;
        if (*(char *)(uVar20 + 0x5d) == '\0') {
          return uVar20;
        }
        if (*(int *)(uVar20 + 0x60) != 1) {
          return uVar20;
        }
        if (*(long *)(uVar20 + 0x18) == 0) {
          return uVar20;
        }
        lVar19 = *(long *)(*(long *)(uVar20 + 0x18) + 0x10);
        uStack_100 = param_6;
        uStack_f8 = param_4;
        plStack_f0 = param_7;
        uStack_e8 = param_8;
        pppppppuStack_e0 = pppppppuVar37;
        if (lVar19 != 0) {
          param_7 = (long *)Atlas_Gameplay_Kart_KartPhysics__get_Events(lVar19,0);
          if ((*(long *)(uVar20 + 0x18) != 0) &&
             (lVar19 = *(long *)(*(long *)(uVar20 + 0x18) + 0x10), lVar19 != 0)) {
            param_4 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar19,0);
            if (*(char *)((long)param_7 + 0xe) == '\0') {
              uVar30 = param_4;
              if (*(char *)((long)param_7 + 2) != '\0') {
                if (*(long *)(uVar20 + 0x10) == 0) goto Atlas_Stats_AtlasStats__ResetKartTracking;
                uVar30 = /*Atlas.Stats.StatsManager$$IncrementStat*/ func_0x015050bc(*(long *)(uVar20 + 0x10),0x18,0);
              }
              if (*(char *)((long)param_7 + 10) == '\0') {
                return uVar30;
              }
              iVar16 = *(int *)(param_4 + 0x70);
              if (iVar16 == 3) {
                lVar19 = *(long *)(uVar20 + 0x10);
                if (lVar19 != 0) {
                  uVar23 = 0x13;
                  goto code_r0x0146eb34;
                }
              }
              else if (iVar16 == 2) {
                lVar19 = *(long *)(uVar20 + 0x10);
                if (lVar19 != 0) {
                  uVar23 = 0x12;
                  goto code_r0x0146eb34;
                }
              }
              else {
                if (iVar16 != 1) {
                  return uVar30;
                }
                lVar19 = *(long *)(uVar20 + 0x10);
                if (lVar19 != 0) {
                  uVar23 = 0x11;
code_r0x0146eb34:
                  pplVar8 = (long **)&uStack_d0;
                  uVar20 = uStack_e8;
                  param_7 = plStack_f0;
                  param_4 = uStack_f8;
                  param_6 = uStack_100;
                  pppppppuVar37 = pppppppuStack_e0;
                  puVar38 = puStack_d8;
                  goto code_r0x015050bc;
                }
              }
            }
            else {
              lVar19 = *(long *)(uVar20 + 0x10);
              if (lVar19 != 0) {
                uVar23 = 0x1a;
                pppppppuVar37 = &pppppppuStack_e0;
                puVar38 = &UNK_0146eab8;
                goto code_r0x015050bc;
              }
            }
          }
        }
Atlas_Stats_AtlasStats__ResetKartTracking:
        uVar30 = func_0x00f78af4();
        pppppppuVar13 = (undefined8 *******)&stack0xfffffffffffffec0;
        puStack_108 = &Atlas_Stats_AtlasStats__EndGameContextKartTracking;
        pppppppuVar37 = &pppppppuStack_110;
        plVar34 = (long *)((long)&MACH_HEADER.magic + 1);
        plVar35 = (long *)0x3eb4000;
        pppppppuStack_110 = &pppppppuStack_e0;
        if ((bRam0000000003eb4865 & 1) == 0) {
          func_0x00f78a20(0x3d1fa78);
          func_0x00f78a20(0x3d524d8);
          func_0x00f78a20(0x3d3c050);
          func_0x00f78a20(0x3d24070);
          bRam0000000003eb4865 = 1;
        }
        if (*(long *)(uVar30 + 0x20) == 0) {
LAB_0146e360:
          *(undefined8 *)(uVar30 + 0x18) = 0;
          *(undefined4 *)(uVar30 + 0x28) = 0;
          uVar15 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
          *(undefined4 *)(uVar30 + 0x2c) = uVar15;
          *(float *)(uVar30 + 0x30) = param_2;
          *(float *)(uVar30 + 0x34) = param_3;
          *(undefined8 *)(uVar30 + 0x38) = 0;
          *(undefined8 *)(uVar30 + 0x40) = 0;
          *(undefined4 *)(uVar30 + 0x48) = 0;
          uVar20 = *(ulong *)(uVar30 + 0x50);
          if (uVar20 != 0) {
            puVar38 = (undefined *)0x146e398;
code_r0x024663e0:
            *(long **)((long)pppppppuVar13 + -0x20) = plVar34;
            *(ulong *)((long)pppppppuVar13 + -0x18) = uVar30;
            *(undefined8 ********)((long)pppppppuVar13 + -0x10) = pppppppuVar37;
            *(undefined **)((long)pppppppuVar13 + -8) = puVar38;
            uVar30 = uVar20;
            if (0 < *(int *)(uVar20 + 0x18)) {
              uVar30 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar20 + 0x10),0,*(int *)(uVar20 + 0x18),0);
              *(undefined4 *)(uVar20 + 0x18) = 0;
            }
            *(int *)(uVar20 + 0x1c) = *(int *)(uVar20 + 0x1c) + 1;
            return uVar30;
          }
        }
        else if (*(long *)(uVar30 + 0x18) != 0) {
          plVar35 = *(long **)(*(long *)(uVar30 + 0x18) + 0x68);
          param_6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(param_6,uVar30,uRam0000000003d524d8,0);
          if (plVar35 != (long *)0x0) {
            if ((*(byte *)(*plVar35 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300)) ||
               (*(long *)(*(long *)(*plVar35 + 200) +
                          (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 + -8) !=
                /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) goto LAB_0146e3c0;
            Atlas_Gameplay_Kart_RaceKartAI__remove_OnLapCompleted(plVar35,param_6,0);
            *(undefined8 *)(uVar30 + 0x20) = 0;
            goto LAB_0146e360;
          }
        }
        func_0x00f78af4();
LAB_0146e3c0:
        func_0x00f78e5c(plVar35);
        if ((bRam0000000003eb485f & 1) == 0) {
          func_0x00f78a20(0x3d1fed8);
          bRam0000000003eb485f = 1;
        }
        if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar27 = **(long **)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8);
        pcVar36 = Atlas_Stats_AtlasStats__OnlyTrackedInRaceContext;
        uVar21 = 1;
        puVar9 = &stack0xfffffffffffffec0;
        lVar19 = extraout_x1;
        do {
          *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar37;
          *(code **)(puVar9 + -8) = pcVar36;
          if (lVar19 != 0) {
            uVar20 = 0;
            uVar31 = (ulong)*(uint *)(lVar19 + 0x18);
            uVar26 = (ulong)(int)*(uint *)(lVar19 + 0x18);
            uVar23 = uVar26;
            if ((long)uVar26 < 1) {
              uVar23 = 0;
            }
            if (uVar31 != 1 && (long)(uVar31 << 0x20) < 0x100000001) {
code_r0x0146e468:
              return (ulong)((long)uVar26 <= (long)uVar20);
            }
            uVar20 = 0;
            while (uVar20 != uVar31) {
              if (lVar27 == 0) goto LAB_0146e4ec;
              iVar16 = *(int *)(lVar27 + 0x18);
              if (iVar16 < 1) goto code_r0x0146e468;
              iVar17 = 0;
              while( true ) {
                if (iVar16 == iVar17) goto code_r0x0146e4e0;
                if (*(int *)(lVar19 + uVar20 * 4 + 0x20) ==
                    *(int *)(lVar27 + (long)iVar17 * 4 + 0x20)) break;
                iVar17 = iVar17 + 1;
                if (iVar16 == iVar17) goto code_r0x0146e468;
              }
              uVar20 = uVar20 + 1;
              if (uVar20 == uVar23) goto code_r0x0146e468;
            }
code_r0x0146e4e0:
            uVar18 = func_0x00f78b24();
            func_0x00f78ac0(uVar18,0);
          }
LAB_0146e4ec:
          func_0x00f78af4();
          *(ulong *)(puVar9 + -0x40) = param_6;
          *(long **)(puVar9 + -0x38) = plVar35;
          *(undefined8 *)(puVar9 + -0x30) = uVar21;
          *(ulong *)(puVar9 + -0x28) = uVar30;
          *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
          *(code **)(puVar9 + -0x18) = Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext;
          if ((bRam0000000003eb4860 & 1) == 0) {
            func_0x00f78a20(0x3d1fed8);
            bRam0000000003eb4860 = 1;
          }
          if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar27 = *(long *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8);
          pppppppuVar37 = *(undefined8 ********)(puVar9 + -0x20);
          pcVar36 = *(code **)(puVar9 + -0x18);
          uVar21 = *(undefined8 *)(puVar9 + -0x30);
          uVar30 = *(ulong *)(puVar9 + -0x28);
          param_6 = *(ulong *)(puVar9 + -0x40);
          plVar35 = *(long **)(puVar9 + -0x38);
          puVar9 = puVar9 + -0x10;
          lVar19 = extraout_x1_00;
        } while( true );
      }
      uVar30 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(param_7,0);
      if (*(long *)(uVar20 + 0x20) == 0) {
code_r0x0146e7ac:
        func_0x00f78af4();
        goto code_r0x0146e7b0;
      }
      if ((*(int *)(*(long *)(uVar20 + 0x20) + 0x24c) < (int)uVar30) ||
         (uVar30 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(param_7,0),
         (int)uVar30 <= *(int *)(uVar20 + 0x58))) {
        return uVar30;
      }
      if (*(char *)(uVar20 + 0x5c) != '\0') {
        *(undefined1 *)(uVar20 + 0x5c) = 0;
        uVar15 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(param_7,0);
        *(undefined4 *)(uVar20 + 0x58) = uVar15;
        uVar20 = *(ulong *)(uVar20 + 0x50);
        if (uVar20 != 0) {
          pppppppuVar13 = &pppppppuStack_50;
          uVar30 = uStack_68;
          plVar34 = plStack_70;
          pppppppuVar37 = pppppppuStack_60;
          puVar38 = puStack_58;
          goto code_r0x024663e0;
        }
        goto code_r0x0146e7ac;
      }
      lVar19 = *(long *)(uVar20 + 0x10);
      if (lVar19 == 0) goto code_r0x0146e7ac;
      uVar23 = 0x69;
      pppppppuVar37 = &pppppppuStack_60;
      puVar38 = &UNK_0146e76c;
      goto code_r0x015050bc;
    }
    auVar44._8_8_ = 100;
    auVar44._0_8_ = *(long *)(uVar20 + 0x10);
    puVar10 = (undefined8 *)&stack0xffffffffffffffc0;
    puVar38 = &Atlas_Stats_AtlasStats__RecordBattlePoints;
  }
code_r0x01505194:
  auVar7 = auVar44._0_12_;
  lVar27 = auVar44._0_8_;
  auVar43._8_8_ = param_8;
  auVar43._0_8_ = lVar27;
  puVar11 = (undefined1 *)((long)puVar10 + -0x30);
  *(ulong *)((long)puVar10 + -0x30) = param_6;
  *(ulong *)((long)puVar10 + -0x28) = param_4;
  *(long **)((long)puVar10 + -0x20) = param_7;
  *(ulong *)((long)puVar10 + -0x18) = param_8;
  *(undefined8 ********)((long)puVar10 + -0x10) = pppppppuVar37;
  *(undefined **)((long)puVar10 + -8) = puVar38;
  puVar9 = (undefined1 *)((long)puVar10 + -0x10);
  lVar19 = *(long *)(lVar27 + 0x20);
  if (lVar19 == 0) {
    func_0x00f78af4();
    uVar21 = func_0x00f78b24();
    auVar44 = func_0x00f78ac0(uVar21,0);
    auVar3._8_8_ = auVar44._8_8_;
    auVar3._0_8_ = lVar27;
    auVar7 = auVar3._0_12_;
    *(undefined1 **)((long)puVar10 + -0x40) = puVar9;
    *(undefined **)((long)puVar10 + -0x38) = &Atlas_Stats_StatsManager__GetStat;
    lVar19 = *(long *)(auVar44._0_8_ + 0x20);
    if (lVar19 == 0) {
      auVar44 = func_0x00f78af4();
      auVar4._8_8_ = auVar44._8_8_;
      auVar4._0_8_ = lVar27;
      auVar7 = auVar4._0_12_;
      *(undefined1 **)((long)puVar10 + -0x50) = (undefined1 *)((long)puVar10 + -0x40);
      *(undefined **)((long)puVar10 + -0x48) = &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar19 = *(long *)(auVar44._0_8_ + 0x18);
      if (lVar19 == 0) {
        auVar44 = func_0x00f78af4();
        auVar5._8_8_ = auVar44._8_8_;
        auVar5._0_8_ = lVar27;
        auVar7 = auVar5._0_12_;
        puVar9 = (undefined1 *)((long)puVar10 + -0x60);
        *(undefined1 **)((long)puVar10 + -0x60) = (undefined1 *)((long)puVar10 + -0x50);
        *(undefined **)((long)puVar10 + -0x58) = &Atlas_Stats_StatsManager__GetCommittedStat;
        lVar19 = *(long *)(auVar44._0_8_ + 0x10);
        if (lVar19 == 0) {
          puVar38 = &Atlas_Stats_StatsManager__GetGlobalStat;
          auVar42 = func_0x00f78af4();
          puVar12 = (undefined1 *)((long)puVar10 + -0x60);
          while( true ) {
            auVar7 = auVar42._0_12_;
            param_8 = auVar42._8_8_;
            lVar27 = auVar42._0_8_;
            auVar6._8_8_ = auVar43._8_8_;
            auVar6._0_8_ = lVar27;
            puVar11 = puVar12 + -0x30;
            *(ulong *)(puVar12 + -0x30) = param_6;
            *(ulong *)(puVar12 + -0x28) = param_4;
            *(undefined1 (*) [16])(puVar12 + -0x20) = auVar43;
            *(undefined1 **)(puVar12 + -0x10) = puVar9;
            *(undefined **)(puVar12 + -8) = puVar38;
            puVar9 = puVar12 + -0x10;
            lVar19 = *(long *)(lVar27 + 0x10);
            if (lVar19 != 0) break;
            auVar44 = func_0x00f78af4();
            param_8 = auVar44._8_8_;
            puVar11 = puVar12 + -0x70;
            *(undefined8 *)(puVar12 + -0x70) = unaff_x24;
            *(undefined4 **)(puVar12 + -0x68) = param_5;
            *(ulong *)(puVar12 + -0x60) = param_6;
            *(ulong *)(puVar12 + -0x58) = param_4;
            *(long *)(puVar12 + -0x50) = lVar27;
            *(long *)(puVar12 + -0x48) = auVar43._8_8_;
            *(undefined1 **)(puVar12 + -0x40) = puVar9;
            *(undefined **)(puVar12 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            puVar9 = puVar12 + -0x40;
            if (param_8 == 0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(param_8 + 0x18) < 1) {
                return 0;
              }
              param_4 = 0;
              param_6 = 0;
              param_5 = (undefined4 *)(param_8 + 0x20);
              auVar6 = auVar44;
              if ((*(ulong *)(param_8 + 0x18) & 0xffffffff) != 0) {
                lVar19 = *(long *)(auVar44._0_8_ + 0x10);
                if (lVar19 == 0) goto code_r0x01505370;
                auVar7._8_4_ = *param_5;
                auVar7._0_8_ = auVar44._0_8_;
                puVar38 = &UNK_0150533c;
                goto code_r0x01504b20;
              }
            }
            uVar21 = func_0x00f78b24();
            auVar44 = func_0x00f78ac0(uVar21,0);
            param_8 = auVar44._8_8_;
            puVar11 = puVar12 + -0xb0;
            *(undefined8 *)(puVar12 + -0xb0) = unaff_x24;
            *(undefined4 **)(puVar12 + -0xa8) = param_5;
            *(ulong *)(puVar12 + -0xa0) = param_6;
            *(ulong *)(puVar12 + -0x98) = param_4;
            *(undefined1 (*) [16])(puVar12 + -0x90) = auVar6;
            *(undefined1 **)(puVar12 + -0x80) = puVar9;
            *(undefined **)(puVar12 + -0x78) = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            puVar9 = puVar12 + -0x80;
            if (param_8 == 0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(param_8 + 0x18) < 1) {
                return 0;
              }
              param_4 = 0;
              param_6 = 0;
              param_5 = (undefined4 *)(param_8 + 0x20);
              auVar6 = auVar44;
              if ((*(ulong *)(param_8 + 0x18) & 0xffffffff) != 0) {
                lVar19 = *(long *)(auVar44._0_8_ + 0x18);
                if (lVar19 == 0) goto code_r0x01505408;
                auVar7._8_4_ = *param_5;
                auVar7._0_8_ = auVar44._0_8_;
                puVar38 = &UNK_015053d4;
                goto code_r0x01504b20;
              }
            }
            uVar21 = func_0x00f78b24();
            auVar43 = func_0x00f78ac0(uVar21,0);
            lVar19 = auVar43._8_8_;
            *(undefined8 *)(puVar12 + -0xf0) = unaff_x24;
            *(undefined4 **)(puVar12 + -0xe8) = param_5;
            *(ulong *)(puVar12 + -0xe0) = param_6;
            *(ulong *)(puVar12 + -0xd8) = param_4;
            *(undefined1 (*) [16])(puVar12 + -0xd0) = auVar6;
            *(undefined1 **)(puVar12 + -0xc0) = puVar9;
            *(undefined **)(puVar12 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            puVar9 = puVar12 + -0xc0;
            if (lVar19 == 0) {
code_r0x015054a8:
              uVar21 = func_0x00f78af4();
              *(ulong *)(puVar12 + -0x120) = param_6;
              *(ulong *)(puVar12 + -0x118) = param_4;
              *(undefined1 (*) [16])(puVar12 + -0x110) = auVar6;
              *(undefined1 **)(puVar12 + -0x100) = puVar9;
              *(undefined **)(puVar12 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)(puVar12 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar21,puVar12 + -0x124);
              return (ulong)*(uint *)(puVar12 + -0x124);
            }
            if ((int)*(ulong *)(lVar19 + 0x18) < 1) {
              return 0;
            }
            param_4 = 0;
            param_6 = 0;
            param_5 = (undefined4 *)(lVar19 + 0x20);
            if ((*(ulong *)(lVar19 + 0x18) & 0xffffffff) == 0) {
              uVar21 = func_0x00f78b24();
              func_0x00f78ac0(uVar21,0);
              auVar6 = auVar43;
              goto code_r0x015054a8;
            }
            auVar42._8_4_ = *param_5;
            auVar42._0_8_ = auVar43._0_8_;
            auVar42._12_4_ = 0;
            puVar38 = &UNK_01505468;
            puVar12 = puVar12 + -0xf0;
          }
          puVar38 = &UNK_015052bc;
        }
        else {
          puVar11 = (undefined1 *)((long)puVar10 + -0x50);
          puVar9 = *(undefined1 **)((long)puVar10 + -0x60);
          puVar38 = *(undefined **)((long)puVar10 + -0x58);
        }
      }
      else {
        puVar11 = (undefined1 *)((long)puVar10 + -0x40);
        puVar9 = *(undefined1 **)((long)puVar10 + -0x50);
        puVar38 = *(undefined **)((long)puVar10 + -0x48);
      }
    }
    else {
      puVar11 = (undefined1 *)((long)puVar10 + -0x30);
      puVar9 = *(undefined1 **)((long)puVar10 + -0x40);
      puVar38 = *(undefined **)((long)puVar10 + -0x38);
    }
  }
  else {
    puVar38 = &UNK_015051c0;
    param_8 = auVar44._8_8_;
    param_6 = uVar30;
  }
code_r0x01504b20:
  *(undefined1 **)(puVar11 + -0x10) = puVar9;
  *(undefined **)(puVar11 + -8) = puVar38;
  lVar19 = *(long *)(lVar19 + 0x10);
  if (lVar19 == 0) {
    func_0x00f78af4();
  }
  else if (auVar7._8_4_ < *(uint *)(lVar19 + 0x18)) {
    return (ulong)*(uint *)(lVar19 + (long)(int)auVar7._8_4_ * 4 + 0x20);
  }
  uVar21 = func_0x00f78b24();
  auVar44 = func_0x00f78ac0(uVar21,0);
  lVar19 = auVar44._8_8_;
  uVar30 = auVar44._0_8_;
  *(undefined8 *)(puVar11 + -0x50) = unaff_x24;
  *(undefined4 **)(puVar11 + -0x48) = param_5;
  *(ulong *)(puVar11 + -0x40) = param_6;
  *(ulong *)(puVar11 + -0x38) = param_4;
  *(long *)(puVar11 + -0x30) = auVar7._0_8_;
  *(ulong *)(puVar11 + -0x28) = param_8;
  *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
  *(undefined **)(puVar11 + -0x18) = &Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar20 = uVar30;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar20 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar27 = *(long *)(uVar30 + 0x10);
  if (((lVar27 != 0) && (lVar19 != 0)) && (*(long *)(lVar19 + 0x10) != 0)) {
    iVar16 = *(int *)(lVar27 + 0x18);
    param_6 = *(ulong *)(*(long *)(lVar19 + 0x10) + 0x18);
    if (iVar16 < (int)param_6) {
      lVar27 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,param_6);
      uVar20 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar30 + 0x10),lVar27,iVar16,0);
      *(long *)(uVar30 + 0x10) = lVar27;
    }
    if (0 < (int)param_6) {
      if (lVar27 == 0) goto code_r0x01504c70;
      uVar30 = 0;
      uVar25 = *(uint *)(lVar27 + 0x18);
      do {
        if (uVar25 == uVar30) {
code_r0x01504c64:
          uVar21 = func_0x00f78b24();
          func_0x00f78ac0(uVar21,0);
          goto code_r0x01504c70;
        }
        lVar28 = *(long *)(lVar19 + 0x10);
        if (lVar28 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar28 + 0x18) <= uVar30) || (uVar25 <= uVar30)) goto code_r0x01504c64;
        iVar16 = *(int *)(lVar27 + 0x20 + uVar30 * 4);
        iVar17 = *(int *)(lVar28 + uVar30 * 4 + 0x20);
        if (iVar16 <= iVar17) {
          iVar16 = iVar17;
        }
        *(int *)(lVar27 + 0x20 + uVar30 * 4) = iVar16;
        uVar30 = uVar30 + 1;
      } while ((param_6 & 0xffffffff) != uVar30);
    }
    return uVar20;
  }
code_r0x01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar11 + -0x80) = param_6;
  *(long *)(puVar11 + -0x78) = lVar27;
  *(undefined1 (*) [16])(puVar11 + -0x70) = auVar44;
  *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x20;
  *(undefined **)(puVar11 + -0x58) = &Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar20 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar20;
}



// ============================================================
// RVA: 0x146e660 | Atlas.Stats.AtlasStats.RecordBattlePoints
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x146e698 | Atlas.Stats.AtlasStats.OnLapIncreased
// ============================================================

/* WARNING: Possible PIC construction at 0x0146e768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146e938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146e9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ea08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146eab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015052b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015053d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146e394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Removing unreachable block (ram,0x015053d4) */
/* WARNING: Removing unreachable block (ram,0x015053e8) */
/* WARNING: Removing unreachable block (ram,0x0150533c) */
/* WARNING: Removing unreachable block (ram,0x01505350) */
/* WARNING: Removing unreachable block (ram,0x015052bc) */
/* WARNING: Removing unreachable block (ram,0x015052c8) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x015051e8) */
/* WARNING: Removing unreachable block (ram,0x015051f0) */
/* WARNING: Removing unreachable block (ram,0x015051f8) */
/* WARNING: Removing unreachable block (ram,0x01505204) */
/* WARNING: Removing unreachable block (ram,0x01505224) */
/* WARNING: Removing unreachable block (ram,0x01505210) */
/* WARNING: Removing unreachable block (ram,0x015051c0) */
/* WARNING: Removing unreachable block (ram,0x015051cc) */
/* WARNING: Removing unreachable block (ram,0x015051e0) */
/* WARNING: Removing unreachable block (ram,0x0146ea0c) */
/* WARNING: Removing unreachable block (ram,0x0146e9a4) */
/* WARNING: Removing unreachable block (ram,0x0146e9ac) */
/* WARNING: Removing unreachable block (ram,0x0146e9c0) */
/* WARNING: Removing unreachable block (ram,0x0146e9c4) */
/* WARNING: Removing unreachable block (ram,0x0146e9c8) */
/* WARNING: Removing unreachable block (ram,0x0146e9e0) */
/* WARNING: Removing unreachable block (ram,0x0146e9f4) */
/* WARNING: Removing unreachable block (ram,0x0146e9f8) */
/* WARNING: Removing unreachable block (ram,0x0146e9fc) */
/* WARNING: Removing unreachable block (ram,0x0146e93c) */
/* WARNING: Removing unreachable block (ram,0x0146e944) */
/* WARNING: Removing unreachable block (ram,0x0146e958) */
/* WARNING: Removing unreachable block (ram,0x0146e95c) */
/* WARNING: Removing unreachable block (ram,0x0146e960) */
/* WARNING: Removing unreachable block (ram,0x0146e978) */
/* WARNING: Removing unreachable block (ram,0x0146e98c) */
/* WARNING: Removing unreachable block (ram,0x0146e990) */
/* WARNING: Removing unreachable block (ram,0x0146e994) */
/* WARNING: Removing unreachable block (ram,0x0146e398) */
/* WARNING: Removing unreachable block (ram,0x0146e3a4) */
/* WARNING: Removing unreachable block (ram,0x0146e3a8) */

ulong Atlas_Stats_AtlasStats__OnLapIncreased
                (undefined1 param_1 [16],float param_2,float param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined4 uVar15;
  int iVar17;
  undefined8 uVar18;
  int iVar16;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  int *piVar30;
  long unaff_x19;
  undefined8 uVar31;
  undefined8 unaff_x20;
  long *plVar32;
  ulong unaff_x21;
  ulong unaff_x22;
  code *pcVar33;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar34;
  undefined8 unaff_x30;
  undefined *puVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined8 uVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  ulong auStack_130 [8];
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  puVar9 = (undefined8 *)&stack0xffffffffffffffe0;
  plVar32 = (long *)0x3eb4000;
  if ((bRam0000000003eb4861 & 1) == 0) {
    func_0x00f78a20(0x3d3c050);
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb4861 = 1;
  }
  if ((*(long *)(param_4 + 0x18) == 0) ||
     (plVar32 = *(long **)(*(long *)(param_4 + 0x18) + 0x68), plVar32 == (long *)0x0))
  goto LAB_0146e7ac;
  if ((*(byte *)(*plVar32 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300)) ||
     (*(long *)(*(long *)(*plVar32 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 + -8)
      != /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
LAB_0146e7b0:
    param_4 = func_0x00f78e5c(plVar32);
    puVar11 = &uStack_80;
    puStack_28 = &Atlas_Stats_AtlasStats__FixedUpdateGameContextKartTracking;
    pppppppuVar34 = &ppppppuStack_30;
    if (((*(char *)(param_4 + 0x5d) == '\0') || (*(int *)(param_4 + 0x60) != 1)) ||
       (*(long *)(param_4 + 0x18) == 0)) {
      return param_4;
    }
    lVar20 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
    ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
    if (lVar20 == 0) {
code_r0x0146ea38:
      uVar19 = func_0x00f78af4();
      puVar9 = (undefined8 *)&stack0xffffffffffffff50;
      puStack_88 = &Atlas_Stats_AtlasStats__UpdateGameContextKartTracking;
      if (*(char *)(uVar19 + 0x5d) == '\0') {
        return uVar19;
      }
      if (*(int *)(uVar19 + 0x60) != 1) {
        return uVar19;
      }
      if (*(long *)(uVar19 + 0x18) == 0) {
        return uVar19;
      }
      lVar20 = *(long *)(*(long *)(uVar19 + 0x18) + 0x10);
      ppppppuStack_90 = pppppppuVar34;
      if (lVar20 != 0) {
        plVar21 = (long *)Atlas_Gameplay_Kart_KartPhysics__get_Events(lVar20,0);
        if ((*(long *)(uVar19 + 0x18) != 0) &&
           (lVar20 = *(long *)(*(long *)(uVar19 + 0x18) + 0x10), lVar20 != 0)) {
          uVar22 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar20,0);
          if (*(char *)((long)plVar21 + 0xe) == '\0') {
            uVar24 = uVar22;
            if (*(char *)((long)plVar21 + 2) != '\0') {
              if (*(long *)(uVar19 + 0x10) == 0) goto Atlas_Stats_AtlasStats__ResetKartTracking;
              uVar24 = /*Atlas.Stats.StatsManager$$IncrementStat*/ func_0x015050bc(*(long *)(uVar19 + 0x10),0x18,0);
            }
            if (*(char *)((long)plVar21 + 10) == '\0') {
              return uVar24;
            }
            iVar16 = *(int *)(uVar22 + 0x70);
            if (iVar16 == 3) {
              lVar20 = *(long *)(uVar19 + 0x10);
              if (lVar20 != 0) {
                uVar24 = 0x13;
                goto code_r0x0146eb34;
              }
            }
            else if (iVar16 == 2) {
              lVar20 = *(long *)(uVar19 + 0x10);
              if (lVar20 != 0) {
                uVar24 = 0x12;
                goto code_r0x0146eb34;
              }
            }
            else {
              if (iVar16 != 1) {
                return uVar24;
              }
              lVar20 = *(long *)(uVar19 + 0x10);
              if (lVar20 != 0) {
                uVar24 = 0x11;
code_r0x0146eb34:
                puVar9 = &uStack_80;
                pppppppuVar34 = (undefined8 *******)ppppppuStack_90;
                puVar35 = puStack_88;
                goto code_r0x015050bc;
              }
            }
          }
          else {
            lVar20 = *(long *)(uVar19 + 0x10);
            if (lVar20 != 0) {
              uVar24 = 0x1a;
              param_4 = uVar19;
              plVar32 = plVar21;
              unaff_x21 = uVar22;
              pppppppuVar34 = &ppppppuStack_90;
              puVar35 = &UNK_0146eab8;
              goto code_r0x015050bc;
            }
          }
        }
      }
Atlas_Stats_AtlasStats__ResetKartTracking:
      unaff_x19 = func_0x00f78af4();
      puStack_b8 = &Atlas_Stats_AtlasStats__EndGameContextKartTracking;
      unaff_x29 = &ppppppuStack_c0;
      unaff_x20 = 1;
      plVar32 = (long *)0x3eb4000;
      ppppppuStack_c0 = &ppppppuStack_90;
      if ((bRam0000000003eb4865 & 1) == 0) {
        func_0x00f78a20(0x3d1fa78);
        func_0x00f78a20(0x3d524d8);
        func_0x00f78a20(0x3d3c050);
        func_0x00f78a20(0x3d24070);
        bRam0000000003eb4865 = 1;
      }
      if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_0146e360:
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
        *(undefined4 *)(unaff_x19 + 0x28) = 0;
        uVar15 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        *(undefined4 *)(unaff_x19 + 0x2c) = uVar15;
        *(float *)(unaff_x19 + 0x30) = param_2;
        *(float *)(unaff_x19 + 0x34) = param_3;
        *(undefined8 *)(unaff_x19 + 0x38) = 0;
        *(undefined8 *)(unaff_x19 + 0x40) = 0;
        *(undefined4 *)(unaff_x19 + 0x48) = 0;
        uVar19 = *(ulong *)(unaff_x19 + 0x50);
        if (uVar19 != 0) {
          unaff_x30 = 0x146e398;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff10;
code_r0x024663e0:
          *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          uVar22 = uVar19;
          if (0 < *(int *)(uVar19 + 0x18)) {
            uVar22 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar19 + 0x10),0,*(int *)(uVar19 + 0x18),0);
            *(undefined4 *)(uVar19 + 0x18) = 0;
          }
          *(int *)(uVar19 + 0x1c) = *(int *)(uVar19 + 0x1c) + 1;
          return uVar22;
        }
      }
      else if (*(long *)(unaff_x19 + 0x18) != 0) {
        plVar32 = *(long **)(*(long *)(unaff_x19 + 0x18) + 0x68);
        unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,unaff_x19,uRam0000000003d524d8,0);
        if (plVar32 != (long *)0x0) {
          if ((*(byte *)(*plVar32 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300)) ||
             (*(long *)(*(long *)(*plVar32 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8
                       + -8) != /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) goto LAB_0146e3c0;
          Atlas_Gameplay_Kart_RaceKartAI__remove_OnLapCompleted(plVar32,unaff_x22,0);
          *(undefined8 *)(unaff_x19 + 0x20) = 0;
          goto LAB_0146e360;
        }
      }
      func_0x00f78af4();
LAB_0146e3c0:
      func_0x00f78e5c(plVar32);
      if ((bRam0000000003eb485f & 1) == 0) {
        func_0x00f78a20(0x3d1fed8);
        bRam0000000003eb485f = 1;
      }
      if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar26 = **(long **)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8);
      pcVar33 = Atlas_Stats_AtlasStats__OnlyTrackedInRaceContext;
      uVar38 = 1;
      puVar10 = &stack0xffffffffffffff10;
      lVar20 = extraout_x1;
      do {
        *(undefined8 ********)(puVar10 + -0x10) = unaff_x29;
        *(code **)(puVar10 + -8) = pcVar33;
        if (lVar20 != 0) {
          uVar19 = 0;
          uVar29 = (ulong)*(uint *)(lVar20 + 0x18);
          uVar24 = (ulong)(int)*(uint *)(lVar20 + 0x18);
          uVar22 = uVar24;
          if ((long)uVar24 < 1) {
            uVar22 = 0;
          }
          if (uVar29 != 1 && (long)(uVar29 << 0x20) < 0x100000001) {
code_r0x0146e468:
            return (ulong)((long)uVar24 <= (long)uVar19);
          }
          uVar19 = 0;
          while (uVar19 != uVar29) {
            if (lVar26 == 0) goto LAB_0146e4ec;
            iVar16 = *(int *)(lVar26 + 0x18);
            if (iVar16 < 1) goto code_r0x0146e468;
            iVar17 = 0;
            while( true ) {
              if (iVar16 == iVar17) goto code_r0x0146e4e0;
              if (*(int *)(lVar20 + uVar19 * 4 + 0x20) == *(int *)(lVar26 + (long)iVar17 * 4 + 0x20)
                 ) break;
              iVar17 = iVar17 + 1;
              if (iVar16 == iVar17) goto code_r0x0146e468;
            }
            uVar19 = uVar19 + 1;
            if (uVar19 == uVar22) goto code_r0x0146e468;
          }
code_r0x0146e4e0:
          uVar18 = func_0x00f78b24();
          func_0x00f78ac0(uVar18,0);
        }
LAB_0146e4ec:
        func_0x00f78af4();
        *(ulong *)(puVar10 + -0x40) = unaff_x22;
        *(long **)(puVar10 + -0x38) = plVar32;
        *(undefined8 *)(puVar10 + -0x30) = uVar38;
        *(long *)(puVar10 + -0x28) = unaff_x19;
        *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
        *(code **)(puVar10 + -0x18) = Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext;
        if ((bRam0000000003eb4860 & 1) == 0) {
          func_0x00f78a20(0x3d1fed8);
          bRam0000000003eb4860 = 1;
        }
        if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar26 = *(long *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8);
        unaff_x29 = *(undefined8 ********)(puVar10 + -0x20);
        pcVar33 = *(code **)(puVar10 + -0x18);
        uVar38 = *(undefined8 *)(puVar10 + -0x30);
        unaff_x19 = *(long *)(puVar10 + -0x28);
        unaff_x22 = *(ulong *)(puVar10 + -0x40);
        plVar32 = *(long **)(puVar10 + -0x38);
        puVar10 = puVar10 + -0x10;
        lVar20 = extraout_x1_00;
      } while( true );
    }
    plVar32 = (long *)Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar20,0);
    uVar22 = (ulong)*(uint *)(plVar32 + 0x28);
    uVar38 = 0;
    fVar39 = *(float *)((long)plVar32 + 0x144);
    uVar19 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)((long)plVar32 + 0x13c),0);
    param_3 = (float)extraout_d0;
    if (*(int *)(param_4 + 0x28) < 1) {
      *(float *)(param_4 + 0x2c) = param_3;
      *(float *)(param_4 + 0x30) = (float)uVar22;
      *(float *)(param_4 + 0x34) = fVar39;
      *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + 1;
      return uVar19;
    }
    fStack_58 = fVar39 - *(float *)(param_4 + 0x34);
    uStack_60 = CONCAT44((float)uVar22 - (float)((ulong)*(undefined8 *)(param_4 + 0x2c) >> 0x20),
                         param_3 - (float)*(undefined8 *)(param_4 + 0x2c));
    uStack_80 = extraout_d0;
    uStack_78 = extraout_var;
    uStack_70 = uVar22;
    uStack_68 = uVar38;
    fVar39 = (float)/*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&uStack_60,0);
    cVar2 = *(char *)((long)plVar32 + 0x3f);
    if (*(char *)((long)plVar32 + 0x56) == '\0') {
      bVar14 = false;
      if (*(char *)((long)plVar32 + 0x3d) != '\0') {
        bVar14 = *(char *)(param_4 + 100) != '\0';
      }
    }
    else {
      bVar14 = true;
    }
    param_2 = *(float *)((long)plVar32 + 100);
    fVar37 = *(float *)((long)plVar32 + 0x5c);
    *(bool *)(param_4 + 100) = bVar14;
    if (cVar2 != '\0') {
      param_3 = fVar39 + *(float *)(param_4 + 0x3c);
      *(float *)(param_4 + 0x3c) = param_3;
    }
    if (0.0 < param_2) {
      param_2 = fVar39 + *(float *)(param_4 + 0x38);
      *(float *)(param_4 + 0x38) = param_2;
    }
    if (bVar14 != false) {
      param_2 = fVar39 + *(float *)(param_4 + 0x48);
      *(float *)(param_4 + 0x48) = param_2;
    }
    if (0.0 < fVar37) {
      *(float *)(param_4 + 0x40) = fVar39 + *(float *)(param_4 + 0x40);
      if ((*(long *)(param_4 + 0x18) == 0) ||
         (lVar20 = *(long *)(*(long *)(param_4 + 0x18) + 0x10), lVar20 == 0)) goto code_r0x0146ea38;
      lVar20 = Atlas_Gameplay_Kart_KartPhysics__get_Suspension(lVar20,0);
      iVar16 = Atlas_Gameplay_Kart_SurfaceTags__IsSurfaceOffRoad(*(undefined4 *)(lVar20 + 0x50),0);
      if (iVar16 != 0) {
        *(float *)(param_4 + 0x44) = fVar39 + *(float *)(param_4 + 0x44);
      }
    }
    if (*(long *)(param_4 + 0x10) == 0) goto code_r0x0146ea38;
    fVar37 = *(float *)(param_4 + 0x38);
    fVar39 = -fVar37;
    if (fVar37 != INFINITY) {
      fVar39 = fVar37;
    }
    uVar19 = (ulong)(uint)(int)fVar39;
    auVar42._8_8_ = 0xe;
    auVar42._0_8_ = *(long *)(param_4 + 0x10);
    puVar35 = &UNK_0146e93c;
  }
  else {
    uVar19 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar32,0);
    if (*(long *)(param_4 + 0x20) == 0) {
LAB_0146e7ac:
      func_0x00f78af4();
      goto LAB_0146e7b0;
    }
    if ((*(int *)(*(long *)(param_4 + 0x20) + 0x24c) < (int)uVar19) ||
       (uVar19 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar32,0),
       (int)uVar19 <= *(int *)(param_4 + 0x58))) {
      return uVar19;
    }
    if (*(char *)(param_4 + 0x5c) != '\0') {
      *(undefined1 *)(param_4 + 0x5c) = 0;
      uVar15 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar32,0);
      *(undefined4 *)(param_4 + 0x58) = uVar15;
      uVar19 = *(ulong *)(param_4 + 0x50);
      if (uVar19 != 0) goto code_r0x024663e0;
      goto LAB_0146e7ac;
    }
    lVar20 = *(long *)(param_4 + 0x10);
    if (lVar20 == 0) goto LAB_0146e7ac;
    uVar24 = 0x69;
    pppppppuVar34 = (undefined8 *******)&stack0xfffffffffffffff0;
    puVar35 = (undefined *)0x146e76c;
code_r0x015050bc:
    uVar19 = 0;
    *(long **)((long)puVar9 + -0x20) = plVar32;
    *(ulong *)((long)puVar9 + -0x18) = param_4;
    *(undefined8 ********)((long)puVar9 + -0x10) = pppppppuVar34;
    *(undefined **)((long)puVar9 + -8) = puVar35;
    if (*(long *)(lVar20 + 0x20) == 0) {
code_r0x01505118:
      func_0x00f78af4();
    }
    else {
      /*Atlas.Stats.StatsData$$IncrementStat*/ func_0x01504a24();
      lVar26 = *(long *)(lVar20 + 0x28);
      param_4 = uVar24;
      if (lVar26 == 0) goto code_r0x01505118;
      if ((uint)uVar24 < *(uint *)(lVar26 + 0x18)) {
        uVar19 = *(ulong *)(lVar26 + (long)(int)(uint)uVar24 * 8 + 0x20);
        if (uVar19 == 0) {
          return 0;
        }
        uVar38 = *(undefined8 *)((long)puVar9 + -0x10);
        uVar36 = *(undefined8 *)((long)puVar9 + -8);
        uVar18 = *(undefined8 *)((long)puVar9 + -0x20);
        uVar31 = *(undefined8 *)((long)puVar9 + -0x18);
        puVar10 = (undefined1 *)puVar9;
        goto System_Action__Invoke;
      }
    }
    uVar38 = func_0x00f78b24();
    auVar42 = func_0x00f78ac0(uVar38,0);
    plVar32 = auVar42._0_8_;
    puVar11 = (undefined8 *)((long)puVar9 + -0x40);
    *(long *)((long)puVar9 + -0x40) = lVar20;
    *(ulong *)((long)puVar9 + -0x38) = param_4;
    *(undefined1 **)((long)puVar9 + -0x30) = (undefined1 *)((long)puVar9 + -0x10);
    *(undefined **)((long)puVar9 + -0x28) = &Atlas_Stats_StatsManager__DecrementStat;
    pppppppuVar34 = (undefined8 *******)((long)puVar9 + -0x30);
    if (plVar32[4] == 0) {
code_r0x01505184:
      func_0x00f78af4();
    }
    else {
      /*Atlas.Stats.StatsData$$DecrementStat*/ func_0x01504a78();
      lVar20 = plVar32[5];
      param_4 = auVar42._8_8_;
      if (lVar20 == 0) goto code_r0x01505184;
      if (auVar42._8_4_ < *(uint *)(lVar20 + 0x18)) {
        uVar19 = *(ulong *)(lVar20 + (long)(int)auVar42._8_4_ * 8 + 0x20);
        if (uVar19 == 0) {
          return 0;
        }
        uVar38 = *(undefined8 *)((long)puVar9 + -0x30);
        uVar36 = *(undefined8 *)((long)puVar9 + -0x28);
        puVar10 = (undefined1 *)((long)puVar9 + -0x20);
        uVar18 = *(undefined8 *)((long)puVar9 + -0x40);
        uVar31 = *(undefined8 *)((long)puVar9 + -0x38);
System_Action__Invoke:
        uVar25 = 0;
        *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar10 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
        *(undefined4 **)(puVar10 + -0x38) = unaff_x23;
        *(ulong *)(puVar10 + -0x30) = unaff_x22;
        *(ulong *)(puVar10 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar10 + -0x20) = uVar18;
        *(undefined8 *)(puVar10 + -0x18) = uVar31;
        *(undefined8 *)(puVar10 + -0x10) = uVar38;
        *(undefined8 *)(puVar10 + -8) = uVar36;
        *(ulong *)(puVar10 + -0x58) = uVar19;
        lVar20 = *(long *)(uVar19 + 0x68);
        if (lVar20 == 0) {
          puVar10 = puVar10 + -0x58;
          lVar26 = 1;
        }
        else {
          lVar26 = *(long *)(lVar20 + 0x18);
          if (lVar26 == 0) {
            return uVar19;
          }
          puVar10 = (undefined1 *)(lVar20 + 0x20);
        }
        lVar20 = 0;
        do {
          lVar27 = *(long *)(puVar10 + lVar20 * 8);
          pcVar33 = *(code **)(lVar27 + 0x10);
          plVar32 = *(long **)(lVar27 + 0x20);
          lVar27 = *(long *)(lVar27 + 0x28);
          if (*(short *)(lVar27 + 0x48) == -1) {
            func_0x00f78ad8(lVar27,uVar25);
          }
          iVar16 = func_0x00f78a4c(lVar27);
          if (iVar16 == 0) {
            if ((((plVar32 == (long *)0x0) || (*(short *)(lVar27 + 0x48) == -1)) ||
                ((*(byte *)(*plVar32 + 0x115) & 1) != 0)) || (*(long *)(uVar19 + 0x18) == 0))
            goto code_r0x02924d98;
            iVar16 = func_0x00f78a44(lVar27);
            iVar17 = func_0x00f78ec0(lVar27);
            if (iVar16 == 0) {
              uVar3 = *(ushort *)(lVar27 + 0x48);
              if (iVar17 == 0) {
                lVar27 = *plVar32 + (ulong)uVar3 * 0x10;
                auVar42 = (**(code **)(lVar27 + 0x138))(plVar32,*(undefined8 *)(lVar27 + 0x140));
                goto code_r0x02924da4;
              }
              lVar27 = func_0x00f78a48(lVar27);
              lVar28 = *plVar32;
              uVar22 = (ulong)*(ushort *)(lVar28 + 0x12a);
              if (uVar22 != 0) {
                piVar30 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar30 + -2) == lVar27) {
                    puVar23 = (undefined8 *)
                              (lVar28 + (long)(int)(*piVar30 + (uint)uVar3) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar30 = piVar30 + 4;
                  uVar22 = uVar22 - 1;
                } while (uVar22 != 0);
              }
              puVar23 = (undefined8 *)func_0x00fac1f0(plVar32,lVar27,(ulong)uVar3);
code_r0x02924e68:
              pcVar33 = (code *)*puVar23;
              puVar23 = (undefined8 *)puVar23[1];
            }
            else {
              if (iVar17 == 0) {
                uVar38 = *(undefined8 *)
                          (*plVar32 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar28 = *plVar32;
                uVar22 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar22 != 0) {
                  piVar30 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == *(long *)(lVar27 + 0x18)) {
                      lVar28 = lVar28 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar27 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar30 = piVar30 + 4;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
                lVar28 = func_0x00fac1f0(plVar32);
code_r0x02924e40:
                uVar38 = *(undefined8 *)(lVar28 + 8);
              }
              puVar23 = (undefined8 *)func_0x00f78acc(uVar38,lVar27);
              pcVar33 = (code *)*puVar23;
            }
            auVar42 = (*pcVar33)(plVar32,puVar23);
          }
          else if (*(char *)(lVar27 + 0x4a) == '\0') {
            auVar42 = (*pcVar33)(lVar27);
          }
          else {
code_r0x02924d98:
            auVar42 = (*pcVar33)(plVar32,lVar27);
          }
code_r0x02924da4:
          uVar25 = auVar42._8_8_;
          lVar20 = lVar20 + 1;
          if (lVar20 == lVar26) {
            return auVar42._0_8_;
          }
        } while( true );
      }
    }
    uVar38 = func_0x00f78b24();
    puVar35 = &Atlas_Stats_StatsManager__SetStat;
    auVar42 = func_0x00f78ac0(uVar38,0);
  }
  auVar8 = auVar42._0_12_;
  lVar26 = auVar42._0_8_;
  auVar41._8_8_ = param_4;
  auVar41._0_8_ = lVar26;
  puVar12 = (undefined1 *)((long)puVar11 + -0x30);
  *(ulong *)((long)puVar11 + -0x30) = unaff_x22;
  *(ulong *)((long)puVar11 + -0x28) = unaff_x21;
  *(long **)((long)puVar11 + -0x20) = plVar32;
  *(ulong *)((long)puVar11 + -0x18) = param_4;
  *(undefined8 ********)((long)puVar11 + -0x10) = pppppppuVar34;
  *(undefined **)((long)puVar11 + -8) = puVar35;
  puVar10 = (undefined1 *)((long)puVar11 + -0x10);
  lVar20 = *(long *)(lVar26 + 0x20);
  if (lVar20 == 0) {
    func_0x00f78af4();
    uVar38 = func_0x00f78b24();
    auVar42 = func_0x00f78ac0(uVar38,0);
    auVar4._8_8_ = auVar42._8_8_;
    auVar4._0_8_ = lVar26;
    auVar8 = auVar4._0_12_;
    *(undefined1 **)((long)puVar11 + -0x40) = puVar10;
    *(undefined **)((long)puVar11 + -0x38) = &Atlas_Stats_StatsManager__GetStat;
    lVar20 = *(long *)(auVar42._0_8_ + 0x20);
    if (lVar20 == 0) {
      auVar42 = func_0x00f78af4();
      auVar5._8_8_ = auVar42._8_8_;
      auVar5._0_8_ = lVar26;
      auVar8 = auVar5._0_12_;
      *(undefined1 **)((long)puVar11 + -0x50) = (undefined1 *)((long)puVar11 + -0x40);
      *(undefined **)((long)puVar11 + -0x48) = &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar20 = *(long *)(auVar42._0_8_ + 0x18);
      if (lVar20 == 0) {
        auVar42 = func_0x00f78af4();
        auVar6._8_8_ = auVar42._8_8_;
        auVar6._0_8_ = lVar26;
        auVar8 = auVar6._0_12_;
        puVar10 = (undefined1 *)((long)puVar11 + -0x60);
        *(undefined1 **)((long)puVar11 + -0x60) = (undefined1 *)((long)puVar11 + -0x50);
        *(undefined **)((long)puVar11 + -0x58) = &Atlas_Stats_StatsManager__GetCommittedStat;
        lVar20 = *(long *)(auVar42._0_8_ + 0x10);
        if (lVar20 == 0) {
          puVar35 = &Atlas_Stats_StatsManager__GetGlobalStat;
          auVar40 = func_0x00f78af4();
          puVar13 = (undefined1 *)((long)puVar11 + -0x60);
          while( true ) {
            auVar8 = auVar40._0_12_;
            param_4 = auVar40._8_8_;
            lVar26 = auVar40._0_8_;
            auVar7._8_8_ = auVar41._8_8_;
            auVar7._0_8_ = lVar26;
            puVar12 = puVar13 + -0x30;
            *(ulong *)(puVar13 + -0x30) = unaff_x22;
            *(ulong *)(puVar13 + -0x28) = unaff_x21;
            *(undefined1 (*) [16])(puVar13 + -0x20) = auVar41;
            *(undefined1 **)(puVar13 + -0x10) = puVar10;
            *(undefined **)(puVar13 + -8) = puVar35;
            puVar10 = puVar13 + -0x10;
            lVar20 = *(long *)(lVar26 + 0x10);
            if (lVar20 != 0) break;
            auVar42 = func_0x00f78af4();
            param_4 = auVar42._8_8_;
            puVar12 = puVar13 + -0x70;
            *(undefined8 *)(puVar13 + -0x70) = unaff_x24;
            *(undefined4 **)(puVar13 + -0x68) = unaff_x23;
            *(ulong *)(puVar13 + -0x60) = unaff_x22;
            *(ulong *)(puVar13 + -0x58) = unaff_x21;
            *(long *)(puVar13 + -0x50) = lVar26;
            *(long *)(puVar13 + -0x48) = auVar41._8_8_;
            *(undefined1 **)(puVar13 + -0x40) = puVar10;
            *(undefined **)(puVar13 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            puVar10 = puVar13 + -0x40;
            if (param_4 == 0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(param_4 + 0x18) < 1) {
                return 0;
              }
              unaff_x21 = 0;
              unaff_x22 = 0;
              unaff_x23 = (undefined4 *)(param_4 + 0x20);
              auVar7 = auVar42;
              if ((*(ulong *)(param_4 + 0x18) & 0xffffffff) != 0) {
                lVar20 = *(long *)(auVar42._0_8_ + 0x10);
                if (lVar20 == 0) goto code_r0x01505370;
                auVar8._8_4_ = *unaff_x23;
                auVar8._0_8_ = auVar42._0_8_;
                puVar35 = &UNK_0150533c;
                goto code_r0x01504b20;
              }
            }
            uVar38 = func_0x00f78b24();
            auVar42 = func_0x00f78ac0(uVar38,0);
            param_4 = auVar42._8_8_;
            puVar12 = puVar13 + -0xb0;
            *(undefined8 *)(puVar13 + -0xb0) = unaff_x24;
            *(undefined4 **)(puVar13 + -0xa8) = unaff_x23;
            *(ulong *)(puVar13 + -0xa0) = unaff_x22;
            *(ulong *)(puVar13 + -0x98) = unaff_x21;
            *(undefined1 (*) [16])(puVar13 + -0x90) = auVar7;
            *(undefined1 **)(puVar13 + -0x80) = puVar10;
            *(undefined **)(puVar13 + -0x78) = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            puVar10 = puVar13 + -0x80;
            if (param_4 == 0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(param_4 + 0x18) < 1) {
                return 0;
              }
              unaff_x21 = 0;
              unaff_x22 = 0;
              unaff_x23 = (undefined4 *)(param_4 + 0x20);
              auVar7 = auVar42;
              if ((*(ulong *)(param_4 + 0x18) & 0xffffffff) != 0) {
                lVar20 = *(long *)(auVar42._0_8_ + 0x18);
                if (lVar20 == 0) goto code_r0x01505408;
                auVar8._8_4_ = *unaff_x23;
                auVar8._0_8_ = auVar42._0_8_;
                puVar35 = &UNK_015053d4;
                goto code_r0x01504b20;
              }
            }
            uVar38 = func_0x00f78b24();
            auVar41 = func_0x00f78ac0(uVar38,0);
            lVar20 = auVar41._8_8_;
            *(undefined8 *)(puVar13 + -0xf0) = unaff_x24;
            *(undefined4 **)(puVar13 + -0xe8) = unaff_x23;
            *(ulong *)(puVar13 + -0xe0) = unaff_x22;
            *(ulong *)(puVar13 + -0xd8) = unaff_x21;
            *(undefined1 (*) [16])(puVar13 + -0xd0) = auVar7;
            *(undefined1 **)(puVar13 + -0xc0) = puVar10;
            *(undefined **)(puVar13 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            puVar10 = puVar13 + -0xc0;
            if (lVar20 == 0) {
code_r0x015054a8:
              uVar38 = func_0x00f78af4();
              *(ulong *)(puVar13 + -0x120) = unaff_x22;
              *(ulong *)(puVar13 + -0x118) = unaff_x21;
              *(undefined1 (*) [16])(puVar13 + -0x110) = auVar7;
              *(undefined1 **)(puVar13 + -0x100) = puVar10;
              *(undefined **)(puVar13 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)(puVar13 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar38,puVar13 + -0x124);
              return (ulong)*(uint *)(puVar13 + -0x124);
            }
            if ((int)*(ulong *)(lVar20 + 0x18) < 1) {
              return 0;
            }
            unaff_x21 = 0;
            unaff_x22 = 0;
            unaff_x23 = (undefined4 *)(lVar20 + 0x20);
            if ((*(ulong *)(lVar20 + 0x18) & 0xffffffff) == 0) {
              uVar38 = func_0x00f78b24();
              func_0x00f78ac0(uVar38,0);
              auVar7 = auVar41;
              goto code_r0x015054a8;
            }
            auVar40._8_4_ = *unaff_x23;
            auVar40._0_8_ = auVar41._0_8_;
            auVar40._12_4_ = 0;
            puVar35 = &UNK_01505468;
            puVar13 = puVar13 + -0xf0;
          }
          puVar35 = &UNK_015052bc;
        }
        else {
          puVar12 = (undefined1 *)((long)puVar11 + -0x50);
          puVar10 = *(undefined1 **)((long)puVar11 + -0x60);
          puVar35 = *(undefined **)((long)puVar11 + -0x58);
        }
      }
      else {
        puVar12 = (undefined1 *)((long)puVar11 + -0x40);
        puVar10 = *(undefined1 **)((long)puVar11 + -0x50);
        puVar35 = *(undefined **)((long)puVar11 + -0x48);
      }
    }
    else {
      puVar12 = (undefined1 *)((long)puVar11 + -0x30);
      puVar10 = *(undefined1 **)((long)puVar11 + -0x40);
      puVar35 = *(undefined **)((long)puVar11 + -0x38);
    }
  }
  else {
    puVar35 = &UNK_015051c0;
    param_4 = auVar42._8_8_;
    unaff_x22 = uVar19;
  }
code_r0x01504b20:
  *(undefined1 **)(puVar12 + -0x10) = puVar10;
  *(undefined **)(puVar12 + -8) = puVar35;
  lVar20 = *(long *)(lVar20 + 0x10);
  if (lVar20 == 0) {
    func_0x00f78af4();
  }
  else if (auVar8._8_4_ < *(uint *)(lVar20 + 0x18)) {
    return (ulong)*(uint *)(lVar20 + (long)(int)auVar8._8_4_ * 4 + 0x20);
  }
  uVar38 = func_0x00f78b24();
  auVar42 = func_0x00f78ac0(uVar38,0);
  lVar20 = auVar42._8_8_;
  uVar22 = auVar42._0_8_;
  *(undefined8 *)(puVar12 + -0x50) = unaff_x24;
  *(undefined4 **)(puVar12 + -0x48) = unaff_x23;
  *(ulong *)(puVar12 + -0x40) = unaff_x22;
  *(ulong *)(puVar12 + -0x38) = unaff_x21;
  *(long *)(puVar12 + -0x30) = auVar8._0_8_;
  *(ulong *)(puVar12 + -0x28) = param_4;
  *(undefined1 **)(puVar12 + -0x20) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x18) = &Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar19 = uVar22;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar19 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar26 = *(long *)(uVar22 + 0x10);
  if (((lVar26 != 0) && (lVar20 != 0)) && (*(long *)(lVar20 + 0x10) != 0)) {
    iVar16 = *(int *)(lVar26 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar20 + 0x10) + 0x18);
    if (iVar16 < (int)unaff_x22) {
      lVar26 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      uVar19 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar22 + 0x10),lVar26,iVar16,0);
      *(long *)(uVar22 + 0x10) = lVar26;
    }
    if (0 < (int)unaff_x22) {
      if (lVar26 == 0) goto code_r0x01504c70;
      uVar22 = 0;
      uVar1 = *(uint *)(lVar26 + 0x18);
      do {
        if (uVar1 == uVar22) {
code_r0x01504c64:
          uVar38 = func_0x00f78b24();
          func_0x00f78ac0(uVar38,0);
          goto code_r0x01504c70;
        }
        lVar27 = *(long *)(lVar20 + 0x10);
        if (lVar27 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar27 + 0x18) <= uVar22) || (uVar1 <= uVar22)) goto code_r0x01504c64;
        iVar16 = *(int *)(lVar26 + 0x20 + uVar22 * 4);
        iVar17 = *(int *)(lVar27 + uVar22 * 4 + 0x20);
        if (iVar16 <= iVar17) {
          iVar16 = iVar17;
        }
        *(int *)(lVar26 + 0x20 + uVar22 * 4) = iVar16;
        uVar22 = uVar22 + 1;
      } while ((unaff_x22 & 0xffffffff) != uVar22);
    }
    return uVar19;
  }
code_r0x01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar12 + -0x80) = unaff_x22;
  *(long *)(puVar12 + -0x78) = lVar26;
  *(undefined1 (*) [16])(puVar12 + -0x70) = auVar42;
  *(undefined1 **)(puVar12 + -0x60) = puVar12 + -0x20;
  *(undefined **)(puVar12 + -0x58) = &Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar19 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar19;
}



// ============================================================
// RVA: 0x146e7b8 | Atlas.Stats.AtlasStats.FixedUpdateGameContextKartTracking
// ============================================================

/* WARNING: Possible PIC construction at 0x0146e938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146e9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ea08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146eab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015052b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015053d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015053d4) */
/* WARNING: Removing unreachable block (ram,0x015053e8) */
/* WARNING: Removing unreachable block (ram,0x0150533c) */
/* WARNING: Removing unreachable block (ram,0x01505350) */
/* WARNING: Removing unreachable block (ram,0x015052bc) */
/* WARNING: Removing unreachable block (ram,0x015052c8) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x015051e8) */
/* WARNING: Removing unreachable block (ram,0x015051f0) */
/* WARNING: Removing unreachable block (ram,0x015051f8) */
/* WARNING: Removing unreachable block (ram,0x01505204) */
/* WARNING: Removing unreachable block (ram,0x01505224) */
/* WARNING: Removing unreachable block (ram,0x01505210) */
/* WARNING: Removing unreachable block (ram,0x015051c0) */
/* WARNING: Removing unreachable block (ram,0x015051cc) */
/* WARNING: Removing unreachable block (ram,0x015051e0) */
/* WARNING: Removing unreachable block (ram,0x0146ea0c) */
/* WARNING: Removing unreachable block (ram,0x0146e9a4) */
/* WARNING: Removing unreachable block (ram,0x0146e9ac) */
/* WARNING: Removing unreachable block (ram,0x0146e9c0) */
/* WARNING: Removing unreachable block (ram,0x0146e9c4) */
/* WARNING: Removing unreachable block (ram,0x0146e9c8) */
/* WARNING: Removing unreachable block (ram,0x0146e9e0) */
/* WARNING: Removing unreachable block (ram,0x0146e9f4) */
/* WARNING: Removing unreachable block (ram,0x0146e9f8) */
/* WARNING: Removing unreachable block (ram,0x0146e9fc) */
/* WARNING: Removing unreachable block (ram,0x0146e93c) */
/* WARNING: Removing unreachable block (ram,0x0146e944) */
/* WARNING: Removing unreachable block (ram,0x0146e958) */
/* WARNING: Removing unreachable block (ram,0x0146e95c) */
/* WARNING: Removing unreachable block (ram,0x0146e960) */
/* WARNING: Removing unreachable block (ram,0x0146e978) */
/* WARNING: Removing unreachable block (ram,0x0146e98c) */
/* WARNING: Removing unreachable block (ram,0x0146e990) */
/* WARNING: Removing unreachable block (ram,0x0146e994) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */

ulong Atlas_Stats_AtlasStats__FixedUpdateGameContextKartTracking
                (undefined1 param_1 [16],float param_2,float param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  undefined8 uVar28;
  long unaff_x20;
  long *plVar29;
  ulong unaff_x21;
  ulong unaff_x22;
  code *pcVar30;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined4 uVar34;
  float fVar35;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined8 uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulong auStack_110 [8];
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  
  puVar10 = &uStack_60;
  puVar21 = &uStack_60;
  pppppppuVar31 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (((*(char *)(param_4 + 0x5d) == '\0') || (*(int *)(param_4 + 0x60) != 1)) ||
     (*(long *)(param_4 + 0x18) == 0)) {
    return param_4;
  }
  lVar17 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
  if (lVar17 != 0) {
    unaff_x20 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar17,0);
    uVar20 = (ulong)*(uint *)(unaff_x20 + 0x140);
    uVar36 = 0;
    fVar37 = *(float *)(unaff_x20 + 0x144);
    uVar18 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(unaff_x20 + 0x13c),0);
    param_3 = (float)extraout_d0;
    if (*(int *)(param_4 + 0x28) < 1) {
      *(float *)(param_4 + 0x2c) = param_3;
      *(float *)(param_4 + 0x30) = (float)uVar20;
      *(float *)(param_4 + 0x34) = fVar37;
      *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + 1;
      return uVar18;
    }
    fStack_38 = fVar37 - *(float *)(param_4 + 0x34);
    uStack_40 = CONCAT44((float)uVar20 - (float)((ulong)*(undefined8 *)(param_4 + 0x2c) >> 0x20),
                         param_3 - (float)*(undefined8 *)(param_4 + 0x2c));
    uStack_60 = extraout_d0;
    uStack_58 = extraout_var;
    uStack_50 = uVar20;
    uStack_48 = uVar36;
    fVar37 = (float)/*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&uStack_40,0);
    cVar2 = *(char *)(unaff_x20 + 0x3f);
    if (*(char *)(unaff_x20 + 0x56) == '\0') {
      bVar13 = false;
      if (*(char *)(unaff_x20 + 0x3d) != '\0') {
        bVar13 = *(char *)(param_4 + 100) != '\0';
      }
    }
    else {
      bVar13 = true;
    }
    param_2 = *(float *)(unaff_x20 + 100);
    fVar35 = *(float *)(unaff_x20 + 0x5c);
    *(bool *)(param_4 + 100) = bVar13;
    if (cVar2 != '\0') {
      param_3 = fVar37 + *(float *)(param_4 + 0x3c);
      *(float *)(param_4 + 0x3c) = param_3;
    }
    if (0.0 < param_2) {
      param_2 = fVar37 + *(float *)(param_4 + 0x38);
      *(float *)(param_4 + 0x38) = param_2;
    }
    if (bVar13 != false) {
      param_2 = fVar37 + *(float *)(param_4 + 0x48);
      *(float *)(param_4 + 0x48) = param_2;
    }
    if (0.0 < fVar35) {
      *(float *)(param_4 + 0x40) = fVar37 + *(float *)(param_4 + 0x40);
      if ((*(long *)(param_4 + 0x18) == 0) ||
         (lVar17 = *(long *)(*(long *)(param_4 + 0x18) + 0x10), lVar17 == 0)) goto LAB_0146ea38;
      lVar17 = Atlas_Gameplay_Kart_KartPhysics__get_Suspension(lVar17,0);
      iVar14 = Atlas_Gameplay_Kart_SurfaceTags__IsSurfaceOffRoad(*(undefined4 *)(lVar17 + 0x50),0);
      if (iVar14 != 0) {
        *(float *)(param_4 + 0x44) = fVar37 + *(float *)(param_4 + 0x44);
      }
    }
    if (*(long *)(param_4 + 0x10) == 0) goto LAB_0146ea38;
    fVar35 = *(float *)(param_4 + 0x38);
    fVar37 = -fVar35;
    if (fVar35 != INFINITY) {
      fVar37 = fVar35;
    }
    uVar18 = (ulong)(uint)(int)fVar37;
    auVar40._8_8_ = 0xe;
    auVar40._0_8_ = *(long *)(param_4 + 0x10);
    puVar32 = &UNK_0146e93c;
code_r0x01505194:
    auVar8 = auVar40._0_12_;
    lVar19 = auVar40._0_8_;
    auVar39._8_8_ = param_4;
    auVar39._0_8_ = lVar19;
    puVar11 = (undefined1 *)((long)puVar10 + -0x30);
    *(ulong *)((long)puVar10 + -0x30) = unaff_x22;
    *(ulong *)((long)puVar10 + -0x28) = unaff_x21;
    *(long *)((long)puVar10 + -0x20) = unaff_x20;
    *(ulong *)((long)puVar10 + -0x18) = param_4;
    *(undefined8 ********)((long)puVar10 + -0x10) = pppppppuVar31;
    *(undefined **)((long)puVar10 + -8) = puVar32;
    puVar9 = (undefined1 *)((long)puVar10 + -0x10);
    lVar17 = *(long *)(lVar19 + 0x20);
    if (lVar17 == 0) {
      func_0x00f78af4();
      uVar36 = func_0x00f78b24();
      auVar40 = func_0x00f78ac0(uVar36,0);
      auVar4._8_8_ = auVar40._8_8_;
      auVar4._0_8_ = lVar19;
      auVar8 = auVar4._0_12_;
      *(undefined1 **)((long)puVar10 + -0x40) = puVar9;
      *(undefined **)((long)puVar10 + -0x38) = &Atlas_Stats_StatsManager__GetStat;
      lVar17 = *(long *)(auVar40._0_8_ + 0x20);
      if (lVar17 == 0) {
        auVar40 = func_0x00f78af4();
        auVar5._8_8_ = auVar40._8_8_;
        auVar5._0_8_ = lVar19;
        auVar8 = auVar5._0_12_;
        *(undefined1 **)((long)puVar10 + -0x50) = (undefined1 *)((long)puVar10 + -0x40);
        *(undefined **)((long)puVar10 + -0x48) = &Atlas_Stats_StatsManager__GetTransactionStat;
        lVar17 = *(long *)(auVar40._0_8_ + 0x18);
        if (lVar17 == 0) {
          auVar40 = func_0x00f78af4();
          auVar6._8_8_ = auVar40._8_8_;
          auVar6._0_8_ = lVar19;
          auVar8 = auVar6._0_12_;
          puVar9 = (undefined1 *)((long)puVar10 + -0x60);
          *(undefined1 **)((long)puVar10 + -0x60) = (undefined1 *)((long)puVar10 + -0x50);
          *(undefined **)((long)puVar10 + -0x58) = &Atlas_Stats_StatsManager__GetCommittedStat;
          lVar17 = *(long *)(auVar40._0_8_ + 0x10);
          if (lVar17 == 0) {
            puVar32 = &Atlas_Stats_StatsManager__GetGlobalStat;
            auVar38 = func_0x00f78af4();
            puVar12 = (undefined1 *)((long)puVar10 + -0x60);
            while( true ) {
              auVar8 = auVar38._0_12_;
              param_4 = auVar38._8_8_;
              lVar19 = auVar38._0_8_;
              auVar7._8_8_ = auVar39._8_8_;
              auVar7._0_8_ = lVar19;
              puVar11 = puVar12 + -0x30;
              *(ulong *)(puVar12 + -0x30) = unaff_x22;
              *(ulong *)(puVar12 + -0x28) = unaff_x21;
              *(undefined1 (*) [16])(puVar12 + -0x20) = auVar39;
              *(undefined1 **)(puVar12 + -0x10) = puVar9;
              *(undefined **)(puVar12 + -8) = puVar32;
              puVar9 = puVar12 + -0x10;
              lVar17 = *(long *)(lVar19 + 0x10);
              if (lVar17 != 0) break;
              auVar40 = func_0x00f78af4();
              param_4 = auVar40._8_8_;
              puVar11 = puVar12 + -0x70;
              *(undefined8 *)(puVar12 + -0x70) = unaff_x24;
              *(undefined4 **)(puVar12 + -0x68) = unaff_x23;
              *(ulong *)(puVar12 + -0x60) = unaff_x22;
              *(ulong *)(puVar12 + -0x58) = unaff_x21;
              *(long *)(puVar12 + -0x50) = lVar19;
              *(long *)(puVar12 + -0x48) = auVar39._8_8_;
              *(undefined1 **)(puVar12 + -0x40) = puVar9;
              *(undefined **)(puVar12 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
              puVar9 = puVar12 + -0x40;
              if (param_4 == 0) {
code_r0x01505370:
                func_0x00f78af4();
              }
              else {
                if ((int)*(ulong *)(param_4 + 0x18) < 1) {
                  return 0;
                }
                unaff_x21 = 0;
                unaff_x22 = 0;
                unaff_x23 = (undefined4 *)(param_4 + 0x20);
                auVar7 = auVar40;
                if ((*(ulong *)(param_4 + 0x18) & 0xffffffff) != 0) {
                  lVar17 = *(long *)(auVar40._0_8_ + 0x10);
                  if (lVar17 == 0) goto code_r0x01505370;
                  auVar8._8_4_ = *unaff_x23;
                  auVar8._0_8_ = auVar40._0_8_;
                  puVar32 = &UNK_0150533c;
                  goto code_r0x01504b20;
                }
              }
              uVar36 = func_0x00f78b24();
              auVar40 = func_0x00f78ac0(uVar36,0);
              param_4 = auVar40._8_8_;
              puVar11 = puVar12 + -0xb0;
              *(undefined8 *)(puVar12 + -0xb0) = unaff_x24;
              *(undefined4 **)(puVar12 + -0xa8) = unaff_x23;
              *(ulong *)(puVar12 + -0xa0) = unaff_x22;
              *(ulong *)(puVar12 + -0x98) = unaff_x21;
              *(undefined1 (*) [16])(puVar12 + -0x90) = auVar7;
              *(undefined1 **)(puVar12 + -0x80) = puVar9;
              *(undefined **)(puVar12 + -0x78) =
                   &Atlas_Stats_StatsManager__GetSummedTransactionStats;
              puVar9 = puVar12 + -0x80;
              if (param_4 == 0) {
code_r0x01505408:
                func_0x00f78af4();
              }
              else {
                if ((int)*(ulong *)(param_4 + 0x18) < 1) {
                  return 0;
                }
                unaff_x21 = 0;
                unaff_x22 = 0;
                unaff_x23 = (undefined4 *)(param_4 + 0x20);
                auVar7 = auVar40;
                if ((*(ulong *)(param_4 + 0x18) & 0xffffffff) != 0) {
                  lVar17 = *(long *)(auVar40._0_8_ + 0x18);
                  if (lVar17 == 0) goto code_r0x01505408;
                  auVar8._8_4_ = *unaff_x23;
                  auVar8._0_8_ = auVar40._0_8_;
                  puVar32 = &UNK_015053d4;
                  goto code_r0x01504b20;
                }
              }
              uVar36 = func_0x00f78b24();
              auVar39 = func_0x00f78ac0(uVar36,0);
              lVar17 = auVar39._8_8_;
              *(undefined8 *)(puVar12 + -0xf0) = unaff_x24;
              *(undefined4 **)(puVar12 + -0xe8) = unaff_x23;
              *(ulong *)(puVar12 + -0xe0) = unaff_x22;
              *(ulong *)(puVar12 + -0xd8) = unaff_x21;
              *(undefined1 (*) [16])(puVar12 + -0xd0) = auVar7;
              *(undefined1 **)(puVar12 + -0xc0) = puVar9;
              *(undefined **)(puVar12 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
              puVar9 = puVar12 + -0xc0;
              if (lVar17 == 0) {
code_r0x015054a8:
                uVar36 = func_0x00f78af4();
                *(ulong *)(puVar12 + -0x120) = unaff_x22;
                *(ulong *)(puVar12 + -0x118) = unaff_x21;
                *(undefined1 (*) [16])(puVar12 + -0x110) = auVar7;
                *(undefined1 **)(puVar12 + -0x100) = puVar9;
                *(undefined **)(puVar12 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
                if ((bRam0000000003eb4d0b & 1) == 0) {
                  func_0x00f78a20(0x3d24d58);
                  bRam0000000003eb4d0b = 1;
                }
                *(undefined4 *)(puVar12 + -0x124) = 0;
                if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar36,puVar12 + -0x124);
                return (ulong)*(uint *)(puVar12 + -0x124);
              }
              if ((int)*(ulong *)(lVar17 + 0x18) < 1) {
                return 0;
              }
              unaff_x21 = 0;
              unaff_x22 = 0;
              unaff_x23 = (undefined4 *)(lVar17 + 0x20);
              if ((*(ulong *)(lVar17 + 0x18) & 0xffffffff) == 0) {
                uVar36 = func_0x00f78b24();
                func_0x00f78ac0(uVar36,0);
                auVar7 = auVar39;
                goto code_r0x015054a8;
              }
              auVar38._8_4_ = *unaff_x23;
              auVar38._0_8_ = auVar39._0_8_;
              auVar38._12_4_ = 0;
              puVar32 = &UNK_01505468;
              puVar12 = puVar12 + -0xf0;
            }
            puVar32 = &UNK_015052bc;
          }
          else {
            puVar11 = (undefined1 *)((long)puVar10 + -0x50);
            puVar9 = *(undefined1 **)((long)puVar10 + -0x60);
            puVar32 = *(undefined **)((long)puVar10 + -0x58);
          }
        }
        else {
          puVar11 = (undefined1 *)((long)puVar10 + -0x40);
          puVar9 = *(undefined1 **)((long)puVar10 + -0x50);
          puVar32 = *(undefined **)((long)puVar10 + -0x48);
        }
      }
      else {
        puVar11 = (undefined1 *)((long)puVar10 + -0x30);
        puVar9 = *(undefined1 **)((long)puVar10 + -0x40);
        puVar32 = *(undefined **)((long)puVar10 + -0x38);
      }
    }
    else {
      puVar32 = &UNK_015051c0;
      param_4 = auVar40._8_8_;
      unaff_x22 = uVar18;
    }
code_r0x01504b20:
    *(undefined1 **)(puVar11 + -0x10) = puVar9;
    *(undefined **)(puVar11 + -8) = puVar32;
    lVar17 = *(long *)(lVar17 + 0x10);
    if (lVar17 == 0) {
      func_0x00f78af4();
    }
    else if (auVar8._8_4_ < *(uint *)(lVar17 + 0x18)) {
      return (ulong)*(uint *)(lVar17 + (long)(int)auVar8._8_4_ * 4 + 0x20);
    }
    uVar36 = func_0x00f78b24();
    auVar40 = func_0x00f78ac0(uVar36,0);
    lVar17 = auVar40._8_8_;
    uVar20 = auVar40._0_8_;
    *(undefined8 *)(puVar11 + -0x50) = unaff_x24;
    *(undefined4 **)(puVar11 + -0x48) = unaff_x23;
    *(ulong *)(puVar11 + -0x40) = unaff_x22;
    *(ulong *)(puVar11 + -0x38) = unaff_x21;
    *(long *)(puVar11 + -0x30) = auVar8._0_8_;
    *(ulong *)(puVar11 + -0x28) = param_4;
    *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x18) = &Atlas_Stats_StatsData__UpdateToLargestValues;
    uVar18 = uVar20;
    if ((bRam0000000003eb4d06 & 1) == 0) {
      uVar18 = func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d06 = 1;
    }
    lVar19 = *(long *)(uVar20 + 0x10);
    if (((lVar19 != 0) && (lVar17 != 0)) && (*(long *)(lVar17 + 0x10) != 0)) {
      iVar14 = *(int *)(lVar19 + 0x18);
      unaff_x22 = *(ulong *)(*(long *)(lVar17 + 0x10) + 0x18);
      if (iVar14 < (int)unaff_x22) {
        lVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
        uVar18 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar20 + 0x10),lVar19,iVar14,0);
        *(long *)(uVar20 + 0x10) = lVar19;
      }
      if (0 < (int)unaff_x22) {
        if (lVar19 == 0) goto code_r0x01504c70;
        uVar20 = 0;
        uVar1 = *(uint *)(lVar19 + 0x18);
        do {
          if (uVar1 == uVar20) {
code_r0x01504c64:
            uVar36 = func_0x00f78b24();
            func_0x00f78ac0(uVar36,0);
            goto code_r0x01504c70;
          }
          lVar24 = *(long *)(lVar17 + 0x10);
          if (lVar24 == 0) goto code_r0x01504c70;
          if ((*(uint *)(lVar24 + 0x18) <= uVar20) || (uVar1 <= uVar20)) goto code_r0x01504c64;
          iVar14 = *(int *)(lVar19 + 0x20 + uVar20 * 4);
          iVar15 = *(int *)(lVar24 + uVar20 * 4 + 0x20);
          if (iVar14 <= iVar15) {
            iVar14 = iVar15;
          }
          *(int *)(lVar19 + 0x20 + uVar20 * 4) = iVar14;
          uVar20 = uVar20 + 1;
        } while ((unaff_x22 & 0xffffffff) != uVar20);
      }
      return uVar18;
    }
code_r0x01504c70:
    func_0x00f78af4();
    *(ulong *)(puVar11 + -0x80) = unaff_x22;
    *(long *)(puVar11 + -0x78) = lVar19;
    *(undefined1 (*) [16])(puVar11 + -0x70) = auVar40;
    *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x20;
    *(undefined **)(puVar11 + -0x58) = &Atlas_Stats_StatsData__Clone;
    if ((bRam0000000003eb4d07 & 1) == 0) {
      func_0x00f78a20(0x3d24d50);
      bRam0000000003eb4d07 = 1;
    }
    uVar18 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
    return uVar18;
  }
LAB_0146ea38:
  uVar18 = func_0x00f78af4();
  puStack_68 = &Atlas_Stats_AtlasStats__UpdateGameContextKartTracking;
  if (*(char *)(uVar18 + 0x5d) == '\0') {
    return uVar18;
  }
  if (*(int *)(uVar18 + 0x60) != 1) {
    return uVar18;
  }
  if (*(long *)(uVar18 + 0x18) == 0) {
    return uVar18;
  }
  lVar17 = *(long *)(*(long *)(uVar18 + 0x18) + 0x10);
  ppppppuStack_70 = pppppppuVar31;
  if (lVar17 != 0) {
    lVar17 = Atlas_Gameplay_Kart_KartPhysics__get_Events(lVar17,0);
    if ((*(long *)(uVar18 + 0x18) != 0) &&
       (lVar19 = *(long *)(*(long *)(uVar18 + 0x18) + 0x10), lVar19 != 0)) {
      uVar20 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar19,0);
      if (*(char *)(lVar17 + 0xe) == '\0') {
        uVar22 = uVar20;
        if (*(char *)(lVar17 + 2) != '\0') {
          if (*(long *)(uVar18 + 0x10) == 0) goto Atlas_Stats_AtlasStats__ResetKartTracking;
          uVar22 = /*Atlas.Stats.StatsManager$$IncrementStat*/ func_0x015050bc(*(long *)(uVar18 + 0x10),0x18,0);
        }
        if (*(char *)(lVar17 + 10) == '\0') {
          return uVar22;
        }
        iVar14 = *(int *)(uVar20 + 0x70);
        pppppppuVar31 = (undefined8 *******)ppppppuStack_70;
        puVar32 = puStack_68;
        if (iVar14 == 3) {
          lVar19 = *(long *)(uVar18 + 0x10);
          if (lVar19 != 0) {
            uVar22 = 0x13;
            goto code_r0x015050bc;
          }
        }
        else if (iVar14 == 2) {
          lVar19 = *(long *)(uVar18 + 0x10);
          if (lVar19 != 0) {
            uVar22 = 0x12;
            puVar21 = &uStack_60;
            goto code_r0x015050bc;
          }
        }
        else {
          if (iVar14 != 1) {
            return uVar22;
          }
          lVar19 = *(long *)(uVar18 + 0x10);
          if (lVar19 != 0) {
            uVar22 = 0x11;
            puVar21 = &uStack_60;
code_r0x015050bc:
            uVar18 = 0;
            *(long *)((long)puVar21 + -0x20) = unaff_x20;
            *(ulong *)((long)puVar21 + -0x18) = param_4;
            *(undefined8 ********)((long)puVar21 + -0x10) = pppppppuVar31;
            *(undefined **)((long)puVar21 + -8) = puVar32;
            if (*(long *)(lVar19 + 0x20) == 0) {
code_r0x01505118:
              func_0x00f78af4();
            }
            else {
              /*Atlas.Stats.StatsData$$IncrementStat*/ func_0x01504a24();
              lVar17 = *(long *)(lVar19 + 0x28);
              param_4 = uVar22;
              if (lVar17 == 0) goto code_r0x01505118;
              if ((uint)uVar22 < *(uint *)(lVar17 + 0x18)) {
                uVar18 = *(ulong *)(lVar17 + (long)(int)(uint)uVar22 * 8 + 0x20);
                if (uVar18 == 0) {
                  return 0;
                }
                uVar36 = *(undefined8 *)((long)puVar21 + -0x10);
                uVar33 = *(undefined8 *)((long)puVar21 + -8);
                uVar16 = *(undefined8 *)((long)puVar21 + -0x20);
                uVar28 = *(undefined8 *)((long)puVar21 + -0x18);
                puVar9 = (undefined1 *)puVar21;
                goto System_Action__Invoke;
              }
            }
            uVar36 = func_0x00f78b24();
            auVar40 = func_0x00f78ac0(uVar36,0);
            unaff_x20 = auVar40._0_8_;
            puVar10 = (undefined8 *)((long)puVar21 + -0x40);
            *(long *)((long)puVar21 + -0x40) = lVar19;
            *(ulong *)((long)puVar21 + -0x38) = param_4;
            *(undefined1 **)((long)puVar21 + -0x30) = (undefined1 *)((long)puVar21 + -0x10);
            *(undefined **)((long)puVar21 + -0x28) = &Atlas_Stats_StatsManager__DecrementStat;
            pppppppuVar31 = (undefined8 *******)((long)puVar21 + -0x30);
            if (*(long *)(unaff_x20 + 0x20) == 0) {
code_r0x01505184:
              func_0x00f78af4();
            }
            else {
              /*Atlas.Stats.StatsData$$DecrementStat*/ func_0x01504a78();
              lVar17 = *(long *)(unaff_x20 + 0x28);
              param_4 = auVar40._8_8_;
              if (lVar17 == 0) goto code_r0x01505184;
              if (auVar40._8_4_ < *(uint *)(lVar17 + 0x18)) {
                uVar18 = *(ulong *)(lVar17 + (long)(int)auVar40._8_4_ * 8 + 0x20);
                if (uVar18 == 0) {
                  return 0;
                }
                uVar36 = *(undefined8 *)((long)puVar21 + -0x30);
                uVar33 = *(undefined8 *)((long)puVar21 + -0x28);
                puVar9 = (undefined1 *)((long)puVar21 + -0x20);
                uVar16 = *(undefined8 *)((long)puVar21 + -0x40);
                uVar28 = *(undefined8 *)((long)puVar21 + -0x38);
System_Action__Invoke:
                uVar23 = 0;
                *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar9 + -0x40) = unaff_x24;
                *(undefined4 **)(puVar9 + -0x38) = unaff_x23;
                *(ulong *)(puVar9 + -0x30) = unaff_x22;
                *(ulong *)(puVar9 + -0x28) = unaff_x21;
                *(undefined8 *)(puVar9 + -0x20) = uVar16;
                *(undefined8 *)(puVar9 + -0x18) = uVar28;
                *(undefined8 *)(puVar9 + -0x10) = uVar36;
                *(undefined8 *)(puVar9 + -8) = uVar33;
                *(ulong *)(puVar9 + -0x58) = uVar18;
                lVar17 = *(long *)(uVar18 + 0x68);
                if (lVar17 == 0) {
                  puVar9 = puVar9 + -0x58;
                  lVar19 = 1;
                }
                else {
                  lVar19 = *(long *)(lVar17 + 0x18);
                  if (lVar19 == 0) {
                    return uVar18;
                  }
                  puVar9 = (undefined1 *)(lVar17 + 0x20);
                }
                lVar17 = 0;
                do {
                  lVar24 = *(long *)(puVar9 + lVar17 * 8);
                  pcVar30 = *(code **)(lVar24 + 0x10);
                  plVar29 = *(long **)(lVar24 + 0x20);
                  lVar24 = *(long *)(lVar24 + 0x28);
                  if (*(short *)(lVar24 + 0x48) == -1) {
                    func_0x00f78ad8(lVar24,uVar23);
                  }
                  iVar14 = func_0x00f78a4c(lVar24);
                  if (iVar14 == 0) {
                    if ((((plVar29 == (long *)0x0) || (*(short *)(lVar24 + 0x48) == -1)) ||
                        ((*(byte *)(*plVar29 + 0x115) & 1) != 0)) || (*(long *)(uVar18 + 0x18) == 0)
                       ) goto code_r0x02924d98;
                    iVar14 = func_0x00f78a44(lVar24);
                    iVar15 = func_0x00f78ec0(lVar24);
                    if (iVar14 == 0) {
                      uVar3 = *(ushort *)(lVar24 + 0x48);
                      if (iVar15 == 0) {
                        lVar24 = *plVar29 + (ulong)uVar3 * 0x10;
                        auVar40 = (**(code **)(lVar24 + 0x138))
                                            (plVar29,*(undefined8 *)(lVar24 + 0x140));
                        goto code_r0x02924da4;
                      }
                      lVar24 = func_0x00f78a48(lVar24);
                      lVar25 = *plVar29;
                      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12a);
                      if (uVar20 != 0) {
                        piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar27 + -2) == lVar24) {
                            puVar21 = (undefined8 *)
                                      (lVar25 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x02924e68;
                          }
                          piVar27 = piVar27 + 4;
                          uVar20 = uVar20 - 1;
                        } while (uVar20 != 0);
                      }
                      puVar21 = (undefined8 *)func_0x00fac1f0(plVar29,lVar24,(ulong)uVar3);
code_r0x02924e68:
                      pcVar30 = (code *)*puVar21;
                      puVar21 = (undefined8 *)puVar21[1];
                    }
                    else {
                      if (iVar15 == 0) {
                        uVar36 = *(undefined8 *)
                                  (*plVar29 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar25 = *plVar29;
                        uVar20 = (ulong)*(ushort *)(lVar25 + 0x12a);
                        if (uVar20 != 0) {
                          piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar27 + -2) == *(long *)(lVar24 + 0x18)) {
                              lVar25 = lVar25 + (long)(int)(*piVar27 +
                                                           (uint)*(ushort *)(lVar24 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x02924e40;
                            }
                            piVar27 = piVar27 + 4;
                            uVar20 = uVar20 - 1;
                          } while (uVar20 != 0);
                        }
                        lVar25 = func_0x00fac1f0(plVar29);
code_r0x02924e40:
                        uVar36 = *(undefined8 *)(lVar25 + 8);
                      }
                      puVar21 = (undefined8 *)func_0x00f78acc(uVar36,lVar24);
                      pcVar30 = (code *)*puVar21;
                    }
                    auVar40 = (*pcVar30)(plVar29,puVar21);
                  }
                  else if (*(char *)(lVar24 + 0x4a) == '\0') {
                    auVar40 = (*pcVar30)(lVar24);
                  }
                  else {
code_r0x02924d98:
                    auVar40 = (*pcVar30)(plVar29,lVar24);
                  }
code_r0x02924da4:
                  uVar23 = auVar40._8_8_;
                  lVar17 = lVar17 + 1;
                  if (lVar17 == lVar19) {
                    return auVar40._0_8_;
                  }
                } while( true );
              }
            }
            uVar36 = func_0x00f78b24();
            puVar32 = &Atlas_Stats_StatsManager__SetStat;
            auVar40 = func_0x00f78ac0(uVar36,0);
            goto code_r0x01505194;
          }
        }
      }
      else {
        lVar19 = *(long *)(uVar18 + 0x10);
        if (lVar19 != 0) {
          uVar22 = 0x1a;
          puVar21 = (undefined8 *)&stack0xffffffffffffff70;
          param_4 = uVar18;
          unaff_x20 = lVar17;
          unaff_x21 = uVar20;
          pppppppuVar31 = &ppppppuStack_70;
          puVar32 = &UNK_0146eab8;
          goto code_r0x015050bc;
        }
      }
    }
  }
Atlas_Stats_AtlasStats__ResetKartTracking:
  lVar17 = func_0x00f78af4();
  puStack_98 = &Atlas_Stats_AtlasStats__EndGameContextKartTracking;
  pppppppuVar31 = &ppppppuStack_a0;
  plVar29 = (long *)0x3eb4000;
  ppppppuStack_a0 = &ppppppuStack_70;
  if ((bRam0000000003eb4865 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d524d8);
    func_0x00f78a20(0x3d3c050);
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb4865 = 1;
  }
  if (*(long *)(lVar17 + 0x20) == 0) {
LAB_0146e360:
    *(undefined8 *)(lVar17 + 0x18) = 0;
    *(undefined4 *)(lVar17 + 0x28) = 0;
    uVar34 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar17 + 0x2c) = uVar34;
    *(float *)(lVar17 + 0x30) = param_2;
    *(float *)(lVar17 + 0x34) = param_3;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined8 *)(lVar17 + 0x40) = 0;
    *(undefined4 *)(lVar17 + 0x48) = 0;
    if (*(long *)(lVar17 + 0x50) != 0) {
      uVar18 = /*System.Collections.Generic.List<StringID>$$Clear*/ func_0x024663e0(*(long *)(lVar17 + 0x50),uRam0000000003d3c050);
      *(undefined4 *)(lVar17 + 0x58) = 0;
      *(undefined1 *)(lVar17 + 0x5c) = 0;
      *(undefined4 *)(lVar17 + 0x60) = 0;
      return uVar18;
    }
  }
  else if (*(long *)(lVar17 + 0x18) != 0) {
    plVar29 = *(long **)(*(long *)(lVar17 + 0x18) + 0x68);
    unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar17,uRam0000000003d524d8,0);
    if (plVar29 != (long *)0x0) {
      if ((*(byte *)(*plVar29 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300)) ||
         (*(long *)(*(long *)(*plVar29 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 +
                   -8) != /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) goto LAB_0146e3c0;
      Atlas_Gameplay_Kart_RaceKartAI__remove_OnLapCompleted(plVar29,unaff_x22,0);
      *(undefined8 *)(lVar17 + 0x20) = 0;
      goto LAB_0146e360;
    }
  }
  func_0x00f78af4();
LAB_0146e3c0:
  func_0x00f78e5c(plVar29);
  if ((bRam0000000003eb485f & 1) == 0) {
    func_0x00f78a20(0x3d1fed8);
    bRam0000000003eb485f = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar24 = **(long **)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8);
  pcVar30 = Atlas_Stats_AtlasStats__OnlyTrackedInRaceContext;
  uVar36 = 1;
  puVar9 = &stack0xffffffffffffff30;
  lVar19 = extraout_x1;
  do {
    *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar31;
    *(code **)(puVar9 + -8) = pcVar30;
    if (lVar19 != 0) {
      uVar18 = 0;
      uVar26 = (ulong)*(uint *)(lVar19 + 0x18);
      uVar22 = (ulong)(int)*(uint *)(lVar19 + 0x18);
      uVar20 = uVar22;
      if ((long)uVar22 < 1) {
        uVar20 = 0;
      }
      if (uVar26 != 1 && (long)(uVar26 << 0x20) < 0x100000001) {
code_r0x0146e468:
        return (ulong)((long)uVar22 <= (long)uVar18);
      }
      uVar18 = 0;
      while (uVar18 != uVar26) {
        if (lVar24 == 0) goto LAB_0146e4ec;
        iVar14 = *(int *)(lVar24 + 0x18);
        if (iVar14 < 1) goto code_r0x0146e468;
        iVar15 = 0;
        while( true ) {
          if (iVar14 == iVar15) goto code_r0x0146e4e0;
          if (*(int *)(lVar19 + uVar18 * 4 + 0x20) == *(int *)(lVar24 + (long)iVar15 * 4 + 0x20))
          break;
          iVar15 = iVar15 + 1;
          if (iVar14 == iVar15) goto code_r0x0146e468;
        }
        uVar18 = uVar18 + 1;
        if (uVar18 == uVar20) goto code_r0x0146e468;
      }
code_r0x0146e4e0:
      uVar16 = func_0x00f78b24();
      func_0x00f78ac0(uVar16,0);
    }
LAB_0146e4ec:
    func_0x00f78af4();
    *(ulong *)(puVar9 + -0x40) = unaff_x22;
    *(long **)(puVar9 + -0x38) = plVar29;
    *(undefined8 *)(puVar9 + -0x30) = uVar36;
    *(long *)(puVar9 + -0x28) = lVar17;
    *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
    *(code **)(puVar9 + -0x18) = Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext;
    if ((bRam0000000003eb4860 & 1) == 0) {
      func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4860 = 1;
    }
    if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar24 = *(long *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8);
    pppppppuVar31 = *(undefined8 ********)(puVar9 + -0x20);
    pcVar30 = *(code **)(puVar9 + -0x18);
    uVar36 = *(undefined8 *)(puVar9 + -0x30);
    lVar17 = *(long *)(puVar9 + -0x28);
    unaff_x22 = *(ulong *)(puVar9 + -0x40);
    plVar29 = *(long **)(puVar9 + -0x38);
    puVar9 = puVar9 + -0x10;
    lVar19 = extraout_x1_00;
  } while( true );
}



// ============================================================
// RVA: 0x146ea3c | Atlas.Stats.AtlasStats.UpdateGameContextKartTracking
// ============================================================

/* WARNING: Possible PIC construction at 0x0146eab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015052b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015053d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015053d4) */
/* WARNING: Removing unreachable block (ram,0x015053e8) */
/* WARNING: Removing unreachable block (ram,0x0150533c) */
/* WARNING: Removing unreachable block (ram,0x01505350) */
/* WARNING: Removing unreachable block (ram,0x015052bc) */
/* WARNING: Removing unreachable block (ram,0x015052c8) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x015051e8) */
/* WARNING: Removing unreachable block (ram,0x015051f0) */
/* WARNING: Removing unreachable block (ram,0x015051f8) */
/* WARNING: Removing unreachable block (ram,0x01505204) */
/* WARNING: Removing unreachable block (ram,0x01505224) */
/* WARNING: Removing unreachable block (ram,0x01505210) */
/* WARNING: Removing unreachable block (ram,0x015051c0) */
/* WARNING: Removing unreachable block (ram,0x015051cc) */
/* WARNING: Removing unreachable block (ram,0x015051e0) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */

ulong Atlas_Stats_AtlasStats__UpdateGameContextKartTracking
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  ulong unaff_x19;
  undefined8 uVar24;
  long unaff_x20;
  long *plVar25;
  ulong unaff_x21;
  ulong unaff_x22;
  code *pcVar26;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar27;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong auStack_b0 [8];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  puVar6 = &stack0xfffffffffffffff0;
  if (*(char *)(param_4 + 0x5d) == '\0') {
    return param_4;
  }
  if (*(int *)(param_4 + 0x60) != 1) {
    return param_4;
  }
  if (*(long *)(param_4 + 0x18) == 0) {
    return param_4;
  }
  lVar12 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
  if (lVar12 != 0) {
    lVar12 = Atlas_Gameplay_Kart_KartPhysics__get_Events(lVar12,0);
    if ((*(long *)(param_4 + 0x18) != 0) &&
       (lVar13 = *(long *)(*(long *)(param_4 + 0x18) + 0x10), lVar13 != 0)) {
      uVar14 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar13,0);
      if (*(char *)(lVar12 + 0xe) == '\0') {
        uVar17 = uVar14;
        if (*(char *)(lVar12 + 2) != '\0') {
          if (*(long *)(param_4 + 0x10) == 0) goto Atlas_Stats_AtlasStats__ResetKartTracking;
          uVar17 = /*Atlas.Stats.StatsManager$$IncrementStat*/ func_0x015050bc(*(long *)(param_4 + 0x10),0x18,0);
        }
        if (*(char *)(lVar12 + 10) == '\0') {
          return uVar17;
        }
        iVar9 = *(int *)(uVar14 + 0x70);
        if (iVar9 == 3) {
          lVar13 = *(long *)(param_4 + 0x10);
          if (lVar13 != 0) {
            uVar17 = 0x13;
            goto code_r0x015050bc;
          }
        }
        else if (iVar9 == 2) {
          lVar13 = *(long *)(param_4 + 0x10);
          if (lVar13 != 0) {
            uVar17 = 0x12;
            goto code_r0x015050bc;
          }
        }
        else {
          if (iVar9 != 1) {
            return uVar17;
          }
          lVar13 = *(long *)(param_4 + 0x10);
          if (lVar13 != 0) {
            uVar17 = 0x11;
code_r0x015050bc:
            uVar14 = 0;
            *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
            *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            if (*(long *)(lVar13 + 0x20) == 0) {
code_r0x01505118:
              func_0x00f78af4();
            }
            else {
              /*Atlas.Stats.StatsData$$IncrementStat*/ func_0x01504a24();
              lVar12 = *(long *)(lVar13 + 0x28);
              unaff_x19 = uVar17;
              if (lVar12 == 0) goto code_r0x01505118;
              if ((uint)uVar17 < *(uint *)(lVar12 + 0x18)) {
                uVar14 = *(ulong *)(lVar12 + (long)(int)(uint)uVar17 * 8 + 0x20);
                if (uVar14 == 0) {
                  return 0;
                }
                uVar15 = *(undefined8 *)((long)register0x00000008 + -0x10);
                uVar29 = *(undefined8 *)((long)register0x00000008 + -8);
                uVar11 = *(undefined8 *)((long)register0x00000008 + -0x20);
                uVar24 = *(undefined8 *)((long)register0x00000008 + -0x18);
                puVar6 = (undefined1 *)register0x00000008;
                goto System_Action__Invoke;
              }
            }
            uVar15 = func_0x00f78b24();
            auVar34 = func_0x00f78ac0(uVar15,0);
            lVar12 = auVar34._0_8_;
            *(long *)((long)register0x00000008 + -0x40) = lVar13;
            *(ulong *)((long)register0x00000008 + -0x38) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x30) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(undefined **)((long)register0x00000008 + -0x28) =
                 &Atlas_Stats_StatsManager__DecrementStat;
            if (*(long *)(lVar12 + 0x20) == 0) {
code_r0x01505184:
              func_0x00f78af4();
            }
            else {
              /*Atlas.Stats.StatsData$$DecrementStat*/ func_0x01504a78();
              lVar13 = *(long *)(lVar12 + 0x28);
              unaff_x19 = auVar34._8_8_;
              if (lVar13 == 0) goto code_r0x01505184;
              if (auVar34._8_4_ < *(uint *)(lVar13 + 0x18)) {
                uVar14 = *(ulong *)(lVar13 + (long)(int)auVar34._8_4_ * 8 + 0x20);
                if (uVar14 == 0) {
                  return 0;
                }
                uVar15 = *(undefined8 *)((long)register0x00000008 + -0x30);
                uVar29 = *(undefined8 *)((long)register0x00000008 + -0x28);
                puVar6 = (undefined1 *)((long)register0x00000008 + -0x20);
                uVar11 = *(undefined8 *)((long)register0x00000008 + -0x40);
                uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
System_Action__Invoke:
                uVar18 = 0;
                *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
                *(undefined4 **)(puVar6 + -0x38) = unaff_x23;
                *(ulong *)(puVar6 + -0x30) = unaff_x22;
                *(ulong *)(puVar6 + -0x28) = unaff_x21;
                *(undefined8 *)(puVar6 + -0x20) = uVar11;
                *(undefined8 *)(puVar6 + -0x18) = uVar24;
                *(undefined8 *)(puVar6 + -0x10) = uVar15;
                *(undefined8 *)(puVar6 + -8) = uVar29;
                *(ulong *)(puVar6 + -0x58) = uVar14;
                lVar12 = *(long *)(uVar14 + 0x68);
                if (lVar12 == 0) {
                  puVar6 = puVar6 + -0x58;
                  lVar13 = 1;
                }
                else {
                  lVar13 = *(long *)(lVar12 + 0x18);
                  if (lVar13 == 0) {
                    return uVar14;
                  }
                  puVar6 = (undefined1 *)(lVar12 + 0x20);
                }
                lVar12 = 0;
                do {
                  lVar20 = *(long *)(puVar6 + lVar12 * 8);
                  pcVar26 = *(code **)(lVar20 + 0x10);
                  plVar25 = *(long **)(lVar20 + 0x20);
                  lVar20 = *(long *)(lVar20 + 0x28);
                  if (*(short *)(lVar20 + 0x48) == -1) {
                    func_0x00f78ad8(lVar20,uVar18);
                  }
                  iVar9 = func_0x00f78a4c(lVar20);
                  if (iVar9 == 0) {
                    if ((((plVar25 == (long *)0x0) || (*(short *)(lVar20 + 0x48) == -1)) ||
                        ((*(byte *)(*plVar25 + 0x115) & 1) != 0)) || (*(long *)(uVar14 + 0x18) == 0)
                       ) goto code_r0x02924d98;
                    iVar9 = func_0x00f78a44(lVar20);
                    iVar10 = func_0x00f78ec0(lVar20);
                    if (iVar9 == 0) {
                      uVar2 = *(ushort *)(lVar20 + 0x48);
                      if (iVar10 == 0) {
                        lVar20 = *plVar25 + (ulong)uVar2 * 0x10;
                        auVar34 = (**(code **)(lVar20 + 0x138))
                                            (plVar25,*(undefined8 *)(lVar20 + 0x140));
                        goto code_r0x02924da4;
                      }
                      lVar20 = func_0x00f78a48(lVar20);
                      lVar21 = *plVar25;
                      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12a);
                      if (uVar17 != 0) {
                        piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) == lVar20) {
                            puVar16 = (undefined8 *)
                                      (lVar21 + (long)(int)(*piVar23 + (uint)uVar2) * 0x10 + 0x138);
                            goto code_r0x02924e68;
                          }
                          piVar23 = piVar23 + 4;
                          uVar17 = uVar17 - 1;
                        } while (uVar17 != 0);
                      }
                      puVar16 = (undefined8 *)func_0x00fac1f0(plVar25,lVar20,(ulong)uVar2);
code_r0x02924e68:
                      pcVar26 = (code *)*puVar16;
                      puVar16 = (undefined8 *)puVar16[1];
                    }
                    else {
                      if (iVar10 == 0) {
                        uVar15 = *(undefined8 *)
                                  (*plVar25 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar21 = *plVar25;
                        uVar17 = (ulong)*(ushort *)(lVar21 + 0x12a);
                        if (uVar17 != 0) {
                          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar23 + -2) == *(long *)(lVar20 + 0x18)) {
                              lVar21 = lVar21 + (long)(int)(*piVar23 +
                                                           (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x02924e40;
                            }
                            piVar23 = piVar23 + 4;
                            uVar17 = uVar17 - 1;
                          } while (uVar17 != 0);
                        }
                        lVar21 = func_0x00fac1f0(plVar25);
code_r0x02924e40:
                        uVar15 = *(undefined8 *)(lVar21 + 8);
                      }
                      puVar16 = (undefined8 *)func_0x00f78acc(uVar15,lVar20);
                      pcVar26 = (code *)*puVar16;
                    }
                    auVar34 = (*pcVar26)(plVar25,puVar16);
                  }
                  else if (*(char *)(lVar20 + 0x4a) == '\0') {
                    auVar34 = (*pcVar26)(lVar20);
                  }
                  else {
code_r0x02924d98:
                    auVar34 = (*pcVar26)(plVar25,lVar20);
                  }
code_r0x02924da4:
                  uVar18 = auVar34._8_8_;
                  lVar12 = lVar12 + 1;
                  if (lVar12 == lVar13) {
                    return auVar34._0_8_;
                  }
                } while( true );
              }
            }
            uVar15 = func_0x00f78b24();
            auVar31 = func_0x00f78ac0(uVar15,0);
            auVar5 = auVar31._0_12_;
            lVar13 = auVar31._0_8_;
            auVar34._8_8_ = unaff_x19;
            auVar34._0_8_ = lVar13;
            puVar7 = (undefined1 *)((long)register0x00000008 + -0x70);
            *(ulong *)((long)register0x00000008 + -0x70) = unaff_x22;
            *(ulong *)((long)register0x00000008 + -0x68) = unaff_x21;
            *(long *)((long)register0x00000008 + -0x60) = lVar12;
            *(ulong *)((long)register0x00000008 + -0x58) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x50) =
                 (undefined1 *)((long)register0x00000008 + -0x30);
            *(undefined **)((long)register0x00000008 + -0x48) = &Atlas_Stats_StatsManager__SetStat;
            puVar6 = (undefined1 *)((long)register0x00000008 + -0x50);
            lVar12 = *(long *)(lVar13 + 0x20);
            if (lVar12 == 0) {
              func_0x00f78af4();
              uVar15 = func_0x00f78b24();
              auVar32 = func_0x00f78ac0(uVar15,0);
              auVar31._8_8_ = auVar32._8_8_;
              auVar31._0_8_ = lVar13;
              auVar5 = auVar31._0_12_;
              *(undefined1 **)((long)register0x00000008 + -0x80) = puVar6;
              *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_Stats_StatsManager__GetStat
              ;
              lVar12 = *(long *)(auVar32._0_8_ + 0x20);
              if (lVar12 == 0) {
                auVar31 = func_0x00f78af4();
                auVar32._8_8_ = auVar31._8_8_;
                auVar32._0_8_ = lVar13;
                auVar5 = auVar32._0_12_;
                *(undefined1 **)((long)register0x00000008 + -0x90) =
                     (undefined1 *)((long)register0x00000008 + -0x80);
                *(undefined **)((long)register0x00000008 + -0x88) =
                     &Atlas_Stats_StatsManager__GetTransactionStat;
                lVar12 = *(long *)(auVar31._0_8_ + 0x18);
                if (lVar12 == 0) {
                  auVar31 = func_0x00f78af4();
                  auVar3._8_8_ = auVar31._8_8_;
                  auVar3._0_8_ = lVar13;
                  auVar5 = auVar3._0_12_;
                  puVar6 = (undefined1 *)((long)register0x00000008 + -0xa0);
                  *(undefined1 **)((long)register0x00000008 + -0xa0) =
                       (undefined1 *)((long)register0x00000008 + -0x90);
                  *(undefined **)((long)register0x00000008 + -0x98) =
                       &Atlas_Stats_StatsManager__GetCommittedStat;
                  lVar12 = *(long *)(auVar31._0_8_ + 0x10);
                  if (lVar12 == 0) {
                    puVar28 = &Atlas_Stats_StatsManager__GetGlobalStat;
                    auVar33 = func_0x00f78af4();
                    puVar8 = (undefined1 *)((long)register0x00000008 + -0xa0);
                    while( true ) {
                      auVar5 = auVar33._0_12_;
                      unaff_x19 = auVar33._8_8_;
                      lVar13 = auVar33._0_8_;
                      auVar4._8_8_ = auVar34._8_8_;
                      auVar4._0_8_ = lVar13;
                      puVar7 = puVar8 + -0x30;
                      *(ulong *)(puVar8 + -0x30) = unaff_x22;
                      *(ulong *)(puVar8 + -0x28) = unaff_x21;
                      *(undefined1 (*) [16])(puVar8 + -0x20) = auVar34;
                      *(undefined1 **)(puVar8 + -0x10) = puVar6;
                      *(undefined **)(puVar8 + -8) = puVar28;
                      puVar6 = puVar8 + -0x10;
                      lVar12 = *(long *)(lVar13 + 0x10);
                      if (lVar12 != 0) break;
                      auVar31 = func_0x00f78af4();
                      unaff_x19 = auVar31._8_8_;
                      puVar7 = puVar8 + -0x70;
                      *(undefined8 *)(puVar8 + -0x70) = unaff_x24;
                      *(undefined4 **)(puVar8 + -0x68) = unaff_x23;
                      *(ulong *)(puVar8 + -0x60) = unaff_x22;
                      *(ulong *)(puVar8 + -0x58) = unaff_x21;
                      *(long *)(puVar8 + -0x50) = lVar13;
                      *(long *)(puVar8 + -0x48) = auVar34._8_8_;
                      *(undefined1 **)(puVar8 + -0x40) = puVar6;
                      *(undefined **)(puVar8 + -0x38) =
                           &Atlas_Stats_StatsManager__GetSummedCommittedStats;
                      puVar6 = puVar8 + -0x40;
                      if (unaff_x19 == 0) {
code_r0x01505370:
                        func_0x00f78af4();
                      }
                      else {
                        if ((int)*(ulong *)(unaff_x19 + 0x18) < 1) {
                          return 0;
                        }
                        unaff_x21 = 0;
                        unaff_x22 = 0;
                        unaff_x23 = (undefined4 *)(unaff_x19 + 0x20);
                        auVar4 = auVar31;
                        if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) != 0) {
                          lVar12 = *(long *)(auVar31._0_8_ + 0x10);
                          if (lVar12 == 0) goto code_r0x01505370;
                          auVar5._8_4_ = *unaff_x23;
                          auVar5._0_8_ = auVar31._0_8_;
                          puVar28 = &UNK_0150533c;
                          goto code_r0x01504b20;
                        }
                      }
                      uVar15 = func_0x00f78b24();
                      auVar34 = func_0x00f78ac0(uVar15,0);
                      unaff_x19 = auVar34._8_8_;
                      puVar7 = puVar8 + -0xb0;
                      *(undefined8 *)(puVar8 + -0xb0) = unaff_x24;
                      *(undefined4 **)(puVar8 + -0xa8) = unaff_x23;
                      *(ulong *)(puVar8 + -0xa0) = unaff_x22;
                      *(ulong *)(puVar8 + -0x98) = unaff_x21;
                      *(undefined1 (*) [16])(puVar8 + -0x90) = auVar4;
                      *(undefined1 **)(puVar8 + -0x80) = puVar6;
                      *(undefined **)(puVar8 + -0x78) =
                           &Atlas_Stats_StatsManager__GetSummedTransactionStats;
                      puVar6 = puVar8 + -0x80;
                      if (unaff_x19 == 0) {
code_r0x01505408:
                        func_0x00f78af4();
                      }
                      else {
                        if ((int)*(ulong *)(unaff_x19 + 0x18) < 1) {
                          return 0;
                        }
                        unaff_x21 = 0;
                        unaff_x22 = 0;
                        unaff_x23 = (undefined4 *)(unaff_x19 + 0x20);
                        auVar4 = auVar34;
                        if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) != 0) {
                          lVar12 = *(long *)(auVar34._0_8_ + 0x18);
                          if (lVar12 == 0) goto code_r0x01505408;
                          auVar5._8_4_ = *unaff_x23;
                          auVar5._0_8_ = auVar34._0_8_;
                          puVar28 = &UNK_015053d4;
                          goto code_r0x01504b20;
                        }
                      }
                      uVar15 = func_0x00f78b24();
                      auVar34 = func_0x00f78ac0(uVar15,0);
                      lVar12 = auVar34._8_8_;
                      *(undefined8 *)(puVar8 + -0xf0) = unaff_x24;
                      *(undefined4 **)(puVar8 + -0xe8) = unaff_x23;
                      *(ulong *)(puVar8 + -0xe0) = unaff_x22;
                      *(ulong *)(puVar8 + -0xd8) = unaff_x21;
                      *(undefined1 (*) [16])(puVar8 + -0xd0) = auVar4;
                      *(undefined1 **)(puVar8 + -0xc0) = puVar6;
                      *(undefined **)(puVar8 + -0xb8) =
                           &Atlas_Stats_StatsManager__GetSummedGlobalStats;
                      puVar6 = puVar8 + -0xc0;
                      if (lVar12 == 0) {
code_r0x015054a8:
                        uVar15 = func_0x00f78af4();
                        *(ulong *)(puVar8 + -0x120) = unaff_x22;
                        *(ulong *)(puVar8 + -0x118) = unaff_x21;
                        *(undefined1 (*) [16])(puVar8 + -0x110) = auVar4;
                        *(undefined1 **)(puVar8 + -0x100) = puVar6;
                        *(undefined **)(puVar8 + -0xf8) =
                             &Atlas_Stats_StatsManager__GetStatFromString;
                        if ((bRam0000000003eb4d0b & 1) == 0) {
                          func_0x00f78a20(0x3d24d58);
                          bRam0000000003eb4d0b = 1;
                        }
                        *(undefined4 *)(puVar8 + -0x124) = 0;
                        if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar15,puVar8 + -0x124);
                        return (ulong)*(uint *)(puVar8 + -0x124);
                      }
                      if ((int)*(ulong *)(lVar12 + 0x18) < 1) {
                        return 0;
                      }
                      unaff_x21 = 0;
                      unaff_x22 = 0;
                      unaff_x23 = (undefined4 *)(lVar12 + 0x20);
                      if ((*(ulong *)(lVar12 + 0x18) & 0xffffffff) == 0) {
                        uVar15 = func_0x00f78b24();
                        func_0x00f78ac0(uVar15,0);
                        auVar4 = auVar34;
                        goto code_r0x015054a8;
                      }
                      auVar33._8_4_ = *unaff_x23;
                      auVar33._0_8_ = auVar34._0_8_;
                      auVar33._12_4_ = 0;
                      puVar28 = &UNK_01505468;
                      puVar8 = puVar8 + -0xf0;
                    }
                    puVar28 = &UNK_015052bc;
                  }
                  else {
                    puVar7 = (undefined1 *)((long)register0x00000008 + -0x90);
                    puVar6 = *(undefined1 **)((long)register0x00000008 + -0xa0);
                    puVar28 = *(undefined **)((long)register0x00000008 + -0x98);
                  }
                }
                else {
                  puVar7 = (undefined1 *)((long)register0x00000008 + -0x80);
                  puVar6 = *(undefined1 **)((long)register0x00000008 + -0x90);
                  puVar28 = *(undefined **)((long)register0x00000008 + -0x88);
                }
              }
              else {
                puVar7 = (undefined1 *)((long)register0x00000008 + -0x70);
                puVar6 = *(undefined1 **)((long)register0x00000008 + -0x80);
                puVar28 = *(undefined **)((long)register0x00000008 + -0x78);
              }
            }
            else {
              puVar28 = &UNK_015051c0;
              unaff_x19 = auVar31._8_8_;
              unaff_x22 = uVar14;
            }
code_r0x01504b20:
            *(undefined1 **)(puVar7 + -0x10) = puVar6;
            *(undefined **)(puVar7 + -8) = puVar28;
            lVar12 = *(long *)(lVar12 + 0x10);
            if (lVar12 == 0) {
              func_0x00f78af4();
            }
            else if (auVar5._8_4_ < *(uint *)(lVar12 + 0x18)) {
              return (ulong)*(uint *)(lVar12 + (long)(int)auVar5._8_4_ * 4 + 0x20);
            }
            uVar15 = func_0x00f78b24();
            auVar34 = func_0x00f78ac0(uVar15,0);
            lVar12 = auVar34._8_8_;
            uVar17 = auVar34._0_8_;
            *(undefined8 *)(puVar7 + -0x50) = unaff_x24;
            *(undefined4 **)(puVar7 + -0x48) = unaff_x23;
            *(ulong *)(puVar7 + -0x40) = unaff_x22;
            *(ulong *)(puVar7 + -0x38) = unaff_x21;
            *(long *)(puVar7 + -0x30) = auVar5._0_8_;
            *(ulong *)(puVar7 + -0x28) = unaff_x19;
            *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
            *(undefined **)(puVar7 + -0x18) = &Atlas_Stats_StatsData__UpdateToLargestValues;
            uVar14 = uVar17;
            if ((bRam0000000003eb4d06 & 1) == 0) {
              uVar14 = func_0x00f78a20(0x3d1f100);
              bRam0000000003eb4d06 = 1;
            }
            lVar13 = *(long *)(uVar17 + 0x10);
            if (((lVar13 != 0) && (lVar12 != 0)) && (*(long *)(lVar12 + 0x10) != 0)) {
              iVar9 = *(int *)(lVar13 + 0x18);
              unaff_x22 = *(ulong *)(*(long *)(lVar12 + 0x10) + 0x18);
              if (iVar9 < (int)unaff_x22) {
                lVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
                uVar14 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar17 + 0x10),lVar13,iVar9,0);
                *(long *)(uVar17 + 0x10) = lVar13;
              }
              if (0 < (int)unaff_x22) {
                if (lVar13 == 0) goto code_r0x01504c70;
                uVar17 = 0;
                uVar1 = *(uint *)(lVar13 + 0x18);
                do {
                  if (uVar1 == uVar17) {
code_r0x01504c64:
                    uVar15 = func_0x00f78b24();
                    func_0x00f78ac0(uVar15,0);
                    goto code_r0x01504c70;
                  }
                  lVar20 = *(long *)(lVar12 + 0x10);
                  if (lVar20 == 0) goto code_r0x01504c70;
                  if ((*(uint *)(lVar20 + 0x18) <= uVar17) || (uVar1 <= uVar17))
                  goto code_r0x01504c64;
                  iVar9 = *(int *)(lVar13 + 0x20 + uVar17 * 4);
                  iVar10 = *(int *)(lVar20 + uVar17 * 4 + 0x20);
                  if (iVar9 <= iVar10) {
                    iVar9 = iVar10;
                  }
                  *(int *)(lVar13 + 0x20 + uVar17 * 4) = iVar9;
                  uVar17 = uVar17 + 1;
                } while ((unaff_x22 & 0xffffffff) != uVar17);
              }
              return uVar14;
            }
code_r0x01504c70:
            func_0x00f78af4();
            *(ulong *)(puVar7 + -0x80) = unaff_x22;
            *(long *)(puVar7 + -0x78) = lVar13;
            *(undefined1 (*) [16])(puVar7 + -0x70) = auVar34;
            *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x20;
            *(undefined **)(puVar7 + -0x58) = &Atlas_Stats_StatsData__Clone;
            if ((bRam0000000003eb4d07 & 1) == 0) {
              func_0x00f78a20(0x3d24d50);
              bRam0000000003eb4d07 = 1;
            }
            uVar14 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
            return uVar14;
          }
        }
      }
      else {
        lVar13 = *(long *)(param_4 + 0x10);
        if (lVar13 != 0) {
          uVar17 = 0x1a;
          unaff_x30 = 0x146eab8;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          unaff_x19 = param_4;
          unaff_x20 = lVar12;
          unaff_x21 = uVar14;
          unaff_x29 = puVar6;
          goto code_r0x015050bc;
        }
      }
    }
  }
Atlas_Stats_AtlasStats__ResetKartTracking:
  lVar12 = func_0x00f78af4();
  puStack_38 = &Atlas_Stats_AtlasStats__EndGameContextKartTracking;
  ppuVar27 = &puStack_40;
  plVar25 = (long *)0x3eb4000;
  puStack_40 = puVar6;
  if ((bRam0000000003eb4865 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d524d8);
    func_0x00f78a20(0x3d3c050);
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb4865 = 1;
  }
  if (*(long *)(lVar12 + 0x20) == 0) {
LAB_0146e360:
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x28) = 0;
    uVar30 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar12 + 0x2c) = uVar30;
    *(undefined4 *)(lVar12 + 0x30) = param_2;
    *(undefined4 *)(lVar12 + 0x34) = param_3;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined8 *)(lVar12 + 0x40) = 0;
    *(undefined4 *)(lVar12 + 0x48) = 0;
    if (*(long *)(lVar12 + 0x50) != 0) {
      uVar14 = /*System.Collections.Generic.List<StringID>$$Clear*/ func_0x024663e0(*(long *)(lVar12 + 0x50),uRam0000000003d3c050);
      *(undefined4 *)(lVar12 + 0x58) = 0;
      *(undefined1 *)(lVar12 + 0x5c) = 0;
      *(undefined4 *)(lVar12 + 0x60) = 0;
      return uVar14;
    }
  }
  else if (*(long *)(lVar12 + 0x18) != 0) {
    plVar25 = *(long **)(*(long *)(lVar12 + 0x18) + 0x68);
    unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar12,uRam0000000003d524d8,0);
    if (plVar25 != (long *)0x0) {
      if ((*(byte *)(*plVar25 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300)) ||
         (*(long *)(*(long *)(*plVar25 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 +
                   -8) != /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) goto LAB_0146e3c0;
      Atlas_Gameplay_Kart_RaceKartAI__remove_OnLapCompleted(plVar25,unaff_x22,0);
      *(undefined8 *)(lVar12 + 0x20) = 0;
      goto LAB_0146e360;
    }
  }
  func_0x00f78af4();
LAB_0146e3c0:
  func_0x00f78e5c(plVar25);
  if ((bRam0000000003eb485f & 1) == 0) {
    func_0x00f78a20(0x3d1fed8);
    bRam0000000003eb485f = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar20 = **(long **)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8);
  pcVar26 = Atlas_Stats_AtlasStats__OnlyTrackedInRaceContext;
  uVar15 = 1;
  puVar6 = &stack0xffffffffffffff90;
  lVar13 = extraout_x1;
  do {
    *(undefined1 ***)(puVar6 + -0x10) = ppuVar27;
    *(code **)(puVar6 + -8) = pcVar26;
    if (lVar13 != 0) {
      uVar14 = 0;
      uVar22 = (ulong)*(uint *)(lVar13 + 0x18);
      uVar19 = (ulong)(int)*(uint *)(lVar13 + 0x18);
      uVar17 = uVar19;
      if ((long)uVar19 < 1) {
        uVar17 = 0;
      }
      if (uVar22 != 1 && (long)(uVar22 << 0x20) < 0x100000001) {
code_r0x0146e468:
        return (ulong)((long)uVar19 <= (long)uVar14);
      }
      uVar14 = 0;
      while (uVar14 != uVar22) {
        if (lVar20 == 0) goto LAB_0146e4ec;
        iVar9 = *(int *)(lVar20 + 0x18);
        if (iVar9 < 1) goto code_r0x0146e468;
        iVar10 = 0;
        while( true ) {
          if (iVar9 == iVar10) goto code_r0x0146e4e0;
          if (*(int *)(lVar13 + uVar14 * 4 + 0x20) == *(int *)(lVar20 + (long)iVar10 * 4 + 0x20))
          break;
          iVar10 = iVar10 + 1;
          if (iVar9 == iVar10) goto code_r0x0146e468;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 == uVar17) goto code_r0x0146e468;
      }
code_r0x0146e4e0:
      uVar11 = func_0x00f78b24();
      func_0x00f78ac0(uVar11,0);
    }
LAB_0146e4ec:
    func_0x00f78af4();
    *(ulong *)(puVar6 + -0x40) = unaff_x22;
    *(long **)(puVar6 + -0x38) = plVar25;
    *(undefined8 *)(puVar6 + -0x30) = uVar15;
    *(long *)(puVar6 + -0x28) = lVar12;
    *(undefined1 **)(puVar6 + -0x20) = puVar6 + -0x10;
    *(code **)(puVar6 + -0x18) = Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext;
    if ((bRam0000000003eb4860 & 1) == 0) {
      func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4860 = 1;
    }
    if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar20 = *(long *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8);
    ppuVar27 = *(undefined1 ***)(puVar6 + -0x20);
    pcVar26 = *(code **)(puVar6 + -0x18);
    uVar15 = *(undefined8 *)(puVar6 + -0x30);
    lVar12 = *(long *)(puVar6 + -0x28);
    unaff_x22 = *(ulong *)(puVar6 + -0x40);
    plVar25 = *(long **)(puVar6 + -0x38);
    puVar6 = puVar6 + -0x10;
    lVar13 = extraout_x1_00;
  } while( true );
}



// ============================================================
// RVA: 0x146eb4c | Atlas.Stats.AtlasStats.EndGameContextKartTracking
// ============================================================

ulong Atlas_Stats_AtlasStats__EndGameContextKartTracking
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x1;
  long lVar6;
  long extraout_x1_00;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 unaff_x22;
  undefined1 *puVar13;
  code *pcVar14;
  undefined4 uVar15;
  long alStack_80 [8];
  
  puVar13 = &stack0xfffffffffffffff0;
  plVar12 = (long *)0x3eb4000;
  if ((bRam0000000003eb4865 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d524d8);
    func_0x00f78a20(0x3d3c050);
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb4865 = 1;
  }
  if (*(long *)(param_4 + 0x20) == 0) {
LAB_0146e360:
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined4 *)(param_4 + 0x28) = 0;
    uVar15 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(param_4 + 0x2c) = uVar15;
    *(undefined4 *)(param_4 + 0x30) = param_2;
    *(undefined4 *)(param_4 + 0x34) = param_3;
    *(undefined8 *)(param_4 + 0x38) = 0;
    *(undefined8 *)(param_4 + 0x40) = 0;
    *(undefined4 *)(param_4 + 0x48) = 0;
    if (*(long *)(param_4 + 0x50) != 0) {
      uVar4 = /*System.Collections.Generic.List<StringID>$$Clear*/ func_0x024663e0(*(long *)(param_4 + 0x50),uRam0000000003d3c050);
      *(undefined4 *)(param_4 + 0x58) = 0;
      *(undefined1 *)(param_4 + 0x5c) = 0;
      *(undefined4 *)(param_4 + 0x60) = 0;
      return uVar4;
    }
  }
  else if (*(long *)(param_4 + 0x18) != 0) {
    plVar12 = *(long **)(*(long *)(param_4 + 0x18) + 0x68);
    unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,param_4,uRam0000000003d524d8,0);
    if (plVar12 != (long *)0x0) {
      if ((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 +
                   -8) != /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) goto LAB_0146e3c0;
      Atlas_Gameplay_Kart_RaceKartAI__remove_OnLapCompleted(plVar12,unaff_x22,0);
      *(undefined8 *)(param_4 + 0x20) = 0;
      goto LAB_0146e360;
    }
  }
  func_0x00f78af4();
LAB_0146e3c0:
  func_0x00f78e5c(plVar12);
  if ((bRam0000000003eb485f & 1) == 0) {
    func_0x00f78a20(0x3d1fed8);
    bRam0000000003eb485f = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = **(long **)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8);
  pcVar14 = Atlas_Stats_AtlasStats__OnlyTrackedInRaceContext;
  uVar11 = 1;
  puVar3 = &stack0xffffffffffffffc0;
  lVar6 = extraout_x1;
  do {
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(code **)(puVar3 + -8) = pcVar14;
    if (lVar6 != 0) {
      uVar4 = 0;
      uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
      uVar8 = (ulong)(int)*(uint *)(lVar6 + 0x18);
      uVar1 = uVar8;
      if ((long)uVar8 < 1) {
        uVar1 = 0;
      }
      if (uVar9 != 1 && (long)(uVar9 << 0x20) < 0x100000001) {
code_r0x0146e468:
        return (ulong)((long)uVar8 <= (long)uVar4);
      }
      uVar4 = 0;
      while (uVar4 != uVar9) {
        if (lVar7 == 0) goto LAB_0146e4ec;
        iVar2 = *(int *)(lVar7 + 0x18);
        if (iVar2 < 1) goto code_r0x0146e468;
        iVar10 = 0;
        while( true ) {
          if (iVar2 == iVar10) goto code_r0x0146e4e0;
          if (*(int *)(lVar6 + uVar4 * 4 + 0x20) == *(int *)(lVar7 + (long)iVar10 * 4 + 0x20))
          break;
          iVar10 = iVar10 + 1;
          if (iVar2 == iVar10) goto code_r0x0146e468;
        }
        uVar4 = uVar4 + 1;
        if (uVar4 == uVar1) goto code_r0x0146e468;
      }
code_r0x0146e4e0:
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
    }
LAB_0146e4ec:
    func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x40) = unaff_x22;
    *(long **)(puVar3 + -0x38) = plVar12;
    *(undefined8 *)(puVar3 + -0x30) = uVar11;
    *(long *)(puVar3 + -0x28) = param_4;
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x18) = Atlas_Stats_AtlasStats__OnlyTrackedInBattleContext;
    if ((bRam0000000003eb4860 & 1) == 0) {
      func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4860 = 1;
    }
    if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = *(long *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8);
    puVar13 = *(undefined1 **)(puVar3 + -0x20);
    pcVar14 = *(code **)(puVar3 + -0x18);
    uVar11 = *(undefined8 *)(puVar3 + -0x30);
    param_4 = *(long *)(puVar3 + -0x28);
    unaff_x22 = *(undefined8 *)(puVar3 + -0x40);
    plVar12 = *(long **)(puVar3 + -0x38);
    puVar3 = puVar3 + -0x10;
    lVar6 = extraout_x1_00;
  } while( true );
}



// ============================================================
// RVA: 0x146eb54 | Atlas.Stats.AtlasStats.OnTournamentEnd
// ============================================================

/* WARNING: Possible PIC construction at 0x0146eb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015052b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015053d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ec48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ed20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ed54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ed9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ee7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ec20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f298) */
/* WARNING: Removing unreachable block (ram,0x0146f2a0) */
/* WARNING: Removing unreachable block (ram,0x024660f8) */
/* WARNING: Removing unreachable block (ram,0x0246610c) */
/* WARNING: Removing unreachable block (ram,0x02466124) */
/* WARNING: Removing unreachable block (ram,0x02466154) */
/* WARNING: Removing unreachable block (ram,0x02466158) */
/* WARNING: Removing unreachable block (ram,0x02466160) */
/* WARNING: Removing unreachable block (ram,0x0246618c) */
/* WARNING: Removing unreachable block (ram,0x024661d8) */
/* WARNING: Removing unreachable block (ram,0x024661f4) */
/* WARNING: Removing unreachable block (ram,0x024661fc) */
/* WARNING: Removing unreachable block (ram,0x02466264) */
/* WARNING: Removing unreachable block (ram,0x02466200) */
/* WARNING: Removing unreachable block (ram,0x0246626c) */
/* WARNING: Removing unreachable block (ram,0x0246633c) */
/* WARNING: Removing unreachable block (ram,0x02466214) */
/* WARNING: Removing unreachable block (ram,0x0246616c) */
/* WARNING: Removing unreachable block (ram,0x0146f0f4) */
/* WARNING: Removing unreachable block (ram,0x0146f0fc) */
/* WARNING: Removing unreachable block (ram,0x0146f104) */
/* WARNING: Removing unreachable block (ram,0x0146f128) */
/* WARNING: Removing unreachable block (ram,0x0146f14c) */
/* WARNING: Removing unreachable block (ram,0x0146f15c) */
/* WARNING: Removing unreachable block (ram,0x0146f164) */
/* WARNING: Removing unreachable block (ram,0x0146f138) */
/* WARNING: Removing unreachable block (ram,0x0146f140) */
/* WARNING: Removing unreachable block (ram,0x0146f114) */
/* WARNING: Removing unreachable block (ram,0x0146f11c) */
/* WARNING: Removing unreachable block (ram,0x0146ee80) */
/* WARNING: Removing unreachable block (ram,0x0146ee84) */
/* WARNING: Removing unreachable block (ram,0x0146ee90) */
/* WARNING: Removing unreachable block (ram,0x0146ed58) */
/* WARNING: Removing unreachable block (ram,0x0146ed8c) */
/* WARNING: Removing unreachable block (ram,0x0146ed94) */
/* WARNING: Removing unreachable block (ram,0x0146ed6c) */
/* WARNING: Removing unreachable block (ram,0x0146ed74) */
/* WARNING: Removing unreachable block (ram,0x0146ed7c) */
/* WARNING: Removing unreachable block (ram,0x0146ed98) */
/* WARNING: Removing unreachable block (ram,0x0146ed24) */
/* WARNING: Removing unreachable block (ram,0x0146ed28) */
/* WARNING: Removing unreachable block (ram,0x0146ed30) */
/* WARNING: Removing unreachable block (ram,0x0146ed38) */
/* WARNING: Removing unreachable block (ram,0x0146ed44) */
/* WARNING: Removing unreachable block (ram,0x0146ed4c) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Removing unreachable block (ram,0x015053d4) */
/* WARNING: Removing unreachable block (ram,0x015053e8) */
/* WARNING: Removing unreachable block (ram,0x0150533c) */
/* WARNING: Removing unreachable block (ram,0x01505350) */
/* WARNING: Removing unreachable block (ram,0x015052bc) */
/* WARNING: Removing unreachable block (ram,0x015052c8) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x015051e8) */
/* WARNING: Removing unreachable block (ram,0x015051f0) */
/* WARNING: Removing unreachable block (ram,0x015051f8) */
/* WARNING: Removing unreachable block (ram,0x01505204) */
/* WARNING: Removing unreachable block (ram,0x01505224) */
/* WARNING: Removing unreachable block (ram,0x01505210) */
/* WARNING: Removing unreachable block (ram,0x015051c0) */
/* WARNING: Removing unreachable block (ram,0x015051cc) */
/* WARNING: Removing unreachable block (ram,0x015051e0) */
/* WARNING: Removing unreachable block (ram,0x0146eb84) */
/* WARNING: Removing unreachable block (ram,0x0146eb8c) */
/* WARNING: Removing unreachable block (ram,0x0146eb94) */
/* WARNING: Removing unreachable block (ram,0x0146ec24) */
/* WARNING: Removing unreachable block (ram,0x0146ec28) */
/* WARNING: Removing unreachable block (ram,0x0146ec30) */

dword * Atlas_Stats_AtlasStats__OnTournamentEnd
                  (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,dword *param_4,
                  undefined8 param_5,dword *param_6,dword *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *******pppppppuVar10;
  undefined1 *puVar11;
  dword **ppdVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar18;
  long lVar19;
  dword *pdVar20;
  dword *pdVar21;
  long *plVar22;
  dword *pdVar23;
  undefined8 uVar24;
  int iVar17;
  undefined8 uVar25;
  undefined8 *puVar26;
  dword *pdVar27;
  undefined8 uVar29;
  dword *pdVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  int *piVar35;
  undefined8 uVar36;
  undefined8 unaff_x20;
  undefined8 uVar37;
  undefined8 unaff_x21;
  dword *unaff_x22;
  code *pcVar38;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar39;
  undefined8 *******pppppppuVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [12];
  undefined8 ******ppppppuStack_190;
  undefined *puStack_188;
  dword *pdStack_180;
  undefined8 uStack_178;
  long lStack_170;
  dword *pdStack_168;
  undefined8 ******ppppppuStack_160;
  undefined *puStack_158;
  dword *pdStack_150;
  dword *pdStack_148;
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  dword *pdStack_130;
  dword *pdStack_128;
  undefined8 ******ppppppuStack_120;
  undefined *puStack_118;
  long *plStack_110;
  dword *pdStack_108;
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  dword *pdStack_e0;
  dword *pdStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined8 ******ppppppuStack_60;
  undefined *puStack_58;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  dword *pdVar28;
  
  auVar3._8_8_ = unaff_x21;
  auVar3._0_8_ = unaff_x20;
  auVar49._8_8_ = unaff_x21;
  auVar49._0_8_ = param_5;
  uVar43 = (undefined4)((ulong)param_8 >> 0x20);
  uVar16 = (uint)param_8;
  if (*(char *)((long)param_4 + 0x5d) == '\0') {
    return param_4;
  }
  lVar19 = *(long *)(param_4 + 4);
  if (lVar19 == 0) {
    auVar50 = func_0x00f78af4();
    auVar49._8_8_ = param_7;
    auVar49._0_8_ = param_9;
    auVar4._8_8_ = param_7;
    auVar4._0_8_ = param_9;
    auVar2._8_8_ = param_7;
    auVar2._0_8_ = param_9;
    iVar17 = auVar50._8_4_;
    pdVar23 = auVar50._0_8_;
    ppdVar12 = (dword **)&stack0xffffffffffffffb0;
    puStack_28 = &Atlas_Stats_AtlasStats__OnArcadeEnd;
    pppppppuVar40 = &ppppppuStack_30;
    if (iVar17 == 0) {
      return pdVar23;
    }
    if (*(char *)((long)pdVar23 + 0x5d) == '\0') {
      return pdVar23;
    }
    if ((uVar16 & 1) != 0) {
      return pdVar23;
    }
    ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
    if (iVar17 == 3) {
      lVar19 = *(long *)(pdVar23 + 4);
      if (lVar19 != 0) {
        pdVar27 = (dword *)(section_00000068.segname + 8);
        puVar41 = &UNK_0146ec24;
        goto code_r0x015050bc;
      }
    }
    else if (iVar17 == 2) {
      lVar19 = *(long *)(pdVar23 + 4);
      if (lVar19 != 0) {
        pdVar27 = (dword *)(section_00000068.segname + 7);
code_r0x0146ec44:
        ppdVar12 = (dword **)&stack0xffffffffffffffb0;
        param_6 = unaff_x22;
        puVar41 = &UNK_0146ec4c;
        auVar49 = auVar2;
        goto code_r0x015050bc;
      }
    }
    else if (iVar17 == 1) {
      lVar19 = *(long *)(pdVar23 + 4);
      if (lVar19 != 0) {
        pdVar27 = (dword *)(section_00000068.segname + 6);
        goto code_r0x0146ec44;
      }
    }
    else {
      if ((int)param_7 != 0) {
        return pdVar23;
      }
      iVar17 = (int)param_9;
      if (iVar17 == 8) {
        lVar19 = *(long *)(pdVar23 + 4);
        if (lVar19 != 0) {
          pdVar27 = (dword *)(section_00000068.segname + 10);
          goto code_r0x0146eca4;
        }
      }
      else if (iVar17 == 7) {
        lVar19 = *(long *)(pdVar23 + 4);
        if (lVar19 != 0) {
          pdVar27 = (dword *)(section_00000068.segname + 0xb);
          goto code_r0x0146eca4;
        }
      }
      else {
        if (iVar17 != 6) {
          return pdVar23;
        }
        lVar19 = *(long *)(pdVar23 + 4);
        if (lVar19 != 0) {
          pdVar27 = (dword *)(section_00000068.segname + 0xc);
code_r0x0146eca4:
          ppdVar12 = (dword **)&stack0xffffffffffffffe0;
          pdVar23 = param_4;
          param_6 = unaff_x22;
          pppppppuVar40 = (undefined8 *******)&stack0xfffffffffffffff0;
          puVar41 = &Atlas_Stats_AtlasStats__OnArcadeEnd;
          auVar49 = auVar3;
          goto code_r0x015050bc;
        }
      }
    }
    auVar49 = func_0x00f78af4();
    puVar13 = auVar49._8_8_;
    pdVar27 = auVar49._0_8_;
    ppdVar12 = (dword **)&stack0xffffffffffffff80;
    puStack_58 = &Atlas_Stats_AtlasStats__OnUsableHitPlayer;
    if ((*(char *)((long)pdVar27 + 0x5d) == '\0') || (pdVar27[0x18] != 1)) {
      return pdVar27;
    }
    pdVar21 = param_6;
    pdVar30 = param_7;
    ppppppuStack_60 = pppppppuVar40;
    if (param_6 != (dword *)0x0) {
      iVar17 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(param_6,0);
      if ((param_6 == (dword *)puVar13) || (iVar17 == 0)) {
        if (puVar13 != (undefined1 *)0x0) {
          pdVar20 = (dword *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(puVar13,0);
          if ((int)pdVar20 == 0) {
            return pdVar20;
          }
          if ((param_7 != (dword *)0x0) && (lVar19 = *(long *)(pdVar27 + 4), lVar19 != 0)) {
            pdVar27 = (dword *)(ulong)param_7[0x17];
            ppdVar12 = (dword **)&stack0xffffffffffffffb0;
            param_6 = unaff_x22;
            pppppppuVar40 = (undefined8 *******)ppppppuStack_60;
            puVar41 = puStack_58;
            auVar49 = auVar4;
            goto code_r0x015050bc;
          }
        }
      }
      else if ((param_7 != (dword *)0x0) && (lVar19 = *(long *)(pdVar27 + 4), lVar19 != 0)) {
        pdVar27 = (dword *)(ulong)param_7[0x16];
        pdVar23 = param_7;
        pppppppuVar40 = &ppppppuStack_60;
        puVar41 = &UNK_0146ed24;
        goto code_r0x015050bc;
      }
    }
    auVar44 = func_0x00f78af4();
    pdVar28 = auVar44._8_8_;
    pdVar20 = auVar44._0_8_;
    puStack_88 = &Atlas_Stats_AtlasStats__OnUsableHitShield;
    pdVar23 = (dword *)CONCAT44(uVar43,uVar16);
    auVar45._8_8_ = pdVar23;
    auVar45._0_8_ = pdVar30;
    unaff_x23 = (undefined4 *)0x3eb4000;
    pdVar27 = pdVar20;
    ppppppuStack_90 = &ppppppuStack_60;
    if ((bRam0000000003eb4862 & 1) == 0) {
      pdVar27 = (dword *)func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4862 = 1;
    }
    if ((*(char *)((long)pdVar20 + 0x5d) == '\0') || (pdVar20[0x18] != 1)) {
      return pdVar27;
    }
    if (pdVar28 == (dword *)0x0) {
      puVar41 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByShieldStat;
      auVar45 = func_0x00f78af4();
    }
    else {
      pdVar27 = (dword *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(pdVar28,0);
      if ((int)pdVar27 == 0) {
        return pdVar27;
      }
      if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar41 = &UNK_0146ee80;
    }
    plVar22 = auVar45._8_8_;
    pdVar27 = auVar45._0_8_;
    pdStack_e8 = pdVar30;
    pdStack_e0 = pdVar23;
    ppppppuStack_d0 = &ppppppuStack_90;
    puStack_c8 = puVar41;
    if ((bRam0000000003eb4864 & 1) == 0) {
      pdStack_f0 = pdVar28;
      pdStack_d8 = pdVar20;
      func_0x00f78a20(0x3d1fed8);
      auVar44._8_8_ = pdStack_f0;
      auVar44._0_8_ = pdStack_d8;
      bRam0000000003eb4864 = 1;
    }
    pdStack_f0 = auVar44._8_8_;
    pdStack_d8 = auVar44._0_8_;
    if (plVar22 == (long *)0x0) {
      auVar49 = func_0x00f78af4();
      pdVar30 = auVar49._0_8_;
      puStack_f8 = &Atlas_Stats_AtlasStats__OnUsableUsed;
      if ((*(char *)((long)pdVar30 + 0x5d) == '\0') || (pdVar30[0x18] != 1)) {
        return pdVar30;
      }
      pdVar20 = pdVar21;
      pdStack_108 = pdVar27;
      ppppppuStack_100 = &ppppppuStack_d0;
      param_6 = pdVar28;
      if (auVar49._8_8_ != 0) {
        plStack_110 = plVar22;
        pdVar23 = (dword *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer
                                     (auVar49._8_8_,0);
        auVar5._8_8_ = plStack_110;
        auVar5._0_8_ = pdVar21;
        auVar45._8_8_ = plStack_110;
        auVar45._0_8_ = pdVar21;
        auVar49._8_8_ = 0x3eb4000;
        auVar49._0_8_ = plStack_110;
        if ((int)pdVar23 == 0) {
          return pdVar23;
        }
        if ((pdVar21 != (dword *)0x0) &&
           (lVar19 = *(long *)(pdVar30 + 4), auVar45 = auVar5, lVar19 != 0)) {
          pdVar27 = (dword *)(ulong)pdVar21[0x18];
          ppdVar12 = &pdStack_f0;
          pdVar23 = pdStack_108;
          pppppppuVar40 = (undefined8 *******)ppppppuStack_100;
          puVar41 = puStack_f8;
          goto code_r0x015050bc;
        }
      }
      plStack_110 = auVar45._8_8_;
      auVar49 = func_0x00f78af4();
      pdVar27 = auVar49._0_8_;
      puStack_118 = &Atlas_Stats_AtlasStats__OnUsableHoppedOver;
      if ((*(char *)((long)pdVar27 + 0x5d) == '\0') || (pdVar27[0x18] != 1)) {
        return pdVar27;
      }
      pdVar23 = pdVar20;
      pdStack_130 = pdVar30;
      pdStack_128 = auVar45._0_8_;
      ppppppuStack_120 = &ppppppuStack_100;
      if (auVar49._8_8_ != 0) {
        pdVar21 = (dword *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer
                                     (auVar49._8_8_,0);
        auVar49._8_8_ = 0x3eb4000;
        auVar49._0_8_ = pdStack_130;
        if ((int)pdVar21 == 0) {
          return pdVar21;
        }
        iVar17 = (int)pdVar20;
        pdVar30 = pdVar20;
        if (iVar17 != 5) {
          if (iVar17 == 1) {
            lVar19 = *(long *)(pdVar27 + 4);
            if (lVar19 == 0) goto code_r0x0146f0a0;
            pdVar27 = (dword *)((long)&segment_command_00000020.maxprot + 1);
          }
          else {
            if (iVar17 != 0) {
              return pdVar21;
            }
            lVar19 = *(long *)(pdVar27 + 4);
            if (lVar19 == 0) goto code_r0x0146f0a0;
            pdVar27 = &segment_command_00000020.maxprot;
          }
code_r0x0146f090:
          ppdVar12 = (dword **)&plStack_110;
          pdVar23 = pdStack_128;
          pppppppuVar40 = (undefined8 *******)ppppppuStack_120;
          puVar41 = puStack_118;
          goto code_r0x015050bc;
        }
        lVar19 = *(long *)(pdVar27 + 4);
        if (lVar19 != 0) {
          pdVar27 = (dword *)((long)&segment_command_00000020.maxprot + 2);
          goto code_r0x0146f090;
        }
      }
code_r0x0146f0a0:
      auVar46 = func_0x00f78af4();
      lVar31 = auVar46._8_8_;
      auVar49._8_8_ = 0x3eb4000;
      auVar49._0_8_ = lVar31;
      pdVar20 = auVar46._0_8_;
      ppdVar12 = &pdStack_150;
      puStack_138 = &Atlas_Stats_AtlasStats__OnBoxHit;
      pdVar21 = pdVar20;
      if ((((*(char *)((long)pdVar20 + 0x5d) == '\0') || (lVar31 == 0)) || (pdVar20[0x18] != 1)) ||
         (pdStack_150 = pdVar30, pdStack_148 = pdVar27, ppppppuStack_140 = &ppppppuStack_120,
         pdVar21 = (dword *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(lVar31,0),
         (int)pdVar21 == 0)) {
        return pdVar21;
      }
      lVar19 = *(long *)(pdVar20 + 4);
      if (lVar19 != 0) {
        pdVar27 = &MACH_HEADER.sizeofcmds;
        puVar41 = &UNK_0146f0f4;
        pdVar23 = pdVar20;
        pppppppuVar40 = &ppppppuStack_140;
        goto code_r0x015050bc;
      }
      auVar49 = func_0x00f78af4();
      lVar19 = auVar49._8_8_;
      pdVar21 = auVar49._0_8_;
      ppdVar12 = &pdStack_180;
      uStack_178 = 0x3eb4000;
      puStack_158 = &Atlas_Stats_AtlasStats__OnKartEnterShortcut;
      pppppppuVar40 = &ppppppuStack_160;
      param_6 = (dword *)0x3eb4000;
      pdVar27 = pdVar21;
      pdStack_180 = pdVar28;
      ppppppuStack_160 = &ppppppuStack_140;
      if ((bRam0000000003eb4863 & 1) == 0) {
        lStack_170 = lVar31;
        pdStack_168 = pdVar20;
        func_0x00f78a20(0x3d3c048);
        func_0x00f78a20(0x3d3c058);
        pdVar27 = (dword *)func_0x00f78a20(0x3d24070);
        auVar46._8_8_ = lStack_170;
        auVar46._0_8_ = pdStack_168;
        bRam0000000003eb4863 = 1;
      }
      lStack_170 = auVar46._8_8_;
      pdStack_168 = auVar46._0_8_;
      if (((*(char *)((long)pdVar21 + 0x5d) == '\0') || (pdVar21[0x18] != 1)) ||
         (*(long *)(pdVar21 + 6) != lVar19)) {
        return pdVar27;
      }
      if (lVar19 != 0) {
        plVar22 = *(long **)(lVar19 + 0x68);
        if (plVar22 != (long *)0x0) {
          if ((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar22 + 300)) &&
             (*(long *)(*(long *)(*plVar22 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8
                       + -8) == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
            pdVar27 = (dword *)Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar22,0);
            auVar46._8_8_ = lStack_170;
            auVar46._0_8_ = pdStack_168;
            if ((int)pdVar27 < (int)pdVar21[0x16]) {
              return pdVar27;
            }
          }
        }
        lStack_170 = auVar46._8_8_;
        pdStack_168 = auVar46._0_8_;
        if ((pdVar23 != (dword *)0x0) && (*(long *)(pdVar21 + 0x14) != 0)) {
          pdVar27 = (dword *)/*System.Collections.Generic.List<StringID>$$Contains*/ func_0x02466428(*(long *)(pdVar21 + 0x14),*(undefined8 *)(pdVar23 + 6),
                                             uRam0000000003d3c058);
          auVar46._8_8_ = lStack_170;
          auVar46._0_8_ = pdStack_168;
          if (((ulong)pdVar27 & 1) != 0) {
            return pdVar27;
          }
          lVar19 = *(long *)(pdVar21 + 4);
          if (lVar19 != 0) {
            pdVar27 = (dword *)((long)&segment_command_00000020.flags + 3);
            puVar41 = &UNK_0146f298;
            goto code_r0x015050bc;
          }
        }
      }
      lStack_170 = auVar46._8_8_;
      pdStack_168 = auVar46._0_8_;
      auVar49 = func_0x00f78af4();
      pdVar27 = auVar49._0_8_;
      pppppppuVar10 = &ppppppuStack_190;
      pppppppuVar39 = &ppppppuStack_190;
      puStack_188 = &Atlas_Stats_AtlasStats__OnRespawn;
      if (auVar49._8_8_ != 0) {
        if (*(long *)(pdVar27 + 6) == *(long *)(auVar49._8_8_ + 0x10)) {
          *(undefined1 *)(pdVar27 + 0x17) = 1;
        }
        return pdVar27;
      }
      puVar41 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByNormalShieldStat;
      ppppppuStack_190 = pppppppuVar40;
      pdVar27 = (dword *)func_0x00f78af4();
    }
    else {
      iVar17 = (**(code **)(*plVar22 + 0x188))(plVar22,*(undefined8 *)(*plVar22 + 400));
      if (iVar17 == 6) {
        if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar11 = &stack0xffffffffffffff40;
        pdVar23 = pdStack_d8;
        pdVar21 = pdStack_e0;
        pppppppuVar40 = (undefined8 *******)ppppppuStack_d0;
        puVar41 = puStack_c8;
        goto code_r0x0146f334;
      }
      if (iVar17 != 3) {
        return (dword *)0x0;
      }
      if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pppppppuVar10 = (undefined8 *******)&stack0xffffffffffffff40;
      pdVar23 = pdStack_d8;
      pdVar21 = pdStack_e0;
      pppppppuVar39 = (undefined8 *******)ppppppuStack_d0;
      puVar41 = puStack_c8;
    }
    puVar11 = (undefined1 *)((long)pppppppuVar10 + -0x10);
    *(undefined8 ********)((long)pppppppuVar10 + -0x10) = pppppppuVar39;
    *(undefined **)((long)pppppppuVar10 + -8) = puVar41;
    if (pdVar27 != (dword *)0x0) {
      uVar16 = (**(code **)(*(long *)pdVar27 + 0x188))
                         (pdVar27,*(undefined8 *)(*(long *)pdVar27 + 400));
      if (uVar16 < 8) {
        pdVar23 = (dword *)(ulong)*(uint *)(&UNK_033f831c + (long)(int)uVar16 * 4);
      }
      else {
        pdVar23 = (dword *)0x0;
      }
      return pdVar23;
    }
    pdVar27 = (dword *)func_0x00f78af4();
    pppppppuVar40 = (undefined8 *******)((long)pppppppuVar10 + -0x10);
    puVar41 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByTimeCheaterStat;
code_r0x0146f334:
    *(undefined8 ********)(puVar11 + -0x10) = pppppppuVar40;
    *(undefined **)(puVar11 + -8) = puVar41;
    if (pdVar27 == (dword *)0x0) {
      pdVar27 = (dword *)func_0x00f78af4();
      *(dword **)(puVar11 + -0x30) = pdVar21;
      *(dword **)(puVar11 + -0x28) = pdVar23;
      *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x18) = &Atlas_Stats_AtlasStats___ctor;
      uVar43 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      pdVar27[0xb] = uVar43;
      pdVar27[0xc] = param_2;
      pdVar27[0xd] = param_3;
      return pdVar27;
    }
    uVar16 = (**(code **)(*(long *)pdVar27 + 0x188))
                       (pdVar27,*(undefined8 *)(*(long *)pdVar27 + 400));
    if (uVar16 < 8) {
      pdVar23 = (dword *)(ulong)*(uint *)(&UNK_033f833c + (long)(int)uVar16 * 4);
    }
    else {
      pdVar23 = (dword *)0x0;
    }
    return pdVar23;
  }
  pdVar27 = (dword *)(section_00000068.sectname + 0xe);
  ppdVar12 = (dword **)&stack0xffffffffffffffe0;
  pdVar23 = param_4;
  param_6 = unaff_x22;
  pppppppuVar40 = (undefined8 *******)&stack0xfffffffffffffff0;
  puVar41 = (undefined *)0x146eb84;
code_r0x015050bc:
  uVar25 = auVar49._8_8_;
  pdVar21 = (dword *)0x0;
  *(long *)((long)ppdVar12 + -0x20) = auVar49._0_8_;
  *(dword **)((long)ppdVar12 + -0x18) = pdVar23;
  *(undefined8 ********)((long)ppdVar12 + -0x10) = pppppppuVar40;
  *(undefined **)((long)ppdVar12 + -8) = puVar41;
  if (*(long *)(lVar19 + 0x20) == 0) {
code_r0x01505118:
    func_0x00f78af4();
  }
  else {
    /*Atlas.Stats.StatsData$$IncrementStat*/ func_0x01504a24();
    lVar31 = *(long *)(lVar19 + 0x28);
    pdVar23 = pdVar27;
    if (lVar31 == 0) goto code_r0x01505118;
    if ((uint)pdVar27 < *(uint *)(lVar31 + 0x18)) {
      pdVar23 = *(dword **)(lVar31 + (long)(int)(uint)pdVar27 * 8 + 0x20);
      if (pdVar23 == (dword *)0x0) {
        return (dword *)0x0;
      }
      uVar24 = *(undefined8 *)((long)ppdVar12 + -0x10);
      uVar42 = *(undefined8 *)((long)ppdVar12 + -8);
      uVar37 = *(undefined8 *)((long)ppdVar12 + -0x20);
      uVar36 = *(undefined8 *)((long)ppdVar12 + -0x18);
      puVar13 = (undefined1 *)ppdVar12;
      goto System_Action__Invoke;
    }
  }
  uVar24 = func_0x00f78b24();
  auVar49 = func_0x00f78ac0(uVar24,0);
  lVar31 = auVar49._0_8_;
  *(long *)((long)ppdVar12 + -0x40) = lVar19;
  *(dword **)((long)ppdVar12 + -0x38) = pdVar23;
  *(undefined1 **)((long)ppdVar12 + -0x30) = (undefined1 *)((long)ppdVar12 + -0x10);
  *(undefined **)((long)ppdVar12 + -0x28) = &Atlas_Stats_StatsManager__DecrementStat;
  if (*(long *)(lVar31 + 0x20) != 0) {
    /*Atlas.Stats.StatsData$$DecrementStat*/ func_0x01504a78();
    lVar19 = *(long *)(lVar31 + 0x28);
    pdVar23 = auVar49._8_8_;
    if (lVar19 != 0) {
      if (auVar49._8_4_ < *(uint *)(lVar19 + 0x18)) {
        pdVar23 = *(dword **)(lVar19 + (long)(int)auVar49._8_4_ * 8 + 0x20);
        if (pdVar23 == (dword *)0x0) {
          return (dword *)0x0;
        }
        uVar24 = *(undefined8 *)((long)ppdVar12 + -0x30);
        uVar42 = *(undefined8 *)((long)ppdVar12 + -0x28);
        puVar13 = (undefined1 *)((long)ppdVar12 + -0x20);
        uVar37 = *(undefined8 *)((long)ppdVar12 + -0x40);
        uVar36 = *(undefined8 *)((long)ppdVar12 + -0x38);
System_Action__Invoke:
        uVar29 = 0;
        *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar13 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
        *(undefined4 **)(puVar13 + -0x38) = unaff_x23;
        *(dword **)(puVar13 + -0x30) = param_6;
        *(undefined8 *)(puVar13 + -0x28) = uVar25;
        *(undefined8 *)(puVar13 + -0x20) = uVar37;
        *(undefined8 *)(puVar13 + -0x18) = uVar36;
        *(undefined8 *)(puVar13 + -0x10) = uVar24;
        *(undefined8 *)(puVar13 + -8) = uVar42;
        *(dword **)(puVar13 + -0x58) = pdVar23;
        lVar19 = *(long *)(pdVar23 + 0x1a);
        if (lVar19 == 0) {
          puVar13 = puVar13 + -0x58;
          lVar31 = 1;
        }
        else {
          lVar31 = *(long *)(lVar19 + 0x18);
          if (lVar31 == 0) {
            return pdVar23;
          }
          puVar13 = (undefined1 *)(lVar19 + 0x20);
        }
        lVar19 = 0;
        do {
          lVar32 = *(long *)(puVar13 + lVar19 * 8);
          pcVar38 = *(code **)(lVar32 + 0x10);
          plVar22 = *(long **)(lVar32 + 0x20);
          lVar32 = *(long *)(lVar32 + 0x28);
          if (*(short *)(lVar32 + 0x48) == -1) {
            func_0x00f78ad8(lVar32,uVar29);
          }
          iVar17 = func_0x00f78a4c(lVar32);
          if (iVar17 == 0) {
            if ((((plVar22 == (long *)0x0) || (*(short *)(lVar32 + 0x48) == -1)) ||
                ((*(byte *)(*plVar22 + 0x115) & 1) != 0)) || (*(long *)(pdVar23 + 6) == 0))
            goto code_r0x02924d98;
            iVar17 = func_0x00f78a44(lVar32);
            iVar18 = func_0x00f78ec0(lVar32);
            if (iVar17 == 0) {
              uVar1 = *(ushort *)(lVar32 + 0x48);
              if (iVar18 == 0) {
                lVar32 = *plVar22 + (ulong)uVar1 * 0x10;
                auVar49 = (**(code **)(lVar32 + 0x138))(plVar22,*(undefined8 *)(lVar32 + 0x140));
                goto code_r0x02924da4;
              }
              lVar32 = func_0x00f78a48(lVar32);
              lVar33 = *plVar22;
              uVar34 = (ulong)*(ushort *)(lVar33 + 0x12a);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == lVar32) {
                    puVar26 = (undefined8 *)
                              (lVar33 + (long)(int)(*piVar35 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar35 = piVar35 + 4;
                  uVar34 = uVar34 - 1;
                } while (uVar34 != 0);
              }
              puVar26 = (undefined8 *)func_0x00fac1f0(plVar22,lVar32,(ulong)uVar1);
code_r0x02924e68:
              pcVar38 = (code *)*puVar26;
              puVar26 = (undefined8 *)puVar26[1];
            }
            else {
              if (iVar18 == 0) {
                uVar25 = *(undefined8 *)
                          (*plVar22 + (ulong)*(ushort *)(lVar32 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar33 = *plVar22;
                uVar34 = (ulong)*(ushort *)(lVar33 + 0x12a);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == *(long *)(lVar32 + 0x18)) {
                      lVar33 = lVar33 + (long)(int)(*piVar35 + (uint)*(ushort *)(lVar32 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar35 = piVar35 + 4;
                    uVar34 = uVar34 - 1;
                  } while (uVar34 != 0);
                }
                lVar33 = func_0x00fac1f0(plVar22);
code_r0x02924e40:
                uVar25 = *(undefined8 *)(lVar33 + 8);
              }
              puVar26 = (undefined8 *)func_0x00f78acc(uVar25,lVar32);
              pcVar38 = (code *)*puVar26;
            }
            auVar49 = (*pcVar38)(plVar22,puVar26);
          }
          else if (*(char *)(lVar32 + 0x4a) == '\0') {
            auVar49 = (*pcVar38)(lVar32);
          }
          else {
code_r0x02924d98:
            auVar49 = (*pcVar38)(plVar22,lVar32);
          }
code_r0x02924da4:
          uVar29 = auVar49._8_8_;
          lVar19 = lVar19 + 1;
          if (lVar19 == lVar31) {
            return auVar49._0_8_;
          }
        } while( true );
      }
      goto code_r0x01505188;
    }
  }
  func_0x00f78af4();
code_r0x01505188:
  uVar24 = func_0x00f78b24();
  auVar49 = func_0x00f78ac0(uVar24,0);
  auVar50 = auVar49._0_12_;
  lVar32 = auVar49._0_8_;
  auVar48._8_8_ = pdVar23;
  auVar48._0_8_ = lVar32;
  puVar14 = (undefined1 *)((long)ppdVar12 + -0x70);
  *(dword **)((long)ppdVar12 + -0x70) = param_6;
  *(undefined8 *)((long)ppdVar12 + -0x68) = uVar25;
  *(long *)((long)ppdVar12 + -0x60) = lVar31;
  *(dword **)((long)ppdVar12 + -0x58) = pdVar23;
  *(undefined1 **)((long)ppdVar12 + -0x50) = (undefined1 *)((long)ppdVar12 + -0x30);
  *(undefined **)((long)ppdVar12 + -0x48) = &Atlas_Stats_StatsManager__SetStat;
  puVar13 = (undefined1 *)((long)ppdVar12 + -0x50);
  lVar19 = *(long *)(lVar32 + 0x20);
  if (lVar19 == 0) {
    func_0x00f78af4();
    uVar24 = func_0x00f78b24();
    auVar49 = func_0x00f78ac0(uVar24,0);
    auVar6._8_8_ = auVar49._8_8_;
    auVar6._0_8_ = lVar32;
    auVar50 = auVar6._0_12_;
    *(undefined1 **)((long)ppdVar12 + -0x80) = puVar13;
    *(undefined **)((long)ppdVar12 + -0x78) = &Atlas_Stats_StatsManager__GetStat;
    lVar19 = *(long *)(auVar49._0_8_ + 0x20);
    if (lVar19 == 0) {
      auVar49 = func_0x00f78af4();
      auVar7._8_8_ = auVar49._8_8_;
      auVar7._0_8_ = lVar32;
      auVar50 = auVar7._0_12_;
      *(undefined1 **)((long)ppdVar12 + -0x90) = (undefined1 *)((long)ppdVar12 + -0x80);
      *(undefined **)((long)ppdVar12 + -0x88) = &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar19 = *(long *)(auVar49._0_8_ + 0x18);
      if (lVar19 == 0) {
        auVar49 = func_0x00f78af4();
        auVar8._8_8_ = auVar49._8_8_;
        auVar8._0_8_ = lVar32;
        auVar50 = auVar8._0_12_;
        puVar13 = (undefined1 *)((long)ppdVar12 + -0xa0);
        *(undefined1 **)((long)ppdVar12 + -0xa0) = (undefined1 *)((long)ppdVar12 + -0x90);
        *(undefined **)((long)ppdVar12 + -0x98) = &Atlas_Stats_StatsManager__GetCommittedStat;
        lVar19 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar19 == 0) {
          puVar41 = &Atlas_Stats_StatsManager__GetGlobalStat;
          auVar47 = func_0x00f78af4();
          puVar15 = (undefined1 *)((long)ppdVar12 + -0xa0);
          while( true ) {
            auVar50 = auVar47._0_12_;
            pdVar23 = auVar47._8_8_;
            lVar31 = auVar47._0_8_;
            auVar9._8_8_ = auVar48._8_8_;
            auVar9._0_8_ = lVar31;
            puVar14 = puVar15 + -0x30;
            *(dword **)(puVar15 + -0x30) = param_6;
            *(undefined8 *)(puVar15 + -0x28) = uVar25;
            *(undefined1 (*) [16])(puVar15 + -0x20) = auVar48;
            *(undefined1 **)(puVar15 + -0x10) = puVar13;
            *(undefined **)(puVar15 + -8) = puVar41;
            puVar13 = puVar15 + -0x10;
            lVar19 = *(long *)(lVar31 + 0x10);
            if (lVar19 != 0) break;
            auVar49 = func_0x00f78af4();
            pdVar23 = auVar49._8_8_;
            puVar14 = puVar15 + -0x70;
            *(undefined8 *)(puVar15 + -0x70) = unaff_x24;
            *(undefined4 **)(puVar15 + -0x68) = unaff_x23;
            *(dword **)(puVar15 + -0x60) = param_6;
            *(undefined8 *)(puVar15 + -0x58) = uVar25;
            *(long *)(puVar15 + -0x50) = lVar31;
            *(long *)(puVar15 + -0x48) = auVar48._8_8_;
            *(undefined1 **)(puVar15 + -0x40) = puVar13;
            *(undefined **)(puVar15 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            puVar13 = puVar15 + -0x40;
            if (pdVar23 == (dword *)0x0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(pdVar23 + 6) < 1) {
                return (dword *)0x0;
              }
              uVar25 = 0;
              param_6 = (dword *)0x0;
              unaff_x23 = pdVar23 + 8;
              auVar9 = auVar49;
              if ((*(ulong *)(pdVar23 + 6) & 0xffffffff) != 0) {
                lVar19 = *(long *)(auVar49._0_8_ + 0x10);
                if (lVar19 == 0) goto code_r0x01505370;
                auVar50._8_4_ = *unaff_x23;
                auVar50._0_8_ = auVar49._0_8_;
                puVar41 = &UNK_0150533c;
                goto code_r0x01504b20;
              }
            }
            uVar24 = func_0x00f78b24();
            auVar49 = func_0x00f78ac0(uVar24,0);
            pdVar23 = auVar49._8_8_;
            puVar14 = puVar15 + -0xb0;
            *(undefined8 *)(puVar15 + -0xb0) = unaff_x24;
            *(undefined4 **)(puVar15 + -0xa8) = unaff_x23;
            *(dword **)(puVar15 + -0xa0) = param_6;
            *(undefined8 *)(puVar15 + -0x98) = uVar25;
            *(undefined1 (*) [16])(puVar15 + -0x90) = auVar9;
            *(undefined1 **)(puVar15 + -0x80) = puVar13;
            *(undefined **)(puVar15 + -0x78) = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            puVar13 = puVar15 + -0x80;
            if (pdVar23 == (dword *)0x0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(pdVar23 + 6) < 1) {
                return (dword *)0x0;
              }
              uVar25 = 0;
              param_6 = (dword *)0x0;
              unaff_x23 = pdVar23 + 8;
              auVar9 = auVar49;
              if ((*(ulong *)(pdVar23 + 6) & 0xffffffff) != 0) {
                lVar19 = *(long *)(auVar49._0_8_ + 0x18);
                if (lVar19 == 0) goto code_r0x01505408;
                auVar50._8_4_ = *unaff_x23;
                auVar50._0_8_ = auVar49._0_8_;
                puVar41 = &UNK_015053d4;
                goto code_r0x01504b20;
              }
            }
            uVar24 = func_0x00f78b24();
            auVar48 = func_0x00f78ac0(uVar24,0);
            lVar19 = auVar48._8_8_;
            *(undefined8 *)(puVar15 + -0xf0) = unaff_x24;
            *(undefined4 **)(puVar15 + -0xe8) = unaff_x23;
            *(dword **)(puVar15 + -0xe0) = param_6;
            *(undefined8 *)(puVar15 + -0xd8) = uVar25;
            *(undefined1 (*) [16])(puVar15 + -0xd0) = auVar9;
            *(undefined1 **)(puVar15 + -0xc0) = puVar13;
            *(undefined **)(puVar15 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            puVar13 = puVar15 + -0xc0;
            if (lVar19 == 0) {
code_r0x015054a8:
              uVar24 = func_0x00f78af4();
              *(dword **)(puVar15 + -0x120) = param_6;
              *(undefined8 *)(puVar15 + -0x118) = uVar25;
              *(undefined1 (*) [16])(puVar15 + -0x110) = auVar9;
              *(undefined1 **)(puVar15 + -0x100) = puVar13;
              *(undefined **)(puVar15 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)(puVar15 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar24,puVar15 + -0x124);
              return (dword *)(ulong)*(uint *)(puVar15 + -0x124);
            }
            if ((int)*(ulong *)(lVar19 + 0x18) < 1) {
              return (dword *)0x0;
            }
            uVar25 = 0;
            param_6 = (dword *)0x0;
            unaff_x23 = (undefined4 *)(lVar19 + 0x20);
            if ((*(ulong *)(lVar19 + 0x18) & 0xffffffff) == 0) {
              uVar24 = func_0x00f78b24();
              func_0x00f78ac0(uVar24,0);
              auVar9 = auVar48;
              goto code_r0x015054a8;
            }
            auVar47._8_4_ = *unaff_x23;
            auVar47._0_8_ = auVar48._0_8_;
            auVar47._12_4_ = 0;
            puVar41 = &UNK_01505468;
            puVar15 = puVar15 + -0xf0;
          }
          puVar41 = &UNK_015052bc;
        }
        else {
          puVar14 = (undefined1 *)((long)ppdVar12 + -0x90);
          puVar13 = *(undefined1 **)((long)ppdVar12 + -0xa0);
          puVar41 = *(undefined **)((long)ppdVar12 + -0x98);
        }
      }
      else {
        puVar14 = (undefined1 *)((long)ppdVar12 + -0x80);
        puVar13 = *(undefined1 **)((long)ppdVar12 + -0x90);
        puVar41 = *(undefined **)((long)ppdVar12 + -0x88);
      }
    }
    else {
      puVar14 = (undefined1 *)((long)ppdVar12 + -0x70);
      puVar13 = *(undefined1 **)((long)ppdVar12 + -0x80);
      puVar41 = *(undefined **)((long)ppdVar12 + -0x78);
    }
  }
  else {
    puVar41 = &UNK_015051c0;
    pdVar23 = auVar49._8_8_;
    param_6 = pdVar21;
  }
code_r0x01504b20:
  *(undefined1 **)(puVar14 + -0x10) = puVar13;
  *(undefined **)(puVar14 + -8) = puVar41;
  lVar19 = *(long *)(lVar19 + 0x10);
  if (lVar19 == 0) {
    func_0x00f78af4();
  }
  else if (auVar50._8_4_ < *(uint *)(lVar19 + 0x18)) {
    return (dword *)(ulong)*(uint *)(lVar19 + (long)(int)auVar50._8_4_ * 4 + 0x20);
  }
  uVar24 = func_0x00f78b24();
  auVar49 = func_0x00f78ac0(uVar24,0);
  lVar19 = auVar49._8_8_;
  pdVar27 = auVar49._0_8_;
  *(undefined8 *)(puVar14 + -0x50) = unaff_x24;
  *(undefined4 **)(puVar14 + -0x48) = unaff_x23;
  *(dword **)(puVar14 + -0x40) = param_6;
  *(undefined8 *)(puVar14 + -0x38) = uVar25;
  *(long *)(puVar14 + -0x30) = auVar50._0_8_;
  *(dword **)(puVar14 + -0x28) = pdVar23;
  *(undefined1 **)(puVar14 + -0x20) = puVar14 + -0x10;
  *(undefined **)(puVar14 + -0x18) = &Atlas_Stats_StatsData__UpdateToLargestValues;
  pdVar23 = pdVar27;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    pdVar23 = (dword *)func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar31 = *(long *)(pdVar27 + 4);
  if (((lVar31 != 0) && (lVar19 != 0)) && (*(long *)(lVar19 + 0x10) != 0)) {
    iVar17 = *(int *)(lVar31 + 0x18);
    param_6 = *(dword **)(*(long *)(lVar19 + 0x10) + 0x18);
    if (iVar17 < (int)param_6) {
      lVar31 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,param_6);
      pdVar23 = (dword *)/*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(pdVar27 + 4),lVar31,iVar17,0);
      *(long *)(pdVar27 + 4) = lVar31;
    }
    if ((int)param_6 < 1) {
      return pdVar23;
    }
    if (lVar31 != 0) {
      uVar34 = 0;
      uVar16 = *(uint *)(lVar31 + 0x18);
      while (uVar16 != uVar34) {
        lVar32 = *(long *)(lVar19 + 0x10);
        if (lVar32 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar32 + 0x18) <= uVar34) || (uVar16 <= uVar34)) break;
        iVar17 = *(int *)(lVar31 + 0x20 + uVar34 * 4);
        iVar18 = *(int *)(lVar32 + uVar34 * 4 + 0x20);
        if (iVar17 <= iVar18) {
          iVar17 = iVar18;
        }
        *(int *)(lVar31 + 0x20 + uVar34 * 4) = iVar17;
        uVar34 = uVar34 + 1;
        if (((ulong)param_6 & 0xffffffff) == uVar34) {
          return pdVar23;
        }
      }
      uVar25 = func_0x00f78b24();
      func_0x00f78ac0(uVar25,0);
    }
  }
code_r0x01504c70:
  func_0x00f78af4();
  *(dword **)(puVar14 + -0x80) = param_6;
  *(long *)(puVar14 + -0x78) = lVar31;
  *(undefined1 (*) [16])(puVar14 + -0x70) = auVar49;
  *(undefined1 **)(puVar14 + -0x60) = puVar14 + -0x20;
  *(undefined **)(puVar14 + -0x58) = &Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  pdVar23 = (dword *)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return pdVar23;
}



// ============================================================
// RVA: 0x146ebb8 | Atlas.Stats.AtlasStats.OnArcadeEnd
// ============================================================

/* WARNING: Possible PIC construction at 0x0146ec48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015052b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015053d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ed20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ed54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ed9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ee7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ec20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f298) */
/* WARNING: Removing unreachable block (ram,0x0146f2a0) */
/* WARNING: Removing unreachable block (ram,0x024660f8) */
/* WARNING: Removing unreachable block (ram,0x0246610c) */
/* WARNING: Removing unreachable block (ram,0x02466124) */
/* WARNING: Removing unreachable block (ram,0x02466154) */
/* WARNING: Removing unreachable block (ram,0x02466158) */
/* WARNING: Removing unreachable block (ram,0x02466160) */
/* WARNING: Removing unreachable block (ram,0x0246618c) */
/* WARNING: Removing unreachable block (ram,0x024661d8) */
/* WARNING: Removing unreachable block (ram,0x024661f4) */
/* WARNING: Removing unreachable block (ram,0x024661fc) */
/* WARNING: Removing unreachable block (ram,0x02466264) */
/* WARNING: Removing unreachable block (ram,0x02466200) */
/* WARNING: Removing unreachable block (ram,0x0246626c) */
/* WARNING: Removing unreachable block (ram,0x0246633c) */
/* WARNING: Removing unreachable block (ram,0x02466214) */
/* WARNING: Removing unreachable block (ram,0x0246616c) */
/* WARNING: Removing unreachable block (ram,0x0146f0f4) */
/* WARNING: Removing unreachable block (ram,0x0146f0fc) */
/* WARNING: Removing unreachable block (ram,0x0146f104) */
/* WARNING: Removing unreachable block (ram,0x0146f128) */
/* WARNING: Removing unreachable block (ram,0x0146f14c) */
/* WARNING: Removing unreachable block (ram,0x0146f15c) */
/* WARNING: Removing unreachable block (ram,0x0146f164) */
/* WARNING: Removing unreachable block (ram,0x0146f138) */
/* WARNING: Removing unreachable block (ram,0x0146f140) */
/* WARNING: Removing unreachable block (ram,0x0146f114) */
/* WARNING: Removing unreachable block (ram,0x0146f11c) */
/* WARNING: Removing unreachable block (ram,0x0146ee80) */
/* WARNING: Removing unreachable block (ram,0x0146ee84) */
/* WARNING: Removing unreachable block (ram,0x0146ee90) */
/* WARNING: Removing unreachable block (ram,0x0146ed58) */
/* WARNING: Removing unreachable block (ram,0x0146ed8c) */
/* WARNING: Removing unreachable block (ram,0x0146ed94) */
/* WARNING: Removing unreachable block (ram,0x0146ed6c) */
/* WARNING: Removing unreachable block (ram,0x0146ed74) */
/* WARNING: Removing unreachable block (ram,0x0146ed7c) */
/* WARNING: Removing unreachable block (ram,0x0146ed98) */
/* WARNING: Removing unreachable block (ram,0x0146ed24) */
/* WARNING: Removing unreachable block (ram,0x0146ed28) */
/* WARNING: Removing unreachable block (ram,0x0146ed30) */
/* WARNING: Removing unreachable block (ram,0x0146ed38) */
/* WARNING: Removing unreachable block (ram,0x0146ed44) */
/* WARNING: Removing unreachable block (ram,0x0146ed4c) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Removing unreachable block (ram,0x015053d4) */
/* WARNING: Removing unreachable block (ram,0x015053e8) */
/* WARNING: Removing unreachable block (ram,0x0150533c) */
/* WARNING: Removing unreachable block (ram,0x01505350) */
/* WARNING: Removing unreachable block (ram,0x015052bc) */
/* WARNING: Removing unreachable block (ram,0x015052c8) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x015051e8) */
/* WARNING: Removing unreachable block (ram,0x015051f0) */
/* WARNING: Removing unreachable block (ram,0x015051f8) */
/* WARNING: Removing unreachable block (ram,0x01505204) */
/* WARNING: Removing unreachable block (ram,0x01505224) */
/* WARNING: Removing unreachable block (ram,0x01505210) */
/* WARNING: Removing unreachable block (ram,0x015051c0) */
/* WARNING: Removing unreachable block (ram,0x015051cc) */
/* WARNING: Removing unreachable block (ram,0x015051e0) */
/* WARNING: Removing unreachable block (ram,0x0146ec24) */
/* WARNING: Removing unreachable block (ram,0x0146ec28) */
/* WARNING: Removing unreachable block (ram,0x0146ec30) */

dword * Atlas_Stats_AtlasStats__OnArcadeEnd
                  (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,dword *param_4,
                  int param_5,dword *param_6,dword *param_7,ulong param_8,undefined8 param_9)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 *******pppppppuVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar20;
  long lVar21;
  dword *pdVar22;
  dword *pdVar24;
  long *plVar25;
  dword *pdVar26;
  dword *pdVar27;
  undefined8 uVar28;
  int iVar19;
  undefined8 uVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  int *piVar37;
  dword *unaff_x19;
  undefined8 uVar38;
  undefined8 unaff_x20;
  undefined8 uVar39;
  undefined8 unaff_x21;
  dword *unaff_x22;
  code *pcVar40;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar41;
  undefined8 *******pppppppuVar42;
  undefined *unaff_x30;
  undefined *puVar43;
  undefined8 uVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 ******ppppppuStack_170;
  undefined *puStack_168;
  dword *pdStack_160;
  undefined8 uStack_158;
  long lStack_150;
  dword *pdStack_148;
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  dword *pdStack_130;
  dword *pdStack_128;
  undefined8 ******ppppppuStack_120;
  undefined *puStack_118;
  dword *pdStack_110;
  dword *pdStack_108;
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  long *plStack_f0;
  dword *pdStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  dword *pdStack_d0;
  dword *pdStack_c8;
  dword *pdStack_c0;
  dword *pdStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  dword *pdVar23;
  
  auVar51._8_8_ = unaff_x21;
  auVar51._0_8_ = unaff_x20;
  auVar6._8_8_ = unaff_x21;
  auVar6._0_8_ = unaff_x20;
  auVar5._8_8_ = unaff_x21;
  auVar5._0_8_ = unaff_x20;
  auVar4._8_8_ = param_7;
  auVar4._0_8_ = param_9;
  auVar3._8_8_ = param_7;
  auVar3._0_8_ = param_9;
  auVar2._8_8_ = param_7;
  auVar2._0_8_ = param_9;
  uVar32 = (undefined4)(param_8 >> 0x20);
  uVar45 = (undefined4)param_8;
  pppppppuVar42 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (param_5 == 0) {
    return param_4;
  }
  if (*(char *)((long)param_4 + 0x5d) == '\0') {
    return param_4;
  }
  if ((param_8 & 1) != 0) {
    return param_4;
  }
  if (param_5 == 3) {
    lVar21 = *(long *)(param_4 + 4);
    if (lVar21 != 0) {
      pdVar27 = (dword *)(section_00000068.segname + 8);
      unaff_x30 = &UNK_0146ec24;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_4;
      unaff_x22 = param_6;
      auVar51 = auVar4;
      goto code_r0x015050bc;
    }
LAB_0146ecb8:
    auVar51 = func_0x00f78af4();
    puVar15 = auVar51._8_8_;
    pdVar27 = auVar51._0_8_;
    puStack_38 = &Atlas_Stats_AtlasStats__OnUsableHitPlayer;
    pppppppuVar41 = &ppppppuStack_40;
    if ((*(char *)((long)pdVar27 + 0x5d) == '\0') || (pdVar27[0x18] != 1)) {
      return pdVar27;
    }
    pdVar26 = param_6;
    pdVar24 = param_7;
    ppppppuStack_40 = pppppppuVar42;
    if (param_6 != (dword *)0x0) {
      iVar19 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(param_6,0);
      if ((param_6 == (dword *)puVar15) || (iVar19 == 0)) {
        if (puVar15 != (undefined1 *)0x0) {
          pdVar22 = (dword *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(puVar15,0);
          if ((int)pdVar22 == 0) {
            return pdVar22;
          }
          if ((param_7 != (dword *)0x0) && (lVar21 = *(long *)(pdVar27 + 4), lVar21 != 0)) {
            pdVar27 = (dword *)(ulong)param_7[0x17];
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
            unaff_x19 = param_4;
            pppppppuVar42 = (undefined8 *******)ppppppuStack_40;
            unaff_x30 = puStack_38;
            auVar51 = auVar3;
            goto code_r0x015050bc;
          }
        }
      }
      else if ((param_7 != (dword *)0x0) && (lVar21 = *(long *)(pdVar27 + 4), lVar21 != 0)) {
        pdVar27 = (dword *)(ulong)param_7[0x16];
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x19 = param_7;
        unaff_x22 = param_6;
        pppppppuVar42 = pppppppuVar41;
        unaff_x30 = &UNK_0146ed24;
        goto code_r0x015050bc;
      }
    }
    auVar46 = func_0x00f78af4();
    unaff_x22 = auVar46._8_8_;
    pdVar23 = auVar46._0_8_;
    puStack_68 = &Atlas_Stats_AtlasStats__OnUsableHitShield;
    pdVar27 = (dword *)CONCAT44(uVar32,uVar45);
    auVar47._8_8_ = pdVar27;
    auVar47._0_8_ = pdVar24;
    unaff_x23 = (undefined4 *)0x3eb4000;
    pdVar22 = pdVar23;
    ppppppuStack_70 = pppppppuVar41;
    if ((bRam0000000003eb4862 & 1) == 0) {
      pdVar22 = (dword *)func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4862 = 1;
    }
    if ((*(char *)((long)pdVar23 + 0x5d) == '\0') || (pdVar23[0x18] != 1)) {
      return pdVar22;
    }
    if (unaff_x22 == (dword *)0x0) {
      puVar43 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByShieldStat;
      auVar47 = func_0x00f78af4();
    }
    else {
      pdVar22 = (dword *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(unaff_x22,0);
      if ((int)pdVar22 == 0) {
        return pdVar22;
      }
      if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar43 = &UNK_0146ee80;
    }
    plVar25 = auVar47._8_8_;
    pdVar22 = auVar47._0_8_;
    pdStack_c8 = pdVar24;
    pdStack_c0 = pdVar27;
    ppppppuStack_b0 = &ppppppuStack_70;
    puStack_a8 = puVar43;
    if ((bRam0000000003eb4864 & 1) == 0) {
      pdStack_d0 = unaff_x22;
      pdStack_b8 = pdVar23;
      func_0x00f78a20(0x3d1fed8);
      auVar46._8_8_ = pdStack_d0;
      auVar46._0_8_ = pdStack_b8;
      bRam0000000003eb4864 = 1;
    }
    pdStack_d0 = auVar46._8_8_;
    pdStack_b8 = auVar46._0_8_;
    if (plVar25 == (long *)0x0) {
      auVar51 = func_0x00f78af4();
      pdVar27 = auVar51._0_8_;
      puStack_d8 = &Atlas_Stats_AtlasStats__OnUsableUsed;
      if ((*(char *)((long)pdVar27 + 0x5d) == '\0') || (pdVar27[0x18] != 1)) {
        return pdVar27;
      }
      pdVar24 = pdVar26;
      pdStack_e8 = pdVar22;
      ppppppuStack_e0 = &ppppppuStack_b0;
      if (auVar51._8_8_ != 0) {
        plStack_f0 = plVar25;
        pdVar22 = (dword *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer
                                     (auVar51._8_8_,0);
        auVar7._8_8_ = plStack_f0;
        auVar7._0_8_ = pdVar26;
        auVar47._8_8_ = plStack_f0;
        auVar47._0_8_ = pdVar26;
        auVar51._8_8_ = 0x3eb4000;
        auVar51._0_8_ = plStack_f0;
        if ((int)pdVar22 == 0) {
          return pdVar22;
        }
        if ((pdVar26 != (dword *)0x0) &&
           (lVar21 = *(long *)(pdVar27 + 4), auVar47 = auVar7, lVar21 != 0)) {
          pdVar27 = (dword *)(ulong)pdVar26[0x18];
          register0x00000008 = (BADSPACEBASE *)&pdStack_d0;
          unaff_x19 = pdStack_e8;
          pppppppuVar42 = (undefined8 *******)ppppppuStack_e0;
          unaff_x30 = puStack_d8;
          goto code_r0x015050bc;
        }
      }
      plStack_f0 = auVar47._8_8_;
      auVar51 = func_0x00f78af4();
      pdVar26 = auVar51._0_8_;
      puStack_f8 = &Atlas_Stats_AtlasStats__OnUsableHoppedOver;
      if ((*(char *)((long)pdVar26 + 0x5d) == '\0') || (pdVar26[0x18] != 1)) {
        return pdVar26;
      }
      unaff_x19 = pdVar24;
      pdStack_110 = pdVar27;
      pdStack_108 = auVar47._0_8_;
      ppppppuStack_100 = &ppppppuStack_e0;
      if (auVar51._8_8_ != 0) {
        pdVar22 = (dword *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer
                                     (auVar51._8_8_,0);
        auVar51._8_8_ = 0x3eb4000;
        auVar51._0_8_ = pdStack_110;
        if ((int)pdVar22 == 0) {
          return pdVar22;
        }
        iVar19 = (int)pdVar24;
        pdVar27 = pdVar24;
        if (iVar19 != 5) {
          if (iVar19 == 1) {
            lVar21 = *(long *)(pdVar26 + 4);
            if (lVar21 == 0) goto code_r0x0146f0a0;
            pdVar27 = (dword *)((long)&segment_command_00000020.maxprot + 1);
          }
          else {
            if (iVar19 != 0) {
              return pdVar22;
            }
            lVar21 = *(long *)(pdVar26 + 4);
            if (lVar21 == 0) goto code_r0x0146f0a0;
            pdVar27 = &segment_command_00000020.maxprot;
          }
code_r0x0146f090:
          register0x00000008 = (BADSPACEBASE *)&plStack_f0;
          unaff_x19 = pdStack_108;
          pppppppuVar42 = (undefined8 *******)ppppppuStack_100;
          unaff_x30 = puStack_f8;
          goto code_r0x015050bc;
        }
        lVar21 = *(long *)(pdVar26 + 4);
        if (lVar21 != 0) {
          pdVar27 = (dword *)((long)&segment_command_00000020.maxprot + 2);
          goto code_r0x0146f090;
        }
      }
code_r0x0146f0a0:
      auVar48 = func_0x00f78af4();
      lVar33 = auVar48._8_8_;
      auVar51._8_8_ = 0x3eb4000;
      auVar51._0_8_ = lVar33;
      pdVar22 = auVar48._0_8_;
      puStack_118 = &Atlas_Stats_AtlasStats__OnBoxHit;
      pppppppuVar41 = &ppppppuStack_120;
      pdVar24 = pdVar22;
      if ((((*(char *)((long)pdVar22 + 0x5d) == '\0') || (lVar33 == 0)) || (pdVar22[0x18] != 1)) ||
         (pdStack_130 = pdVar27, pdStack_128 = pdVar26, ppppppuStack_120 = &ppppppuStack_100,
         pdVar24 = (dword *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(lVar33,0),
         (int)pdVar24 == 0)) {
        return pdVar24;
      }
      lVar21 = *(long *)(pdVar22 + 4);
      if (lVar21 != 0) {
        pdVar27 = &MACH_HEADER.sizeofcmds;
        unaff_x30 = &UNK_0146f0f4;
        register0x00000008 = (BADSPACEBASE *)&pdStack_130;
        unaff_x19 = pdVar22;
        pppppppuVar42 = pppppppuVar41;
        goto code_r0x015050bc;
      }
      auVar51 = func_0x00f78af4();
      lVar21 = auVar51._8_8_;
      pdVar27 = auVar51._0_8_;
      uStack_158 = 0x3eb4000;
      puStack_138 = &Atlas_Stats_AtlasStats__OnKartEnterShortcut;
      pppppppuVar42 = &ppppppuStack_140;
      pdVar26 = pdVar27;
      pdStack_160 = unaff_x22;
      ppppppuStack_140 = pppppppuVar41;
      if ((bRam0000000003eb4863 & 1) == 0) {
        lStack_150 = lVar33;
        pdStack_148 = pdVar22;
        func_0x00f78a20(0x3d3c048);
        func_0x00f78a20(0x3d3c058);
        pdVar26 = (dword *)func_0x00f78a20(0x3d24070);
        auVar48._8_8_ = lStack_150;
        auVar48._0_8_ = pdStack_148;
        bRam0000000003eb4863 = 1;
      }
      lStack_150 = auVar48._8_8_;
      pdStack_148 = auVar48._0_8_;
      if (((*(char *)((long)pdVar27 + 0x5d) == '\0') || (pdVar27[0x18] != 1)) ||
         (*(long *)(pdVar27 + 6) != lVar21)) {
        return pdVar26;
      }
      if (lVar21 != 0) {
        plVar25 = *(long **)(lVar21 + 0x68);
        if (plVar25 != (long *)0x0) {
          if ((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar25 + 300)) &&
             (*(long *)(*(long *)(*plVar25 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8
                       + -8) == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
            pdVar26 = (dword *)Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar25,0);
            auVar48._8_8_ = lStack_150;
            auVar48._0_8_ = pdStack_148;
            if ((int)pdVar26 < (int)pdVar27[0x16]) {
              return pdVar26;
            }
          }
        }
        lStack_150 = auVar48._8_8_;
        pdStack_148 = auVar48._0_8_;
        if ((unaff_x19 != (dword *)0x0) && (*(long *)(pdVar27 + 0x14) != 0)) {
          pdVar26 = (dword *)/*System.Collections.Generic.List<StringID>$$Contains*/ func_0x02466428(*(long *)(pdVar27 + 0x14),
                                             *(undefined8 *)(unaff_x19 + 6),uRam0000000003d3c058);
          auVar48._8_8_ = lStack_150;
          auVar48._0_8_ = pdStack_148;
          if (((ulong)pdVar26 & 1) != 0) {
            return pdVar26;
          }
          lVar21 = *(long *)(pdVar27 + 4);
          if (lVar21 != 0) {
            pdVar27 = (dword *)((long)&segment_command_00000020.flags + 3);
            unaff_x30 = &UNK_0146f298;
            register0x00000008 = (BADSPACEBASE *)&pdStack_160;
            unaff_x22 = (dword *)0x3eb4000;
            goto code_r0x015050bc;
          }
        }
      }
      lStack_150 = auVar48._8_8_;
      pdStack_148 = auVar48._0_8_;
      auVar51 = func_0x00f78af4();
      pdVar26 = auVar51._0_8_;
      pppppppuVar13 = &ppppppuStack_170;
      pppppppuVar41 = &ppppppuStack_170;
      puStack_168 = &Atlas_Stats_AtlasStats__OnRespawn;
      if (auVar51._8_8_ != 0) {
        if (*(long *)(pdVar26 + 6) == *(long *)(auVar51._8_8_ + 0x10)) {
          *(undefined1 *)(pdVar26 + 0x17) = 1;
        }
        return pdVar26;
      }
      puVar43 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByNormalShieldStat;
      ppppppuStack_170 = pppppppuVar42;
      pdVar22 = (dword *)func_0x00f78af4();
    }
    else {
      iVar19 = (**(code **)(*plVar25 + 0x188))(plVar25,*(undefined8 *)(*plVar25 + 400));
      if (iVar19 == 6) {
        if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar14 = &stack0xffffffffffffff60;
        unaff_x19 = pdStack_b8;
        pdVar27 = pdStack_c0;
        pppppppuVar42 = (undefined8 *******)ppppppuStack_b0;
        puVar43 = puStack_a8;
        goto code_r0x0146f334;
      }
      if (iVar19 != 3) {
        return (dword *)0x0;
      }
      if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pppppppuVar13 = (undefined8 *******)&stack0xffffffffffffff60;
      unaff_x19 = pdStack_b8;
      pdVar27 = pdStack_c0;
      pppppppuVar41 = (undefined8 *******)ppppppuStack_b0;
      puVar43 = puStack_a8;
    }
    puVar14 = (undefined1 *)((long)pppppppuVar13 + -0x10);
    *(undefined8 ********)((long)pppppppuVar13 + -0x10) = pppppppuVar41;
    *(undefined **)((long)pppppppuVar13 + -8) = puVar43;
    if (pdVar22 != (dword *)0x0) {
      uVar18 = (**(code **)(*(long *)pdVar22 + 0x188))
                         (pdVar22,*(undefined8 *)(*(long *)pdVar22 + 400));
      if (uVar18 < 8) {
        pdVar27 = (dword *)(ulong)*(uint *)(&UNK_033f831c + (long)(int)uVar18 * 4);
      }
      else {
        pdVar27 = (dword *)0x0;
      }
      return pdVar27;
    }
    pdVar22 = (dword *)func_0x00f78af4();
    pppppppuVar42 = (undefined8 *******)((long)pppppppuVar13 + -0x10);
    puVar43 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByTimeCheaterStat;
code_r0x0146f334:
    *(undefined8 ********)(puVar14 + -0x10) = pppppppuVar42;
    *(undefined **)(puVar14 + -8) = puVar43;
    if (pdVar22 == (dword *)0x0) {
      pdVar26 = (dword *)func_0x00f78af4();
      *(dword **)(puVar14 + -0x30) = pdVar27;
      *(dword **)(puVar14 + -0x28) = unaff_x19;
      *(undefined1 **)(puVar14 + -0x20) = puVar14 + -0x10;
      *(undefined **)(puVar14 + -0x18) = &Atlas_Stats_AtlasStats___ctor;
      uVar45 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      pdVar26[0xb] = uVar45;
      pdVar26[0xc] = param_2;
      pdVar26[0xd] = param_3;
      return pdVar26;
    }
    uVar18 = (**(code **)(*(long *)pdVar22 + 0x188))
                       (pdVar22,*(undefined8 *)(*(long *)pdVar22 + 400));
    if (uVar18 < 8) {
      pdVar27 = (dword *)(ulong)*(uint *)(&UNK_033f833c + (long)(int)uVar18 * 4);
    }
    else {
      pdVar27 = (dword *)0x0;
    }
    return pdVar27;
  }
  if (param_5 == 2) {
    lVar21 = *(long *)(param_4 + 4);
    if (lVar21 != 0) {
      pdVar27 = (dword *)(section_00000068.segname + 7);
LAB_0146ec44:
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_4;
      unaff_x30 = &LAB_0146ec4c;
      auVar51 = auVar2;
      goto code_r0x015050bc;
    }
    goto LAB_0146ecb8;
  }
  if (param_5 == 1) {
    lVar21 = *(long *)(param_4 + 4);
    if (lVar21 != 0) {
      pdVar27 = (dword *)(section_00000068.segname + 6);
      goto LAB_0146ec44;
    }
    goto LAB_0146ecb8;
  }
  if ((int)param_7 != 0) {
    return param_4;
  }
  iVar19 = (int)param_9;
  if (iVar19 == 8) {
    lVar21 = *(long *)(param_4 + 4);
    if (lVar21 == 0) goto LAB_0146ecb8;
    pdVar27 = (dword *)(section_00000068.segname + 10);
    pppppppuVar42 = unaff_x29;
  }
  else if (iVar19 == 7) {
    lVar21 = *(long *)(param_4 + 4);
    if (lVar21 == 0) goto LAB_0146ecb8;
    pdVar27 = (dword *)(section_00000068.segname + 0xb);
    pppppppuVar42 = unaff_x29;
    auVar51 = auVar6;
  }
  else {
    if (iVar19 != 6) {
      return param_4;
    }
    lVar21 = *(long *)(param_4 + 4);
    if (lVar21 == 0) goto LAB_0146ecb8;
    pdVar27 = (dword *)(section_00000068.segname + 0xc);
    pppppppuVar42 = unaff_x29;
    auVar51 = auVar5;
  }
code_r0x015050bc:
  uVar29 = auVar51._8_8_;
  pdVar26 = (dword *)0x0;
  *(long *)((long)register0x00000008 + -0x20) = auVar51._0_8_;
  *(dword **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = pppppppuVar42;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(long *)(lVar21 + 0x20) == 0) {
code_r0x01505118:
    func_0x00f78af4();
  }
  else {
    /*Atlas.Stats.StatsData$$IncrementStat*/ func_0x01504a24();
    lVar33 = *(long *)(lVar21 + 0x28);
    unaff_x19 = pdVar27;
    if (lVar33 == 0) goto code_r0x01505118;
    if ((uint)pdVar27 < *(uint *)(lVar33 + 0x18)) {
      pdVar27 = *(dword **)(lVar33 + (long)(int)(uint)pdVar27 * 8 + 0x20);
      if (pdVar27 == (dword *)0x0) {
        return (dword *)0x0;
      }
      uVar28 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar44 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar39 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar38 = *(undefined8 *)((long)register0x00000008 + -0x18);
      puVar15 = (undefined1 *)register0x00000008;
      goto System_Action__Invoke;
    }
  }
  uVar28 = func_0x00f78b24();
  auVar51 = func_0x00f78ac0(uVar28,0);
  lVar33 = auVar51._0_8_;
  *(long *)((long)register0x00000008 + -0x40) = lVar21;
  *(dword **)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) = &Atlas_Stats_StatsManager__DecrementStat;
  if (*(long *)(lVar33 + 0x20) != 0) {
    /*Atlas.Stats.StatsData$$DecrementStat*/ func_0x01504a78();
    lVar21 = *(long *)(lVar33 + 0x28);
    unaff_x19 = auVar51._8_8_;
    if (lVar21 != 0) {
      if (auVar51._8_4_ < *(uint *)(lVar21 + 0x18)) {
        pdVar27 = *(dword **)(lVar21 + (long)(int)auVar51._8_4_ * 8 + 0x20);
        if (pdVar27 == (dword *)0x0) {
          return (dword *)0x0;
        }
        uVar28 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar44 = *(undefined8 *)((long)register0x00000008 + -0x28);
        puVar15 = (undefined1 *)((long)register0x00000008 + -0x20);
        uVar39 = *(undefined8 *)((long)register0x00000008 + -0x40);
        uVar38 = *(undefined8 *)((long)register0x00000008 + -0x38);
System_Action__Invoke:
        uVar31 = 0;
        *(undefined8 *)(puVar15 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar15 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar15 + -0x40) = unaff_x24;
        *(undefined4 **)(puVar15 + -0x38) = unaff_x23;
        *(dword **)(puVar15 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar15 + -0x28) = uVar29;
        *(undefined8 *)(puVar15 + -0x20) = uVar39;
        *(undefined8 *)(puVar15 + -0x18) = uVar38;
        *(undefined8 *)(puVar15 + -0x10) = uVar28;
        *(undefined8 *)(puVar15 + -8) = uVar44;
        *(dword **)(puVar15 + -0x58) = pdVar27;
        lVar21 = *(long *)(pdVar27 + 0x1a);
        if (lVar21 == 0) {
          puVar15 = puVar15 + -0x58;
          lVar33 = 1;
        }
        else {
          lVar33 = *(long *)(lVar21 + 0x18);
          if (lVar33 == 0) {
            return pdVar27;
          }
          puVar15 = (undefined1 *)(lVar21 + 0x20);
        }
        lVar21 = 0;
        do {
          lVar34 = *(long *)(puVar15 + lVar21 * 8);
          pcVar40 = *(code **)(lVar34 + 0x10);
          plVar25 = *(long **)(lVar34 + 0x20);
          lVar34 = *(long *)(lVar34 + 0x28);
          if (*(short *)(lVar34 + 0x48) == -1) {
            func_0x00f78ad8(lVar34,uVar31);
          }
          iVar19 = func_0x00f78a4c(lVar34);
          if (iVar19 == 0) {
            if ((((plVar25 == (long *)0x0) || (*(short *)(lVar34 + 0x48) == -1)) ||
                ((*(byte *)(*plVar25 + 0x115) & 1) != 0)) || (*(long *)(pdVar27 + 6) == 0))
            goto code_r0x02924d98;
            iVar19 = func_0x00f78a44(lVar34);
            iVar20 = func_0x00f78ec0(lVar34);
            if (iVar19 == 0) {
              uVar1 = *(ushort *)(lVar34 + 0x48);
              if (iVar20 == 0) {
                lVar34 = *plVar25 + (ulong)uVar1 * 0x10;
                auVar51 = (**(code **)(lVar34 + 0x138))(plVar25,*(undefined8 *)(lVar34 + 0x140));
                goto code_r0x02924da4;
              }
              lVar34 = func_0x00f78a48(lVar34);
              lVar35 = *plVar25;
              uVar36 = (ulong)*(ushort *)(lVar35 + 0x12a);
              if (uVar36 != 0) {
                piVar37 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar37 + -2) == lVar34) {
                    puVar30 = (undefined8 *)
                              (lVar35 + (long)(int)(*piVar37 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar37 = piVar37 + 4;
                  uVar36 = uVar36 - 1;
                } while (uVar36 != 0);
              }
              puVar30 = (undefined8 *)func_0x00fac1f0(plVar25,lVar34,(ulong)uVar1);
code_r0x02924e68:
              pcVar40 = (code *)*puVar30;
              puVar30 = (undefined8 *)puVar30[1];
            }
            else {
              if (iVar20 == 0) {
                uVar29 = *(undefined8 *)
                          (*plVar25 + (ulong)*(ushort *)(lVar34 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar35 = *plVar25;
                uVar36 = (ulong)*(ushort *)(lVar35 + 0x12a);
                if (uVar36 != 0) {
                  piVar37 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar37 + -2) == *(long *)(lVar34 + 0x18)) {
                      lVar35 = lVar35 + (long)(int)(*piVar37 + (uint)*(ushort *)(lVar34 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar37 = piVar37 + 4;
                    uVar36 = uVar36 - 1;
                  } while (uVar36 != 0);
                }
                lVar35 = func_0x00fac1f0(plVar25);
code_r0x02924e40:
                uVar29 = *(undefined8 *)(lVar35 + 8);
              }
              puVar30 = (undefined8 *)func_0x00f78acc(uVar29,lVar34);
              pcVar40 = (code *)*puVar30;
            }
            auVar51 = (*pcVar40)(plVar25,puVar30);
          }
          else if (*(char *)(lVar34 + 0x4a) == '\0') {
            auVar51 = (*pcVar40)(lVar34);
          }
          else {
code_r0x02924d98:
            auVar51 = (*pcVar40)(plVar25,lVar34);
          }
code_r0x02924da4:
          uVar31 = auVar51._8_8_;
          lVar21 = lVar21 + 1;
          if (lVar21 == lVar33) {
            return auVar51._0_8_;
          }
        } while( true );
      }
      goto code_r0x01505188;
    }
  }
  func_0x00f78af4();
code_r0x01505188:
  uVar28 = func_0x00f78b24();
  auVar51 = func_0x00f78ac0(uVar28,0);
  auVar12 = auVar51._0_12_;
  lVar34 = auVar51._0_8_;
  auVar50._8_8_ = unaff_x19;
  auVar50._0_8_ = lVar34;
  puVar16 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(dword **)((long)register0x00000008 + -0x70) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar29;
  *(long *)((long)register0x00000008 + -0x60) = lVar33;
  *(dword **)((long)register0x00000008 + -0x58) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x48) = &Atlas_Stats_StatsManager__SetStat;
  puVar15 = (undefined1 *)((long)register0x00000008 + -0x50);
  lVar21 = *(long *)(lVar34 + 0x20);
  if (lVar21 == 0) {
    func_0x00f78af4();
    uVar28 = func_0x00f78b24();
    auVar51 = func_0x00f78ac0(uVar28,0);
    auVar8._8_8_ = auVar51._8_8_;
    auVar8._0_8_ = lVar34;
    auVar12 = auVar8._0_12_;
    *(undefined1 **)((long)register0x00000008 + -0x80) = puVar15;
    *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_Stats_StatsManager__GetStat;
    lVar21 = *(long *)(auVar51._0_8_ + 0x20);
    if (lVar21 == 0) {
      auVar51 = func_0x00f78af4();
      auVar9._8_8_ = auVar51._8_8_;
      auVar9._0_8_ = lVar34;
      auVar12 = auVar9._0_12_;
      *(undefined1 **)((long)register0x00000008 + -0x90) =
           (undefined1 *)((long)register0x00000008 + -0x80);
      *(undefined **)((long)register0x00000008 + -0x88) =
           &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar21 = *(long *)(auVar51._0_8_ + 0x18);
      if (lVar21 == 0) {
        auVar51 = func_0x00f78af4();
        auVar10._8_8_ = auVar51._8_8_;
        auVar10._0_8_ = lVar34;
        auVar12 = auVar10._0_12_;
        puVar15 = (undefined1 *)((long)register0x00000008 + -0xa0);
        *(undefined1 **)((long)register0x00000008 + -0xa0) =
             (undefined1 *)((long)register0x00000008 + -0x90);
        *(undefined **)((long)register0x00000008 + -0x98) =
             &Atlas_Stats_StatsManager__GetCommittedStat;
        lVar21 = *(long *)(auVar51._0_8_ + 0x10);
        if (lVar21 == 0) {
          puVar43 = &Atlas_Stats_StatsManager__GetGlobalStat;
          auVar49 = func_0x00f78af4();
          puVar17 = (undefined1 *)((long)register0x00000008 + -0xa0);
          while( true ) {
            auVar12 = auVar49._0_12_;
            unaff_x19 = auVar49._8_8_;
            lVar33 = auVar49._0_8_;
            auVar11._8_8_ = auVar50._8_8_;
            auVar11._0_8_ = lVar33;
            puVar16 = puVar17 + -0x30;
            *(dword **)(puVar17 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar17 + -0x28) = uVar29;
            *(undefined1 (*) [16])(puVar17 + -0x20) = auVar50;
            *(undefined1 **)(puVar17 + -0x10) = puVar15;
            *(undefined **)(puVar17 + -8) = puVar43;
            puVar15 = puVar17 + -0x10;
            lVar21 = *(long *)(lVar33 + 0x10);
            if (lVar21 != 0) break;
            auVar51 = func_0x00f78af4();
            unaff_x19 = auVar51._8_8_;
            puVar16 = puVar17 + -0x70;
            *(undefined8 *)(puVar17 + -0x70) = unaff_x24;
            *(undefined4 **)(puVar17 + -0x68) = unaff_x23;
            *(dword **)(puVar17 + -0x60) = unaff_x22;
            *(undefined8 *)(puVar17 + -0x58) = uVar29;
            *(long *)(puVar17 + -0x50) = lVar33;
            *(long *)(puVar17 + -0x48) = auVar50._8_8_;
            *(undefined1 **)(puVar17 + -0x40) = puVar15;
            *(undefined **)(puVar17 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            puVar15 = puVar17 + -0x40;
            if (unaff_x19 == (dword *)0x0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(unaff_x19 + 6) < 1) {
                return (dword *)0x0;
              }
              uVar29 = 0;
              unaff_x22 = (dword *)0x0;
              unaff_x23 = unaff_x19 + 8;
              auVar11 = auVar51;
              if ((*(ulong *)(unaff_x19 + 6) & 0xffffffff) != 0) {
                lVar21 = *(long *)(auVar51._0_8_ + 0x10);
                if (lVar21 == 0) goto code_r0x01505370;
                auVar12._8_4_ = *unaff_x23;
                auVar12._0_8_ = auVar51._0_8_;
                puVar43 = &UNK_0150533c;
                goto code_r0x01504b20;
              }
            }
            uVar28 = func_0x00f78b24();
            auVar51 = func_0x00f78ac0(uVar28,0);
            unaff_x19 = auVar51._8_8_;
            puVar16 = puVar17 + -0xb0;
            *(undefined8 *)(puVar17 + -0xb0) = unaff_x24;
            *(undefined4 **)(puVar17 + -0xa8) = unaff_x23;
            *(dword **)(puVar17 + -0xa0) = unaff_x22;
            *(undefined8 *)(puVar17 + -0x98) = uVar29;
            *(undefined1 (*) [16])(puVar17 + -0x90) = auVar11;
            *(undefined1 **)(puVar17 + -0x80) = puVar15;
            *(undefined **)(puVar17 + -0x78) = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            puVar15 = puVar17 + -0x80;
            if (unaff_x19 == (dword *)0x0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(unaff_x19 + 6) < 1) {
                return (dword *)0x0;
              }
              uVar29 = 0;
              unaff_x22 = (dword *)0x0;
              unaff_x23 = unaff_x19 + 8;
              auVar11 = auVar51;
              if ((*(ulong *)(unaff_x19 + 6) & 0xffffffff) != 0) {
                lVar21 = *(long *)(auVar51._0_8_ + 0x18);
                if (lVar21 == 0) goto code_r0x01505408;
                auVar12._8_4_ = *unaff_x23;
                auVar12._0_8_ = auVar51._0_8_;
                puVar43 = &UNK_015053d4;
                goto code_r0x01504b20;
              }
            }
            uVar28 = func_0x00f78b24();
            auVar50 = func_0x00f78ac0(uVar28,0);
            lVar21 = auVar50._8_8_;
            *(undefined8 *)(puVar17 + -0xf0) = unaff_x24;
            *(undefined4 **)(puVar17 + -0xe8) = unaff_x23;
            *(dword **)(puVar17 + -0xe0) = unaff_x22;
            *(undefined8 *)(puVar17 + -0xd8) = uVar29;
            *(undefined1 (*) [16])(puVar17 + -0xd0) = auVar11;
            *(undefined1 **)(puVar17 + -0xc0) = puVar15;
            *(undefined **)(puVar17 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            puVar15 = puVar17 + -0xc0;
            if (lVar21 == 0) {
code_r0x015054a8:
              uVar28 = func_0x00f78af4();
              *(dword **)(puVar17 + -0x120) = unaff_x22;
              *(undefined8 *)(puVar17 + -0x118) = uVar29;
              *(undefined1 (*) [16])(puVar17 + -0x110) = auVar11;
              *(undefined1 **)(puVar17 + -0x100) = puVar15;
              *(undefined **)(puVar17 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)(puVar17 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar28,puVar17 + -0x124);
              return (dword *)(ulong)*(uint *)(puVar17 + -0x124);
            }
            if ((int)*(ulong *)(lVar21 + 0x18) < 1) {
              return (dword *)0x0;
            }
            uVar29 = 0;
            unaff_x22 = (dword *)0x0;
            unaff_x23 = (undefined4 *)(lVar21 + 0x20);
            if ((*(ulong *)(lVar21 + 0x18) & 0xffffffff) == 0) {
              uVar28 = func_0x00f78b24();
              func_0x00f78ac0(uVar28,0);
              auVar11 = auVar50;
              goto code_r0x015054a8;
            }
            auVar49._8_4_ = *unaff_x23;
            auVar49._0_8_ = auVar50._0_8_;
            auVar49._12_4_ = 0;
            puVar43 = &UNK_01505468;
            puVar17 = puVar17 + -0xf0;
          }
          puVar43 = &UNK_015052bc;
        }
        else {
          puVar16 = (undefined1 *)((long)register0x00000008 + -0x90);
          puVar15 = *(undefined1 **)((long)register0x00000008 + -0xa0);
          puVar43 = *(undefined **)((long)register0x00000008 + -0x98);
        }
      }
      else {
        puVar16 = (undefined1 *)((long)register0x00000008 + -0x80);
        puVar15 = *(undefined1 **)((long)register0x00000008 + -0x90);
        puVar43 = *(undefined **)((long)register0x00000008 + -0x88);
      }
    }
    else {
      puVar16 = (undefined1 *)((long)register0x00000008 + -0x70);
      puVar15 = *(undefined1 **)((long)register0x00000008 + -0x80);
      puVar43 = *(undefined **)((long)register0x00000008 + -0x78);
    }
  }
  else {
    puVar43 = &UNK_015051c0;
    unaff_x19 = auVar51._8_8_;
    unaff_x22 = pdVar26;
  }
code_r0x01504b20:
  *(undefined1 **)(puVar16 + -0x10) = puVar15;
  *(undefined **)(puVar16 + -8) = puVar43;
  lVar21 = *(long *)(lVar21 + 0x10);
  if (lVar21 == 0) {
    func_0x00f78af4();
  }
  else if (auVar12._8_4_ < *(uint *)(lVar21 + 0x18)) {
    return (dword *)(ulong)*(uint *)(lVar21 + (long)(int)auVar12._8_4_ * 4 + 0x20);
  }
  uVar28 = func_0x00f78b24();
  auVar51 = func_0x00f78ac0(uVar28,0);
  lVar21 = auVar51._8_8_;
  pdVar26 = auVar51._0_8_;
  *(undefined8 *)(puVar16 + -0x50) = unaff_x24;
  *(undefined4 **)(puVar16 + -0x48) = unaff_x23;
  *(dword **)(puVar16 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar16 + -0x38) = uVar29;
  *(long *)(puVar16 + -0x30) = auVar12._0_8_;
  *(dword **)(puVar16 + -0x28) = unaff_x19;
  *(undefined1 **)(puVar16 + -0x20) = puVar16 + -0x10;
  *(undefined **)(puVar16 + -0x18) = &Atlas_Stats_StatsData__UpdateToLargestValues;
  pdVar27 = pdVar26;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    pdVar27 = (dword *)func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar33 = *(long *)(pdVar26 + 4);
  if (((lVar33 != 0) && (lVar21 != 0)) && (*(long *)(lVar21 + 0x10) != 0)) {
    iVar19 = *(int *)(lVar33 + 0x18);
    unaff_x22 = *(dword **)(*(long *)(lVar21 + 0x10) + 0x18);
    if (iVar19 < (int)unaff_x22) {
      lVar33 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      pdVar27 = (dword *)/*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(pdVar26 + 4),lVar33,iVar19,0);
      *(long *)(pdVar26 + 4) = lVar33;
    }
    if ((int)unaff_x22 < 1) {
      return pdVar27;
    }
    if (lVar33 != 0) {
      uVar36 = 0;
      uVar18 = *(uint *)(lVar33 + 0x18);
      while (uVar18 != uVar36) {
        lVar34 = *(long *)(lVar21 + 0x10);
        if (lVar34 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar34 + 0x18) <= uVar36) || (uVar18 <= uVar36)) break;
        iVar19 = *(int *)(lVar33 + 0x20 + uVar36 * 4);
        iVar20 = *(int *)(lVar34 + uVar36 * 4 + 0x20);
        if (iVar19 <= iVar20) {
          iVar19 = iVar20;
        }
        *(int *)(lVar33 + 0x20 + uVar36 * 4) = iVar19;
        uVar36 = uVar36 + 1;
        if (((ulong)unaff_x22 & 0xffffffff) == uVar36) {
          return pdVar27;
        }
      }
      uVar29 = func_0x00f78b24();
      func_0x00f78ac0(uVar29,0);
    }
  }
code_r0x01504c70:
  func_0x00f78af4();
  *(dword **)(puVar16 + -0x80) = unaff_x22;
  *(long *)(puVar16 + -0x78) = lVar33;
  *(undefined1 (*) [16])(puVar16 + -0x70) = auVar51;
  *(undefined1 **)(puVar16 + -0x60) = puVar16 + -0x20;
  *(undefined **)(puVar16 + -0x58) = &Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  pdVar27 = (dword *)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return pdVar27;
}



// ============================================================
// RVA: 0x146ecbc | Atlas.Stats.AtlasStats.OnUsableHitPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x0146ed20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ed54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ed9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015052b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015053d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ee7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f0f4) */
/* WARNING: Removing unreachable block (ram,0x0146f0fc) */
/* WARNING: Removing unreachable block (ram,0x0146f104) */
/* WARNING: Removing unreachable block (ram,0x0146f128) */
/* WARNING: Removing unreachable block (ram,0x0146f14c) */
/* WARNING: Removing unreachable block (ram,0x0146f15c) */
/* WARNING: Removing unreachable block (ram,0x0146f164) */
/* WARNING: Removing unreachable block (ram,0x0146f138) */
/* WARNING: Removing unreachable block (ram,0x0146f140) */
/* WARNING: Removing unreachable block (ram,0x0146f114) */
/* WARNING: Removing unreachable block (ram,0x0146f11c) */
/* WARNING: Removing unreachable block (ram,0x0146ee80) */
/* WARNING: Removing unreachable block (ram,0x0146ee84) */
/* WARNING: Removing unreachable block (ram,0x0146ee90) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Removing unreachable block (ram,0x015053d4) */
/* WARNING: Removing unreachable block (ram,0x015053e8) */
/* WARNING: Removing unreachable block (ram,0x0150533c) */
/* WARNING: Removing unreachable block (ram,0x01505350) */
/* WARNING: Removing unreachable block (ram,0x015052bc) */
/* WARNING: Removing unreachable block (ram,0x015052c8) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x015051e8) */
/* WARNING: Removing unreachable block (ram,0x015051f0) */
/* WARNING: Removing unreachable block (ram,0x015051f8) */
/* WARNING: Removing unreachable block (ram,0x01505204) */
/* WARNING: Removing unreachable block (ram,0x01505224) */
/* WARNING: Removing unreachable block (ram,0x01505210) */
/* WARNING: Removing unreachable block (ram,0x015051c0) */
/* WARNING: Removing unreachable block (ram,0x015051cc) */
/* WARNING: Removing unreachable block (ram,0x015051e0) */
/* WARNING: Removing unreachable block (ram,0x0146ed58) */
/* WARNING: Removing unreachable block (ram,0x0146ed8c) */
/* WARNING: Removing unreachable block (ram,0x0146ed94) */
/* WARNING: Removing unreachable block (ram,0x0146ed6c) */
/* WARNING: Removing unreachable block (ram,0x0146ed74) */
/* WARNING: Removing unreachable block (ram,0x0146ed7c) */
/* WARNING: Removing unreachable block (ram,0x0146ed98) */
/* WARNING: Removing unreachable block (ram,0x0146ed24) */
/* WARNING: Removing unreachable block (ram,0x0146ed28) */
/* WARNING: Removing unreachable block (ram,0x0146ed30) */
/* WARNING: Removing unreachable block (ram,0x0146ed38) */
/* WARNING: Removing unreachable block (ram,0x0146ed44) */
/* WARNING: Removing unreachable block (ram,0x0146ed4c) */
/* WARNING: Removing unreachable block (ram,0x0146f298) */
/* WARNING: Removing unreachable block (ram,0x0146f2a0) */
/* WARNING: Removing unreachable block (ram,0x024660f8) */
/* WARNING: Removing unreachable block (ram,0x0246610c) */
/* WARNING: Removing unreachable block (ram,0x02466124) */
/* WARNING: Removing unreachable block (ram,0x02466154) */
/* WARNING: Removing unreachable block (ram,0x02466158) */
/* WARNING: Removing unreachable block (ram,0x02466160) */
/* WARNING: Removing unreachable block (ram,0x0246618c) */
/* WARNING: Removing unreachable block (ram,0x024661d8) */
/* WARNING: Removing unreachable block (ram,0x024661f4) */
/* WARNING: Removing unreachable block (ram,0x024661fc) */
/* WARNING: Removing unreachable block (ram,0x02466264) */
/* WARNING: Removing unreachable block (ram,0x02466200) */
/* WARNING: Removing unreachable block (ram,0x0246626c) */
/* WARNING: Removing unreachable block (ram,0x0246633c) */
/* WARNING: Removing unreachable block (ram,0x02466214) */
/* WARNING: Removing unreachable block (ram,0x0246616c) */

ulong Atlas_Stats_AtlasStats__OnUsableHitPlayer
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4,
                long *param_5,long *param_6,long param_7,ulong param_8)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined8 *******pppppppuVar9;
  undefined1 *puVar10;
  long **pplVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar17;
  long lVar18;
  ulong uVar19;
  uint uVar16;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  dword *pdVar25;
  long *plVar26;
  dword *pdVar27;
  undefined8 uVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  int *piVar35;
  undefined8 unaff_x19;
  undefined8 uVar36;
  undefined8 unaff_x20;
  long *plVar37;
  undefined8 uVar38;
  long *unaff_x21;
  long *unaff_x22;
  code *pcVar39;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar40;
  undefined *unaff_x30;
  undefined *puVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 ******ppppppuStack_110;
  undefined *puStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined *puStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  long lStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  ulong uVar20;
  
  auVar49._8_8_ = unaff_x20;
  auVar49._0_8_ = unaff_x19;
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = param_7;
  if ((*(char *)(param_4 + 0x5d) == '\0') || (*(int *)(param_4 + 0x60) != 1)) {
    return param_4;
  }
  plVar29 = param_6;
  lVar31 = param_7;
  if (param_6 == (long *)0x0) {
LAB_0146ede4:
    auVar44 = func_0x00f78af4();
    auVar45._8_8_ = param_8;
    auVar45._0_8_ = lVar31;
    plVar21 = auVar44._8_8_;
    uVar34 = auVar44._0_8_;
    puStack_38 = &Atlas_Stats_AtlasStats__OnUsableHitShield;
    unaff_x23 = (undefined4 *)0x3eb4000;
    uVar19 = uVar34;
    ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4862 & 1) == 0) {
      uVar19 = func_0x00f78a20(0x3d1fed8);
      bRam0000000003eb4862 = 1;
    }
    if ((*(char *)(uVar34 + 0x5d) == '\0') || (*(int *)(uVar34 + 0x60) != 1)) {
      return uVar19;
    }
    if (plVar21 == (long *)0x0) {
      puVar41 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByShieldStat;
      auVar45 = func_0x00f78af4();
    }
    else {
      uVar19 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(plVar21,0);
      if ((int)uVar19 == 0) {
        return uVar19;
      }
      if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar41 = &UNK_0146ee80;
    }
    plVar26 = auVar45._8_8_;
    plVar22 = auVar45._0_8_;
    unaff_x21 = (long *)0x3eb4000;
    lStack_98 = lVar31;
    uStack_90 = param_8;
    ppppppuStack_80 = &ppppppuStack_40;
    puStack_78 = puVar41;
    if ((bRam0000000003eb4864 & 1) == 0) {
      plStack_a0 = plVar21;
      plStack_88 = (long *)uVar34;
      func_0x00f78a20(0x3d1fed8);
      auVar44._8_8_ = plStack_a0;
      auVar44._0_8_ = plStack_88;
      bRam0000000003eb4864 = 1;
    }
    plStack_a0 = auVar44._8_8_;
    plStack_88 = auVar44._0_8_;
    if (plVar26 == (long *)0x0) {
      auVar49 = func_0x00f78af4();
      plVar37 = auVar49._0_8_;
      puStack_a8 = &Atlas_Stats_AtlasStats__OnUsableUsed;
      if ((*(char *)((long)plVar37 + 0x5d) == '\0') || ((int)plVar37[0xc] != 1)) {
        return (ulong)plVar37;
      }
      plVar30 = plVar29;
      plStack_b8 = plVar22;
      ppppppuStack_b0 = &ppppppuStack_80;
      unaff_x22 = plVar21;
      if (auVar49._8_8_ != 0) {
        plStack_c0 = plVar26;
        uVar19 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(auVar49._8_8_,0);
        auVar49._8_8_ = plStack_c0;
        auVar49._0_8_ = plStack_b8;
        auVar2._8_8_ = plStack_c0;
        auVar2._0_8_ = plVar29;
        auVar45._8_8_ = plStack_c0;
        auVar45._0_8_ = plVar29;
        if ((int)uVar19 == 0) {
          return uVar19;
        }
        if ((plVar29 != (long *)0x0) && (lVar18 = plVar37[2], auVar45 = auVar2, lVar18 != 0)) {
          pdVar25 = (dword *)(ulong)*(uint *)(plVar29 + 0xc);
          pplVar11 = &plStack_a0;
          unaff_x29 = (undefined8 *******)ppppppuStack_b0;
          unaff_x30 = puStack_a8;
          goto code_r0x015050bc;
        }
      }
      plStack_c0 = auVar45._8_8_;
      auVar49 = func_0x00f78af4();
      uVar19 = auVar49._0_8_;
      puStack_c8 = &Atlas_Stats_AtlasStats__OnUsableHoppedOver;
      if ((*(char *)(uVar19 + 0x5d) == '\0') || (*(int *)(uVar19 + 0x60) != 1)) {
        return uVar19;
      }
      plVar29 = plVar30;
      plStack_e0 = plVar37;
      uStack_d8 = auVar45._0_8_;
      ppppppuStack_d0 = &ppppppuStack_b0;
      if (auVar49._8_8_ != 0) {
        uVar34 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(auVar49._8_8_,0);
        auVar49._8_8_ = plStack_e0;
        auVar49._0_8_ = uStack_d8;
        if ((int)uVar34 == 0) {
          return uVar34;
        }
        iVar15 = (int)plVar30;
        plVar37 = plVar30;
        if (iVar15 != 5) {
          if (iVar15 == 1) {
            lVar18 = *(long *)(uVar19 + 0x10);
            if (lVar18 == 0) goto code_r0x0146f0a0;
            pdVar25 = (dword *)((long)&segment_command_00000020.maxprot + 1);
          }
          else {
            if (iVar15 != 0) {
              return uVar34;
            }
            lVar18 = *(long *)(uVar19 + 0x10);
            if (lVar18 == 0) goto code_r0x0146f0a0;
            pdVar25 = &segment_command_00000020.maxprot;
          }
code_r0x0146f090:
          pplVar11 = &plStack_c0;
          unaff_x29 = (undefined8 *******)ppppppuStack_d0;
          unaff_x30 = puStack_c8;
          goto code_r0x015050bc;
        }
        lVar18 = *(long *)(uVar19 + 0x10);
        if (lVar18 != 0) {
          pdVar25 = (dword *)((long)&segment_command_00000020.maxprot + 2);
          goto code_r0x0146f090;
        }
      }
code_r0x0146f0a0:
      auVar46 = func_0x00f78af4();
      lVar31 = auVar46._8_8_;
      uVar20 = auVar46._0_8_;
      pplVar11 = &plStack_100;
      puStack_e8 = &Atlas_Stats_AtlasStats__OnBoxHit;
      uVar34 = uVar20;
      if ((((*(char *)(uVar20 + 0x5d) == '\0') || (lVar31 == 0)) || (*(int *)(uVar20 + 0x60) != 1))
         || (plStack_100 = plVar37, uStack_f8 = uVar19, ppppppuStack_f0 = &ppppppuStack_d0,
            uVar34 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(lVar31,0),
            (int)uVar34 == 0)) {
        return uVar34;
      }
      lVar18 = *(long *)(uVar20 + 0x10);
      if (lVar18 != 0) {
        pdVar25 = &MACH_HEADER.sizeofcmds;
        unaff_x30 = &UNK_0146f0f4;
        unaff_x29 = &ppppppuStack_f0;
        auVar49 = auVar46;
        goto code_r0x015050bc;
      }
      auVar49 = func_0x00f78af4();
      unaff_x21 = auVar49._8_8_;
      uVar19 = auVar49._0_8_;
      auVar49._8_8_ = uVar19;
      auVar49._0_8_ = plVar29;
      pplVar11 = &plStack_130;
      uStack_128 = 0x3eb4000;
      puStack_108 = &Atlas_Stats_AtlasStats__OnKartEnterShortcut;
      unaff_x29 = &ppppppuStack_110;
      unaff_x22 = (long *)0x3eb4000;
      uVar34 = uVar19;
      plStack_130 = plVar21;
      ppppppuStack_110 = &ppppppuStack_f0;
      if ((bRam0000000003eb4863 & 1) == 0) {
        lStack_120 = lVar31;
        uStack_118 = uVar20;
        func_0x00f78a20(0x3d3c048);
        func_0x00f78a20(0x3d3c058);
        uVar34 = func_0x00f78a20(0x3d24070);
        auVar46._8_8_ = lStack_120;
        auVar46._0_8_ = uStack_118;
        bRam0000000003eb4863 = 1;
      }
      lStack_120 = auVar46._8_8_;
      uStack_118 = auVar46._0_8_;
      if (((*(char *)(uVar19 + 0x5d) == '\0') || (*(int *)(uVar19 + 0x60) != 1)) ||
         (*(long **)(uVar19 + 0x18) != unaff_x21)) {
        return uVar34;
      }
      if (unaff_x21 != (long *)0x0) {
        plVar21 = (long *)unaff_x21[0xd];
        if (plVar21 != (long *)0x0) {
          if ((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar21 + 300)) &&
             (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8
                       + -8) == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
            uVar34 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar21,0);
            auVar46._8_8_ = lStack_120;
            auVar46._0_8_ = uStack_118;
            if ((int)uVar34 < *(int *)(uVar19 + 0x58)) {
              return uVar34;
            }
          }
        }
        lStack_120 = auVar46._8_8_;
        uStack_118 = auVar46._0_8_;
        if ((plVar29 != (long *)0x0) && (*(long *)(uVar19 + 0x50) != 0)) {
          uVar34 = /*System.Collections.Generic.List<StringID>$$Contains*/ func_0x02466428(*(long *)(uVar19 + 0x50),plVar29[3],uRam0000000003d3c058);
          auVar46._8_8_ = lStack_120;
          auVar46._0_8_ = uStack_118;
          if ((uVar34 & 1) != 0) {
            return uVar34;
          }
          lVar18 = *(long *)(uVar19 + 0x10);
          if (lVar18 != 0) {
            pdVar25 = (dword *)((long)&segment_command_00000020.flags + 3);
            unaff_x30 = &UNK_0146f298;
            goto code_r0x015050bc;
          }
        }
      }
      lStack_120 = auVar46._8_8_;
      uStack_118 = auVar46._0_8_;
      auVar49 = func_0x00f78af4();
      uVar34 = auVar49._0_8_;
      pppppppuVar9 = &ppppppuStack_140;
      pppppppuVar40 = &ppppppuStack_140;
      puStack_138 = &Atlas_Stats_AtlasStats__OnRespawn;
      if (auVar49._8_8_ != 0) {
        if (*(long *)(uVar34 + 0x18) == *(long *)(auVar49._8_8_ + 0x10)) {
          *(undefined1 *)(uVar34 + 0x5c) = 1;
        }
        return uVar34;
      }
      puVar41 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByNormalShieldStat;
      ppppppuStack_140 = unaff_x29;
      plVar22 = (long *)func_0x00f78af4();
    }
    else {
      iVar15 = (**(code **)(*plVar26 + 0x188))(plVar26,*(undefined8 *)(*plVar26 + 400));
      if (iVar15 == 6) {
        if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar10 = &stack0xffffffffffffff90;
        plVar29 = plStack_88;
        uVar19 = uStack_90;
        pppppppuVar40 = (undefined8 *******)ppppppuStack_80;
        puVar41 = puStack_78;
        goto code_r0x0146f334;
      }
      if (iVar15 != 3) {
        return 0;
      }
      if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pppppppuVar9 = (undefined8 *******)&stack0xffffffffffffff90;
      plVar29 = plStack_88;
      uVar19 = uStack_90;
      pppppppuVar40 = (undefined8 *******)ppppppuStack_80;
      puVar41 = puStack_78;
    }
    puVar10 = (undefined1 *)((long)pppppppuVar9 + -0x10);
    *(undefined8 ********)((long)pppppppuVar9 + -0x10) = pppppppuVar40;
    *(undefined **)((long)pppppppuVar9 + -8) = puVar41;
    if (plVar22 != (long *)0x0) {
      uVar16 = (**(code **)(*plVar22 + 0x188))(plVar22,*(undefined8 *)(*plVar22 + 400));
      if (uVar16 < 8) {
        uVar19 = (ulong)*(uint *)(&UNK_033f831c + (long)(int)uVar16 * 4);
      }
      else {
        uVar19 = 0;
      }
      return uVar19;
    }
    plVar22 = (long *)func_0x00f78af4();
    pppppppuVar40 = (undefined8 *******)((long)pppppppuVar9 + -0x10);
    puVar41 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByTimeCheaterStat;
code_r0x0146f334:
    *(undefined8 ********)(puVar10 + -0x10) = pppppppuVar40;
    *(undefined **)(puVar10 + -8) = puVar41;
    if (plVar22 == (long *)0x0) {
      uVar34 = func_0x00f78af4();
      *(ulong *)(puVar10 + -0x30) = uVar19;
      *(long **)(puVar10 + -0x28) = plVar29;
      *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x18) = &Atlas_Stats_AtlasStats___ctor;
      uVar43 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      *(undefined4 *)(uVar34 + 0x2c) = uVar43;
      *(undefined4 *)(uVar34 + 0x30) = param_2;
      *(undefined4 *)(uVar34 + 0x34) = param_3;
      return uVar34;
    }
    uVar16 = (**(code **)(*plVar22 + 0x188))(plVar22,*(undefined8 *)(*plVar22 + 400));
    if (uVar16 < 8) {
      uVar19 = (ulong)*(uint *)(&UNK_033f833c + (long)(int)uVar16 * 4);
    }
    else {
      uVar19 = 0;
    }
    return uVar19;
  }
  iVar15 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(param_6,0);
  if ((param_6 == param_5) || (iVar15 == 0)) {
    if (param_5 != (long *)0x0) {
      uVar19 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(param_5,0);
      if ((int)uVar19 == 0) {
        return uVar19;
      }
      if ((param_7 != 0) && (lVar18 = *(long *)(param_4 + 0x10), lVar18 != 0)) {
        pdVar25 = (dword *)(ulong)*(uint *)(param_7 + 0x5c);
        pplVar11 = (long **)register0x00000008;
        goto code_r0x015050bc;
      }
    }
    goto LAB_0146ede4;
  }
  if ((param_7 == 0) || (lVar18 = *(long *)(param_4 + 0x10), lVar18 == 0)) goto LAB_0146ede4;
  pdVar25 = (dword *)(ulong)*(uint *)(param_7 + 0x58);
  unaff_x30 = (undefined *)0x146ed24;
  pplVar11 = (long **)&stack0xffffffffffffffd0;
  unaff_x21 = param_5;
  unaff_x22 = param_6;
  unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
  auVar49 = auVar3;
code_r0x015050bc:
  plVar29 = (long *)0x0;
  *(long *)((long)pplVar11 + -0x20) = auVar49._8_8_;
  *(dword **)((long)pplVar11 + -0x18) = auVar49._0_8_;
  *(undefined8 ********)((long)pplVar11 + -0x10) = unaff_x29;
  *(undefined **)((long)pplVar11 + -8) = unaff_x30;
  pdVar27 = auVar49._0_8_;
  if (*(long *)(lVar18 + 0x20) == 0) {
code_r0x01505118:
    func_0x00f78af4();
  }
  else {
    /*Atlas.Stats.StatsData$$IncrementStat*/ func_0x01504a24();
    lVar31 = *(long *)(lVar18 + 0x28);
    pdVar27 = pdVar25;
    if (lVar31 == 0) goto code_r0x01505118;
    if ((uint)pdVar25 < *(uint *)(lVar31 + 0x18)) {
      uVar19 = *(ulong *)(lVar31 + (long)(int)(uint)pdVar25 * 8 + 0x20);
      if (uVar19 == 0) {
        return 0;
      }
      uVar23 = *(undefined8 *)((long)pplVar11 + -0x10);
      uVar42 = *(undefined8 *)((long)pplVar11 + -8);
      uVar38 = *(undefined8 *)((long)pplVar11 + -0x20);
      uVar36 = *(undefined8 *)((long)pplVar11 + -0x18);
      puVar12 = (undefined1 *)pplVar11;
      goto System_Action__Invoke;
    }
  }
  uVar23 = func_0x00f78b24();
  auVar49 = func_0x00f78ac0(uVar23,0);
  lVar31 = auVar49._0_8_;
  *(long *)((long)pplVar11 + -0x40) = lVar18;
  *(dword **)((long)pplVar11 + -0x38) = pdVar27;
  *(undefined1 **)((long)pplVar11 + -0x30) = (undefined1 *)((long)pplVar11 + -0x10);
  *(undefined **)((long)pplVar11 + -0x28) = &Atlas_Stats_StatsManager__DecrementStat;
  if (*(long *)(lVar31 + 0x20) != 0) {
    /*Atlas.Stats.StatsData$$DecrementStat*/ func_0x01504a78();
    lVar18 = *(long *)(lVar31 + 0x28);
    pdVar27 = auVar49._8_8_;
    if (lVar18 != 0) {
      if (auVar49._8_4_ < *(uint *)(lVar18 + 0x18)) {
        uVar19 = *(ulong *)(lVar18 + (long)(int)auVar49._8_4_ * 8 + 0x20);
        if (uVar19 == 0) {
          return 0;
        }
        uVar23 = *(undefined8 *)((long)pplVar11 + -0x30);
        uVar42 = *(undefined8 *)((long)pplVar11 + -0x28);
        puVar12 = (undefined1 *)((long)pplVar11 + -0x20);
        uVar38 = *(undefined8 *)((long)pplVar11 + -0x40);
        uVar36 = *(undefined8 *)((long)pplVar11 + -0x38);
System_Action__Invoke:
        uVar28 = 0;
        *(undefined8 *)(puVar12 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar12 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar12 + -0x40) = unaff_x24;
        *(undefined4 **)(puVar12 + -0x38) = unaff_x23;
        *(long **)(puVar12 + -0x30) = unaff_x22;
        *(long **)(puVar12 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar12 + -0x20) = uVar38;
        *(undefined8 *)(puVar12 + -0x18) = uVar36;
        *(undefined8 *)(puVar12 + -0x10) = uVar23;
        *(undefined8 *)(puVar12 + -8) = uVar42;
        *(ulong *)(puVar12 + -0x58) = uVar19;
        lVar31 = *(long *)(uVar19 + 0x68);
        if (lVar31 == 0) {
          puVar12 = puVar12 + -0x58;
          lVar18 = 1;
        }
        else {
          lVar18 = *(long *)(lVar31 + 0x18);
          if (lVar18 == 0) {
            return uVar19;
          }
          puVar12 = (undefined1 *)(lVar31 + 0x20);
        }
        lVar31 = 0;
        do {
          lVar32 = *(long *)(puVar12 + lVar31 * 8);
          pcVar39 = *(code **)(lVar32 + 0x10);
          plVar29 = *(long **)(lVar32 + 0x20);
          lVar32 = *(long *)(lVar32 + 0x28);
          if (*(short *)(lVar32 + 0x48) == -1) {
            func_0x00f78ad8(lVar32,uVar28);
          }
          iVar15 = func_0x00f78a4c(lVar32);
          if (iVar15 == 0) {
            if ((((plVar29 == (long *)0x0) || (*(short *)(lVar32 + 0x48) == -1)) ||
                ((*(byte *)(*plVar29 + 0x115) & 1) != 0)) || (*(long *)(uVar19 + 0x18) == 0))
            goto code_r0x02924d98;
            iVar15 = func_0x00f78a44(lVar32);
            iVar17 = func_0x00f78ec0(lVar32);
            if (iVar15 == 0) {
              uVar1 = *(ushort *)(lVar32 + 0x48);
              if (iVar17 == 0) {
                lVar32 = *plVar29 + (ulong)uVar1 * 0x10;
                auVar49 = (**(code **)(lVar32 + 0x138))(plVar29,*(undefined8 *)(lVar32 + 0x140));
                goto code_r0x02924da4;
              }
              lVar32 = func_0x00f78a48(lVar32);
              lVar33 = *plVar29;
              uVar34 = (ulong)*(ushort *)(lVar33 + 0x12a);
              if (uVar34 != 0) {
                piVar35 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar35 + -2) == lVar32) {
                    puVar24 = (undefined8 *)
                              (lVar33 + (long)(int)(*piVar35 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar35 = piVar35 + 4;
                  uVar34 = uVar34 - 1;
                } while (uVar34 != 0);
              }
              puVar24 = (undefined8 *)func_0x00fac1f0(plVar29,lVar32,(ulong)uVar1);
code_r0x02924e68:
              pcVar39 = (code *)*puVar24;
              puVar24 = (undefined8 *)puVar24[1];
            }
            else {
              if (iVar17 == 0) {
                uVar23 = *(undefined8 *)
                          (*plVar29 + (ulong)*(ushort *)(lVar32 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar33 = *plVar29;
                uVar34 = (ulong)*(ushort *)(lVar33 + 0x12a);
                if (uVar34 != 0) {
                  piVar35 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == *(long *)(lVar32 + 0x18)) {
                      lVar33 = lVar33 + (long)(int)(*piVar35 + (uint)*(ushort *)(lVar32 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar35 = piVar35 + 4;
                    uVar34 = uVar34 - 1;
                  } while (uVar34 != 0);
                }
                lVar33 = func_0x00fac1f0(plVar29);
code_r0x02924e40:
                uVar23 = *(undefined8 *)(lVar33 + 8);
              }
              puVar24 = (undefined8 *)func_0x00f78acc(uVar23,lVar32);
              pcVar39 = (code *)*puVar24;
            }
            auVar49 = (*pcVar39)(plVar29,puVar24);
          }
          else if (*(char *)(lVar32 + 0x4a) == '\0') {
            auVar49 = (*pcVar39)(lVar32);
          }
          else {
code_r0x02924d98:
            auVar49 = (*pcVar39)(plVar29,lVar32);
          }
code_r0x02924da4:
          uVar28 = auVar49._8_8_;
          lVar31 = lVar31 + 1;
          if (lVar31 == lVar18) {
            return auVar49._0_8_;
          }
        } while( true );
      }
      goto code_r0x01505188;
    }
  }
  func_0x00f78af4();
code_r0x01505188:
  uVar23 = func_0x00f78b24();
  auVar49 = func_0x00f78ac0(uVar23,0);
  auVar8 = auVar49._0_12_;
  lVar18 = auVar49._0_8_;
  auVar48._8_8_ = pdVar27;
  auVar48._0_8_ = lVar18;
  puVar13 = (undefined1 *)((long)pplVar11 + -0x70);
  *(long **)((long)pplVar11 + -0x70) = unaff_x22;
  *(long **)((long)pplVar11 + -0x68) = unaff_x21;
  *(long *)((long)pplVar11 + -0x60) = lVar31;
  *(dword **)((long)pplVar11 + -0x58) = pdVar27;
  *(undefined1 **)((long)pplVar11 + -0x50) = (undefined1 *)((long)pplVar11 + -0x30);
  *(undefined **)((long)pplVar11 + -0x48) = &Atlas_Stats_StatsManager__SetStat;
  puVar12 = (undefined1 *)((long)pplVar11 + -0x50);
  lVar31 = *(long *)(lVar18 + 0x20);
  if (lVar31 == 0) {
    func_0x00f78af4();
    uVar23 = func_0x00f78b24();
    auVar49 = func_0x00f78ac0(uVar23,0);
    auVar4._8_8_ = auVar49._8_8_;
    auVar4._0_8_ = lVar18;
    auVar8 = auVar4._0_12_;
    *(undefined1 **)((long)pplVar11 + -0x80) = puVar12;
    *(undefined **)((long)pplVar11 + -0x78) = &Atlas_Stats_StatsManager__GetStat;
    lVar31 = *(long *)(auVar49._0_8_ + 0x20);
    if (lVar31 == 0) {
      auVar49 = func_0x00f78af4();
      auVar5._8_8_ = auVar49._8_8_;
      auVar5._0_8_ = lVar18;
      auVar8 = auVar5._0_12_;
      *(undefined1 **)((long)pplVar11 + -0x90) = (undefined1 *)((long)pplVar11 + -0x80);
      *(undefined **)((long)pplVar11 + -0x88) = &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar31 = *(long *)(auVar49._0_8_ + 0x18);
      if (lVar31 == 0) {
        auVar49 = func_0x00f78af4();
        auVar6._8_8_ = auVar49._8_8_;
        auVar6._0_8_ = lVar18;
        auVar8 = auVar6._0_12_;
        puVar12 = (undefined1 *)((long)pplVar11 + -0xa0);
        *(undefined1 **)((long)pplVar11 + -0xa0) = (undefined1 *)((long)pplVar11 + -0x90);
        *(undefined **)((long)pplVar11 + -0x98) = &Atlas_Stats_StatsManager__GetCommittedStat;
        lVar31 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar31 == 0) {
          puVar41 = &Atlas_Stats_StatsManager__GetGlobalStat;
          auVar47 = func_0x00f78af4();
          puVar14 = (undefined1 *)((long)pplVar11 + -0xa0);
          while( true ) {
            auVar8 = auVar47._0_12_;
            pdVar27 = auVar47._8_8_;
            lVar18 = auVar47._0_8_;
            auVar7._8_8_ = auVar48._8_8_;
            auVar7._0_8_ = lVar18;
            puVar13 = puVar14 + -0x30;
            *(long **)(puVar14 + -0x30) = unaff_x22;
            *(long **)(puVar14 + -0x28) = unaff_x21;
            *(undefined1 (*) [16])(puVar14 + -0x20) = auVar48;
            *(undefined1 **)(puVar14 + -0x10) = puVar12;
            *(undefined **)(puVar14 + -8) = puVar41;
            puVar12 = puVar14 + -0x10;
            lVar31 = *(long *)(lVar18 + 0x10);
            if (lVar31 != 0) break;
            auVar49 = func_0x00f78af4();
            pdVar27 = auVar49._8_8_;
            puVar13 = puVar14 + -0x70;
            *(undefined8 *)(puVar14 + -0x70) = unaff_x24;
            *(undefined4 **)(puVar14 + -0x68) = unaff_x23;
            *(long **)(puVar14 + -0x60) = unaff_x22;
            *(long **)(puVar14 + -0x58) = unaff_x21;
            *(long *)(puVar14 + -0x50) = lVar18;
            *(long *)(puVar14 + -0x48) = auVar48._8_8_;
            *(undefined1 **)(puVar14 + -0x40) = puVar12;
            *(undefined **)(puVar14 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            puVar12 = puVar14 + -0x40;
            if (pdVar27 == (dword *)0x0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(pdVar27 + 6) < 1) {
                return 0;
              }
              unaff_x21 = (long *)0x0;
              unaff_x22 = (long *)0x0;
              unaff_x23 = pdVar27 + 8;
              auVar7 = auVar49;
              if ((*(ulong *)(pdVar27 + 6) & 0xffffffff) != 0) {
                lVar31 = *(long *)(auVar49._0_8_ + 0x10);
                if (lVar31 == 0) goto code_r0x01505370;
                auVar8._8_4_ = *unaff_x23;
                auVar8._0_8_ = auVar49._0_8_;
                puVar41 = &UNK_0150533c;
                goto code_r0x01504b20;
              }
            }
            uVar23 = func_0x00f78b24();
            auVar49 = func_0x00f78ac0(uVar23,0);
            pdVar27 = auVar49._8_8_;
            puVar13 = puVar14 + -0xb0;
            *(undefined8 *)(puVar14 + -0xb0) = unaff_x24;
            *(undefined4 **)(puVar14 + -0xa8) = unaff_x23;
            *(long **)(puVar14 + -0xa0) = unaff_x22;
            *(long **)(puVar14 + -0x98) = unaff_x21;
            *(undefined1 (*) [16])(puVar14 + -0x90) = auVar7;
            *(undefined1 **)(puVar14 + -0x80) = puVar12;
            *(undefined **)(puVar14 + -0x78) = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            puVar12 = puVar14 + -0x80;
            if (pdVar27 == (dword *)0x0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(pdVar27 + 6) < 1) {
                return 0;
              }
              unaff_x21 = (long *)0x0;
              unaff_x22 = (long *)0x0;
              unaff_x23 = pdVar27 + 8;
              auVar7 = auVar49;
              if ((*(ulong *)(pdVar27 + 6) & 0xffffffff) != 0) {
                lVar31 = *(long *)(auVar49._0_8_ + 0x18);
                if (lVar31 == 0) goto code_r0x01505408;
                auVar8._8_4_ = *unaff_x23;
                auVar8._0_8_ = auVar49._0_8_;
                puVar41 = &UNK_015053d4;
                goto code_r0x01504b20;
              }
            }
            uVar23 = func_0x00f78b24();
            auVar48 = func_0x00f78ac0(uVar23,0);
            lVar31 = auVar48._8_8_;
            *(undefined8 *)(puVar14 + -0xf0) = unaff_x24;
            *(undefined4 **)(puVar14 + -0xe8) = unaff_x23;
            *(long **)(puVar14 + -0xe0) = unaff_x22;
            *(long **)(puVar14 + -0xd8) = unaff_x21;
            *(undefined1 (*) [16])(puVar14 + -0xd0) = auVar7;
            *(undefined1 **)(puVar14 + -0xc0) = puVar12;
            *(undefined **)(puVar14 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            puVar12 = puVar14 + -0xc0;
            if (lVar31 == 0) {
code_r0x015054a8:
              uVar23 = func_0x00f78af4();
              *(long **)(puVar14 + -0x120) = unaff_x22;
              *(long **)(puVar14 + -0x118) = unaff_x21;
              *(undefined1 (*) [16])(puVar14 + -0x110) = auVar7;
              *(undefined1 **)(puVar14 + -0x100) = puVar12;
              *(undefined **)(puVar14 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)(puVar14 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar23,puVar14 + -0x124);
              return (ulong)*(uint *)(puVar14 + -0x124);
            }
            if ((int)*(ulong *)(lVar31 + 0x18) < 1) {
              return 0;
            }
            unaff_x21 = (long *)0x0;
            unaff_x22 = (long *)0x0;
            unaff_x23 = (undefined4 *)(lVar31 + 0x20);
            if ((*(ulong *)(lVar31 + 0x18) & 0xffffffff) == 0) {
              uVar23 = func_0x00f78b24();
              func_0x00f78ac0(uVar23,0);
              auVar7 = auVar48;
              goto code_r0x015054a8;
            }
            auVar47._8_4_ = *unaff_x23;
            auVar47._0_8_ = auVar48._0_8_;
            auVar47._12_4_ = 0;
            puVar41 = &UNK_01505468;
            puVar14 = puVar14 + -0xf0;
          }
          puVar41 = &UNK_015052bc;
        }
        else {
          puVar13 = (undefined1 *)((long)pplVar11 + -0x90);
          puVar12 = *(undefined1 **)((long)pplVar11 + -0xa0);
          puVar41 = *(undefined **)((long)pplVar11 + -0x98);
        }
      }
      else {
        puVar13 = (undefined1 *)((long)pplVar11 + -0x80);
        puVar12 = *(undefined1 **)((long)pplVar11 + -0x90);
        puVar41 = *(undefined **)((long)pplVar11 + -0x88);
      }
    }
    else {
      puVar13 = (undefined1 *)((long)pplVar11 + -0x70);
      puVar12 = *(undefined1 **)((long)pplVar11 + -0x80);
      puVar41 = *(undefined **)((long)pplVar11 + -0x78);
    }
  }
  else {
    puVar41 = &UNK_015051c0;
    pdVar27 = auVar49._8_8_;
    unaff_x22 = plVar29;
  }
code_r0x01504b20:
  *(undefined1 **)(puVar13 + -0x10) = puVar12;
  *(undefined **)(puVar13 + -8) = puVar41;
  lVar31 = *(long *)(lVar31 + 0x10);
  if (lVar31 == 0) {
    func_0x00f78af4();
  }
  else if (auVar8._8_4_ < *(uint *)(lVar31 + 0x18)) {
    return (ulong)*(uint *)(lVar31 + (long)(int)auVar8._8_4_ * 4 + 0x20);
  }
  uVar23 = func_0x00f78b24();
  auVar49 = func_0x00f78ac0(uVar23,0);
  lVar31 = auVar49._8_8_;
  uVar34 = auVar49._0_8_;
  *(undefined8 *)(puVar13 + -0x50) = unaff_x24;
  *(undefined4 **)(puVar13 + -0x48) = unaff_x23;
  *(long **)(puVar13 + -0x40) = unaff_x22;
  *(long **)(puVar13 + -0x38) = unaff_x21;
  *(long *)(puVar13 + -0x30) = auVar8._0_8_;
  *(dword **)(puVar13 + -0x28) = pdVar27;
  *(undefined1 **)(puVar13 + -0x20) = puVar13 + -0x10;
  *(undefined **)(puVar13 + -0x18) = &Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar19 = uVar34;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar19 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar18 = *(long *)(uVar34 + 0x10);
  if (((lVar18 != 0) && (lVar31 != 0)) && (*(long *)(lVar31 + 0x10) != 0)) {
    iVar15 = *(int *)(lVar18 + 0x18);
    unaff_x22 = *(long **)(*(long *)(lVar31 + 0x10) + 0x18);
    if (iVar15 < (int)unaff_x22) {
      lVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      uVar19 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar34 + 0x10),lVar18,iVar15,0);
      *(long *)(uVar34 + 0x10) = lVar18;
    }
    if ((int)unaff_x22 < 1) {
      return uVar19;
    }
    if (lVar18 != 0) {
      uVar34 = 0;
      uVar16 = *(uint *)(lVar18 + 0x18);
      while (uVar16 != uVar34) {
        lVar32 = *(long *)(lVar31 + 0x10);
        if (lVar32 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar32 + 0x18) <= uVar34) || (uVar16 <= uVar34)) break;
        iVar15 = *(int *)(lVar18 + 0x20 + uVar34 * 4);
        iVar17 = *(int *)(lVar32 + uVar34 * 4 + 0x20);
        if (iVar15 <= iVar17) {
          iVar15 = iVar17;
        }
        *(int *)(lVar18 + 0x20 + uVar34 * 4) = iVar15;
        uVar34 = uVar34 + 1;
        if (((ulong)unaff_x22 & 0xffffffff) == uVar34) {
          return uVar19;
        }
      }
      uVar23 = func_0x00f78b24();
      func_0x00f78ac0(uVar23,0);
    }
  }
code_r0x01504c70:
  func_0x00f78af4();
  *(long **)(puVar13 + -0x80) = unaff_x22;
  *(long *)(puVar13 + -0x78) = lVar18;
  *(undefined1 (*) [16])(puVar13 + -0x70) = auVar49;
  *(undefined1 **)(puVar13 + -0x60) = puVar13 + -0x20;
  *(undefined **)(puVar13 + -0x58) = &Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar19 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar19;
}



// ============================================================
// RVA: 0x146ede8 | Atlas.Stats.AtlasStats.OnUsableHitShield
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x146eec0 | Atlas.Stats.AtlasStats.GetHazardAvoidedByShieldStat
// ============================================================

/* WARNING: Possible PIC construction at 0x015051bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015052b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015053d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f0f4) */
/* WARNING: Removing unreachable block (ram,0x0146f0fc) */
/* WARNING: Removing unreachable block (ram,0x0146f104) */
/* WARNING: Removing unreachable block (ram,0x0146f128) */
/* WARNING: Removing unreachable block (ram,0x0146f14c) */
/* WARNING: Removing unreachable block (ram,0x0146f15c) */
/* WARNING: Removing unreachable block (ram,0x0146f164) */
/* WARNING: Removing unreachable block (ram,0x0146f138) */
/* WARNING: Removing unreachable block (ram,0x0146f140) */
/* WARNING: Removing unreachable block (ram,0x0146f114) */
/* WARNING: Removing unreachable block (ram,0x0146f11c) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Removing unreachable block (ram,0x015053d4) */
/* WARNING: Removing unreachable block (ram,0x015053e8) */
/* WARNING: Removing unreachable block (ram,0x0150533c) */
/* WARNING: Removing unreachable block (ram,0x01505350) */
/* WARNING: Removing unreachable block (ram,0x015052bc) */
/* WARNING: Removing unreachable block (ram,0x015052c8) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x015051e8) */
/* WARNING: Removing unreachable block (ram,0x015051f0) */
/* WARNING: Removing unreachable block (ram,0x015051f8) */
/* WARNING: Removing unreachable block (ram,0x01505204) */
/* WARNING: Removing unreachable block (ram,0x01505224) */
/* WARNING: Removing unreachable block (ram,0x01505210) */
/* WARNING: Removing unreachable block (ram,0x015051c0) */
/* WARNING: Removing unreachable block (ram,0x015051cc) */
/* WARNING: Removing unreachable block (ram,0x015051e0) */
/* WARNING: Removing unreachable block (ram,0x0146f298) */
/* WARNING: Removing unreachable block (ram,0x0146f2a0) */
/* WARNING: Removing unreachable block (ram,0x024660f8) */
/* WARNING: Removing unreachable block (ram,0x0246610c) */
/* WARNING: Removing unreachable block (ram,0x02466124) */
/* WARNING: Removing unreachable block (ram,0x02466154) */
/* WARNING: Removing unreachable block (ram,0x02466158) */
/* WARNING: Removing unreachable block (ram,0x02466160) */
/* WARNING: Removing unreachable block (ram,0x0246618c) */
/* WARNING: Removing unreachable block (ram,0x024661d8) */
/* WARNING: Removing unreachable block (ram,0x024661f4) */
/* WARNING: Removing unreachable block (ram,0x024661fc) */
/* WARNING: Removing unreachable block (ram,0x02466264) */
/* WARNING: Removing unreachable block (ram,0x02466200) */
/* WARNING: Removing unreachable block (ram,0x0246626c) */
/* WARNING: Removing unreachable block (ram,0x0246633c) */
/* WARNING: Removing unreachable block (ram,0x02466214) */
/* WARNING: Removing unreachable block (ram,0x0246616c) */

long * Atlas_Stats_AtlasStats__GetHazardAvoidedByShieldStat
                 (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
                 long *param_5,long *param_6)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 *puVar7;
  long **pplVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar14;
  uint uVar13;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  dword *pdVar22;
  dword *pdVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  long *unaff_x19;
  undefined8 uVar29;
  long *unaff_x20;
  undefined8 uVar30;
  long lVar31;
  ulong unaff_x22;
  code *pcVar32;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar33;
  undefined *unaff_x30;
  undefined *puVar34;
  undefined8 uVar35;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 ******ppppppuStack_60;
  undefined *puStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  lVar31 = 0x3eb4000;
  if ((bRam0000000003eb4864 & 1) == 0) {
    func_0x00f78a20(0x3d1fed8);
    bRam0000000003eb4864 = 1;
  }
  if (param_5 != (long *)0x0) {
    iVar12 = (**(code **)(*param_5 + 0x188))(param_5,*(undefined8 *)(*param_5 + 400));
    if (iVar12 == 6) {
      if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      goto code_r0x0146f334;
    }
    if (iVar12 != 3) {
      return (long *)0x0;
    }
    if (((*(ushort *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
code_r0x0146f2f4:
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (param_4 != (long *)0x0) {
      uVar13 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
      if (uVar13 < 8) {
        plVar19 = (long *)(ulong)*(uint *)(&UNK_033f831c + (long)(int)uVar13 * 4);
      }
      else {
        plVar19 = (long *)0x0;
      }
      return plVar19;
    }
    unaff_x30 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByTimeCheaterStat;
    param_4 = (long *)func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = (undefined8 *******)puVar7;
code_r0x0146f334:
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (param_4 == (long *)0x0) {
      plVar19 = (long *)func_0x00f78af4();
      *(long **)((long)register0x00000008 + -0x30) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x28) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x20) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x18) = &Atlas_Stats_AtlasStats___ctor;
      uVar36 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      *(undefined4 *)((long)plVar19 + 0x2c) = uVar36;
      *(undefined4 *)(plVar19 + 6) = param_2;
      *(undefined4 *)((long)plVar19 + 0x34) = param_3;
      return plVar19;
    }
    uVar13 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
    if (uVar13 < 8) {
      plVar19 = (long *)(ulong)*(uint *)(&UNK_033f833c + (long)(int)uVar13 * 4);
    }
    else {
      plVar19 = (long *)0x0;
    }
    return plVar19;
  }
  auVar37 = func_0x00f78af4();
  plVar19 = auVar37._0_8_;
  puStack_38 = &Atlas_Stats_AtlasStats__OnUsableUsed;
  if ((*(char *)((long)plVar19 + 0x5d) == '\0') || ((int)plVar19[0xc] != 1)) {
    return plVar19;
  }
  plVar18 = param_6;
  plStack_50 = param_5;
  plStack_48 = param_4;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if (auVar37._8_8_ == 0) {
code_r0x0146f004:
    auVar37 = func_0x00f78af4();
    plVar15 = auVar37._0_8_;
    puStack_58 = &Atlas_Stats_AtlasStats__OnUsableHoppedOver;
    if ((*(char *)((long)plVar15 + 0x5d) == '\0') || ((int)plVar15[0xc] != 1)) {
      return plVar15;
    }
    unaff_x19 = plVar18;
    plStack_70 = plVar19;
    plStack_68 = param_4;
    ppppppuStack_60 = &ppppppuStack_40;
    if (auVar37._8_8_ != 0) {
      plVar17 = (long *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(auVar37._8_8_,0);
      auVar37._8_8_ = plStack_70;
      auVar37._0_8_ = plStack_68;
      if ((int)plVar17 == 0) {
        return plVar17;
      }
      iVar12 = (int)plVar18;
      plVar19 = plVar18;
      if (iVar12 != 5) {
        if (iVar12 == 1) {
          lVar16 = plVar15[2];
          if (lVar16 == 0) goto code_r0x0146f0a0;
          pdVar22 = (dword *)((long)&segment_command_00000020.maxprot + 1);
        }
        else {
          if (iVar12 != 0) {
            return plVar17;
          }
          lVar16 = plVar15[2];
          if (lVar16 == 0) goto code_r0x0146f0a0;
          pdVar22 = &segment_command_00000020.maxprot;
        }
code_r0x0146f090:
        pplVar8 = &plStack_50;
        pppppppuVar33 = (undefined8 *******)ppppppuStack_60;
        puVar34 = puStack_58;
        goto code_r0x015050bc;
      }
      lVar16 = plVar15[2];
      if (lVar16 != 0) {
        pdVar22 = (dword *)((long)&segment_command_00000020.maxprot + 2);
        goto code_r0x0146f090;
      }
    }
code_r0x0146f0a0:
    auVar37 = func_0x00f78af4();
    plVar17 = auVar37._0_8_;
    pplVar8 = &plStack_90;
    puStack_78 = &Atlas_Stats_AtlasStats__OnBoxHit;
    plVar18 = plVar17;
    if ((((*(char *)((long)plVar17 + 0x5d) == '\0') || (auVar37._8_8_ == 0)) ||
        ((int)plVar17[0xc] != 1)) ||
       (plStack_90 = plVar19, plStack_88 = plVar15, ppppppuStack_80 = &ppppppuStack_60,
       plVar18 = (long *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(auVar37._8_8_,0)
       , (int)plVar18 == 0)) {
      return plVar18;
    }
    lVar16 = plVar17[2];
    if (lVar16 == 0) {
      auVar37 = func_0x00f78af4();
      lVar31 = auVar37._8_8_;
      unaff_x20 = auVar37._0_8_;
      auVar37._8_8_ = unaff_x20;
      auVar37._0_8_ = unaff_x19;
      pplVar8 = (long **)&stack0xffffffffffffff40;
      puStack_98 = &Atlas_Stats_AtlasStats__OnKartEnterShortcut;
      pppppppuVar33 = &ppppppuStack_a0;
      unaff_x22 = 0x3eb4000;
      plVar19 = unaff_x20;
      ppppppuStack_a0 = &ppppppuStack_80;
      if ((bRam0000000003eb4863 & 1) == 0) {
        func_0x00f78a20(0x3d3c048);
        func_0x00f78a20(0x3d3c058);
        plVar19 = (long *)func_0x00f78a20(0x3d24070);
        bRam0000000003eb4863 = 1;
      }
      if (((*(char *)((long)unaff_x20 + 0x5d) == '\0') || ((int)unaff_x20[0xc] != 1)) ||
         (unaff_x20[3] != lVar31)) {
        return plVar19;
      }
      if (lVar31 != 0) {
        plVar19 = *(long **)(lVar31 + 0x68);
        if (plVar19 != (long *)0x0) {
          if (((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar19 + 300)) &&
              (*(long *)(*(long *)(*plVar19 + 200) +
                         (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 + -8) ==
               /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) &&
             (plVar19 = (long *)Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar19,0),
             (int)plVar19 < (int)unaff_x20[0xb])) {
            return plVar19;
          }
        }
        if ((unaff_x19 != (long *)0x0) && (unaff_x20[10] != 0)) {
          plVar19 = (long *)/*System.Collections.Generic.List<StringID>$$Contains*/ func_0x02466428(unaff_x20[10],unaff_x19[3],uRam0000000003d3c058);
          if (((ulong)plVar19 & 1) != 0) {
            return plVar19;
          }
          lVar16 = unaff_x20[2];
          if (lVar16 != 0) {
            pdVar22 = (dword *)((long)&segment_command_00000020.flags + 3);
            puVar34 = &UNK_0146f298;
            goto code_r0x015050bc;
          }
        }
      }
      auVar37 = func_0x00f78af4();
      plVar19 = auVar37._0_8_;
      unaff_x29 = &ppppppuStack_d0;
      puStack_c8 = &Atlas_Stats_AtlasStats__OnRespawn;
      if (auVar37._8_8_ != 0) {
        if (plVar19[3] == *(long *)(auVar37._8_8_ + 0x10)) {
          *(undefined1 *)((long)plVar19 + 0x5c) = 1;
        }
        return plVar19;
      }
      unaff_x30 = &Atlas_Stats_AtlasStats__GetHazardAvoidedByNormalShieldStat;
      ppppppuStack_d0 = pppppppuVar33;
      param_4 = (long *)func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)&ppppppuStack_d0;
      goto code_r0x0146f2f4;
    }
    pdVar22 = &MACH_HEADER.sizeofcmds;
    puVar34 = &UNK_0146f0f4;
    pppppppuVar33 = &ppppppuStack_80;
  }
  else {
    plVar15 = (long *)Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(auVar37._8_8_,0);
    auVar37._8_8_ = plStack_50;
    auVar37._0_8_ = plStack_48;
    if ((int)plVar15 == 0) {
      return plVar15;
    }
    param_4 = param_6;
    if ((param_6 == (long *)0x0) || (lVar16 = plVar19[2], lVar16 == 0)) goto code_r0x0146f004;
    pdVar22 = (dword *)(ulong)*(uint *)(param_6 + 0xc);
    pplVar8 = (long **)&stack0xffffffffffffffd0;
    pppppppuVar33 = (undefined8 *******)ppppppuStack_40;
    puVar34 = puStack_38;
  }
code_r0x015050bc:
  uVar27 = 0;
  *(long *)((long)pplVar8 + -0x20) = auVar37._8_8_;
  *(dword **)((long)pplVar8 + -0x18) = auVar37._0_8_;
  *(undefined8 ********)((long)pplVar8 + -0x10) = pppppppuVar33;
  *(undefined **)((long)pplVar8 + -8) = puVar34;
  pdVar23 = auVar37._0_8_;
  if (*(long *)(lVar16 + 0x20) == 0) {
code_r0x01505118:
    func_0x00f78af4();
  }
  else {
    /*Atlas.Stats.StatsData$$IncrementStat*/ func_0x01504a24();
    lVar25 = *(long *)(lVar16 + 0x28);
    pdVar23 = pdVar22;
    if (lVar25 == 0) goto code_r0x01505118;
    if ((uint)pdVar22 < *(uint *)(lVar25 + 0x18)) {
      plVar19 = *(long **)(lVar25 + (long)(int)(uint)pdVar22 * 8 + 0x20);
      if (plVar19 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar20 = *(undefined8 *)((long)pplVar8 + -0x10);
      uVar35 = *(undefined8 *)((long)pplVar8 + -8);
      uVar30 = *(undefined8 *)((long)pplVar8 + -0x20);
      uVar29 = *(undefined8 *)((long)pplVar8 + -0x18);
      puVar9 = (undefined1 *)pplVar8;
      goto System_Action__Invoke;
    }
  }
  uVar20 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar20,0);
  lVar25 = auVar37._0_8_;
  *(long *)((long)pplVar8 + -0x40) = lVar16;
  *(dword **)((long)pplVar8 + -0x38) = pdVar23;
  *(undefined1 **)((long)pplVar8 + -0x30) = (undefined1 *)((long)pplVar8 + -0x10);
  *(undefined **)((long)pplVar8 + -0x28) = &Atlas_Stats_StatsManager__DecrementStat;
  if (*(long *)(lVar25 + 0x20) != 0) {
    /*Atlas.Stats.StatsData$$DecrementStat*/ func_0x01504a78();
    lVar16 = *(long *)(lVar25 + 0x28);
    pdVar23 = auVar37._8_8_;
    if (lVar16 != 0) {
      if (auVar37._8_4_ < *(uint *)(lVar16 + 0x18)) {
        plVar19 = *(long **)(lVar16 + (long)(int)auVar37._8_4_ * 8 + 0x20);
        if (plVar19 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar20 = *(undefined8 *)((long)pplVar8 + -0x30);
        uVar35 = *(undefined8 *)((long)pplVar8 + -0x28);
        puVar9 = (undefined1 *)((long)pplVar8 + -0x20);
        uVar30 = *(undefined8 *)((long)pplVar8 + -0x40);
        uVar29 = *(undefined8 *)((long)pplVar8 + -0x38);
System_Action__Invoke:
        uVar24 = 0;
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar9 + -0x40) = unaff_x24;
        *(undefined4 **)(puVar9 + -0x38) = unaff_x23;
        *(ulong *)(puVar9 + -0x30) = unaff_x22;
        *(long *)(puVar9 + -0x28) = lVar31;
        *(undefined8 *)(puVar9 + -0x20) = uVar30;
        *(undefined8 *)(puVar9 + -0x18) = uVar29;
        *(undefined8 *)(puVar9 + -0x10) = uVar20;
        *(undefined8 *)(puVar9 + -8) = uVar35;
        *(long **)(puVar9 + -0x58) = plVar19;
        lVar31 = plVar19[0xd];
        if (lVar31 == 0) {
          puVar9 = puVar9 + -0x58;
          lVar16 = 1;
        }
        else {
          lVar16 = *(long *)(lVar31 + 0x18);
          if (lVar16 == 0) {
            return plVar19;
          }
          puVar9 = (undefined1 *)(lVar31 + 0x20);
        }
        lVar31 = 0;
        do {
          lVar25 = *(long *)(puVar9 + lVar31 * 8);
          pcVar32 = *(code **)(lVar25 + 0x10);
          plVar18 = *(long **)(lVar25 + 0x20);
          lVar25 = *(long *)(lVar25 + 0x28);
          if (*(short *)(lVar25 + 0x48) == -1) {
            func_0x00f78ad8(lVar25,uVar24);
          }
          iVar12 = func_0x00f78a4c(lVar25);
          if (iVar12 == 0) {
            if ((((plVar18 == (long *)0x0) || (*(short *)(lVar25 + 0x48) == -1)) ||
                ((*(byte *)(*plVar18 + 0x115) & 1) != 0)) || (plVar19[3] == 0))
            goto code_r0x02924d98;
            iVar12 = func_0x00f78a44(lVar25);
            iVar14 = func_0x00f78ec0(lVar25);
            if (iVar12 == 0) {
              uVar1 = *(ushort *)(lVar25 + 0x48);
              if (iVar14 == 0) {
                lVar25 = *plVar18 + (ulong)uVar1 * 0x10;
                auVar37 = (**(code **)(lVar25 + 0x138))(plVar18,*(undefined8 *)(lVar25 + 0x140));
                goto code_r0x02924da4;
              }
              lVar25 = func_0x00f78a48(lVar25);
              lVar26 = *plVar18;
              uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
              if (uVar27 != 0) {
                piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar25) {
                    puVar21 = (undefined8 *)
                              (lVar26 + (long)(int)(*piVar28 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar28 = piVar28 + 4;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
              }
              puVar21 = (undefined8 *)func_0x00fac1f0(plVar18,lVar25,(ulong)uVar1);
code_r0x02924e68:
              pcVar32 = (code *)*puVar21;
              puVar21 = (undefined8 *)puVar21[1];
            }
            else {
              if (iVar14 == 0) {
                uVar20 = *(undefined8 *)
                          (*plVar18 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar26 = *plVar18;
                uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == *(long *)(lVar25 + 0x18)) {
                      lVar26 = lVar26 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar25 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar28 = piVar28 + 4;
                    uVar27 = uVar27 - 1;
                  } while (uVar27 != 0);
                }
                lVar26 = func_0x00fac1f0(plVar18);
code_r0x02924e40:
                uVar20 = *(undefined8 *)(lVar26 + 8);
              }
              puVar21 = (undefined8 *)func_0x00f78acc(uVar20,lVar25);
              pcVar32 = (code *)*puVar21;
            }
            auVar37 = (*pcVar32)(plVar18,puVar21);
          }
          else if (*(char *)(lVar25 + 0x4a) == '\0') {
            auVar37 = (*pcVar32)(lVar25);
          }
          else {
code_r0x02924d98:
            auVar37 = (*pcVar32)(plVar18,lVar25);
          }
code_r0x02924da4:
          uVar24 = auVar37._8_8_;
          lVar31 = lVar31 + 1;
          if (lVar31 == lVar16) {
            return auVar37._0_8_;
          }
        } while( true );
      }
      goto code_r0x01505188;
    }
  }
  func_0x00f78af4();
code_r0x01505188:
  uVar20 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar20,0);
  auVar6 = auVar37._0_12_;
  lVar26 = auVar37._0_8_;
  auVar39._8_8_ = pdVar23;
  auVar39._0_8_ = lVar26;
  puVar10 = (undefined1 *)((long)pplVar8 + -0x70);
  *(ulong *)((long)pplVar8 + -0x70) = unaff_x22;
  *(long *)((long)pplVar8 + -0x68) = lVar31;
  *(long *)((long)pplVar8 + -0x60) = lVar25;
  *(dword **)((long)pplVar8 + -0x58) = pdVar23;
  *(undefined1 **)((long)pplVar8 + -0x50) = (undefined1 *)((long)pplVar8 + -0x30);
  *(undefined **)((long)pplVar8 + -0x48) = &Atlas_Stats_StatsManager__SetStat;
  puVar9 = (undefined1 *)((long)pplVar8 + -0x50);
  lVar16 = *(long *)(lVar26 + 0x20);
  if (lVar16 == 0) {
    func_0x00f78af4();
    uVar20 = func_0x00f78b24();
    auVar37 = func_0x00f78ac0(uVar20,0);
    auVar2._8_8_ = auVar37._8_8_;
    auVar2._0_8_ = lVar26;
    auVar6 = auVar2._0_12_;
    *(undefined1 **)((long)pplVar8 + -0x80) = puVar9;
    *(undefined **)((long)pplVar8 + -0x78) = &Atlas_Stats_StatsManager__GetStat;
    lVar16 = *(long *)(auVar37._0_8_ + 0x20);
    if (lVar16 == 0) {
      auVar37 = func_0x00f78af4();
      auVar3._8_8_ = auVar37._8_8_;
      auVar3._0_8_ = lVar26;
      auVar6 = auVar3._0_12_;
      *(undefined1 **)((long)pplVar8 + -0x90) = (undefined1 *)((long)pplVar8 + -0x80);
      *(undefined **)((long)pplVar8 + -0x88) = &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar16 = *(long *)(auVar37._0_8_ + 0x18);
      if (lVar16 == 0) {
        auVar37 = func_0x00f78af4();
        auVar4._8_8_ = auVar37._8_8_;
        auVar4._0_8_ = lVar26;
        auVar6 = auVar4._0_12_;
        puVar9 = (undefined1 *)((long)pplVar8 + -0xa0);
        *(undefined1 **)((long)pplVar8 + -0xa0) = (undefined1 *)((long)pplVar8 + -0x90);
        *(undefined **)((long)pplVar8 + -0x98) = &Atlas_Stats_StatsManager__GetCommittedStat;
        lVar16 = *(long *)(auVar37._0_8_ + 0x10);
        if (lVar16 == 0) {
          puVar34 = &Atlas_Stats_StatsManager__GetGlobalStat;
          auVar38 = func_0x00f78af4();
          puVar11 = (undefined1 *)((long)pplVar8 + -0xa0);
          while( true ) {
            auVar6 = auVar38._0_12_;
            pdVar23 = auVar38._8_8_;
            lVar25 = auVar38._0_8_;
            auVar5._8_8_ = auVar39._8_8_;
            auVar5._0_8_ = lVar25;
            puVar10 = puVar11 + -0x30;
            *(ulong *)(puVar11 + -0x30) = unaff_x22;
            *(long *)(puVar11 + -0x28) = lVar31;
            *(undefined1 (*) [16])(puVar11 + -0x20) = auVar39;
            *(undefined1 **)(puVar11 + -0x10) = puVar9;
            *(undefined **)(puVar11 + -8) = puVar34;
            puVar9 = puVar11 + -0x10;
            lVar16 = *(long *)(lVar25 + 0x10);
            if (lVar16 != 0) break;
            auVar37 = func_0x00f78af4();
            pdVar23 = auVar37._8_8_;
            puVar10 = puVar11 + -0x70;
            *(undefined8 *)(puVar11 + -0x70) = unaff_x24;
            *(undefined4 **)(puVar11 + -0x68) = unaff_x23;
            *(ulong *)(puVar11 + -0x60) = unaff_x22;
            *(long *)(puVar11 + -0x58) = lVar31;
            *(long *)(puVar11 + -0x50) = lVar25;
            *(long *)(puVar11 + -0x48) = auVar39._8_8_;
            *(undefined1 **)(puVar11 + -0x40) = puVar9;
            *(undefined **)(puVar11 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            puVar9 = puVar11 + -0x40;
            if (pdVar23 == (dword *)0x0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(pdVar23 + 6) < 1) {
                return (long *)0x0;
              }
              lVar31 = 0;
              unaff_x22 = 0;
              unaff_x23 = pdVar23 + 8;
              auVar5 = auVar37;
              if ((*(ulong *)(pdVar23 + 6) & 0xffffffff) != 0) {
                lVar16 = *(long *)(auVar37._0_8_ + 0x10);
                if (lVar16 == 0) goto code_r0x01505370;
                auVar6._8_4_ = *unaff_x23;
                auVar6._0_8_ = auVar37._0_8_;
                puVar34 = &UNK_0150533c;
                goto code_r0x01504b20;
              }
            }
            uVar20 = func_0x00f78b24();
            auVar37 = func_0x00f78ac0(uVar20,0);
            pdVar23 = auVar37._8_8_;
            puVar10 = puVar11 + -0xb0;
            *(undefined8 *)(puVar11 + -0xb0) = unaff_x24;
            *(undefined4 **)(puVar11 + -0xa8) = unaff_x23;
            *(ulong *)(puVar11 + -0xa0) = unaff_x22;
            *(long *)(puVar11 + -0x98) = lVar31;
            *(undefined1 (*) [16])(puVar11 + -0x90) = auVar5;
            *(undefined1 **)(puVar11 + -0x80) = puVar9;
            *(undefined **)(puVar11 + -0x78) = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            puVar9 = puVar11 + -0x80;
            if (pdVar23 == (dword *)0x0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(pdVar23 + 6) < 1) {
                return (long *)0x0;
              }
              lVar31 = 0;
              unaff_x22 = 0;
              unaff_x23 = pdVar23 + 8;
              auVar5 = auVar37;
              if ((*(ulong *)(pdVar23 + 6) & 0xffffffff) != 0) {
                lVar16 = *(long *)(auVar37._0_8_ + 0x18);
                if (lVar16 == 0) goto code_r0x01505408;
                auVar6._8_4_ = *unaff_x23;
                auVar6._0_8_ = auVar37._0_8_;
                puVar34 = &UNK_015053d4;
                goto code_r0x01504b20;
              }
            }
            uVar20 = func_0x00f78b24();
            auVar39 = func_0x00f78ac0(uVar20,0);
            lVar16 = auVar39._8_8_;
            *(undefined8 *)(puVar11 + -0xf0) = unaff_x24;
            *(undefined4 **)(puVar11 + -0xe8) = unaff_x23;
            *(ulong *)(puVar11 + -0xe0) = unaff_x22;
            *(long *)(puVar11 + -0xd8) = lVar31;
            *(undefined1 (*) [16])(puVar11 + -0xd0) = auVar5;
            *(undefined1 **)(puVar11 + -0xc0) = puVar9;
            *(undefined **)(puVar11 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            puVar9 = puVar11 + -0xc0;
            if (lVar16 == 0) {
code_r0x015054a8:
              uVar20 = func_0x00f78af4();
              *(ulong *)(puVar11 + -0x120) = unaff_x22;
              *(long *)(puVar11 + -0x118) = lVar31;
              *(undefined1 (*) [16])(puVar11 + -0x110) = auVar5;
              *(undefined1 **)(puVar11 + -0x100) = puVar9;
              *(undefined **)(puVar11 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)(puVar11 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar20,puVar11 + -0x124);
              return (long *)(ulong)*(uint *)(puVar11 + -0x124);
            }
            if ((int)*(ulong *)(lVar16 + 0x18) < 1) {
              return (long *)0x0;
            }
            lVar31 = 0;
            unaff_x22 = 0;
            unaff_x23 = (undefined4 *)(lVar16 + 0x20);
            if ((*(ulong *)(lVar16 + 0x18) & 0xffffffff) == 0) {
              uVar20 = func_0x00f78b24();
              func_0x00f78ac0(uVar20,0);
              auVar5 = auVar39;
              goto code_r0x015054a8;
            }
            auVar38._8_4_ = *unaff_x23;
            auVar38._0_8_ = auVar39._0_8_;
            auVar38._12_4_ = 0;
            puVar34 = &UNK_01505468;
            puVar11 = puVar11 + -0xf0;
          }
          puVar34 = &UNK_015052bc;
        }
        else {
          puVar10 = (undefined1 *)((long)pplVar8 + -0x90);
          puVar9 = *(undefined1 **)((long)pplVar8 + -0xa0);
          puVar34 = *(undefined **)((long)pplVar8 + -0x98);
        }
      }
      else {
        puVar10 = (undefined1 *)((long)pplVar8 + -0x80);
        puVar9 = *(undefined1 **)((long)pplVar8 + -0x90);
        puVar34 = *(undefined **)((long)pplVar8 + -0x88);
      }
    }
    else {
      puVar10 = (undefined1 *)((long)pplVar8 + -0x70);
      puVar9 = *(undefined1 **)((long)pplVar8 + -0x80);
      puVar34 = *(undefined **)((long)pplVar8 + -0x78);
    }
  }
  else {
    puVar34 = &UNK_015051c0;
    pdVar23 = auVar37._8_8_;
    unaff_x22 = uVar27;
  }
code_r0x01504b20:
  *(undefined1 **)(puVar10 + -0x10) = puVar9;
  *(undefined **)(puVar10 + -8) = puVar34;
  lVar16 = *(long *)(lVar16 + 0x10);
  if (lVar16 == 0) {
    func_0x00f78af4();
  }
  else if (auVar6._8_4_ < *(uint *)(lVar16 + 0x18)) {
    return (long *)(ulong)*(uint *)(lVar16 + (long)(int)auVar6._8_4_ * 4 + 0x20);
  }
  uVar20 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar20,0);
  lVar16 = auVar37._8_8_;
  plVar18 = auVar37._0_8_;
  *(undefined8 *)(puVar10 + -0x50) = unaff_x24;
  *(undefined4 **)(puVar10 + -0x48) = unaff_x23;
  *(ulong *)(puVar10 + -0x40) = unaff_x22;
  *(long *)(puVar10 + -0x38) = lVar31;
  *(long *)(puVar10 + -0x30) = auVar6._0_8_;
  *(dword **)(puVar10 + -0x28) = pdVar23;
  *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
  *(undefined **)(puVar10 + -0x18) = &Atlas_Stats_StatsData__UpdateToLargestValues;
  plVar19 = plVar18;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    plVar19 = (long *)func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar31 = plVar18[2];
  if (((lVar31 != 0) && (lVar16 != 0)) && (*(long *)(lVar16 + 0x10) != 0)) {
    iVar12 = *(int *)(lVar31 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar16 + 0x10) + 0x18);
    if (iVar12 < (int)unaff_x22) {
      lVar31 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      plVar19 = (long *)/*System.Array$$Copy*/ func_0x0292c49c(plVar18[2],lVar31,iVar12,0);
      plVar18[2] = lVar31;
    }
    if ((int)unaff_x22 < 1) {
      return plVar19;
    }
    if (lVar31 != 0) {
      uVar27 = 0;
      uVar13 = *(uint *)(lVar31 + 0x18);
      while (uVar13 != uVar27) {
        lVar25 = *(long *)(lVar16 + 0x10);
        if (lVar25 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar25 + 0x18) <= uVar27) || (uVar13 <= uVar27)) break;
        iVar12 = *(int *)(lVar31 + 0x20 + uVar27 * 4);
        iVar14 = *(int *)(lVar25 + uVar27 * 4 + 0x20);
        if (iVar12 <= iVar14) {
          iVar12 = iVar14;
        }
        *(int *)(lVar31 + 0x20 + uVar27 * 4) = iVar12;
        uVar27 = uVar27 + 1;
        if ((unaff_x22 & 0xffffffff) == uVar27) {
          return plVar19;
        }
      }
      uVar20 = func_0x00f78b24();
      func_0x00f78ac0(uVar20,0);
    }
  }
code_r0x01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar10 + -0x80) = unaff_x22;
  *(long *)(puVar10 + -0x78) = lVar31;
  *(undefined1 (*) [16])(puVar10 + -0x70) = auVar37;
  *(undefined1 **)(puVar10 + -0x60) = puVar10 + -0x20;
  *(undefined **)(puVar10 + -0x58) = &Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  plVar19 = (long *)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return plVar19;
}



// ============================================================
// RVA: 0x146ef9c | Atlas.Stats.AtlasStats.OnUsableUsed
// ============================================================

/* WARNING: Possible PIC construction at 0x015051bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015052b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015053d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f0f4) */
/* WARNING: Removing unreachable block (ram,0x0146f0fc) */
/* WARNING: Removing unreachable block (ram,0x0146f104) */
/* WARNING: Removing unreachable block (ram,0x0146f128) */
/* WARNING: Removing unreachable block (ram,0x0146f14c) */
/* WARNING: Removing unreachable block (ram,0x0146f15c) */
/* WARNING: Removing unreachable block (ram,0x0146f164) */
/* WARNING: Removing unreachable block (ram,0x0146f138) */
/* WARNING: Removing unreachable block (ram,0x0146f140) */
/* WARNING: Removing unreachable block (ram,0x0146f114) */
/* WARNING: Removing unreachable block (ram,0x0146f11c) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Removing unreachable block (ram,0x015053d4) */
/* WARNING: Removing unreachable block (ram,0x015053e8) */
/* WARNING: Removing unreachable block (ram,0x0150533c) */
/* WARNING: Removing unreachable block (ram,0x01505350) */
/* WARNING: Removing unreachable block (ram,0x015052bc) */
/* WARNING: Removing unreachable block (ram,0x015052c8) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x015051e8) */
/* WARNING: Removing unreachable block (ram,0x015051f0) */
/* WARNING: Removing unreachable block (ram,0x015051f8) */
/* WARNING: Removing unreachable block (ram,0x01505204) */
/* WARNING: Removing unreachable block (ram,0x01505224) */
/* WARNING: Removing unreachable block (ram,0x01505210) */
/* WARNING: Removing unreachable block (ram,0x015051c0) */
/* WARNING: Removing unreachable block (ram,0x015051cc) */
/* WARNING: Removing unreachable block (ram,0x015051e0) */
/* WARNING: Removing unreachable block (ram,0x0146f298) */
/* WARNING: Removing unreachable block (ram,0x0146f2a0) */
/* WARNING: Removing unreachable block (ram,0x024660f8) */
/* WARNING: Removing unreachable block (ram,0x0246610c) */
/* WARNING: Removing unreachable block (ram,0x02466124) */
/* WARNING: Removing unreachable block (ram,0x02466154) */
/* WARNING: Removing unreachable block (ram,0x02466158) */
/* WARNING: Removing unreachable block (ram,0x02466160) */
/* WARNING: Removing unreachable block (ram,0x0246618c) */
/* WARNING: Removing unreachable block (ram,0x024661d8) */
/* WARNING: Removing unreachable block (ram,0x024661f4) */
/* WARNING: Removing unreachable block (ram,0x024661fc) */
/* WARNING: Removing unreachable block (ram,0x02466264) */
/* WARNING: Removing unreachable block (ram,0x02466200) */
/* WARNING: Removing unreachable block (ram,0x0246626c) */
/* WARNING: Removing unreachable block (ram,0x0246633c) */
/* WARNING: Removing unreachable block (ram,0x02466214) */
/* WARNING: Removing unreachable block (ram,0x0246616c) */

ulong Atlas_Stats_AtlasStats__OnUsableUsed
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4,
                long param_5,ulong param_6)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  ulong *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  int iVar12;
  undefined8 uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  ulong unaff_x19;
  undefined8 uVar27;
  undefined8 unaff_x20;
  undefined8 uVar28;
  long unaff_x21;
  ulong unaff_x22;
  code *pcVar29;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******unaff_x29;
  undefined *unaff_x30;
  undefined *puVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  auVar35._8_8_ = unaff_x20;
  auVar35._0_8_ = unaff_x19;
  if ((*(char *)(param_4 + 0x5d) == '\0') || (*(int *)(param_4 + 0x60) != 1)) {
    return param_4;
  }
  uVar20 = param_6;
  if (param_5 == 0) {
LAB_0146f004:
    auVar35 = func_0x00f78af4();
    uVar14 = auVar35._0_8_;
    puStack_28 = &Atlas_Stats_AtlasStats__OnUsableHoppedOver;
    if ((*(char *)(uVar14 + 0x5d) == '\0') || (*(int *)(uVar14 + 0x60) != 1)) {
      return uVar14;
    }
    uVar22 = uVar20;
    uStack_40 = param_4;
    uStack_38 = unaff_x19;
    pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
    if (auVar35._8_8_ != 0) {
      uVar16 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(auVar35._8_8_,0);
      auVar35._8_8_ = uStack_40;
      auVar35._0_8_ = uStack_38;
      if ((int)uVar16 == 0) {
        return uVar16;
      }
      iVar12 = (int)uVar20;
      param_4 = uVar20;
      if (iVar12 != 5) {
        if (iVar12 == 1) {
          lVar15 = *(long *)(uVar14 + 0x10);
          if (lVar15 == 0) goto code_r0x0146f0a0;
          uVar20 = 0x59;
        }
        else {
          if (iVar12 != 0) {
            return uVar16;
          }
          lVar15 = *(long *)(uVar14 + 0x10);
          if (lVar15 == 0) goto code_r0x0146f0a0;
          uVar20 = 0x58;
        }
code_r0x0146f090:
        puVar7 = (ulong *)&stack0xffffffffffffffe0;
        unaff_x29 = (undefined8 ******)pppppuStack_30;
        unaff_x30 = puStack_28;
        goto code_r0x015050bc;
      }
      lVar15 = *(long *)(uVar14 + 0x10);
      if (lVar15 != 0) {
        uVar20 = 0x5a;
        goto code_r0x0146f090;
      }
    }
code_r0x0146f0a0:
    auVar35 = func_0x00f78af4();
    uVar16 = auVar35._0_8_;
    puVar7 = &uStack_60;
    puStack_48 = &Atlas_Stats_AtlasStats__OnBoxHit;
    uVar20 = uVar16;
    if ((((*(char *)(uVar16 + 0x5d) == '\0') || (auVar35._8_8_ == 0)) ||
        (*(int *)(uVar16 + 0x60) != 1)) ||
       (uStack_60 = param_4, uStack_58 = uVar14, pppppuStack_50 = &pppppuStack_30,
       uVar20 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(auVar35._8_8_,0),
       (int)uVar20 == 0)) {
      return uVar20;
    }
    lVar15 = *(long *)(uVar16 + 0x10);
    if (lVar15 == 0) {
      auVar35 = func_0x00f78af4();
      unaff_x21 = auVar35._8_8_;
      uVar14 = auVar35._0_8_;
      auVar35._8_8_ = uVar14;
      auVar35._0_8_ = uVar22;
      puVar7 = (ulong *)&stack0xffffffffffffff70;
      puStack_68 = &Atlas_Stats_AtlasStats__OnKartEnterShortcut;
      unaff_x29 = &pppppuStack_70;
      unaff_x22 = 0x3eb4000;
      uVar20 = uVar14;
      pppppuStack_70 = &pppppuStack_50;
      if ((bRam0000000003eb4863 & 1) == 0) {
        func_0x00f78a20(0x3d3c048);
        func_0x00f78a20(0x3d3c058);
        uVar20 = func_0x00f78a20(0x3d24070);
        bRam0000000003eb4863 = 1;
      }
      if (((*(char *)(uVar14 + 0x5d) == '\0') || (*(int *)(uVar14 + 0x60) != 1)) ||
         (*(long *)(uVar14 + 0x18) != unaff_x21)) {
        return uVar20;
      }
      if (unaff_x21 == 0) {
code_r0x0146f2c0:
        auVar35 = func_0x00f78af4();
        uVar20 = auVar35._0_8_;
        if (auVar35._8_8_ != 0) {
          if (*(long *)(uVar20 + 0x18) == *(long *)(auVar35._8_8_ + 0x10)) {
            *(undefined1 *)(uVar20 + 0x5c) = 1;
          }
          return uVar20;
        }
        plVar17 = (long *)func_0x00f78af4();
        if (plVar17 == (long *)0x0) {
          plVar17 = (long *)func_0x00f78af4();
          if (plVar17 == (long *)0x0) {
            uVar20 = func_0x00f78af4();
            uVar32 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
            *(undefined4 *)(uVar20 + 0x2c) = uVar32;
            *(undefined4 *)(uVar20 + 0x30) = param_2;
            *(undefined4 *)(uVar20 + 0x34) = param_3;
            return uVar20;
          }
          uVar11 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
          if (uVar11 < 8) {
            uVar20 = (ulong)*(uint *)(&UNK_033f833c + (long)(int)uVar11 * 4);
          }
          else {
            uVar20 = 0;
          }
          return uVar20;
        }
        uVar11 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
        if (uVar11 < 8) {
          uVar20 = (ulong)*(uint *)(&UNK_033f831c + (long)(int)uVar11 * 4);
        }
        else {
          uVar20 = 0;
        }
        return uVar20;
      }
      plVar17 = *(long **)(unaff_x21 + 0x68);
      if (plVar17 != (long *)0x0) {
        if (((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar17 + 300)) &&
            (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8
                      + -8) == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) &&
           (uVar20 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar17,0),
           (int)uVar20 < *(int *)(uVar14 + 0x58))) {
          return uVar20;
        }
      }
      if ((uVar22 == 0) || (*(long *)(uVar14 + 0x50) == 0)) goto code_r0x0146f2c0;
      uVar20 = /*System.Collections.Generic.List<StringID>$$Contains*/ func_0x02466428(*(long *)(uVar14 + 0x50),*(undefined8 *)(uVar22 + 0x18),
                               uRam0000000003d3c058);
      if ((uVar20 & 1) != 0) {
        return uVar20;
      }
      lVar15 = *(long *)(uVar14 + 0x10);
      if (lVar15 == 0) goto code_r0x0146f2c0;
      uVar20 = 0x67;
      unaff_x30 = &UNK_0146f298;
    }
    else {
      uVar20 = 0x14;
      unaff_x30 = &UNK_0146f0f4;
      unaff_x29 = &pppppuStack_50;
    }
  }
  else {
    uVar14 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(param_5,0);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    unaff_x19 = param_6;
    if ((param_6 == 0) || (lVar15 = *(long *)(param_4 + 0x10), lVar15 == 0)) goto LAB_0146f004;
    uVar20 = (ulong)*(uint *)(param_6 + 0x60);
    puVar7 = (ulong *)register0x00000008;
  }
code_r0x015050bc:
  uVar22 = 0;
  *(long *)((long)puVar7 + -0x20) = auVar35._8_8_;
  *(ulong *)((long)puVar7 + -0x18) = auVar35._0_8_;
  *(undefined8 *******)((long)puVar7 + -0x10) = unaff_x29;
  *(undefined **)((long)puVar7 + -8) = unaff_x30;
  uVar14 = auVar35._0_8_;
  if (*(long *)(lVar15 + 0x20) == 0) {
code_r0x01505118:
    func_0x00f78af4();
  }
  else {
    /*Atlas.Stats.StatsData$$IncrementStat*/ func_0x01504a24();
    lVar23 = *(long *)(lVar15 + 0x28);
    uVar14 = uVar20;
    if (lVar23 == 0) goto code_r0x01505118;
    if ((uint)uVar20 < *(uint *)(lVar23 + 0x18)) {
      uVar20 = *(ulong *)(lVar23 + (long)(int)(uint)uVar20 * 8 + 0x20);
      if (uVar20 == 0) {
        return 0;
      }
      uVar18 = *(undefined8 *)((long)puVar7 + -0x10);
      uVar31 = *(undefined8 *)((long)puVar7 + -8);
      uVar28 = *(undefined8 *)((long)puVar7 + -0x20);
      uVar27 = *(undefined8 *)((long)puVar7 + -0x18);
      puVar8 = (undefined1 *)puVar7;
      goto System_Action__Invoke;
    }
  }
  uVar18 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar18,0);
  lVar23 = auVar35._0_8_;
  *(long *)((long)puVar7 + -0x40) = lVar15;
  *(ulong *)((long)puVar7 + -0x38) = uVar14;
  *(undefined1 **)((long)puVar7 + -0x30) = (undefined1 *)((long)puVar7 + -0x10);
  *(undefined **)((long)puVar7 + -0x28) = &Atlas_Stats_StatsManager__DecrementStat;
  if (*(long *)(lVar23 + 0x20) != 0) {
    /*Atlas.Stats.StatsData$$DecrementStat*/ func_0x01504a78();
    lVar15 = *(long *)(lVar23 + 0x28);
    uVar14 = auVar35._8_8_;
    if (lVar15 != 0) {
      if (auVar35._8_4_ < *(uint *)(lVar15 + 0x18)) {
        uVar20 = *(ulong *)(lVar15 + (long)(int)auVar35._8_4_ * 8 + 0x20);
        if (uVar20 == 0) {
          return 0;
        }
        uVar18 = *(undefined8 *)((long)puVar7 + -0x30);
        uVar31 = *(undefined8 *)((long)puVar7 + -0x28);
        puVar8 = (undefined1 *)((long)puVar7 + -0x20);
        uVar28 = *(undefined8 *)((long)puVar7 + -0x40);
        uVar27 = *(undefined8 *)((long)puVar7 + -0x38);
System_Action__Invoke:
        uVar21 = 0;
        *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
        *(undefined4 **)(puVar8 + -0x38) = unaff_x23;
        *(ulong *)(puVar8 + -0x30) = unaff_x22;
        *(long *)(puVar8 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar8 + -0x20) = uVar28;
        *(undefined8 *)(puVar8 + -0x18) = uVar27;
        *(undefined8 *)(puVar8 + -0x10) = uVar18;
        *(undefined8 *)(puVar8 + -8) = uVar31;
        *(ulong *)(puVar8 + -0x58) = uVar20;
        lVar15 = *(long *)(uVar20 + 0x68);
        if (lVar15 == 0) {
          puVar8 = puVar8 + -0x58;
          lVar23 = 1;
        }
        else {
          lVar23 = *(long *)(lVar15 + 0x18);
          if (lVar23 == 0) {
            return uVar20;
          }
          puVar8 = (undefined1 *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar24 = *(long *)(puVar8 + lVar15 * 8);
          pcVar29 = *(code **)(lVar24 + 0x10);
          plVar17 = *(long **)(lVar24 + 0x20);
          lVar24 = *(long *)(lVar24 + 0x28);
          if (*(short *)(lVar24 + 0x48) == -1) {
            func_0x00f78ad8(lVar24,uVar21);
          }
          iVar12 = func_0x00f78a4c(lVar24);
          if (iVar12 == 0) {
            if ((((plVar17 == (long *)0x0) || (*(short *)(lVar24 + 0x48) == -1)) ||
                ((*(byte *)(*plVar17 + 0x115) & 1) != 0)) || (*(long *)(uVar20 + 0x18) == 0))
            goto code_r0x02924d98;
            iVar12 = func_0x00f78a44(lVar24);
            iVar13 = func_0x00f78ec0(lVar24);
            if (iVar12 == 0) {
              uVar1 = *(ushort *)(lVar24 + 0x48);
              if (iVar13 == 0) {
                lVar24 = *plVar17 + (ulong)uVar1 * 0x10;
                auVar35 = (**(code **)(lVar24 + 0x138))(plVar17,*(undefined8 *)(lVar24 + 0x140));
                goto code_r0x02924da4;
              }
              lVar24 = func_0x00f78a48(lVar24);
              lVar25 = *plVar17;
              uVar14 = (ulong)*(ushort *)(lVar25 + 0x12a);
              if (uVar14 != 0) {
                piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == lVar24) {
                    puVar19 = (undefined8 *)
                              (lVar25 + (long)(int)(*piVar26 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar26 = piVar26 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              puVar19 = (undefined8 *)func_0x00fac1f0(plVar17,lVar24,(ulong)uVar1);
code_r0x02924e68:
              pcVar29 = (code *)*puVar19;
              puVar19 = (undefined8 *)puVar19[1];
            }
            else {
              if (iVar13 == 0) {
                uVar18 = *(undefined8 *)
                          (*plVar17 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar25 = *plVar17;
                uVar14 = (ulong)*(ushort *)(lVar25 + 0x12a);
                if (uVar14 != 0) {
                  piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == *(long *)(lVar24 + 0x18)) {
                      lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar24 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar26 = piVar26 + 4;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
                lVar25 = func_0x00fac1f0(plVar17);
code_r0x02924e40:
                uVar18 = *(undefined8 *)(lVar25 + 8);
              }
              puVar19 = (undefined8 *)func_0x00f78acc(uVar18,lVar24);
              pcVar29 = (code *)*puVar19;
            }
            auVar35 = (*pcVar29)(plVar17,puVar19);
          }
          else if (*(char *)(lVar24 + 0x4a) == '\0') {
            auVar35 = (*pcVar29)(lVar24);
          }
          else {
code_r0x02924d98:
            auVar35 = (*pcVar29)(plVar17,lVar24);
          }
code_r0x02924da4:
          uVar21 = auVar35._8_8_;
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar23) {
            return auVar35._0_8_;
          }
        } while( true );
      }
      goto code_r0x01505188;
    }
  }
  func_0x00f78af4();
code_r0x01505188:
  uVar18 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar18,0);
  auVar6 = auVar35._0_12_;
  lVar24 = auVar35._0_8_;
  auVar34._8_8_ = uVar14;
  auVar34._0_8_ = lVar24;
  puVar9 = (undefined1 *)((long)puVar7 + -0x70);
  *(ulong *)((long)puVar7 + -0x70) = unaff_x22;
  *(long *)((long)puVar7 + -0x68) = unaff_x21;
  *(long *)((long)puVar7 + -0x60) = lVar23;
  *(ulong *)((long)puVar7 + -0x58) = uVar14;
  *(undefined1 **)((long)puVar7 + -0x50) = (undefined1 *)((long)puVar7 + -0x30);
  *(undefined **)((long)puVar7 + -0x48) = &Atlas_Stats_StatsManager__SetStat;
  puVar8 = (undefined1 *)((long)puVar7 + -0x50);
  lVar15 = *(long *)(lVar24 + 0x20);
  if (lVar15 == 0) {
    func_0x00f78af4();
    uVar18 = func_0x00f78b24();
    auVar35 = func_0x00f78ac0(uVar18,0);
    auVar2._8_8_ = auVar35._8_8_;
    auVar2._0_8_ = lVar24;
    auVar6 = auVar2._0_12_;
    *(undefined1 **)((long)puVar7 + -0x80) = puVar8;
    *(undefined **)((long)puVar7 + -0x78) = &Atlas_Stats_StatsManager__GetStat;
    lVar15 = *(long *)(auVar35._0_8_ + 0x20);
    if (lVar15 == 0) {
      auVar35 = func_0x00f78af4();
      auVar3._8_8_ = auVar35._8_8_;
      auVar3._0_8_ = lVar24;
      auVar6 = auVar3._0_12_;
      *(undefined1 **)((long)puVar7 + -0x90) = (undefined1 *)((long)puVar7 + -0x80);
      *(undefined **)((long)puVar7 + -0x88) = &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar15 = *(long *)(auVar35._0_8_ + 0x18);
      if (lVar15 == 0) {
        auVar35 = func_0x00f78af4();
        auVar4._8_8_ = auVar35._8_8_;
        auVar4._0_8_ = lVar24;
        auVar6 = auVar4._0_12_;
        puVar8 = (undefined1 *)((long)puVar7 + -0xa0);
        *(undefined1 **)((long)puVar7 + -0xa0) = (undefined1 *)((long)puVar7 + -0x90);
        *(undefined **)((long)puVar7 + -0x98) = &Atlas_Stats_StatsManager__GetCommittedStat;
        lVar15 = *(long *)(auVar35._0_8_ + 0x10);
        if (lVar15 == 0) {
          puVar30 = &Atlas_Stats_StatsManager__GetGlobalStat;
          auVar33 = func_0x00f78af4();
          puVar10 = (undefined1 *)((long)puVar7 + -0xa0);
          while( true ) {
            auVar6 = auVar33._0_12_;
            uVar14 = auVar33._8_8_;
            lVar23 = auVar33._0_8_;
            auVar5._8_8_ = auVar34._8_8_;
            auVar5._0_8_ = lVar23;
            puVar9 = puVar10 + -0x30;
            *(ulong *)(puVar10 + -0x30) = unaff_x22;
            *(long *)(puVar10 + -0x28) = unaff_x21;
            *(undefined1 (*) [16])(puVar10 + -0x20) = auVar34;
            *(undefined1 **)(puVar10 + -0x10) = puVar8;
            *(undefined **)(puVar10 + -8) = puVar30;
            puVar8 = puVar10 + -0x10;
            lVar15 = *(long *)(lVar23 + 0x10);
            if (lVar15 != 0) break;
            auVar35 = func_0x00f78af4();
            uVar14 = auVar35._8_8_;
            puVar9 = puVar10 + -0x70;
            *(undefined8 *)(puVar10 + -0x70) = unaff_x24;
            *(undefined4 **)(puVar10 + -0x68) = unaff_x23;
            *(ulong *)(puVar10 + -0x60) = unaff_x22;
            *(long *)(puVar10 + -0x58) = unaff_x21;
            *(long *)(puVar10 + -0x50) = lVar23;
            *(long *)(puVar10 + -0x48) = auVar34._8_8_;
            *(undefined1 **)(puVar10 + -0x40) = puVar8;
            *(undefined **)(puVar10 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            puVar8 = puVar10 + -0x40;
            if (uVar14 == 0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(uVar14 + 0x18) < 1) {
                return 0;
              }
              unaff_x21 = 0;
              unaff_x22 = 0;
              unaff_x23 = (undefined4 *)(uVar14 + 0x20);
              auVar5 = auVar35;
              if ((*(ulong *)(uVar14 + 0x18) & 0xffffffff) != 0) {
                lVar15 = *(long *)(auVar35._0_8_ + 0x10);
                if (lVar15 == 0) goto code_r0x01505370;
                auVar6._8_4_ = *unaff_x23;
                auVar6._0_8_ = auVar35._0_8_;
                puVar30 = &UNK_0150533c;
                goto code_r0x01504b20;
              }
            }
            uVar18 = func_0x00f78b24();
            auVar35 = func_0x00f78ac0(uVar18,0);
            uVar14 = auVar35._8_8_;
            puVar9 = puVar10 + -0xb0;
            *(undefined8 *)(puVar10 + -0xb0) = unaff_x24;
            *(undefined4 **)(puVar10 + -0xa8) = unaff_x23;
            *(ulong *)(puVar10 + -0xa0) = unaff_x22;
            *(long *)(puVar10 + -0x98) = unaff_x21;
            *(undefined1 (*) [16])(puVar10 + -0x90) = auVar5;
            *(undefined1 **)(puVar10 + -0x80) = puVar8;
            *(undefined **)(puVar10 + -0x78) = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            puVar8 = puVar10 + -0x80;
            if (uVar14 == 0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(uVar14 + 0x18) < 1) {
                return 0;
              }
              unaff_x21 = 0;
              unaff_x22 = 0;
              unaff_x23 = (undefined4 *)(uVar14 + 0x20);
              auVar5 = auVar35;
              if ((*(ulong *)(uVar14 + 0x18) & 0xffffffff) != 0) {
                lVar15 = *(long *)(auVar35._0_8_ + 0x18);
                if (lVar15 == 0) goto code_r0x01505408;
                auVar6._8_4_ = *unaff_x23;
                auVar6._0_8_ = auVar35._0_8_;
                puVar30 = &UNK_015053d4;
                goto code_r0x01504b20;
              }
            }
            uVar18 = func_0x00f78b24();
            auVar34 = func_0x00f78ac0(uVar18,0);
            lVar15 = auVar34._8_8_;
            *(undefined8 *)(puVar10 + -0xf0) = unaff_x24;
            *(undefined4 **)(puVar10 + -0xe8) = unaff_x23;
            *(ulong *)(puVar10 + -0xe0) = unaff_x22;
            *(long *)(puVar10 + -0xd8) = unaff_x21;
            *(undefined1 (*) [16])(puVar10 + -0xd0) = auVar5;
            *(undefined1 **)(puVar10 + -0xc0) = puVar8;
            *(undefined **)(puVar10 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            puVar8 = puVar10 + -0xc0;
            if (lVar15 == 0) {
code_r0x015054a8:
              uVar18 = func_0x00f78af4();
              *(ulong *)(puVar10 + -0x120) = unaff_x22;
              *(long *)(puVar10 + -0x118) = unaff_x21;
              *(undefined1 (*) [16])(puVar10 + -0x110) = auVar5;
              *(undefined1 **)(puVar10 + -0x100) = puVar8;
              *(undefined **)(puVar10 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)(puVar10 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar18,puVar10 + -0x124);
              return (ulong)*(uint *)(puVar10 + -0x124);
            }
            if ((int)*(ulong *)(lVar15 + 0x18) < 1) {
              return 0;
            }
            unaff_x21 = 0;
            unaff_x22 = 0;
            unaff_x23 = (undefined4 *)(lVar15 + 0x20);
            if ((*(ulong *)(lVar15 + 0x18) & 0xffffffff) == 0) {
              uVar18 = func_0x00f78b24();
              func_0x00f78ac0(uVar18,0);
              auVar5 = auVar34;
              goto code_r0x015054a8;
            }
            auVar33._8_4_ = *unaff_x23;
            auVar33._0_8_ = auVar34._0_8_;
            auVar33._12_4_ = 0;
            puVar30 = &UNK_01505468;
            puVar10 = puVar10 + -0xf0;
          }
          puVar30 = &UNK_015052bc;
        }
        else {
          puVar9 = (undefined1 *)((long)puVar7 + -0x90);
          puVar8 = *(undefined1 **)((long)puVar7 + -0xa0);
          puVar30 = *(undefined **)((long)puVar7 + -0x98);
        }
      }
      else {
        puVar9 = (undefined1 *)((long)puVar7 + -0x80);
        puVar8 = *(undefined1 **)((long)puVar7 + -0x90);
        puVar30 = *(undefined **)((long)puVar7 + -0x88);
      }
    }
    else {
      puVar9 = (undefined1 *)((long)puVar7 + -0x70);
      puVar8 = *(undefined1 **)((long)puVar7 + -0x80);
      puVar30 = *(undefined **)((long)puVar7 + -0x78);
    }
  }
  else {
    puVar30 = &UNK_015051c0;
    uVar14 = auVar35._8_8_;
    unaff_x22 = uVar22;
  }
code_r0x01504b20:
  *(undefined1 **)(puVar9 + -0x10) = puVar8;
  *(undefined **)(puVar9 + -8) = puVar30;
  lVar15 = *(long *)(lVar15 + 0x10);
  if (lVar15 == 0) {
    func_0x00f78af4();
  }
  else if (auVar6._8_4_ < *(uint *)(lVar15 + 0x18)) {
    return (ulong)*(uint *)(lVar15 + (long)(int)auVar6._8_4_ * 4 + 0x20);
  }
  uVar18 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar18,0);
  lVar15 = auVar35._8_8_;
  uVar22 = auVar35._0_8_;
  *(undefined8 *)(puVar9 + -0x50) = unaff_x24;
  *(undefined4 **)(puVar9 + -0x48) = unaff_x23;
  *(ulong *)(puVar9 + -0x40) = unaff_x22;
  *(long *)(puVar9 + -0x38) = unaff_x21;
  *(long *)(puVar9 + -0x30) = auVar6._0_8_;
  *(ulong *)(puVar9 + -0x28) = uVar14;
  *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x18) = &Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar20 = uVar22;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar20 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar23 = *(long *)(uVar22 + 0x10);
  if (((lVar23 != 0) && (lVar15 != 0)) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar12 = *(int *)(lVar23 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar15 + 0x10) + 0x18);
    if (iVar12 < (int)unaff_x22) {
      lVar23 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      uVar20 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar22 + 0x10),lVar23,iVar12,0);
      *(long *)(uVar22 + 0x10) = lVar23;
    }
    if ((int)unaff_x22 < 1) {
      return uVar20;
    }
    if (lVar23 != 0) {
      uVar14 = 0;
      uVar11 = *(uint *)(lVar23 + 0x18);
      while (uVar11 != uVar14) {
        lVar24 = *(long *)(lVar15 + 0x10);
        if (lVar24 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar24 + 0x18) <= uVar14) || (uVar11 <= uVar14)) break;
        iVar12 = *(int *)(lVar23 + 0x20 + uVar14 * 4);
        iVar13 = *(int *)(lVar24 + uVar14 * 4 + 0x20);
        if (iVar12 <= iVar13) {
          iVar12 = iVar13;
        }
        *(int *)(lVar23 + 0x20 + uVar14 * 4) = iVar12;
        uVar14 = uVar14 + 1;
        if ((unaff_x22 & 0xffffffff) == uVar14) {
          return uVar20;
        }
      }
      uVar18 = func_0x00f78b24();
      func_0x00f78ac0(uVar18,0);
    }
  }
code_r0x01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar9 + -0x80) = unaff_x22;
  *(long *)(puVar9 + -0x78) = lVar23;
  *(undefined1 (*) [16])(puVar9 + -0x70) = auVar35;
  *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x20;
  *(undefined **)(puVar9 + -0x58) = &Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar20 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar20;
}



// ============================================================
// RVA: 0x146f008 | Atlas.Stats.AtlasStats.OnUsableHoppedOver
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x146f0a4 | Atlas.Stats.AtlasStats.OnBoxHit
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015052b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015053d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Removing unreachable block (ram,0x015053d4) */
/* WARNING: Removing unreachable block (ram,0x015053e8) */
/* WARNING: Removing unreachable block (ram,0x0150533c) */
/* WARNING: Removing unreachable block (ram,0x01505350) */
/* WARNING: Removing unreachable block (ram,0x015052bc) */
/* WARNING: Removing unreachable block (ram,0x015052c8) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x015051e8) */
/* WARNING: Removing unreachable block (ram,0x015051f0) */
/* WARNING: Removing unreachable block (ram,0x015051f8) */
/* WARNING: Removing unreachable block (ram,0x01505204) */
/* WARNING: Removing unreachable block (ram,0x01505224) */
/* WARNING: Removing unreachable block (ram,0x01505210) */
/* WARNING: Removing unreachable block (ram,0x015051c0) */
/* WARNING: Removing unreachable block (ram,0x015051cc) */
/* WARNING: Removing unreachable block (ram,0x015051e0) */
/* WARNING: Removing unreachable block (ram,0x0146f0f4) */
/* WARNING: Removing unreachable block (ram,0x0146f0fc) */
/* WARNING: Removing unreachable block (ram,0x0146f104) */
/* WARNING: Removing unreachable block (ram,0x0146f128) */
/* WARNING: Removing unreachable block (ram,0x0146f14c) */
/* WARNING: Removing unreachable block (ram,0x0146f15c) */
/* WARNING: Removing unreachable block (ram,0x0146f164) */
/* WARNING: Removing unreachable block (ram,0x0146f138) */
/* WARNING: Removing unreachable block (ram,0x0146f140) */
/* WARNING: Removing unreachable block (ram,0x0146f114) */
/* WARNING: Removing unreachable block (ram,0x0146f11c) */
/* WARNING: Removing unreachable block (ram,0x0146f298) */
/* WARNING: Removing unreachable block (ram,0x0146f2a0) */
/* WARNING: Removing unreachable block (ram,0x024660f8) */
/* WARNING: Removing unreachable block (ram,0x0246610c) */
/* WARNING: Removing unreachable block (ram,0x02466124) */
/* WARNING: Removing unreachable block (ram,0x02466154) */
/* WARNING: Removing unreachable block (ram,0x02466158) */
/* WARNING: Removing unreachable block (ram,0x02466160) */
/* WARNING: Removing unreachable block (ram,0x0246618c) */
/* WARNING: Removing unreachable block (ram,0x024661d8) */
/* WARNING: Removing unreachable block (ram,0x024661f4) */
/* WARNING: Removing unreachable block (ram,0x024661fc) */
/* WARNING: Removing unreachable block (ram,0x02466264) */
/* WARNING: Removing unreachable block (ram,0x02466200) */
/* WARNING: Removing unreachable block (ram,0x0246626c) */
/* WARNING: Removing unreachable block (ram,0x0246633c) */
/* WARNING: Removing unreachable block (ram,0x02466214) */
/* WARNING: Removing unreachable block (ram,0x0246616c) */

ulong Atlas_Stats_AtlasStats__OnBoxHit
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4,
                long param_5,ulong param_6)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  int iVar12;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 unaff_x21;
  ulong unaff_x22;
  code *pcVar28;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  auVar35._8_8_ = unaff_x21;
  auVar35._0_8_ = param_5;
  puVar7 = &stack0xffffffffffffffe0;
  uVar14 = param_4;
  if ((((*(char *)(param_4 + 0x5d) == '\0') || (param_5 == 0)) || (*(int *)(param_4 + 0x60) != 1))
     || (uVar14 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer(param_5,0),
        (int)uVar14 == 0)) {
    return uVar14;
  }
  lVar15 = *(long *)(param_4 + 0x10);
  if (lVar15 == 0) {
    auVar35 = func_0x00f78af4();
    lVar15 = auVar35._8_8_;
    uVar24 = auVar35._0_8_;
    puVar7 = &stack0xffffffffffffffb0;
    puStack_28 = &Atlas_Stats_AtlasStats__OnKartEnterShortcut;
    ppppppuVar29 = &pppppuStack_30;
    unaff_x22 = 0x3eb4000;
    uVar14 = uVar24;
    pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4863 & 1) == 0) {
      func_0x00f78a20(0x3d3c048);
      func_0x00f78a20(0x3d3c058);
      uVar14 = func_0x00f78a20(0x3d24070);
      bRam0000000003eb4863 = 1;
    }
    if (((*(char *)(uVar24 + 0x5d) == '\0') || (*(int *)(uVar24 + 0x60) != 1)) ||
       (*(long *)(uVar24 + 0x18) != lVar15)) {
      return uVar14;
    }
    if (lVar15 == 0) {
code_r0x0146f2c0:
      auVar35 = func_0x00f78af4();
      uVar14 = auVar35._0_8_;
      if (auVar35._8_8_ != 0) {
        if (*(long *)(uVar14 + 0x18) == *(long *)(auVar35._8_8_ + 0x10)) {
          *(undefined1 *)(uVar14 + 0x5c) = 1;
        }
        return uVar14;
      }
      plVar16 = (long *)func_0x00f78af4();
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)func_0x00f78af4();
        if (plVar16 == (long *)0x0) {
          uVar14 = func_0x00f78af4();
          uVar32 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
          *(undefined4 *)(uVar14 + 0x2c) = uVar32;
          *(undefined4 *)(uVar14 + 0x30) = param_2;
          *(undefined4 *)(uVar14 + 0x34) = param_3;
          return uVar14;
        }
        uVar11 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
        if (uVar11 < 8) {
          uVar14 = (ulong)*(uint *)(&UNK_033f833c + (long)(int)uVar11 * 4);
        }
        else {
          uVar14 = 0;
        }
        return uVar14;
      }
      uVar11 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
      if (uVar11 < 8) {
        uVar14 = (ulong)*(uint *)(&UNK_033f831c + (long)(int)uVar11 * 4);
      }
      else {
        uVar14 = 0;
      }
      return uVar14;
    }
    plVar16 = *(long **)(lVar15 + 0x68);
    if (plVar16 != (long *)0x0) {
      if (((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar16 + 300)) &&
          (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 +
                    -8) == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) &&
         (uVar14 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar16,0),
         (int)uVar14 < *(int *)(uVar24 + 0x58))) {
        return uVar14;
      }
    }
    if ((param_6 == 0) || (*(long *)(uVar24 + 0x50) == 0)) goto code_r0x0146f2c0;
    uVar14 = /*System.Collections.Generic.List<StringID>$$Contains*/ func_0x02466428(*(long *)(uVar24 + 0x50),*(undefined8 *)(param_6 + 0x18),
                             uRam0000000003d3c058);
    if ((uVar14 & 1) != 0) {
      return uVar14;
    }
    lVar15 = *(long *)(uVar24 + 0x10);
    if (lVar15 == 0) goto code_r0x0146f2c0;
    uVar14 = 0x67;
    puVar30 = &UNK_0146f298;
  }
  else {
    uVar14 = 0x14;
    puVar30 = (undefined *)0x146f0f4;
    param_6 = param_4;
    ppppppuVar29 = (undefined8 ******)&stack0xfffffffffffffff0;
  }
  uVar18 = auVar35._8_8_;
  uVar24 = 0;
  *(long *)(puVar7 + -0x20) = auVar35._0_8_;
  *(ulong *)(puVar7 + -0x18) = param_6;
  *(undefined8 *******)(puVar7 + -0x10) = ppppppuVar29;
  *(undefined **)(puVar7 + -8) = puVar30;
  if (*(long *)(lVar15 + 0x20) == 0) {
code_r0x01505118:
    func_0x00f78af4();
  }
  else {
    /*Atlas.Stats.StatsData$$IncrementStat*/ func_0x01504a24();
    lVar21 = *(long *)(lVar15 + 0x28);
    param_6 = uVar14;
    if (lVar21 == 0) goto code_r0x01505118;
    if ((uint)uVar14 < *(uint *)(lVar21 + 0x18)) {
      uVar14 = *(ulong *)(lVar21 + (long)(int)(uint)uVar14 * 8 + 0x20);
      if (uVar14 == 0) {
        return 0;
      }
      uVar17 = *(undefined8 *)(puVar7 + -0x10);
      uVar31 = *(undefined8 *)(puVar7 + -8);
      uVar27 = *(undefined8 *)(puVar7 + -0x20);
      uVar26 = *(undefined8 *)(puVar7 + -0x18);
      puVar8 = puVar7;
      goto System_Action__Invoke;
    }
  }
  uVar17 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar17,0);
  lVar21 = auVar35._0_8_;
  *(long *)(puVar7 + -0x40) = lVar15;
  *(ulong *)(puVar7 + -0x38) = param_6;
  *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x28) = &Atlas_Stats_StatsManager__DecrementStat;
  if (*(long *)(lVar21 + 0x20) != 0) {
    /*Atlas.Stats.StatsData$$DecrementStat*/ func_0x01504a78();
    lVar15 = *(long *)(lVar21 + 0x28);
    param_6 = auVar35._8_8_;
    if (lVar15 != 0) {
      if (auVar35._8_4_ < *(uint *)(lVar15 + 0x18)) {
        uVar14 = *(ulong *)(lVar15 + (long)(int)auVar35._8_4_ * 8 + 0x20);
        if (uVar14 == 0) {
          return 0;
        }
        uVar17 = *(undefined8 *)(puVar7 + -0x30);
        uVar31 = *(undefined8 *)(puVar7 + -0x28);
        puVar8 = puVar7 + -0x20;
        uVar27 = *(undefined8 *)(puVar7 + -0x40);
        uVar26 = *(undefined8 *)(puVar7 + -0x38);
System_Action__Invoke:
        uVar20 = 0;
        *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
        *(undefined4 **)(puVar8 + -0x38) = unaff_x23;
        *(ulong *)(puVar8 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar8 + -0x28) = uVar18;
        *(undefined8 *)(puVar8 + -0x20) = uVar27;
        *(undefined8 *)(puVar8 + -0x18) = uVar26;
        *(undefined8 *)(puVar8 + -0x10) = uVar17;
        *(undefined8 *)(puVar8 + -8) = uVar31;
        *(ulong *)(puVar8 + -0x58) = uVar14;
        lVar15 = *(long *)(uVar14 + 0x68);
        if (lVar15 == 0) {
          puVar8 = puVar8 + -0x58;
          lVar21 = 1;
        }
        else {
          lVar21 = *(long *)(lVar15 + 0x18);
          if (lVar21 == 0) {
            return uVar14;
          }
          puVar8 = (undefined1 *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar22 = *(long *)(puVar8 + lVar15 * 8);
          pcVar28 = *(code **)(lVar22 + 0x10);
          plVar16 = *(long **)(lVar22 + 0x20);
          lVar22 = *(long *)(lVar22 + 0x28);
          if (*(short *)(lVar22 + 0x48) == -1) {
            func_0x00f78ad8(lVar22,uVar20);
          }
          iVar12 = func_0x00f78a4c(lVar22);
          if (iVar12 == 0) {
            if ((((plVar16 == (long *)0x0) || (*(short *)(lVar22 + 0x48) == -1)) ||
                ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(uVar14 + 0x18) == 0))
            goto code_r0x02924d98;
            iVar12 = func_0x00f78a44(lVar22);
            iVar13 = func_0x00f78ec0(lVar22);
            if (iVar12 == 0) {
              uVar1 = *(ushort *)(lVar22 + 0x48);
              if (iVar13 == 0) {
                lVar22 = *plVar16 + (ulong)uVar1 * 0x10;
                auVar35 = (**(code **)(lVar22 + 0x138))(plVar16,*(undefined8 *)(lVar22 + 0x140));
                goto code_r0x02924da4;
              }
              lVar22 = func_0x00f78a48(lVar22);
              lVar23 = *plVar16;
              uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar24 != 0) {
                piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == lVar22) {
                    puVar19 = (undefined8 *)
                              (lVar23 + (long)(int)(*piVar25 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar25 = piVar25 + 4;
                  uVar24 = uVar24 - 1;
                } while (uVar24 != 0);
              }
              puVar19 = (undefined8 *)func_0x00fac1f0(plVar16,lVar22,(ulong)uVar1);
code_r0x02924e68:
              pcVar28 = (code *)*puVar19;
              puVar19 = (undefined8 *)puVar19[1];
            }
            else {
              if (iVar13 == 0) {
                uVar18 = *(undefined8 *)
                          (*plVar16 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar23 = *plVar16;
                uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
                if (uVar24 != 0) {
                  piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == *(long *)(lVar22 + 0x18)) {
                      lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar22 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar25 = piVar25 + 4;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
                lVar23 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
                uVar18 = *(undefined8 *)(lVar23 + 8);
              }
              puVar19 = (undefined8 *)func_0x00f78acc(uVar18,lVar22);
              pcVar28 = (code *)*puVar19;
            }
            auVar35 = (*pcVar28)(plVar16,puVar19);
          }
          else if (*(char *)(lVar22 + 0x4a) == '\0') {
            auVar35 = (*pcVar28)(lVar22);
          }
          else {
code_r0x02924d98:
            auVar35 = (*pcVar28)(plVar16,lVar22);
          }
code_r0x02924da4:
          uVar20 = auVar35._8_8_;
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar21) {
            return auVar35._0_8_;
          }
        } while( true );
      }
      goto code_r0x01505188;
    }
  }
  func_0x00f78af4();
code_r0x01505188:
  uVar17 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar17,0);
  auVar6 = auVar35._0_12_;
  lVar22 = auVar35._0_8_;
  auVar34._8_8_ = param_6;
  auVar34._0_8_ = lVar22;
  puVar9 = puVar7 + -0x70;
  *(ulong *)(puVar7 + -0x70) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x68) = uVar18;
  *(long *)(puVar7 + -0x60) = lVar21;
  *(ulong *)(puVar7 + -0x58) = param_6;
  *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x30;
  *(undefined **)(puVar7 + -0x48) = &Atlas_Stats_StatsManager__SetStat;
  puVar8 = puVar7 + -0x50;
  lVar15 = *(long *)(lVar22 + 0x20);
  if (lVar15 == 0) {
    func_0x00f78af4();
    uVar17 = func_0x00f78b24();
    auVar35 = func_0x00f78ac0(uVar17,0);
    auVar2._8_8_ = auVar35._8_8_;
    auVar2._0_8_ = lVar22;
    auVar6 = auVar2._0_12_;
    *(undefined1 **)(puVar7 + -0x80) = puVar8;
    *(undefined **)(puVar7 + -0x78) = &Atlas_Stats_StatsManager__GetStat;
    lVar15 = *(long *)(auVar35._0_8_ + 0x20);
    if (lVar15 == 0) {
      auVar35 = func_0x00f78af4();
      auVar3._8_8_ = auVar35._8_8_;
      auVar3._0_8_ = lVar22;
      auVar6 = auVar3._0_12_;
      *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x80;
      *(undefined **)(puVar7 + -0x88) = &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar15 = *(long *)(auVar35._0_8_ + 0x18);
      if (lVar15 == 0) {
        auVar35 = func_0x00f78af4();
        auVar4._8_8_ = auVar35._8_8_;
        auVar4._0_8_ = lVar22;
        auVar6 = auVar4._0_12_;
        puVar8 = puVar7 + -0xa0;
        *(undefined1 **)(puVar7 + -0xa0) = puVar7 + -0x90;
        *(undefined **)(puVar7 + -0x98) = &Atlas_Stats_StatsManager__GetCommittedStat;
        lVar15 = *(long *)(auVar35._0_8_ + 0x10);
        if (lVar15 == 0) {
          puVar30 = &Atlas_Stats_StatsManager__GetGlobalStat;
          auVar33 = func_0x00f78af4();
          puVar10 = puVar7 + -0xa0;
          while( true ) {
            auVar6 = auVar33._0_12_;
            param_6 = auVar33._8_8_;
            lVar21 = auVar33._0_8_;
            auVar5._8_8_ = auVar34._8_8_;
            auVar5._0_8_ = lVar21;
            puVar9 = puVar10 + -0x30;
            *(ulong *)(puVar10 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar10 + -0x28) = uVar18;
            *(undefined1 (*) [16])(puVar10 + -0x20) = auVar34;
            *(undefined1 **)(puVar10 + -0x10) = puVar8;
            *(undefined **)(puVar10 + -8) = puVar30;
            puVar8 = puVar10 + -0x10;
            lVar15 = *(long *)(lVar21 + 0x10);
            if (lVar15 != 0) break;
            auVar35 = func_0x00f78af4();
            param_6 = auVar35._8_8_;
            puVar9 = puVar10 + -0x70;
            *(undefined8 *)(puVar10 + -0x70) = unaff_x24;
            *(undefined4 **)(puVar10 + -0x68) = unaff_x23;
            *(ulong *)(puVar10 + -0x60) = unaff_x22;
            *(undefined8 *)(puVar10 + -0x58) = uVar18;
            *(long *)(puVar10 + -0x50) = lVar21;
            *(long *)(puVar10 + -0x48) = auVar34._8_8_;
            *(undefined1 **)(puVar10 + -0x40) = puVar8;
            *(undefined **)(puVar10 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            puVar8 = puVar10 + -0x40;
            if (param_6 == 0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(param_6 + 0x18) < 1) {
                return 0;
              }
              uVar18 = 0;
              unaff_x22 = 0;
              unaff_x23 = (undefined4 *)(param_6 + 0x20);
              auVar5 = auVar35;
              if ((*(ulong *)(param_6 + 0x18) & 0xffffffff) != 0) {
                lVar15 = *(long *)(auVar35._0_8_ + 0x10);
                if (lVar15 == 0) goto code_r0x01505370;
                auVar6._8_4_ = *unaff_x23;
                auVar6._0_8_ = auVar35._0_8_;
                puVar30 = &UNK_0150533c;
                goto code_r0x01504b20;
              }
            }
            uVar17 = func_0x00f78b24();
            auVar35 = func_0x00f78ac0(uVar17,0);
            param_6 = auVar35._8_8_;
            puVar9 = puVar10 + -0xb0;
            *(undefined8 *)(puVar10 + -0xb0) = unaff_x24;
            *(undefined4 **)(puVar10 + -0xa8) = unaff_x23;
            *(ulong *)(puVar10 + -0xa0) = unaff_x22;
            *(undefined8 *)(puVar10 + -0x98) = uVar18;
            *(undefined1 (*) [16])(puVar10 + -0x90) = auVar5;
            *(undefined1 **)(puVar10 + -0x80) = puVar8;
            *(undefined **)(puVar10 + -0x78) = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            puVar8 = puVar10 + -0x80;
            if (param_6 == 0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(param_6 + 0x18) < 1) {
                return 0;
              }
              uVar18 = 0;
              unaff_x22 = 0;
              unaff_x23 = (undefined4 *)(param_6 + 0x20);
              auVar5 = auVar35;
              if ((*(ulong *)(param_6 + 0x18) & 0xffffffff) != 0) {
                lVar15 = *(long *)(auVar35._0_8_ + 0x18);
                if (lVar15 == 0) goto code_r0x01505408;
                auVar6._8_4_ = *unaff_x23;
                auVar6._0_8_ = auVar35._0_8_;
                puVar30 = &UNK_015053d4;
                goto code_r0x01504b20;
              }
            }
            uVar17 = func_0x00f78b24();
            auVar34 = func_0x00f78ac0(uVar17,0);
            lVar15 = auVar34._8_8_;
            *(undefined8 *)(puVar10 + -0xf0) = unaff_x24;
            *(undefined4 **)(puVar10 + -0xe8) = unaff_x23;
            *(ulong *)(puVar10 + -0xe0) = unaff_x22;
            *(undefined8 *)(puVar10 + -0xd8) = uVar18;
            *(undefined1 (*) [16])(puVar10 + -0xd0) = auVar5;
            *(undefined1 **)(puVar10 + -0xc0) = puVar8;
            *(undefined **)(puVar10 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            puVar8 = puVar10 + -0xc0;
            if (lVar15 == 0) {
code_r0x015054a8:
              uVar17 = func_0x00f78af4();
              *(ulong *)(puVar10 + -0x120) = unaff_x22;
              *(undefined8 *)(puVar10 + -0x118) = uVar18;
              *(undefined1 (*) [16])(puVar10 + -0x110) = auVar5;
              *(undefined1 **)(puVar10 + -0x100) = puVar8;
              *(undefined **)(puVar10 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)(puVar10 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar17,puVar10 + -0x124);
              return (ulong)*(uint *)(puVar10 + -0x124);
            }
            if ((int)*(ulong *)(lVar15 + 0x18) < 1) {
              return 0;
            }
            uVar18 = 0;
            unaff_x22 = 0;
            unaff_x23 = (undefined4 *)(lVar15 + 0x20);
            if ((*(ulong *)(lVar15 + 0x18) & 0xffffffff) == 0) {
              uVar17 = func_0x00f78b24();
              func_0x00f78ac0(uVar17,0);
              auVar5 = auVar34;
              goto code_r0x015054a8;
            }
            auVar33._8_4_ = *unaff_x23;
            auVar33._0_8_ = auVar34._0_8_;
            auVar33._12_4_ = 0;
            puVar30 = &UNK_01505468;
            puVar10 = puVar10 + -0xf0;
          }
          puVar30 = &UNK_015052bc;
        }
        else {
          puVar9 = puVar7 + -0x90;
          puVar8 = *(undefined1 **)(puVar7 + -0xa0);
          puVar30 = *(undefined **)(puVar7 + -0x98);
        }
      }
      else {
        puVar9 = puVar7 + -0x80;
        puVar8 = *(undefined1 **)(puVar7 + -0x90);
        puVar30 = *(undefined **)(puVar7 + -0x88);
      }
    }
    else {
      puVar9 = puVar7 + -0x70;
      puVar8 = *(undefined1 **)(puVar7 + -0x80);
      puVar30 = *(undefined **)(puVar7 + -0x78);
    }
  }
  else {
    puVar30 = &UNK_015051c0;
    param_6 = auVar35._8_8_;
    unaff_x22 = uVar24;
  }
code_r0x01504b20:
  *(undefined1 **)(puVar9 + -0x10) = puVar8;
  *(undefined **)(puVar9 + -8) = puVar30;
  lVar15 = *(long *)(lVar15 + 0x10);
  if (lVar15 == 0) {
    func_0x00f78af4();
  }
  else if (auVar6._8_4_ < *(uint *)(lVar15 + 0x18)) {
    return (ulong)*(uint *)(lVar15 + (long)(int)auVar6._8_4_ * 4 + 0x20);
  }
  uVar17 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar17,0);
  lVar15 = auVar35._8_8_;
  uVar24 = auVar35._0_8_;
  *(undefined8 *)(puVar9 + -0x50) = unaff_x24;
  *(undefined4 **)(puVar9 + -0x48) = unaff_x23;
  *(ulong *)(puVar9 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar9 + -0x38) = uVar18;
  *(long *)(puVar9 + -0x30) = auVar6._0_8_;
  *(ulong *)(puVar9 + -0x28) = param_6;
  *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x18) = &Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar14 = uVar24;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar14 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar21 = *(long *)(uVar24 + 0x10);
  if (((lVar21 != 0) && (lVar15 != 0)) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar12 = *(int *)(lVar21 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar15 + 0x10) + 0x18);
    if (iVar12 < (int)unaff_x22) {
      lVar21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      uVar14 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar24 + 0x10),lVar21,iVar12,0);
      *(long *)(uVar24 + 0x10) = lVar21;
    }
    if ((int)unaff_x22 < 1) {
      return uVar14;
    }
    if (lVar21 != 0) {
      uVar24 = 0;
      uVar11 = *(uint *)(lVar21 + 0x18);
      while (uVar11 != uVar24) {
        lVar22 = *(long *)(lVar15 + 0x10);
        if (lVar22 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar22 + 0x18) <= uVar24) || (uVar11 <= uVar24)) break;
        iVar12 = *(int *)(lVar21 + 0x20 + uVar24 * 4);
        iVar13 = *(int *)(lVar22 + uVar24 * 4 + 0x20);
        if (iVar12 <= iVar13) {
          iVar12 = iVar13;
        }
        *(int *)(lVar21 + 0x20 + uVar24 * 4) = iVar12;
        uVar24 = uVar24 + 1;
        if ((unaff_x22 & 0xffffffff) == uVar24) {
          return uVar14;
        }
      }
      uVar18 = func_0x00f78b24();
      func_0x00f78ac0(uVar18,0);
    }
  }
code_r0x01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar9 + -0x80) = unaff_x22;
  *(long *)(puVar9 + -0x78) = lVar21;
  *(undefined1 (*) [16])(puVar9 + -0x70) = auVar35;
  *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x20;
  *(undefined **)(puVar9 + -0x58) = &Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar14 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar14;
}



// ============================================================
// RVA: 0x146f188 | Atlas.Stats.AtlasStats.OnKartEnterShortcut
// ============================================================

ulong Atlas_Stats_AtlasStats__OnKartEnterShortcut
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4,
                long param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint extraout_w8;
  long lVar9;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  
  uVar3 = param_4;
  if ((bRam0000000003eb4863 & 1) == 0) {
    func_0x00f78a20(0x3d3c048);
    func_0x00f78a20(0x3d3c058);
    uVar3 = func_0x00f78a20(0x3d24070);
    bRam0000000003eb4863 = 1;
  }
  if (((*(char *)(param_4 + 0x5d) == '\0') || (*(int *)(param_4 + 0x60) != 1)) ||
     (*(long *)(param_4 + 0x18) != param_5)) {
    return uVar3;
  }
  if (param_5 == 0) {
LAB_0146f2c0:
    auVar13 = func_0x00f78af4();
    uVar3 = auVar13._0_8_;
    if (auVar13._8_8_ != 0) {
      if (*(long *)(uVar3 + 0x18) == *(long *)(auVar13._8_8_ + 0x10)) {
        *(undefined1 *)(uVar3 + 0x5c) = 1;
      }
      return uVar3;
    }
    plVar4 = (long *)func_0x00f78af4();
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)func_0x00f78af4();
      if (plVar4 == (long *)0x0) {
        uVar3 = func_0x00f78af4();
        uVar12 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        *(undefined4 *)(uVar3 + 0x2c) = uVar12;
        *(undefined4 *)(uVar3 + 0x30) = param_2;
        *(undefined4 *)(uVar3 + 0x34) = param_3;
        return uVar3;
      }
      uVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (uVar1 < 8) {
        uVar3 = (ulong)*(uint *)(&UNK_033f833c + (long)(int)uVar1 * 4);
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
    uVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    if (uVar1 < 8) {
      uVar3 = (ulong)*(uint *)(&UNK_033f831c + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  plVar4 = *(long **)(param_5 + 0x68);
  if (plVar4 != (long *)0x0) {
    if (((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar4 + 300)) &&
        (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 + -8)
         == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) &&
       (uVar3 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar4,0),
       (int)uVar3 < *(int *)(param_4 + 0x58))) {
      return uVar3;
    }
  }
  if ((param_6 == 0) || (*(long *)(param_4 + 0x50) == 0)) goto LAB_0146f2c0;
  uVar3 = /*System.Collections.Generic.List<StringID>$$Contains*/ func_0x02466428(*(long *)(param_4 + 0x50),*(undefined8 *)(param_6 + 0x18),
                          uRam0000000003d3c058);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  if (*(long *)(param_4 + 0x10) == 0) goto LAB_0146f2c0;
  /*Atlas.Stats.StatsManager$$IncrementStat*/ func_0x015050bc(*(long *)(param_4 + 0x10),0x67,0);
  uVar3 = *(ulong *)(param_4 + 0x50);
  if (uVar3 == 0) goto LAB_0146f2c0;
  uVar7 = *(undefined8 *)(param_6 + 0x18);
  lVar9 = *(long *)(uVar3 + 0x10);
  puVar8 = puRam0000000003d3c048;
  if (lVar9 == 0) {
code_r0x02466154:
    uVar7 = unaff_x20;
    uVar3 = unaff_x19;
    uVar5 = func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar1 = extraout_w8;
code_r0x02466158:
    *(uint *)(uVar3 + 0x18) = uVar1 + 1;
  }
  else {
    uVar1 = *(uint *)(uVar3 + 0x18);
    uVar5 = uVar3;
    if (uVar1 != *(uint *)(lVar9 + 0x18)) goto code_r0x02466158;
    puVar8 = *(undefined8 **)(*(long *)(puRam0000000003d3c048[3] + 0xc0) + 0x60);
    uVar5 = (*(code *)*puVar8)(uVar3,uVar1 + 1);
    lVar9 = *(long *)(uVar3 + 0x10);
    uVar1 = *(uint *)(uVar3 + 0x18);
    *(uint *)(uVar3 + 0x18) = uVar1 + 1;
    unaff_x19 = uVar3;
    unaff_x20 = uVar7;
    if (lVar9 == 0) goto code_r0x02466154;
  }
  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
    *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
    return uVar5;
  }
  uVar7 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar7,0);
  plVar4 = auVar13._8_8_;
  lVar9 = auVar13._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x48))(plVar4,0x14);
  if (lVar9 != 0) {
    pcVar11 = (code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x28);
    lVar10 = *(long *)(*(long *)(puVar8[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (plVar4 != (long *)0x0) {
      if (*(long *)(*plVar4 + 0x40) == *(long *)(lVar10 + 0x40)) {
        puVar6 = (undefined8 *)func_0x00f78ae4(plVar4);
        (*pcVar11)(lVar9,*puVar6,*(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0x28));
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x68))(lVar9);
        return (ulong)(iVar2 - 1);
      }
      func_0x00f78e5c(plVar4,lVar10);
      goto code_r0x0246633c;
    }
  }
  func_0x00f78af4();
code_r0x0246633c:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x2466340);
  (*pcVar11)();
}



// ============================================================
// RVA: 0x146f2c4 | Atlas.Stats.AtlasStats.OnRespawn
// ============================================================

ulong Atlas_Stats_AtlasStats__OnRespawn
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4,
                long param_5)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if (param_5 != 0) {
    if (*(long *)(param_4 + 0x18) == *(long *)(param_5 + 0x10)) {
      *(undefined1 *)(param_4 + 0x5c) = 1;
    }
    return param_4;
  }
  plVar2 = (long *)func_0x00f78af4();
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    if (uVar1 < 8) {
      uVar3 = (ulong)*(uint *)(&UNK_033f831c + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  plVar2 = (long *)func_0x00f78af4();
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    if (uVar1 < 8) {
      uVar3 = (ulong)*(uint *)(&UNK_033f833c + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  uVar3 = func_0x00f78af4();
  uVar4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(uVar3 + 0x2c) = uVar4;
  *(undefined4 *)(uVar3 + 0x30) = param_2;
  *(undefined4 *)(uVar3 + 0x34) = param_3;
  return uVar3;
}



// ============================================================
// RVA: 0x146f2f4 | Atlas.Stats.AtlasStats.GetHazardAvoidedByNormalShieldStat
// ============================================================

ulong Atlas_Stats_AtlasStats__GetHazardAvoidedByNormalShieldStat
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 uVar4;
  
  if (param_4 != (long *)0x0) {
    uVar1 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
    if (uVar1 < 8) {
      uVar2 = (ulong)*(uint *)(&UNK_033f831c + (long)(int)uVar1 * 4);
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  plVar3 = (long *)func_0x00f78af4();
  if (plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    if (uVar1 < 8) {
      uVar2 = (ulong)*(uint *)(&UNK_033f833c + (long)(int)uVar1 * 4);
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = func_0x00f78af4();
  uVar4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(uVar2 + 0x2c) = uVar4;
  *(undefined4 *)(uVar2 + 0x30) = param_2;
  *(undefined4 *)(uVar2 + 0x34) = param_3;
  return uVar2;
}



// ============================================================
// RVA: 0x146f334 | Atlas.Stats.AtlasStats.GetHazardAvoidedByTimeCheaterStat
// ============================================================

ulong Atlas_Stats_AtlasStats__GetHazardAvoidedByTimeCheaterStat
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (param_4 != (long *)0x0) {
    uVar1 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
    if (uVar1 < 8) {
      uVar2 = (ulong)*(uint *)(&UNK_033f833c + (long)(int)uVar1 * 4);
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = func_0x00f78af4();
  uVar3 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(uVar2 + 0x2c) = uVar3;
  *(undefined4 *)(uVar2 + 0x30) = param_2;
  *(undefined4 *)(uVar2 + 0x34) = param_3;
  return uVar2;
}



// ============================================================
// RVA: 0x146f374 | Atlas.Stats.AtlasStats..ctor
// ============================================================

undefined1  [16]
Atlas_Stats_AtlasStats___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x2c) = uVar1;
  *(undefined4 *)(param_4 + 0x30) = param_2;
  *(undefined4 *)(param_4 + 0x34) = param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  return auVar2;
}



// ============================================================
// RVA: 0x146f3a8 | Atlas.Stats.AtlasStats..cctor
// ============================================================

void Atlas_Stats_AtlasStats___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4866 & 1) == 0) {
    func_0x00f78a20(0x3d1fed8);
    func_0x00f78a20(0x3d1f488);
    func_0x00f78a20(0x3d65408);
    func_0x00f78a20(0x3d65410);
    bRam0000000003eb4866 = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.Stats.Stat[]_TypeInfo*/ uRam0000000003d1f488,7);
  /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar1,/*Field$<PrivateImplementationDetails>.E7B79A0BE184A45EBF4766614E423E3D03A239A63A0D163D5F1C714036E50E1D*/ uRam0000000003d65408,0);
  **(undefined8 **)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) = uVar1;
  uVar1 = func_0x00f78a34(/*Atlas.Stats.Stat[]_TypeInfo*/ uRam0000000003d1f488,7);
  /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar1,/*Field$<PrivateImplementationDetails>.FCD83CAAD70215B3AE5B7A094D2BC66AE0D068CB9A9699EC2FF744A3F3EF002E*/ uRam0000000003d65410,0);
  *(undefined8 *)(*(long *)(/*Atlas.Stats.AtlasStats_TypeInfo*/ lRam0000000003d1fed8 + 0xb8) + 8) = uVar1;
  return;
}



