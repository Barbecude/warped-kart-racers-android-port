// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.BaseLayerFTUEDefinition

// ============================================================
// RVA: 0x1475eac | Atlas.Definitions.BaseLayerFTUEDefinition.get_StartWithChallengesActive
// ============================================================

undefined1 Atlas_Definitions_BaseLayerFTUEDefinition__get_StartWithChallengesActive(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1475eb4 | Atlas.Definitions.BaseLayerFTUEDefinition.get_HudElementsToDisableOnStartUp
// ============================================================

undefined8
Atlas_Definitions_BaseLayerFTUEDefinition__get_HudElementsToDisableOnStartUp(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1475ebc | Atlas.Definitions.BaseLayerFTUEDefinition.get_TriggerReactions
// ============================================================

long Atlas_Definitions_BaseLayerFTUEDefinition__get_TriggerReactions(long param_1)

{
  return param_1 + 0x30;
}



// ============================================================
// RVA: 0x1475ec4 | Atlas.Definitions.BaseLayerFTUEDefinition.get_BackOverStartLineRespawnLocatorID
// ============================================================

undefined8
Atlas_Definitions_BaseLayerFTUEDefinition__get_BackOverStartLineRespawnLocatorID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1475ecc | Atlas.Definitions.BaseLayerFTUEDefinition.AddTriggerPointReactionToolTipTimeDatas
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01476124) */

void Atlas_Definitions_BaseLayerFTUEDefinition__AddTriggerPointReactionToolTipTimeDatas
               (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int iVar7;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int aiStack_100 [4];
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
  
  if ((bRam0000000003eb4888 & 1) == 0) {
    func_0x00f78a20(0x3d33300);
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33308);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33310);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3dc68);
    func_0x00f78a20(0x3d3cd58);
    func_0x00f78a20(0x3d3cd70);
    bRam0000000003eb4888 = 1;
  }
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  aiStack_100[2] = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar6 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_c0,uRam0000000003d33318);
      if (lVar6 == 0) {
        return;
      }
      func_0x00f78ac0(lVar6,0);
    }
    lVar6 = __Unwind_Resume();
    if ((bRam0000000003eb50a9 & 1) == 0) {
      func_0x00f78a20(0x3d21270,0);
      bRam0000000003eb50a9 = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar6 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    if ((bRam0000000003ec0cc7 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ec0cc7 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar6,0);
    if (pcRam0000000003ec0cc8 == (code *)0x0) {
      pcRam0000000003ec0cc8 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec0cc8)(lVar6);
    return;
  }
  /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_148,*(long *)(param_1 + 0x30),uRam0000000003d3cd70);
  lStack_98 = lStack_120;
  uStack_a0 = uStack_128;
  uStack_88 = uStack_110;
  uStack_90 = uStack_118;
  uStack_80 = uStack_108;
  uStack_b8 = uStack_140;
  uStack_c0 = uStack_148;
  uStack_a8 = uStack_130;
  uStack_b0 = uStack_138;
  iVar7 = 0;
  while( true ) {
    uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_c0,uRam0000000003d33320);
    if ((uVar4 & 1) == 0) {
      aiStack_100[iVar7] = 0x75;
      aiStack_100[2] = aiStack_100[2] + 1;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_c0,uRam0000000003d33318);
      return;
    }
    if (lStack_98 == 0) break;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_148,lStack_98,uRam0000000003d3cd58);
    uStack_e8 = uStack_140;
    uStack_f0 = uStack_148;
    uStack_d8 = uStack_130;
    uStack_e0 = uStack_138;
    uStack_d0 = uStack_128;
    while (uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_f0,uRam0000000003d33308), (uVar4 & 1) != 0) {
      if (param_2 == 0) {
        func_0x00f78af4();
        goto code_r0x01476130;
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_2,uStack_d8,uRam0000000003d3dc68);
    }
    aiStack_100[iVar7] = 0x5c;
    iVar2 = aiStack_100[2];
    iVar1 = aiStack_100[2] + 1;
    aiStack_100[2] = iVar1;
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_f0,uRam0000000003d33300);
    iVar7 = 0;
    if ((iVar1 != 0) && (iVar7 = iVar1, aiStack_100[iVar2] == 0x5c)) {
      iVar7 = iVar2;
      aiStack_100[2] = iVar2;
    }
  }
  func_0x00f78af4();
code_r0x01476130:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1476134);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x1476188 | Atlas.Definitions.BaseLayerFTUEDefinition..ctor
// ============================================================

void Atlas_Definitions_BaseLayerFTUEDefinition___ctor(long param_1)

{
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



