// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.GameContextMetagameData

// ============================================================
// RVA: 0x15a4fac | Atlas.UI.GameContextMetagameData.get_ID
// ============================================================

undefined8
Atlas_UI_GameContextMetagameData__get_ID
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  auVar3 = func_0x00f78af4();
  lVar1 = auVar3._0_8_;
  uVar2 = /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(lVar1,0);
  *(long *)(lVar1 + 0x10) = auVar3._8_8_;
  *(undefined8 *)(lVar1 + 0x18) = param_4;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  return uVar2;
}



// ============================================================
// RVA: 0x15a4fcc | Atlas.UI.GameContextMetagameData..ctor
// ============================================================

void Atlas_UI_GameContextMetagameData___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



// ============================================================
// RVA: 0x15a500c | Atlas.UI.GameContextMetagameData.IconRef
// ============================================================

undefined8 Atlas_UI_GameContextMetagameData__IconRef(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51e3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb51e3 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_015a50a8;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_015a50a8:
      lVar2 = func_0x00f78af4();
      puStack_38 = &Atlas_UI_GameContextMetagameData__get_DisplayName;
      puStack_40 = &stack0xfffffffffffffff0;
      if ((*(long *)(lVar2 + 0x10) != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
        puStack_38 = &Atlas_UI_GameContextMetagameData__get_DisplayName;
        uStack_48 = 0;
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar2 + 0x20),*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x28),
                        &uStack_48);
        return uStack_48;
      }
      lVar2 = func_0x00f78af4();
      return *(undefined8 *)(lVar2 + 0x10);
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
  }
  return *puVar3;
}



// ============================================================
// RVA: 0x15a50ac | Atlas.UI.GameContextMetagameData.get_DisplayName
// ============================================================

undefined8 Atlas_UI_GameContextMetagameData__get_DisplayName(long param_1)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    uStack_18 = 0;
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                    &uStack_18);
    return uStack_18;
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x10);
}



