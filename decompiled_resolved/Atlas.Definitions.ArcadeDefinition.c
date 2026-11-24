// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.ArcadeDefinition

// ============================================================
// RVA: 0x144cc4c | Atlas.Definitions.ArcadeDefinition.get_RewardDefinitions
// ============================================================

undefined8 Atlas_Definitions_ArcadeDefinition__get_RewardDefinitions(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x144cc54 | Atlas.Definitions.ArcadeDefinition.GetHalfwayReward
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_Definitions_ArcadeDefinition__GetHalfwayReward(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar2 = param_2;
  if ((bRam0000000003eb4746 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4746 = 1;
    uVar2 = extraout_x1;
  }
  switch(param_2 & 0xffffffff) {
  default:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    goto Core_Definitions_DefinitionID__op_Implicit;
  case 1:
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) {
code_r0x0144cd44:
      func_0x00f78af4();
    }
    else if (*(int *)(lVar3 + 0x18) != 0) {
      uVar1 = *(undefined8 *)(lVar3 + 0x20);
code_r0x0144cd34:
      auVar4._8_8_ = uVar2;
      auVar4._0_8_ = uVar1;
      return auVar4;
    }
    break;
  case 2:
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) goto code_r0x0144cd44;
    if (2 < *(uint *)(lVar3 + 0x18)) {
      uVar1 = *(undefined8 *)(lVar3 + 0x30);
      goto code_r0x0144cd34;
    }
    break;
  case 3:
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) goto code_r0x0144cd44;
    if (4 < *(uint *)(lVar3 + 0x18)) {
      uVar1 = *(undefined8 *)(lVar3 + 0x40);
      goto code_r0x0144cd34;
    }
  }
  uVar1 = func_0x00f78b24();
  auVar4 = func_0x00f78ac0(uVar1,0);
  lVar3 = auVar4._0_8_;
  uVar2 = auVar4._8_8_;
  if ((bRam0000000003eb4747 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4747 = 1;
    uVar2 = extraout_x1_00;
  }
  switch(auVar4._8_8_ & 0xffffffff) {
  default:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
Core_Definitions_DefinitionID__op_Implicit:
    return ZEXT816(0);
  case 1:
    lVar3 = *(long *)(lVar3 + 0x28);
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        uVar1 = *(undefined8 *)(lVar3 + 0x28);
code_r0x0144ce38:
        auVar5._8_8_ = uVar2;
        auVar5._0_8_ = uVar1;
        return auVar5;
      }
      goto code_r0x0144ce4c;
    }
    break;
  case 2:
    lVar3 = *(long *)(lVar3 + 0x28);
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
        uVar1 = *(undefined8 *)(lVar3 + 0x38);
        goto code_r0x0144ce38;
      }
      goto code_r0x0144ce4c;
    }
    break;
  case 3:
    lVar3 = *(long *)(lVar3 + 0x28);
    if (lVar3 != 0) {
      if (5 < *(uint *)(lVar3 + 0x18)) {
        uVar1 = *(undefined8 *)(lVar3 + 0x48);
        goto code_r0x0144ce38;
      }
      goto code_r0x0144ce4c;
    }
  }
  func_0x00f78af4();
code_r0x0144ce4c:
  uVar1 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar1,0);
  if ((bRam0000000003eb4748 & 1) == 0) {
    func_0x00f78a20(0x3d1ef00);
    bRam0000000003eb4748 = 1;
  }
  *(undefined8 *)(lVar3 + 0x20) = _UNK_033f8100;
  uVar1 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,6);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar3 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar3,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar4 = (*pcRam0000000003ec0cc8)(lVar3);
  return auVar4;
}



// ============================================================
// RVA: 0x144cd54 | Atlas.Definitions.ArcadeDefinition.GetAllReward
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_Definitions_ArcadeDefinition__GetAllReward(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong extraout_x1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar2 = param_2;
  if ((bRam0000000003eb4747 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4747 = 1;
    uVar2 = extraout_x1;
  }
  switch(param_2 & 0xffffffff) {
  default:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return ZEXT816(0);
  case 1:
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        uVar1 = *(undefined8 *)(lVar3 + 0x28);
code_r0x0144ce38:
        auVar4._8_8_ = uVar2;
        auVar4._0_8_ = uVar1;
        return auVar4;
      }
      goto code_r0x0144ce4c;
    }
    break;
  case 2:
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
        uVar1 = *(undefined8 *)(lVar3 + 0x38);
        goto code_r0x0144ce38;
      }
      goto code_r0x0144ce4c;
    }
    break;
  case 3:
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      if (5 < *(uint *)(lVar3 + 0x18)) {
        uVar1 = *(undefined8 *)(lVar3 + 0x48);
        goto code_r0x0144ce38;
      }
      goto code_r0x0144ce4c;
    }
  }
  func_0x00f78af4();
code_r0x0144ce4c:
  uVar1 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar1,0);
  if ((bRam0000000003eb4748 & 1) == 0) {
    func_0x00f78a20(0x3d1ef00);
    bRam0000000003eb4748 = 1;
  }
  *(undefined8 *)(lVar3 + 0x20) = _UNK_033f8100;
  uVar1 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,6);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar3 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar3,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar4 = (*pcRam0000000003ec0cc8)(lVar3);
  return auVar4;
}



// ============================================================
// RVA: 0x144ce58 | Atlas.Definitions.ArcadeDefinition..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Definitions_ArcadeDefinition___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4748 & 1) == 0) {
    func_0x00f78a20(0x3d1ef00);
    bRam0000000003eb4748 = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = _UNK_033f8100;
  uVar1 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,6);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



