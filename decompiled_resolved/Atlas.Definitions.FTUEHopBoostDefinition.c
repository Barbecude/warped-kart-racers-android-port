// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.FTUEHopBoostDefinition

// ============================================================
// RVA: 0x158418c | Atlas.Definitions.FTUEHopBoostDefinition.get_BaseLayerFtueType
// ============================================================

undefined8 Atlas_Definitions_FTUEHopBoostDefinition__get_BaseLayerFtueType(void)

{
  return 3;
}



// ============================================================
// RVA: 0x1584194 | Atlas.Definitions.FTUEHopBoostDefinition.get_ToolTipDatas
// ============================================================

long Atlas_Definitions_FTUEHopBoostDefinition__get_ToolTipDatas(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb50c7 & 1) == 0) {
    func_0x00f78a20(0x3d33300);
    func_0x00f78a20(0x3d33308);
    func_0x00f78a20(0x3d33310);
    func_0x00f78a20(0x3d3dc68);
    func_0x00f78a20(0x3d3cd58);
    func_0x00f78a20(0x3d3dc60);
    func_0x00f78a20(0x3d1e378);
    bRam0000000003eb50c7 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar2 = func_0x00f78aec(/*System.Collections.Generic.List<ToolTipManager.ToolTipData>_TypeInfo*/ uRam0000000003d1e378);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar2,uRam0000000003d3dc60);
  Atlas_Definitions_BaseLayerFTUEDefinition__AddTriggerPointReactionToolTipTimeDatas
            (param_1,lVar2,0);
  if (*(long *)(param_1 + 0x70) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar5 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_60,uRam0000000003d3dc60);
      if (lVar5 == 0) {
        return lVar2;
      }
      func_0x00f78ac0(lVar5,0);
    }
    lVar2 = __Unwind_Resume();
    return lVar2;
  }
  /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_60,*(long *)(param_1 + 0x70),uRam0000000003d3cd58);
  while( true ) {
    uVar3 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_60,uRam0000000003d33308);
    if ((uVar3 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_60,uRam0000000003d33300);
      return lVar2;
    }
    if (lVar2 == 0) break;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2,uStack_48,uRam0000000003d3dc68);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15842e0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1584324 | Atlas.Definitions.FTUEHopBoostDefinition.get_NumberOfHopBoosts
// ============================================================

undefined4 Atlas_Definitions_FTUEHopBoostDefinition__get_NumberOfHopBoosts(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x158432c | Atlas.Definitions.FTUEHopBoostDefinition.get_HopBoostSection
// ============================================================

void Atlas_Definitions_FTUEHopBoostDefinition__get_HopBoostSection(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  param_1[5] = *(undefined8 *)(param_2 + 0x68);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  param_1[9] = *(undefined8 *)(param_2 + 0x88);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x1584348 | Atlas.Definitions.FTUEHopBoostDefinition..ctor
// ============================================================

void Atlas_Definitions_FTUEHopBoostDefinition___ctor(long param_1)

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



