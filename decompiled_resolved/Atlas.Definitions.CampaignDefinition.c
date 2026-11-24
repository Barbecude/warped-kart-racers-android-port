// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.CampaignDefinition

// ============================================================
// RVA: 0x1540530 | Atlas.Definitions.CampaignDefinition.get_ChapterDefinitionRefList
// ============================================================

undefined8 Atlas_Definitions_CampaignDefinition__get_ChapterDefinitionRefList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x1540538 | Atlas.Definitions.CampaignDefinition.get_RewardId
// ============================================================

undefined8 Atlas_Definitions_CampaignDefinition__get_RewardId(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x1540540 | Atlas.Definitions.CampaignDefinition.get_CompletionRewardId
// ============================================================

undefined8 Atlas_Definitions_CampaignDefinition__get_CompletionRewardId(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1540548 | Atlas.Definitions.CampaignDefinition.get_ChallengeFirstTimeXP
// ============================================================

undefined4 Atlas_Definitions_CampaignDefinition__get_ChallengeFirstTimeXP(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1540550 | Atlas.Definitions.CampaignDefinition.get_ChallengeRepeatXP
// ============================================================

undefined4 Atlas_Definitions_CampaignDefinition__get_ChallengeRepeatXP(long param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



// ============================================================
// RVA: 0x1540558 | Atlas.Definitions.CampaignDefinition.get_LockedStringLocID
// ============================================================

undefined8 Atlas_Definitions_CampaignDefinition__get_LockedStringLocID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1540560 | Atlas.Definitions.CampaignDefinition.get_DifficultyColour
// ============================================================

undefined4 Atlas_Definitions_CampaignDefinition__get_DifficultyColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x154056c | Atlas.Definitions.CampaignDefinition.get_XPDifficultyOverride
// ============================================================

undefined4 Atlas_Definitions_CampaignDefinition__get_XPDifficultyOverride(long param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x1540574 | Atlas.Definitions.CampaignDefinition.get_DifficultyAtlasedSpriteRef
// ============================================================

undefined8 Atlas_Definitions_CampaignDefinition__get_DifficultyAtlasedSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x154057c | Atlas.Definitions.CampaignDefinition.get_FrontEndMusicType
// ============================================================

undefined4 Atlas_Definitions_CampaignDefinition__get_FrontEndMusicType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x1540584 | Atlas.Definitions.CampaignDefinition.get_AnimationPriority
// ============================================================

undefined4 Atlas_Definitions_CampaignDefinition__get_AnimationPriority(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



// ============================================================
// RVA: 0x154058c | Atlas.Definitions.CampaignDefinition.TryGetChapterIndex
// ============================================================

ulong Atlas_Definitions_CampaignDefinition__TryGetChapterIndex
                (long param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((bRam0000000003eb4f36 & 1) == 0) {
    func_0x00f78a20(0x3d2dbc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f36 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x18);
    iVar3 = (int)uVar4;
    if (iVar3 < 1) goto LAB_01540678;
    uVar6 = 1;
    lVar8 = 0x28;
    uVar7 = 0;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar7) {
        uVar5 = func_0x00f78b24();
        lVar2 = func_0x00f78ac0(uVar5,0);
        *(undefined4 *)(lVar2 + 0x98) = 1;
        if ((bRam0000000003eb50a9 & 1) == 0) {
          func_0x00f78a20(0x3d21270,0);
          bRam0000000003eb50a9 = 1;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(lVar2 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
        if ((bRam0000000003ec0cc7 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ec0cc7 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar2,0);
        if (pcRam0000000003ec0cc8 == (code *)0x0) {
          pcRam0000000003ec0cc8 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*pcRam0000000003ec0cc8)(lVar2);
        return uVar4;
      }
      uVar5 = *(undefined8 *)(lVar2 + lVar8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,param_2,0);
      if ((uVar1 & 1) != 0) goto LAB_01540680;
      uVar6 = (ulong)((long)(uVar7 + 1) < (long)iVar3);
      if ((uVar4 & 0xffffffff) - 1 == uVar7) goto LAB_0154067c;
      lVar2 = *(long *)(param_1 + 0x50);
      lVar8 = lVar8 + 0x10;
      uVar7 = uVar7 + 1;
    } while (lVar2 != 0);
  }
  func_0x00f78af4();
LAB_01540678:
  uVar6 = 0;
LAB_0154067c:
  uVar7 = 0;
LAB_01540680:
  *param_3 = (int)uVar7;
  return uVar6;
}



// ============================================================
// RVA: 0x15406b0 | Atlas.Definitions.CampaignDefinition..ctor
// ============================================================

void Atlas_Definitions_CampaignDefinition___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 1;
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
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



