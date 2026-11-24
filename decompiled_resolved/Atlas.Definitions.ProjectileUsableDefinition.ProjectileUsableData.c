// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData

// ============================================================
// RVA: 0x1563274 | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.get_UpwardsThrowingForce
// ============================================================

undefined4
Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__get_UpwardsThrowingForce
          (undefined4 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x156327c | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.get_InGlideUpwardsThrowingForce
// ============================================================

undefined4
Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__get_InGlideUpwardsThrowingForce
          (long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// ============================================================
// RVA: 0x1563284 | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.get_Speed
// ============================================================

undefined4
Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__get_Speed(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x156328c | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.get_FloorPerimeterGap
// ============================================================

undefined4
Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__get_FloorPerimeterGap
          (long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ============================================================
// RVA: 0x1563294 | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.get_MaxBounceCount
// ============================================================

undefined4
Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__get_MaxBounceCount(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x156329c | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.get_CanFireForwards
// ============================================================

undefined1
Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__get_CanFireForwards(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



// ============================================================
// RVA: 0x15632a4 | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.get_CanFireBackwards
// ============================================================

undefined1
Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__get_CanFireBackwards
          (long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



// ============================================================
// RVA: 0x15632ac | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.get_PrimaryFireForwards
// ============================================================

undefined1
Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__get_PrimaryFireForwards
          (long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



// ============================================================
// RVA: 0x15632b4 | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.get_ReflectWhenStuck
// ============================================================

undefined1
Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__get_ReflectWhenStuck
          (long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



// ============================================================
// RVA: 0x15632bc | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.IsPrimaryThrowForward
// ============================================================

bool Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__IsPrimaryThrowForward
               (long param_1)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(char *)(param_1 + 0x15) != '\0') {
      return false;
    }
  }
  else if (*(char *)(param_1 + 0x15) == '\0') {
    return true;
  }
  return *(char *)(param_1 + 0x16) != '\0';
}



// ============================================================
// RVA: 0x15632f0 | Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData.CreateDefault
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Definitions_ProjectileUsableDefinition_ProjectileUsableData__CreateDefault
               (undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_033f8940;
  param_1[1] = _UNK_033f8948;
  *param_1 = uVar1;
  param_1[2] = 0x1000100000003;
  return;
}



