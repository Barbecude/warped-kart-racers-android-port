// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.FrontEndScreen3DSceneDefinition

// ============================================================
// RVA: 0x1595938 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_ScreenId
// ============================================================

undefined8 Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_ScreenId(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1595940 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_SceneType
// ============================================================

undefined4 Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_SceneType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1595948 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_CameraPosition
// ============================================================

undefined4 Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_CameraPosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ============================================================
// RVA: 0x1595950 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_IsDefaultScene
// ============================================================

undefined1 Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_IsDefaultScene(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1595958 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_ShowPlayerKart
// ============================================================

undefined1 Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_ShowPlayerKart(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



// ============================================================
// RVA: 0x1595960 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_ShowAdditionalKartSpots
// ============================================================

undefined1
Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_ShowAdditionalKartSpots(long param_1)

{
  return *(undefined1 *)(param_1 + 0x32);
}



// ============================================================
// RVA: 0x1595968 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_ShowFloorTrash
// ============================================================

undefined1 Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_ShowFloorTrash(long param_1)

{
  return *(undefined1 *)(param_1 + 0x33);
}



// ============================================================
// RVA: 0x1595970 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_ShowFallingItems
// ============================================================

undefined1 Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_ShowFallingItems(long param_1)

{
  return *(undefined1 *)(param_1 + 0x34);
}



// ============================================================
// RVA: 0x1595978 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_UseExpandedFloorspace
// ============================================================

undefined1
Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_UseExpandedFloorspace(long param_1)

{
  return *(undefined1 *)(param_1 + 0x35);
}



// ============================================================
// RVA: 0x1595980 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_UseIPColouring
// ============================================================

undefined1 Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_UseIPColouring(long param_1)

{
  return *(undefined1 *)(param_1 + 0x36);
}



// ============================================================
// RVA: 0x1595988 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_UseOverrideBGColour
// ============================================================

undefined1 Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_UseOverrideBGColour(long param_1)

{
  return *(undefined1 *)(param_1 + 0x37);
}



// ============================================================
// RVA: 0x1595990 | Atlas.Definitions.FrontEndScreen3DSceneDefinition.get_OverrideBGColour
// ============================================================

undefined4 Atlas_Definitions_FrontEndScreen3DSceneDefinition__get_OverrideBGColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x159599c | Atlas.Definitions.FrontEndScreen3DSceneDefinition..ctor
// ============================================================

void Atlas_Definitions_FrontEndScreen3DSceneDefinition___ctor(long param_1)

{
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



