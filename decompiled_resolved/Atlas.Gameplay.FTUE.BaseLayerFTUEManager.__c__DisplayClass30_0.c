// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass30_0

// ============================================================
// RVA: 0x154716c | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass30_0..ctor
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass30_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1547174 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass30_0.<Init>b__0
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass30_0___Init_b__0(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  undefined1 auVar11 [16];
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
    uVar4 = func_0x00f78af4();
    return uVar4;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x98) == '\0') {
      /*Atlas.Gameplay.Player.GameContextPlayer$$SetKartProgressToBeginningOfLap*/ func_0x015a56b0(lVar8,1,0,0);
    }
    if ((*(long *)(lVar8 + 0x10) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar8 + 0x10) + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0x60);
      uVar3 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetAIRespawnDelegate(lVar5,lVar8);
      if (lVar9 != 0) {
        if ((bRam0000000003eb5390 & 1) == 0) {
          func_0x00f78a20(0x3d23a50,uVar3,0);
          bRam0000000003eb5390 = 1;
        }
        puVar10 = (ulong *)(lVar9 + 0xe0);
        uVar4 = *puVar10;
        while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar3,0), plVar6 == (long *)0x0 ||
               (*plVar6 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          uVar7 = func_0x00ff0f44(puVar10,plVar6,uVar4);
          bVar1 = uVar4 == uVar7;
          uVar4 = uVar7;
          if (bVar1) {
            return uVar7;
          }
        }
        auVar11 = func_0x00f78e5c(plVar6);
        pcStack_38 = 
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnKartPortalEntered;
        puStack_40 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb5391 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5391 = 1;
        }
        puVar10 = (ulong *)(auVar11._0_8_ + 0xe8);
        uVar4 = *puVar10;
        while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,auVar11._8_8_,0), plVar6 == (long *)0x0 ||
               (*plVar6 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          uVar7 = func_0x00ff0f44(puVar10,plVar6,uVar4);
          bVar1 = uVar4 == uVar7;
          uVar4 = uVar7;
          if (bVar1) {
            return uVar7;
          }
        }
        auVar11 = func_0x00f78e5c(plVar6);
        pcStack_68 = 
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnKartPortalEntered;
        ppuStack_70 = &puStack_40;
        if ((bRam0000000003eb5392 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5392 = 1;
        }
        puVar10 = (ulong *)(auVar11._0_8_ + 0xe8);
        uVar4 = *puVar10;
        while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,auVar11._8_8_,0), plVar6 == (long *)0x0 ||
               (*plVar6 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          uVar7 = func_0x00ff0f44(puVar10,plVar6,uVar4);
          bVar1 = uVar4 == uVar7;
          uVar4 = uVar7;
          if (bVar1) {
            return uVar7;
          }
        }
        auVar11 = func_0x00f78e5c(plVar6);
        if ((bRam0000000003eb5393 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5393 = 1;
        }
        puVar10 = (ulong *)(auVar11._0_8_ + 0xf0);
        uVar4 = *puVar10;
        while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,auVar11._8_8_,0), plVar6 == (long *)0x0 ||
               (*plVar6 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          uVar7 = func_0x00ff0f44(puVar10,plVar6,uVar4);
          bVar1 = uVar4 == uVar7;
          uVar4 = uVar7;
          if (bVar1) {
            return uVar7;
          }
        }
        auVar11 = func_0x00f78e5c(plVar6);
        if ((bRam0000000003eb5394 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5394 = 1;
        }
        puVar10 = (ulong *)(auVar11._0_8_ + 0xf0);
        uVar4 = *puVar10;
        while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,auVar11._8_8_,0), plVar6 == (long *)0x0 ||
               (*plVar6 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          uVar7 = func_0x00ff0f44(puVar10,plVar6,uVar4);
          bVar1 = uVar4 == uVar7;
          uVar4 = uVar7;
          if (bVar1) {
            return uVar7;
          }
        }
        auVar11 = func_0x00f78e5c(plVar6);
        if ((bRam0000000003eb5395 & 1) == 0) {
          func_0x00f78a20(0x3d23a58);
          bRam0000000003eb5395 = 1;
        }
        puVar10 = (ulong *)(auVar11._0_8_ + 0xf8);
        uVar4 = *puVar10;
        while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,auVar11._8_8_,0), plVar6 == (long *)0x0 ||
               (*plVar6 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
          uVar7 = func_0x00ff0f44(puVar10,plVar6,uVar4);
          bVar1 = uVar4 == uVar7;
          uVar4 = uVar7;
          if (bVar1) {
            return uVar7;
          }
        }
        auVar11 = func_0x00f78e5c(plVar6);
        if ((bRam0000000003eb5396 & 1) == 0) {
          func_0x00f78a20(0x3d23a58);
          bRam0000000003eb5396 = 1;
        }
        puVar10 = (ulong *)(auVar11._0_8_ + 0xf8);
        uVar4 = *puVar10;
        while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,auVar11._8_8_,0), plVar6 == (long *)0x0 ||
               (*plVar6 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
          uVar7 = func_0x00ff0f44(puVar10,plVar6,uVar4);
          bVar1 = uVar4 == uVar7;
          uVar4 = uVar7;
          if (bVar1) {
            return uVar7;
          }
        }
        auVar11 = func_0x00f78e5c(plVar6);
        *(long *)(auVar11._0_8_ + 0x10) = auVar11._8_8_;
        return auVar11._0_8_;
      }
    }
  }
  auVar11 = func_0x00f78af4();
  pcStack_68 = auVar11._8_8_;
  pcStack_38 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AreInTriggerSection;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48aa & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48aa = 1;
  }
  ppuStack_70 = *(undefined1 ***)(auVar11._0_8_ + 0xa8);
  uVar3 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&ppuStack_70);
  uVar4 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&pcStack_68,uVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&pcStack_68,0);
    if ((uVar4 & 1) == 0) {
      uVar2 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(auVar11._0_8_ + 0xa8,0);
      uVar4 = (ulong)(uVar2 ^ 1);
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



