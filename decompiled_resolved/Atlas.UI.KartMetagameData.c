// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.KartMetagameData

// ============================================================
// RVA: 0x15d0b9c | Atlas.UI.KartMetagameData..ctor
// ============================================================

void Atlas_UI_KartMetagameData___ctor
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar3;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  puVar1 = &stack0xfffffffffffffff0;
  puVar3 = &stack0xfffffffffffffff0;
  if ((param_3 == 0) || (*(long *)(param_3 + 0x20) == 0)) {
    unaff_x30 = &Atlas_UI_KartMetagameData___ctor;
    auVar4 = func_0x00f78af4();
  }
  else {
    param_4 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10);
    param_5 = *(undefined8 *)(param_3 + 0x88);
    puVar1 = (undefined1 *)register0x00000008;
    param_3 = *(long *)(param_3 + 0x50);
    puVar3 = unaff_x29;
  }
  lVar2 = auVar4._0_8_;
  *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = puVar3;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if ((bRam0000000003eb4952 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4952 = 1;
  }
  *(undefined8 *)(lVar2 + 0x28) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(lVar2,0);
  *(long *)(lVar2 + 0x30) = auVar4._8_8_;
  *(long *)(lVar2 + 0x38) = auVar4._8_8_;
  *(long *)(lVar2 + 0x10) = param_3;
  *(undefined8 *)(lVar2 + 0x18) = param_4;
  *(undefined8 *)(lVar2 + 0x20) = param_5;
  return;
}



// ============================================================
// RVA: 0x15d0bd0 | Atlas.UI.KartMetagameData..ctor
// ============================================================

void Atlas_UI_KartMetagameData___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if ((bRam0000000003eb4952 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4952 = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(param_1,0);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_5;
  return;
}



// ============================================================
// RVA: 0x15d0be8 | Atlas.UI.KartMetagameData.StockWheelDefinition
// ============================================================

long Atlas_UI_KartMetagameData__StockWheelDefinition(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5351 & 1) == 0) {
    func_0x00f78a20(0x3d2dcc0);
    func_0x00f78a20(0x3d22c80);
    bRam0000000003eb5351 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8)
        == /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
      return plVar5[0xf];
    }
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003eb5352 & 1) == 0) {
    func_0x00f78a20(0x3d27d10);
    bRam0000000003eb5352 = 1;
  }
  plVar5 = (long *)(auVar6._0_8_ + 0x50);
  lVar4 = *plVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,auVar6._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate_TypeInfo*/ lRam0000000003d27d10))) {
    lVar3 = func_0x00ff0f44(plVar5,plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5353 & 1) == 0) {
    func_0x00f78a20(0x3d27d10);
    bRam0000000003eb5353 = 1;
  }
  plVar5 = (long *)(auVar6._0_8_ + 0x50);
  lVar4 = *plVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,auVar6._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate_TypeInfo*/ lRam0000000003d27d10))) {
    lVar3 = func_0x00ff0f44(plVar5,plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return *(long *)(lVar4 + 0x10);
}



