// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.MetagameDefinition.Rankings

// ============================================================
// RVA: 0x155f2a0 | Atlas.Definitions.MetagameDefinition.Rankings.GetRankByIndex
// ============================================================

void Atlas_Definitions_MetagameDefinition_Rankings__GetRankByIndex
               (undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 2) {
    uVar1 = param_2[6];
    param_1[1] = param_2[7];
    *param_1 = uVar1;
    uVar1 = param_2[8];
  }
  else if (param_3 == 1) {
    uVar1 = param_2[3];
    param_1[1] = param_2[4];
    *param_1 = uVar1;
    uVar1 = param_2[5];
  }
  else {
    if (param_3 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    uVar1 = param_2[2];
  }
  param_1[2] = uVar1;
  return;
}



// ============================================================
// RVA: 0x155f2f4 | Atlas.Definitions.MetagameDefinition.Rankings..cctor
// ============================================================

void Atlas_Definitions_MetagameDefinition_Rankings___cctor(void)

{
  if ((bRam0000000003eb4fbd & 1) == 0) {
    func_0x00f78a20(0x3d280f8);
    bRam0000000003eb4fbd = 1;
  }
  **(undefined4 **)(/*Atlas.Definitions.MetagameDefinition.Rankings_TypeInfo*/ lRam0000000003d280f8 + 0xb8) = 3;
  return;
}



