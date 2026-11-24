// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager

// ============================================================
// RVA: 0x15d96c0 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_HasStartedRespawnThisFrame
// ============================================================

undefined1
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_HasStartedRespawnThisFrame
          (long param_1)

{
  return *(undefined1 *)(param_1 + 0xd4);
}



// ============================================================
// RVA: 0x15d96c8 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_IsHitSpin
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsHitSpin(long param_1)

{
  return 0.0 < *(float *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x15d96d8 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_SpinoutType
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_SpinoutType(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
  }
  return 0;
}



// ============================================================
// RVA: 0x15d96f0 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_IsInvuln
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsInvuln(long param_1)

{
  return 0.0 < *(float *)(param_1 + 0x5c);
}



// ============================================================
// RVA: 0x15d9700 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_IsPushCoolDown
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsPushCoolDown(long param_1)

{
  return 0.0 < *(float *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x15d9710 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_IsSpeedReduced
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsSpeedReduced(long param_1)

{
  return 0.0 < *(float *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15d9720 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_IsSpeedReductionCooldown
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsSpeedReductionCooldown
               (long param_1)

{
  return 0.0 < *(float *)(param_1 + 0x6c);
}



// ============================================================
// RVA: 0x15d9730 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_SpinoutFactor
// ============================================================

float Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_SpinoutFactor(long param_1)

{
  long lVar1;
  float fVar2;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x58), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x44) == '\0') {
      fVar2 = 0.0;
    }
    else {
      if (*(long *)(param_1 + 0x28) == 0) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = *(float *)(*(long *)(param_1 + 0x28) + 0x24);
      }
      fVar2 = (*(float *)(param_1 + 100) * (*(float *)(param_1 + 100) - *(float *)(param_1 + 0x58))
              + 0.0) * fVar2;
    }
    return fVar2;
  }
  lVar1 = func_0x00f78af4();
  return *(float *)(lVar1 + 100);
}



// ============================================================
// RVA: 0x15d9794 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_SpinoutDuration
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_SpinoutDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ============================================================
// RVA: 0x15d979c | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_CurrentSpinoutTriggerEffects
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_CurrentSpinoutTriggerEffects
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15d97a4 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_CurrentPushTriggerEffects
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_CurrentPushTriggerEffects(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15d97ac | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_CurrentSpeedLimitTriggerEffects
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_CurrentSpeedLimitTriggerEffects
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15d97b4 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_CurrentMagneticTriggerEffects
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_CurrentMagneticTriggerEffects
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15d97bc | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_PushEffectPending
// ============================================================

undefined1
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_PushEffectPending(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15d97c4 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_IsRespawning
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsRespawning(long param_1)

{
  if (((*(float *)(param_1 + 0x8c) <= 0.0) && (*(float *)(param_1 + 0x94) <= 0.0)) &&
     (*(float *)(param_1 + 0xa8) <= 0.0)) {
    return 0.0 < *(float *)(param_1 + 0xa0);
  }
  return true;
}



// ============================================================
// RVA: 0x15d9800 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_HasValidShield
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_HasValidShield(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 200);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015d9810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
    return;
  }
  return;
}



// ============================================================
// RVA: 0x15d9818 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.get_CurrentShieldUsable
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_CurrentShieldUsable(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x15d9820 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.add_OnKartRespawnEnd
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnKartRespawnEnd
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb538d & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb538d = 1;
  }
  lVar5 = *(long *)(param_1 + 0xd8);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xd8),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb538e & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb538e = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xd8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb538f & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb538f = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5390 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5390 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5391 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5391 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5392 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5392 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5393 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5393 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5394 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5394 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5395 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5395 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5396 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5396 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  *(long *)(auVar6._0_8_ + 0x10) = auVar6._8_8_;
  return;
}



// ============================================================
// RVA: 0x15d98c0 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.remove_OnKartRespawnEnd
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnKartRespawnEnd
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb538e & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb538e = 1;
  }
  lVar5 = *(long *)(param_1 + 0xd8);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xd8),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb538f & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb538f = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5390 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5390 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5391 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5391 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5392 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5392 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5393 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5393 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5394 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5394 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5395 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5395 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5396 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5396 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  *(long *)(auVar6._0_8_ + 0x10) = auVar6._8_8_;
  return;
}



// ============================================================
// RVA: 0x15d9960 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.add_OnStartTransitionEnd
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnStartTransitionEnd
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb538f & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb538f = 1;
  }
  lVar5 = *(long *)(param_1 + 0xe0);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xe0),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5390 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5390 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5391 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5391 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5392 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5392 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5393 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5393 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5394 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5394 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5395 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5395 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5396 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5396 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  *(long *)(auVar6._0_8_ + 0x10) = auVar6._8_8_;
  return;
}



// ============================================================
// RVA: 0x15d9a00 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.remove_OnStartTransitionEnd
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnStartTransitionEnd
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5390 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5390 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xe0);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xe0),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5391 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5391 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5392 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5392 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5393 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5393 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5394 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5394 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5395 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5395 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5396 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5396 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  *(long *)(auVar6._0_8_ + 0x10) = auVar6._8_8_;
  return;
}



// ============================================================
// RVA: 0x15d9aa0 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.add_OnKartPortalEntered
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnKartPortalEntered
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5391 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5391 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xe8);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xe8),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5392 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5392 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xe8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5393 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5393 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5394 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5394 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5395 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5395 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5396 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5396 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  *(long *)(auVar6._0_8_ + 0x10) = auVar6._8_8_;
  return;
}



// ============================================================
// RVA: 0x15d9b40 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.remove_OnKartPortalEntered
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnKartPortalEntered
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5392 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5392 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xe8);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xe8),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5393 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5393 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5394 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5394 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5395 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5395 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5396 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5396 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  *(long *)(auVar6._0_8_ + 0x10) = auVar6._8_8_;
  return;
}



// ============================================================
// RVA: 0x15d9be0 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.add_OnTransitionEnd
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnTransitionEnd
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5393 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5393 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xf0);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xf0),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5394 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5394 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5395 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5395 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5396 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5396 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  *(long *)(auVar6._0_8_ + 0x10) = auVar6._8_8_;
  return;
}



// ============================================================
// RVA: 0x15d9c80 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.remove_OnTransitionEnd
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnTransitionEnd
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5394 & 1) == 0) {
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb5394 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xf0);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xf0),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5395 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5395 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5396 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5396 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  *(long *)(auVar6._0_8_ + 0x10) = auVar6._8_8_;
  return;
}



// ============================================================
// RVA: 0x15d9d20 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.add_OnSpinOutTriggered
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnSpinOutTriggered
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5395 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5395 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xf8);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xf8),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5396 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5396 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xf8);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  *(long *)(auVar6._0_8_ + 0x10) = auVar6._8_8_;
  return;
}



// ============================================================
// RVA: 0x15d9dc0 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.remove_OnSpinOutTriggered
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnSpinOutTriggered
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb5396 & 1) == 0) {
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb5396 = 1;
  }
  lVar4 = *(long *)(param_1 + 0xf8);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xf8),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar5 = func_0x00f78e5c(plVar2);
  *(long *)(auVar5._0_8_ + 0x10) = auVar5._8_8_;
  return;
}



// ============================================================
// RVA: 0x15d9e60 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.Init
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__Init(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15d9e68 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.DeInit
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// ============================================================
// RVA: 0x15d9e70 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.OnUseShield
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__OnUseShield
               (long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  float extraout_s0;
  undefined1 auVar5 [16];
  
  plVar2 = *(long **)(param_1 + 200);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0)), iVar1 != 0))
  {
    if (*(long *)(param_1 + 200) == 0) {
      lVar3 = func_0x00f78af4();
      plVar2 = *(long **)(lVar3 + 200);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x2d8))(plVar2,1,*(undefined8 *)(*plVar2 + 0x2e0));
        plVar2 = *(long **)(lVar3 + 200);
        if (plVar2 == (long *)0x0) {
          auVar5 = func_0x00f78af4();
          if (*(long *)(auVar5._0_8_ + 200) != auVar5._8_8_) {
            return;
          }
          *(undefined8 *)(auVar5._0_8_ + 200) = 0;
          return;
        }
        uVar4 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
        if ((uVar4 & 1) == 0) {
          *(undefined8 *)(lVar3 + 200) = 0;
        }
      }
      if ((0.0 <= extraout_s0) && (*(float *)(lVar3 + 0x5c) < extraout_s0)) {
        *(float *)(lVar3 + 0x5c) = extraout_s0;
      }
      return;
    }
    /*Atlas.Gameplay.Usables.Usable$$MarkForDestroy*/ func_0x01523e20(*(long *)(param_1 + 200),0,0);
  }
  *(undefined8 *)(param_1 + 200) = param_2;
  return;
}



// ============================================================
// RVA: 0x15d9ec4 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.ConsumeShieldHit
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
               (float param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  plVar1 = *(long **)(param_2 + 200);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x2d8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x2e0));
    plVar1 = *(long **)(param_2 + 200);
    if (plVar1 == (long *)0x0) {
      auVar3 = func_0x00f78af4();
      if (*(long *)(auVar3._0_8_ + 200) != auVar3._8_8_) {
        return;
      }
      *(undefined8 *)(auVar3._0_8_ + 200) = 0;
      return;
    }
    uVar2 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_2 + 200) = 0;
    }
  }
  if ((0.0 <= param_1) && (*(float *)(param_2 + 0x5c) < param_1)) {
    *(float *)(param_2 + 0x5c) = param_1;
  }
  return;
}



// ============================================================
// RVA: 0x15d9f40 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.OnShieldExpired
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__OnShieldExpired
               (long param_1,long param_2)

{
  if (*(long *)(param_1 + 200) != param_2) {
    return;
  }
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}



// ============================================================
// RVA: 0x15d9f58 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.SetRespawning
// ============================================================

/* WARNING: Possible PIC construction at 0x015da024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015da17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015da2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015da278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015da474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015da1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015da180) */
/* WARNING: Removing unreachable block (ram,0x015da188) */
/* WARNING: Removing unreachable block (ram,0x015da478) */
/* WARNING: Removing unreachable block (ram,0x015da47c) */
/* WARNING: Removing unreachable block (ram,0x015da480) */
/* WARNING: Removing unreachable block (ram,0x015da484) */
/* WARNING: Removing unreachable block (ram,0x015da48c) */
/* WARNING: Removing unreachable block (ram,0x015da490) */
/* WARNING: Removing unreachable block (ram,0x015da494) */
/* WARNING: Removing unreachable block (ram,0x015da4a0) */
/* WARNING: Removing unreachable block (ram,0x015da4a4) */
/* WARNING: Removing unreachable block (ram,0x015da4a8) */
/* WARNING: Removing unreachable block (ram,0x015da4ac) */
/* WARNING: Removing unreachable block (ram,0x015da4b4) */
/* WARNING: Removing unreachable block (ram,0x015da4b8) */
/* WARNING: Removing unreachable block (ram,0x015da4bc) */
/* WARNING: Removing unreachable block (ram,0x015da50c) */
/* WARNING: Removing unreachable block (ram,0x015da4c4) */
/* WARNING: Removing unreachable block (ram,0x015da514) */
/* WARNING: Removing unreachable block (ram,0x015da4cc) */

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetRespawning
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,uint param_4,
               uint param_5,uint param_6,uint param_7,undefined4 param_8,long param_9,
               undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  code *pcVar16;
  undefined8 unaff_x22;
  long lVar17;
  undefined8 unaff_x23;
  undefined1 *puVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar19;
  undefined4 uVar20;
  float extraout_s0;
  uint uVar21;
  float extraout_s0_00;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  ulong unaff_d8;
  uint uVar27;
  ulong unaff_d9;
  ulong uVar28;
  uint uVar29;
  ulong unaff_d10;
  ulong uVar30;
  uint uVar31;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar32 [16];
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar3 = &stack0xffffffffffffffc0;
  puVar18 = &stack0xfffffffffffffff0;
  fVar25 = *(float *)(param_9 + 0x8c);
  uVar14 = unaff_d8;
  uVar28 = unaff_d9;
  uVar30 = unaff_d10;
  if ((((fVar25 <= 0.0) && (uVar30 = (ulong)param_5, *(float *)(param_9 + 0x94) <= 0.0)) &&
      (*(float *)(param_9 + 0xa8) <= 0.0)) && (*(float *)(param_9 + 0xa0) <= 0.0)) {
    uVar14 = (ulong)param_7;
    uVar28 = (ulong)param_6;
    *(undefined1 *)(param_9 + 0xd4) = 1;
    *(undefined4 *)(param_9 + 0x88) = param_8;
    *(undefined4 *)(param_9 + 0x90) = uStack0000000000000000;
    *(undefined4 *)(param_9 + 0x98) = uStack0000000000000008;
    *(undefined4 *)(param_9 + 0x9c) = uStack000000000000000c;
    *(undefined4 *)(param_9 + 0xa4) = uStack0000000000000004;
    *(undefined4 *)(param_9 + 0xa8) = uStack0000000000000004;
    uVar20 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
    *(undefined4 *)(param_9 + 0xac) = uVar20;
    *(undefined4 *)(param_9 + 0xb0) = param_2;
    *(undefined4 *)(param_9 + 0xb4) = param_3;
    *(uint *)(param_9 + 0xb8) = param_4;
    *(uint *)(param_9 + 0xbc) = param_5;
    *(uint *)(param_9 + 0xc0) = param_6;
    *(uint *)(param_9 + 0xc4) = param_7;
    fVar25 = *(float *)(param_9 + 0x8c);
  }
  if (((0.0 < fVar25) || (0.0 < *(float *)(param_9 + 0x94))) ||
     ((0.0 < *(float *)(param_9 + 0xa8) || (0.0 < *(float *)(param_9 + 0xa0))))) {
    unaff_x19 = 1;
    param_11 = 0;
    puVar19 = (undefined *)0x15da028;
    puVar3 = &stack0xffffffffffffffc0;
    lVar10 = param_9;
    unaff_d8 = uVar14;
    unaff_d9 = uVar28;
    unaff_d10 = uVar30;
    unaff_d11 = (ulong)param_4;
  }
  else {
    if (*(long *)(param_9 + 0x10) != 0) {
      Atlas_Gameplay_Kart_KartPhysics__ResetStates(*(long *)(param_9 + 0x10),0);
      fVar25 = *(float *)(param_9 + 0x100);
      puVar4 = (undefined1 *)register0x00000008;
      goto code_r0x015da0fc;
    }
    puVar19 = &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetKinematic;
    auVar32 = func_0x00f78af4();
    unaff_x19 = auVar32._8_8_;
    lVar10 = auVar32._0_8_;
    unaff_d8 = uVar14;
    unaff_d9 = uVar28;
    unaff_d10 = uVar30;
    unaff_d11 = (ulong)param_4;
  }
  do {
    puVar4 = puVar3 + -0x30;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = param_9;
    *(undefined1 **)(puVar3 + -0x10) = puVar18;
    *(undefined **)(puVar3 + -8) = puVar19;
    unaff_x29 = puVar3 + -0x10;
    lVar11 = *(long *)(lVar10 + 0x10);
    if ((int)param_11 == 2) {
      if (lVar11 != 0) {
        unaff_x21 = 1;
code_r0x015da0a0:
        if (*(long *)(lVar11 + 0x70) != 0) {
          uVar7 = /*UnityEngine.Rigidbody$$get_isKinematic*/ func_0x032a26c4(*(long *)(lVar11 + 0x70),0);
          if (((uint)unaff_x21 & (uVar7 ^ (uint)unaff_x19)) != 1) {
            return;
          }
          if ((*(long *)(lVar10 + 0x10) != 0) &&
             (lVar11 = *(long *)(*(long *)(lVar10 + 0x10) + 0x70), lVar11 != 0)) {
            *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
            *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
            *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
            *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
            *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
            *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
            if (pcRam0000000003ec27e0 == (code *)0x0) {
              pcRam0000000003ec27e0 =
                   (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)")
              ;
            }
                    /* WARNING: Could not recover jumptable at 0x032a2750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ec27e0)(lVar11,unaff_x19);
            return;
          }
        }
      }
    }
    else if ((lVar11 != 0) && (*(long *)(lVar11 + 0x58) != 0)) {
      unaff_x21 = (ulong)(*(char *)(*(long *)(lVar11 + 0x58) + 0x44) != '\0');
      goto code_r0x015da0a0;
    }
    unaff_x30 = &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__UpdateRespawning;
    param_9 = func_0x00f78af4();
    unaff_x20 = lVar10;
    fVar25 = extraout_s0;
code_r0x015da0fc:
    while( true ) {
      puVar3 = puVar4 + -0x70;
      *(undefined8 *)(puVar4 + -0x60) = unaff_d15;
      *(ulong *)(puVar4 + -0x58) = unaff_d14;
      *(ulong *)(puVar4 + -0x50) = unaff_d13;
      *(ulong *)(puVar4 + -0x48) = unaff_d12;
      *(ulong *)(puVar4 + -0x40) = unaff_d11;
      *(ulong *)(puVar4 + -0x38) = unaff_d10;
      *(ulong *)(puVar4 + -0x30) = unaff_d9;
      *(ulong *)(puVar4 + -0x28) = unaff_d8;
      *(long *)(puVar4 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
      *(undefined **)(puVar4 + -8) = unaff_x30;
      puVar18 = puVar4 + -0x10;
      *(undefined1 *)(param_9 + 0xd5) = 1;
      if (0.0 <= *(float *)(param_9 + 0xa8)) {
        fVar25 = *(float *)(param_9 + 0xa8) - fVar25;
        *(float *)(param_9 + 0xa8) = fVar25;
        if (0.0 <= fVar25) {
          return;
        }
        *(undefined4 *)(param_9 + 0xa8) = 0xbf800000;
        lVar10 = *(long *)(param_9 + 0xe8);
        if (lVar10 == 0) {
          *(undefined4 *)(param_9 + 0x8c) = *(undefined4 *)(param_9 + 0x88);
          return;
        }
        puVar19 = &UNK_015da1d4;
        goto code_r0x014b33f0;
      }
      if (*(float *)(param_9 + 0x8c) < 0.0) break;
      fVar25 = *(float *)(param_9 + 0x8c) - fVar25;
      *(float *)(param_9 + 0x8c) = fVar25;
      if (0.0 <= fVar25) {
        return;
      }
      *(undefined4 *)(param_9 + 0x8c) = 0xbf800000;
      unaff_x20 = *(long *)(param_9 + 0x10);
      uVar22 = *(uint *)(param_9 + 0xb0);
      uVar23 = *(uint *)(param_9 + 0xb4);
      uVar21 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_9 + 0xac),0);
      unaff_d12 = (ulong)uVar21;
      unaff_d13 = (ulong)uVar22;
      unaff_d14 = (ulong)uVar23;
      uVar26 = *(uint *)(param_9 + 0xb8);
      uVar27 = *(uint *)(param_9 + 0xbc);
      unaff_d9 = (ulong)uVar27;
      uVar29 = *(uint *)(param_9 + 0xc0);
      unaff_d10 = (ulong)uVar29;
      uVar31 = *(uint *)(param_9 + 0xc4);
      unaff_d11 = (ulong)uVar31;
      uVar7 = uVar22;
      uVar24 = uVar23;
      uVar20 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      if (unaff_x20 != 0) {
        *(undefined4 *)(puVar4 + -0x70) = uVar20;
        *(uint *)(puVar4 + -0x6c) = uVar7;
        *(uint *)(puVar4 + -0x68) = uVar24;
        Atlas_Gameplay_Kart_KartPhysics__Reset
                  (uVar21,uVar22,uVar23,uVar26,uVar27,uVar29,uVar31,unaff_x20,0);
        /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$ResetEffects*/ func_0x015daabc(param_9);
        *(undefined4 *)(param_9 + 0x94) = *(undefined4 *)(param_9 + 0x90);
        lVar10 = *(long *)(param_9 + 0xe0);
        if (lVar10 == 0) {
          *(undefined4 *)(param_9 + 0x5c) = *(undefined4 *)(param_9 + 0x9c);
          return;
        }
        puVar19 = &UNK_015da27c;
        goto code_r0x014b33f0;
      }
      unaff_x20 = func_0x00f78af4();
      *(ulong *)(puVar4 + -0xb0) = unaff_d9;
      *(ulong *)(puVar4 + -0xa8) = (ulong)uVar26;
      *(undefined8 *)(puVar4 + -0xa0) = unaff_x22;
      *(ulong *)(puVar4 + -0x98) = unaff_x21;
      *(undefined8 *)(puVar4 + -0x90) = 0;
      *(long *)(puVar4 + -0x88) = param_9;
      *(undefined1 **)(puVar4 + -0x80) = puVar18;
      *(undefined **)(puVar4 + -0x78) =
           &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__Update;
      unaff_x29 = puVar4 + -0x80;
      unaff_d8 = (ulong)(uint)extraout_s0_00;
      if ((bRam0000000003eb5397 & 1) == 0) {
        func_0x00f78a20(0x3d22ce0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5397 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x19 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xb8);
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(unaff_x19,0);
      *(float *)(unaff_x20 + 0x100) = extraout_s0_00;
      if (*(long *)(unaff_x20 + 0x10) == 0) {
code_r0x015da4d0:
        *(undefined8 *)(puVar4 + -0x90) = *(undefined8 *)(puVar4 + -0x90);
        *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x88);
        *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x80);
        *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x78);
        if (pcRam0000000003ec05a0 == (code *)0x0) {
          pcRam0000000003ec05a0 =
               (code *)func_0x00f789d4(
                                      "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003ec05a0)(unaff_x19);
        return;
      }
      uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x40);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
      if ((uVar14 & 1) != 0) goto code_r0x015da4d0;
      lVar10 = *(long *)(unaff_x20 + 0x10);
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x015da518:
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x15da51c);
        (*pcVar16)();
      }
      unaff_x21 = *(ulong *)(lVar10 + 0x40);
      lVar10 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar10,0);
      if (unaff_x21 == 0) {
        func_0x00f78af4();
        goto code_r0x015da518;
      }
      uVar8 = Atlas_Gameplay_Kart_KartPhysicsHandling__GetHandlingModifierFromSurfaceType
                        (unaff_x21,*(undefined4 *)(lVar10 + 0x178));
      *(undefined8 *)(unaff_x20 + 0x20) = uVar8;
      if ((0.0 < *(float *)(unaff_x20 + 0x58)) &&
         (fVar25 = *(float *)(unaff_x20 + 0x58) - extraout_s0_00,
         *(float *)(unaff_x20 + 0x58) = fVar25, fVar25 <= 0.0)) {
        if (*(long *)(unaff_x20 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x015da518;
        }
        lVar10 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x48);
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x015da518;
        }
        *(undefined1 *)(lVar10 + 0x84) = 0;
        *(undefined1 *)(lVar10 + 0x86) = *(undefined1 *)(lVar10 + 0x85);
        *(undefined8 *)(unaff_x20 + 0x28) = 0;
      }
      if (0.0 < *(float *)(unaff_x20 + 0x5c)) {
        *(float *)(unaff_x20 + 0x5c) = *(float *)(unaff_x20 + 0x5c) - extraout_s0_00;
      }
      if ((0.0 < *(float *)(unaff_x20 + 0x60)) &&
         (fVar25 = *(float *)(unaff_x20 + 0x60) - extraout_s0_00,
         *(float *)(unaff_x20 + 0x60) = fVar25, fVar25 <= 0.0)) {
        *(undefined8 *)(unaff_x20 + 0x30) = 0;
      }
      if ((0.0 < *(float *)(unaff_x20 + 0x68)) &&
         (fVar25 = *(float *)(unaff_x20 + 0x68) - extraout_s0_00,
         *(float *)(unaff_x20 + 0x68) = fVar25, fVar25 <= 0.0)) {
        *(undefined8 *)(unaff_x20 + 0x38) = 0;
      }
      if (0.0 < *(float *)(unaff_x20 + 0x6c)) {
        *(float *)(unaff_x20 + 0x6c) = *(float *)(unaff_x20 + 0x6c) - extraout_s0_00;
      }
      unaff_x30 = &UNK_015da478;
      puVar4 = puVar4 + -0xb0;
      param_9 = unaff_x20;
      fVar25 = extraout_s0_00;
    }
    if (0.0 <= *(float *)(param_9 + 0x94)) {
      fVar25 = *(float *)(param_9 + 0x94) - fVar25;
      *(float *)(param_9 + 0x94) = fVar25;
      if (fVar25 <= 0.0) {
        *(undefined4 *)(param_9 + 0x94) = 0xbf800000;
        lVar10 = *(long *)(param_9 + 0xf0);
        if (lVar10 != 0) {
          puVar19 = &UNK_015da2b0;
code_r0x014b33f0:
          uVar8 = 0;
          *(undefined8 *)(puVar4 + -0xc0) = unaff_x26;
          *(undefined8 *)(puVar4 + -0xb8) = unaff_x25;
          *(undefined8 *)(puVar4 + -0xb0) = unaff_x24;
          *(undefined8 *)(puVar4 + -0xa8) = unaff_x23;
          *(undefined8 *)(puVar4 + -0xa0) = unaff_x22;
          *(ulong *)(puVar4 + -0x98) = unaff_x21;
          *(long *)(puVar4 + -0x90) = unaff_x20;
          *(long *)(puVar4 + -0x88) = param_9;
          *(undefined1 **)(puVar4 + -0x80) = puVar18;
          *(undefined **)(puVar4 + -0x78) = puVar19;
          *(long *)(puVar4 + -200) = lVar10;
          lVar11 = *(long *)(lVar10 + 0x68);
          if (lVar11 == 0) {
            puVar18 = puVar4 + -200;
            lVar17 = 1;
          }
          else {
            lVar17 = *(long *)(lVar11 + 0x18);
            if (lVar17 == 0) {
              return;
            }
            puVar18 = (undefined1 *)(lVar11 + 0x20);
          }
          lVar11 = 0;
          break;
        }
        *(undefined4 *)(param_9 + 0xa0) = *(undefined4 *)(param_9 + 0x98);
      }
      return;
    }
    if (*(float *)(param_9 + 0xa0) < 0.0) {
      return;
    }
    fVar25 = *(float *)(param_9 + 0xa0) - fVar25;
    *(float *)(param_9 + 0xa0) = fVar25;
    if (0.0 < fVar25) {
      return;
    }
    *(undefined4 *)(param_9 + 0xa0) = 0xbf800000;
    unaff_x19 = 0;
    param_11 = 1;
    puVar19 = &UNK_015da180;
    lVar10 = param_9;
  } while( true );
code_r0x014b3438:
  lVar12 = *(long *)(puVar18 + lVar11 * 8);
  pcVar16 = *(code **)(lVar12 + 0x10);
  plVar1 = *(long **)(lVar12 + 0x20);
  lVar12 = *(long *)(lVar12 + 0x28);
  if (*(short *)(lVar12 + 0x48) == -1) {
    func_0x00f78ad8(lVar12,uVar8);
  }
  iVar5 = func_0x00f78a4c(lVar12);
  if (iVar5 == 0) {
    if ((((plVar1 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
        ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar10 + 0x18) == 0))
    goto code_r0x014b34f8;
    iVar5 = func_0x00f78a44(lVar12);
    iVar6 = func_0x00f78ec0(lVar12);
    if (iVar5 == 0) {
      uVar2 = *(ushort *)(lVar12 + 0x48);
      if (iVar6 == 0) {
        lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
        (**(code **)(lVar12 + 0x138))(plVar1,*(undefined8 *)(lVar12 + 0x140));
        uVar8 = extraout_x1_01;
        goto code_r0x014b3504;
      }
      lVar12 = func_0x00f78a48(lVar12);
      lVar13 = *plVar1;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
            goto code_r0x014b35c8;
          }
          piVar15 = piVar15 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x014b35c8:
      pcVar16 = (code *)*puVar9;
      puVar9 = (undefined8 *)puVar9[1];
    }
    else {
      if (iVar6 == 0) {
        uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
      }
      else {
        lVar13 = *plVar1;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
              lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                       0x138;
              goto code_r0x014b35a0;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        lVar13 = func_0x00fac1f0(plVar1);
code_r0x014b35a0:
        uVar8 = *(undefined8 *)(lVar13 + 8);
      }
      puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
      pcVar16 = (code *)*puVar9;
    }
    (*pcVar16)(plVar1,puVar9);
    uVar8 = extraout_x1_02;
  }
  else if (*(char *)(lVar12 + 0x4a) == '\0') {
    (*pcVar16)(lVar12);
    uVar8 = extraout_x1;
  }
  else {
code_r0x014b34f8:
    (*pcVar16)(plVar1,lVar12);
    uVar8 = extraout_x1_00;
  }
code_r0x014b3504:
  lVar11 = lVar11 + 1;
  if (lVar11 == lVar17) {
    return;
  }
  goto code_r0x014b3438;
}



// ============================================================
// RVA: 0x15da058 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.SetKinematic
// ============================================================

/* WARNING: Possible PIC construction at 0x015da2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015da278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015da474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015da1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015da478) */
/* WARNING: Removing unreachable block (ram,0x015da47c) */
/* WARNING: Removing unreachable block (ram,0x015da480) */
/* WARNING: Removing unreachable block (ram,0x015da484) */
/* WARNING: Removing unreachable block (ram,0x015da48c) */
/* WARNING: Removing unreachable block (ram,0x015da490) */
/* WARNING: Removing unreachable block (ram,0x015da494) */
/* WARNING: Removing unreachable block (ram,0x015da4a0) */
/* WARNING: Removing unreachable block (ram,0x015da4a4) */
/* WARNING: Removing unreachable block (ram,0x015da4a8) */
/* WARNING: Removing unreachable block (ram,0x015da4ac) */
/* WARNING: Removing unreachable block (ram,0x015da4b4) */
/* WARNING: Removing unreachable block (ram,0x015da4b8) */
/* WARNING: Removing unreachable block (ram,0x015da4bc) */
/* WARNING: Removing unreachable block (ram,0x015da50c) */
/* WARNING: Removing unreachable block (ram,0x015da4c4) */
/* WARNING: Removing unreachable block (ram,0x015da514) */
/* WARNING: Removing unreachable block (ram,0x015da4cc) */

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetKinematic
               (long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  ulong unaff_x21;
  code *pcVar16;
  undefined8 unaff_x22;
  long lVar17;
  undefined8 unaff_x23;
  undefined1 *puVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *puVar19;
  float extraout_s0;
  float fVar20;
  uint uVar21;
  undefined4 uVar22;
  float extraout_s0_00;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong unaff_d8;
  uint uVar27;
  ulong unaff_d9;
  uint uVar28;
  ulong unaff_d10;
  uint uVar29;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  undefined8 unaff_d15;
  
  puVar18 = &stack0xfffffffffffffff0;
  lVar13 = *(long *)(param_1 + 0x10);
  if (param_3 == 2) {
    if (lVar13 == 0) goto LAB_015da0f8;
    unaff_x21 = 1;
  }
  else {
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x58) == 0)) goto LAB_015da0f8;
    unaff_x21 = (ulong)(*(char *)(*(long *)(lVar13 + 0x58) + 0x44) != '\0');
  }
  if (*(long *)(lVar13 + 0x70) != 0) {
    uVar7 = /*UnityEngine.Rigidbody$$get_isKinematic*/ func_0x032a26c4(*(long *)(lVar13 + 0x70),0);
    if (((uint)unaff_x21 & (uVar7 ^ (uint)param_2)) != 1) {
      return;
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x70), lVar13 != 0)) {
      if (pcRam0000000003ec27e0 == (code *)0x0) {
        pcRam0000000003ec27e0 =
             (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x032a2750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec27e0)(lVar13,param_2);
      return;
    }
  }
LAB_015da0f8:
  puVar19 = &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__UpdateRespawning;
  lVar13 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffffd0;
  fVar20 = extraout_s0;
  while( true ) {
    puVar3 = puVar4 + -0x70;
    *(undefined8 *)(puVar4 + -0x60) = unaff_d15;
    *(ulong *)(puVar4 + -0x58) = unaff_d14;
    *(ulong *)(puVar4 + -0x50) = unaff_d13;
    *(ulong *)(puVar4 + -0x48) = unaff_d12;
    *(ulong *)(puVar4 + -0x40) = unaff_d11;
    *(ulong *)(puVar4 + -0x38) = unaff_d10;
    *(ulong *)(puVar4 + -0x30) = unaff_d9;
    *(ulong *)(puVar4 + -0x28) = unaff_d8;
    *(long *)(puVar4 + -0x20) = param_1;
    *(undefined8 *)(puVar4 + -0x18) = param_2;
    *(undefined1 **)(puVar4 + -0x10) = puVar18;
    *(undefined **)(puVar4 + -8) = puVar19;
    puVar18 = puVar4 + -0x10;
    *(undefined1 *)(lVar13 + 0xd5) = 1;
    if (0.0 <= *(float *)(lVar13 + 0xa8)) break;
    if (*(float *)(lVar13 + 0x8c) < 0.0) {
      if (0.0 <= *(float *)(lVar13 + 0x94)) {
        fVar20 = *(float *)(lVar13 + 0x94) - fVar20;
        *(float *)(lVar13 + 0x94) = fVar20;
        if (0.0 < fVar20) {
          return;
        }
        *(undefined4 *)(lVar13 + 0x94) = 0xbf800000;
        lVar10 = *(long *)(lVar13 + 0xf0);
        if (lVar10 == 0) {
          *(undefined4 *)(lVar13 + 0xa0) = *(undefined4 *)(lVar13 + 0x98);
          return;
        }
        puVar19 = &UNK_015da2b0;
        puVar3 = puVar4 + -0x70;
      }
      else {
        if (*(float *)(lVar13 + 0xa0) < 0.0) {
          return;
        }
        fVar20 = *(float *)(lVar13 + 0xa0) - fVar20;
        *(float *)(lVar13 + 0xa0) = fVar20;
        if (0.0 < fVar20) {
          return;
        }
        *(undefined4 *)(lVar13 + 0xa0) = 0xbf800000;
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetKinematic(lVar13,0,1);
        lVar10 = *(long *)(lVar13 + 0xd8);
        if (lVar10 == 0) {
          return;
        }
        puVar18 = *(undefined1 **)(puVar4 + -0x10);
        puVar19 = *(undefined **)(puVar4 + -8);
        param_1 = *(long *)(puVar4 + -0x20);
        lVar13 = *(long *)(puVar4 + -0x18);
        puVar3 = puVar4;
      }
      goto code_r0x014b33f0;
    }
    fVar20 = *(float *)(lVar13 + 0x8c) - fVar20;
    *(float *)(lVar13 + 0x8c) = fVar20;
    if (0.0 <= fVar20) {
      return;
    }
    *(undefined4 *)(lVar13 + 0x8c) = 0xbf800000;
    param_1 = *(long *)(lVar13 + 0x10);
    uVar23 = *(uint *)(lVar13 + 0xb0);
    uVar24 = *(uint *)(lVar13 + 0xb4);
    uVar21 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0xac),0);
    unaff_d12 = (ulong)uVar21;
    unaff_d13 = (ulong)uVar23;
    unaff_d14 = (ulong)uVar24;
    uVar26 = *(uint *)(lVar13 + 0xb8);
    uVar27 = *(uint *)(lVar13 + 0xbc);
    unaff_d9 = (ulong)uVar27;
    uVar28 = *(uint *)(lVar13 + 0xc0);
    unaff_d10 = (ulong)uVar28;
    uVar29 = *(uint *)(lVar13 + 0xc4);
    unaff_d11 = (ulong)uVar29;
    uVar7 = uVar23;
    uVar25 = uVar24;
    uVar22 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (param_1 != 0) {
      *(undefined4 *)(puVar4 + -0x70) = uVar22;
      *(uint *)(puVar4 + -0x6c) = uVar7;
      *(uint *)(puVar4 + -0x68) = uVar25;
      Atlas_Gameplay_Kart_KartPhysics__Reset
                (uVar21,uVar23,uVar24,uVar26,uVar27,uVar28,uVar29,param_1,0);
      /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$ResetEffects*/ func_0x015daabc(lVar13);
      *(undefined4 *)(lVar13 + 0x94) = *(undefined4 *)(lVar13 + 0x90);
      lVar10 = *(long *)(lVar13 + 0xe0);
      if (lVar10 == 0) {
        *(undefined4 *)(lVar13 + 0x5c) = *(undefined4 *)(lVar13 + 0x9c);
        return;
      }
      puVar19 = &UNK_015da27c;
      puVar3 = puVar4 + -0x70;
      goto code_r0x014b33f0;
    }
    param_1 = func_0x00f78af4();
    *(ulong *)(puVar4 + -0xb0) = unaff_d9;
    *(ulong *)(puVar4 + -0xa8) = (ulong)uVar26;
    *(undefined8 *)(puVar4 + -0xa0) = unaff_x22;
    *(ulong *)(puVar4 + -0x98) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x90) = 0;
    *(long *)(puVar4 + -0x88) = lVar13;
    *(undefined1 **)(puVar4 + -0x80) = puVar18;
    *(undefined **)(puVar4 + -0x78) =
         &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__Update;
    puVar18 = puVar4 + -0x80;
    unaff_d8 = (ulong)(uint)extraout_s0_00;
    if ((bRam0000000003eb5397 & 1) == 0) {
      func_0x00f78a20(0x3d22ce0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5397 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_2 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(param_2,0);
    *(float *)(param_1 + 0x100) = extraout_s0_00;
    if (*(long *)(param_1 + 0x10) == 0) {
code_r0x015da4d0:
      *(undefined8 *)(puVar4 + -0x90) = *(undefined8 *)(puVar4 + -0x90);
      *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x88);
      *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x80);
      *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x78);
      if (pcRam0000000003ec05a0 == (code *)0x0) {
        pcRam0000000003ec05a0 =
             (code *)func_0x00f789d4(
                                    "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec05a0)(param_2);
      return;
    }
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
    if ((uVar14 & 1) != 0) goto code_r0x015da4d0;
    lVar13 = *(long *)(param_1 + 0x10);
    if (lVar13 == 0) {
      func_0x00f78af4();
code_r0x015da518:
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x15da51c);
      (*pcVar16)();
    }
    unaff_x21 = *(ulong *)(lVar13 + 0x40);
    lVar13 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar13,0);
    if (unaff_x21 == 0) {
      func_0x00f78af4();
      goto code_r0x015da518;
    }
    uVar8 = Atlas_Gameplay_Kart_KartPhysicsHandling__GetHandlingModifierFromSurfaceType
                      (unaff_x21,*(undefined4 *)(lVar13 + 0x178));
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    if ((0.0 < *(float *)(param_1 + 0x58)) &&
       (fVar20 = *(float *)(param_1 + 0x58) - extraout_s0_00, *(float *)(param_1 + 0x58) = fVar20,
       fVar20 <= 0.0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        func_0x00f78af4();
        goto code_r0x015da518;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x015da518;
      }
      *(undefined1 *)(lVar13 + 0x84) = 0;
      *(undefined1 *)(lVar13 + 0x86) = *(undefined1 *)(lVar13 + 0x85);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x5c)) {
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) - extraout_s0_00;
    }
    if ((0.0 < *(float *)(param_1 + 0x60)) &&
       (fVar20 = *(float *)(param_1 + 0x60) - extraout_s0_00, *(float *)(param_1 + 0x60) = fVar20,
       fVar20 <= 0.0)) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if ((0.0 < *(float *)(param_1 + 0x68)) &&
       (fVar20 = *(float *)(param_1 + 0x68) - extraout_s0_00, *(float *)(param_1 + 0x68) = fVar20,
       fVar20 <= 0.0)) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x6c)) {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - extraout_s0_00;
    }
    puVar19 = &UNK_015da478;
    puVar4 = puVar4 + -0xb0;
    lVar13 = param_1;
    fVar20 = extraout_s0_00;
  }
  fVar20 = *(float *)(lVar13 + 0xa8) - fVar20;
  *(float *)(lVar13 + 0xa8) = fVar20;
  if (0.0 <= fVar20) {
    return;
  }
  *(undefined4 *)(lVar13 + 0xa8) = 0xbf800000;
  lVar10 = *(long *)(lVar13 + 0xe8);
  if (lVar10 == 0) {
    *(undefined4 *)(lVar13 + 0x8c) = *(undefined4 *)(lVar13 + 0x88);
    return;
  }
  puVar19 = &UNK_015da1d4;
code_r0x014b33f0:
  uVar8 = 0;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(ulong *)(puVar3 + -0x28) = unaff_x21;
  *(long *)(puVar3 + -0x20) = param_1;
  *(long *)(puVar3 + -0x18) = lVar13;
  *(undefined1 **)(puVar3 + -0x10) = puVar18;
  *(undefined **)(puVar3 + -8) = puVar19;
  *(long *)(puVar3 + -0x58) = lVar10;
  lVar13 = *(long *)(lVar10 + 0x68);
  if (lVar13 == 0) {
    puVar18 = puVar3 + -0x58;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar13 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    puVar18 = (undefined1 *)(lVar13 + 0x20);
  }
  lVar13 = 0;
  do {
    lVar11 = *(long *)(puVar18 + lVar13 * 8);
    pcVar16 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11,uVar8);
    }
    iVar5 = func_0x00f78a4c(lVar11);
    if (iVar5 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar10 + 0x18) == 0))
      goto code_r0x014b34f8;
      iVar5 = func_0x00f78a44(lVar11);
      iVar6 = func_0x00f78ec0(lVar11);
      if (iVar5 == 0) {
        uVar2 = *(ushort *)(lVar11 + 0x48);
        if (iVar6 == 0) {
          lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar11 + 0x138))(plVar1,*(undefined8 *)(lVar11 + 0x140));
          uVar8 = extraout_x1_01;
          goto code_r0x014b3504;
        }
        lVar11 = func_0x00f78a48(lVar11);
        lVar12 = *plVar1;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar11) {
              puVar9 = (undefined8 *)(lVar12 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x014b35c8;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x014b35c8:
        pcVar16 = (code *)*puVar9;
        puVar9 = (undefined8 *)puVar9[1];
      }
      else {
        if (iVar6 == 0) {
          uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar12 = *plVar1;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar11 + 0x18)) {
                lVar12 = lVar12 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x014b35a0;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar12 = func_0x00fac1f0(plVar1);
code_r0x014b35a0:
          uVar8 = *(undefined8 *)(lVar12 + 8);
        }
        puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
        pcVar16 = (code *)*puVar9;
      }
      (*pcVar16)(plVar1,puVar9);
      uVar8 = extraout_x1_02;
    }
    else if (*(char *)(lVar11 + 0x4a) == '\0') {
      (*pcVar16)(lVar11);
      uVar8 = extraout_x1;
    }
    else {
code_r0x014b34f8:
      (*pcVar16)(plVar1,lVar11);
      uVar8 = extraout_x1_00;
    }
code_r0x014b3504:
    lVar13 = lVar13 + 1;
    if (lVar13 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15da0fc | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.UpdateRespawning
// ============================================================

/* WARNING: Possible PIC construction at 0x015da2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015da278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015da1d0: Changing call to branch */

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__UpdateRespawning
               (float param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 unaff_x22;
  long lVar15;
  undefined8 unaff_x23;
  undefined1 *puVar16;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar17;
  float extraout_s0;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  puVar16 = &stack0xfffffffffffffff0;
  *(undefined1 *)(param_2 + 0xd5) = 1;
  if (0.0 <= *(float *)(param_2 + 0xa8)) {
    param_1 = *(float *)(param_2 + 0xa8) - param_1;
    *(float *)(param_2 + 0xa8) = param_1;
    if (0.0 <= param_1) {
      return;
    }
    *(undefined4 *)(param_2 + 0xa8) = 0xbf800000;
    lVar7 = *(long *)(param_2 + 0xe8);
    if (lVar7 == 0) {
      *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x88);
      return;
    }
    unaff_x30 = &UNK_015da1d4;
    register0x00000008 = (BADSPACEBASE *)&uStack_70;
    unaff_x19 = param_2;
    unaff_x29 = puVar16;
  }
  else if (0.0 <= *(float *)(param_2 + 0x8c)) {
    param_1 = *(float *)(param_2 + 0x8c) - param_1;
    *(float *)(param_2 + 0x8c) = param_1;
    if (0.0 <= param_1) {
      return;
    }
    *(undefined4 *)(param_2 + 0x8c) = 0xbf800000;
    unaff_x20 = *(long *)(param_2 + 0x10);
    uVar19 = *(undefined4 *)(param_2 + 0xb0);
    uVar21 = *(undefined4 *)(param_2 + 0xb4);
    uVar17 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_2 + 0xac),0);
    uVar23 = *(undefined4 *)(param_2 + 0xb8);
    uVar24 = *(undefined4 *)(param_2 + 0xbc);
    uVar25 = *(undefined4 *)(param_2 + 0xc0);
    uVar26 = *(undefined4 *)(param_2 + 0xc4);
    uVar20 = uVar19;
    uVar22 = uVar21;
    uStack_70 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (unaff_x20 == 0) {
      lVar7 = func_0x00f78af4();
      if ((bRam0000000003eb5397 & 1) == 0) {
        func_0x00f78a20(0x3d22ce0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5397 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xb8);
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
      *(float *)(lVar7 + 0x100) = extraout_s0;
      if (*(long *)(lVar7 + 0x10) != 0) {
        uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x40);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
        if ((uVar11 & 1) == 0) {
          lVar8 = *(long *)(lVar7 + 0x10);
          if (lVar8 == 0) {
            func_0x00f78af4();
          }
          else {
            lVar15 = *(long *)(lVar8 + 0x40);
            lVar8 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar8,0);
            if (lVar15 == 0) {
              func_0x00f78af4();
            }
            else {
              uVar13 = Atlas_Gameplay_Kart_KartPhysicsHandling__GetHandlingModifierFromSurfaceType
                                 (lVar15,*(undefined4 *)(lVar8 + 0x178));
              *(undefined8 *)(lVar7 + 0x20) = uVar13;
              if ((0.0 < *(float *)(lVar7 + 0x58)) &&
                 (fVar18 = *(float *)(lVar7 + 0x58) - extraout_s0, *(float *)(lVar7 + 0x58) = fVar18
                 , fVar18 <= 0.0)) {
                if (*(long *)(lVar7 + 0x10) == 0) {
                  func_0x00f78af4();
                  goto code_r0x015da518;
                }
                lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + 0x48);
                if (lVar8 == 0) {
                  func_0x00f78af4();
                  goto code_r0x015da518;
                }
                *(undefined1 *)(lVar8 + 0x84) = 0;
                *(undefined1 *)(lVar8 + 0x86) = *(undefined1 *)(lVar8 + 0x85);
                *(undefined8 *)(lVar7 + 0x28) = 0;
              }
              if (0.0 < *(float *)(lVar7 + 0x5c)) {
                *(float *)(lVar7 + 0x5c) = *(float *)(lVar7 + 0x5c) - extraout_s0;
              }
              if ((0.0 < *(float *)(lVar7 + 0x60)) &&
                 (fVar18 = *(float *)(lVar7 + 0x60) - extraout_s0, *(float *)(lVar7 + 0x60) = fVar18
                 , fVar18 <= 0.0)) {
                *(undefined8 *)(lVar7 + 0x30) = 0;
              }
              if ((0.0 < *(float *)(lVar7 + 0x68)) &&
                 (fVar18 = *(float *)(lVar7 + 0x68) - extraout_s0, *(float *)(lVar7 + 0x68) = fVar18
                 , fVar18 <= 0.0)) {
                *(undefined8 *)(lVar7 + 0x38) = 0;
              }
              if (0.0 < *(float *)(lVar7 + 0x6c)) {
                *(float *)(lVar7 + 0x6c) = *(float *)(lVar7 + 0x6c) - extraout_s0;
              }
              Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__UpdateRespawning
                        (extraout_s0,lVar7);
              if ((0.0 <= *(float *)(lVar7 + 0x80)) &&
                 (fVar18 = *(float *)(lVar7 + 0x80) - extraout_s0, *(float *)(lVar7 + 0x80) = fVar18
                 , fVar18 < 0.0)) {
                Atlas_Gameplay_Kart_KartHandlingTurningModifiers__Reset(lVar7 + 0x48,0);
              }
              if ((*(float *)(lVar7 + 0x84) < 0.0) ||
                 (fVar18 = *(float *)(lVar7 + 0x84) - extraout_s0, *(float *)(lVar7 + 0x84) = fVar18
                 , 0.0 <= fVar18)) goto code_r0x015da4d0;
              if (*(long *)(lVar7 + 0x10) == 0) {
                func_0x00f78af4();
              }
              else {
                lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x48);
                if (lVar7 != 0) {
                  *(undefined1 *)(lVar7 + 0x23) = 0;
                  goto code_r0x015da4d0;
                }
                func_0x00f78af4();
              }
            }
          }
code_r0x015da518:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x15da51c);
          (*pcVar14)();
        }
      }
code_r0x015da4d0:
      if (pcRam0000000003ec05a0 == (code *)0x0) {
        pcRam0000000003ec05a0 =
             (code *)func_0x00f789d4(
                                    "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec05a0)(uVar5);
      return;
    }
    uStack_6c = uVar20;
    uStack_68 = uVar22;
    Atlas_Gameplay_Kart_KartPhysics__Reset
              (uVar17,uVar19,uVar21,uVar23,uVar24,uVar25,uVar26,unaff_x20,0);
    /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$ResetEffects*/ func_0x015daabc(param_2);
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x90);
    lVar7 = *(long *)(param_2 + 0xe0);
    if (lVar7 == 0) {
      *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x9c);
      return;
    }
    unaff_x30 = &UNK_015da27c;
    register0x00000008 = (BADSPACEBASE *)&uStack_70;
    unaff_x19 = param_2;
    unaff_x29 = puVar16;
  }
  else if (0.0 <= *(float *)(param_2 + 0x94)) {
    param_1 = *(float *)(param_2 + 0x94) - param_1;
    *(float *)(param_2 + 0x94) = param_1;
    if (0.0 < param_1) {
      return;
    }
    *(undefined4 *)(param_2 + 0x94) = 0xbf800000;
    lVar7 = *(long *)(param_2 + 0xf0);
    if (lVar7 == 0) {
      *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_2 + 0x98);
      return;
    }
    unaff_x30 = &UNK_015da2b0;
    register0x00000008 = (BADSPACEBASE *)&uStack_70;
    unaff_x19 = param_2;
    unaff_x29 = puVar16;
  }
  else {
    if (*(float *)(param_2 + 0xa0) < 0.0) {
      return;
    }
    param_1 = *(float *)(param_2 + 0xa0) - param_1;
    *(float *)(param_2 + 0xa0) = param_1;
    if (0.0 < param_1) {
      return;
    }
    *(undefined4 *)(param_2 + 0xa0) = 0xbf800000;
    Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetKinematic(param_2,0,1);
    lVar7 = *(long *)(param_2 + 0xd8);
    if (lVar7 == 0) {
      return;
    }
  }
  uVar5 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = lVar7;
  lVar8 = *(long *)(lVar7 + 0x68);
  if (lVar8 == 0) {
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar8 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    puVar16 = (undefined1 *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = *(long *)(puVar16 + lVar8 * 8);
    pcVar14 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar5);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
      goto code_r0x014b34f8;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          uVar5 = extraout_x1_01;
          goto code_r0x014b3504;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x014b35c8;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x014b35c8:
        pcVar14 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x014b35a0;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x014b35a0:
          uVar5 = *(undefined8 *)(lVar10 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar9);
        pcVar14 = (code *)*puVar6;
      }
      (*pcVar14)(plVar1,puVar6);
      uVar5 = extraout_x1_02;
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      (*pcVar14)(lVar9);
      uVar5 = extraout_x1;
    }
    else {
code_r0x014b34f8:
      (*pcVar14)(plVar1,lVar9);
      uVar5 = extraout_x1_00;
    }
code_r0x014b3504:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15da2dc | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.Update
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__Update(float param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  
  if ((bRam0000000003eb5397 & 1) == 0) {
    func_0x00f78a20(0x3d22ce0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5397 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
  *(float *)(param_2 + 0x100) = param_1;
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == 0) {
        func_0x00f78af4();
      }
      else {
        lVar6 = *(long *)(lVar3 + 0x40);
        lVar3 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar3,0);
        if (lVar6 == 0) {
          func_0x00f78af4();
        }
        else {
          uVar5 = Atlas_Gameplay_Kart_KartPhysicsHandling__GetHandlingModifierFromSurfaceType
                            (lVar6,*(undefined4 *)(lVar3 + 0x178));
          *(undefined8 *)(param_2 + 0x20) = uVar5;
          if ((0.0 < *(float *)(param_2 + 0x58)) &&
             (fVar7 = *(float *)(param_2 + 0x58) - param_1, *(float *)(param_2 + 0x58) = fVar7,
             fVar7 <= 0.0)) {
            if (*(long *)(param_2 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x015da518;
            }
            lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x48);
            if (lVar3 == 0) {
              func_0x00f78af4();
              goto code_r0x015da518;
            }
            *(undefined1 *)(lVar3 + 0x84) = 0;
            *(undefined1 *)(lVar3 + 0x86) = *(undefined1 *)(lVar3 + 0x85);
            *(undefined8 *)(param_2 + 0x28) = 0;
          }
          if (0.0 < *(float *)(param_2 + 0x5c)) {
            *(float *)(param_2 + 0x5c) = *(float *)(param_2 + 0x5c) - param_1;
          }
          if ((0.0 < *(float *)(param_2 + 0x60)) &&
             (fVar7 = *(float *)(param_2 + 0x60) - param_1, *(float *)(param_2 + 0x60) = fVar7,
             fVar7 <= 0.0)) {
            *(undefined8 *)(param_2 + 0x30) = 0;
          }
          if ((0.0 < *(float *)(param_2 + 0x68)) &&
             (fVar7 = *(float *)(param_2 + 0x68) - param_1, *(float *)(param_2 + 0x68) = fVar7,
             fVar7 <= 0.0)) {
            *(undefined8 *)(param_2 + 0x38) = 0;
          }
          if (0.0 < *(float *)(param_2 + 0x6c)) {
            *(float *)(param_2 + 0x6c) = *(float *)(param_2 + 0x6c) - param_1;
          }
          Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__UpdateRespawning(param_1,param_2)
          ;
          if ((0.0 <= *(float *)(param_2 + 0x80)) &&
             (fVar7 = *(float *)(param_2 + 0x80) - param_1, *(float *)(param_2 + 0x80) = fVar7,
             fVar7 < 0.0)) {
            Atlas_Gameplay_Kart_KartHandlingTurningModifiers__Reset(param_2 + 0x48,0);
          }
          if ((*(float *)(param_2 + 0x84) < 0.0) ||
             (param_1 = *(float *)(param_2 + 0x84) - param_1, *(float *)(param_2 + 0x84) = param_1,
             0.0 <= param_1)) goto LAB_015da4d0;
          if (*(long *)(param_2 + 0x10) == 0) {
            func_0x00f78af4();
          }
          else {
            lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x48);
            if (lVar3 != 0) {
              *(undefined1 *)(lVar3 + 0x23) = 0;
              goto LAB_015da4d0;
            }
            func_0x00f78af4();
          }
        }
      }
code_r0x015da518:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15da51c);
      (*pcVar1)();
    }
  }
LAB_015da4d0:
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar4);
  return;
}



// ============================================================
// RVA: 0x15da5b0 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.LateUpdate
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__LateUpdate(long param_1)

{
  *(undefined2 *)(param_1 + 0xd4) = 0;
  return;
}



// ============================================================
// RVA: 0x15da5b8 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.ConsumePendingPushVel
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumePendingPushVel(long param_1)

{
  undefined4 *puVar1;
  
  if ((bRam0000000003eb5398 & 1) == 0) {
    func_0x00f78a20(0x3d265d8);
    bRam0000000003eb5398 = 1;
  }
  if (*(char *)(param_1 + 0x70) == '\0') {
    puVar1 = *(undefined4 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
  }
  else {
    *(undefined1 *)(param_1 + 0x70) = 0;
    puVar1 = (undefined4 *)(param_1 + 0x74);
  }
  return *puVar1;
}



// ============================================================
// RVA: 0x15da634 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.SetKartTurningModifiers
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetKartTurningModifiers
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6)

{
  *(undefined4 *)(param_6 + 0x80) = param_5;
  *(undefined4 *)(param_6 + 0x48) = param_1;
  *(undefined4 *)(param_6 + 0x4c) = param_2;
  *(undefined4 *)(param_6 + 0x50) = param_3;
  *(undefined4 *)(param_6 + 0x54) = param_4;
  return;
}



// ============================================================
// RVA: 0x15da644 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.SetKartTriggerEffect
// ============================================================

/* WARNING: Possible PIC construction at 0x015da704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015da708) */
/* WARNING: Removing unreachable block (ram,0x015da718) */
/* WARNING: Removing unreachable block (ram,0x015da728) */
/* WARNING: Removing unreachable block (ram,0x015da734) */
/* WARNING: Removing unreachable block (ram,0x015da744) */
/* WARNING: Removing unreachable block (ram,0x015da74c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetKartTriggerEffect
               (undefined4 param_1,float param_2,float param_3,long param_4,long *param_5)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  float *pfVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  float fVar17;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long lStack_c8;
  
  if (*param_5 == 0) {
    return;
  }
  fVar21 = param_2;
  if (*(long *)(param_4 + 0x10) != 0) {
    pfVar6 = (float *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_4 + 0x10),0);
    lVar13 = *param_5;
    if (lVar13 != 0) {
      fVar19 = *pfVar6;
      if (((*(float *)(lVar13 + 0x1c) <= 0.0) || (fVar19 < *(float *)(lVar13 + 0x14))) ||
         (0.0 < *(float *)(param_4 + 0x5c))) {
LAB_015da754:
        if ((*(char *)(lVar13 + 0x28) == '\0') || (0.0 < *(float *)(param_4 + 0x60))) {
code_r0x015da878:
          if ((*(char *)(lVar13 + 0x54) == '\0') || (0.0 < *(float *)(param_4 + 0x6c))) {
            return;
          }
          *(long *)(param_4 + 0x38) = lVar13;
          lVar13 = *param_5;
          if (lVar13 != 0) {
            uVar18 = *(undefined4 *)(lVar13 + 0x68);
            *(undefined4 *)(param_4 + 0x68) = *(undefined4 *)(lVar13 + 0x58);
            *(undefined4 *)(param_4 + 0x6c) = uVar18;
            return;
          }
        }
        else {
          if (*(char *)(lVar13 + 0x29) == '\0') {
            fVar21 = *(float *)(lVar13 + 0x4c);
            fVar22 = *(float *)(lVar13 + 0x50);
            fVar20 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar13 + 0x48),0);
          }
          else {
            if (*(long *)(param_4 + 0x10) == 0) goto LAB_015da8c4;
            lVar13 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_4 + 0x10),0);
            fVar20 = *(float *)(lVar13 + 0x13c);
            fVar21 = *(float *)(lVar13 + 0x140);
            fVar22 = *(float *)(lVar13 + 0x144);
            fVar17 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(param_1,0);
            fVar20 = fVar20 - fVar17;
            fVar21 = fVar21 - param_2;
            fVar22 = fVar22 - param_3;
          }
          if (*param_5 != 0) {
            fVar17 = fVar21;
            if (*(char *)(*param_5 + 0x2a) != '\0') {
              fVar17 = 0.0;
            }
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar13 = *param_5;
            if (lVar13 != 0) {
              if (*(char *)(lVar13 + 0x38) == '\0') {
                fVar19 = *(float *)(lVar13 + 0x3c);
              }
              else {
                fVar19 = fVar19 * *(float *)(lVar13 + 0x40);
              }
              *(undefined1 *)(param_4 + 0x70) = 1;
              fVar21 = fVar20 * fVar19;
              *(float *)(param_4 + 0x74) = fVar21;
              *(float *)(param_4 + 0x78) = fVar17 * fVar19;
              *(float *)(param_4 + 0x7c) = fVar22 * fVar19;
              lVar13 = *param_5;
              if (lVar13 != 0) {
                *(undefined4 *)(param_4 + 0x60) = *(undefined4 *)(lVar13 + 0x44);
                *(long *)(param_4 + 0x30) = lVar13;
                lVar13 = *param_5;
                if (lVar13 != 0) goto code_r0x015da878;
              }
            }
          }
        }
      }
      else {
        plVar7 = *(long **)(param_4 + 200);
        if (plVar7 == (long *)0x0) {
LAB_015da6fc:
          fVar19 = *(float *)(lVar13 + 0x1c);
          fVar21 = *(float *)(lVar13 + 0x20);
          goto code_r0x015da8c8;
        }
        uVar8 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
        if ((uVar8 & 1) == 0) {
          lVar13 = *param_5;
          if (lVar13 != 0) goto LAB_015da6fc;
        }
        else {
          Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                    (_UNK_033f813c,param_4);
          lVar13 = *param_5;
          if (lVar13 != 0) goto LAB_015da754;
        }
      }
    }
  }
LAB_015da8c4:
  param_4 = func_0x00f78af4();
  fVar19 = extraout_s0;
code_r0x015da8c8:
  if (0.0 < *(float *)(param_4 + 0x5c)) {
    return;
  }
  *(float *)(param_4 + 0x58) = fVar19;
  *(float *)(param_4 + 0x5c) = fVar21;
  *(float *)(param_4 + 100) = fVar19;
  if ((*(long *)(param_4 + 0x10) == 0) ||
     (lVar13 = *(long *)(*(long *)(param_4 + 0x10) + 0x48), lVar13 == 0)) {
    lVar13 = func_0x00f78af4();
    *(undefined4 *)(lVar13 + 0xd0) = extraout_s0_00;
    return;
  }
  *(bool *)(lVar13 + 0x84) = 0.0 < fVar19;
  *(bool *)(lVar13 + 0x86) = 0.0 < fVar19;
  if ((0.0 < fVar19) || (*(char *)(lVar13 + 0x85) != '\0')) {
    *(undefined1 *)(lVar13 + 0x86) = 1;
  }
  lVar13 = *(long *)(param_4 + 0xf8);
  if (lVar13 == 0) {
    return;
  }
  uVar9 = 0;
  lStack_c8 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar7 = &lStack_c8;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar10 + 0x18);
    if (lVar16 == 0) {
      return;
    }
    plVar7 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar7[lVar10];
    pcVar15 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11,uVar9);
    }
    iVar3 = func_0x00f78a4c(lVar11);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
      goto code_r0x014b3770;
      iVar3 = func_0x00f78a44(lVar11);
      iVar4 = func_0x00f78ec0(lVar11);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar11 + 0x48);
        if (iVar4 == 0) {
          lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar11 + 0x138))(plVar1,*(undefined8 *)(lVar11 + 0x140));
          uVar9 = extraout_x1_01;
          goto code_r0x014b377c;
        }
        lVar11 = func_0x00f78a48(lVar11);
        lVar12 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar5 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x014b3840;
            }
            piVar14 = piVar14 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x014b3840:
        pcVar15 = (code *)*puVar5;
        puVar5 = (undefined8 *)puVar5[1];
      }
      else {
        if (iVar4 == 0) {
          uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar12 = *plVar1;
          uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x014b3818;
              }
              piVar14 = piVar14 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          lVar12 = func_0x00fac1f0(plVar1);
code_r0x014b3818:
          uVar9 = *(undefined8 *)(lVar12 + 8);
        }
        puVar5 = (undefined8 *)func_0x00f78acc(uVar9,lVar11);
        pcVar15 = (code *)*puVar5;
      }
      (*pcVar15)(plVar1,puVar5);
      uVar9 = extraout_x1_02;
    }
    else if (*(char *)(lVar11 + 0x4a) == '\0') {
      (*pcVar15)(lVar11);
      uVar9 = extraout_x1;
    }
    else {
code_r0x014b3770:
      (*pcVar15)(plVar1,lVar11);
      uVar9 = extraout_x1_00;
    }
code_r0x014b377c:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar16) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15da8c8 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.SetSpinout
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetSpinout
               (float param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined4 extraout_s0;
  long lStack_58;
  
  if (0.0 < *(float *)(param_3 + 0x5c)) {
    return;
  }
  *(float *)(param_3 + 0x58) = param_1;
  *(undefined4 *)(param_3 + 0x5c) = param_2;
  *(float *)(param_3 + 100) = param_1;
  if ((*(long *)(param_3 + 0x10) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_3 + 0x10) + 0x48), lVar10 == 0)) {
    lVar10 = func_0x00f78af4();
    *(undefined4 *)(lVar10 + 0xd0) = extraout_s0;
    return;
  }
  *(bool *)(lVar10 + 0x84) = 0.0 < param_1;
  *(bool *)(lVar10 + 0x86) = 0.0 < param_1;
  if ((0.0 < param_1) || (*(char *)(lVar10 + 0x85) != '\0')) {
    *(undefined1 *)(lVar10 + 0x86) = 1;
  }
  lVar10 = *(long *)(param_3 + 0xf8);
  if (lVar10 == 0) {
    return;
  }
  uVar6 = 0;
  lStack_58 = lVar10;
  lVar7 = *(long *)(lVar10 + 0x68);
  if (lVar7 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar7 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar7 + 0x20);
  }
  lVar7 = 0;
  do {
    lVar8 = plVar15[lVar7];
    pcVar13 = *(code **)(lVar8 + 0x10);
    plVar1 = *(long **)(lVar8 + 0x20);
    lVar8 = *(long *)(lVar8 + 0x28);
    if (*(short *)(lVar8 + 0x48) == -1) {
      func_0x00f78ad8(lVar8,uVar6);
    }
    iVar3 = func_0x00f78a4c(lVar8);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar8 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar10 + 0x18) == 0))
      goto code_r0x014b3770;
      iVar3 = func_0x00f78a44(lVar8);
      iVar4 = func_0x00f78ec0(lVar8);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar8 + 0x48);
        if (iVar4 == 0) {
          lVar8 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar8 + 0x138))(plVar1,*(undefined8 *)(lVar8 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x014b377c;
        }
        lVar8 = func_0x00f78a48(lVar8);
        lVar9 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar5 = (undefined8 *)(lVar9 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x014b3840;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar1,lVar8,(ulong)uVar2);
code_r0x014b3840:
        pcVar13 = (code *)*puVar5;
        puVar5 = (undefined8 *)puVar5[1];
      }
      else {
        if (iVar4 == 0) {
          uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar8 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar9 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar8 + 0x18)) {
                lVar9 = lVar9 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar8 + 0x48)) * 0x10 +
                        0x138;
                goto code_r0x014b3818;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar9 = func_0x00fac1f0(plVar1);
code_r0x014b3818:
          uVar6 = *(undefined8 *)(lVar9 + 8);
        }
        puVar5 = (undefined8 *)func_0x00f78acc(uVar6,lVar8);
        pcVar13 = (code *)*puVar5;
      }
      (*pcVar13)(plVar1,puVar5);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar8 + 0x4a) == '\0') {
      (*pcVar13)(lVar8);
      uVar6 = extraout_x1;
    }
    else {
code_r0x014b3770:
      (*pcVar13)(plVar1,lVar8);
      uVar6 = extraout_x1_00;
    }
code_r0x014b377c:
    lVar7 = lVar7 + 1;
    if (lVar7 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15da938 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.SetAISpeedModifier
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetAISpeedModifier
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xd0) = param_1;
  return;
}



// ============================================================
// RVA: 0x15da940 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetSpeedModifier
// ============================================================

float Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetSpeedModifier(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(float *)(*(long *)(param_1 + 0x20) + 0x10) * *(float *)(param_1 + 0xd0);
  }
  return 1.0;
}



// ============================================================
// RVA: 0x15da960 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetReverseSpeedModifier
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetReverseSpeedModifier(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14);
  }
  return 0x3f800000;
}



// ============================================================
// RVA: 0x15da978 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetBrakingModifier
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetBrakingModifier(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  return 0x3f800000;
}



// ============================================================
// RVA: 0x15da990 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetDriftSpeedMinModifier
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetDriftSpeedMinModifier(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x1c);
  }
  return 0x3f800000;
}



// ============================================================
// RVA: 0x15da9a8 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetSurfaceDecelerationFactor
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetSurfaceDecelerationFactor(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  return 0x3f800000;
}



// ============================================================
// RVA: 0x15da9c0 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetRotSpeedFromKartSpeedModifier
// ============================================================

float Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetRotSpeedFromKartSpeedModifier
                (long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x20) != 0) {
    fVar1 = fVar1 * *(float *)(*(long *)(param_1 + 0x20) + 0x24);
  }
  return fVar1;
}



// ============================================================
// RVA: 0x15da9d8 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetRotSpeedFromSteerAngleModifier
// ============================================================

float Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetRotSpeedFromSteerAngleModifier
                (long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x4c);
  if (*(long *)(param_1 + 0x20) != 0) {
    fVar1 = fVar1 * *(float *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  return fVar1;
}



// ============================================================
// RVA: 0x15da9f0 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetTireGripModifier
// ============================================================

float Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetTireGripModifier(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x20) != 0) {
    fVar1 = fVar1 * *(float *)(*(long *)(param_1 + 0x20) + 0x2c);
  }
  return fVar1;
}



// ============================================================
// RVA: 0x15daa08 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetTurnSpeedCompensationModifier
// ============================================================

float Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetTurnSpeedCompensationModifier
                (long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x54);
  if (*(long *)(param_1 + 0x20) != 0) {
    fVar1 = fVar1 * *(float *)(*(long *)(param_1 + 0x20) + 0x30);
  }
  return fVar1;
}



// ============================================================
// RVA: 0x15daa20 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetTurnSpeedDriftCompensationModifier
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetTurnSpeedDriftCompensationModifier
          (long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x34);
  }
  return 0x3f800000;
}



// ============================================================
// RVA: 0x15daa38 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetRotSpeedDriftRatioModifier
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetRotSpeedDriftRatioModifier(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x38);
  }
  return 0x3f800000;
}



// ============================================================
// RVA: 0x15daa50 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetTireGripDriftMinModifier
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetTireGripDriftMinModifier(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x3c);
  }
  return 0x3f800000;
}



// ============================================================
// RVA: 0x15daa68 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetTireGripDriftMaxModifier
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetTireGripDriftMaxModifier(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x40);
  }
  return 0x3f800000;
}



// ============================================================
// RVA: 0x15daa80 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.GetHopForceModifier
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetHopForceModifier(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x44);
  }
  return 0x3f800000;
}



// ============================================================
// RVA: 0x15daa98 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.ClearSpeedLimitEffect
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ClearSpeedLimitEffect(long param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x15daaa8 | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.SetInvuln
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetInvuln
               (undefined4 param_1,long param_2)

{
  if (*(float *)(param_2 + 0x5c) <= 0.0) {
    *(undefined4 *)(param_2 + 0x5c) = param_1;
  }
  return;
}



// ============================================================
// RVA: 0x15daabc | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager.ResetEffects
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ResetEffects
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_5 + 0x68) = 0xbf800000bf800000;
  *(undefined8 *)(param_5 + 0x38) = 0;
  *(undefined4 *)(param_5 + 0x60) = 0xbf800000;
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_5 + 0x58) = uVar4;
  if ((*(long *)(param_5 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_5 + 0x10) + 0x48), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x84) = 0;
    *(undefined1 *)(lVar2 + 0x86) = *(undefined1 *)(lVar2 + 0x85);
    *(undefined8 *)(param_5 + 0x28) = 0;
    *(undefined8 *)(param_5 + 0x30) = 0;
    plVar1 = *(long **)(param_5 + 200);
    lVar2 = 0;
    if (plVar1 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
      if ((int)lVar2 != 0) {
        if (*(long *)(param_5 + 200) == 0) goto LAB_015dab48;
        lVar2 = /*Atlas.Gameplay.Usables.Usable$$MarkForDestroy*/ func_0x01523e20(*(long *)(param_5 + 200),0,0);
        *(undefined8 *)(param_5 + 200) = 0;
      }
    }
    return lVar2;
  }
LAB_015dab48:
  lVar2 = func_0x00f78af4();
  *(undefined4 *)(lVar2 + 0x18) = 0x3f800000;
  uVar3 = Atlas_Gameplay_Kart_KartHandlingTurningModifiers__CreateDefault(0);
  *(undefined4 *)(lVar2 + 0x48) = uVar3;
  *(undefined4 *)(lVar2 + 0x4c) = param_2;
  *(undefined4 *)(lVar2 + 0x50) = param_3;
  *(undefined4 *)(lVar2 + 0x54) = param_4;
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar2 + 0x58) = uVar4;
  *(undefined4 *)(lVar2 + 0x60) = 0xbf800000;
  *(undefined8 *)(lVar2 + 0x68) = uVar4;
  *(undefined8 *)(lVar2 + 0x80) = _UNK_033f8d00;
  *(undefined4 *)(lVar2 + 0x8c) = 0xbf800000;
  *(undefined4 *)(lVar2 + 0x94) = 0xbf800000;
  *(undefined4 *)(lVar2 + 0xa0) = 0xbf800000;
  *(undefined4 *)(lVar2 + 0xa8) = 0xbf800000;
  *(undefined4 *)(lVar2 + 0xd0) = 0x3f800000;
  return lVar2;
}



// ============================================================
// RVA: 0x15dab4c | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_5 + 0x18) = 0x3f800000;
  uVar1 = Atlas_Gameplay_Kart_KartHandlingTurningModifiers__CreateDefault(0);
  *(undefined4 *)(param_5 + 0x48) = uVar1;
  *(undefined4 *)(param_5 + 0x4c) = param_2;
  *(undefined4 *)(param_5 + 0x50) = param_3;
  *(undefined4 *)(param_5 + 0x54) = param_4;
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_5 + 0x58) = uVar2;
  *(undefined4 *)(param_5 + 0x60) = 0xbf800000;
  *(undefined8 *)(param_5 + 0x68) = uVar2;
  *(undefined8 *)(param_5 + 0x80) = _UNK_033f8d00;
  *(undefined4 *)(param_5 + 0x8c) = 0xbf800000;
  *(undefined4 *)(param_5 + 0x94) = 0xbf800000;
  *(undefined4 *)(param_5 + 0xa0) = 0xbf800000;
  *(undefined4 *)(param_5 + 0xa8) = 0xbf800000;
  *(undefined4 *)(param_5 + 0xd0) = 0x3f800000;
  return param_5;
}



// ============================================================
// RVA: 0x15dabbc | Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager..cctor
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5399 & 1) == 0) {
    func_0x00f78a20(0x3d22ce0);
    func_0x00f78a20(0x3d6ef48);
    bRam0000000003eb5399 = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartPhysicsHandlingModifiersManager.Update()')*/ uRam0000000003d6ef48,1,0,0,0);
  **(undefined8 **)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xb8) = uVar1;
  return;
}



