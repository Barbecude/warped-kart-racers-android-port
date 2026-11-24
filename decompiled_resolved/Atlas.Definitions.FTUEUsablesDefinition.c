// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.FTUEUsablesDefinition

// ============================================================
// RVA: 0x1585a24 | Atlas.Definitions.FTUEUsablesDefinition.get_BaseLayerFtueType
// ============================================================

undefined8 Atlas_Definitions_FTUEUsablesDefinition__get_BaseLayerFtueType(void)

{
  return 1;
}



// ============================================================
// RVA: 0x1585a2c | Atlas.Definitions.FTUEUsablesDefinition.get_OnPickup
// ============================================================

void Atlas_Definitions_FTUEUsablesDefinition__get_OnPickup(undefined8 *param_1,long param_2)

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
// RVA: 0x1585a40 | Atlas.Definitions.FTUEUsablesDefinition.get_OnUse
// ============================================================

void Atlas_Definitions_FTUEUsablesDefinition__get_OnUse(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x78);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  param_1[5] = *(undefined8 *)(param_2 + 0x98);
  param_1[4] = uVar1;
  return;
}



// ============================================================
// RVA: 0x1585a54 | Atlas.Definitions.FTUEUsablesDefinition.get_OnHit
// ============================================================

void Atlas_Definitions_FTUEUsablesDefinition__get_OnHit(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  param_1[1] = *(undefined8 *)(param_2 + 0xa8);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  param_1[5] = *(undefined8 *)(param_2 + 200);
  param_1[4] = uVar1;
  return;
}



// ============================================================
// RVA: 0x1585a68 | Atlas.Definitions.FTUEUsablesDefinition.get_PickupUsableSection
// ============================================================

void Atlas_Definitions_FTUEUsablesDefinition__get_PickupUsableSection
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
// RVA: 0x1585a84 | Atlas.Definitions.FTUEUsablesDefinition.get_UseUsableSection
// ============================================================

void Atlas_Definitions_FTUEUsablesDefinition__get_UseUsableSection(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  uVar3 = *(undefined8 *)(param_2 + 0x168);
  uVar2 = *(undefined8 *)(param_2 + 0x160);
  param_1[5] = *(undefined8 *)(param_2 + 0x158);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x170);
  uVar3 = *(undefined8 *)(param_2 + 0x188);
  uVar2 = *(undefined8 *)(param_2 + 0x180);
  param_1[9] = *(undefined8 *)(param_2 + 0x178);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x130);
  uVar3 = *(undefined8 *)(param_2 + 0x148);
  uVar2 = *(undefined8 *)(param_2 + 0x140);
  param_1[1] = *(undefined8 *)(param_2 + 0x138);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x1585aa0 | Atlas.Definitions.FTUEUsablesDefinition.get_HitPlayerSection
// ============================================================

void Atlas_Definitions_FTUEUsablesDefinition__get_HitPlayerSection(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1b0);
  uVar3 = *(undefined8 *)(param_2 + 0x1c8);
  uVar2 = *(undefined8 *)(param_2 + 0x1c0);
  param_1[5] = *(undefined8 *)(param_2 + 0x1b8);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x1d0);
  uVar3 = *(undefined8 *)(param_2 + 0x1e8);
  uVar2 = *(undefined8 *)(param_2 + 0x1e0);
  param_1[9] = *(undefined8 *)(param_2 + 0x1d8);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 400);
  uVar3 = *(undefined8 *)(param_2 + 0x1a8);
  uVar2 = *(undefined8 *)(param_2 + 0x1a0);
  param_1[1] = *(undefined8 *)(param_2 + 0x198);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x1585abc | Atlas.Definitions.FTUEUsablesDefinition.get_ToolTipDatas
// ============================================================

long Atlas_Definitions_FTUEUsablesDefinition__get_ToolTipDatas(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int aiStack_b0 [6];
  int iStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb50d7 & 1) == 0) {
    func_0x00f78a20(0x3d33300);
    func_0x00f78a20(0x3d33308);
    func_0x00f78a20(0x3d33310);
    func_0x00f78a20(0x3d3dc68);
    func_0x00f78a20(0x3d3cd58);
    func_0x00f78a20(0x3d3dc60);
    func_0x00f78a20(0x3d1e378);
    bRam0000000003eb50d7 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  iStack_98 = 0;
  lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<ToolTipManager.ToolTipData>_TypeInfo*/ uRam0000000003d1e378);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar3,uRam0000000003d3dc60);
  Atlas_Definitions_BaseLayerFTUEDefinition__AddTriggerPointReactionToolTipTimeDatas
            (param_1,lVar3,0);
  puVar8 = (undefined8 *)0x3eb5000;
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar7 = (undefined8 *)0x3d33300;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_d8,*(long *)(param_1 + 0x50),uRam0000000003d3cd58);
    uStack_88 = uStack_d0;
    uStack_90 = uStack_d8;
    uStack_78 = uStack_c0;
    uStack_80 = uStack_c8;
    uStack_70 = uStack_b8;
    while (uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_90,uRam0000000003d33308), (uVar4 & 1) != 0) {
      if (lVar3 == 0) {
        func_0x00f78af4();
        goto code_r0x01585f30;
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar3,uStack_78,uRam0000000003d3dc68);
    }
    aiStack_b0[0] = 0x4d;
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,uRam0000000003d33300);
    iStack_98 = 0;
    puVar8 = (undefined8 *)0x3d33300;
    if (*(long *)(param_1 + 0x80) != 0) {
      /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_d8,*(long *)(param_1 + 0x80),uRam0000000003d3cd58);
      uStack_88 = uStack_d0;
      uStack_90 = uStack_d8;
      uStack_78 = uStack_c0;
      uStack_80 = uStack_c8;
      uStack_70 = uStack_b8;
      while (uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_90,uRam0000000003d33308), iVar10 = iStack_98,
            (uVar4 & 1) != 0) {
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x01585f30;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar3,uStack_78,uRam0000000003d3dc68);
      }
      bVar2 = iStack_98 == -1;
      iVar9 = iStack_98 + 1;
      aiStack_b0[0] = 0x8d;
      iStack_98 = iVar9;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,uRam0000000003d33300);
      if (bVar2) {
        iVar9 = 0;
      }
      else if (aiStack_b0[iVar10] == 0x8d) {
        iVar9 = iVar10;
        iStack_98 = iVar10;
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_d8,*(long *)(param_1 + 0xb0),uRam0000000003d3cd58);
        uStack_88 = uStack_d0;
        uStack_90 = uStack_d8;
        uStack_78 = uStack_c0;
        uStack_80 = uStack_c8;
        uStack_70 = uStack_b8;
        while (uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_90,uRam0000000003d33308), (uVar4 & 1) != 0) {
          if (lVar3 == 0) {
            func_0x00f78af4();
            goto code_r0x01585f30;
          }
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar3,uStack_78,uRam0000000003d3dc68);
        }
        aiStack_b0[iVar9] = 0xcf;
        iVar9 = iStack_98;
        iVar10 = iStack_98 + 1;
        iStack_98 = iVar10;
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,uRam0000000003d33300);
        if ((iVar10 != 0) && (aiStack_b0[iVar9] == 0xcf)) {
          iVar10 = iVar9;
          iStack_98 = iVar9;
        }
        puVar8 = puVar7;
        if (*(long *)(param_1 + 0x100) != 0) {
          /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_d8,*(long *)(param_1 + 0x100),uRam0000000003d3cd58);
          uStack_88 = uStack_d0;
          uStack_90 = uStack_d8;
          uStack_78 = uStack_c0;
          uStack_80 = uStack_c8;
          uStack_70 = uStack_b8;
          while (uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_90,uRam0000000003d33308), (uVar4 & 1) != 0) {
            if (lVar3 == 0) {
              func_0x00f78af4();
              goto code_r0x01585f30;
            }
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar3,uStack_78,uRam0000000003d3dc68);
          }
          aiStack_b0[iVar10] = 0x116;
          iVar9 = iStack_98;
          iVar10 = iStack_98 + 1;
          iStack_98 = iVar10;
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,uRam0000000003d33300);
          if ((iVar10 != 0) && (aiStack_b0[iVar9] == 0x116)) {
            iVar10 = iVar9;
            iStack_98 = iVar9;
          }
          if (*(long *)(param_1 + 0x160) != 0) {
            /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_d8,*(long *)(param_1 + 0x160),uRam0000000003d3cd58);
            uStack_88 = uStack_d0;
            uStack_90 = uStack_d8;
            uStack_78 = uStack_c0;
            uStack_80 = uStack_c8;
            uStack_70 = uStack_b8;
            while (uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_90,uRam0000000003d33308), (uVar4 & 1) != 0) {
              if (lVar3 == 0) {
                func_0x00f78af4();
                goto code_r0x01585f30;
              }
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar3,uStack_78,uRam0000000003d3dc68);
            }
            aiStack_b0[iVar10] = 0x15d;
            iVar9 = iStack_98;
            iVar10 = iStack_98 + 1;
            iStack_98 = iVar10;
            /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,uRam0000000003d33300);
            if ((iVar10 != 0) && (aiStack_b0[iVar9] == 0x15d)) {
              iVar10 = iVar9;
              iStack_98 = iVar9;
            }
            if (*(long *)(param_1 + 0x1c0) != 0) {
              /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ToolTipTimeData>$$GetEnumerator*/ func_0x024c12ec(&uStack_d8,*(long *)(param_1 + 0x1c0),uRam0000000003d3cd58);
              uStack_88 = uStack_d0;
              uStack_90 = uStack_d8;
              uStack_78 = uStack_c0;
              uStack_80 = uStack_c8;
              uStack_70 = uStack_b8;
              while( true ) {
                uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$MoveNext*/ func_0x01f79c6c(&uStack_90,uRam0000000003d33308);
                if ((uVar4 & 1) == 0) {
                  aiStack_b0[iVar10] = 0x1a4;
                  iStack_98 = iStack_98 + 1;
                  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,uRam0000000003d33300);
                  return lVar3;
                }
                if (lVar3 == 0) break;
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar3,uStack_78,uRam0000000003d3dc68);
              }
              func_0x00f78af4();
code_r0x01585f30:
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1585f34);
              (*pcVar1)();
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar6 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ToolTipTimeData>$$Dispose*/ func_0x01f79c68(&uStack_90,*puVar8);
    if (lVar6 == 0) {
      return lVar3;
    }
    func_0x00f78ac0(lVar6,0);
  }
  lVar3 = __Unwind_Resume();
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar3 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar3,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (*pcRam0000000003ec0cc8)(lVar3);
  return lVar3;
}



// ============================================================
// RVA: 0x1586068 | Atlas.Definitions.FTUEUsablesDefinition..ctor
// ============================================================

void Atlas_Definitions_FTUEUsablesDefinition___ctor(long param_1)

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



