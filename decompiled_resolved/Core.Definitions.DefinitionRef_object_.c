// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Definitions.DefinitionRef<object>

// ============================================================
// RVA: 0x1e1d5d0 | Core.Definitions.DefinitionRef<object>.get_RefID
// ============================================================

undefined8 Core_Definitions_DefinitionRef_ArcadeDefinition___get_RefID(undefined8 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x1e1d5d8 | Core.Definitions.DefinitionRef<object>.get_Reference
// ============================================================

undefined8 Core_Definitions_DefinitionRef_ArcadeDefinition___get_Reference(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1e1d5e0 | Core.Definitions.DefinitionRef<object>.Resolve
// ============================================================

void Core_Definitions_DefinitionRef_ArcadeDefinition___Resolve
               (undefined8 *param_1,long param_2,long param_3)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (param_2 != 0) {
    uVar3 = *param_1;
    lVar5 = *(long *)(param_3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *(long *)(param_3 + 0x18);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(lVar5 + 0xc0);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    uVar3 = (*UNRECOVERED_JUMPTABLE)(param_2,uVar3,**(undefined8 **)(lVar4 + 0xc0));
    param_1[1] = uVar3;
    return;
  }
  auVar8 = func_0x00f78af4();
  if (auVar8._8_8_ == 0) {
    auVar8 = func_0x00f78af4();
    lVar4 = auVar8._0_8_;
    if ((lVar4 != 0) && (0 < (int)*(ulong *)(lVar4 + 0x18))) {
      uVar2 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      if (uVar2 != 0) {
        uVar7 = 0;
        lVar5 = lVar4 + 0x20;
        do {
          lVar6 = *(long *)(param_3 + 0x18);
          if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar6);
          }
          Core_Definitions_DefinitionRef_ArcadeDefinition___Resolve
                    (lVar5,auVar8._8_8_,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10));
          if (uVar2 - 1 == uVar7) {
            return;
          }
          uVar7 = uVar7 + 1;
          lVar5 = lVar5 + 0x10;
        } while (uVar7 < *(uint *)(lVar4 + 0x18));
      }
      uVar3 = func_0x00f78b24();
      func_0x00f78ac0(uVar3,0);
    }
    return;
  }
  uVar3 = *auVar8._0_8_;
  lVar5 = *(long *)(param_3 + 0x18);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    lVar4 = *(long *)(param_3 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 8);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x01e1d704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (auVar8._8_8_,uVar3,auVar8._0_8_ + 1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
  return;
}



// ============================================================
// RVA: 0x1e1d670 | Core.Definitions.DefinitionRef<object>.ResolveOrNull
// ============================================================

void Core_Definitions_DefinitionRef_IPDefinition___ResolveOrNull
               (undefined8 *param_1,long param_2,long param_3)

{
  ushort uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (param_2 != 0) {
    uVar3 = *param_1;
    lVar5 = *(long *)(param_3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *(long *)(param_3 + 0x18);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 8);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x01e1d704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2,uVar3,param_1 + 1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8))
    ;
    return;
  }
  auVar8 = func_0x00f78af4();
  lVar4 = auVar8._0_8_;
  if ((lVar4 != 0) && (0 < (int)*(ulong *)(lVar4 + 0x18))) {
    uVar2 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    if (uVar2 != 0) {
      uVar7 = 0;
      lVar5 = lVar4 + 0x20;
      do {
        lVar6 = *(long *)(param_3 + 0x18);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        Core_Definitions_DefinitionRef_ArcadeDefinition___Resolve
                  (lVar5,auVar8._8_8_,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10));
        if (uVar2 - 1 == uVar7) {
          return;
        }
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar7 < *(uint *)(lVar4 + 0x18));
    }
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
  }
  return;
}



// ============================================================
// RVA: 0x1e1d70c | Core.Definitions.DefinitionRef<object>.ResolveList
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



