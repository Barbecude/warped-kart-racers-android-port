// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ArcadeModeMetagameData

// ============================================================
// RVA: 0x1453718 | Atlas.UI.ArcadeModeMetagameData..ctor
// ============================================================

void Atlas_UI_ArcadeModeMetagameData___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



// ============================================================
// RVA: 0x1453750 | Atlas.UI.ArcadeModeMetagameData.get_ID
// ============================================================

undefined8 Atlas_UI_ArcadeModeMetagameData__get_ID(long param_1)

{
  undefined1 **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  lVar2 = func_0x00f78af4();
  puStack_30 = (undefined1 *)&puStack_20;
  puStack_18 = &Atlas_UI_ArcadeModeMetagameData__IconRef;
  if (*(long *)(lVar2 + 0x10) != 0) {
    return *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x30);
  }
  puStack_20 = &stack0xfffffffffffffff0;
  lVar2 = func_0x00f78af4();
  puStack_40 = (undefined1 *)&puStack_30;
  puStack_28 = &Atlas_UI_ArcadeModeMetagameData__TileRef;
  if (*(long *)(lVar2 + 0x10) != 0) {
    return *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x38);
  }
  lVar2 = func_0x00f78af4();
  ppuVar5 = &puStack_40;
  puStack_38 = &Atlas_UI_ArcadeModeMetagameData__get_DisplayName;
  if ((*(long *)(lVar2 + 0x10) == 0) || (lVar3 = *(long *)(lVar2 + 0x18), lVar3 == 0)) {
    lVar2 = func_0x00f78af4();
    if ((*(long *)(lVar2 + 0x10) == 0) || (lVar3 = *(long *)(lVar2 + 0x18), lVar3 == 0)) {
      lVar2 = func_0x00f78af4();
      return *(undefined8 *)(lVar2 + 0x30);
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x68);
    ppuVar1 = &puStack_40;
    puVar6 = &Atlas_UI_ArcadeModeMetagameData__get_ModeDescription;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x20);
    ppuVar1 = &puStack_30;
    puVar6 = &Atlas_UI_ArcadeModeMetagameData__get_DisplayName;
    ppuVar5 = &puStack_30;
    puStack_40 = (undefined1 *)&puStack_30;
  }
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar5;
  *(undefined **)((long)ppuVar1 + -8) = puVar6;
  *(undefined8 *)((long)ppuVar1 + -0x18) = 0;
  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar3,uVar4,(undefined1 *)((long)ppuVar1 + -0x18));
  return *(undefined8 *)((long)ppuVar1 + -0x18);
}



// ============================================================
// RVA: 0x1453770 | Atlas.UI.ArcadeModeMetagameData.IconRef
// ============================================================

undefined8 Atlas_UI_ArcadeModeMetagameData__IconRef(long param_1)

{
  undefined1 **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
  }
  lVar2 = func_0x00f78af4();
  puStack_30 = (undefined1 *)&puStack_20;
  puStack_18 = &Atlas_UI_ArcadeModeMetagameData__TileRef;
  if (*(long *)(lVar2 + 0x10) != 0) {
    return *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x38);
  }
  puStack_20 = &stack0xfffffffffffffff0;
  lVar2 = func_0x00f78af4();
  ppuVar5 = &puStack_30;
  puStack_28 = &Atlas_UI_ArcadeModeMetagameData__get_DisplayName;
  if ((*(long *)(lVar2 + 0x10) == 0) || (lVar3 = *(long *)(lVar2 + 0x18), lVar3 == 0)) {
    lVar2 = func_0x00f78af4();
    if ((*(long *)(lVar2 + 0x10) == 0) || (lVar3 = *(long *)(lVar2 + 0x18), lVar3 == 0)) {
      lVar2 = func_0x00f78af4();
      return *(undefined8 *)(lVar2 + 0x30);
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x68);
    ppuVar1 = &puStack_30;
    puVar6 = &Atlas_UI_ArcadeModeMetagameData__get_ModeDescription;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x20);
    ppuVar1 = &puStack_20;
    puVar6 = &Atlas_UI_ArcadeModeMetagameData__get_DisplayName;
    ppuVar5 = &puStack_20;
    puStack_30 = (undefined1 *)&puStack_20;
  }
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar5;
  *(undefined **)((long)ppuVar1 + -8) = puVar6;
  *(undefined8 *)((long)ppuVar1 + -0x18) = 0;
  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar3,uVar4,(undefined1 *)((long)ppuVar1 + -0x18));
  return *(undefined8 *)((long)ppuVar1 + -0x18);
}



// ============================================================
// RVA: 0x1453790 | Atlas.UI.ArcadeModeMetagameData.TileRef
// ============================================================

undefined8 Atlas_UI_ArcadeModeMetagameData__TileRef(long param_1)

{
  undefined1 **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
  }
  lVar2 = func_0x00f78af4();
  ppuVar5 = &puStack_20;
  puStack_18 = &Atlas_UI_ArcadeModeMetagameData__get_DisplayName;
  if ((*(long *)(lVar2 + 0x10) == 0) || (lVar3 = *(long *)(lVar2 + 0x18), lVar3 == 0)) {
    puStack_20 = &stack0xfffffffffffffff0;
    lVar2 = func_0x00f78af4();
    if ((*(long *)(lVar2 + 0x10) == 0) || (lVar3 = *(long *)(lVar2 + 0x18), lVar3 == 0)) {
      lVar2 = func_0x00f78af4();
      return *(undefined8 *)(lVar2 + 0x30);
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x68);
    ppuVar1 = &puStack_20;
    puVar6 = &Atlas_UI_ArcadeModeMetagameData__get_ModeDescription;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x20);
    ppuVar1 = (undefined1 **)&stack0xfffffffffffffff0;
    puVar6 = &Atlas_UI_ArcadeModeMetagameData__get_DisplayName;
    ppuVar5 = (undefined1 **)&stack0xfffffffffffffff0;
    puStack_20 = &stack0xfffffffffffffff0;
  }
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar5;
  *(undefined **)((long)ppuVar1 + -8) = puVar6;
  *(undefined8 *)((long)ppuVar1 + -0x18) = 0;
  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar3,uVar4,(undefined1 *)((long)ppuVar1 + -0x18));
  return *(undefined8 *)((long)ppuVar1 + -0x18);
}



// ============================================================
// RVA: 0x14537b0 | Atlas.UI.ArcadeModeMetagameData.get_DisplayName
// ============================================================

undefined8 Atlas_UI_ArcadeModeMetagameData__get_DisplayName(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *unaff_x29;
  undefined1 *puVar4;
  undefined *unaff_x30;
  
  puVar4 = &stack0xfffffffffffffff0;
  if ((*(long *)(param_1 + 0x10) == 0) || (lVar1 = *(long *)(param_1 + 0x18), lVar1 == 0)) {
    lVar2 = func_0x00f78af4();
    if ((*(long *)(lVar2 + 0x10) == 0) || (lVar1 = *(long *)(lVar2 + 0x18), lVar1 == 0)) {
      lVar1 = func_0x00f78af4();
      return *(undefined8 *)(lVar1 + 0x30);
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x68);
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = &Atlas_UI_ArcadeModeMetagameData__get_ModeDescription;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
    puVar4 = unaff_x29;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar4;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0;
  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar1,uVar3,(undefined1 *)((long)register0x00000008 + -0x18));
  return *(undefined8 *)((long)register0x00000008 + -0x18);
}



// ============================================================
// RVA: 0x14537dc | Atlas.UI.ArcadeModeMetagameData.get_ModeDescription
// ============================================================

undefined8 Atlas_UI_ArcadeModeMetagameData__get_ModeDescription(long param_1)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uStack_18 = 0;
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),
                    &uStack_18);
    return uStack_18;
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x30);
}



