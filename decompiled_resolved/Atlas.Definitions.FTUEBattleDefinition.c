// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.FTUEBattleDefinition

// ============================================================
// RVA: 0x1583b4c | Atlas.Definitions.FTUEBattleDefinition.get_BaseLayerFtueType
// ============================================================

undefined8 Atlas_Definitions_FTUEBattleDefinition__get_BaseLayerFtueType(void)

{
  return 2;
}



// ============================================================
// RVA: 0x1583b54 | Atlas.Definitions.FTUEBattleDefinition.get_OnCountDownFinish
// ============================================================

void Atlas_Definitions_FTUEBattleDefinition__get_OnCountDownFinish(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  param_1[5] = *(undefined8 *)(param_2 + 0x68);
  param_1[4] = uVar1;
  return;
}



// ============================================================
// RVA: 0x1583b68 | Atlas.Definitions.FTUEBattleDefinition.get_ScoreAndTimerSection
// ============================================================

void Atlas_Definitions_FTUEBattleDefinition__get_ScoreAndTimerSection
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  param_1[5] = *(undefined8 *)(param_2 + 0x98);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  param_1[9] = *(undefined8 *)(param_2 + 0xb8);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x78);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x1583b84 | Atlas.Definitions.FTUEBattleDefinition.get_ToolTipDatas
// ============================================================

long Atlas_Definitions_FTUEBattleDefinition__get_ToolTipDatas(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  int iStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar6 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb50c5 & 1) == 0) {
    func_0x00f78a20(0x3d33300);
    func_0x00f78a20(0x3d33308);
    func_0x00f78a20(0x3d33310);
    func_0x00f78a20(0x3d3dc68);
    func_0x00f78a20(0x3d3cd58);
    func_0x00f78a20(0x3d3dc60);
    func_0x00f78a20(0x3d1e378);
    bRam0000000003eb50c5 = 1;
  }
  iStack_88 = 0;
  lVar2 = func_0x00f78aec(/*System.Collections.Generic.List<ToolTipManager.ToolTipData>_TypeInfo*/ uRam0000000003d1e378);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar2,uRam0000000003d3dc60);
  Atlas_Definitions_BaseLayerFTUEDefinition__AddTriggerPointReactionToolTipTimeDatas
            (param_1,lVar2,0);
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar6 = (undefined8 *)0x3d33300;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_b8,*(long *)(param_1 + 0x50),uRam0000000003d3cd58);
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    uStack_68 = uStack_a0;
    uStack_70 = uStack_a8;
    uStack_60 = uStack_98;
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_80,uRam0000000003d33308), (uVar3 & 1) != 0) {
      if (lVar2 == 0) {
        func_0x00f78af4();
        goto code_r0x01583d60;
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2,uStack_68,uRam0000000003d3dc68);
    }
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_80,uRam0000000003d33300);
    iStack_88 = 0;
    if (*(long *)(param_1 + 0xa0) != 0) {
      /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_b8,*(long *)(param_1 + 0xa0),uRam0000000003d3cd58);
      uStack_78 = uStack_b0;
      uStack_80 = uStack_b8;
      uStack_68 = uStack_a0;
      uStack_70 = uStack_a8;
      uStack_60 = uStack_98;
      while( true ) {
        uVar3 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_80,uRam0000000003d33308);
        if ((uVar3 & 1) == 0) {
          iStack_88 = iStack_88 + 1;
          uStack_90 = 0x92;
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_80,uRam0000000003d33300);
          return lVar2;
        }
        if (lVar2 == 0) break;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2,uStack_68,uRam0000000003d3dc68);
      }
      func_0x00f78af4();
code_r0x01583d60:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1583d64);
      (*pcVar1)();
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar5 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_80,*puVar6);
    if (lVar5 == 0) {
      return lVar2;
    }
    func_0x00f78ac0(lVar5,0);
  }
  lVar2 = __Unwind_Resume();
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
// RVA: 0x1583dd8 | Atlas.Definitions.FTUEBattleDefinition..ctor
// ============================================================

void Atlas_Definitions_FTUEBattleDefinition___ctor(long param_1)

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



