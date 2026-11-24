// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.MapMetagameData

// ============================================================
// RVA: 0x148d608 | Atlas.UI.MapMetagameData..ctor
// ============================================================

void Atlas_UI_MapMetagameData___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  return;
}



// ============================================================
// RVA: 0x148d650 | Atlas.UI.MapMetagameData.get_ID
// ============================================================

long Atlas_UI_MapMetagameData__get_ID(long param_1)

{
  undefined1 **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  lVar2 = func_0x00f78af4();
  puStack_30 = (undefined1 *)&puStack_20;
  puStack_18 = &Atlas_UI_MapMetagameData__LargeMapSprite;
  if ((*(long *)(lVar2 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + 0x68), lVar2 != 0)) {
    return *(long *)(lVar2 + 0x18);
  }
  puStack_20 = &stack0xfffffffffffffff0;
  lVar2 = func_0x00f78af4();
  puStack_40 = (undefined1 *)&puStack_30;
  puStack_28 = &Atlas_UI_MapMetagameData__SmallMapSplineRef;
  if (*(long *)(lVar2 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar2 + 0x10) + 0x78);
  }
  lVar2 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_MapMetagameData__IPMetagameData;
  ppuVar1 = &puStack_30;
  if ((bRam0000000003eb497d & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb497d = 1;
    ppuVar1 = (undefined1 **)puStack_40;
  }
  puStack_40 = (undefined1 *)ppuVar1;
  lVar3 = *(long *)(lVar2 + 0x20);
  if (lVar3 == 0) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      lVar2 = func_0x00f78af4();
      puStack_68 = &Atlas_UI_MapMetagameData__GameContextMetagameData;
      ppuStack_70 = &puStack_40;
      if ((bRam0000000003eb497e & 1) == 0) {
        func_0x00f78a20(0x3d2dc20);
        func_0x00f78a20(0x3d21b30);
        bRam0000000003eb497e = 1;
      }
      lVar3 = *(long *)(lVar2 + 0x28);
      if (lVar3 == 0) {
        if (*(long *)(lVar2 + 0x10) == 0) {
          lVar2 = func_0x00f78af4();
          puStack_a8 = &Atlas_UI_MapMetagameData__get_DisplayName;
          ppuStack_b0 = &ppuStack_70;
          if ((*(long *)(lVar2 + 0x10) != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
            puStack_a8 = &Atlas_UI_MapMetagameData__get_DisplayName;
            lStack_b8 = 0;
            /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar2 + 0x18),*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x30),
                            &lStack_b8);
            return lStack_b8;
          }
          lVar2 = func_0x00f78af4();
          return *(long *)(lVar2 + 0x50);
        }
        lVar3 = /*Atlas.Definitions.MapDefinition$$get_GameContextDefinitionDefinitionRef*/ func_0x0148d584(*(long *)(lVar2 + 0x10),0);
        uVar4 = *(undefined8 *)(lVar3 + 8);
        uVar5 = *(undefined8 *)(lVar2 + 0x18);
        uVar6 = *(undefined8 *)(lVar2 + 0x30);
        lVar3 = func_0x00f78aec(/*Atlas.UI.GameContextMetagameData_TypeInfo*/ uRam0000000003d21b30);
        Atlas_UI_GameContextMetagameData___ctor(lVar3,uVar4,uVar5,uVar6,0);
        *(long *)(lVar2 + 0x28) = lVar3;
      }
      return lVar3;
    }
    lVar3 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar2 + 0x10),0);
    uVar4 = *(undefined8 *)(lVar3 + 8);
    lVar3 = func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(lVar3,uVar4,0);
    *(long *)(lVar2 + 0x20) = lVar3;
  }
  return lVar3;
}



// ============================================================
// RVA: 0x148d670 | Atlas.UI.MapMetagameData.LargeMapSprite
// ============================================================

long Atlas_UI_MapMetagameData__LargeMapSprite(long param_1)

{
  undefined1 **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x68), lVar2 != 0)) {
    return *(long *)(lVar2 + 0x18);
  }
  lVar2 = func_0x00f78af4();
  puStack_30 = (undefined1 *)&puStack_20;
  puStack_18 = &Atlas_UI_MapMetagameData__SmallMapSplineRef;
  if (*(long *)(lVar2 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar2 + 0x10) + 0x78);
  }
  puStack_20 = &stack0xfffffffffffffff0;
  lVar2 = func_0x00f78af4();
  puStack_28 = &Atlas_UI_MapMetagameData__IPMetagameData;
  ppuVar1 = &puStack_20;
  if ((bRam0000000003eb497d & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb497d = 1;
    ppuVar1 = (undefined1 **)puStack_30;
  }
  puStack_30 = (undefined1 *)ppuVar1;
  lVar3 = *(long *)(lVar2 + 0x20);
  if (lVar3 == 0) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      lVar2 = func_0x00f78af4();
      puStack_58 = &Atlas_UI_MapMetagameData__GameContextMetagameData;
      ppuStack_60 = &puStack_30;
      if ((bRam0000000003eb497e & 1) == 0) {
        func_0x00f78a20(0x3d2dc20);
        func_0x00f78a20(0x3d21b30);
        bRam0000000003eb497e = 1;
      }
      lVar3 = *(long *)(lVar2 + 0x28);
      if (lVar3 == 0) {
        if (*(long *)(lVar2 + 0x10) == 0) {
          lVar2 = func_0x00f78af4();
          puStack_98 = &Atlas_UI_MapMetagameData__get_DisplayName;
          ppuStack_a0 = &ppuStack_60;
          if ((*(long *)(lVar2 + 0x10) != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
            puStack_98 = &Atlas_UI_MapMetagameData__get_DisplayName;
            lStack_a8 = 0;
            /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar2 + 0x18),*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x30),
                            &lStack_a8);
            return lStack_a8;
          }
          lVar2 = func_0x00f78af4();
          return *(long *)(lVar2 + 0x50);
        }
        lVar3 = /*Atlas.Definitions.MapDefinition$$get_GameContextDefinitionDefinitionRef*/ func_0x0148d584(*(long *)(lVar2 + 0x10),0);
        uVar4 = *(undefined8 *)(lVar3 + 8);
        uVar5 = *(undefined8 *)(lVar2 + 0x18);
        uVar6 = *(undefined8 *)(lVar2 + 0x30);
        lVar3 = func_0x00f78aec(/*Atlas.UI.GameContextMetagameData_TypeInfo*/ uRam0000000003d21b30);
        Atlas_UI_GameContextMetagameData___ctor(lVar3,uVar4,uVar5,uVar6,0);
        *(long *)(lVar2 + 0x28) = lVar3;
      }
      return lVar3;
    }
    lVar3 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar2 + 0x10),0);
    uVar4 = *(undefined8 *)(lVar3 + 8);
    lVar3 = func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(lVar3,uVar4,0);
    *(long *)(lVar2 + 0x20) = lVar3;
  }
  return lVar3;
}



// ============================================================
// RVA: 0x148d698 | Atlas.UI.MapMetagameData.SmallMapSplineRef
// ============================================================

long Atlas_UI_MapMetagameData__SmallMapSplineRef(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(*(long *)(param_1 + 0x10) + 0x78);
  }
  lVar1 = func_0x00f78af4();
  puStack_18 = &Atlas_UI_MapMetagameData__IPMetagameData;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb497d & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb497d = 1;
  }
  lVar2 = *(long *)(lVar1 + 0x20);
  if (lVar2 == 0) {
    if (*(long *)(lVar1 + 0x10) == 0) {
      lVar1 = func_0x00f78af4();
      puStack_48 = &Atlas_UI_MapMetagameData__GameContextMetagameData;
      ppuStack_50 = &puStack_20;
      if ((bRam0000000003eb497e & 1) == 0) {
        func_0x00f78a20(0x3d2dc20);
        func_0x00f78a20(0x3d21b30);
        bRam0000000003eb497e = 1;
      }
      lVar2 = *(long *)(lVar1 + 0x28);
      if (lVar2 == 0) {
        if (*(long *)(lVar1 + 0x10) == 0) {
          lVar1 = func_0x00f78af4();
          puStack_88 = &Atlas_UI_MapMetagameData__get_DisplayName;
          ppuStack_90 = &ppuStack_50;
          if ((*(long *)(lVar1 + 0x10) != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
            puStack_88 = &Atlas_UI_MapMetagameData__get_DisplayName;
            lStack_98 = 0;
            /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar1 + 0x18),*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x30),
                            &lStack_98);
            return lStack_98;
          }
          lVar1 = func_0x00f78af4();
          return *(long *)(lVar1 + 0x50);
        }
        lVar2 = /*Atlas.Definitions.MapDefinition$$get_GameContextDefinitionDefinitionRef*/ func_0x0148d584(*(long *)(lVar1 + 0x10),0);
        uVar3 = *(undefined8 *)(lVar2 + 8);
        uVar4 = *(undefined8 *)(lVar1 + 0x18);
        uVar5 = *(undefined8 *)(lVar1 + 0x30);
        lVar2 = func_0x00f78aec(/*Atlas.UI.GameContextMetagameData_TypeInfo*/ uRam0000000003d21b30);
        Atlas_UI_GameContextMetagameData___ctor(lVar2,uVar3,uVar4,uVar5,0);
        *(long *)(lVar1 + 0x28) = lVar2;
      }
      return lVar2;
    }
    lVar2 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar1 + 0x10),0);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    lVar2 = func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(lVar2,uVar3,0);
    *(long *)(lVar1 + 0x20) = lVar2;
  }
  return lVar2;
}



// ============================================================
// RVA: 0x148d6b8 | Atlas.UI.MapMetagameData.IPMetagameData
// ============================================================

long Atlas_UI_MapMetagameData__IPMetagameData(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb497d & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d223e0);
    bRam0000000003eb497d = 1;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = func_0x00f78af4();
      puStack_38 = &Atlas_UI_MapMetagameData__GameContextMetagameData;
      puStack_40 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb497e & 1) == 0) {
        func_0x00f78a20(0x3d2dc20);
        func_0x00f78a20(0x3d21b30);
        bRam0000000003eb497e = 1;
      }
      lVar2 = *(long *)(lVar1 + 0x28);
      if (lVar2 == 0) {
        if (*(long *)(lVar1 + 0x10) == 0) {
          lVar1 = func_0x00f78af4();
          puStack_78 = &Atlas_UI_MapMetagameData__get_DisplayName;
          ppuStack_80 = &puStack_40;
          if ((*(long *)(lVar1 + 0x10) != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
            puStack_78 = &Atlas_UI_MapMetagameData__get_DisplayName;
            lStack_88 = 0;
            /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar1 + 0x18),*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x30),
                            &lStack_88);
            return lStack_88;
          }
          lVar1 = func_0x00f78af4();
          return *(long *)(lVar1 + 0x50);
        }
        lVar2 = /*Atlas.Definitions.MapDefinition$$get_GameContextDefinitionDefinitionRef*/ func_0x0148d584(*(long *)(lVar1 + 0x10),0);
        uVar3 = *(undefined8 *)(lVar2 + 8);
        uVar4 = *(undefined8 *)(lVar1 + 0x18);
        uVar5 = *(undefined8 *)(lVar1 + 0x30);
        lVar2 = func_0x00f78aec(/*Atlas.UI.GameContextMetagameData_TypeInfo*/ uRam0000000003d21b30);
        Atlas_UI_GameContextMetagameData___ctor(lVar2,uVar3,uVar4,uVar5,0);
        *(long *)(lVar1 + 0x28) = lVar2;
      }
      return lVar2;
    }
    lVar1 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(param_1 + 0x10),0);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    lVar1 = func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    Atlas_UI_IPMetagameData___ctor(lVar1,uVar3,0);
    *(long *)(param_1 + 0x20) = lVar1;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x148d750 | Atlas.UI.MapMetagameData.GameContextMetagameData
// ============================================================

long Atlas_UI_MapMetagameData__GameContextMetagameData(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb497e & 1) == 0) {
    func_0x00f78a20(0x3d2dc20);
    func_0x00f78a20(0x3d21b30);
    bRam0000000003eb497e = 1;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = func_0x00f78af4();
      puStack_48 = &Atlas_UI_MapMetagameData__get_DisplayName;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((*(long *)(lVar1 + 0x10) != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
        puStack_48 = &Atlas_UI_MapMetagameData__get_DisplayName;
        lStack_58 = 0;
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar1 + 0x18),*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x30),
                        &lStack_58);
        return lStack_58;
      }
      lVar1 = func_0x00f78af4();
      return *(long *)(lVar1 + 0x50);
    }
    lVar1 = /*Atlas.Definitions.MapDefinition$$get_GameContextDefinitionDefinitionRef*/ func_0x0148d584(*(long *)(param_1 + 0x10),0);
    uVar2 = *(undefined8 *)(lVar1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = func_0x00f78aec(/*Atlas.UI.GameContextMetagameData_TypeInfo*/ uRam0000000003d21b30);
    Atlas_UI_GameContextMetagameData___ctor(lVar1,uVar2,uVar3,uVar4,0);
    *(long *)(param_1 + 0x28) = lVar1;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x148d800 | Atlas.UI.MapMetagameData.get_DisplayName
// ============================================================

undefined8 Atlas_UI_MapMetagameData__get_DisplayName(long param_1)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uStack_18 = 0;
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(param_1 + 0x18),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                    &uStack_18);
    return uStack_18;
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x50);
}



