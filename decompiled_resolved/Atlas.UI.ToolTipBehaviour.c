// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ToolTipBehaviour

// ============================================================
// RVA: 0x150957c | Atlas.UI.ToolTipBehaviour.Show
// ============================================================

/* WARNING: Possible PIC construction at 0x01509630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032d30dc) */
/* WARNING: Removing unreachable block (ram,0x032d30ec) */
/* WARNING: Removing unreachable block (ram,0x032d30f4) */
/* WARNING: Removing unreachable block (ram,0x032d30fc) */
/* WARNING: Removing unreachable block (ram,0x032d3108) */
/* WARNING: Removing unreachable block (ram,0x032d3110) */
/* WARNING: Removing unreachable block (ram,0x032d3118) */
/* WARNING: Removing unreachable block (ram,0x032d3124) */
/* WARNING: Removing unreachable block (ram,0x032d3168) */
/* WARNING: Removing unreachable block (ram,0x032d3188) */
/* WARNING: Removing unreachable block (ram,0x032d3190) */
/* WARNING: Removing unreachable block (ram,0x032d3198) */
/* WARNING: Removing unreachable block (ram,0x032d31a4) */
/* WARNING: Removing unreachable block (ram,0x032d31ac) */
/* WARNING: Removing unreachable block (ram,0x032d31b4) */
/* WARNING: Removing unreachable block (ram,0x032d31c0) */
/* WARNING: Removing unreachable block (ram,0x032d3204) */
/* WARNING: Removing unreachable block (ram,0x032d2edc) */
/* WARNING: Removing unreachable block (ram,0x032d2eec) */
/* WARNING: Removing unreachable block (ram,0x026f609c) */
/* WARNING: Removing unreachable block (ram,0x026f60c4) */
/* WARNING: Removing unreachable block (ram,0x026f60e4) */
/* WARNING: Removing unreachable block (ram,0x026f60ec) */
/* WARNING: Removing unreachable block (ram,0x026f6108) */
/* WARNING: Removing unreachable block (ram,0x026f6110) */
/* WARNING: Removing unreachable block (ram,0x026f612c) */
/* WARNING: Removing unreachable block (ram,0x026f6140) */
/* WARNING: Removing unreachable block (ram,0x026f6148) */
/* WARNING: Removing unreachable block (ram,0x026f614c) */
/* WARNING: Removing unreachable block (ram,0x026f6160) */
/* WARNING: Removing unreachable block (ram,0x026f6168) */
/* WARNING: Removing unreachable block (ram,0x026f6180) */
/* WARNING: Removing unreachable block (ram,0x026f61ac) */
/* WARNING: Removing unreachable block (ram,0x026f61d4) */
/* WARNING: Removing unreachable block (ram,0x026f61fc) */
/* WARNING: Removing unreachable block (ram,0x026f6204) */
/* WARNING: Removing unreachable block (ram,0x026f6220) */
/* WARNING: Removing unreachable block (ram,0x026f6208) */
/* WARNING: Removing unreachable block (ram,0x026f6224) */
/* WARNING: Removing unreachable block (ram,0x026f623c) */
/* WARNING: Removing unreachable block (ram,0x026f621c) */
/* WARNING: Removing unreachable block (ram,0x026f6250) */
/* WARNING: Removing unreachable block (ram,0x026f6280) */
/* WARNING: Removing unreachable block (ram,0x026f62a8) */
/* WARNING: Removing unreachable block (ram,0x026f62b0) */
/* WARNING: Removing unreachable block (ram,0x026f62cc) */
/* WARNING: Removing unreachable block (ram,0x026f62b4) */
/* WARNING: Removing unreachable block (ram,0x026f62d0) */
/* WARNING: Removing unreachable block (ram,0x026f62e8) */
/* WARNING: Removing unreachable block (ram,0x026f62c8) */
/* WARNING: Removing unreachable block (ram,0x026f62fc) */
/* WARNING: Removing unreachable block (ram,0x026f632c) */
/* WARNING: Removing unreachable block (ram,0x026f6354) */
/* WARNING: Removing unreachable block (ram,0x026f635c) */
/* WARNING: Removing unreachable block (ram,0x026f6378) */
/* WARNING: Removing unreachable block (ram,0x026f6360) */
/* WARNING: Removing unreachable block (ram,0x026f637c) */
/* WARNING: Removing unreachable block (ram,0x026f6394) */
/* WARNING: Removing unreachable block (ram,0x026f6374) */
/* WARNING: Removing unreachable block (ram,0x026f63a8) */
/* WARNING: Removing unreachable block (ram,0x026f63d8) */
/* WARNING: Removing unreachable block (ram,0x026f6400) */
/* WARNING: Removing unreachable block (ram,0x026f6408) */
/* WARNING: Removing unreachable block (ram,0x026f6424) */
/* WARNING: Removing unreachable block (ram,0x026f640c) */
/* WARNING: Removing unreachable block (ram,0x026f6428) */
/* WARNING: Removing unreachable block (ram,0x026f6440) */
/* WARNING: Removing unreachable block (ram,0x026f6420) */
/* WARNING: Removing unreachable block (ram,0x026f6454) */
/* WARNING: Removing unreachable block (ram,0x026f6500) */
/* WARNING: Removing unreachable block (ram,0x026f6524) */
/* WARNING: Removing unreachable block (ram,0x026f654c) */
/* WARNING: Removing unreachable block (ram,0x026f6554) */
/* WARNING: Removing unreachable block (ram,0x026f6560) */
/* WARNING: Removing unreachable block (ram,0x026f6568) */
/* WARNING: Removing unreachable block (ram,0x026f6594) */
/* WARNING: Removing unreachable block (ram,0x026f6574) */
/* WARNING: Removing unreachable block (ram,0x026f6580) */
/* WARNING: Removing unreachable block (ram,0x026f65a0) */
/* WARNING: Removing unreachable block (ram,0x026f65b4) */
/* WARNING: Removing unreachable block (ram,0x026f6698) */
/* WARNING: Removing unreachable block (ram,0x026f672c) */
/* WARNING: Removing unreachable block (ram,0x026f66b0) */
/* WARNING: Removing unreachable block (ram,0x026f66c4) */
/* WARNING: Removing unreachable block (ram,0x026f66cc) */
/* WARNING: Removing unreachable block (ram,0x026f66d8) */
/* WARNING: Removing unreachable block (ram,0x026f66e0) */
/* WARNING: Removing unreachable block (ram,0x026f670c) */
/* WARNING: Removing unreachable block (ram,0x026f66ec) */
/* WARNING: Removing unreachable block (ram,0x026f66f8) */
/* WARNING: Removing unreachable block (ram,0x026f6718) */
/* WARNING: Removing unreachable block (ram,0x026f65e0) */
/* WARNING: Removing unreachable block (ram,0x026f65f4) */
/* WARNING: Removing unreachable block (ram,0x026f65fc) */
/* WARNING: Removing unreachable block (ram,0x026f6608) */
/* WARNING: Removing unreachable block (ram,0x026f6610) */
/* WARNING: Removing unreachable block (ram,0x026f663c) */
/* WARNING: Removing unreachable block (ram,0x026f661c) */
/* WARNING: Removing unreachable block (ram,0x026f6628) */
/* WARNING: Removing unreachable block (ram,0x026f664c) */
/* WARNING: Removing unreachable block (ram,0x026f6478) */
/* WARNING: Removing unreachable block (ram,0x026f6490) */
/* WARNING: Removing unreachable block (ram,0x026f6498) */
/* WARNING: Removing unreachable block (ram,0x026f64a4) */
/* WARNING: Removing unreachable block (ram,0x026f64ac) */
/* WARNING: Removing unreachable block (ram,0x026f64d8) */
/* WARNING: Removing unreachable block (ram,0x026f64b8) */
/* WARNING: Removing unreachable block (ram,0x026f64c4) */
/* WARNING: Removing unreachable block (ram,0x026f64e4) */
/* WARNING: Removing unreachable block (ram,0x026f6188) */
/* WARNING: Removing unreachable block (ram,0x01509634) */
/* WARNING: Removing unreachable block (ram,0x01509680) */
/* WARNING: Removing unreachable block (ram,0x01509684) */
/* WARNING: Removing unreachable block (ram,0x01509648) */
/* WARNING: Removing unreachable block (ram,0x0150964c) */
/* WARNING: Removing unreachable block (ram,0x01509654) */
/* WARNING: Removing unreachable block (ram,0x01509664) */
/* WARNING: Removing unreachable block (ram,0x015096a0) */
/* WARNING: Removing unreachable block (ram,0x015096a8) */
/* WARNING: Removing unreachable block (ram,0x015096c4) */
/* WARNING: Removing unreachable block (ram,0x015096d4) */
/* WARNING: Removing unreachable block (ram,0x015096dc) */
/* WARNING: Removing unreachable block (ram,0x015096e0) */
/* WARNING: Removing unreachable block (ram,0x015096f4) */
/* WARNING: Removing unreachable block (ram,0x01509704) */
/* WARNING: Removing unreachable block (ram,0x0150970c) */
/* WARNING: Removing unreachable block (ram,0x01509710) */
/* WARNING: Removing unreachable block (ram,0x01509778) */
/* WARNING: Removing unreachable block (ram,0x01509788) */
/* WARNING: Removing unreachable block (ram,0x01509790) */
/* WARNING: Removing unreachable block (ram,0x01509794) */
/* WARNING: Removing unreachable block (ram,0x015097a8) */
/* WARNING: Removing unreachable block (ram,0x015097b0) */
/* WARNING: Removing unreachable block (ram,0x01509724) */
/* WARNING: Removing unreachable block (ram,0x0150972c) */
/* WARNING: Removing unreachable block (ram,0x01509738) */
/* WARNING: Removing unreachable block (ram,0x0150974c) */
/* WARNING: Removing unreachable block (ram,0x01509760) */
/* WARNING: Removing unreachable block (ram,0x01509768) */
/* WARNING: Removing unreachable block (ram,0x015097bc) */
/* WARNING: Removing unreachable block (ram,0x015097e0) */
/* WARNING: Removing unreachable block (ram,0x01509808) */
/* WARNING: Removing unreachable block (ram,0x015097e8) */
/* WARNING: Removing unreachable block (ram,0x01509810) */
/* WARNING: Removing unreachable block (ram,0x015097ec) */
/* WARNING: Removing unreachable block (ram,0x01509800) */
/* WARNING: Removing unreachable block (ram,0x01509814) */
/* WARNING: Removing unreachable block (ram,0x032d2e20) */
/* WARNING: Removing unreachable block (ram,0x032d2e48) */
/* WARNING: Removing unreachable block (ram,0x032d2e74) */
/* WARNING: Removing unreachable block (ram,0x032d2e80) */
/* WARNING: Removing unreachable block (ram,0x032d2e88) */
/* WARNING: Removing unreachable block (ram,0x032d2e90) */
/* WARNING: Removing unreachable block (ram,0x032d2e9c) */
/* WARNING: Removing unreachable block (ram,0x032d2eb0) */
/* WARNING: Removing unreachable block (ram,0x032d2f0c) */
/* WARNING: Removing unreachable block (ram,0x032d2ebc) */
/* WARNING: Removing unreachable block (ram,0x032d2f10) */
/* WARNING: Removing unreachable block (ram,0x032d2f38) */
/* WARNING: Removing unreachable block (ram,0x032d2f94) */
/* WARNING: Removing unreachable block (ram,0x032d3224) */
/* WARNING: Removing unreachable block (ram,0x032d2f9c) */
/* WARNING: Removing unreachable block (ram,0x032d2fb4) */
/* WARNING: Removing unreachable block (ram,0x032d2fbc) */
/* WARNING: Removing unreachable block (ram,0x032d2fc4) */
/* WARNING: Removing unreachable block (ram,0x032d2fd0) */
/* WARNING: Removing unreachable block (ram,0x032d2fd8) */
/* WARNING: Removing unreachable block (ram,0x032d2fe0) */
/* WARNING: Removing unreachable block (ram,0x032d2fec) */
/* WARNING: Removing unreachable block (ram,0x032d3030) */
/* WARNING: Removing unreachable block (ram,0x032d3050) */
/* WARNING: Removing unreachable block (ram,0x032d3058) */
/* WARNING: Removing unreachable block (ram,0x032d3060) */
/* WARNING: Removing unreachable block (ram,0x032d306c) */
/* WARNING: Removing unreachable block (ram,0x032d3074) */
/* WARNING: Removing unreachable block (ram,0x032d307c) */
/* WARNING: Removing unreachable block (ram,0x032d3088) */
/* WARNING: Removing unreachable block (ram,0x032d30cc) */
/* WARNING: Removing unreachable block (ram,0x032d397c) */
/* WARNING: Removing unreachable block (ram,0x032d3944) */
/* WARNING: Removing unreachable block (ram,0x032d396c) */
/* WARNING: Removing unreachable block (ram,0x032d3958) */
/* WARNING: Removing unreachable block (ram,0x032d3964) */
/* WARNING: Removing unreachable block (ram,0x032d3970) */
/* WARNING: Removing unreachable block (ram,0x032d357c) */
/* WARNING: Removing unreachable block (ram,0x032d35b8) */
/* WARNING: Removing unreachable block (ram,0x032d365c) */
/* WARNING: Removing unreachable block (ram,0x032d3668) */
/* WARNING: Removing unreachable block (ram,0x032d3670) */
/* WARNING: Removing unreachable block (ram,0x032d3674) */
/* WARNING: Removing unreachable block (ram,0x032d36a4) */
/* WARNING: Removing unreachable block (ram,0x032d36b8) */
/* WARNING: Removing unreachable block (ram,0x032d36c0) */
/* WARNING: Removing unreachable block (ram,0x032d36c4) */
/* WARNING: Removing unreachable block (ram,0x032d36f8) */
/* WARNING: Removing unreachable block (ram,0x032d3700) */
/* WARNING: Removing unreachable block (ram,0x032d3704) */
/* WARNING: Removing unreachable block (ram,0x032d3714) */
/* WARNING: Removing unreachable block (ram,0x032d373c) */
/* WARNING: Removing unreachable block (ram,0x032d3744) */
/* WARNING: Removing unreachable block (ram,0x032d3748) */
/* WARNING: Removing unreachable block (ram,0x032d3754) */
/* WARNING: Removing unreachable block (ram,0x032d3760) */
/* WARNING: Removing unreachable block (ram,0x032d3774) */
/* WARNING: Removing unreachable block (ram,0x032d3780) */
/* WARNING: Removing unreachable block (ram,0x032d3788) */
/* WARNING: Removing unreachable block (ram,0x032d379c) */
/* WARNING: Removing unreachable block (ram,0x032d37a8) */
/* WARNING: Removing unreachable block (ram,0x032d37b0) */
/* WARNING: Removing unreachable block (ram,0x032d37b4) */
/* WARNING: Removing unreachable block (ram,0x032d37c8) */
/* WARNING: Removing unreachable block (ram,0x032d37dc) */
/* WARNING: Removing unreachable block (ram,0x032d37e4) */
/* WARNING: Removing unreachable block (ram,0x032d37e8) */
/* WARNING: Removing unreachable block (ram,0x032d37f4) */
/* WARNING: Removing unreachable block (ram,0x032d37fc) */
/* WARNING: Removing unreachable block (ram,0x032d3810) */
/* WARNING: Removing unreachable block (ram,0x032d381c) */
/* WARNING: Removing unreachable block (ram,0x032d3824) */
/* WARNING: Removing unreachable block (ram,0x032d3838) */
/* WARNING: Removing unreachable block (ram,0x032d3840) */
/* WARNING: Removing unreachable block (ram,0x032d3844) */
/* WARNING: Removing unreachable block (ram,0x032d3854) */
/* WARNING: Removing unreachable block (ram,0x032d3858) */
/* WARNING: Removing unreachable block (ram,0x032d3878) */
/* WARNING: Removing unreachable block (ram,0x032d38d0) */
/* WARNING: Removing unreachable block (ram,0x032d38e0) */
/* WARNING: Removing unreachable block (ram,0x032d38e8) */
/* WARNING: Removing unreachable block (ram,0x032d38ec) */
/* WARNING: Removing unreachable block (ram,0x032d3900) */
/* WARNING: Removing unreachable block (ram,0x032d390c) */
/* WARNING: Removing unreachable block (ram,0x032d3914) */
/* WARNING: Removing unreachable block (ram,0x032d388c) */
/* WARNING: Removing unreachable block (ram,0x032d3898) */
/* WARNING: Removing unreachable block (ram,0x032d38a0) */
/* WARNING: Removing unreachable block (ram,0x032d3918) */
/* WARNING: Removing unreachable block (ram,0x032d38a4) */
/* WARNING: Removing unreachable block (ram,0x032d38b8) */
/* WARNING: Removing unreachable block (ram,0x032d38cc) */
/* WARNING: Removing unreachable block (ram,0x032d391c) */
/* WARNING: Removing unreachable block (ram,0x032d3938) */
/* WARNING: Removing unreachable block (ram,0x032d3688) */
/* WARNING: Removing unreachable block (ram,0x032d3994) */
/* WARNING: Removing unreachable block (ram,0x032d39a0) */
/* WARNING: Removing unreachable block (ram,0x032d39a8) */
/* WARNING: Removing unreachable block (ram,0x032d39ac) */
/* WARNING: Removing unreachable block (ram,0x0233e08c) */
/* WARNING: Removing unreachable block (ram,0x0233e0b8) */
/* WARNING: Removing unreachable block (ram,0x0233e0c0) */
/* WARNING: Removing unreachable block (ram,0x0233e0d0) */
/* WARNING: Removing unreachable block (ram,0x0233e0dc) */
/* WARNING: Removing unreachable block (ram,0x0233e0e0) */
/* WARNING: Removing unreachable block (ram,0x0233e0ec) */
/* WARNING: Removing unreachable block (ram,0x0233e0f4) */
/* WARNING: Removing unreachable block (ram,0x0233e104) */
/* WARNING: Removing unreachable block (ram,0x0233e10c) */
/* WARNING: Removing unreachable block (ram,0x0233e114) */
/* WARNING: Removing unreachable block (ram,0x0233e120) */
/* WARNING: Removing unreachable block (ram,0x0233e128) */
/* WARNING: Removing unreachable block (ram,0x0233e138) */
/* WARNING: Removing unreachable block (ram,0x0233e140) */
/* WARNING: Removing unreachable block (ram,0x0233e148) */
/* WARNING: Removing unreachable block (ram,0x0233e154) */
/* WARNING: Removing unreachable block (ram,0x0233e15c) */
/* WARNING: Removing unreachable block (ram,0x0233e16c) */
/* WARNING: Removing unreachable block (ram,0x0233e174) */
/* WARNING: Removing unreachable block (ram,0x0233e1e8) */
/* WARNING: Removing unreachable block (ram,0x0233e210) */
/* WARNING: Removing unreachable block (ram,0x0233e218) */
/* WARNING: Removing unreachable block (ram,0x0233e228) */
/* WARNING: Removing unreachable block (ram,0x0233e230) */
/* WARNING: Removing unreachable block (ram,0x0233e24c) */
/* WARNING: Removing unreachable block (ram,0x0233e25c) */
/* WARNING: Removing unreachable block (ram,0x0233e270) */
/* WARNING: Removing unreachable block (ram,0x0233e280) */
/* WARNING: Removing unreachable block (ram,0x0233e28c) */
/* WARNING: Removing unreachable block (ram,0x0233e294) */
/* WARNING: Removing unreachable block (ram,0x0233e2b8) */
/* WARNING: Removing unreachable block (ram,0x0233e2c0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d8) */
/* WARNING: Removing unreachable block (ram,0x0233e2f4) */
/* WARNING: Removing unreachable block (ram,0x0233e304) */
/* WARNING: Removing unreachable block (ram,0x0233e314) */
/* WARNING: Removing unreachable block (ram,0x0233e31c) */
/* WARNING: Removing unreachable block (ram,0x0233e340) */
/* WARNING: Removing unreachable block (ram,0x0233e348) */
/* WARNING: Removing unreachable block (ram,0x0233e358) */
/* WARNING: Removing unreachable block (ram,0x0233e360) */
/* WARNING: Removing unreachable block (ram,0x0233e180) */
/* WARNING: Removing unreachable block (ram,0x0233e190) */
/* WARNING: Removing unreachable block (ram,0x0233e1a0) */
/* WARNING: Removing unreachable block (ram,0x0233e1b0) */
/* WARNING: Removing unreachable block (ram,0x0233e1c0) */

long Atlas_UI_ToolTipBehaviour__Show(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4d3b & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d29328);
    bRam0000000003eb4d3b = 1;
  }
  /*ModalBehaviour$$Show*/ func_0x01493fbc(param_1,param_2,param_3,0);
  if (param_2 == (long *)0x0) {
LAB_01509828:
    puVar3 = &Atlas_UI_ToolTipBehaviour__SetAnchor;
    auVar6 = func_0x00f78af4();
    uVar2 = auVar6._8_8_;
    lVar1 = auVar6._0_8_;
  }
  else {
    if ((*(byte *)(*param_2 + 300) < *(byte *)(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ lRam0000000003d29328 + 300)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ lRam0000000003d29328 + 300) * 8 + -8)
        != /*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ lRam0000000003d29328)) goto LAB_01509828;
    uVar2 = (ulong)*(uint *)(param_2 + 7);
    puVar3 = (undefined *)0x1509634;
    lVar1 = param_1;
  }
  plStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar3;
  switch(uVar2 & 0xffffffff) {
  case 0:
    if (*(long *)(lVar1 + 0x60) == 0) {
code_r0x01509ac4:
      lVar1 = func_0x00f78af4();
      uStack_58 = &Atlas_UI_ToolTipBehaviour___ctor;
      if ((bRam0000000003eb4d3c & 1) == 0) {
        func_0x00f78a20(0x3d234d0);
        bRam0000000003eb4d3c = 1;
      }
      if (((*(ushort *)(/*ModalBehaviour_TypeInfo*/ lRam0000000003d234d0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*ModalBehaviour_TypeInfo*/ lRam0000000003d234d0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return lVar1;
    }
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0,0x3f800000,*(long *)(lVar1 + 0x60),0);
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0,0x3f800000,*(long *)(lVar1 + 0x60),0);
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar4 = 0;
    break;
  case 1:
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f000000,0x3f800000,*(long *)(lVar1 + 0x60),0);
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f000000,0x3f800000,*(long *)(lVar1 + 0x60),0);
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar4 = 0x3f000000;
    break;
  case 2:
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f800000,0x3f800000,*(long *)(lVar1 + 0x60),0);
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f800000,0x3f800000,*(long *)(lVar1 + 0x60),0);
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar4 = 0x3f800000;
    break;
  case 3:
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0,0x3f000000,*(long *)(lVar1 + 0x60),0);
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0,0x3f000000,*(long *)(lVar1 + 0x60),0);
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar4 = 0;
    goto code_r0x015099ec;
  case 4:
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f000000,0x3f000000,*(long *)(lVar1 + 0x60),0);
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f000000,0x3f000000,*(long *)(lVar1 + 0x60),0);
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar4 = 0x3f000000;
    goto code_r0x015099ec;
  case 5:
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f800000,0x3f000000,*(long *)(lVar1 + 0x60),0);
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f800000,0x3f000000,*(long *)(lVar1 + 0x60),0);
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar4 = 0x3f800000;
code_r0x015099ec:
    uVar5 = 0x3f000000;
    goto code_r0x01509ab4;
  case 6:
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0,0,*(long *)(lVar1 + 0x60),0);
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0,0,*(long *)(lVar1 + 0x60),0);
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar4 = 0;
    goto code_r0x01509ab0;
  case 7:
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f000000,0,*(long *)(lVar1 + 0x60),0);
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f000000,0,*(long *)(lVar1 + 0x60),0);
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar4 = 0x3f000000;
    goto code_r0x01509ab0;
  case 8:
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f800000,0,*(long *)(lVar1 + 0x60),0);
    if (*(long *)(lVar1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f800000,0,*(long *)(lVar1 + 0x60),0);
    lVar1 = *(long *)(lVar1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar4 = 0x3f800000;
code_r0x01509ab0:
    uVar5 = 0;
    goto code_r0x01509ab4;
  default:
    return lVar1;
  }
  uVar5 = 0x3f800000;
code_r0x01509ab4:
  uStack_58 = (undefined *)CONCAT44(uVar5,uVar4);
  if (pcRam0000000003ec0800 == (code *)0x0) {
    pcRam0000000003ec0800 =
         (code *)func_0x00f789d4("UnityEngine.RectTransform::set_pivot_Injected(UnityEngine.Vector2&)"
                                 ,0);
  }
  lVar1 = (*pcRam0000000003ec0800)(lVar1,&uStack_58);
  return lVar1;
}



// ============================================================
// RVA: 0x150982c | Atlas.UI.ToolTipBehaviour.SetAnchor
// ============================================================

long Atlas_UI_ToolTipBehaviour__SetAnchor(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uStack_28;
  
  switch(param_2) {
  case 0:
    if (*(long *)(param_1 + 0x60) == 0) {
code_r0x01509ac4:
      lVar1 = func_0x00f78af4();
      uStack_28 = &Atlas_UI_ToolTipBehaviour___ctor;
      if ((bRam0000000003eb4d3c & 1) == 0) {
        func_0x00f78a20(0x3d234d0);
        bRam0000000003eb4d3c = 1;
      }
      if (((*(ushort *)(/*ModalBehaviour_TypeInfo*/ lRam0000000003d234d0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*ModalBehaviour_TypeInfo*/ lRam0000000003d234d0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return lVar1;
    }
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0,0x3f800000,*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0,0x3f800000,*(long *)(param_1 + 0x60),0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar2 = 0;
    break;
  case 1:
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f000000,0x3f800000,*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f000000,0x3f800000,*(long *)(param_1 + 0x60),0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar2 = 0x3f000000;
    break;
  case 2:
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f800000,0x3f800000,*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f800000,0x3f800000,*(long *)(param_1 + 0x60),0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar2 = 0x3f800000;
    break;
  case 3:
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0,0x3f000000,*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0,0x3f000000,*(long *)(param_1 + 0x60),0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar2 = 0;
    goto code_r0x015099ec;
  case 4:
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f000000,0x3f000000,*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f000000,0x3f000000,*(long *)(param_1 + 0x60),0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar2 = 0x3f000000;
    goto code_r0x015099ec;
  case 5:
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f800000,0x3f000000,*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f800000,0x3f000000,*(long *)(param_1 + 0x60),0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar2 = 0x3f800000;
code_r0x015099ec:
    uVar3 = 0x3f000000;
    goto code_r0x01509ab4;
  case 6:
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0,0,*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0,0,*(long *)(param_1 + 0x60),0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar2 = 0;
    goto code_r0x01509ab0;
  case 7:
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f000000,0,*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f000000,0,*(long *)(param_1 + 0x60),0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar2 = 0x3f000000;
    goto code_r0x01509ab0;
  case 8:
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(0x3f800000,0,*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x60) == 0) goto code_r0x01509ac4;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(0x3f800000,0,*(long *)(param_1 + 0x60),0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) goto code_r0x01509ac4;
    uVar2 = 0x3f800000;
code_r0x01509ab0:
    uVar3 = 0;
    goto code_r0x01509ab4;
  default:
    return param_1;
  }
  uVar3 = 0x3f800000;
code_r0x01509ab4:
  uStack_28 = (undefined *)CONCAT44(uVar3,uVar2);
  if (pcRam0000000003ec0800 == (code *)0x0) {
    pcRam0000000003ec0800 =
         (code *)func_0x00f789d4("UnityEngine.RectTransform::set_pivot_Injected(UnityEngine.Vector2&)"
                                 ,0);
  }
  lVar1 = (*pcRam0000000003ec0800)(lVar1,&uStack_28);
  return lVar1;
}



// ============================================================
// RVA: 0x1509ac8 | Atlas.UI.ToolTipBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_ToolTipBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb4d3c & 1) == 0) {
    func_0x00f78a20(0x3d234d0);
    bRam0000000003eb4d3c = 1;
  }
  if (((*(ushort *)(/*ModalBehaviour_TypeInfo*/ lRam0000000003d234d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*ModalBehaviour_TypeInfo*/ lRam0000000003d234d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
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



