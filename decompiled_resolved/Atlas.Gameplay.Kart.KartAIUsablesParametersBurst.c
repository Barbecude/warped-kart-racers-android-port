// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartAIUsablesParametersBurst

// ============================================================
// RVA: 0x15bbdfc | Atlas.Gameplay.Kart.KartAIUsablesParametersBurst.GetChance
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartAIUsablesParametersBurst__GetChance(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    break;
  case 1:
    param_1 = param_1 + 5;
    break;
  case 2:
    param_1 = param_1 + 9;
    break;
  case 3:
    param_1 = param_1 + 0xb;
    break;
  case 4:
    param_1 = param_1 + 0xd;
    break;
  case 5:
    param_1 = param_1 + 0x11;
    break;
  case 6:
    param_1 = param_1 + 0x13;
    break;
  case 7:
    param_1 = param_1 + 0x15;
    break;
  default:
    return 0;
  }
  return *param_1;
}



// ============================================================
// RVA: 0x15bbe64 | Atlas.Gameplay.Kart.KartAIUsablesParametersBurst.GetUseInterval
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartAIUsablesParametersBurst__GetUseInterval(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  switch(param_2) {
  case 0:
    puVar1 = (undefined4 *)(param_1 + 0x10);
    break;
  case 1:
    puVar1 = (undefined4 *)(param_1 + 0x20);
    break;
  case 2:
    puVar1 = (undefined4 *)(param_1 + 0x28);
    break;
  case 3:
    puVar1 = (undefined4 *)(param_1 + 0x30);
    break;
  case 4:
    puVar1 = (undefined4 *)(param_1 + 0x38);
    break;
  case 5:
    puVar1 = (undefined4 *)(param_1 + 0x48);
    break;
  case 6:
    puVar1 = (undefined4 *)(param_1 + 0x50);
    break;
  case 7:
    puVar1 = (undefined4 *)(param_1 + 0x58);
    break;
  default:
    return 0;
  }
  return *puVar1;
}



