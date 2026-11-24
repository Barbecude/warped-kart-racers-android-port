// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Arcade.ArcadeSave

// ============================================================
// RVA: 0x1447e78 | Atlas.Arcade.ArcadeSave.TryGetResult
// ============================================================

ulong Atlas_Arcade_ArcadeSave__TryGetResult
                (undefined8 param_1,undefined8 param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  code *pcStack_48;
  undefined1 *puVar5;
  
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_2;
  if ((bRam0000000003eb4794 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    bRam0000000003eb4794 = 1;
  }
  if (param_3 != 0) {
    uVar10 = Atlas_Save_SaveManager__get_SaveData(param_3,0);
    if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003eb4795 & 1) == 0) {
      func_0x00f78a20(0x3d1fcc0);
      func_0x00f78a20(0x3d246e0);
      bRam0000000003eb4795 = 1;
    }
    if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*Atlas.Arcade.ArcadeSave$$GetKey*/ func_0x01454ad4(param_1,param_2);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = Atlas_Save_SaveManager__GetIntData(uVar12,0x7fffffff,uVar10,0);
    iVar1 = 0;
    if (iVar8 != 0x7fffffff) {
      iVar1 = iVar8;
    }
    *param_4 = iVar1;
    return (ulong)(iVar8 != 0x7fffffff);
  }
  auVar15 = func_0x00f78af4();
  lVar9 = auVar15._8_8_;
  pcStack_48 = Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns;
  uVar11 = auVar15._0_8_;
  if ((bRam0000000003eb471e & 1) == 0) {
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d68a28);
    func_0x00f78a20(0x3d69c28);
    uVar11 = func_0x00f78a20(0x3d68a38);
    bRam0000000003eb471e = 1;
  }
  if (lVar9 == 0) {
    return uVar11;
  }
  uVar11 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar9,/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
  if ((uVar11 & 1) == 0) {
    uVar11 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar9,/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
    if ((int)uVar11 == 0) {
      return uVar11;
    }
    puVar13 = (undefined8 *)0x3d68a38;
  }
  else {
    puVar13 = (undefined8 *)0x3d68a28;
  }
  auVar14._8_8_ = *puVar13;
  auVar14._0_8_ = auVar15._0_8_;
  puVar3 = &stack0xffffffffffffffc0;
  puVar4 = (undefined1 *)register0x00000008;
  do {
    auVar15 = auVar14;
    puVar5 = puVar3;
    uVar10 = auVar15._8_8_;
    lVar9 = auVar15._0_8_;
    *(undefined8 *)(puVar5 + -0x40) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar5 + -0x30) = 0;
    *(undefined8 *)(puVar5 + -0x28) = param_1;
    *(undefined1 (*) [16])(puVar5 + -0x20) = auVar2;
    *(undefined1 **)(puVar5 + -0x10) = puVar4 + -0x10;
    *(code **)(puVar5 + -8) = pcStack_48;
    unaff_d8 = 0x42c80000;
    param_1 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar5 + -0x44) = 0;
    if (*(long *)(lVar9 + 0x60) != 0) {
      uVar11 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar9 + 0x60),uVar10,puVar5 + -0x44,uRam0000000003d2fe08);
      bVar6 = true;
      bVar7 = false;
      if ((int)uVar11 != 0) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(*(float *)(puVar5 + -0x44))) {
          bVar6 = *(float *)(puVar5 + -0x44) < 100.0;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) {
        return uVar11;
      }
      if (*(long *)(lVar9 + 0x60) != 0) {
        param_1 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar9 + 0x60),uVar10,uRam0000000003d2fe18);
        if (*(long *)(lVar9 + 0x58) != 0) {
          uVar11 = /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar9 + 0x58),uVar10,uRam0000000003d2fe18);
          return uVar11;
        }
      }
    }
    pcStack_48 = Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar14 = func_0x00f78af4();
    puVar3 = puVar5 + -0x50;
    puVar4 = puVar5;
    auVar2 = auVar15;
  } while( true );
}



// ============================================================
// RVA: 0x1452f94 | Atlas.Arcade.ArcadeSave.GetRewardSeen
// ============================================================

undefined8 *
Atlas_Arcade_ArcadeSave__GetRewardSeen
          (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x1;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined4 uStack_34;
  
  uStack_34 = param_1;
  if ((bRam0000000003eb4797 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    func_0x00f78a20(0x3d68948);
    bRam0000000003eb4797 = 1;
  }
  uVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
  uVar7 = 0;
  uVar2 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar2);
  if (param_2 != 0) {
    uVar7 = Atlas_Save_SaveManager__get_SaveData(param_2,0);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = Atlas_Save_SaveManager__GetIntData(uVar2,0,uVar7,0);
    return (undefined8 *)(ulong)(iVar1 == 1);
  }
  auVar8 = func_0x00f78af4();
  pcStack_48 = Atlas_UI_Screens_ArcadeMapSelectScreen__OnRewardPanelClicked;
  uVar2 = uVar7;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4785 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d62010);
    func_0x00f78a20(0x3d268a8);
    bRam0000000003eb4785 = 1;
  }
  lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d268a8);
  Atlas_UI_Screens_ArcadeMapSelectScreen___c__DisplayClass50_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(char *)(lVar3 + 0x10) = (char)uVar7;
    *(undefined8 *)(lVar3 + 0x18) = param_4;
    *(int *)(lVar3 + 0x20) = auVar8._8_4_;
    *(long *)(lVar3 + 0x28) = auVar8._0_8_;
    puVar4 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar4,lVar3,uRam0000000003d62010,0);
    return puVar4;
  }
  uStack_b4 = func_0x00f78af4();
  puStack_88 = &Atlas_Arcade_ArcadeSave__SaveRewardSeen;
  uStack_b0 = uVar7;
  uStack_98 = param_4;
  ppuStack_90 = &puStack_50;
  if ((bRam0000000003eb4796 & 1) == 0) {
    uStack_a8 = auVar8._8_8_;
    uStack_a0 = auVar8._0_8_;
    func_0x00f78a20(0x3d68948);
    auVar8._8_8_ = uStack_a8;
    auVar8._0_8_ = uStack_a0;
    bRam0000000003eb4796 = 1;
  }
  uStack_a8 = auVar8._8_8_;
  uStack_a0 = auVar8._0_8_;
  uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_b4,0);
  uVar7 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar7,0);
  if (extraout_x1 != 0) {
    Atlas_Save_SaveManager__SetIntData(extraout_x1,uVar7,uVar2,0);
    puVar4 = (undefined8 *)Atlas_Save_SaveManager__MarkSaveAsDirty(extraout_x1,0);
    return puVar4;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4786 & 1) == 0) {
    func_0x00f78a20(0x3d2c680);
    func_0x00f78a20(0x3d305c8);
    func_0x00f78a20(0x3d2de48);
    func_0x00f78a20(0x3d2f2c8);
    func_0x00f78a20(0x3d305c0);
    func_0x00f78a20(0x3d2e258);
    func_0x00f78a20(0x3d2e490);
    func_0x00f78a20(0x3d1c1c0);
    func_0x00f78a20(0x3d1c660);
    func_0x00f78a20(0x3d1c138);
    func_0x00f78a20(0x3d1c230);
    func_0x00f78a20(0x3d1c3f8);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4786 = 1;
  }
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventMetagameData[]>_TypeInfo*/ uRam0000000003d1c1c0);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar2,uRam0000000003d2e258);
  *(undefined8 *)(lVar3 + 0xe0) = uVar2;
  uVar2 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar2,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar2,0);
  if (lVar5 != 0) {
    uVar2 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar5 + 0x18));
    *(undefined8 *)(lVar3 + 0xe8) = uVar2;
    uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar5 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar2,0);
    if (lVar5 != 0) {
      uVar2 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar5 + 0x18));
      *(undefined8 *)(lVar3 + 0xf0) = uVar2;
      uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, int>_TypeInfo*/ uRam0000000003d1c230);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(uVar2,uRam0000000003d2e490);
      *(undefined8 *)(lVar3 + 0xf8) = uVar2;
      uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar2,uRam0000000003d3b0f0);
      *(undefined8 *)(lVar3 + 0x100) = uVar2;
      uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UIArcadePanelBehavior>_TypeInfo*/ uRam0000000003d1c3f8);
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar2,uRam0000000003d2f2c8);
      *(undefined8 *)(lVar3 + 0x108) = uVar2;
      uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ValueTuple<MapDefinition, int>, bool>_TypeInfo*/ uRam0000000003d1c138);
      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$.ctor*/ func_0x01e265ec(uVar2,uRam0000000003d2de48);
      *(undefined8 *)(lVar3 + 0x110) = uVar2;
      lVar5 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>_TypeInfo*/ uRam0000000003d1c660);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(lVar5,uRam0000000003d305c0);
      if (lVar5 != 0) {
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar5,1,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar5,2,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar5,3,0,uRam0000000003d305c8);
        *(long *)(lVar3 + 0x118) = lVar5;
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined8 *)
                   (*(code *)**(undefined8 **)
                               (*(long *)(*(long *)(lRam0000000003d2c680 + 0x18) + 0xc0) + 0x38))();
          return puVar4;
        }
        auVar8 = func_0x00f78af4();
        puVar6 = auVar8._8_8_;
        puVar4 = auVar8._0_8_;
        uVar7 = puVar6[1];
        uVar2 = *puVar6;
        puVar4[2] = puVar6[2];
        puVar4[1] = uVar7;
        *puVar4 = uVar2;
        return puVar4;
      }
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4787 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d74f40);
    func_0x00f78a20(0x3d6cb80);
    bRam0000000003eb4787 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar4 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_24_ArcadeMapSelect')*/ uRam0000000003d6cb80,0);
  **(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) = puVar4;
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8) = /*STR('ToolTipData_FTUE_TOOLTIP_RETENTION_ARCADE_04')*/ uRam0000000003d74f40;
  return puVar4;
}



// ============================================================
// RVA: 0x1453140 | Atlas.Arcade.ArcadeSave.SaveRewardSeen
// ============================================================

void Atlas_Arcade_ArcadeSave__SaveRewardSeen(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined4 uStack_34;
  
  uStack_34 = param_1;
  if ((bRam0000000003eb4796 & 1) == 0) {
    func_0x00f78a20(0x3d68948);
    bRam0000000003eb4796 = 1;
  }
  uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
  uVar1 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar1,0);
  if (param_2 != 0) {
    Atlas_Save_SaveManager__SetIntData(param_2,uVar1,param_3,0);
    Atlas_Save_SaveManager__MarkSaveAsDirty(param_2,0);
    return;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4786 & 1) == 0) {
    func_0x00f78a20(0x3d2c680);
    func_0x00f78a20(0x3d305c8);
    func_0x00f78a20(0x3d2de48);
    func_0x00f78a20(0x3d2f2c8);
    func_0x00f78a20(0x3d305c0);
    func_0x00f78a20(0x3d2e258);
    func_0x00f78a20(0x3d2e490);
    func_0x00f78a20(0x3d1c1c0);
    func_0x00f78a20(0x3d1c660);
    func_0x00f78a20(0x3d1c138);
    func_0x00f78a20(0x3d1c230);
    func_0x00f78a20(0x3d1c3f8);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4786 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventMetagameData[]>_TypeInfo*/ uRam0000000003d1c1c0);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar1,uRam0000000003d2e258);
  *(undefined8 *)(lVar2 + 0xe0) = uVar1;
  uVar1 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar1,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar1,0);
  if (lVar3 != 0) {
    uVar1 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar3 + 0x18));
    *(undefined8 *)(lVar2 + 0xe8) = uVar1;
    uVar1 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar3 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar1,0);
    if (lVar3 != 0) {
      uVar1 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar3 + 0x18));
      *(undefined8 *)(lVar2 + 0xf0) = uVar1;
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, int>_TypeInfo*/ uRam0000000003d1c230);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(uVar1,uRam0000000003d2e490);
      *(undefined8 *)(lVar2 + 0xf8) = uVar1;
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3b0f0);
      *(undefined8 *)(lVar2 + 0x100) = uVar1;
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UIArcadePanelBehavior>_TypeInfo*/ uRam0000000003d1c3f8);
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d2f2c8);
      *(undefined8 *)(lVar2 + 0x108) = uVar1;
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ValueTuple<MapDefinition, int>, bool>_TypeInfo*/ uRam0000000003d1c138);
      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$.ctor*/ func_0x01e265ec(uVar1,uRam0000000003d2de48);
      *(undefined8 *)(lVar2 + 0x110) = uVar1;
      lVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>_TypeInfo*/ uRam0000000003d1c660);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(lVar3,uRam0000000003d305c0);
      if (lVar3 != 0) {
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar3,1,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar3,2,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar3,3,0,uRam0000000003d305c8);
        *(long *)(lVar2 + 0x118) = lVar3;
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(lRam0000000003d2c680 + 0x18) + 0xc0) + 0x38))();
          return;
        }
        auVar7 = func_0x00f78af4();
        puVar5 = auVar7._8_8_;
        puVar4 = auVar7._0_8_;
        uVar6 = puVar5[1];
        uVar1 = *puVar5;
        puVar4[2] = puVar5[2];
        puVar4[1] = uVar6;
        *puVar4 = uVar1;
        return;
      }
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4787 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d74f40);
    func_0x00f78a20(0x3d6cb80);
    bRam0000000003eb4787 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_24_ArcadeMapSelect')*/ uRam0000000003d6cb80,0);
  **(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) = uVar1;
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8) = /*STR('ToolTipData_FTUE_TOOLTIP_RETENTION_ARCADE_04')*/ uRam0000000003d74f40;
  return;
}



// ============================================================
// RVA: 0x1454848 | Atlas.Arcade.ArcadeSave.HasGoldMedal
// ============================================================

/* WARNING: Possible PIC construction at 0x014548e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014548e8) */
/* WARNING: Removing unreachable block (ram,0x014548ec) */
/* WARNING: Removing unreachable block (ram,0x014548fc) */

bool Atlas_Arcade_ArcadeSave__HasGoldMedal
               (long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int iStack_44;
  
  if ((bRam0000000003eb4791 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d2dc70);
    bRam0000000003eb4791 = 1;
  }
  iStack_44 = 0;
  if (param_1 == (long *)0x0) {
    auVar4 = func_0x00f78af4();
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    auVar4._8_8_ = param_1[4];
    auVar4._0_8_ = uVar3;
    if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_4 = &iStack_44;
    param_3 = param_2;
  }
  if ((bRam0000000003eb4795 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4795 = 1;
  }
  if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*Atlas.Arcade.ArcadeSave$$GetKey*/ func_0x01454ad4(auVar4._0_8_,auVar4._8_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = Atlas_Save_SaveManager__GetIntData(uVar3,0x7fffffff,param_3,0);
  iVar1 = 0;
  if (iVar2 != 0x7fffffff) {
    iVar1 = iVar2;
  }
  *param_4 = iVar1;
  return iVar2 != 0x7fffffff;
}



// ============================================================
// RVA: 0x1454918 | Atlas.Arcade.ArcadeSave.TryGetResult
// ============================================================

bool Atlas_Arcade_ArcadeSave__TryGetResult
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4795 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4795 = 1;
  }
  if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*Atlas.Arcade.ArcadeSave$$GetKey*/ func_0x01454ad4(param_1,param_2);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = Atlas_Save_SaveManager__GetIntData(uVar3,0x7fffffff,param_3,0);
  iVar1 = 0;
  if (iVar2 != 0x7fffffff) {
    iVar1 = iVar2;
  }
  *param_4 = iVar1;
  return iVar2 != 0x7fffffff;
}



// ============================================================
// RVA: 0x14549f8 | Atlas.Arcade.ArcadeSave.SaveResultIfBetter
// ============================================================

/* WARNING: Possible PIC construction at 0x01454a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01454b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01454c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x01454c14) */
/* WARNING: Removing unreachable block (ram,0x01454c48) */
/* WARNING: Removing unreachable block (ram,0x01454c18) */
/* WARNING: Removing unreachable block (ram,0x01454b40) */
/* WARNING: Removing unreachable block (ram,0x01454b64) */
/* WARNING: Removing unreachable block (ram,0x01454ba0) */
/* WARNING: Removing unreachable block (ram,0x01454bdc) */
/* WARNING: Removing unreachable block (ram,0x01454bf0) */
/* WARNING: Removing unreachable block (ram,0x01454bfc) */
/* WARNING: Removing unreachable block (ram,0x01454c04) */
/* WARNING: Removing unreachable block (ram,0x01454c08) */
/* WARNING: Removing unreachable block (ram,0x01454b84) */
/* WARNING: Removing unreachable block (ram,0x01454a68) */
/* WARNING: Removing unreachable block (ram,0x01454ad0) */
/* WARNING: Removing unreachable block (ram,0x01454a6c) */
/* WARNING: Removing unreachable block (ram,0x01454abc) */
/* WARNING: Removing unreachable block (ram,0x01454a8c) */
/* WARNING: Removing unreachable block (ram,0x014eb72c) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */

long * Atlas_Arcade_ArcadeSave__SaveResultIfBetter
                 (long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long **pplVar4;
  long **pplVar5;
  undefined2 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong *puVar17;
  int iVar18;
  long *plVar19;
  uint uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined8 *******pppppppuVar25;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 *****pppppuStack_50;
  undefined8 uStack_48;
  
  uVar22 = 0x3eb4000;
  lVar23 = 0x3d1fcc0;
  plVar15 = param_4;
  if ((bRam0000000003eb4792 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    bRam0000000003eb4792 = 1;
  }
  if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_48 = 0x1454a68;
  plStack_70 = param_1;
  plStack_68 = param_2;
  uStack_60 = param_3;
  plStack_58 = param_4;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4798 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    bRam0000000003eb4798 = 1;
  }
  if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = (long *)**(ulong **)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xb8);
  plStack_a0 = (long *)0x3eb4000;
  plStack_98 = (long *)0x3d1fcc0;
  puStack_78 = &UNK_01454b40;
  plVar19 = (long *)0x3eb4000;
  plStack_90 = param_2;
  plStack_88 = param_1;
  ppppppuStack_80 = &pppppuStack_50;
  if ((bRam0000000003eb4799 & 1) == 0) {
    func_0x00f78a20(0x3d6f928);
    func_0x00f78a20(0x3d6f920);
    bRam0000000003eb4799 = 1;
  }
  if (param_2 != (long *)0x0) {
    plVar19 = (long *)0x3d6f928;
    iVar7 = /*System.String$$StartsWith*/ func_0x029ce8f8(param_2,/*STR('Map_Race_')*/ uRam0000000003d6f928,0);
    if (iVar7 == 0) {
      plVar19 = (long *)0x3d6f920;
      iVar7 = /*System.String$$StartsWith*/ func_0x029ce8f8(param_2,/*STR('Map_Battle_')*/ uRam0000000003d6f920,0);
      if (iVar7 == 0) {
        if (plVar12 != (long *)0x0) {
          plVar14 = (long *)0x0;
          pplVar5 = &plStack_70;
          plVar16 = plVar12;
          plVar11 = param_2;
          param_2 = plStack_88;
          plVar12 = plStack_90;
          plVar19 = plStack_98;
          plVar21 = plStack_a0;
          pppppppuVar25 = (undefined8 *******)ppppppuStack_80;
          puStack_a8 = puStack_78;
          goto code_r0x029d2c70;
        }
        goto code_r0x01454d20;
      }
    }
    if ((*plVar19 != 0) && (plVar12 != (long *)0x0)) {
      uVar20 = *(uint *)(*plVar19 + 0x10);
      plVar14 = (long *)(ulong)uVar20;
      plVar15 = (long *)(ulong)((int)param_2[2] - uVar20);
      pplVar4 = &plStack_70;
      plVar16 = plStack_88;
      plVar11 = plStack_90;
      plVar19 = plStack_98;
      plVar21 = plStack_a0;
      pppppppuVar25 = (undefined8 *******)ppppppuStack_80;
      puVar26 = puStack_78;
      goto code_r0x029d2dbc;
    }
  }
code_r0x01454d20:
  auVar27 = func_0x00f78af4();
  plVar16 = auVar27._8_8_;
  plVar21 = auVar27._0_8_;
  puStack_a8 = &Atlas_Arcade_ArcadeSave__AppendGameTypeKey;
  if ((bRam0000000003eb479a & 1) == 0) {
    func_0x00f78a20(0x3d72098);
    func_0x00f78a20(0x3d73388);
    plVar21 = (long *)func_0x00f78a20(0x3d69950);
    bRam0000000003eb479a = 1;
  }
  iVar7 = auVar27._0_4_;
  if (iVar7 == 8) {
    if (plVar16 == (long *)0x0) goto code_r0x01454de4;
    puVar17 = (ulong *)0x3d72098;
  }
  else if (iVar7 == 7) {
    if (plVar16 == (long *)0x0) goto code_r0x01454de4;
    puVar17 = (ulong *)0x3d69950;
  }
  else {
    if (iVar7 != 6) {
      return plVar21;
    }
    if (plVar16 == (long *)0x0) {
code_r0x01454de4:
      func_0x00f78af4();
      if ((bRam0000000003eb479b & 1) == 0) {
        func_0x00f78a20(0x3d1fcc0);
        func_0x00f78a20(0x3d24dd8);
        bRam0000000003eb479b = 1;
      }
      uVar9 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
      plVar15 = (long *)/*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar9,0x40,0);
      **(undefined8 **)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xb8) = uVar9;
      return plVar15;
    }
    puVar17 = (ulong *)0x3d73388;
  }
  plVar14 = (long *)0x0;
  pplVar5 = &plStack_a0;
  plVar21 = (long *)0x3eb4000;
  plVar11 = (long *)*puVar17;
  pppppppuVar25 = &ppppppuStack_80;
code_r0x029d2c70:
  do {
    auVar27._8_8_ = plVar11;
    auVar27._0_8_ = plVar16;
    *(long *)((long)pplVar5 + -0x40) = lVar23;
    *(ulong *)((long)pplVar5 + -0x38) = uVar22;
    *(long **)((long)pplVar5 + -0x30) = plVar21;
    *(long **)((long)pplVar5 + -0x28) = plVar19;
    *(long **)((long)pplVar5 + -0x20) = plVar12;
    *(long **)((long)pplVar5 + -0x18) = param_2;
    *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuVar25;
    *(undefined **)((long)pplVar5 + -8) = puStack_a8;
    if (plVar11 == (long *)0x0) {
      return plVar16;
    }
    uVar22 = plVar16[2];
    if (uVar22 == 0) {
      func_0x00f78af4();
      plVar11 = plVar12;
code_r0x029d2d74:
      uVar9 = func_0x00f78b24();
      puVar26 = &System_Text_StringBuilder__AppendHelper;
      auVar27 = func_0x00f78ac0(uVar9,0);
    }
    else {
      uVar2 = *(uint *)(plVar16 + 4);
      lVar23 = (long)(int)uVar2;
      uVar1 = *(uint *)(plVar11 + 2);
      plVar19 = (long *)(ulong)uVar1;
      uVar20 = uVar1 + uVar2;
      plVar21 = (long *)(ulong)uVar20;
      if ((int)uVar20 < *(int *)(uVar22 + 0x18)) {
        if ((int)uVar1 < 3) {
          if ((int)uVar1 < 1) goto code_r0x029d2d54;
          plVar14 = (long *)0x0;
          uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(plVar11,0);
          if (uVar2 < *(uint *)(uVar22 + 0x18)) {
            *(undefined2 *)(uVar22 + lVar23 * 2 + 0x20) = uVar6;
            if (uVar1 < 2) {
code_r0x029d2d54:
              *(uint *)(plVar16 + 4) = uVar20;
              return plVar16;
            }
            plVar14 = (long *)0x0;
            uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(plVar11,1);
            if (uVar2 + 1 < *(uint *)(uVar22 + 0x18)) {
              *(undefined2 *)(uVar22 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar6;
              goto code_r0x029d2d54;
            }
          }
        }
        else {
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          if (uVar2 < *(uint *)(uVar22 + 0x18)) {
            /*System.String$$wstrcpy*/ func_0x029cb054(uVar22 + lVar23 * 2 + 0x20,(long)plVar11 + (long)iVar7,plVar19,0);
            goto code_r0x029d2d54;
          }
        }
        goto code_r0x029d2d74;
      }
      puVar26 = &UNK_029d2cf4;
    }
    lVar13 = auVar27._8_8_;
    plVar12 = auVar27._0_8_;
    pplVar4 = (long **)((long)pplVar5 + -0x60);
    *(long **)((long)pplVar5 + -0x60) = plVar11;
    *(long **)((long)pplVar5 + -0x58) = plVar16;
    *(undefined1 **)((long)pplVar5 + -0x50) = (undefined1 *)((long)pplVar5 + -0x10);
    *(undefined **)((long)pplVar5 + -0x48) = puVar26;
    pppppppuVar25 = (undefined8 *******)((long)pplVar5 + -0x50);
    if (lVar13 != 0) {
      iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar8 = lVar13 + iVar7;
      plVar15 = (long *)(ulong)*(uint *)(lVar13 + 0x10);
      puVar24 = *(undefined1 **)((long)pplVar5 + -0x50);
      puVar26 = *(undefined **)((long)pplVar5 + -0x48);
      puVar3 = (undefined1 *)((long)pplVar5 + -0x40);
      plVar16 = *(long **)((long)pplVar5 + -0x60);
      plVar11 = *(long **)((long)pplVar5 + -0x58);
code_r0x029d2b54:
      pplVar5 = (long **)(puVar3 + -0x40);
      *(long *)(puVar3 + -0x40) = lVar23;
      *(ulong *)(puVar3 + -0x38) = uVar22;
      *(long **)(puVar3 + -0x30) = plVar21;
      *(long **)(puVar3 + -0x28) = plVar19;
      *(long **)(puVar3 + -0x20) = plVar16;
      *(long **)(puVar3 + -0x18) = plVar11;
      *(undefined1 **)(puVar3 + -0x10) = puVar24;
      *(undefined **)(puVar3 + -8) = puVar26;
      iVar7 = (int)plVar15;
      if (-1 < iVar7) {
        lVar13 = plVar12[2];
        if (lVar13 != 0) {
          iVar18 = (int)plVar12[4];
          uVar20 = iVar18 + iVar7;
          plVar21 = (long *)(ulong)uVar20;
          if ((int)uVar20 <= *(int *)(lVar13 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar13 + 0x18) - iVar18;
          uVar22 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar8,lVar13,iVar18,uVar22);
            plVar19 = plVar15;
            if (plVar12[2] == 0) goto code_r0x029d2c08;
            *(int *)(plVar12 + 4) = (int)*(undefined8 *)(plVar12[2] + 0x18);
          }
          uVar20 = iVar7 - uVar1;
          plVar15 = (long *)(ulong)uVar20;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar12,plVar15);
          lVar13 = plVar12[2];
          lVar8 = lVar8 + (long)(int)uVar1 * 2;
          iVar18 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar8,lVar13,iVar18,plVar15);
          *(uint *)(plVar12 + 4) = uVar20;
          return plVar12;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar9 = func_0x00f78a24(0x3d6b268);
      param_2 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
      func_0x00f78a24(0x3d1fcf8);
      plVar12 = (long *)func_0x00f78aec();
      uVar9 = func_0x00f78a24(0x3d7c5c8);
      plVar15 = (long *)0x0;
      plVar14 = param_2;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar12,uVar9);
      uVar9 = func_0x00f78a24(0x3d5dbe8);
      puStack_a8 = &System_Text_StringBuilder__Append;
      auVar27 = func_0x00f78ac0(plVar12,uVar9);
      plVar16 = auVar27._0_8_;
      plVar11 = auVar27._8_8_;
      pppppppuVar25 = (undefined8 *******)(puVar3 + -0x10);
      goto code_r0x029d2c70;
    }
    puVar26 = &System_Text_StringBuilder__Append;
    auVar27 = func_0x00f78af4();
    param_2 = auVar27._8_8_;
    plVar12 = auVar27._0_8_;
code_r0x029d2dbc:
    puVar3 = (undefined1 *)((long)pplVar4 + -0x40);
    *(long *)((long)pplVar4 + -0x40) = lVar23;
    *(ulong *)((long)pplVar4 + -0x38) = uVar22;
    *(long **)((long)pplVar4 + -0x30) = plVar21;
    *(long **)((long)pplVar4 + -0x28) = plVar19;
    *(long **)((long)pplVar4 + -0x20) = plVar11;
    *(long **)((long)pplVar4 + -0x18) = plVar16;
    *(undefined8 ********)((long)pplVar4 + -0x10) = pppppppuVar25;
    *(undefined **)((long)pplVar4 + -8) = puVar26;
    puVar24 = (undefined1 *)((long)pplVar4 + -0x10);
    uVar22 = 0x3eb9000;
    plVar16 = plVar15;
    if ((bRam0000000003eb948a & 1) == 0) {
      func_0x00f78a20(0x3d208b0);
      bRam0000000003eb948a = 1;
    }
    iVar7 = (int)plVar14;
    plVar19 = plVar14;
    plVar21 = param_2;
    if (iVar7 < 0) {
code_r0x029d2e7c:
      uVar9 = func_0x00f78a24(0x3d6de28);
      uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
      func_0x00f78a24(0x3d1fcf8);
      plVar11 = (long *)func_0x00f78aec();
      uVar9 = 0x3d7b9d0;
code_r0x029d2ee8:
      uVar9 = func_0x00f78a24(uVar9);
      plVar16 = (long *)0x0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar11,uVar9,uVar10);
      uVar9 = func_0x00f78a24(0x3d5dc00);
      func_0x00f78ac0(plVar11,uVar9);
    }
    else {
      iVar18 = (int)plVar15;
      if (iVar18 < 0) {
        uVar9 = func_0x00f78a24(0x3d75fa8);
        uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
        func_0x00f78a24(0x3d1fcf8);
        plVar11 = (long *)func_0x00f78aec();
        uVar9 = 0x3d78638;
        goto code_r0x029d2ee8;
      }
      if ((iVar18 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
        return plVar12;
      }
      if (param_2 != (long *)0x0) {
        if (iVar18 == 0) {
          return plVar12;
        }
        if (iVar7 <= (int)param_2[2] - iVar18) {
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar8 = (long)param_2 + (long)iVar7 + ((ulong)plVar14 & 0xffffffff) * 2;
          puVar26 = &UNK_029d2e58;
          plVar11 = plVar12;
          plVar16 = plVar15;
          goto code_r0x029d2b54;
        }
        goto code_r0x029d2e7c;
      }
      plVar11 = plVar15;
      if (iVar7 == 0 && iVar18 == 0) {
        return plVar12;
      }
    }
    plVar15 = plVar16;
    func_0x00f78a24(0x3d1fcf0);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d7c5a0);
    plVar14 = (long *)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar10);
    uVar10 = func_0x00f78a24(0x3d5dc00);
    plVar16 = (long *)func_0x00f78ac0(uVar9,uVar10);
    *(long **)((long)pplVar4 + -0x60) = plVar11;
    *(undefined8 *)((long)pplVar4 + -0x58) = uVar9;
    *(undefined1 **)((long)pplVar4 + -0x50) = puVar24;
    *(undefined **)((long)pplVar4 + -0x48) = &System_Text_StringBuilder__AppendLine;
    plVar11 = (long *)/*System.Environment$$get_NewLine*/ func_0x02aca040(0);
    puStack_a8 = *(undefined **)((long)pplVar4 + -0x48);
    pplVar5 = (long **)((long)pplVar4 + -0x40);
    param_2 = *(long **)((long)pplVar4 + -0x58);
    plVar12 = *(long **)((long)pplVar4 + -0x60);
    pppppppuVar25 = *(undefined8 ********)((long)pplVar4 + -0x50);
  } while( true );
}



// ============================================================
// RVA: 0x1454ad4 | Atlas.Arcade.ArcadeSave.GetKey
// ============================================================

/* WARNING: Possible PIC construction at 0x01454b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x01454b40) */
/* WARNING: Removing unreachable block (ram,0x01454b64) */
/* WARNING: Removing unreachable block (ram,0x01454ba0) */
/* WARNING: Removing unreachable block (ram,0x01454bdc) */
/* WARNING: Removing unreachable block (ram,0x01454bf0) */
/* WARNING: Removing unreachable block (ram,0x01454bfc) */
/* WARNING: Removing unreachable block (ram,0x01454c04) */
/* WARNING: Removing unreachable block (ram,0x01454c08) */
/* WARNING: Removing unreachable block (ram,0x01454c48) */
/* WARNING: Removing unreachable block (ram,0x01454c18) */
/* WARNING: Removing unreachable block (ram,0x014eb72c) */
/* WARNING: Removing unreachable block (ram,0x01454b84) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */

long * Atlas_Arcade_ArcadeSave__GetKey(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long **pplVar5;
  undefined2 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong *puVar16;
  int iVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 *puVar21;
  undefined8 *******pppppppuVar22;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined *puStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4798 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    bRam0000000003eb4798 = 1;
  }
  if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = (long *)**(ulong **)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xb8);
  plStack_60 = (long *)0x3eb4000;
  plStack_58 = (long *)0x3d1fcc0;
  puStack_38 = (undefined *)0x1454b40;
  plVar18 = (long *)0x3eb4000;
  plStack_50 = param_2;
  plStack_48 = param_1;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4799 & 1) == 0) {
    func_0x00f78a20(0x3d6f928);
    func_0x00f78a20(0x3d6f920);
    bRam0000000003eb4799 = 1;
  }
  if (param_2 != (long *)0x0) {
    plVar18 = (long *)0x3d6f928;
    iVar7 = /*System.String$$StartsWith*/ func_0x029ce8f8(param_2,/*STR('Map_Race_')*/ uRam0000000003d6f928,0);
    if (iVar7 == 0) {
      plVar18 = (long *)0x3d6f920;
      iVar7 = /*System.String$$StartsWith*/ func_0x029ce8f8(param_2,/*STR('Map_Battle_')*/ uRam0000000003d6f920,0);
      if (iVar7 == 0) {
        if (plVar12 != (long *)0x0) {
          plVar14 = (long *)0x0;
          pplVar5 = (long **)&stack0xffffffffffffffd0;
          plVar15 = plVar12;
          plVar11 = param_2;
          param_2 = plStack_48;
          plVar12 = plStack_50;
          plVar18 = plStack_58;
          plVar20 = plStack_60;
          pppppppuVar22 = (undefined8 *******)ppppppuStack_40;
          puStack_68 = puStack_38;
          goto code_r0x029d2c70;
        }
        goto code_r0x01454d20;
      }
    }
    if ((*plVar18 != 0) && (plVar12 != (long *)0x0)) {
      uVar19 = *(uint *)(*plVar18 + 0x10);
      plVar14 = (long *)(ulong)uVar19;
      param_4 = (long *)(ulong)((int)param_2[2] - uVar19);
      puVar4 = &stack0xffffffffffffffd0;
      plVar15 = plStack_48;
      plVar11 = plStack_50;
      plVar18 = plStack_58;
      plVar20 = plStack_60;
      pppppppuVar22 = (undefined8 *******)ppppppuStack_40;
      puVar23 = puStack_38;
      goto code_r0x029d2dbc;
    }
  }
code_r0x01454d20:
  auVar24 = func_0x00f78af4();
  plVar15 = auVar24._8_8_;
  plVar20 = auVar24._0_8_;
  puStack_68 = &Atlas_Arcade_ArcadeSave__AppendGameTypeKey;
  if ((bRam0000000003eb479a & 1) == 0) {
    func_0x00f78a20(0x3d72098);
    func_0x00f78a20(0x3d73388);
    plVar20 = (long *)func_0x00f78a20(0x3d69950);
    bRam0000000003eb479a = 1;
  }
  iVar7 = auVar24._0_4_;
  if (iVar7 == 8) {
    if (plVar15 == (long *)0x0) goto code_r0x01454de4;
    puVar16 = (ulong *)0x3d72098;
  }
  else if (iVar7 == 7) {
    if (plVar15 == (long *)0x0) goto code_r0x01454de4;
    puVar16 = (ulong *)0x3d69950;
  }
  else {
    if (iVar7 != 6) {
      return plVar20;
    }
    if (plVar15 == (long *)0x0) {
code_r0x01454de4:
      func_0x00f78af4();
      if ((bRam0000000003eb479b & 1) == 0) {
        func_0x00f78a20(0x3d1fcc0);
        func_0x00f78a20(0x3d24dd8);
        bRam0000000003eb479b = 1;
      }
      uVar9 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
      plVar18 = (long *)/*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar9,0x40,0);
      **(undefined8 **)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xb8) = uVar9;
      return plVar18;
    }
    puVar16 = (ulong *)0x3d73388;
  }
  plVar14 = (long *)0x0;
  pplVar5 = &plStack_60;
  plVar20 = (long *)0x3eb4000;
  plVar11 = (long *)*puVar16;
  pppppppuVar22 = &ppppppuStack_40;
code_r0x029d2c70:
  do {
    auVar24._8_8_ = plVar11;
    auVar24._0_8_ = plVar15;
    *(long *)((long)pplVar5 + -0x40) = unaff_x24;
    *(ulong *)((long)pplVar5 + -0x38) = unaff_x23;
    *(long **)((long)pplVar5 + -0x30) = plVar20;
    *(long **)((long)pplVar5 + -0x28) = plVar18;
    *(long **)((long)pplVar5 + -0x20) = plVar12;
    *(long **)((long)pplVar5 + -0x18) = param_2;
    *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuVar22;
    *(undefined **)((long)pplVar5 + -8) = puStack_68;
    if (plVar11 == (long *)0x0) {
      return plVar15;
    }
    unaff_x23 = plVar15[2];
    if (unaff_x23 == 0) {
      func_0x00f78af4();
      plVar11 = plVar12;
code_r0x029d2d74:
      uVar9 = func_0x00f78b24();
      puVar23 = &System_Text_StringBuilder__AppendHelper;
      auVar24 = func_0x00f78ac0(uVar9,0);
    }
    else {
      uVar2 = *(uint *)(plVar15 + 4);
      unaff_x24 = (long)(int)uVar2;
      uVar1 = *(uint *)(plVar11 + 2);
      plVar18 = (long *)(ulong)uVar1;
      uVar19 = uVar1 + uVar2;
      plVar20 = (long *)(ulong)uVar19;
      if ((int)uVar19 < *(int *)(unaff_x23 + 0x18)) {
        if ((int)uVar1 < 3) {
          if ((int)uVar1 < 1) goto code_r0x029d2d54;
          plVar14 = (long *)0x0;
          uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(plVar11,0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            *(undefined2 *)(unaff_x23 + unaff_x24 * 2 + 0x20) = uVar6;
            if (uVar1 < 2) {
code_r0x029d2d54:
              *(uint *)(plVar15 + 4) = uVar19;
              return plVar15;
            }
            plVar14 = (long *)0x0;
            uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(plVar11,1);
            if (uVar2 + 1 < *(uint *)(unaff_x23 + 0x18)) {
              *(undefined2 *)(unaff_x23 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar6;
              goto code_r0x029d2d54;
            }
          }
        }
        else {
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            /*System.String$$wstrcpy*/ func_0x029cb054(unaff_x23 + unaff_x24 * 2 + 0x20,(long)plVar11 + (long)iVar7,plVar18,0);
            goto code_r0x029d2d54;
          }
        }
        goto code_r0x029d2d74;
      }
      puVar23 = &UNK_029d2cf4;
    }
    lVar13 = auVar24._8_8_;
    plVar12 = auVar24._0_8_;
    puVar4 = (undefined1 *)((long)pplVar5 + -0x60);
    *(long **)((long)pplVar5 + -0x60) = plVar11;
    *(long **)((long)pplVar5 + -0x58) = plVar15;
    *(undefined1 **)((long)pplVar5 + -0x50) = (undefined1 *)((long)pplVar5 + -0x10);
    *(undefined **)((long)pplVar5 + -0x48) = puVar23;
    pppppppuVar22 = (undefined8 *******)((long)pplVar5 + -0x50);
    if (lVar13 != 0) {
      iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar8 = lVar13 + iVar7;
      param_4 = (long *)(ulong)*(uint *)(lVar13 + 0x10);
      puVar21 = *(undefined1 **)((long)pplVar5 + -0x50);
      puVar23 = *(undefined **)((long)pplVar5 + -0x48);
      puVar3 = (undefined1 *)((long)pplVar5 + -0x40);
      plVar15 = *(long **)((long)pplVar5 + -0x60);
      plVar11 = *(long **)((long)pplVar5 + -0x58);
code_r0x029d2b54:
      pplVar5 = (long **)(puVar3 + -0x40);
      *(long *)(puVar3 + -0x40) = unaff_x24;
      *(ulong *)(puVar3 + -0x38) = unaff_x23;
      *(long **)(puVar3 + -0x30) = plVar20;
      *(long **)(puVar3 + -0x28) = plVar18;
      *(long **)(puVar3 + -0x20) = plVar15;
      *(long **)(puVar3 + -0x18) = plVar11;
      *(undefined1 **)(puVar3 + -0x10) = puVar21;
      *(undefined **)(puVar3 + -8) = puVar23;
      iVar7 = (int)param_4;
      if (-1 < iVar7) {
        lVar13 = plVar12[2];
        if (lVar13 != 0) {
          iVar17 = (int)plVar12[4];
          uVar19 = iVar17 + iVar7;
          plVar20 = (long *)(ulong)uVar19;
          if ((int)uVar19 <= *(int *)(lVar13 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar13 + 0x18) - iVar17;
          unaff_x23 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar8,lVar13,iVar17,unaff_x23);
            plVar18 = param_4;
            if (plVar12[2] == 0) goto code_r0x029d2c08;
            *(int *)(plVar12 + 4) = (int)*(undefined8 *)(plVar12[2] + 0x18);
          }
          uVar19 = iVar7 - uVar1;
          param_4 = (long *)(ulong)uVar19;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar12,param_4);
          lVar13 = plVar12[2];
          lVar8 = lVar8 + (long)(int)uVar1 * 2;
          iVar17 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar8,lVar13,iVar17,param_4);
          *(uint *)(plVar12 + 4) = uVar19;
          return plVar12;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar9 = func_0x00f78a24(0x3d6b268);
      param_2 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
      func_0x00f78a24(0x3d1fcf8);
      plVar12 = (long *)func_0x00f78aec();
      uVar9 = func_0x00f78a24(0x3d7c5c8);
      param_4 = (long *)0x0;
      plVar14 = param_2;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar12,uVar9);
      uVar9 = func_0x00f78a24(0x3d5dbe8);
      puStack_68 = &System_Text_StringBuilder__Append;
      auVar24 = func_0x00f78ac0(plVar12,uVar9);
      plVar15 = auVar24._0_8_;
      plVar11 = auVar24._8_8_;
      pppppppuVar22 = (undefined8 *******)(puVar3 + -0x10);
      goto code_r0x029d2c70;
    }
    puVar23 = &System_Text_StringBuilder__Append;
    auVar24 = func_0x00f78af4();
    param_2 = auVar24._8_8_;
    plVar12 = auVar24._0_8_;
code_r0x029d2dbc:
    puVar3 = puVar4 + -0x40;
    *(long *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(long **)(puVar4 + -0x30) = plVar20;
    *(long **)(puVar4 + -0x28) = plVar18;
    *(long **)(puVar4 + -0x20) = plVar11;
    *(long **)(puVar4 + -0x18) = plVar15;
    *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar22;
    *(undefined **)(puVar4 + -8) = puVar23;
    puVar21 = puVar4 + -0x10;
    unaff_x23 = 0x3eb9000;
    plVar15 = param_4;
    if ((bRam0000000003eb948a & 1) == 0) {
      func_0x00f78a20(0x3d208b0);
      bRam0000000003eb948a = 1;
    }
    iVar7 = (int)plVar14;
    plVar18 = plVar14;
    plVar20 = param_2;
    if (iVar7 < 0) {
code_r0x029d2e7c:
      uVar9 = func_0x00f78a24(0x3d6de28);
      uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
      func_0x00f78a24(0x3d1fcf8);
      plVar11 = (long *)func_0x00f78aec();
      uVar9 = 0x3d7b9d0;
code_r0x029d2ee8:
      uVar9 = func_0x00f78a24(uVar9);
      plVar15 = (long *)0x0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar11,uVar9,uVar10);
      uVar9 = func_0x00f78a24(0x3d5dc00);
      func_0x00f78ac0(plVar11,uVar9);
    }
    else {
      iVar17 = (int)param_4;
      if (iVar17 < 0) {
        uVar9 = func_0x00f78a24(0x3d75fa8);
        uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
        func_0x00f78a24(0x3d1fcf8);
        plVar11 = (long *)func_0x00f78aec();
        uVar9 = 0x3d78638;
        goto code_r0x029d2ee8;
      }
      if ((iVar17 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
        return plVar12;
      }
      if (param_2 != (long *)0x0) {
        if (iVar17 == 0) {
          return plVar12;
        }
        if (iVar7 <= (int)param_2[2] - iVar17) {
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar8 = (long)param_2 + (long)iVar7 + ((ulong)plVar14 & 0xffffffff) * 2;
          puVar23 = &UNK_029d2e58;
          plVar11 = plVar12;
          plVar15 = param_4;
          goto code_r0x029d2b54;
        }
        goto code_r0x029d2e7c;
      }
      plVar11 = param_4;
      if (iVar7 == 0 && iVar17 == 0) {
        return plVar12;
      }
    }
    param_4 = plVar15;
    func_0x00f78a24(0x3d1fcf0);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d7c5a0);
    plVar14 = (long *)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar10);
    uVar10 = func_0x00f78a24(0x3d5dc00);
    plVar15 = (long *)func_0x00f78ac0(uVar9,uVar10);
    *(long **)(puVar4 + -0x60) = plVar11;
    *(undefined8 *)(puVar4 + -0x58) = uVar9;
    *(undefined1 **)(puVar4 + -0x50) = puVar21;
    *(undefined **)(puVar4 + -0x48) = &System_Text_StringBuilder__AppendLine;
    plVar11 = (long *)/*System.Environment$$get_NewLine*/ func_0x02aca040(0);
    puStack_68 = *(undefined **)(puVar4 + -0x48);
    pplVar5 = (long **)(puVar4 + -0x40);
    param_2 = *(long **)(puVar4 + -0x58);
    plVar12 = *(long **)(puVar4 + -0x60);
    pppppppuVar22 = *(undefined8 ********)(puVar4 + -0x50);
  } while( true );
}



// ============================================================
// RVA: 0x1454ba4 | Atlas.Arcade.ArcadeSave.SaveResult
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */

undefined1  [16]
Atlas_Arcade_ArcadeSave__SaveResult(long *param_1,long *param_2,long param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long **pplVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long *extraout_x1_03;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  int iVar18;
  long *plVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  undefined8 ****ppppuVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined *puStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  uVar21 = 0x3eb4000;
  lVar22 = 0x3d1fcc0;
  plVar15 = param_4;
  if ((bRam0000000003eb4793 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    bRam0000000003eb4793 = 1;
  }
  if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = Atlas_Arcade_ArcadeSave__GetKey(param_1,param_2);
  if (param_4 != (long *)0x0) {
    Atlas_Save_SaveManager__SetIntData(param_4,uVar8,param_3,0);
    *(undefined1 *)(param_4 + 0x22) = 1;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = param_4;
    return auVar30;
  }
  auVar26 = func_0x00f78af4();
  auVar31._0_8_ = auVar26._8_8_;
  plVar10 = auVar26._0_8_;
  auVar29._8_8_ = plVar10;
  auVar29._0_8_ = auVar31._0_8_;
  puStack_48 = &Atlas_Arcade_ArcadeSave__AppendMapKey;
  plVar19 = (long *)0x3eb4000;
  plStack_70 = param_1;
  plStack_68 = param_2;
  lStack_60 = param_3;
  plStack_58 = param_4;
  pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4799 & 1) == 0) {
    func_0x00f78a20(0x3d6f928);
    func_0x00f78a20(0x3d6f920);
    bRam0000000003eb4799 = 1;
  }
  if (plVar10 != (long *)0x0) {
    plVar19 = (long *)0x3d6f928;
    iVar7 = /*System.String$$StartsWith*/ func_0x029ce8f8(plVar10,/*STR('Map_Race_')*/ uRam0000000003d6f928,0);
    if (iVar7 == 0) {
      plVar19 = (long *)0x3d6f920;
      iVar7 = /*System.String$$StartsWith*/ func_0x029ce8f8(plVar10,/*STR('Map_Battle_')*/ uRam0000000003d6f920,0);
      if (iVar7 == 0) {
        if (auVar31._0_8_ != 0) {
          plVar14 = (long *)0x0;
          pplVar5 = (long **)&stack0xffffffffffffffc0;
          plVar10 = plStack_58;
          auVar31._0_8_ = lStack_60;
          plVar19 = plStack_68;
          param_1 = plStack_70;
          ppppuVar24 = (undefined8 ****)pppuStack_50;
          puStack_78 = puStack_48;
          goto code_r0x029d2c70;
        }
        goto code_r0x01454d20;
      }
    }
    if ((*plVar19 != 0) && (auVar31._0_8_ != 0)) {
      uVar20 = *(uint *)(*plVar19 + 0x10);
      plVar14 = (long *)(ulong)uVar20;
      plVar15 = (long *)(ulong)((int)plVar10[2] - uVar20);
      puVar4 = &stack0xffffffffffffffc0;
      plVar10 = plStack_58;
      lVar9 = lStack_60;
      plVar19 = plStack_68;
      plVar16 = plStack_70;
      ppppuVar24 = (undefined8 ****)pppuStack_50;
      puVar25 = puStack_48;
      goto code_r0x029d2dbc;
    }
  }
code_r0x01454d20:
  auVar26 = func_0x00f78af4();
  lVar9 = auVar26._8_8_;
  puStack_78 = &Atlas_Arcade_ArcadeSave__AppendGameTypeKey;
  auVar30 = auVar26;
  if ((bRam0000000003eb479a & 1) == 0) {
    func_0x00f78a20(0x3d72098);
    func_0x00f78a20(0x3d73388);
    auVar30 = func_0x00f78a20(0x3d69950);
    bRam0000000003eb479a = 1;
  }
  iVar7 = auVar26._0_4_;
  if (iVar7 == 8) {
    if (lVar9 == 0) goto code_r0x01454de4;
    puVar17 = (undefined8 *)0x3d72098;
  }
  else if (iVar7 == 7) {
    if (lVar9 == 0) goto code_r0x01454de4;
    puVar17 = (undefined8 *)0x3d69950;
  }
  else {
    if (iVar7 != 6) {
      return auVar30;
    }
    if (lVar9 == 0) {
code_r0x01454de4:
      func_0x00f78af4();
      if ((bRam0000000003eb479b & 1) == 0) {
        func_0x00f78a20(0x3d1fcc0);
        func_0x00f78a20(0x3d24dd8);
        bRam0000000003eb479b = 1;
      }
      uVar8 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
      auVar30 = /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar8,0x40,0);
      **(undefined8 **)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xb8) = uVar8;
      return auVar30;
    }
    puVar17 = (undefined8 *)0x3d73388;
  }
  auVar29._8_8_ = *puVar17;
  auVar29._0_8_ = lVar9;
  plVar14 = (long *)0x0;
  pplVar5 = &plStack_70;
  ppppuVar24 = &pppuStack_50;
code_r0x029d2c70:
  do {
    lVar9 = auVar29._8_8_;
    auVar28._0_8_ = auVar29._0_8_;
    *(long *)((long)pplVar5 + -0x40) = lVar22;
    *(ulong *)((long)pplVar5 + -0x38) = uVar21;
    *(long **)((long)pplVar5 + -0x30) = param_1;
    *(long **)((long)pplVar5 + -0x28) = plVar19;
    *(long *)((long)pplVar5 + -0x20) = auVar31._0_8_;
    *(long **)((long)pplVar5 + -0x18) = plVar10;
    *(undefined8 *****)((long)pplVar5 + -0x10) = ppppuVar24;
    *(undefined **)((long)pplVar5 + -8) = puStack_78;
    lVar13 = lVar9;
    if (lVar9 == 0) {
code_r0x029d2d58:
      auVar28._8_8_ = lVar13;
      return auVar28;
    }
    uVar21 = auVar28._0_8_[2];
    if (uVar21 == 0) {
      func_0x00f78af4();
      lVar9 = auVar31._0_8_;
      plVar16 = param_1;
      goto code_r0x029d2d74;
    }
    uVar2 = *(uint *)(auVar28._0_8_ + 4);
    lVar22 = (long)(int)uVar2;
    uVar1 = *(uint *)(lVar9 + 0x10);
    plVar19 = (long *)(ulong)uVar1;
    uVar20 = uVar1 + uVar2;
    plVar16 = (long *)(ulong)uVar20;
    if ((int)uVar20 < *(int *)(uVar21 + 0x18)) {
      if ((int)uVar1 < 3) {
        if (0 < (int)uVar1) {
          plVar14 = (long *)0x0;
          uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(lVar9,0);
          if (*(uint *)(uVar21 + 0x18) <= uVar2) {
code_r0x029d2d74:
            uVar8 = func_0x00f78b24();
            puVar25 = &System_Text_StringBuilder__AppendHelper;
            auVar29 = func_0x00f78ac0(uVar8,0);
            goto code_r0x029d2d80;
          }
          *(undefined2 *)(uVar21 + lVar22 * 2 + 0x20) = uVar6;
          lVar13 = extraout_x1_01;
          if (1 < uVar1) {
            plVar14 = (long *)0x0;
            uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(lVar9,1);
            if (*(uint *)(uVar21 + 0x18) <= uVar2 + 1) goto code_r0x029d2d74;
            *(undefined2 *)(uVar21 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar6;
            lVar13 = extraout_x1_02;
          }
        }
      }
      else {
        iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
        if (*(uint *)(uVar21 + 0x18) <= uVar2) goto code_r0x029d2d74;
        /*System.String$$wstrcpy*/ func_0x029cb054(uVar21 + lVar22 * 2 + 0x20,lVar9 + iVar7,plVar19,0);
        lVar13 = extraout_x1_00;
      }
      *(uint *)(auVar28._0_8_ + 4) = uVar20;
      goto code_r0x029d2d58;
    }
    puVar25 = &UNK_029d2cf4;
code_r0x029d2d80:
    lVar13 = auVar29._8_8_;
    auVar31._0_8_ = auVar29._0_8_;
    puVar4 = (undefined1 *)((long)pplVar5 + -0x60);
    *(long *)((long)pplVar5 + -0x60) = lVar9;
    *(long **)((long)pplVar5 + -0x58) = auVar28._0_8_;
    *(undefined1 **)((long)pplVar5 + -0x50) = (undefined1 *)((long)pplVar5 + -0x10);
    *(undefined **)((long)pplVar5 + -0x48) = puVar25;
    ppppuVar24 = (undefined8 ****)((long)pplVar5 + -0x50);
    if (lVar13 == 0) {
      puVar25 = &System_Text_StringBuilder__Append;
      auVar30 = func_0x00f78af4();
      auVar26._8_8_ = auVar30._0_8_;
      auVar26._0_8_ = auVar30._8_8_;
      plVar10 = auVar28._0_8_;
code_r0x029d2dbc:
      auVar31._0_8_ = auVar26._8_8_;
      param_1 = auVar26._0_8_;
      puVar3 = puVar4 + -0x40;
      *(long *)(puVar4 + -0x40) = lVar22;
      *(ulong *)(puVar4 + -0x38) = uVar21;
      *(long **)(puVar4 + -0x30) = plVar16;
      *(long **)(puVar4 + -0x28) = plVar19;
      *(long *)(puVar4 + -0x20) = lVar9;
      *(long **)(puVar4 + -0x18) = plVar10;
      *(undefined8 *****)(puVar4 + -0x10) = ppppuVar24;
      *(undefined **)(puVar4 + -8) = puVar25;
      puVar23 = puVar4 + -0x10;
      uVar21 = 0x3eb9000;
      plVar10 = param_1;
      plVar16 = plVar15;
      if ((bRam0000000003eb948a & 1) == 0) {
        func_0x00f78a20(0x3d208b0);
        bRam0000000003eb948a = 1;
        plVar10 = extraout_x1_03;
      }
      iVar7 = (int)plVar14;
      plVar19 = plVar14;
      if (iVar7 < 0) {
code_r0x029d2e7c:
        uVar8 = func_0x00f78a24(0x3d6de28);
        uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar8,0);
        func_0x00f78a24(0x3d1fcf8);
        plVar12 = (long *)func_0x00f78aec();
        uVar8 = 0x3d7b9d0;
code_r0x029d2ee8:
        uVar8 = func_0x00f78a24(uVar8);
        plVar16 = (long *)0x0;
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar12,uVar8,uVar11);
        uVar8 = func_0x00f78a24(0x3d5dc00);
        func_0x00f78ac0(plVar12,uVar8);
      }
      else {
        iVar18 = (int)plVar15;
        if (iVar18 < 0) {
          uVar8 = func_0x00f78a24(0x3d75fa8);
          uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar8,0);
          func_0x00f78a24(0x3d1fcf8);
          plVar12 = (long *)func_0x00f78aec();
          uVar8 = 0x3d78638;
          goto code_r0x029d2ee8;
        }
        if ((iVar18 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
code_r0x029d2e64:
          auVar31._8_8_ = plVar10;
          return auVar31;
        }
        if (param_1 != (long *)0x0) {
          if (iVar18 == 0) goto code_r0x029d2e64;
          if (iVar7 <= (int)param_1[2] - iVar18) {
            iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
            lVar9 = (long)param_1 + (long)iVar7 + ((ulong)plVar14 & 0xffffffff) * 2;
            puVar25 = &UNK_029d2e58;
            plVar10 = plVar15;
            goto code_r0x029d2b54;
          }
          goto code_r0x029d2e7c;
        }
        plVar12 = plVar15;
        if (iVar7 == 0 && iVar18 == 0) goto code_r0x029d2e64;
      }
      plVar15 = plVar16;
      func_0x00f78a24(0x3d1fcf0);
      uVar8 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d7c5a0);
      plVar14 = (long *)0x0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar8,uVar11);
      uVar11 = func_0x00f78a24(0x3d5dc00);
      uVar11 = func_0x00f78ac0(uVar8,uVar11);
      *(long **)(puVar4 + -0x60) = plVar12;
      *(undefined8 *)(puVar4 + -0x58) = uVar8;
      *(undefined1 **)(puVar4 + -0x50) = puVar23;
      *(undefined **)(puVar4 + -0x48) = &System_Text_StringBuilder__AppendLine;
      uVar8 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
      auVar29._8_8_ = uVar8;
      auVar29._0_8_ = uVar11;
      puStack_78 = *(undefined **)(puVar4 + -0x48);
      pplVar5 = (long **)(puVar4 + -0x40);
      plVar10 = *(long **)(puVar4 + -0x58);
      auVar31._0_8_ = *(long *)(puVar4 + -0x60);
      ppppuVar24 = *(undefined8 *****)(puVar4 + -0x50);
    }
    else {
      iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar9 = lVar13 + iVar7;
      plVar15 = (long *)(ulong)*(uint *)(lVar13 + 0x10);
      puVar23 = *(undefined1 **)((long)pplVar5 + -0x50);
      puVar25 = *(undefined **)((long)pplVar5 + -0x48);
      puVar3 = (undefined1 *)((long)pplVar5 + -0x40);
      plVar10 = *(long **)((long)pplVar5 + -0x60);
      auVar26._8_8_ = *(undefined8 *)((long)pplVar5 + -0x58);
      auVar26._0_8_ = plVar16;
code_r0x029d2b54:
      param_1 = auVar26._0_8_;
      pplVar5 = (long **)(puVar3 + -0x40);
      *(long *)(puVar3 + -0x40) = lVar22;
      *(ulong *)(puVar3 + -0x38) = uVar21;
      *(long **)(puVar3 + -0x30) = param_1;
      *(long **)(puVar3 + -0x28) = plVar19;
      *(long **)(puVar3 + -0x20) = plVar10;
      *(long *)(puVar3 + -0x18) = auVar26._8_8_;
      *(undefined1 **)(puVar3 + -0x10) = puVar23;
      *(undefined **)(puVar3 + -8) = puVar25;
      iVar7 = (int)plVar15;
      if (-1 < iVar7) {
        lVar13 = *(long *)(auVar31._0_8_ + 0x10);
        if (lVar13 != 0) {
          iVar18 = *(int *)(auVar31._0_8_ + 0x20);
          uVar20 = iVar18 + iVar7;
          param_1 = (long *)(ulong)uVar20;
          if ((int)uVar20 <= *(int *)(lVar13 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar13 + 0x18) - iVar18;
          uVar21 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar9,lVar13,iVar18,uVar21);
            plVar19 = plVar15;
            if (*(long *)(auVar31._0_8_ + 0x10) == 0) goto code_r0x029d2c08;
            *(int *)(auVar31._0_8_ + 0x20) =
                 (int)*(undefined8 *)(*(long *)(auVar31._0_8_ + 0x10) + 0x18);
          }
          uVar20 = iVar7 - uVar1;
          plVar15 = (long *)(ulong)uVar20;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(auVar31._0_8_,plVar15);
          lVar13 = *(long *)(auVar31._0_8_ + 0x10);
          lVar9 = lVar9 + (long)(int)uVar1 * 2;
          iVar18 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar9,lVar13,iVar18,plVar15);
          *(uint *)(auVar31._0_8_ + 0x20) = uVar20;
          auVar27._8_8_ = extraout_x1;
          auVar27._0_8_ = auVar31._0_8_;
          return auVar27;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar8 = func_0x00f78a24(0x3d6b268);
      plVar10 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar8,0);
      func_0x00f78a24(0x3d1fcf8);
      auVar31._0_8_ = func_0x00f78aec();
      uVar8 = func_0x00f78a24(0x3d7c5c8);
      plVar15 = (long *)0x0;
      plVar14 = plVar10;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(auVar31._0_8_,uVar8);
      uVar8 = func_0x00f78a24(0x3d5dbe8);
      puStack_78 = &System_Text_StringBuilder__Append;
      auVar29 = func_0x00f78ac0(auVar31._0_8_,uVar8);
      ppppuVar24 = (undefined8 ****)(puVar3 + -0x10);
    }
  } while( true );
}



// ============================================================
// RVA: 0x1454c4c | Atlas.Arcade.ArcadeSave.AppendMapKey
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */

long * Atlas_Arcade_ArcadeSave__AppendMapKey
                 (long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *unaff_x19;
  int iVar16;
  long unaff_x20;
  long *unaff_x21;
  uint uVar17;
  ulong unaff_x22;
  ulong uVar18;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined *puStack_38;
  
  auVar21._8_8_ = param_1;
  auVar21._0_8_ = param_2;
  puVar4 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4799 & 1) == 0) {
    func_0x00f78a20(0x3d6f928);
    func_0x00f78a20(0x3d6f920);
    bRam0000000003eb4799 = 1;
  }
  plVar13 = (long *)0x3eb4000;
  if (param_1 != (long *)0x0) {
    plVar13 = (long *)0x3d6f928;
    iVar6 = /*System.String$$StartsWith*/ func_0x029ce8f8(param_1,/*STR('Map_Race_')*/ uRam0000000003d6f928,0);
    if (iVar6 == 0) {
      plVar13 = (long *)0x3d6f920;
      iVar6 = /*System.String$$StartsWith*/ func_0x029ce8f8(param_1,/*STR('Map_Battle_')*/ uRam0000000003d6f920,0);
      if (iVar6 == 0) {
        if (param_2 != 0) {
          plVar13 = (long *)0x0;
          puStack_38 = unaff_x30;
          goto code_r0x029d2c70;
        }
        goto LAB_01454d20;
      }
    }
    if ((*plVar13 != 0) && (param_2 != 0)) {
      uVar17 = *(uint *)(*plVar13 + 0x10);
      plVar13 = (long *)(ulong)uVar17;
      param_4 = (long *)(ulong)((int)param_1[2] - uVar17);
      puVar4 = (undefined1 *)register0x00000008;
      plVar14 = unaff_x19;
      uVar18 = unaff_x22;
      goto code_r0x029d2dbc;
    }
  }
LAB_01454d20:
  unaff_x21 = plVar13;
  auVar21 = func_0x00f78af4();
  lVar12 = auVar21._8_8_;
  plVar13 = auVar21._0_8_;
  puStack_38 = &Atlas_Arcade_ArcadeSave__AppendGameTypeKey;
  if ((bRam0000000003eb479a & 1) == 0) {
    func_0x00f78a20(0x3d72098);
    func_0x00f78a20(0x3d73388);
    plVar13 = (long *)func_0x00f78a20(0x3d69950);
    bRam0000000003eb479a = 1;
  }
  iVar6 = auVar21._0_4_;
  if (iVar6 == 8) {
    if (lVar12 == 0) goto code_r0x01454de4;
    puVar15 = (undefined8 *)0x3d72098;
  }
  else if (iVar6 == 7) {
    if (lVar12 == 0) goto code_r0x01454de4;
    puVar15 = (undefined8 *)0x3d69950;
  }
  else {
    if (iVar6 != 6) {
      return plVar13;
    }
    if (lVar12 == 0) {
code_r0x01454de4:
      func_0x00f78af4();
      if ((bRam0000000003eb479b & 1) == 0) {
        func_0x00f78a20(0x3d1fcc0);
        func_0x00f78a20(0x3d24dd8);
        bRam0000000003eb479b = 1;
      }
      uVar9 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
      plVar13 = (long *)/*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar9,0x40,0);
      **(undefined8 **)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xb8) = uVar9;
      return plVar13;
    }
    puVar15 = (undefined8 *)0x3d73388;
  }
  auVar21._8_8_ = *puVar15;
  auVar21._0_8_ = lVar12;
  plVar13 = (long *)0x0;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  unaff_x19 = param_1;
  unaff_x20 = param_2;
  unaff_x29 = puVar4;
code_r0x029d2c70:
  do {
    lVar12 = auVar21._8_8_;
    plVar14 = auVar21._0_8_;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_38;
    if (lVar12 == 0) {
      return plVar14;
    }
    unaff_x23 = plVar14[2];
    if (unaff_x23 == 0) {
      func_0x00f78af4();
      uVar18 = unaff_x22;
code_r0x029d2d74:
      uVar9 = func_0x00f78b24();
      puVar20 = &System_Text_StringBuilder__AppendHelper;
      auVar21 = func_0x00f78ac0(uVar9,0);
    }
    else {
      uVar2 = *(uint *)(plVar14 + 4);
      unaff_x24 = (long)(int)uVar2;
      uVar1 = *(uint *)(lVar12 + 0x10);
      unaff_x21 = (long *)(ulong)uVar1;
      uVar17 = uVar1 + uVar2;
      uVar18 = (ulong)uVar17;
      unaff_x20 = lVar12;
      if ((int)uVar17 < *(int *)(unaff_x23 + 0x18)) {
        if ((int)uVar1 < 3) {
          if ((int)uVar1 < 1) goto code_r0x029d2d54;
          plVar13 = (long *)0x0;
          uVar5 = /*System.String$$get_Chars*/ func_0x029c5420(lVar12,0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            *(undefined2 *)(unaff_x23 + unaff_x24 * 2 + 0x20) = uVar5;
            if (uVar1 < 2) {
code_r0x029d2d54:
              *(uint *)(plVar14 + 4) = uVar17;
              return plVar14;
            }
            plVar13 = (long *)0x0;
            uVar5 = /*System.String$$get_Chars*/ func_0x029c5420(lVar12,1);
            if (uVar2 + 1 < *(uint *)(unaff_x23 + 0x18)) {
              *(undefined2 *)(unaff_x23 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar5;
              goto code_r0x029d2d54;
            }
          }
        }
        else {
          iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            /*System.String$$wstrcpy*/ func_0x029cb054(unaff_x23 + unaff_x24 * 2 + 0x20,lVar12 + iVar6,unaff_x21,0);
            goto code_r0x029d2d54;
          }
        }
        goto code_r0x029d2d74;
      }
      puVar20 = &UNK_029d2cf4;
    }
    lVar12 = auVar21._8_8_;
    plVar7 = auVar21._0_8_;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(long *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x58) = plVar14;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = puVar20;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if (lVar12 != 0) {
      iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar8 = lVar12 + iVar6;
      param_4 = (long *)(ulong)*(uint *)(lVar12 + 0x10);
      puVar19 = *(undefined1 **)((long)register0x00000008 + -0x50);
      puVar20 = *(undefined **)((long)register0x00000008 + -0x48);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
      plVar13 = *(long **)((long)register0x00000008 + -0x60);
      auVar21._8_8_ = uVar18;
      auVar21._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x58);
code_r0x029d2b54:
      unaff_x22 = auVar21._8_8_;
      register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x40);
      *(long *)(puVar3 + -0x40) = unaff_x24;
      *(ulong *)(puVar3 + -0x38) = unaff_x23;
      *(ulong *)(puVar3 + -0x30) = unaff_x22;
      *(long **)(puVar3 + -0x28) = unaff_x21;
      *(long **)(puVar3 + -0x20) = plVar13;
      *(long *)(puVar3 + -0x18) = auVar21._0_8_;
      *(undefined1 **)(puVar3 + -0x10) = puVar19;
      *(undefined **)(puVar3 + -8) = puVar20;
      iVar6 = (int)param_4;
      if (-1 < iVar6) {
        lVar12 = plVar7[2];
        if (lVar12 != 0) {
          iVar16 = (int)plVar7[4];
          uVar17 = iVar16 + iVar6;
          unaff_x22 = (ulong)uVar17;
          if ((int)uVar17 <= *(int *)(lVar12 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar12 + 0x18) - iVar16;
          unaff_x23 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar8,lVar12,iVar16,unaff_x23);
            unaff_x21 = param_4;
            if (plVar7[2] == 0) goto code_r0x029d2c08;
            *(int *)(plVar7 + 4) = (int)*(undefined8 *)(plVar7[2] + 0x18);
          }
          uVar17 = iVar6 - uVar1;
          param_4 = (long *)(ulong)uVar17;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar7,param_4);
          lVar12 = plVar7[2];
          lVar8 = lVar8 + (long)(int)uVar1 * 2;
          iVar16 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar8,lVar12,iVar16,param_4);
          *(uint *)(plVar7 + 4) = uVar17;
          return plVar7;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar9 = func_0x00f78a24(0x3d6b268);
      unaff_x19 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
      func_0x00f78a24(0x3d1fcf8);
      unaff_x20 = func_0x00f78aec();
      uVar9 = func_0x00f78a24(0x3d7c5c8);
      param_4 = (long *)0x0;
      plVar13 = unaff_x19;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(unaff_x20,uVar9);
      uVar9 = func_0x00f78a24(0x3d5dbe8);
      puStack_38 = &System_Text_StringBuilder__Append;
      auVar21 = func_0x00f78ac0(unaff_x20,uVar9);
      unaff_x29 = puVar3 + -0x10;
      goto code_r0x029d2c70;
    }
    unaff_x30 = &System_Text_StringBuilder__Append;
    auVar21 = func_0x00f78af4();
code_r0x029d2dbc:
    unaff_x22 = auVar21._8_8_;
    plVar7 = auVar21._0_8_;
    puVar3 = puVar4 + -0x40;
    *(long *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(ulong *)(puVar4 + -0x30) = uVar18;
    *(long **)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = unaff_x20;
    *(long **)(puVar4 + -0x18) = plVar14;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined **)(puVar4 + -8) = unaff_x30;
    puVar19 = puVar4 + -0x10;
    unaff_x23 = 0x3eb9000;
    plVar14 = param_4;
    if ((bRam0000000003eb948a & 1) == 0) {
      func_0x00f78a20(0x3d208b0);
      bRam0000000003eb948a = 1;
    }
    iVar6 = (int)plVar13;
    unaff_x21 = plVar13;
    if (iVar6 < 0) {
code_r0x029d2e7c:
      uVar9 = func_0x00f78a24(0x3d6de28);
      uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
      func_0x00f78a24(0x3d1fcf8);
      plVar11 = (long *)func_0x00f78aec();
      uVar9 = 0x3d7b9d0;
code_r0x029d2ee8:
      uVar9 = func_0x00f78a24(uVar9);
      plVar14 = (long *)0x0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar11,uVar9,uVar10);
      uVar9 = func_0x00f78a24(0x3d5dc00);
      func_0x00f78ac0(plVar11,uVar9);
    }
    else {
      iVar16 = (int)param_4;
      if (iVar16 < 0) {
        uVar9 = func_0x00f78a24(0x3d75fa8);
        uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
        func_0x00f78a24(0x3d1fcf8);
        plVar11 = (long *)func_0x00f78aec();
        uVar9 = 0x3d78638;
        goto code_r0x029d2ee8;
      }
      if ((iVar16 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
        return plVar7;
      }
      if (unaff_x22 != 0) {
        if (iVar16 == 0) {
          return plVar7;
        }
        if (iVar6 <= *(int *)(unaff_x22 + 0x10) - iVar16) {
          iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar8 = unaff_x22 + (long)iVar6 + ((ulong)plVar13 & 0xffffffff) * 2;
          puVar20 = &UNK_029d2e58;
          plVar13 = param_4;
          goto code_r0x029d2b54;
        }
        goto code_r0x029d2e7c;
      }
      plVar11 = param_4;
      if (iVar6 == 0 && iVar16 == 0) {
        return plVar7;
      }
    }
    param_4 = plVar14;
    func_0x00f78a24(0x3d1fcf0);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d7c5a0);
    plVar13 = (long *)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar10);
    uVar10 = func_0x00f78a24(0x3d5dc00);
    uVar10 = func_0x00f78ac0(uVar9,uVar10);
    *(long **)(puVar4 + -0x60) = plVar11;
    *(undefined8 *)(puVar4 + -0x58) = uVar9;
    *(undefined1 **)(puVar4 + -0x50) = puVar19;
    *(undefined **)(puVar4 + -0x48) = &System_Text_StringBuilder__AppendLine;
    uVar9 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
    auVar21._8_8_ = uVar9;
    auVar21._0_8_ = uVar10;
    puStack_38 = *(undefined **)(puVar4 + -0x48);
    register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x40);
    unaff_x19 = *(long **)(puVar4 + -0x58);
    unaff_x20 = *(long *)(puVar4 + -0x60);
    unaff_x29 = *(undefined1 **)(puVar4 + -0x50);
  } while( true );
}



// ============================================================
// RVA: 0x1454d24 | Atlas.Arcade.ArcadeSave.AppendGameTypeKey
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */

long Atlas_Arcade_ArcadeSave__AppendGameTypeKey
               (long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong unaff_x19;
  int iVar15;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar16;
  uint uVar17;
  ulong unaff_x22;
  ulong uVar18;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  lVar7 = param_1;
  if ((bRam0000000003eb479a & 1) == 0) {
    func_0x00f78a20(0x3d72098);
    func_0x00f78a20(0x3d73388);
    lVar7 = func_0x00f78a20(0x3d69950);
    bRam0000000003eb479a = 1;
  }
  iVar6 = (int)param_1;
  if (iVar6 == 8) {
    if (param_2 == 0) goto LAB_01454de4;
    plVar14 = (long *)0x3d72098;
  }
  else if (iVar6 == 7) {
    if (param_2 == 0) goto LAB_01454de4;
    plVar14 = (long *)0x3d69950;
  }
  else {
    if (iVar6 != 6) {
      return lVar7;
    }
    if (param_2 == 0) {
LAB_01454de4:
      func_0x00f78af4();
      if ((bRam0000000003eb479b & 1) == 0) {
        func_0x00f78a20(0x3d1fcc0);
        func_0x00f78a20(0x3d24dd8);
        bRam0000000003eb479b = 1;
      }
      uVar9 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
      lVar7 = /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar9,0x40,0);
      **(undefined8 **)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xb8) = uVar9;
      return lVar7;
    }
    plVar14 = (long *)0x3d73388;
  }
  lVar7 = *plVar14;
  uVar12 = 0;
  puVar3 = (undefined1 *)register0x00000008;
code_r0x029d2c70:
  do {
    auVar21._8_8_ = lVar7;
    auVar21._0_8_ = param_2;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(ulong *)(puVar3 + -0x38) = unaff_x23;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    if (lVar7 == 0) {
      return param_2;
    }
    unaff_x23 = *(ulong *)(param_2 + 0x10);
    if (unaff_x23 == 0) {
      func_0x00f78af4();
      lVar7 = unaff_x20;
      uVar16 = unaff_x21;
      uVar18 = unaff_x22;
code_r0x029d2d74:
      uVar9 = func_0x00f78b24();
      puVar20 = &System_Text_StringBuilder__AppendHelper;
      auVar21 = func_0x00f78ac0(uVar9,0);
      unaff_x21 = uVar12;
      uVar13 = param_4;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x20);
      unaff_x24 = (long)(int)uVar2;
      uVar1 = *(uint *)(lVar7 + 0x10);
      uVar16 = (ulong)uVar1;
      uVar17 = uVar1 + uVar2;
      uVar18 = (ulong)uVar17;
      if ((int)uVar17 < *(int *)(unaff_x23 + 0x18)) {
        if ((int)uVar1 < 3) {
          if ((int)uVar1 < 1) goto code_r0x029d2d54;
          uVar12 = 0;
          uVar5 = /*System.String$$get_Chars*/ func_0x029c5420(lVar7,0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            *(undefined2 *)(unaff_x23 + unaff_x24 * 2 + 0x20) = uVar5;
            if (uVar1 < 2) {
code_r0x029d2d54:
              *(uint *)(param_2 + 0x20) = uVar17;
              return param_2;
            }
            uVar12 = 0;
            uVar5 = /*System.String$$get_Chars*/ func_0x029c5420(lVar7,1);
            if (uVar2 + 1 < *(uint *)(unaff_x23 + 0x18)) {
              *(undefined2 *)(unaff_x23 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar5;
              goto code_r0x029d2d54;
            }
          }
        }
        else {
          iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            /*System.String$$wstrcpy*/ func_0x029cb054(unaff_x23 + unaff_x24 * 2 + 0x20,lVar7 + iVar6,uVar16,0);
            goto code_r0x029d2d54;
          }
        }
        goto code_r0x029d2d74;
      }
      puVar20 = &UNK_029d2cf4;
      unaff_x21 = uVar12;
      uVar13 = param_4;
    }
    lVar11 = auVar21._8_8_;
    lVar8 = auVar21._0_8_;
    *(long *)(puVar3 + -0x60) = lVar7;
    *(long *)(puVar3 + -0x58) = param_2;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = puVar20;
    if (lVar11 != 0) {
      iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar7 = lVar11 + iVar6;
      uVar13 = (ulong)*(uint *)(lVar11 + 0x10);
      puVar19 = *(undefined1 **)(puVar3 + -0x50);
      puVar20 = *(undefined **)(puVar3 + -0x48);
      puVar4 = puVar3 + -0x40;
      auVar22._8_8_ = uVar18;
      auVar22._0_8_ = *(undefined8 *)(puVar3 + -0x58);
      uVar12 = *(ulong *)(puVar3 + -0x60);
      unaff_x21 = uVar16;
code_r0x029d2b54:
      unaff_x22 = auVar22._8_8_;
      *(long *)(puVar4 + -0x40) = unaff_x24;
      *(ulong *)(puVar4 + -0x38) = unaff_x23;
      *(ulong *)(puVar4 + -0x30) = unaff_x22;
      *(ulong *)(puVar4 + -0x28) = unaff_x21;
      *(ulong *)(puVar4 + -0x20) = uVar12;
      *(long *)(puVar4 + -0x18) = auVar22._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar19;
      *(undefined **)(puVar4 + -8) = puVar20;
      unaff_x29 = puVar4 + -0x10;
      iVar6 = (int)uVar13;
      if (-1 < iVar6) {
        lVar11 = *(long *)(lVar8 + 0x10);
        if (lVar11 != 0) {
          iVar15 = *(int *)(lVar8 + 0x20);
          uVar17 = iVar15 + iVar6;
          unaff_x22 = (ulong)uVar17;
          if ((int)uVar17 <= *(int *)(lVar11 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar11 + 0x18) - iVar15;
          unaff_x23 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar7,lVar11,iVar15,unaff_x23);
            unaff_x21 = uVar13;
            if (*(long *)(lVar8 + 0x10) == 0) goto code_r0x029d2c08;
            *(int *)(lVar8 + 0x20) = (int)*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x18);
          }
          uVar17 = iVar6 - uVar1;
          uVar13 = (ulong)uVar17;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(lVar8,uVar13);
          lVar11 = *(long *)(lVar8 + 0x10);
          lVar7 = lVar7 + (long)(int)uVar1 * 2;
          iVar15 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar7,lVar11,iVar15,uVar13);
          *(uint *)(lVar8 + 0x20) = uVar17;
          return lVar8;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar9 = func_0x00f78a24(0x3d6b268);
      unaff_x19 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
      func_0x00f78a24(0x3d1fcf8);
      unaff_x20 = func_0x00f78aec();
      uVar9 = func_0x00f78a24(0x3d7c5c8);
      param_4 = 0;
      uVar12 = unaff_x19;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(unaff_x20,uVar9);
      uVar9 = func_0x00f78a24(0x3d5dbe8);
      unaff_x30 = &System_Text_StringBuilder__Append;
      auVar21 = func_0x00f78ac0(unaff_x20,uVar9);
      lVar7 = auVar21._8_8_;
      param_2 = auVar21._0_8_;
      puVar3 = puVar4 + -0x40;
      goto code_r0x029d2c70;
    }
    auVar22 = func_0x00f78af4();
    unaff_x22 = auVar22._8_8_;
    lVar8 = auVar22._0_8_;
    puVar4 = puVar3 + -0xa0;
    *(long *)(puVar3 + -0xa0) = unaff_x24;
    *(ulong *)(puVar3 + -0x98) = unaff_x23;
    *(ulong *)(puVar3 + -0x90) = uVar18;
    *(ulong *)(puVar3 + -0x88) = uVar16;
    *(long *)(puVar3 + -0x80) = lVar7;
    *(long *)(puVar3 + -0x78) = param_2;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x50;
    *(undefined **)(puVar3 + -0x68) = &System_Text_StringBuilder__Append;
    puVar19 = puVar3 + -0x70;
    unaff_x23 = 0x3eb9000;
    param_4 = uVar13;
    if ((bRam0000000003eb948a & 1) == 0) {
      func_0x00f78a20(0x3d208b0);
      bRam0000000003eb948a = 1;
    }
    iVar6 = (int)unaff_x21;
    if (iVar6 < 0) {
code_r0x029d2e7c:
      uVar9 = func_0x00f78a24(0x3d6de28);
      uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar13 = func_0x00f78aec();
      uVar9 = 0x3d7b9d0;
code_r0x029d2ee8:
      uVar9 = func_0x00f78a24(uVar9);
      param_4 = 0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar13,uVar9,uVar10);
      uVar9 = func_0x00f78a24(0x3d5dc00);
      func_0x00f78ac0(uVar13,uVar9);
    }
    else {
      iVar15 = (int)uVar13;
      if (iVar15 < 0) {
        uVar9 = func_0x00f78a24(0x3d75fa8);
        uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
        func_0x00f78a24(0x3d1fcf8);
        uVar13 = func_0x00f78aec();
        uVar9 = 0x3d78638;
        goto code_r0x029d2ee8;
      }
      if ((iVar15 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
        return lVar8;
      }
      if (unaff_x22 != 0) {
        if (iVar15 == 0) {
          return lVar8;
        }
        if (iVar6 <= *(int *)(unaff_x22 + 0x10) - iVar15) {
          iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar7 = unaff_x22 + (unaff_x21 & 0xffffffff) * 2 + (long)iVar6;
          puVar20 = &UNK_029d2e58;
          uVar12 = uVar13;
          goto code_r0x029d2b54;
        }
        goto code_r0x029d2e7c;
      }
      if (iVar6 == 0 && iVar15 == 0) {
        return lVar8;
      }
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d7c5a0);
    uVar12 = 0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar10);
    uVar10 = func_0x00f78a24(0x3d5dc00);
    param_2 = func_0x00f78ac0(uVar9,uVar10);
    *(ulong *)(puVar3 + -0xc0) = uVar13;
    *(undefined8 *)(puVar3 + -0xb8) = uVar9;
    *(undefined1 **)(puVar3 + -0xb0) = puVar19;
    *(undefined **)(puVar3 + -0xa8) = &System_Text_StringBuilder__AppendLine;
    lVar7 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
    unaff_x29 = *(undefined1 **)(puVar3 + -0xb0);
    unaff_x30 = *(undefined **)(puVar3 + -0xa8);
    unaff_x20 = *(long *)(puVar3 + -0xc0);
    unaff_x19 = *(ulong *)(puVar3 + -0xb8);
    puVar3 = puVar3 + -0xa0;
  } while( true );
}



// ============================================================
// RVA: 0x1454de8 | Atlas.Arcade.ArcadeSave..cctor
// ============================================================

void Atlas_Arcade_ArcadeSave___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb479b & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d24dd8);
    bRam0000000003eb479b = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar1,0x40,0);
  **(undefined8 **)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xb8) = uVar1;
  return;
}



