// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.FreeplayScreen

// ============================================================
// RVA: 0x158710c | Atlas.UI.Screens.FreeplayScreen.OnBeforeEnterCoroutine
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

ulong Atlas_UI_Screens_FreeplayScreen__OnBeforeEnterCoroutine(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000003eb50e0 & 1) == 0) {
    func_0x00f78a20(0x3d275c0);
    bRam0000000003eb50e0 = 1;
  }
  uVar2 = func_0x00f78aec(/*Atlas.UI.Screens.FreeplayScreen.<OnBeforeEnterCoroutine>d__10_TypeInfo*/ uRam0000000003d275c0);
  /*Atlas.UI.Screens.FreeplayScreen.<OnBeforeEnterCoroutine>d__10$$.ctor*/ func_0x0154cfe0(uVar2,0,0);
  if (uVar2 != 0) {
    *(undefined8 *)(uVar2 + 0x20) = param_1;
    return uVar2;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb50e1 & 1) == 0) {
    func_0x00f78a20(0x3d2c710);
    func_0x00f78a20(0x3d57948);
    bRam0000000003eb50e1 = 1;
  }
  if ((*(long *)(lVar3 + 0xa0) != 0) &&
     (lVar3 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar3 + 0xa0),uRam0000000003d57948), lVar3 != 0)) {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar3,0,0,0,0);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar3,0,0,0);
    if ((bRam0000000003eb70f8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar3,uRam0000000003d2c710);
      bRam0000000003eb70f8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
    }
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar3);
      uVar2 = (ulong)(uVar1 ^ 1);
    }
    return uVar2;
  }
  func_0x00f78af4();
  return 1;
}



// ============================================================
// RVA: 0x1587180 | Atlas.UI.Screens.FreeplayScreen.OnAfterEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

uint Atlas_UI_Screens_FreeplayScreen__OnAfterEnter(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam0000000003eb50e1 & 1) == 0) {
    func_0x00f78a20(0x3d2c710);
    func_0x00f78a20(0x3d57948);
    bRam0000000003eb50e1 = 1;
  }
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (lVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(param_1 + 0xa0),uRam0000000003d57948), lVar2 != 0)) {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar2,0,0,0,0);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar2,0,0,0);
    if ((bRam0000000003eb70f8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar2,uRam0000000003d2c710);
      bRam0000000003eb70f8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
    }
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar2);
      uVar1 = uVar1 ^ 1;
    }
    return uVar1;
  }
  func_0x00f78af4();
  return 1;
}



// ============================================================
// RVA: 0x1587230 | Atlas.UI.Screens.FreeplayScreen.RequiresBeforeEnterCoroutine
// ============================================================

undefined8 Atlas_UI_Screens_FreeplayScreen__RequiresBeforeEnterCoroutine(void)

{
  return 1;
}



// ============================================================
// RVA: 0x1587238 | Atlas.UI.Screens.FreeplayScreen.BuildFreeplayOptions
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

undefined8 *
Atlas_UI_Screens_FreeplayScreen__BuildFreeplayOptions
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  int extraout_w1;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  long *plVar21;
  code *pcVar22;
  long *unaff_x24;
  long lVar23;
  long *unaff_x25;
  long *plVar24;
  undefined8 **ppuVar25;
  undefined8 unaff_x26;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  long lStack_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined3 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined1 ****ppppuStack_110;
  long *plStack_108;
  undefined1 ****ppppuStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  undefined8 *puStack_c8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb50e2 & 1) == 0) {
    func_0x00f78a20(0x3d275b8);
    bRam0000000003eb50e2 = 1;
  }
  puVar8 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.FreeplayScreen.<BuildFreeplayOptions>d__13_TypeInfo*/ uRam0000000003d275b8);
  plVar16 = (long *)0x0;
  /*Atlas.UI.Screens.FreeplayScreen.<BuildFreeplayOptions>d__13$$.ctor*/ func_0x0154c6e4(puVar8,0);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[4] = param_1;
    return puVar8;
  }
  uVar9 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_Screens_FreeplayScreen__ContinuePressed;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50e3 & 1) == 0) {
    func_0x00f78a20(0x3d41058);
    bRam0000000003eb50e3 = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41058);
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x20) != 0) {
      /*Atlas.UI.Screens.FreeplayScreen.NextSelected$$Invoke*/ func_0x0154d238(*(long *)(lVar10 + 0x20),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  auVar27 = func_0x00f78af4();
  lVar23 = auVar27._8_8_;
  lVar10 = auVar27._0_8_;
  puStack_68 = &Atlas_UI_Screens_FreeplayScreen__OnOptionSelected;
  plVar21 = (long *)0x3eb5000;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb50e4 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41050);
    func_0x00f78a20(0x3d41058);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb50e4 = 1;
  }
  if (lVar23 == 0) goto code_r0x015875b4;
  unaff_x25 = (long *)0x3d23000;
  plVar21 = *(long **)(lVar10 + 0xa0);
  unaff_x24 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar23,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar21,unaff_x24,0);
  if (iVar6 == 0) {
code_r0x01587550:
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41058);
    if (lVar11 == 0) {
      return (undefined8 *)0x0;
    }
    puVar8 = *(undefined8 **)(lVar11 + 0x10);
    if (puVar8 != (undefined8 *)0x0) {
      puStack_c8 = puVar8;
      lVar10 = puVar8[0xd];
      if (lVar10 == 0) {
        ppuVar25 = &puStack_c8;
        lVar23 = 1;
      }
      else {
        lVar23 = *(long *)(lVar10 + 0x18);
        if (lVar23 == 0) {
          return puVar8;
        }
        ppuVar25 = (undefined8 **)(lVar10 + 0x20);
      }
      lVar10 = 0;
      do {
        puVar17 = ppuVar25[lVar10];
        pcVar22 = (code *)puVar17[2];
        plVar21 = (long *)puVar17[4];
        lVar11 = puVar17[5];
        if (*(short *)(lVar11 + 0x48) == -1) {
          func_0x00f78ad8(lVar11);
        }
        iVar6 = func_0x00f78a4c(lVar11);
        bVar4 = *(char *)(lVar11 + 0x4a) == '\x02';
        if (iVar6 == 0) {
          if (bVar4) {
            if (plVar21 == (long *)0x0) {
code_r0x0154d66c:
              puVar17 = (undefined8 *)(*pcVar22)(plVar16,param_4,lVar11);
            }
            else {
              if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar21 + 0x115) & 1) != 0)) ||
                 (puVar8[3] == 0)) goto code_r0x0154d560;
              iVar6 = func_0x00f78a44(lVar11);
              iVar5 = func_0x00f78ec0(lVar11);
              if (iVar6 == 0) {
                uVar3 = *(ushort *)(lVar11 + 0x48);
                if (iVar5 == 0) {
                  lVar11 = *plVar21 + (ulong)uVar3 * 0x10;
                  puVar17 = (undefined8 *)
                            (**(code **)(lVar11 + 0x138))
                                      (plVar21,plVar16,param_4,*(undefined8 *)(lVar11 + 0x140));
                  goto code_r0x0154d67c;
                }
                lVar11 = func_0x00f78a48(lVar11);
                lVar18 = *plVar21;
                uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar13 != 0) {
                  piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == lVar11) {
                      puVar17 = (undefined8 *)
                                (lVar18 + (long)(int)(*piVar19 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x0154d814;
                    }
                    piVar19 = piVar19 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar21,lVar11,(ulong)uVar3);
code_r0x0154d814:
                pcVar22 = (code *)*puVar17;
                puVar17 = (undefined8 *)puVar17[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar9 = *(undefined8 *)
                           (*plVar21 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar18 = *plVar21;
                  uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar13 != 0) {
                    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)(lVar11 + 0x18)) {
                        lVar18 = lVar18 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x0154d7ec;
                      }
                      piVar19 = piVar19 + 4;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  lVar18 = func_0x00fac1f0(plVar21);
code_r0x0154d7ec:
                  uVar9 = *(undefined8 *)(lVar18 + 8);
                }
                puVar17 = (undefined8 *)func_0x00f78acc(uVar9,lVar11);
                pcVar22 = (code *)*puVar17;
              }
              puVar17 = (undefined8 *)(*pcVar22)(plVar21,plVar16,param_4,puVar17);
            }
          }
          else {
            if ((*(short *)(lVar11 + 0x48) == -1) || (puVar8[3] == 0)) goto code_r0x0154d66c;
            iVar6 = func_0x00f78a44(lVar11);
            iVar5 = func_0x00f78ec0(lVar11);
            if (iVar6 == 0) {
              uVar3 = *(ushort *)(lVar11 + 0x48);
              if (iVar5 == 0) {
                lVar11 = *plVar16 + (ulong)uVar3 * 0x10;
                puVar17 = (undefined8 *)
                          (**(code **)(lVar11 + 0x138))
                                    (plVar16,param_4,*(undefined8 *)(lVar11 + 0x140));
                goto code_r0x0154d67c;
              }
              lVar11 = func_0x00f78a48(lVar11);
              lVar18 = *plVar16;
              uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
              if (uVar13 != 0) {
                piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == lVar11) {
                    puVar17 = (undefined8 *)
                              (lVar18 + (long)(int)(*piVar19 + (uint)uVar3) * 0x10 + 0x138);
                    goto code_r0x0154d7a8;
                  }
                  piVar19 = piVar19 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar16,lVar11,(ulong)uVar3);
code_r0x0154d7a8:
              pcVar22 = (code *)*puVar17;
              puVar17 = (undefined8 *)puVar17[1];
            }
            else {
              if (iVar5 == 0) {
                uVar9 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar18 = *plVar16;
                uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar13 != 0) {
                  piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)(lVar11 + 0x18)) {
                      lVar18 = lVar18 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0154d780;
                    }
                    piVar19 = piVar19 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                lVar18 = func_0x00fac1f0(plVar16);
code_r0x0154d780:
                uVar9 = *(undefined8 *)(lVar18 + 8);
              }
              puVar17 = (undefined8 *)func_0x00f78acc(uVar9,lVar11);
              pcVar22 = (code *)*puVar17;
            }
            puVar17 = (undefined8 *)(*pcVar22)(plVar16,param_4,puVar17);
          }
        }
        else {
          if (bVar4) goto code_r0x0154d66c;
code_r0x0154d560:
          puVar17 = (undefined8 *)(*pcVar22)(plVar21,plVar16,param_4,lVar11);
        }
code_r0x0154d67c:
        lVar10 = lVar10 + 1;
        if (lVar10 == lVar23) {
          return puVar17;
        }
      } while( true );
    }
  }
  else {
    plVar15 = (long *)0x3d41050;
    plVar24 = (long *)0x3d41050;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41050);
    unaff_x25 = plVar15;
    if (((lVar11 != 0) && (*(long *)(lVar11 + 0x80) != 0)) &&
       (lVar11 = *(long *)(*(long *)(lVar11 + 0x80) + 0x18), unaff_x25 = plVar24, lVar11 != 0)) {
      plVar21 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
      lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar23,0);
      if (lVar11 != 0) {
        unaff_x24 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar11,0);
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = 0x3d24188;
        uVar26 = 0x3d24188;
        if (plVar21 == (long *)0x0) {
          plVar12 = (long *)0x0;
          if (unaff_x24 != (long *)0x0) goto code_r0x01587478;
code_r0x01587490:
          plVar14 = (long *)0x0;
        }
        else {
          plVar12 = plVar21;
          if (*plVar21 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar12 = (long *)0x0;
          }
          if (unaff_x24 == (long *)0x0) goto code_r0x01587490;
code_r0x01587478:
          plVar14 = unaff_x24;
          if (*unaff_x24 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar14 = (long *)0x0;
          }
        }
        uVar13 = /*Core.UI2.UIUtils$$RectContainsRectHorizontally*/ func_0x02f915a4(plVar12,plVar14,0);
        unaff_x25 = plVar15;
        unaff_x26 = uVar9;
        if ((uVar13 & 1) != 0) {
code_r0x01587540:
          uVar26 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar23,0);
          *(undefined8 *)(lVar10 + 0xa0) = uVar26;
          unaff_x26 = uVar9;
          goto code_r0x01587550;
        }
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41050);
        unaff_x25 = plVar24;
        if (lVar11 != 0) {
          plVar21 = *(long **)(lVar11 + 0x80);
          lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41050);
          if ((lVar11 != 0) && (unaff_x26 = uVar26, *(long *)(lVar11 + 0x80) != 0)) {
            unaff_x24 = *(long **)(*(long *)(lVar11 + 0x80) + 0x18);
            lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar23,0);
            if (lVar11 != 0) {
              unaff_x25 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar11,0);
              if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (unaff_x25 == (long *)0x0) {
                plVar15 = (long *)0x0;
              }
              else {
                plVar15 = unaff_x25;
                if (*unaff_x25 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                  plVar15 = (long *)0x0;
                }
              }
              /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(unaff_x24,plVar15,0,0);
              if (plVar21 != (long *)0x0) {
                /*Atlas.UI.PaginationDotController$$ScrollToTarget*/ func_0x014b600c(plVar21,0);
                goto code_r0x01587540;
              }
            }
          }
        }
      }
    }
  }
code_r0x015875b4:
  lVar11 = func_0x00f78af4();
  puStack_c8 = (undefined8 *)&Atlas_UI_Screens_FreeplayScreen__OnAfterExit;
  plStack_e0 = plVar16;
  uStack_d8 = param_4;
  pppuStack_d0 = &ppuStack_70;
  if ((bRam0000000003eb50e5 & 1) == 0) {
    lStack_f0 = lVar23;
    lStack_e8 = lVar10;
    func_0x00f78a20(0x3d41060);
    auVar27._8_8_ = lStack_f0;
    auVar27._0_8_ = lStack_e8;
    bRam0000000003eb50e5 = 1;
  }
  lStack_f0 = auVar27._8_8_;
  lStack_e8 = auVar27._0_8_;
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41060);
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0xb8) == 0)) {
code_r0x0158763c:
    lVar10 = func_0x00f78af4();
    lStack_118 = 0x3d41060;
    ppppuStack_110 = (undefined1 ****)0x3eb5000;
    plStack_f8 = (long *)&Atlas_UI_Screens_FreeplayScreen___ctor;
    uStack_120 = lVar23;
    plStack_108 = (long *)lVar11;
    ppppuStack_100 = &pppuStack_d0;
    if ((bRam0000000003eb50e6 & 1) == 0) {
      func_0x00f78a20(0x3d2c700);
      bRam0000000003eb50e6 = 1;
    }
    if (lVar10 == 0) {
      auVar27 = func_0x00f78af4();
      puVar17 = auVar27._8_8_;
      puVar8 = auVar27._0_8_;
      uVar26 = puVar17[1];
      uVar9 = *puVar17;
      puVar8[2] = puVar17[2];
      puVar8[1] = uVar26;
      *puVar8 = uVar9;
      return puVar8;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar8 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c700 + 0x18) + 0xc0) + 0x38))();
    return puVar8;
  }
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar10 + 0xb8),6,0,0);
  lVar10 = *(long *)(lVar11 + 0x78);
  if (lVar10 == 0) goto code_r0x0158763c;
  uVar1 = *(uint *)(lVar11 + 0x98);
  uVar13 = (ulong)uVar1;
  lStack_118 = *(long *)PTR_03a5d648;
  ppppuStack_110 = (undefined1 ****)unaff_x26;
  plStack_108 = unaff_x25;
  ppppuStack_100 = (undefined1 ****)unaff_x24;
  plStack_f8 = plVar21;
  if ((bRam0000000003eb567f & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0,uVar13,0);
    func_0x00f78a20(0x3d2e030);
    func_0x00f78a20(0x3d2dfc8);
    func_0x00f78a20(0x3d3cce0);
    func_0x00f78a20(0x3d3cce8);
    func_0x00f78a20(0x3d3ccf0);
    bRam0000000003eb567f = 1;
  }
  lVar23 = *(long *)(lVar10 + 0x10);
  if (lVar23 == 0) {
code_r0x016364d0:
    func_0x00f78af4();
  }
  else {
    iVar6 = *(int *)(lVar23 + 0x18);
    if (0 < iVar6) {
      uVar20 = 0;
      do {
        if (*(uint *)(lVar23 + 0x18) <= uVar20) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar23 = *(long *)(lVar23 + 0x10) + (long)(int)uVar20 * 0x20;
        uVar2 = *(uint *)(lVar23 + 0x20);
        uStack_128 = *(undefined8 *)(lVar23 + 0x2c);
        uStack_130 = *(undefined8 *)(lVar23 + 0x24);
        uStack_120 = CONCAT44(uStack_120._4_4_,*(undefined4 *)(lVar23 + 0x34));
        uStack_138._0_3_ = (undefined3)*(undefined4 *)(lVar23 + 0x39);
        uStack_138._3_1_ = (undefined1)*(undefined4 *)(lVar23 + 0x3c);
        uStack_134 = (undefined3)((uint)*(undefined4 *)(lVar23 + 0x3c) >> 8);
        if (((*(byte *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (uVar2 == uVar1) {
          if (*(long *)(lVar10 + 0x10) != 0) {
            uStack_1b4 = (undefined4)uStack_128;
            uStack_1b0 = (undefined4)((ulong)uStack_128 >> 0x20);
            uStack_1bc = (undefined4)uStack_130;
            uStack_1b8 = (undefined4)((ulong)uStack_130 >> 0x20);
            uStack_1ac = (undefined4)uStack_120;
            uStack_1a8._0_5_ = CONCAT41(uStack_138,1);
            uStack_1a8 = CONCAT44(CONCAT31(uStack_134,uStack_138._3_1_),(undefined4)uStack_1a8);
            uStack_1c0 = uVar1;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(lVar10 + 0x10),uVar20,&uStack_1c0,uRam0000000003d3ccf0);
            if (*(long *)(lVar10 + 0x28) != 0) {
              lVar23 = *(long *)(lVar10 + 0x18);
              uVar7 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$get_Item*/ func_0x01e2ca80(*(long *)(lVar10 + 0x28),uVar13,uRam0000000003d2dfc8);
              lVar10 = 0;
              if (lVar23 != 0) {
                puVar8 = (undefined8 *)
                         /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&uStack_1c0,lVar23,uVar7,uRam0000000003d2e030);
                if (*(long *)PTR_03a5d648 == lStack_118) {
                  return puVar8;
                }
                goto code_r0x016365d0;
              }
            }
          }
          break;
        }
        if (iVar6 - 1U == uVar20) goto code_r0x016364d4;
        lVar23 = *(long *)(lVar10 + 0x10);
        uVar20 = uVar20 + 1;
      } while (lVar23 != 0);
      goto code_r0x016364d0;
    }
  }
code_r0x016364d4:
  lVar23 = lStack_f0;
  if (*(long *)PTR_03a5d648 != lStack_118) {
code_r0x016365d0:
    iVar6 = ___stack_chk_fail();
    return (undefined8 *)(ulong)(iVar6 == extraout_w1);
  }
  if ((bRam0000000003eb568e & 1) == 0) {
    func_0x00f78a20(0x3d2dfa0);
    func_0x00f78a20(0x3d2dfb8);
    bRam0000000003eb568e = 1;
  }
  plStack_f8 = (long *)((ulong)plStack_f8 & 0xffffffff00000000);
  if (*(long *)(lVar10 + 0x28) != 0) {
    puVar8 = (undefined8 *)
             /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(lVar10 + 0x28),uVar13,&plStack_f8,uRam0000000003d2dfb8);
    if ((int)puVar8 == 0) {
      return puVar8;
    }
    if (*(long *)(lVar10 + 0x28) != 0) {
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(lVar10 + 0x28),uVar13,uRam0000000003d2dfa0);
      puVar8 = (undefined8 *)/*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(lVar10,(ulong)plStack_f8 & 0xffffffff);
      return puVar8;
    }
  }
  auVar27 = func_0x00f78af4();
  lVar11 = auVar27._0_8_;
  uStack_130 = lVar23;
  uStack_128 = 0x3eb5000;
  plStack_108 = (long *)&Core_Assets_AssetManager__ReleaseAsset;
  uStack_120 = uVar13;
  lStack_118 = lVar10;
  ppppuStack_110 = &pppuStack_d0;
  if ((bRam0000000003eb5690 & 1) == 0) {
    func_0x00f78a20(0x3d433e8);
    func_0x00f78a20(0x3d43408);
    func_0x00f78a20(0x3d43420);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2fac8);
    func_0x00f78a20(0x3d2e008);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d35c80);
    bRam0000000003eb5690 = 1;
  }
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  lStack_1c8 = 0;
  if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x01635688;
  uVar13 = auVar27._8_8_ & 0xffffffff;
  puVar8 = (undefined8 *)
           /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar11 + 0x18),uVar13,&uStack_1c0,uRam0000000003d2e020);
  if ((int)puVar8 == 0) {
    return puVar8;
  }
  if (*(long *)(lVar11 + 0x30) == 0) goto code_r0x01635688;
  puVar8 = (undefined8 *)
           /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar11 + 0x30),CONCAT44(uStack_1ac,uStack_1b0),&lStack_1c8,
                           uRam0000000003d2fec0);
  if ((int)puVar8 == 0) {
    return puVar8;
  }
  if ((char)uStack_1a8 == '\0') {
    if (uStack_1a8._1_1_ == '\0') {
      uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_1a0,uRam0000000003d2bfa0);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
        iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar8 = (undefined8 *)0x3d43408;
        goto joined_r0x01635680;
      }
      puVar8 = (undefined8 *)0x3d43408;
    }
    else {
      uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_180,uRam0000000003d2c050);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
        puVar8 = (undefined8 *)0x3d43420;
      }
      else {
        iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar8 = (undefined8 *)0x3d43420;
joined_r0x01635680:
        if (iVar6 == 0) {
          func_0x00f78ad0();
        }
      }
    }
  }
  else {
    uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_160,uRam0000000003d2be18);
    if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
      iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
      puVar8 = (undefined8 *)0x3d433e8;
      goto joined_r0x01635680;
    }
    puVar8 = (undefined8 *)0x3d433e8;
  }
  /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar9,*puVar8);
  if (*(long *)(lVar11 + 0x18) != 0) {
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar11 + 0x18),uVar13,uRam0000000003d2e008);
    if (((*(long *)(lVar11 + 0x20) != 0) &&
        (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar11 + 0x20),CONCAT44(uStack_1b4,uStack_1b8),
                         uRam0000000003d2fac8), lStack_1c8 != 0)) &&
       (*(long *)(lStack_1c8 + 0x20) != 0)) {
      puVar8 = (undefined8 *)
               /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_1c8 + 0x20),uVar13,uRam0000000003d35c80);
      return puVar8;
    }
  }
code_r0x01635688:
  func_0x00f78af4();
  if ((bRam0000000003eb567a & 1) == 0) {
    func_0x00f78a20(0x3d26978);
    func_0x00f78a20(0x3d2feb0);
    func_0x00f78a20(0x3d35c68);
    func_0x00f78a20(0x3d1cdf8);
    bRam0000000003eb567a = 1;
  }
  puVar8 = (undefined8 *)func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
  return puVar8;
}



// ============================================================
// RVA: 0x15872ac | Atlas.UI.Screens.FreeplayScreen.ContinuePressed
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

undefined8 *
Atlas_UI_Screens_FreeplayScreen__ContinuePressed
          (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int extraout_w1;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  long *plVar20;
  code *pcVar21;
  long *unaff_x24;
  long lVar22;
  long *unaff_x25;
  long *plVar23;
  undefined8 **ppuVar24;
  undefined8 unaff_x26;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  long lStack_198;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined3 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined1 ***pppuStack_e0;
  long *plStack_d8;
  undefined1 ***pppuStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb50e3 & 1) == 0) {
    func_0x00f78a20(0x3d41058);
    bRam0000000003eb50e3 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41058);
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x20) != 0) {
      /*Atlas.UI.Screens.FreeplayScreen.NextSelected$$Invoke*/ func_0x0154d238(*(long *)(lVar9 + 0x20),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  auVar26 = func_0x00f78af4();
  lVar22 = auVar26._8_8_;
  lVar9 = auVar26._0_8_;
  puStack_38 = &Atlas_UI_Screens_FreeplayScreen__OnOptionSelected;
  plVar20 = (long *)0x3eb5000;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50e4 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41050);
    func_0x00f78a20(0x3d41058);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb50e4 = 1;
  }
  if (lVar22 == 0) goto code_r0x015875b4;
  unaff_x25 = (long *)0x3d23000;
  plVar20 = *(long **)(lVar9 + 0xa0);
  unaff_x24 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar22,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar20,unaff_x24,0);
  if (iVar6 == 0) {
code_r0x01587550:
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar9,uRam0000000003d41058);
    if (lVar10 == 0) {
      return (undefined8 *)0x0;
    }
    puVar13 = *(undefined8 **)(lVar10 + 0x10);
    if (puVar13 != (undefined8 *)0x0) {
      puStack_98 = puVar13;
      lVar9 = puVar13[0xd];
      if (lVar9 == 0) {
        ppuVar24 = &puStack_98;
        lVar22 = 1;
      }
      else {
        lVar22 = *(long *)(lVar9 + 0x18);
        if (lVar22 == 0) {
          return puVar13;
        }
        ppuVar24 = (undefined8 **)(lVar9 + 0x20);
      }
      lVar9 = 0;
      do {
        puVar16 = ppuVar24[lVar9];
        pcVar21 = (code *)puVar16[2];
        plVar20 = (long *)puVar16[4];
        lVar10 = puVar16[5];
        if (*(short *)(lVar10 + 0x48) == -1) {
          func_0x00f78ad8(lVar10);
        }
        iVar6 = func_0x00f78a4c(lVar10);
        bVar4 = *(char *)(lVar10 + 0x4a) == '\x02';
        if (iVar6 == 0) {
          if (bVar4) {
            if (plVar20 == (long *)0x0) {
code_r0x0154d66c:
              puVar16 = (undefined8 *)(*pcVar21)(param_3,param_4,lVar10);
            }
            else {
              if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar20 + 0x115) & 1) != 0)) ||
                 (puVar13[3] == 0)) goto code_r0x0154d560;
              iVar6 = func_0x00f78a44(lVar10);
              iVar5 = func_0x00f78ec0(lVar10);
              if (iVar6 == 0) {
                uVar3 = *(ushort *)(lVar10 + 0x48);
                if (iVar5 == 0) {
                  lVar10 = *plVar20 + (ulong)uVar3 * 0x10;
                  puVar16 = (undefined8 *)
                            (**(code **)(lVar10 + 0x138))
                                      (plVar20,param_3,param_4,*(undefined8 *)(lVar10 + 0x140));
                  goto code_r0x0154d67c;
                }
                lVar10 = func_0x00f78a48(lVar10);
                lVar17 = *plVar20;
                uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
                if (uVar12 != 0) {
                  piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == lVar10) {
                      puVar16 = (undefined8 *)
                                (lVar17 + (long)(int)(*piVar18 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x0154d814;
                    }
                    piVar18 = piVar18 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar16 = (undefined8 *)func_0x00fac1f0(plVar20,lVar10,(ulong)uVar3);
code_r0x0154d814:
                pcVar21 = (code *)*puVar16;
                puVar16 = (undefined8 *)puVar16[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar8 = *(undefined8 *)
                           (*plVar20 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar17 = *plVar20;
                  uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
                  if (uVar12 != 0) {
                    piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)(lVar10 + 0x18)) {
                        lVar17 = lVar17 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x0154d7ec;
                      }
                      piVar18 = piVar18 + 4;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  lVar17 = func_0x00fac1f0(plVar20);
code_r0x0154d7ec:
                  uVar8 = *(undefined8 *)(lVar17 + 8);
                }
                puVar16 = (undefined8 *)func_0x00f78acc(uVar8,lVar10);
                pcVar21 = (code *)*puVar16;
              }
              puVar16 = (undefined8 *)(*pcVar21)(plVar20,param_3,param_4,puVar16);
            }
          }
          else {
            if ((*(short *)(lVar10 + 0x48) == -1) || (puVar13[3] == 0)) goto code_r0x0154d66c;
            iVar6 = func_0x00f78a44(lVar10);
            iVar5 = func_0x00f78ec0(lVar10);
            if (iVar6 == 0) {
              uVar3 = *(ushort *)(lVar10 + 0x48);
              if (iVar5 == 0) {
                lVar10 = *param_3 + (ulong)uVar3 * 0x10;
                puVar16 = (undefined8 *)
                          (**(code **)(lVar10 + 0x138))
                                    (param_3,param_4,*(undefined8 *)(lVar10 + 0x140));
                goto code_r0x0154d67c;
              }
              lVar10 = func_0x00f78a48(lVar10);
              lVar17 = *param_3;
              uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar12 != 0) {
                piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == lVar10) {
                    puVar16 = (undefined8 *)
                              (lVar17 + (long)(int)(*piVar18 + (uint)uVar3) * 0x10 + 0x138);
                    goto code_r0x0154d7a8;
                  }
                  piVar18 = piVar18 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar16 = (undefined8 *)func_0x00fac1f0(param_3,lVar10,(ulong)uVar3);
code_r0x0154d7a8:
              pcVar21 = (code *)*puVar16;
              puVar16 = (undefined8 *)puVar16[1];
            }
            else {
              if (iVar5 == 0) {
                uVar8 = *(undefined8 *)(*param_3 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar17 = *param_3;
                uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
                if (uVar12 != 0) {
                  piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)(lVar10 + 0x18)) {
                      lVar17 = lVar17 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0154d780;
                    }
                    piVar18 = piVar18 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                lVar17 = func_0x00fac1f0(param_3);
code_r0x0154d780:
                uVar8 = *(undefined8 *)(lVar17 + 8);
              }
              puVar16 = (undefined8 *)func_0x00f78acc(uVar8,lVar10);
              pcVar21 = (code *)*puVar16;
            }
            puVar16 = (undefined8 *)(*pcVar21)(param_3,param_4,puVar16);
          }
        }
        else {
          if (bVar4) goto code_r0x0154d66c;
code_r0x0154d560:
          puVar16 = (undefined8 *)(*pcVar21)(plVar20,param_3,param_4,lVar10);
        }
code_r0x0154d67c:
        lVar9 = lVar9 + 1;
        if (lVar9 == lVar22) {
          return puVar16;
        }
      } while( true );
    }
  }
  else {
    plVar15 = (long *)0x3d41050;
    plVar23 = (long *)0x3d41050;
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050);
    unaff_x25 = plVar15;
    if (((lVar10 != 0) && (*(long *)(lVar10 + 0x80) != 0)) &&
       (lVar10 = *(long *)(*(long *)(lVar10 + 0x80) + 0x18), unaff_x25 = plVar23, lVar10 != 0)) {
      plVar20 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
      lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar22,0);
      if (lVar10 != 0) {
        unaff_x24 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar10,0);
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = 0x3d24188;
        uVar25 = 0x3d24188;
        if (plVar20 == (long *)0x0) {
          plVar11 = (long *)0x0;
          if (unaff_x24 != (long *)0x0) goto code_r0x01587478;
code_r0x01587490:
          plVar14 = (long *)0x0;
        }
        else {
          plVar11 = plVar20;
          if (*plVar20 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar11 = (long *)0x0;
          }
          if (unaff_x24 == (long *)0x0) goto code_r0x01587490;
code_r0x01587478:
          plVar14 = unaff_x24;
          if (*unaff_x24 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar14 = (long *)0x0;
          }
        }
        uVar12 = /*Core.UI2.UIUtils$$RectContainsRectHorizontally*/ func_0x02f915a4(plVar11,plVar14,0);
        unaff_x25 = plVar15;
        unaff_x26 = uVar8;
        if ((uVar12 & 1) != 0) {
code_r0x01587540:
          uVar25 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar22,0);
          *(undefined8 *)(lVar9 + 0xa0) = uVar25;
          unaff_x26 = uVar8;
          goto code_r0x01587550;
        }
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050);
        unaff_x25 = plVar23;
        if (lVar10 != 0) {
          plVar20 = *(long **)(lVar10 + 0x80);
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050);
          if ((lVar10 != 0) && (unaff_x26 = uVar25, *(long *)(lVar10 + 0x80) != 0)) {
            unaff_x24 = *(long **)(*(long *)(lVar10 + 0x80) + 0x18);
            lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar22,0);
            if (lVar10 != 0) {
              unaff_x25 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar10,0);
              if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (unaff_x25 == (long *)0x0) {
                plVar15 = (long *)0x0;
              }
              else {
                plVar15 = unaff_x25;
                if (*unaff_x25 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                  plVar15 = (long *)0x0;
                }
              }
              /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(unaff_x24,plVar15,0,0);
              if (plVar20 != (long *)0x0) {
                /*Atlas.UI.PaginationDotController$$ScrollToTarget*/ func_0x014b600c(plVar20,0);
                goto code_r0x01587540;
              }
            }
          }
        }
      }
    }
  }
code_r0x015875b4:
  lVar10 = func_0x00f78af4();
  puStack_98 = (undefined8 *)&Atlas_UI_Screens_FreeplayScreen__OnAfterExit;
  plStack_b0 = param_3;
  uStack_a8 = param_4;
  ppuStack_a0 = &puStack_40;
  if ((bRam0000000003eb50e5 & 1) == 0) {
    lStack_c0 = lVar22;
    lStack_b8 = lVar9;
    func_0x00f78a20(0x3d41060);
    auVar26._8_8_ = lStack_c0;
    auVar26._0_8_ = lStack_b8;
    bRam0000000003eb50e5 = 1;
  }
  lStack_c0 = auVar26._8_8_;
  lStack_b8 = auVar26._0_8_;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d41060);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0xb8) == 0)) {
code_r0x0158763c:
    lVar9 = func_0x00f78af4();
    lStack_e8 = 0x3d41060;
    pppuStack_e0 = (undefined1 ***)0x3eb5000;
    plStack_c8 = (long *)&Atlas_UI_Screens_FreeplayScreen___ctor;
    uStack_f0 = lVar22;
    plStack_d8 = (long *)lVar10;
    pppuStack_d0 = &ppuStack_a0;
    if ((bRam0000000003eb50e6 & 1) == 0) {
      func_0x00f78a20(0x3d2c700);
      bRam0000000003eb50e6 = 1;
    }
    if (lVar9 == 0) {
      auVar26 = func_0x00f78af4();
      puVar16 = auVar26._8_8_;
      puVar13 = auVar26._0_8_;
      uVar25 = puVar16[1];
      uVar8 = *puVar16;
      puVar13[2] = puVar16[2];
      puVar13[1] = uVar25;
      *puVar13 = uVar8;
      return puVar13;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar13 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c700 + 0x18) + 0xc0) + 0x38))();
    return puVar13;
  }
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar9 + 0xb8),6,0,0);
  lVar9 = *(long *)(lVar10 + 0x78);
  if (lVar9 == 0) goto code_r0x0158763c;
  uVar1 = *(uint *)(lVar10 + 0x98);
  uVar12 = (ulong)uVar1;
  lStack_e8 = *(long *)PTR_03a5d648;
  pppuStack_e0 = (undefined1 ***)unaff_x26;
  plStack_d8 = unaff_x25;
  pppuStack_d0 = (undefined1 ***)unaff_x24;
  plStack_c8 = plVar20;
  if ((bRam0000000003eb567f & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0,uVar12,0);
    func_0x00f78a20(0x3d2e030);
    func_0x00f78a20(0x3d2dfc8);
    func_0x00f78a20(0x3d3cce0);
    func_0x00f78a20(0x3d3cce8);
    func_0x00f78a20(0x3d3ccf0);
    bRam0000000003eb567f = 1;
  }
  lVar22 = *(long *)(lVar9 + 0x10);
  if (lVar22 == 0) {
code_r0x016364d0:
    func_0x00f78af4();
  }
  else {
    iVar6 = *(int *)(lVar22 + 0x18);
    if (0 < iVar6) {
      uVar19 = 0;
      do {
        if (*(uint *)(lVar22 + 0x18) <= uVar19) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar22 = *(long *)(lVar22 + 0x10) + (long)(int)uVar19 * 0x20;
        uVar2 = *(uint *)(lVar22 + 0x20);
        uStack_f8 = *(undefined8 *)(lVar22 + 0x2c);
        uStack_100 = *(undefined8 *)(lVar22 + 0x24);
        uStack_f0 = CONCAT44(uStack_f0._4_4_,*(undefined4 *)(lVar22 + 0x34));
        uStack_108._0_3_ = (undefined3)*(undefined4 *)(lVar22 + 0x39);
        uStack_108._3_1_ = (undefined1)*(undefined4 *)(lVar22 + 0x3c);
        uStack_104 = (undefined3)((uint)*(undefined4 *)(lVar22 + 0x3c) >> 8);
        if (((*(byte *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (uVar2 == uVar1) {
          if (*(long *)(lVar9 + 0x10) != 0) {
            uStack_184 = (undefined4)uStack_f8;
            uStack_180 = (undefined4)((ulong)uStack_f8 >> 0x20);
            uStack_18c = (undefined4)uStack_100;
            uStack_188 = (undefined4)((ulong)uStack_100 >> 0x20);
            uStack_17c = (undefined4)uStack_f0;
            uStack_178._0_5_ = CONCAT41(uStack_108,1);
            uStack_178 = CONCAT44(CONCAT31(uStack_104,uStack_108._3_1_),(undefined4)uStack_178);
            uStack_190 = uVar1;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(lVar9 + 0x10),uVar19,&uStack_190,uRam0000000003d3ccf0);
            if (*(long *)(lVar9 + 0x28) != 0) {
              lVar22 = *(long *)(lVar9 + 0x18);
              uVar7 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$get_Item*/ func_0x01e2ca80(*(long *)(lVar9 + 0x28),uVar12,uRam0000000003d2dfc8);
              lVar9 = 0;
              if (lVar22 != 0) {
                puVar13 = (undefined8 *)
                          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&uStack_190,lVar22,uVar7,uRam0000000003d2e030);
                if (*(long *)PTR_03a5d648 == lStack_e8) {
                  return puVar13;
                }
                goto code_r0x016365d0;
              }
            }
          }
          break;
        }
        if (iVar6 - 1U == uVar19) goto code_r0x016364d4;
        lVar22 = *(long *)(lVar9 + 0x10);
        uVar19 = uVar19 + 1;
      } while (lVar22 != 0);
      goto code_r0x016364d0;
    }
  }
code_r0x016364d4:
  lVar22 = lStack_c0;
  if (*(long *)PTR_03a5d648 != lStack_e8) {
code_r0x016365d0:
    iVar6 = ___stack_chk_fail();
    return (undefined8 *)(ulong)(iVar6 == extraout_w1);
  }
  if ((bRam0000000003eb568e & 1) == 0) {
    func_0x00f78a20(0x3d2dfa0);
    func_0x00f78a20(0x3d2dfb8);
    bRam0000000003eb568e = 1;
  }
  plStack_c8 = (long *)((ulong)plStack_c8 & 0xffffffff00000000);
  if (*(long *)(lVar9 + 0x28) != 0) {
    puVar13 = (undefined8 *)
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(lVar9 + 0x28),uVar12,&plStack_c8,uRam0000000003d2dfb8);
    if ((int)puVar13 == 0) {
      return puVar13;
    }
    if (*(long *)(lVar9 + 0x28) != 0) {
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(lVar9 + 0x28),uVar12,uRam0000000003d2dfa0);
      puVar13 = (undefined8 *)/*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(lVar9,(ulong)plStack_c8 & 0xffffffff);
      return puVar13;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar10 = auVar26._0_8_;
  uStack_100 = lVar22;
  uStack_f8 = 0x3eb5000;
  plStack_d8 = (long *)&Core_Assets_AssetManager__ReleaseAsset;
  uStack_f0 = uVar12;
  lStack_e8 = lVar9;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb5690 & 1) == 0) {
    func_0x00f78a20(0x3d433e8);
    func_0x00f78a20(0x3d43408);
    func_0x00f78a20(0x3d43420);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2fac8);
    func_0x00f78a20(0x3d2e008);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d35c80);
    bRam0000000003eb5690 = 1;
  }
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  lStack_198 = 0;
  if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x01635688;
  uVar12 = auVar26._8_8_ & 0xffffffff;
  puVar13 = (undefined8 *)
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar10 + 0x18),uVar12,&uStack_190,uRam0000000003d2e020);
  if ((int)puVar13 == 0) {
    return puVar13;
  }
  if (*(long *)(lVar10 + 0x30) == 0) goto code_r0x01635688;
  puVar13 = (undefined8 *)
            /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar10 + 0x30),CONCAT44(uStack_17c,uStack_180),&lStack_198,
                            uRam0000000003d2fec0);
  if ((int)puVar13 == 0) {
    return puVar13;
  }
  if ((char)uStack_178 == '\0') {
    if (uStack_178._1_1_ == '\0') {
      uVar8 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_170,uRam0000000003d2bfa0);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
        iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar13 = (undefined8 *)0x3d43408;
        goto joined_r0x01635680;
      }
      puVar13 = (undefined8 *)0x3d43408;
    }
    else {
      uVar8 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_150,uRam0000000003d2c050);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
        puVar13 = (undefined8 *)0x3d43420;
      }
      else {
        iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar13 = (undefined8 *)0x3d43420;
joined_r0x01635680:
        if (iVar6 == 0) {
          func_0x00f78ad0();
        }
      }
    }
  }
  else {
    uVar8 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_130,uRam0000000003d2be18);
    if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
      iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
      puVar13 = (undefined8 *)0x3d433e8;
      goto joined_r0x01635680;
    }
    puVar13 = (undefined8 *)0x3d433e8;
  }
  /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar8,*puVar13);
  if (*(long *)(lVar10 + 0x18) != 0) {
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar10 + 0x18),uVar12,uRam0000000003d2e008);
    if (((*(long *)(lVar10 + 0x20) != 0) &&
        (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar10 + 0x20),CONCAT44(uStack_184,uStack_188),
                         uRam0000000003d2fac8), lStack_198 != 0)) &&
       (*(long *)(lStack_198 + 0x20) != 0)) {
      puVar13 = (undefined8 *)
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_198 + 0x20),uVar12,uRam0000000003d35c80);
      return puVar13;
    }
  }
code_r0x01635688:
  func_0x00f78af4();
  if ((bRam0000000003eb567a & 1) == 0) {
    func_0x00f78a20(0x3d26978);
    func_0x00f78a20(0x3d2feb0);
    func_0x00f78a20(0x3d35c68);
    func_0x00f78a20(0x3d1cdf8);
    bRam0000000003eb567a = 1;
  }
  puVar13 = (undefined8 *)func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
  return puVar13;
}



// ============================================================
// RVA: 0x1587320 | Atlas.UI.Screens.FreeplayScreen.OnOptionSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

undefined8 *
Atlas_UI_Screens_FreeplayScreen__OnOptionSelected
          (long param_1,long param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int extraout_w1;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  long *plVar20;
  code *pcVar21;
  long *unaff_x24;
  long lVar22;
  long *unaff_x25;
  long *plVar23;
  undefined8 **ppuVar24;
  undefined8 unaff_x26;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  long lStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  long lStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 *puStack_68;
  
  plVar20 = (long *)0x3eb5000;
  if ((bRam0000000003eb50e4 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41050);
    func_0x00f78a20(0x3d41058);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb50e4 = 1;
  }
  if (param_2 == 0) goto LAB_015875b4;
  unaff_x25 = (long *)0x3d23000;
  plVar20 = *(long **)(param_1 + 0xa0);
  unaff_x24 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar20,unaff_x24,0);
  if (iVar6 == 0) {
LAB_01587550:
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41058);
    if (lVar10 == 0) {
      return (undefined8 *)0x0;
    }
    puVar13 = *(undefined8 **)(lVar10 + 0x10);
    if (puVar13 != (undefined8 *)0x0) {
      puStack_68 = puVar13;
      lVar10 = puVar13[0xd];
      if (lVar10 == 0) {
        ppuVar24 = &puStack_68;
        lVar22 = 1;
      }
      else {
        lVar22 = *(long *)(lVar10 + 0x18);
        if (lVar22 == 0) {
          return puVar13;
        }
        ppuVar24 = (undefined8 **)(lVar10 + 0x20);
      }
      lVar10 = 0;
      do {
        puVar16 = ppuVar24[lVar10];
        pcVar21 = (code *)puVar16[2];
        plVar20 = (long *)puVar16[4];
        lVar8 = puVar16[5];
        if (*(short *)(lVar8 + 0x48) == -1) {
          func_0x00f78ad8(lVar8);
        }
        iVar6 = func_0x00f78a4c(lVar8);
        bVar4 = *(char *)(lVar8 + 0x4a) == '\x02';
        if (iVar6 == 0) {
          if (bVar4) {
            if (plVar20 == (long *)0x0) {
code_r0x0154d66c:
              puVar16 = (undefined8 *)(*pcVar21)(param_3,param_4,lVar8);
            }
            else {
              if (((*(short *)(lVar8 + 0x48) == -1) || ((*(byte *)(*plVar20 + 0x115) & 1) != 0)) ||
                 (puVar13[3] == 0)) goto code_r0x0154d560;
              iVar6 = func_0x00f78a44(lVar8);
              iVar5 = func_0x00f78ec0(lVar8);
              if (iVar6 == 0) {
                uVar3 = *(ushort *)(lVar8 + 0x48);
                if (iVar5 == 0) {
                  lVar8 = *plVar20 + (ulong)uVar3 * 0x10;
                  puVar16 = (undefined8 *)
                            (**(code **)(lVar8 + 0x138))
                                      (plVar20,param_3,param_4,*(undefined8 *)(lVar8 + 0x140));
                  goto code_r0x0154d67c;
                }
                lVar8 = func_0x00f78a48(lVar8);
                lVar17 = *plVar20;
                uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
                if (uVar12 != 0) {
                  piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == lVar8) {
                      puVar16 = (undefined8 *)
                                (lVar17 + (long)(int)(*piVar18 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x0154d814;
                    }
                    piVar18 = piVar18 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar16 = (undefined8 *)func_0x00fac1f0(plVar20,lVar8,(ulong)uVar3);
code_r0x0154d814:
                pcVar21 = (code *)*puVar16;
                puVar16 = (undefined8 *)puVar16[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar9 = *(undefined8 *)
                           (*plVar20 + (ulong)*(ushort *)(lVar8 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar17 = *plVar20;
                  uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
                  if (uVar12 != 0) {
                    piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)(lVar8 + 0x18)) {
                        lVar17 = lVar17 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar8 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x0154d7ec;
                      }
                      piVar18 = piVar18 + 4;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  lVar17 = func_0x00fac1f0(plVar20);
code_r0x0154d7ec:
                  uVar9 = *(undefined8 *)(lVar17 + 8);
                }
                puVar16 = (undefined8 *)func_0x00f78acc(uVar9,lVar8);
                pcVar21 = (code *)*puVar16;
              }
              puVar16 = (undefined8 *)(*pcVar21)(plVar20,param_3,param_4,puVar16);
            }
          }
          else {
            if ((*(short *)(lVar8 + 0x48) == -1) || (puVar13[3] == 0)) goto code_r0x0154d66c;
            iVar6 = func_0x00f78a44(lVar8);
            iVar5 = func_0x00f78ec0(lVar8);
            if (iVar6 == 0) {
              uVar3 = *(ushort *)(lVar8 + 0x48);
              if (iVar5 == 0) {
                lVar8 = *param_3 + (ulong)uVar3 * 0x10;
                puVar16 = (undefined8 *)
                          (**(code **)(lVar8 + 0x138))
                                    (param_3,param_4,*(undefined8 *)(lVar8 + 0x140));
                goto code_r0x0154d67c;
              }
              lVar8 = func_0x00f78a48(lVar8);
              lVar17 = *param_3;
              uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar12 != 0) {
                piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == lVar8) {
                    puVar16 = (undefined8 *)
                              (lVar17 + (long)(int)(*piVar18 + (uint)uVar3) * 0x10 + 0x138);
                    goto code_r0x0154d7a8;
                  }
                  piVar18 = piVar18 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar16 = (undefined8 *)func_0x00fac1f0(param_3,lVar8,(ulong)uVar3);
code_r0x0154d7a8:
              pcVar21 = (code *)*puVar16;
              puVar16 = (undefined8 *)puVar16[1];
            }
            else {
              if (iVar5 == 0) {
                uVar9 = *(undefined8 *)(*param_3 + (ulong)*(ushort *)(lVar8 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar17 = *param_3;
                uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
                if (uVar12 != 0) {
                  piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)(lVar8 + 0x18)) {
                      lVar17 = lVar17 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar8 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0154d780;
                    }
                    piVar18 = piVar18 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                lVar17 = func_0x00fac1f0(param_3);
code_r0x0154d780:
                uVar9 = *(undefined8 *)(lVar17 + 8);
              }
              puVar16 = (undefined8 *)func_0x00f78acc(uVar9,lVar8);
              pcVar21 = (code *)*puVar16;
            }
            puVar16 = (undefined8 *)(*pcVar21)(param_3,param_4,puVar16);
          }
        }
        else {
          if (bVar4) goto code_r0x0154d66c;
code_r0x0154d560:
          puVar16 = (undefined8 *)(*pcVar21)(plVar20,param_3,param_4,lVar8);
        }
code_r0x0154d67c:
        lVar10 = lVar10 + 1;
        if (lVar10 == lVar22) {
          return puVar16;
        }
      } while( true );
    }
  }
  else {
    plVar15 = (long *)0x3d41050;
    plVar23 = (long *)0x3d41050;
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41050);
    unaff_x25 = plVar15;
    if (((lVar10 != 0) && (*(long *)(lVar10 + 0x80) != 0)) &&
       (lVar10 = *(long *)(*(long *)(lVar10 + 0x80) + 0x18), unaff_x25 = plVar23, lVar10 != 0)) {
      plVar20 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
      lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
      if (lVar10 != 0) {
        unaff_x24 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar10,0);
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = 0x3d24188;
        uVar25 = 0x3d24188;
        if (plVar20 == (long *)0x0) {
          plVar11 = (long *)0x0;
          if (unaff_x24 != (long *)0x0) goto code_r0x01587478;
LAB_01587490:
          plVar14 = (long *)0x0;
        }
        else {
          plVar11 = plVar20;
          if (*plVar20 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar11 = (long *)0x0;
          }
          if (unaff_x24 == (long *)0x0) goto LAB_01587490;
code_r0x01587478:
          plVar14 = unaff_x24;
          if (*unaff_x24 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar14 = (long *)0x0;
          }
        }
        uVar12 = /*Core.UI2.UIUtils$$RectContainsRectHorizontally*/ func_0x02f915a4(plVar11,plVar14,0);
        unaff_x25 = plVar15;
        unaff_x26 = uVar9;
        if ((uVar12 & 1) != 0) {
code_r0x01587540:
          uVar25 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
          *(undefined8 *)(param_1 + 0xa0) = uVar25;
          unaff_x26 = uVar9;
          goto LAB_01587550;
        }
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41050);
        unaff_x25 = plVar23;
        if (lVar10 != 0) {
          plVar20 = *(long **)(lVar10 + 0x80);
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41050);
          if ((lVar10 != 0) && (unaff_x26 = uVar25, *(long *)(lVar10 + 0x80) != 0)) {
            unaff_x24 = *(long **)(*(long *)(lVar10 + 0x80) + 0x18);
            lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
            if (lVar10 != 0) {
              unaff_x25 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar10,0);
              if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (unaff_x25 == (long *)0x0) {
                plVar15 = (long *)0x0;
              }
              else {
                plVar15 = unaff_x25;
                if (*unaff_x25 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                  plVar15 = (long *)0x0;
                }
              }
              /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(unaff_x24,plVar15,0,0);
              if (plVar20 != (long *)0x0) {
                /*Atlas.UI.PaginationDotController$$ScrollToTarget*/ func_0x014b600c(plVar20,0);
                goto code_r0x01587540;
              }
            }
          }
        }
      }
    }
  }
LAB_015875b4:
  lVar10 = func_0x00f78af4();
  puStack_68 = (undefined8 *)&Atlas_UI_Screens_FreeplayScreen__OnAfterExit;
  lStack_90 = param_2;
  lStack_88 = param_1;
  plStack_80 = param_3;
  uStack_78 = param_4;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50e5 & 1) == 0) {
    func_0x00f78a20(0x3d41060);
    bRam0000000003eb50e5 = 1;
  }
  lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d41060);
  if ((lVar22 == 0) || (*(long *)(lVar22 + 0xb8) == 0)) {
code_r0x0158763c:
    lVar22 = func_0x00f78af4();
    lStack_b8 = 0x3d41060;
    ppuStack_b0 = (undefined1 **)0x3eb5000;
    plStack_98 = (long *)&Atlas_UI_Screens_FreeplayScreen___ctor;
    uStack_c0 = param_2;
    plStack_a8 = (long *)lVar10;
    ppuStack_a0 = &puStack_70;
    if ((bRam0000000003eb50e6 & 1) == 0) {
      func_0x00f78a20(0x3d2c700);
      bRam0000000003eb50e6 = 1;
    }
    if (lVar22 == 0) {
      auVar26 = func_0x00f78af4();
      puVar16 = auVar26._8_8_;
      puVar13 = auVar26._0_8_;
      uVar25 = puVar16[1];
      uVar9 = *puVar16;
      puVar13[2] = puVar16[2];
      puVar13[1] = uVar25;
      *puVar13 = uVar9;
      return puVar13;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar13 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c700 + 0x18) + 0xc0) + 0x38))();
    return puVar13;
  }
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar22 + 0xb8),6,0,0);
  lVar22 = *(long *)(lVar10 + 0x78);
  if (lVar22 == 0) goto code_r0x0158763c;
  uVar1 = *(uint *)(lVar10 + 0x98);
  uVar12 = (ulong)uVar1;
  lStack_b8 = *(long *)PTR_03a5d648;
  ppuStack_b0 = (undefined1 **)unaff_x26;
  plStack_a8 = unaff_x25;
  ppuStack_a0 = (undefined1 **)unaff_x24;
  plStack_98 = plVar20;
  if ((bRam0000000003eb567f & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0,uVar12,0);
    func_0x00f78a20(0x3d2e030);
    func_0x00f78a20(0x3d2dfc8);
    func_0x00f78a20(0x3d3cce0);
    func_0x00f78a20(0x3d3cce8);
    func_0x00f78a20(0x3d3ccf0);
    bRam0000000003eb567f = 1;
  }
  lVar10 = *(long *)(lVar22 + 0x10);
  if (lVar10 == 0) {
code_r0x016364d0:
    func_0x00f78af4();
  }
  else {
    iVar6 = *(int *)(lVar10 + 0x18);
    if (0 < iVar6) {
      uVar19 = 0;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar19) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar10 = *(long *)(lVar10 + 0x10) + (long)(int)uVar19 * 0x20;
        uVar2 = *(uint *)(lVar10 + 0x20);
        uStack_c8 = *(undefined8 *)(lVar10 + 0x2c);
        lStack_d0 = *(undefined8 *)(lVar10 + 0x24);
        uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar10 + 0x34));
        uStack_d8._0_3_ = (undefined3)*(undefined4 *)(lVar10 + 0x39);
        uStack_d8._3_1_ = (undefined1)*(undefined4 *)(lVar10 + 0x3c);
        uStack_d4 = (undefined3)((uint)*(undefined4 *)(lVar10 + 0x3c) >> 8);
        if (((*(byte *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (uVar2 == uVar1) {
          if (*(long *)(lVar22 + 0x10) != 0) {
            uStack_154 = (undefined4)uStack_c8;
            uStack_150 = (undefined4)((ulong)uStack_c8 >> 0x20);
            uStack_15c = (undefined4)lStack_d0;
            uStack_158 = (undefined4)((ulong)lStack_d0 >> 0x20);
            uStack_14c = (undefined4)uStack_c0;
            uStack_148._0_5_ = CONCAT41(uStack_d8,1);
            uStack_148 = CONCAT44(CONCAT31(uStack_d4,uStack_d8._3_1_),(undefined4)uStack_148);
            uStack_160 = uVar1;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(lVar22 + 0x10),uVar19,&uStack_160,uRam0000000003d3ccf0);
            if (*(long *)(lVar22 + 0x28) != 0) {
              lVar10 = *(long *)(lVar22 + 0x18);
              uVar7 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$get_Item*/ func_0x01e2ca80(*(long *)(lVar22 + 0x28),uVar12,uRam0000000003d2dfc8);
              lVar22 = 0;
              if (lVar10 != 0) {
                puVar13 = (undefined8 *)
                          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&uStack_160,lVar10,uVar7,uRam0000000003d2e030);
                if (*(long *)PTR_03a5d648 == lStack_b8) {
                  return puVar13;
                }
                goto code_r0x016365d0;
              }
            }
          }
          break;
        }
        if (iVar6 - 1U == uVar19) goto code_r0x016364d4;
        lVar10 = *(long *)(lVar22 + 0x10);
        uVar19 = uVar19 + 1;
      } while (lVar10 != 0);
      goto code_r0x016364d0;
    }
  }
code_r0x016364d4:
  lVar10 = lStack_90;
  if (*(long *)PTR_03a5d648 != lStack_b8) {
code_r0x016365d0:
    iVar6 = ___stack_chk_fail();
    return (undefined8 *)(ulong)(iVar6 == extraout_w1);
  }
  if ((bRam0000000003eb568e & 1) == 0) {
    func_0x00f78a20(0x3d2dfa0);
    func_0x00f78a20(0x3d2dfb8);
    bRam0000000003eb568e = 1;
  }
  plStack_98 = (long *)((ulong)plStack_98 & 0xffffffff00000000);
  if (*(long *)(lVar22 + 0x28) != 0) {
    puVar13 = (undefined8 *)
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(lVar22 + 0x28),uVar12,&plStack_98,uRam0000000003d2dfb8);
    if ((int)puVar13 == 0) {
      return puVar13;
    }
    if (*(long *)(lVar22 + 0x28) != 0) {
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(lVar22 + 0x28),uVar12,uRam0000000003d2dfa0);
      puVar13 = (undefined8 *)/*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(lVar22,(ulong)plStack_98 & 0xffffffff);
      return puVar13;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar8 = auVar26._0_8_;
  lStack_d0 = lVar10;
  uStack_c8 = 0x3eb5000;
  plStack_a8 = (long *)&Core_Assets_AssetManager__ReleaseAsset;
  uStack_c0 = uVar12;
  lStack_b8 = lVar22;
  ppuStack_b0 = &puStack_70;
  if ((bRam0000000003eb5690 & 1) == 0) {
    func_0x00f78a20(0x3d433e8);
    func_0x00f78a20(0x3d43408);
    func_0x00f78a20(0x3d43420);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2fac8);
    func_0x00f78a20(0x3d2e008);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d35c80);
    bRam0000000003eb5690 = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  lStack_168 = 0;
  if (*(long *)(lVar8 + 0x18) == 0) goto code_r0x01635688;
  uVar12 = auVar26._8_8_ & 0xffffffff;
  puVar13 = (undefined8 *)
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar8 + 0x18),uVar12,&uStack_160,uRam0000000003d2e020);
  if ((int)puVar13 == 0) {
    return puVar13;
  }
  if (*(long *)(lVar8 + 0x30) == 0) goto code_r0x01635688;
  puVar13 = (undefined8 *)
            /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar8 + 0x30),CONCAT44(uStack_14c,uStack_150),&lStack_168,
                            uRam0000000003d2fec0);
  if ((int)puVar13 == 0) {
    return puVar13;
  }
  if ((char)uStack_148 == '\0') {
    if (uStack_148._1_1_ == '\0') {
      uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_140,uRam0000000003d2bfa0);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
        iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar13 = (undefined8 *)0x3d43408;
        goto joined_r0x01635680;
      }
      puVar13 = (undefined8 *)0x3d43408;
    }
    else {
      uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_120,uRam0000000003d2c050);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
        puVar13 = (undefined8 *)0x3d43420;
      }
      else {
        iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar13 = (undefined8 *)0x3d43420;
joined_r0x01635680:
        if (iVar6 == 0) {
          func_0x00f78ad0();
        }
      }
    }
  }
  else {
    uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_100,uRam0000000003d2be18);
    if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
      iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
      puVar13 = (undefined8 *)0x3d433e8;
      goto joined_r0x01635680;
    }
    puVar13 = (undefined8 *)0x3d433e8;
  }
  /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar9,*puVar13);
  if (*(long *)(lVar8 + 0x18) != 0) {
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar8 + 0x18),uVar12,uRam0000000003d2e008);
    if (((*(long *)(lVar8 + 0x20) != 0) &&
        (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar8 + 0x20),CONCAT44(uStack_154,uStack_158),
                         uRam0000000003d2fac8), lStack_168 != 0)) &&
       (*(long *)(lStack_168 + 0x20) != 0)) {
      puVar13 = (undefined8 *)
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_168 + 0x20),uVar12,uRam0000000003d35c80);
      return puVar13;
    }
  }
code_r0x01635688:
  func_0x00f78af4();
  if ((bRam0000000003eb567a & 1) == 0) {
    func_0x00f78a20(0x3d26978);
    func_0x00f78a20(0x3d2feb0);
    func_0x00f78a20(0x3d35c68);
    func_0x00f78a20(0x3d1cdf8);
    bRam0000000003eb567a = 1;
  }
  puVar13 = (undefined8 *)func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
  return puVar13;
}



// ============================================================
// RVA: 0x15875b8 | Atlas.UI.Screens.FreeplayScreen.OnAfterExit
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

undefined8 * Atlas_UI_Screens_FreeplayScreen__OnAfterExit(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int extraout_w1;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long lStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb50e5 & 1) == 0) {
    func_0x00f78a20(0x3d41060);
    bRam0000000003eb50e5 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41060);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0xb8) == 0)) {
LAB_0158763c:
    lVar5 = func_0x00f78af4();
    if ((bRam0000000003eb50e6 & 1) == 0) {
      func_0x00f78a20(0x3d2c700);
      bRam0000000003eb50e6 = 1;
    }
    if (lVar5 == 0) {
      auVar14 = func_0x00f78af4();
      puVar8 = auVar14._8_8_;
      puVar6 = auVar14._0_8_;
      uVar13 = puVar8[1];
      uVar7 = *puVar8;
      puVar6[2] = puVar8[2];
      puVar6[1] = uVar13;
      *puVar6 = uVar7;
      return puVar6;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c700 + 0x18) + 0xc0) + 0x38))();
    return puVar6;
  }
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar5 + 0xb8),6,0,0);
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 == 0) goto LAB_0158763c;
  iVar4 = *(int *)(param_1 + 0x98);
  lVar9 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb567f & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0,iVar4,0);
    func_0x00f78a20(0x3d2e030);
    func_0x00f78a20(0x3d2dfc8);
    func_0x00f78a20(0x3d3cce0);
    func_0x00f78a20(0x3d3cce8);
    func_0x00f78a20(0x3d3ccf0);
    bRam0000000003eb567f = 1;
  }
  lVar12 = *(long *)(lVar5 + 0x10);
  if (lVar12 == 0) {
code_r0x016364d0:
    func_0x00f78af4();
  }
  else {
    iVar1 = *(int *)(lVar12 + 0x18);
    if (0 < iVar1) {
      uVar11 = 0;
      do {
        if (*(uint *)(lVar12 + 0x18) <= uVar11) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar12 = *(long *)(lVar12 + 0x10) + (long)(int)uVar11 * 0x20;
        iVar2 = *(int *)(lVar12 + 0x20);
        uStack_68 = *(undefined8 *)(lVar12 + 0x2c);
        uStack_70 = *(undefined8 *)(lVar12 + 0x24);
        uVar3 = *(undefined4 *)(lVar12 + 0x34);
        uStack_78._0_3_ = (undefined3)*(undefined4 *)(lVar12 + 0x39);
        uStack_78._3_1_ = (undefined1)*(undefined4 *)(lVar12 + 0x3c);
        uStack_74 = (undefined3)((uint)*(undefined4 *)(lVar12 + 0x3c) >> 8);
        if (((*(byte *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (iVar2 == iVar4) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            uStack_f4 = (undefined4)uStack_68;
            uStack_f0 = (undefined4)((ulong)uStack_68 >> 0x20);
            uStack_fc = (undefined4)uStack_70;
            uStack_f8 = (undefined4)((ulong)uStack_70 >> 0x20);
            uStack_e8._0_5_ = CONCAT41(uStack_78,1);
            uStack_e8 = CONCAT44(CONCAT31(uStack_74,uStack_78._3_1_),(undefined4)uStack_e8);
            iStack_100 = iVar4;
            uStack_ec = uVar3;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(lVar5 + 0x10),uVar11,&iStack_100,uRam0000000003d3ccf0);
            if (*(long *)(lVar5 + 0x28) != 0) {
              lVar12 = *(long *)(lVar5 + 0x18);
              uVar3 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$get_Item*/ func_0x01e2ca80(*(long *)(lVar5 + 0x28),iVar4,uRam0000000003d2dfc8);
              lVar5 = 0;
              if (lVar12 != 0) {
                puVar6 = (undefined8 *)
                         /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&iStack_100,lVar12,uVar3,uRam0000000003d2e030);
                if (*(long *)PTR_03a5d648 == lVar9) {
                  return puVar6;
                }
                goto code_r0x016365d0;
              }
            }
          }
          break;
        }
        if (iVar1 - 1U == uVar11) goto code_r0x016364d4;
        lVar12 = *(long *)(lVar5 + 0x10);
        uVar11 = uVar11 + 1;
      } while (lVar12 != 0);
      goto code_r0x016364d0;
    }
  }
code_r0x016364d4:
  if (*(long *)PTR_03a5d648 != lVar9) {
code_r0x016365d0:
    iVar4 = ___stack_chk_fail();
    return (undefined8 *)(ulong)(iVar4 == extraout_w1);
  }
  if ((bRam0000000003eb568e & 1) == 0) {
    func_0x00f78a20(0x3d2dfa0);
    func_0x00f78a20(0x3d2dfb8);
    bRam0000000003eb568e = 1;
  }
  if (*(long *)(lVar5 + 0x28) != 0) {
    puVar6 = (undefined8 *)
             /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(lVar5 + 0x28),iVar4,&stack0xffffffffffffffc8,
                             uRam0000000003d2dfb8);
    if ((int)puVar6 == 0) {
      return puVar6;
    }
    if (*(long *)(lVar5 + 0x28) != 0) {
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(lVar5 + 0x28),iVar4,uRam0000000003d2dfa0);
      puVar6 = (undefined8 *)/*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(lVar5,0);
      return puVar6;
    }
  }
  auVar14 = func_0x00f78af4();
  lVar5 = auVar14._0_8_;
  uStack_68 = 0x3eb5000;
  if ((bRam0000000003eb5690 & 1) == 0) {
    func_0x00f78a20(0x3d433e8);
    func_0x00f78a20(0x3d43408);
    func_0x00f78a20(0x3d43420);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2fac8);
    func_0x00f78a20(0x3d2e008);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d35c80);
    bRam0000000003eb5690 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  iStack_100 = 0;
  uStack_fc = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  lStack_108 = 0;
  if (*(long *)(lVar5 + 0x18) == 0) goto code_r0x01635688;
  uVar10 = auVar14._8_8_ & 0xffffffff;
  puVar6 = (undefined8 *)
           /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar5 + 0x18),uVar10,&iStack_100,uRam0000000003d2e020);
  if ((int)puVar6 == 0) {
    return puVar6;
  }
  if (*(long *)(lVar5 + 0x30) == 0) goto code_r0x01635688;
  puVar6 = (undefined8 *)
           /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar5 + 0x30),CONCAT44(uStack_ec,uStack_f0),&lStack_108,
                           uRam0000000003d2fec0);
  if ((int)puVar6 == 0) {
    return puVar6;
  }
  if ((char)uStack_e8 == '\0') {
    if (uStack_e8._1_1_ == '\0') {
      uVar7 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_e0,uRam0000000003d2bfa0);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
        iVar4 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar6 = (undefined8 *)0x3d43408;
        goto joined_r0x01635680;
      }
      puVar6 = (undefined8 *)0x3d43408;
    }
    else {
      uVar7 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_c0,uRam0000000003d2c050);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
        puVar6 = (undefined8 *)0x3d43420;
      }
      else {
        iVar4 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar6 = (undefined8 *)0x3d43420;
joined_r0x01635680:
        if (iVar4 == 0) {
          func_0x00f78ad0();
        }
      }
    }
  }
  else {
    uVar7 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_a0,uRam0000000003d2be18);
    if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
      iVar4 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
      puVar6 = (undefined8 *)0x3d433e8;
      goto joined_r0x01635680;
    }
    puVar6 = (undefined8 *)0x3d433e8;
  }
  /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar7,*puVar6);
  if (*(long *)(lVar5 + 0x18) != 0) {
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar5 + 0x18),uVar10,uRam0000000003d2e008);
    if (((*(long *)(lVar5 + 0x20) != 0) &&
        (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar5 + 0x20),CONCAT44(uStack_f4,uStack_f8),uRam0000000003d2fac8)
        , lStack_108 != 0)) && (*(long *)(lStack_108 + 0x20) != 0)) {
      puVar6 = (undefined8 *)
               /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_108 + 0x20),uVar10,uRam0000000003d35c80);
      return puVar6;
    }
  }
code_r0x01635688:
  func_0x00f78af4();
  if ((bRam0000000003eb567a & 1) == 0) {
    func_0x00f78a20(0x3d26978);
    func_0x00f78a20(0x3d2feb0);
    func_0x00f78a20(0x3d35c68);
    func_0x00f78a20(0x3d1cdf8);
    bRam0000000003eb567a = 1;
  }
  puVar6 = (undefined8 *)func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
  return puVar6;
}



// ============================================================
// RVA: 0x1587640 | Atlas.UI.Screens.FreeplayScreen..ctor
// ============================================================

void Atlas_UI_Screens_FreeplayScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb50e6 & 1) == 0) {
    func_0x00f78a20(0x3d2c700);
    bRam0000000003eb50e6 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c700 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  return;
}



