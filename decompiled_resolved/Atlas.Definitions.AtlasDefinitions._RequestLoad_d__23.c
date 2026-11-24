// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.AtlasDefinitions.<RequestLoad>d__23

// ============================================================
// RVA: 0x1545ab4 | Atlas.Definitions.AtlasDefinitions.<RequestLoad>d__23..ctor
// ============================================================

void Atlas_Definitions_AtlasDefinitions__RequestLoad_d__23___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1545ae0 | Atlas.Definitions.AtlasDefinitions.<RequestLoad>d__23.System.IDisposable.Dispose
// ============================================================

void Atlas_Definitions_AtlasDefinitions__RequestLoad_d__23__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1545ae4 | Atlas.Definitions.AtlasDefinitions.<RequestLoad>d__23.MoveNext
// ============================================================

undefined8 Atlas_Definitions_AtlasDefinitions__RequestLoad_d__23__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4f61 & 1) == 0) {
    func_0x00f78a20(0x3d6bac0);
    bRam0000000003eb4f61 = 1;
  }
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar4 == 0) goto LAB_01545bcc;
      Atlas_Definitions_AtlasDefinitions__ResolveReferences(lVar4,0);
      Atlas_Definitions_AtlasDefinitions__RequestLoadAssets(lVar4,0);
      if (*(long *)(lVar4 + 0x18) == 0) goto LAB_01545bcc;
      uVar2 = /*Core.Assets.AssetManager$$WaitForAllAssetsToLoad*/ func_0x01636ea4(*(long *)(lVar4 + 0x18),/*STR('DefinitionAssets')*/ uRam0000000003d6bac0,0);
      uVar3 = 2;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) {
LAB_01545bcc:
        lVar4 = func_0x00f78af4(0);
        return *(undefined8 *)(lVar4 + 0x18);
      }
      /*Core.Definitions.GameDefinitions$$RequestLoad*/ func_0x016456c8(*(long *)(lVar4 + 0x10),0);
      if (*(long *)(lVar4 + 0x10) == 0) goto LAB_01545bcc;
      uVar2 = /*Core.Definitions.GameDefinitions$$WaitOnLoad*/ func_0x016458bc(*(long *)(lVar4 + 0x10),0);
      uVar3 = 1;
    }
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar2;
}



// ============================================================
// RVA: 0x1545bd0 | Atlas.Definitions.AtlasDefinitions.<RequestLoad>d__23.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Definitions_AtlasDefinitions__RequestLoad_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1545bd8 | Atlas.Definitions.AtlasDefinitions.<RequestLoad>d__23.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Definitions_AtlasDefinitions__RequestLoad_d__23__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62210);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1545c18 | Atlas.Definitions.AtlasDefinitions.<RequestLoad>d__23.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Definitions_AtlasDefinitions__RequestLoad_d__23__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



