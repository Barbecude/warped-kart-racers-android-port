// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Definitions.GameDefinitions.<WaitOnLoad>d__11

// ============================================================
// RVA: 0x1645928 | Core.Definitions.GameDefinitions.<WaitOnLoad>d__11..ctor
// ============================================================

void Core_Definitions_GameDefinitions__WaitOnLoad_d__11___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x16462c8 | Core.Definitions.GameDefinitions.<WaitOnLoad>d__11.System.IDisposable.Dispose
// ============================================================

void Core_Definitions_GameDefinitions__WaitOnLoad_d__11__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x16462cc | Core.Definitions.GameDefinitions.<WaitOnLoad>d__11.MoveNext
// ============================================================

ulong Core_Definitions_GameDefinitions__WaitOnLoad_d__11__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5756 & 1) == 0) {
    func_0x00f78a20(0x3d3a488);
    func_0x00f78a20(0x3d3a490);
    func_0x00f78a20(0x3d39d68);
    bRam0000000003eb5756 = 1;
  }
  uStack_48 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) goto LAB_01646430;
    uVar5 = Core_Assets_AssetManager__WaitForAssets
                      (*(long *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x20),0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0x18), lVar4 != 0)) {
      uVar2 = *(uint *)(lVar4 + 0x18);
      if ((int)uVar2 < 1) goto LAB_01646410;
      uVar6 = 0;
      do {
        if (*(uint *)(lVar4 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = *(long *)(lVar3 + 0x20);
        if (lVar7 == 0) break;
        uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + uVar6 * 8 + 0x20);
        if (*(uint *)(lVar7 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(lVar3 + 0x10) == 0) break;
        Core_Assets_AssetManager__TryGetLoadedMultipleAssets
                  (*(long *)(lVar3 + 0x10),
                   *(undefined4 *)(*(long *)(lVar7 + 0x10) + uVar6 * 4 + 0x20),&uStack_48,0);
        Core_Definitions_GameDefinitions__InitDefinitionData(lVar3,uVar5,uStack_48);
        if ((ulong)uVar2 - 1 == uVar6) goto LAB_01646410;
        lVar4 = *(long *)(lVar3 + 0x18);
        uVar6 = uVar6 + 1;
      } while (lVar4 != 0);
    }
LAB_01646430:
    lVar3 = func_0x00f78af4();
    return *(ulong *)(lVar3 + 0x18);
  }
LAB_01646410:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x1646434 | Core.Definitions.GameDefinitions.<WaitOnLoad>d__11.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Definitions_GameDefinitions__WaitOnLoad_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x164643c | Core.Definitions.GameDefinitions.<WaitOnLoad>d__11.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Definitions_GameDefinitions__WaitOnLoad_d__11__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62ee8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x164647c | Core.Definitions.GameDefinitions.<WaitOnLoad>d__11.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Definitions_GameDefinitions__WaitOnLoad_d__11__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



