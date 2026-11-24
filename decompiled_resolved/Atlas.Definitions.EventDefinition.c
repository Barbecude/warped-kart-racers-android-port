// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.EventDefinition

// ============================================================
// RVA: 0x158368c | Atlas.Definitions.EventDefinition.get_DisplayNameLocKey
// ============================================================

undefined8 Atlas_Definitions_EventDefinition__get_DisplayNameLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1583694 | Atlas.Definitions.EventDefinition.get_GameContextDefinitionRef
// ============================================================

long Atlas_Definitions_EventDefinition__get_GameContextDefinitionRef(long param_1)

{
  return param_1 + 0x28;
}



// ============================================================
// RVA: 0x158369c | Atlas.Definitions.EventDefinition.get_MapDefinitionRef
// ============================================================

long Atlas_Definitions_EventDefinition__get_MapDefinitionRef(long param_1)

{
  return param_1 + 0x38;
}



// ============================================================
// RVA: 0x15836a4 | Atlas.Definitions.EventDefinition.get_IPDefinitionRef
// ============================================================

long Atlas_Definitions_EventDefinition__get_IPDefinitionRef(long param_1)

{
  return param_1 + 0x48;
}



// ============================================================
// RVA: 0x15836ac | Atlas.Definitions.EventDefinition.get_Duration
// ============================================================

undefined4 Atlas_Definitions_EventDefinition__get_Duration(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x15836b4 | Atlas.Definitions.EventDefinition.get_AIHandlingDefinition
// ============================================================

undefined8 Atlas_Definitions_EventDefinition__get_AIHandlingDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x15836bc | Atlas.Definitions.EventDefinition.get_AiDefinition
// ============================================================

undefined8 Atlas_Definitions_EventDefinition__get_AiDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15836c4 | Atlas.Definitions.EventDefinition.set_AiDefinition
// ============================================================

void Atlas_Definitions_EventDefinition__set_AiDefinition(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}



// ============================================================
// RVA: 0x15836cc | Atlas.Definitions.EventDefinition.get_PickupBoxDefinition
// ============================================================

undefined8 Atlas_Definitions_EventDefinition__get_PickupBoxDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15836d4 | Atlas.Definitions.EventDefinition.get_Challenge1
// ============================================================

long Atlas_Definitions_EventDefinition__get_Challenge1(long param_1)

{
  return param_1 + 0x78;
}



// ============================================================
// RVA: 0x15836dc | Atlas.Definitions.EventDefinition.get_Challenge2
// ============================================================

long Atlas_Definitions_EventDefinition__get_Challenge2(long param_1)

{
  return param_1 + 0xa8;
}



// ============================================================
// RVA: 0x15836e4 | Atlas.Definitions.EventDefinition.get_Challenge3
// ============================================================

long Atlas_Definitions_EventDefinition__get_Challenge3(long param_1)

{
  return param_1 + 0xd8;
}



// ============================================================
// RVA: 0x15836ec | Atlas.Definitions.EventDefinition.get_NumberOfAi
// ============================================================

undefined4 Atlas_Definitions_EventDefinition__get_NumberOfAi(long param_1)

{
  return *(undefined4 *)(param_1 + 0x108);
}



// ============================================================
// RVA: 0x15836f4 | Atlas.Definitions.EventDefinition.get_EventAiLoadoutDefinition
// ============================================================

undefined8 Atlas_Definitions_EventDefinition__get_EventAiLoadoutDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



// ============================================================
// RVA: 0x15836fc | Atlas.Definitions.EventDefinition.get_PlayerStartIndex
// ============================================================

int Atlas_Definitions_EventDefinition__get_PlayerStartIndex(long param_1)

{
  return *(int *)(param_1 + 0x118) + -1;
}



// ============================================================
// RVA: 0x1583708 | Atlas.Definitions.EventDefinition.get_SkipCountdownSequence
// ============================================================

undefined1 Atlas_Definitions_EventDefinition__get_SkipCountdownSequence(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11c);
}



// ============================================================
// RVA: 0x1583710 | Atlas.Definitions.EventDefinition.get_FtueID
// ============================================================

undefined8 Atlas_Definitions_EventDefinition__get_FtueID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



// ============================================================
// RVA: 0x1583718 | Atlas.Definitions.EventDefinition.get_XPDifficultyOverride
// ============================================================

undefined4 Atlas_Definitions_EventDefinition__get_XPDifficultyOverride(long param_1)

{
  return *(undefined4 *)(param_1 + 0x128);
}



// ============================================================
// RVA: 0x1583720 | Atlas.Definitions.EventDefinition.get_PickupLimitsOverride
// ============================================================

undefined8 Atlas_Definitions_EventDefinition__get_PickupLimitsOverride(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



// ============================================================
// RVA: 0x1583728 | Atlas.Definitions.EventDefinition.get_LeagueEventDefinitionID
// ============================================================

undefined8 Atlas_Definitions_EventDefinition__get_LeagueEventDefinitionID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



// ============================================================
// RVA: 0x1583730 | Atlas.Definitions.EventDefinition.GetChallengeByIndex
// ============================================================

long Atlas_Definitions_EventDefinition__GetChallengeByIndex(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0xa8;
  if (param_2 != 1) {
    lVar1 = param_1 + 0x78;
  }
  lVar2 = param_1 + 0xd8;
  if (param_2 != 2) {
    lVar2 = lVar1;
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1583758 | Atlas.Definitions.EventDefinition.ChallengesExist
// ============================================================

/* WARNING: Possible PIC construction at 0x01583770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01583774) */
/* WARNING: Removing unreachable block (ram,0x01583778) */
/* WARNING: Removing unreachable block (ram,0x0158379c) */
/* WARNING: Removing unreachable block (ram,0x01583788) */

ulong Atlas_Definitions_EventDefinition__ChallengesExist(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x90),0);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x98),0), (uVar1 & 1) == 0)) {
    if (*(long *)(param_1 + 0x78) == 0) {
      func_0x00f78af4();
      if ((bRam0000000003eb4f79 & 1) == 0) {
        func_0x00f78a20(0x3d27520);
        bRam0000000003eb4f79 = 1;
      }
      uVar2 = func_0x00f78aec(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520);
      uVar1 = /*System.Object$$.ctor*/ func_0x0294d018(uVar2,0);
      **(undefined8 **)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xb8) = uVar2;
      return uVar1;
    }
    uVar1 = (ulong)(*(int *)(*(long *)(param_1 + 0x78) + 0x18) != 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15837ac | Atlas.Definitions.EventDefinition..ctor
// ============================================================

void Atlas_Definitions_EventDefinition___ctor(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb50bf & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb50bf = 1;
  }
  *(undefined4 *)(param_1 + 0x58) = 1;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  *(undefined8 *)(param_1 + 0x60) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  *(undefined8 *)(param_1 + 0x68) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x70) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined4 *)(param_1 + 0x108) = 0xb;
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



