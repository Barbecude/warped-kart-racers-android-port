// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.CharacterRewardScreen.TransitionData

// ============================================================
// RVA: 0x15477b0 | Atlas.UI.Screens.CharacterRewardScreen.TransitionData.set_KartLoadout
// ============================================================

void Atlas_UI_Screens_CharacterRewardScreen_TransitionData__set_KartLoadout
               (long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  *(undefined8 *)(param_1 + 0x38) = param_2[5];
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}



// ============================================================
// RVA: 0x15477c4 | Atlas.UI.Screens.CharacterRewardScreen.TransitionData.get_KartLoadout
// ============================================================

void Atlas_UI_Screens_CharacterRewardScreen_TransitionData__get_KartLoadout
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  param_1[5] = *(undefined8 *)(param_2 + 0x38);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  return;
}



// ============================================================
// RVA: 0x15477d8 | Atlas.UI.Screens.CharacterRewardScreen.TransitionData..ctor
// ============================================================

void Atlas_UI_Screens_CharacterRewardScreen_TransitionData___ctor(void)

{
  return;
}



