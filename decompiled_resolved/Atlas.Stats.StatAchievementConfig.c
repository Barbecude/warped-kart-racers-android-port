// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.StatAchievementConfig

// ============================================================
// RVA: 0x150459c | Atlas.Stats.StatAchievementConfig.get_StatAchievements
// ============================================================

undefined8 Atlas_Stats_StatAchievementConfig__get_StatAchievements(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15045a4 | Atlas.Stats.StatAchievementConfig.get_HitOpponentAfterMultipleClamBouncesCondition
// ============================================================

undefined4
Atlas_Stats_StatAchievementConfig__get_HitOpponentAfterMultipleClamBouncesCondition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15045ac | Atlas.Stats.StatAchievementConfig.get_DailyChallengeStreakCondition
// ============================================================

undefined4 Atlas_Stats_StatAchievementConfig__get_DailyChallengeStreakCondition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x15045b4 | Atlas.Stats.StatAchievementConfig..ctor
// ============================================================

void Atlas_Stats_StatAchievementConfig___ctor(undefined8 param_1)

{
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



