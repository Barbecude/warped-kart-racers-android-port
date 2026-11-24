// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<LoadAll>d__49

// ============================================================
// RVA: 0x1568ac0 | Atlas.Save.SaveManager.<LoadAll>d__49..ctor
// ============================================================

void Atlas_Save_SaveManager__LoadAll_d__49___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1568aec | Atlas.Save.SaveManager.<LoadAll>d__49.System.IDisposable.Dispose
// ============================================================

void Atlas_Save_SaveManager__LoadAll_d__49__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1568af0 | Atlas.Save.SaveManager.<LoadAll>d__49.MoveNext
// ============================================================

undefined8 Atlas_Save_SaveManager__LoadAll_d__49__MoveNext(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x20);
  if (uVar5 < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar7 == 0) || (*(long *)(lVar7 + 0x70) == 0)) ||
       (plVar3 = *(long **)(*(long *)(lVar7 + 0x70) + 0x30), plVar3 == (long *)0x0))
    goto LAB_01568c18;
    uVar2 = (**(code **)(*plVar3 + 0x578))(plVar3,*(undefined8 *)(*plVar3 + 0x580));
    if ((uVar2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    if (uVar5 != 2) {
      if (uVar5 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if ((lVar7 == 0) || (lVar1 = Atlas_Save_SaveManager__get_SaveData(lVar7,0), lVar1 == 0))
        goto LAB_01568c18;
        uVar2 = Atlas_Save_SaveData__get_IsValidSaveData(lVar1,0);
        if ((uVar2 & 1) == 0) {
          Atlas_Save_SaveManager__StartSave(lVar7,0);
        }
      }
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar5 = *(int *)(param_1 + 0x28) + 1;
    *(uint *)(param_1 + 0x28) = uVar5;
    if (2 < uVar5) {
      if (lVar7 == 0) {
LAB_01568c18:
        lVar7 = func_0x00f78af4();
        return *(undefined8 *)(lVar7 + 0x18);
      }
      uVar4 = Atlas_Save_SaveManager__WorkOutCurrentSaveSlotFromLastSaved(lVar7,0);
      uVar4 = Atlas_Save_SaveManager__ChangeSaveSlot(lVar7,uVar4,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      uVar6 = 3;
      goto code_r0x01568c04;
    }
    if (lVar7 == 0) goto LAB_01568c18;
  }
  uVar4 = Atlas_Save_SaveManager__Load(lVar7,uVar5,0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  uVar6 = 2;
code_r0x01568c04:
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  return 1;
}



// ============================================================
// RVA: 0x1568c1c | Atlas.Save.SaveManager.<LoadAll>d__49.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__LoadAll_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1568c24 | Atlas.Save.SaveManager.<LoadAll>d__49.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Save_SaveManager__LoadAll_d__49__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63ca0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1568c64 | Atlas.Save.SaveManager.<LoadAll>d__49.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__LoadAll_d__49__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



