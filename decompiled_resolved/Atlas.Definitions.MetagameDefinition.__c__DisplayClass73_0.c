// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.MetagameDefinition.<>c__DisplayClass73_0

// ============================================================
// RVA: 0x155f270 | Atlas.Definitions.MetagameDefinition.<>c__DisplayClass73_0..ctor
// ============================================================

void Atlas_Definitions_MetagameDefinition___c__DisplayClass73_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x155f278 | Atlas.Definitions.MetagameDefinition.<>c__DisplayClass73_0.<GetXPRewardData>b__0
// ============================================================

undefined8 *
Atlas_Definitions_MetagameDefinition___c__DisplayClass73_0___GetXPRewardData_b__0
          (long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *extraout_x8;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  
  if (param_2 != 0) {
    return (undefined8 *)(ulong)(*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10));
  }
  auVar4 = func_0x00f78af4();
  iVar2 = auVar4._8_4_;
  puVar1 = auVar4._0_8_;
  if (iVar2 == 2) {
    uVar3 = puVar1[6];
    extraout_x8[1] = puVar1[7];
    *extraout_x8 = uVar3;
    uVar3 = puVar1[8];
  }
  else if (iVar2 == 1) {
    uVar3 = puVar1[3];
    extraout_x8[1] = puVar1[4];
    *extraout_x8 = uVar3;
    uVar3 = puVar1[5];
  }
  else {
    if (iVar2 != 0) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      return puVar1;
    }
    uVar3 = *puVar1;
    extraout_x8[1] = puVar1[1];
    *extraout_x8 = uVar3;
    uVar3 = puVar1[2];
  }
  extraout_x8[2] = uVar3;
  return puVar1;
}



