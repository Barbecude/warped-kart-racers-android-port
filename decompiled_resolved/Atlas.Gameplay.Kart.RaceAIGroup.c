// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.RaceAIGroup

// ============================================================
// RVA: 0x14d1bac | Atlas.Gameplay.Kart.RaceAIGroup.get_IsValid
// ============================================================

bool Atlas_Gameplay_Kart_RaceAIGroup__get_IsValid(int *param_1)

{
  return 0 < *param_1;
}



// ============================================================
// RVA: 0x14d1bbc | Atlas.Gameplay.Kart.RaceAIGroup.GetRubberbandingRuleFromProgress
// ============================================================

void Atlas_Gameplay_Kart_RaceAIGroup__GetRubberbandingRuleFromProgress
               (float *param_1,float param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  float fVar4;
  undefined8 uVar5;
  
  if ((bRam0000000003eb4b8c & 1) == 0) {
    func_0x00f78a20(0x3d24058);
    bRam0000000003eb4b8c = 1;
  }
  lVar1 = *(long *)(param_3 + 8);
  if (((lVar1 != 0) && (uVar3 = *(ulong *)(lVar1 + 0x18), uVar3 != 0)) && (0 < (int)uVar3)) {
    uVar3 = uVar3 & 0xffffffff;
    puVar2 = (undefined8 *)(lVar1 + 0x24);
    fVar4 = 0.0;
    do {
      fVar4 = fVar4 + *(float *)((long)puVar2 + -4);
      if (param_2 < fVar4) {
        *param_1 = *(float *)((long)puVar2 + -4);
        uVar5 = *puVar2;
        *(undefined8 *)(param_1 + 3) = puVar2[1];
        *(undefined8 *)(param_1 + 1) = uVar5;
        return;
      }
      puVar2 = (undefined8 *)((long)puVar2 + 0x14);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.RaceAIRubberBandingRule_TypeInfo*/ lRam0000000003d24058 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.RaceAIRubberBandingRule_TypeInfo*/ lRam0000000003d24058 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = *(undefined8 **)(/*Atlas.Gameplay.Kart.RaceAIRubberBandingRule_TypeInfo*/ lRam0000000003d24058 + 0xb8);
  uVar5 = *puVar2;
  *(undefined8 *)(param_1 + 2) = puVar2[1];
  *(undefined8 *)param_1 = uVar5;
  param_1[4] = *(float *)(puVar2 + 2);
  return;
}



// ============================================================
// RVA: 0x14d1c98 | Atlas.Gameplay.Kart.RaceAIGroup..cctor
// ============================================================

void Atlas_Gameplay_Kart_RaceAIGroup___cctor(void)

{
  return;
}



