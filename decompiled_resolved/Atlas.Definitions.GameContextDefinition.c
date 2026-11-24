// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.GameContextDefinition

// ============================================================
// RVA: 0x15a4c0c | Atlas.Definitions.GameContextDefinition.get_DisplayName
// ============================================================

undefined8 Atlas_Definitions_GameContextDefinition__get_DisplayName(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15a4c14 | Atlas.Definitions.GameContextDefinition.get_DisplayNameLocKey
// ============================================================

undefined8 Atlas_Definitions_GameContextDefinition__get_DisplayNameLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15a4c1c | Atlas.Definitions.GameContextDefinition.get_GameContextName
// ============================================================

undefined8 Atlas_Definitions_GameContextDefinition__get_GameContextName(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15a4c24 | Atlas.Definitions.GameContextDefinition.get_MapDefinitionsList
// ============================================================

undefined8 Atlas_Definitions_GameContextDefinition__get_MapDefinitionsList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15a4c2c | Atlas.Definitions.GameContextDefinition.get_FollowCameraConfigID
// ============================================================

undefined8 Atlas_Definitions_GameContextDefinition__get_FollowCameraConfigID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15a4c34 | Atlas.Definitions.GameContextDefinition.get_VeryShortDuration
// ============================================================

undefined4 Atlas_Definitions_GameContextDefinition__get_VeryShortDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15a4c3c | Atlas.Definitions.GameContextDefinition.get_ShortDuration
// ============================================================

undefined4 Atlas_Definitions_GameContextDefinition__get_ShortDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ============================================================
// RVA: 0x15a4c44 | Atlas.Definitions.GameContextDefinition.get_MediumDuration
// ============================================================

undefined4 Atlas_Definitions_GameContextDefinition__get_MediumDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x15a4c4c | Atlas.Definitions.GameContextDefinition.get_LongDuration
// ============================================================

undefined4 Atlas_Definitions_GameContextDefinition__get_LongDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ============================================================
// RVA: 0x15a4c54 | Atlas.Definitions.GameContextDefinition.get_IconSpriteRef
// ============================================================

undefined8 Atlas_Definitions_GameContextDefinition__get_IconSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x15a4c5c | Atlas.Definitions.GameContextDefinition.get_FinishingPositionStarsAwarded
// ============================================================

undefined8 Atlas_Definitions_GameContextDefinition__get_FinishingPositionStarsAwarded(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x15a4c64 | Atlas.Definitions.GameContextDefinition.get_DnfFinishingPositionStarsAwarded
// ============================================================

undefined4
Atlas_Definitions_GameContextDefinition__get_DnfFinishingPositionStarsAwarded(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15a4c6c | Atlas.Definitions.GameContextDefinition.get_UsableShuffleDuration
// ============================================================

int Atlas_Definitions_GameContextDefinition__get_UsableShuffleDuration(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x6c) * 1000.0;
  fVar1 = -fVar2;
  if (fVar2 != INFINITY) {
    fVar1 = fVar2;
  }
  return (int)fVar1;
}



// ============================================================
// RVA: 0x15a4c9c | Atlas.Definitions.GameContextDefinition.get_FrenzyDuration
// ============================================================

int Atlas_Definitions_GameContextDefinition__get_FrenzyDuration(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x70) * 1000.0;
  fVar1 = -fVar2;
  if (fVar2 != INFINITY) {
    fVar1 = fVar2;
  }
  return (int)fVar1;
}



// ============================================================
// RVA: 0x15a4ccc | Atlas.Definitions.GameContextDefinition.get_FrenzyScoreMultiplier
// ============================================================

undefined4 Atlas_Definitions_GameContextDefinition__get_FrenzyScoreMultiplier(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// ============================================================
// RVA: 0x15a4cd4 | Atlas.Definitions.GameContextDefinition.get_TransitionOutRespawnTime
// ============================================================

undefined4 Atlas_Definitions_GameContextDefinition__get_TransitionOutRespawnTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15a4cdc | Atlas.Definitions.GameContextDefinition.get_ExitPortalDelayRespawnTime
// ============================================================

undefined4 Atlas_Definitions_GameContextDefinition__get_ExitPortalDelayRespawnTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ============================================================
// RVA: 0x15a4ce4 | Atlas.Definitions.GameContextDefinition.get_ExitPortalInvulnTime
// ============================================================

undefined4 Atlas_Definitions_GameContextDefinition__get_ExitPortalInvulnTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15a4cec | Atlas.Definitions.GameContextDefinition.GenerateListOfAllSceneInfos
// ============================================================

long Atlas_Definitions_GameContextDefinition__GenerateListOfAllSceneInfos(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam0000000003eb51e1 & 1) == 0) {
    func_0x00f78a20(0x3d3bce0);
    func_0x00f78a20(0x3d3b118);
    func_0x00f78a20(0x3d3bcd0);
    func_0x00f78a20(0x3d1dd98);
    func_0x00f78a20(0x3d3f420);
    func_0x00f78a20(0x3d1e590);
    func_0x00f78a20(0x3d62ed8);
    func_0x00f78a20(0x3d276f8);
    bRam0000000003eb51e1 = 1;
  }
  lVar2 = func_0x00f78aec(/*System.Collections.Generic.List<SceneInfo>_TypeInfo*/ uRam0000000003d1dd98);
  /*System.Collections.Generic.List<SceneInfo>$$.ctor*/ func_0x02457afc(lVar2,uRam0000000003d3bcd0);
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    if (0 < *(int *)(lVar5 + 0x18)) {
      uVar6 = 0;
      do {
        lVar3 = func_0x00f78aec(/*Atlas.Definitions.GameContextDefinition.<>c__DisplayClass54_0_TypeInfo*/ uRam0000000003d276f8);
        /*Atlas.Definitions.GameContextDefinition.<>c__DisplayClass54_0$$.ctor*/ func_0x01552244(lVar3,0);
        if (*(uint *)(lVar5 + 0x18) <= uVar6) goto Atlas_Definitions_Definition___ctor;
        if (lVar3 == 0) goto LAB_015a4e98;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar6 * 0x10);
        uVar4 = *puVar1;
        *(undefined8 *)(lVar3 + 0x18) = puVar1[1];
        *(undefined8 *)(lVar3 + 0x10) = uVar4;
        uVar4 = func_0x00f78aec(/*System.Predicate<MapDefinition>_TypeInfo*/ uRam0000000003d1e590);
        /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar4,lVar3,uRam0000000003d62ed8,uRam0000000003d3f420);
        if (((param_2 == 0) ||
            (lVar3 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(param_2,uVar4,uRam0000000003d3b118), lVar3 == 0)) ||
           (lVar2 == 0)) goto LAB_015a4e98;
        /*System.Collections.Generic.List<SceneInfo>$$AddRange*/ func_0x02458a10(lVar2,*(undefined8 *)(lVar3 + 0x60),uRam0000000003d3bce0);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(lVar5 + 0x18));
    }
    return lVar2;
  }
LAB_015a4e98:
  func_0x00f78af4();
Atlas_Definitions_Definition___ctor:
  uVar4 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar4,0);
  *(undefined8 *)(lVar2 + 0x70) = 0x241f00000;
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
  lVar2 = (*pcRam0000000003ec0cc8)(lVar2);
  return lVar2;
}



// ============================================================
// RVA: 0x15a4ea8 | Atlas.Definitions.GameContextDefinition..ctor
// ============================================================

void Atlas_Definitions_GameContextDefinition___ctor(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0x241f00000;
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



