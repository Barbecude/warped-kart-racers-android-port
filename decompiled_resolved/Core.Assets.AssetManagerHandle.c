// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetManagerHandle

// ============================================================
// RVA: 0x16365d4 | Core.Assets.AssetManagerHandle.op_Equality
// ============================================================

bool Core_Assets_AssetManagerHandle__op_Equality(int param_1,int param_2)

{
  return param_1 == param_2;
}



// ============================================================
// RVA: 0x1636a44 | Core.Assets.AssetManagerHandle.op_Inequality
// ============================================================

bool Core_Assets_AssetManagerHandle__op_Inequality(int param_1,int param_2)

{
  return param_1 != param_2;
}



// ============================================================
// RVA: 0x163796c | Core.Assets.AssetManagerHandle..ctor
// ============================================================

void Core_Assets_AssetManagerHandle___ctor(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



// ============================================================
// RVA: 0x1637974 | Core.Assets.AssetManagerHandle.GetHashCode
// ============================================================

undefined4 Core_Assets_AssetManagerHandle__GetHashCode(undefined4 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x163797c | Core.Assets.AssetManagerHandle.Equals
// ============================================================

bool Core_Assets_AssetManagerHandle__Equals(uint *param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  
  if ((bRam0000000003eb5695 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    func_0x00f78a20(0x3d22910);
    bRam0000000003eb5695 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (*param_2 == /*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0) {
      puVar2 = (uint *)func_0x00f78ae4(param_2);
      return *puVar2 == *param_1;
    }
    if (*param_2 == /*int_TypeInfo*/ lRam0000000003d22910) {
      uVar1 = *param_1;
      piVar3 = (int *)func_0x00f78ae4(param_2);
      return (long)*piVar3 == (ulong)uVar1;
    }
  }
  return false;
}



// ============================================================
// RVA: 0x1637a38 | Core.Assets.AssetManagerHandle.IsValid
// ============================================================

bool Core_Assets_AssetManagerHandle__IsValid(int *param_1)

{
  int iVar1;
  
  if ((bRam0000000003eb5696 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb5696 = 1;
  }
  iVar1 = *param_1;
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return iVar1 != **(int **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
}



// ============================================================
// RVA: 0x1637ab4 | Core.Assets.AssetManagerHandle..cctor
// ============================================================

void Core_Assets_AssetManagerHandle___cctor(void)

{
  if ((bRam0000000003eb5697 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb5697 = 1;
  }
  **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8) = 0xffffffff;
  return;
}



