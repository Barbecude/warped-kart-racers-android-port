// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.DailyChallengesConfig

// ============================================================
// RVA: 0x1574d40 | Atlas.Stats.DailyChallengesConfig.get_FtueDailyChallenges
// ============================================================

long Atlas_Stats_DailyChallengesConfig__get_FtueDailyChallenges(long param_1)

{
  return param_1 + 0x40;
}



// ============================================================
// RVA: 0x1575d40 | Atlas.Stats.DailyChallengesConfig.get_ChallengeOrderConstraints
// ============================================================

long Atlas_Stats_DailyChallengesConfig__get_ChallengeOrderConstraints(long param_1)

{
  return param_1 + 0x30;
}



// ============================================================
// RVA: 0x157766c | Atlas.Stats.DailyChallengesConfig.get_ChallengeDatas
// ============================================================

long Atlas_Stats_DailyChallengesConfig__get_ChallengeDatas(long param_1)

{
  return param_1 + 0x38;
}



// ============================================================
// RVA: 0x1577954 | Atlas.Stats.DailyChallengesConfig.get_DifficultySpecification
// ============================================================

long Atlas_Stats_DailyChallengesConfig__get_DifficultySpecification(long param_1)

{
  return param_1 + 0x28;
}



// ============================================================
// RVA: 0x1577a68 | Atlas.Stats.DailyChallengesConfig.get_Version
// ============================================================

undefined4 Atlas_Stats_DailyChallengesConfig__get_Version(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1577a70 | Atlas.Stats.DailyChallengesConfig.get_LocalRefreshTime
// ============================================================

undefined8 Atlas_Stats_DailyChallengesConfig__get_LocalRefreshTime(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x1577a78 | Atlas.Stats.DailyChallengesConfig..ctor
// ============================================================

void Atlas_Stats_DailyChallengesConfig___ctor(undefined8 param_1)

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



