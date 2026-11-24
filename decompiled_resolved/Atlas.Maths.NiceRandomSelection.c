// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.NiceRandomSelection

// ============================================================
// RVA: 0x14b0cac | Atlas.Maths.NiceRandomSelection.Init
// ============================================================

void Atlas_Maths_NiceRandomSelection__Init(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)/*UnityEngine.Random$$get_value*/ func_0x03252940(0);
  fVar3 = fVar3 * 2.1474836e+09;
  fVar1 = -fVar3;
  if (fVar3 != INFINITY) {
    fVar1 = fVar3;
  }
  *param_1 = param_2;
  /*Atlas.Maths.RandomWithState$$Init*/ func_0x014e010c(param_1 + 2,(int)fVar1,0);
  iVar2 = /*Atlas.Maths.RandomWithState$$GetValueFromRange*/ func_0x014e01f0(param_1 + 2,0,*param_1 + 1,0);
  param_1[1] = iVar2;
  return;
}



// ============================================================
// RVA: 0x14b0d28 | Atlas.Maths.NiceRandomSelection.Init
// ============================================================

void Atlas_Maths_NiceRandomSelection__Init(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  /*Atlas.Maths.RandomWithState$$Init*/ func_0x014e010c(param_1 + 2,param_3,0);
  iVar1 = /*Atlas.Maths.RandomWithState$$GetValueFromRange*/ func_0x014e01f0(param_1 + 2,0,*param_1 + 1,0);
  param_1[1] = iVar1;
  return;
}



// ============================================================
// RVA: 0x14b0d78 | Atlas.Maths.NiceRandomSelection.GetRandomNumber
// ============================================================

undefined8 Atlas_Maths_NiceRandomSelection__GetRandomNumber(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  iVar1 = *param_1;
  /*UnityEngine.Random$$set_state*/ func_0x0325279c(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 2),*(undefined8 *)(param_1 + 4),0,
                  0);
  uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,iVar1 + 1,0);
  auVar3 = /*UnityEngine.Random$$get_state*/ func_0x0325270c(0);
  *(undefined1 (*) [16])(param_1 + 2) = auVar3;
  return uVar2;
}



// ============================================================
// RVA: 0x14b0d8c | Atlas.Maths.NiceRandomSelection.DeInit
// ============================================================

void Atlas_Maths_NiceRandomSelection__DeInit(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// ============================================================
// RVA: 0x14b0d94 | Atlas.Maths.NiceRandomSelection.SelectNext
// ============================================================

void Atlas_Maths_NiceRandomSelection__SelectNext(int *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = param_1 + 2;
  iVar4 = /*Atlas.Maths.RandomWithState$$GetValueFromRange*/ func_0x014e01f0(piVar1,0,*param_1 + 1,0);
  if (((0 < *param_1) && (iVar4 == param_1[1])) &&
     (iVar4 = /*Atlas.Maths.RandomWithState$$GetValueFromRange*/ func_0x014e01f0(piVar1,0,*param_1 + 1,0), iVar4 == param_1[1])) {
    iVar5 = 499;
    do {
      iVar4 = /*Atlas.Maths.RandomWithState$$GetValueFromRange*/ func_0x014e01f0(piVar1,0,*param_1 + 1,0);
      bVar2 = iVar5 != 0;
      bVar3 = iVar5 != 1;
      iVar5 = iVar5 + -1;
    } while ((iVar4 == param_1[1] && bVar2) && (iVar4 != param_1[1] || bVar3));
  }
  param_1[1] = iVar4;
  return;
}



// ============================================================
// RVA: 0x14b0e40 | Atlas.Maths.NiceRandomSelection.GetRandomNumber
// ============================================================

undefined8 Atlas_Maths_NiceRandomSelection__GetRandomNumber(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  /*UnityEngine.Random$$set_state*/ func_0x0325279c(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 8),*(undefined8 *)(param_1 + 0x10)
                  ,0,0);
  uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,param_2 + 1,0);
  auVar2 = /*UnityEngine.Random$$get_state*/ func_0x0325270c(0);
  *(undefined1 (*) [16])(param_1 + 8) = auVar2;
  return uVar1;
}



