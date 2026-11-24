// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.UpdateMessageDefinition

// ============================================================
// RVA: 0x15234c8 | Atlas.Definitions.UpdateMessageDefinition.get_TiledBannerBackground
// ============================================================

undefined8 Atlas_Definitions_UpdateMessageDefinition__get_TiledBannerBackground(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15234d0 | Atlas.Definitions.UpdateMessageDefinition.get_HomeScreenIPSetup
// ============================================================

void Atlas_Definitions_UpdateMessageDefinition__get_HomeScreenIPSetup
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = *(undefined8 *)(param_2 + 0x48);
  return;
}



// ============================================================
// RVA: 0x15234e8 | Atlas.Definitions.UpdateMessageDefinition.get_MapFocusDefRef
// ============================================================

undefined1  [16] Atlas_Definitions_UpdateMessageDefinition__get_MapFocusDefRef(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x50);
}



// ============================================================
// RVA: 0x15234f4 | Atlas.Definitions.UpdateMessageDefinition.get_MapFocus
// ============================================================

undefined8 Atlas_Definitions_UpdateMessageDefinition__get_MapFocus(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15234fc | Atlas.Definitions.UpdateMessageDefinition.get_TopImageAtlasedSpriteRef
// ============================================================

undefined8 Atlas_Definitions_UpdateMessageDefinition__get_TopImageAtlasedSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1523504 | Atlas.Definitions.UpdateMessageDefinition.get_BottomImageAtlasedSpriteRef
// ============================================================

undefined8 Atlas_Definitions_UpdateMessageDefinition__get_BottomImageAtlasedSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x152350c | Atlas.Definitions.UpdateMessageDefinition.get_TopImageBGColor
// ============================================================

undefined4 Atlas_Definitions_UpdateMessageDefinition__get_TopImageBGColor(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1523518 | Atlas.Definitions.UpdateMessageDefinition.get_BottomImageBGColor
// ============================================================

undefined4 Atlas_Definitions_UpdateMessageDefinition__get_BottomImageBGColor(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x1523524 | Atlas.Definitions.UpdateMessageDefinition.SetMapDef
// ============================================================

void Atlas_Definitions_UpdateMessageDefinition__SetMapDef(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  return;
}



// ============================================================
// RVA: 0x152352c | Atlas.Definitions.UpdateMessageDefinition..ctor
// ============================================================

void Atlas_Definitions_UpdateMessageDefinition___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Color$$get_clear*/ func_0x0322363c(0);
  *(undefined4 *)(param_5 + 0x70) = uVar1;
  *(undefined4 *)(param_5 + 0x74) = param_2;
  *(undefined4 *)(param_5 + 0x78) = param_3;
  *(undefined4 *)(param_5 + 0x7c) = param_4;
  uVar1 = /*UnityEngine.Color$$get_clear*/ func_0x0322363c(0);
  *(undefined4 *)(param_5 + 0x80) = uVar1;
  *(undefined4 *)(param_5 + 0x84) = param_2;
  *(undefined4 *)(param_5 + 0x88) = param_3;
  *(undefined4 *)(param_5 + 0x8c) = param_4;
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_5 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_5,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_5);
  return;
}



