// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.RoundResultsState.<>c

// ============================================================
// RVA: 0x1565ef4 | Atlas.Contexts.RoundResultsState.<>c..cctor
// ============================================================

void Atlas_Contexts_RoundResultsState___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4fe6 & 1) == 0) {
    func_0x00f78a20(0x3d289f8);
    bRam0000000003eb4fe6 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.<>c_TypeInfo*/ lRam0000000003d289f8);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.Contexts.RoundResultsState.<>c_TypeInfo*/ lRam0000000003d289f8 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1565f54 | Atlas.Contexts.RoundResultsState.<>c..ctor
// ============================================================

void Atlas_Contexts_RoundResultsState___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1565f5c | Atlas.Contexts.RoundResultsState.<>c.<UpdateEntryPreviousPositions>b__21_0
// ============================================================

long Atlas_Contexts_RoundResultsState___c___UpdateEntryPreviousPositions_b__21_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR_03a5d648;
  uStack_30 = param_5;
  uStack_28 = param_2;
  uStack_20 = param_3;
  if ((int)param_3 == (int)param_5) {
    lVar1 = /*System.UInt32$$CompareTo*/ func_0x02a0b320((ulong)&uStack_28 | 4,param_4 >> 0x20,0);
  }
  else {
    lVar1 = /*System.Int32$$CompareTo*/ func_0x02ae9adc(&uStack_30,param_3,0);
  }
  if (*(long *)PTR_03a5d648 == lStack_18) {
    return lVar1;
  }
  lVar1 = ___stack_chk_fail();
  if ((bRam0000000003eb4fe7 & 1) == 0) {
    func_0x00f78a20(0x3d21688);
    bRam0000000003eb4fe7 = 1;
  }
  uVar2 = func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
  /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970(uVar2,0);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  return lVar1;
}



