// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.IPMetagameData

// ============================================================
// RVA: 0x15b716c | Atlas.UI.IPMetagameData..ctor
// ============================================================

void Atlas_UI_IPMetagameData___ctor(long param_1,undefined8 param_2)

{
  /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15b7198 | Atlas.UI.IPMetagameData.get_ID
// ============================================================

long Atlas_UI_IPMetagameData__get_ID(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar1 + 0x10) + 0x30);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar1 + 0x10) + 0x38);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar1 + 0x10) + 0x50);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar1 + 0x10) + 0x20);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x20);
}



// ============================================================
// RVA: 0x15b71b8 | Atlas.UI.IPMetagameData.Logo
// ============================================================

long Atlas_UI_IPMetagameData__Logo(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar1 + 0x10) + 0x38);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar1 + 0x10) + 0x50);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar1 + 0x10) + 0x20);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x20);
}



// ============================================================
// RVA: 0x15b71d8 | Atlas.UI.IPMetagameData.FrontEndLogo
// ============================================================

long Atlas_UI_IPMetagameData__FrontEndLogo(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar1 + 0x10) + 0x50);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar1 + 0x10) + 0x20);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x20);
}



// ============================================================
// RVA: 0x15b71f8 | Atlas.UI.IPMetagameData.BannerLogo
// ============================================================

long Atlas_UI_IPMetagameData__BannerLogo(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(*(long *)(param_1 + 0x10) + 0x50);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return *(long *)(*(long *)(lVar1 + 0x10) + 0x20);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x20);
}



// ============================================================
// RVA: 0x15b7218 | Atlas.UI.IPMetagameData.DisplayNameLocKey
// ============================================================

long Atlas_UI_IPMetagameData__DisplayNameLocKey(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x20);
}



// ============================================================
// RVA: 0x15b7238 | Atlas.UI.IPMetagameData.ButtonColour
// ============================================================

long Atlas_UI_IPMetagameData__ButtonColour(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return param_1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x20);
}



