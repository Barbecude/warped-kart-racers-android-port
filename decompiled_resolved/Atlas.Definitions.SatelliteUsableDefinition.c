// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.SatelliteUsableDefinition

// ============================================================
// RVA: 0x14e7778 | Atlas.Definitions.SatelliteUsableDefinition.get_UsableType
// ============================================================

undefined8 Atlas_Definitions_SatelliteUsableDefinition__get_UsableType(void)

{
  return 7;
}



// ============================================================
// RVA: 0x14e7780 | Atlas.Definitions.SatelliteUsableDefinition.get_SatelliteData
// ============================================================

void Atlas_Definitions_SatelliteUsableDefinition__get_SatelliteData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  param_1[1] = *(undefined8 *)(param_2 + 0x70);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[5] = *(undefined8 *)(param_2 + 0x90);
  param_1[4] = uVar1;
  param_1[6] = *(undefined8 *)(param_2 + 0x98);
  return;
}



// ============================================================
// RVA: 0x14e77a0 | Atlas.Definitions.SatelliteUsableDefinition.PrimaryUseType
// ============================================================

undefined8 Atlas_Definitions_SatelliteUsableDefinition__PrimaryUseType(void)

{
  return 2;
}



// ============================================================
// RVA: 0x14e77a8 | Atlas.Definitions.SatelliteUsableDefinition.get_KartTriggerEffectParameters
// ============================================================

undefined8
Atlas_Definitions_SatelliteUsableDefinition__get_KartTriggerEffectParameters(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x14e77b0 | Atlas.Definitions.SatelliteUsableDefinition.get_DistanceBasedKartTriggerEffects
// ============================================================

undefined8
Atlas_Definitions_SatelliteUsableDefinition__get_DistanceBasedKartTriggerEffects(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x14e77b8 | Atlas.Definitions.SatelliteUsableDefinition.GetTriggerEffectFromDistanceToFirst
// ============================================================

undefined8
Atlas_Definitions_SatelliteUsableDefinition__GetTriggerEffectFromDistanceToFirst
          (float param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_2 + 0xa8);
  if ((lVar2 == 0) || (uVar3 = *(ulong *)(lVar2 + 0x18), uVar3 == 0)) {
    uVar1 = *(undefined8 *)(param_2 + 0xa0);
  }
  else {
    if (0 < (int)uVar3) {
      uVar4 = uVar3 & 0xffffffff;
      puVar5 = (undefined8 *)(lVar2 + 0x28);
      do {
        if (param_1 < *(float *)(puVar5 + -1)) {
          return *puVar5;
        }
        puVar5 = puVar5 + 2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if ((int)uVar3 == 0) {
      uVar1 = func_0x00f78b24();
      lVar2 = func_0x00f78ac0(uVar1,0);
      /*Atlas.Definitions.UsableDefinition.GeneralUsableData$$CreateDefault*/ func_0x0156cf90(&uStack_68,0,0);
      *(undefined8 *)(lVar2 + 0x28) = uStack_60;
      *(undefined8 *)(lVar2 + 0x20) = uStack_68;
      *(undefined8 *)(lVar2 + 0x38) = uStack_50;
      *(undefined8 *)(lVar2 + 0x30) = uStack_58;
      *(undefined8 *)(lVar2 + 0x48) = uStack_40;
      *(undefined8 *)(lVar2 + 0x40) = uStack_48;
      *(undefined8 *)(lVar2 + 0x50) = uStack_38;
      uVar1 = Atlas_Definitions_Definition___ctor(lVar2,0);
      return uVar1;
    }
    uVar1 = *(undefined8 *)(lVar2 + ((long)((uVar3 << 0x20) + -0x100000000) >> 0x1c) + 0x28);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x14e7830 | Atlas.Definitions.SatelliteUsableDefinition..ctor
// ============================================================

void Atlas_Definitions_SatelliteUsableDefinition___ctor(long param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*Atlas.Definitions.UsableDefinition.GeneralUsableData$$CreateDefault*/ func_0x0156cf90(&uStack_58,0,0);
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  *(undefined8 *)(param_1 + 0x38) = uStack_40;
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x48) = uStack_30;
  *(undefined8 *)(param_1 + 0x40) = uStack_38;
  *(undefined8 *)(param_1 + 0x50) = uStack_28;
  Atlas_Definitions_Definition___ctor(param_1,0);
  return;
}



