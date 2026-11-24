// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ToolTipManager.ToolTipData

// ============================================================
// RVA: 0x156b47c | Atlas.UI.ToolTipManager.ToolTipData.get_ID
// ============================================================

undefined8 Atlas_UI_ToolTipManager_ToolTipData__get_ID(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5003 & 1) == 0) {
    func_0x00f78a20(0x3d74f38);
    bRam0000000003eb5003 = 1;
  }
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ToolTipData_')*/ uRam0000000003d74f38,*(undefined8 *)(param_1 + 0x28),0);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x156b4ec | Atlas.UI.ToolTipManager.ToolTipData.Copy
// ============================================================

long Atlas_UI_ToolTipManager_ToolTipData__Copy(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb5004 & 1) == 0) {
    func_0x00f78a20(0x3d29328);
    bRam0000000003eb5004 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ uRam0000000003d29328);
  *(undefined4 *)(lVar2 + 0x40) = 0x3f800000;
  Atlas_UI_ModalData___ctor(lVar2,0);
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(lVar2 + 0x30) = uVar1;
    *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)(lVar2 + 0x3c) = *(undefined1 *)(param_1 + 0x3c);
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  *(undefined4 *)(lVar2 + 0x40) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
  return lVar2;
}



// ============================================================
// RVA: 0x156b580 | Atlas.UI.ToolTipManager.ToolTipData..ctor
// ============================================================

void Atlas_UI_ToolTipManager_ToolTipData___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



