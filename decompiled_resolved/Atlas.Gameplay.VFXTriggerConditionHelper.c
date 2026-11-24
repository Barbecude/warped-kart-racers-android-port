// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.VFXTriggerConditionHelper

// ============================================================
// RVA: 0x1527444 | Atlas.Gameplay.VFXTriggerConditionHelper.ResolveConditions
// ============================================================

ulong Atlas_Gameplay_VFXTriggerConditionHelper__ResolveConditions(undefined4 *param_1,long param_2)

{
  float fVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  
  if (((param_2 != 0) && (iVar2 = /*Atlas.Gameplay.VFXTriggerConditionHelper$$ResolveEventCondition*/ func_0x015274a0(*param_1), iVar2 != 0)) &&
     (iVar2 = /*Atlas.Gameplay.VFXTriggerConditionHelper$$ResolveParticipantCondition*/ func_0x01527628(param_1[1],param_2), iVar2 != 0)) {
    uVar3 = *(ulong *)(param_1 + 2);
    fVar1 = (float)param_1[4];
    if ((uVar3 & 0xff) == 0) {
      uVar3 = 1;
    }
    else {
      if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
        uVar3 = func_0x00f78af4();
        return uVar3;
      }
      pfVar4 = (float *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_2 + 0x10),0);
      if ((float)(uVar3 >> 0x20) <= *pfVar4) {
        uVar3 = (ulong)(*pfVar4 < fVar1);
      }
      else {
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 0;
}



// ============================================================
// RVA: 0x15274a0 | Atlas.Gameplay.VFXTriggerConditionHelper.ResolveEventCondition
// ============================================================

ulong Atlas_Gameplay_VFXTriggerConditionHelper__ResolveEventCondition
                (undefined4 param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4e66 & 1) == 0) {
    func_0x00f78a20(0x3d24070);
    bRam0000000003eb4e66 = 1;
  }
  uVar4 = 1;
  switch(param_1) {
  case 0:
    return 1;
  default:
    return 0;
  case 4:
    if (param_2 == 0) break;
    plVar5 = *(long **)(param_2 + 0x68);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    if ((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 + -8)
        == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
      iVar2 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar5,0);
      bVar1 = iVar2 == 0;
code_r0x0152760c:
      return (ulong)bVar1;
    }
    goto code_r0x01527624;
  case 5:
    if (param_2 != 0) {
      plVar5 = *(long **)(param_2 + 0x68);
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      if ((*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 + -8
                   ) == /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) {
        iVar2 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar5,0);
        bVar1 = iVar2 == 1;
        goto code_r0x0152760c;
      }
      goto code_r0x01527624;
    }
    break;
  case 6:
    if (param_2 != 0) {
      plVar5 = *(long **)(param_2 + 0x68);
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      if ((*(byte *)(*plVar5 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070 + 300) * 8 + -8
                   ) != /*Atlas.Gameplay.Kart.RaceKartAI_TypeInfo*/ lRam0000000003d24070)) goto code_r0x01527624;
      uVar4 = Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(plVar5,0);
      if ((*(long *)(param_2 + 0x78) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_2 + 0x78) + 0x1c0), lVar8 != 0)) {
        bVar1 = (int)uVar4 == *(int *)(lVar8 + 0xcc) + -1;
        goto code_r0x0152760c;
      }
    }
  }
  func_0x00f78af4(uVar4);
code_r0x01527624:
  auVar9 = func_0x00f78e5c();
  lVar8 = auVar9._8_8_;
  puStack_38 = &Atlas_Gameplay_VFXTriggerConditionHelper__ResolveParticipantCondition;
  puStack_40 = &stack0xfffffffffffffff0;
  switch(auVar9._0_8_ & 0xffffffff) {
  case 0:
    uVar6 = 1;
    break;
  case 1:
    if (lVar8 == 0) {
code_r0x015276c8:
      auVar10 = func_0x00f78af4();
      if ((auVar10._0_8_ & 0xff) == 0) {
        uVar6 = 1;
      }
      else {
        if ((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) {
          uVar6 = func_0x00f78af4();
          return uVar6;
        }
        pfVar7 = (float *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_3 + 0x10),0);
        if (auVar10._4_4_ <= *pfVar7) {
          uVar6 = (ulong)(*pfVar7 < auVar10._8_4_);
        }
        else {
          uVar6 = 0;
        }
      }
      return uVar6;
    }
    uStack_58 = *(undefined8 *)(lVar8 + 0x50);
    uStack_60 = *(undefined8 *)(lVar8 + 0x48);
    uStack_48 = *(undefined8 *)(lVar8 + 0x60);
    uStack_50 = *(undefined8 *)(lVar8 + 0x58);
    uVar3 = /*Core.Networking.NetworkPlayer$$IsAI*/ func_0x0165abb4(&uStack_60,0);
    uVar6 = (ulong)(uVar3 ^ 1);
    break;
  case 2:
    if (lVar8 == 0) goto code_r0x015276c8;
    uVar6 = (ulong)(*(int *)(lVar8 + 0x50) == 0);
    break;
  case 3:
    if (lVar8 == 0) goto code_r0x015276c8;
    uStack_58 = *(undefined8 *)(lVar8 + 0x50);
    uStack_60 = *(undefined8 *)(lVar8 + 0x48);
    uStack_48 = *(undefined8 *)(lVar8 + 0x60);
    uStack_50 = *(undefined8 *)(lVar8 + 0x58);
    uVar6 = /*Core.Networking.NetworkPlayer$$IsAI*/ func_0x0165abb4(&uStack_60,0);
    break;
  default:
    uVar6 = 0;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x1527628 | Atlas.Gameplay.VFXTriggerConditionHelper.ResolveParticipantCondition
// ============================================================

ulong Atlas_Gameplay_VFXTriggerConditionHelper__ResolveParticipantCondition
                (undefined4 param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  undefined1 auVar4 [12];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  switch(param_1) {
  case 0:
    uVar2 = 1;
    break;
  case 1:
    if (param_2 == 0) {
code_r0x015276c8:
      auVar4 = func_0x00f78af4();
      if ((auVar4._0_8_ & 0xff) == 0) {
        uVar2 = 1;
      }
      else {
        if ((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) {
          uVar2 = func_0x00f78af4();
          return uVar2;
        }
        pfVar3 = (float *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_3 + 0x10),0);
        if (auVar4._4_4_ <= *pfVar3) {
          uVar2 = (ulong)(*pfVar3 < auVar4._8_4_);
        }
        else {
          uVar2 = 0;
        }
      }
      return uVar2;
    }
    uStack_28 = *(undefined8 *)(param_2 + 0x50);
    uStack_30 = *(undefined8 *)(param_2 + 0x48);
    uStack_18 = *(undefined8 *)(param_2 + 0x60);
    uStack_20 = *(undefined8 *)(param_2 + 0x58);
    uVar1 = /*Core.Networking.NetworkPlayer$$IsAI*/ func_0x0165abb4(&uStack_30,0);
    uVar2 = (ulong)(uVar1 ^ 1);
    break;
  case 2:
    if (param_2 == 0) goto code_r0x015276c8;
    uVar2 = (ulong)(*(int *)(param_2 + 0x50) == 0);
    break;
  case 3:
    if (param_2 == 0) goto code_r0x015276c8;
    uStack_28 = *(undefined8 *)(param_2 + 0x50);
    uStack_30 = *(undefined8 *)(param_2 + 0x48);
    uStack_18 = *(undefined8 *)(param_2 + 0x60);
    uStack_20 = *(undefined8 *)(param_2 + 0x58);
    uVar2 = /*Core.Networking.NetworkPlayer$$IsAI*/ func_0x0165abb4(&uStack_30,0);
    break;
  default:
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15276cc | Atlas.Gameplay.VFXTriggerConditionHelper.ResolveSpeedCondition
// ============================================================

ulong Atlas_Gameplay_VFXTriggerConditionHelper__ResolveSpeedCondition
                (ulong param_1,float param_2,long param_3)

{
  float *pfVar1;
  ulong uVar2;
  
  if ((param_1 & 0xff) == 0) {
    uVar2 = 1;
  }
  else {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) {
      uVar2 = func_0x00f78af4();
      return uVar2;
    }
    pfVar1 = (float *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_3 + 0x10),0);
    if ((float)(param_1 >> 0x20) <= *pfVar1) {
      uVar2 = (ulong)(*pfVar1 < param_2);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



