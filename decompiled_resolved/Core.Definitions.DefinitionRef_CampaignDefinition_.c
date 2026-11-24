// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Definitions.DefinitionRef<CampaignDefinition>

// ============================================================
// RVA: 0x1e1d5d8 | Core.Definitions.DefinitionRef<CampaignDefinition>.get_Reference
// ============================================================

undefined8 Core_Definitions_DefinitionRef_ArcadeDefinition___get_Reference(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1e1d70c | Core.Definitions.DefinitionRef<CampaignDefinition>.ResolveList
// ============================================================

void Core_Definitions_DefinitionRef_CampaignDefinition___ResolveList
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((param_1 != 0) && (0 < (int)*(ulong *)(param_1 + 0x18))) {
    uVar2 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    if (uVar2 != 0) {
      uVar5 = 0;
      lVar3 = param_1 + 0x20;
      do {
        lVar4 = *(long *)(param_3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        Core_Definitions_DefinitionRef_ArcadeDefinition___Resolve
                  (lVar3,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10));
        if (uVar2 - 1 == uVar5) {
          return;
        }
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
    uVar1 = func_0x00f78b24();
    func_0x00f78ac0(uVar1,0);
  }
  return;
}



