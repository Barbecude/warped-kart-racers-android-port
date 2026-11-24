// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.AchievementManager.<>c__DisplayClass44_0

// ============================================================
// RVA: 0x1531788 | Atlas.Stats.AchievementManager.<>c__DisplayClass44_0..ctor
// ============================================================

void Atlas_Stats_AchievementManager___c__DisplayClass44_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1531790 | Atlas.Stats.AchievementManager.<>c__DisplayClass44_0.<PopulateStatAchievementProgress>b__0
// ============================================================

/* WARNING: Possible PIC construction at 0x015317d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015317d4) */

long Atlas_Stats_AchievementManager___c__DisplayClass44_0___PopulateStatAchievementProgress_b__0
               (long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
    lVar5 = func_0x00f78af4();
    return lVar5;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar6 = (ulong)uVar1;
  uVar7 = 0;
  lVar4 = Atlas_Stats_AchievementManager__UpdateStatAchievementProgress();
  if ((int)lVar4 == 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      func_0x00f78af4();
    }
    else if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined1 *)(lVar5 + (long)(int)uVar1 * 0x10 + 0x24) = 1;
      return lVar4;
    }
    uVar7 = func_0x00f78b24();
    lVar5 = func_0x00f78ac0(uVar7,0);
    return lVar5;
  }
  lVar4 = *(long *)(lVar5 + 0x10);
  uStack_78 = unaff_x19;
  if (lVar4 == 0) goto LAB_01448858;
  uStack_78 = uVar6;
  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    unaff_x22 = (long)(int)uVar1;
    lVar4 = lVar4 + unaff_x22 * 0x10;
    unaff_x21 = *(long *)(lVar4 + 0x28);
    if (unaff_x21 == 0) {
      return lVar5;
    }
    lVar9 = *(long *)(lVar5 + 0x50);
    unaff_x20 = lVar5;
    if (lVar9 == 0) goto LAB_01448858;
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = *(long *)(lVar9 + unaff_x22 * 0x48 + 0x28);
      if (lVar9 == 0) goto LAB_01448858;
      uVar11 = *(undefined8 *)(lVar4 + 0x20);
      lVar4 = lVar5;
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar6 = 0;
        uVar8 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        do {
          if ((uVar8 <= uVar6) || (*(uint *)(unaff_x21 + 0x18) <= uVar6)) goto LAB_0144884c;
          if (*(long *)(lVar5 + 0x18) == 0) goto LAB_01448858;
          uVar7 = *(undefined8 *)(unaff_x21 + 0x20 + uVar6 * 8);
          lVar4 = /*Atlas.Stats.StatsManager$$UnRegisterOnStatChange*/ func_0x01504fc8(*(long *)(lVar5 + 0x18),*(undefined4 *)(lVar9 + 0x20 + uVar6 * 4),
                                  uVar7,0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_0144884c;
          *(undefined8 *)(unaff_x21 + 0x20 + uVar6 * 8) = 0;
          uVar6 = uVar6 + 1;
          uVar8 = (ulong)*(uint *)(lVar9 + 0x18);
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) goto LAB_01448858;
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + unaff_x22 * 0x10;
        *(undefined8 *)(lVar5 + 0x20) = uVar11;
        *(long *)(lVar5 + 0x28) = unaff_x21;
        return lVar4;
      }
    }
  }
LAB_0144884c:
  uVar11 = func_0x00f78b24();
  func_0x00f78ac0(uVar11,0);
LAB_01448858:
  auVar12 = func_0x00f78af4();
  lVar5 = auVar12._0_8_;
  pcStack_68 = Atlas_Stats_AchievementManager__ResetAllAchievements;
  lStack_90 = unaff_x22;
  lStack_88 = unaff_x21;
  lStack_80 = unaff_x20;
  puStack_70 = &stack0xfffffffffffffff0;
  if (((*(long *)(lVar5 + 0x40) != 0) &&
      (plVar3 = *(long **)(*(long *)(lVar5 + 0x40) + 0x30), puStack_70 = &stack0xfffffffffffffff0,
      plVar3 != (long *)0x0)) &&
     (puStack_70 = &stack0xfffffffffffffff0,
     (**(code **)(*plVar3 + 0x6d8))(auStack_a8,plVar3,*(undefined8 *)(*plVar3 + 0x6e0)),
     auVar12._8_8_ != 0)) {
    uVar10 = *(undefined8 *)(lVar5 + 0x18);
    uVar11 = Atlas_Save_SaveManager__get_SaveData(auVar12._8_8_,0);
    lVar5 = Atlas_Stats_AchievementManager__ResetAndPopulate(lVar5,uVar10,uVar11,uVar7);
    return lVar5;
  }
  auVar12 = func_0x00f78af4();
  lVar4 = auVar12._8_8_;
  lVar5 = auVar12._0_8_;
  if ((bRam0000000003eb4728 & 1) == 0) {
    func_0x00f78a20(0x3d431b0);
    func_0x00f78a20(0x3d431b8);
    bRam0000000003eb4728 = 1;
  }
  iVar2 = Atlas_Stats_AchievementManager__DoesAchievementPassCondition_EventDefinition_EventDuration_
                    (lVar5,*(undefined8 *)(lVar4 + 0x20),*(undefined4 *)(lVar5 + 0x68),
                     uRam0000000003d431b8);
  if (((iVar2 != 0) &&
      (iVar2 = Atlas_Stats_AchievementManager__DoesAchievementPassCondition_DefinitionID_
                         (lVar5,*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar5 + 0x70),
                          lRam0000000003d431b0), iVar2 != 0)) &&
     ((iVar2 = Atlas_Stats_AchievementManager__DoesAchievementPassCondition_DefinitionID_
                         (lVar5,*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar5 + 0x78),
                          lRam0000000003d431b0), iVar2 != 0 &&
      (iVar2 = Atlas_Stats_AchievementManager__DoesAchievementPassCondition_DefinitionID_
                         (lVar5,*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar5 + 0x80),
                          lRam0000000003d431b0), iVar2 != 0)))) {
    lVar4 = *(long *)(lVar4 + 0x40);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0171c078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (**(code **)**(undefined8 **)(lRam0000000003d431b0 + 0x30))
                        (lVar4,*(undefined8 *)(lVar5 + 0x88),
                         (undefined8 *)**(undefined8 **)(lRam0000000003d431b0 + 0x30));
      return lVar5;
    }
    return 1;
  }
  return 0;
}



