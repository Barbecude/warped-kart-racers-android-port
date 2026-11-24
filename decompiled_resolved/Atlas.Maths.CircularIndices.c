// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.CircularIndices

// ============================================================
// RVA: 0x156f6c4 | Atlas.Maths.CircularIndices.get_FirstIndex
// ============================================================

undefined4 Atlas_Maths_CircularIndices__get_FirstIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// ============================================================
// RVA: 0x156f6cc | Atlas.Maths.CircularIndices.get_LastIndex
// ============================================================

undefined4 Atlas_Maths_CircularIndices__get_LastIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x156f6d4 | Atlas.Maths.CircularIndices.get_NextIndex
// ============================================================

undefined4 Atlas_Maths_CircularIndices__get_NextIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ============================================================
// RVA: 0x156f6dc | Atlas.Maths.CircularIndices.get_NotZeroCount
// ============================================================

bool Atlas_Maths_CircularIndices__get_NotZeroCount(long param_1)

{
  return *(int *)(param_1 + 0xc) != *(int *)(param_1 + 4);
}



// ============================================================
// RVA: 0x156f6f0 | Atlas.Maths.CircularIndices.get_HighestIndex
// ============================================================

int Atlas_Maths_CircularIndices__get_HighestIndex(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 <= param_1[1]) {
    iVar1 = *param_1 + -1;
  }
  return iVar1;
}



// ============================================================
// RVA: 0x156f710 | Atlas.Maths.CircularIndices.get_LowestIndex
// ============================================================

int Atlas_Maths_CircularIndices__get_LowestIndex(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 8) <= iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}



// ============================================================
// RVA: 0x156f720 | Atlas.Maths.CircularIndices.get_Capacity
// ============================================================

undefined4 Atlas_Maths_CircularIndices__get_Capacity(undefined4 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x156f728 | Atlas.Maths.CircularIndices.Init
// ============================================================

void Atlas_Maths_CircularIndices__Init(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}



// ============================================================
// RVA: 0x156f734 | Atlas.Maths.CircularIndices.DeInit
// ============================================================

void Atlas_Maths_CircularIndices__DeInit(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// ============================================================
// RVA: 0x156f73c | Atlas.Maths.CircularIndices.Increment
// ============================================================

void Atlas_Maths_CircularIndices__Increment(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  iVar2 = iVar1 + 1;
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  if (iVar2 == param_1[1]) {
    iVar2 = 0;
    if (iVar1 + 2 != *param_1) {
      iVar2 = iVar1 + 2;
    }
  }
  else {
    if (iVar2 != *param_1) {
      return;
    }
    param_1[3] = 0;
    iVar2 = param_1[1] + 1;
  }
  param_1[1] = iVar2;
  return;
}



