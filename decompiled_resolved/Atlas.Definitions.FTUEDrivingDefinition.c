// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.FTUEDrivingDefinition

// ============================================================
// RVA: 0x1583de0 | Atlas.Definitions.FTUEDrivingDefinition.get_BaseLayerFtueType
// ============================================================

undefined8 Atlas_Definitions_FTUEDrivingDefinition__get_BaseLayerFtueType(void)

{
  return 0;
}



// ============================================================
// RVA: 0x1583de8 | Atlas.Definitions.FTUEDrivingDefinition.get_OnEnterInProgressState
// ============================================================

void Atlas_Definitions_FTUEDrivingDefinition__get_OnEnterInProgressState
               (undefined8 *param_1,long param_2)

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
// RVA: 0x1583dfc | Atlas.Definitions.FTUEDrivingDefinition.get_EngageJoystickSection
// ============================================================

void Atlas_Definitions_FTUEDrivingDefinition__get_EngageJoystickSection
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
// RVA: 0x1583e18 | Atlas.Definitions.FTUEDrivingDefinition.get_DriftForDistSection
// ============================================================

void Atlas_Definitions_FTUEDrivingDefinition__get_DriftForDistSection
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  uVar3 = *(undefined8 *)(param_2 + 0x108);
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  param_1[5] = *(undefined8 *)(param_2 + 0xf8);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x110);
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  uVar2 = *(undefined8 *)(param_2 + 0x120);
  param_1[9] = *(undefined8 *)(param_2 + 0x118);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  param_1[1] = *(undefined8 *)(param_2 + 0xd8);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x1583e34 | Atlas.Definitions.FTUEDrivingDefinition.get_DriftingLength
// ============================================================

undefined4 Atlas_Definitions_FTUEDrivingDefinition__get_DriftingLength(long param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
}



// ============================================================
// RVA: 0x1583e3c | Atlas.Definitions.FTUEDrivingDefinition.get_ToolTipDatas
// ============================================================

long Atlas_Definitions_FTUEDrivingDefinition__get_ToolTipDatas(long param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int aiStack_a0 [4];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar9 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb50c6 & 1) == 0) {
    func_0x00f78a20(0x3d33300);
    func_0x00f78a20(0x3d33308);
    func_0x00f78a20(0x3d33310);
    func_0x00f78a20(0x3d3dc68);
    func_0x00f78a20(0x3d3cd58);
    func_0x00f78a20(0x3d3dc60);
    func_0x00f78a20(0x3d1e378);
    bRam0000000003eb50c6 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  aiStack_a0[3] = 0;
  lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<ToolTipManager.ToolTipData>_TypeInfo*/ uRam0000000003d1e378);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar4,uRam0000000003d3dc60);
  Atlas_Definitions_BaseLayerFTUEDefinition__AddTriggerPointReactionToolTipTimeDatas
            (param_1,lVar4,0);
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar9 = (undefined8 *)0x3d33300;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_c8,*(long *)(param_1 + 0x50),uRam0000000003d3cd58);
    uStack_88 = uStack_c0;
    uStack_90 = uStack_c8;
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    uStack_70 = uStack_a8;
    while (uVar5 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_90,uRam0000000003d33308), (uVar5 & 1) != 0) {
      if (lVar4 == 0) {
        func_0x00f78af4();
        goto code_r0x015840dc;
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar4,uStack_78,uRam0000000003d3dc68);
    }
    aiStack_a0[0] = 0x4d;
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,uRam0000000003d33300);
    aiStack_a0[3] = 0;
    if (*(long *)(param_1 + 0xa0) != 0) {
      /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_c8,*(long *)(param_1 + 0xa0),uRam0000000003d3cd58);
      uStack_88 = uStack_c0;
      uStack_90 = uStack_c8;
      uStack_78 = uStack_b0;
      uStack_80 = uStack_b8;
      uStack_70 = uStack_a8;
      while (uVar5 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_90,uRam0000000003d33308), iVar1 = aiStack_a0[3],
            (uVar5 & 1) != 0) {
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x015840dc;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar4,uStack_78,uRam0000000003d3dc68);
      }
      bVar3 = aiStack_a0[3] == -1;
      iVar8 = aiStack_a0[3] + 1;
      aiStack_a0[0] = 0x92;
      aiStack_a0[3] = iVar8;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,uRam0000000003d33300);
      if (bVar3) {
        iVar8 = 0;
      }
      else if (aiStack_a0[iVar1] == 0x92) {
        aiStack_a0[3] = iVar1;
        iVar8 = iVar1;
      }
      if (*(long *)(param_1 + 0x100) != 0) {
        /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_c8,*(long *)(param_1 + 0x100),uRam0000000003d3cd58);
        uStack_88 = uStack_c0;
        uStack_90 = uStack_c8;
        uStack_78 = uStack_b0;
        uStack_80 = uStack_b8;
        uStack_70 = uStack_a8;
        while( true ) {
          uVar5 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_90,uRam0000000003d33308);
          if ((uVar5 & 1) == 0) {
            aiStack_a0[iVar8] = 0xd9;
            aiStack_a0[3] = aiStack_a0[3] + 1;
            /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,uRam0000000003d33300);
            return lVar4;
          }
          if (lVar4 == 0) break;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar4,uStack_78,uRam0000000003d3dc68);
        }
        func_0x00f78af4();
code_r0x015840dc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x15840e0);
        (*pcVar2)();
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar7 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,*puVar9);
    if (lVar7 == 0) {
      return lVar4;
    }
    func_0x00f78ac0(lVar7,0);
  }
  lVar4 = __Unwind_Resume();
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar4 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar4,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (*pcRam0000000003ec0cc8)(lVar4);
  return lVar4;
}



// ============================================================
// RVA: 0x1584184 | Atlas.Definitions.FTUEDrivingDefinition..ctor
// ============================================================

void Atlas_Definitions_FTUEDrivingDefinition___ctor(long param_1)

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



