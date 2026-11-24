// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.SaveSlotBehaviour

// ============================================================
// RVA: 0x14eec4c | Atlas.UI.SaveSlotBehaviour.get_DeleteButton
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_DeleteButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14eec54 | Atlas.UI.SaveSlotBehaviour.get_SlotButton
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_SlotButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14eec5c | Atlas.UI.SaveSlotBehaviour.get_SaveDateText
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_SaveDateText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x14eec64 | Atlas.UI.SaveSlotBehaviour.get_SaveTimeText
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_SaveTimeText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14eec6c | Atlas.UI.SaveSlotBehaviour.get_UnlockAmountText
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_UnlockAmountText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14eec74 | Atlas.UI.SaveSlotBehaviour.get_FlagsAmountText
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_FlagsAmountText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14eec7c | Atlas.UI.SaveSlotBehaviour.get_GoldMedalsAmountText
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_GoldMedalsAmountText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14eec84 | Atlas.UI.SaveSlotBehaviour.get_PlayTimeText
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_PlayTimeText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x14eec8c | Atlas.UI.SaveSlotBehaviour.get_UsedSlotInfo
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_UsedSlotInfo(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x14eec94 | Atlas.UI.SaveSlotBehaviour.get_UnUsedSlotInfo
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_UnUsedSlotInfo(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x14eec9c | Atlas.UI.SaveSlotBehaviour.get_CurrentSlotToColour
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_CurrentSlotToColour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x14eeca4 | Atlas.UI.SaveSlotBehaviour.get_CurrentSlotColour
// ============================================================

undefined4 Atlas_UI_SaveSlotBehaviour__get_CurrentSlotColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x14eecb0 | Atlas.UI.SaveSlotBehaviour.get_DefaultSlotColour
// ============================================================

undefined4 Atlas_UI_SaveSlotBehaviour__get_DefaultSlotColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x14eecbc | Atlas.UI.SaveSlotBehaviour.get_FlagsContainer
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_FlagsContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x14eecc4 | Atlas.UI.SaveSlotBehaviour.get_MedalsContainer
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_MedalsContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x14eeccc | Atlas.UI.SaveSlotBehaviour.get_NumberContainer
// ============================================================

undefined8 Atlas_UI_SaveSlotBehaviour__get_NumberContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x14eecd4 | Atlas.UI.SaveSlotBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_SaveSlotBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



