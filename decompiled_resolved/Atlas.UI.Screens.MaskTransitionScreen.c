// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.MaskTransitionScreen

// ============================================================
// RVA: 0x148df54 | Atlas.UI.Screens.MaskTransitionScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e9a8) */
/* WARNING: Removing unreachable block (ram,0x0148e9b0) */
/* WARNING: Removing unreachable block (ram,0x0148e9e8) */
/* WARNING: Removing unreachable block (ram,0x0148e9f0) */
/* WARNING: Removing unreachable block (ram,0x0148e9f4) */
/* WARNING: Removing unreachable block (ram,0x0148e9f8) */
/* WARNING: Removing unreachable block (ram,0x0148ea30) */
/* WARNING: Removing unreachable block (ram,0x0148e8f8) */
/* WARNING: Removing unreachable block (ram,0x0148e908) */
/* WARNING: Removing unreachable block (ram,0x0148e924) */
/* WARNING: Removing unreachable block (ram,0x0148e930) */
/* WARNING: Removing unreachable block (ram,0x0148e938) */
/* WARNING: Removing unreachable block (ram,0x0148e93c) */
/* WARNING: Removing unreachable block (ram,0x0148e98c) */
/* WARNING: Removing unreachable block (ram,0x0148e950) */
/* WARNING: Removing unreachable block (ram,0x0148e958) */
/* WARNING: Removing unreachable block (ram,0x0148ea48) */
/* WARNING: Removing unreachable block (ram,0x0148ea58) */
/* WARNING: Removing unreachable block (ram,0x0148ea68) */
/* WARNING: Removing unreachable block (ram,0x0148e970) */
/* WARNING: Removing unreachable block (ram,0x0148e974) */
/* WARNING: Removing unreachable block (ram,0x0148e97c) */
/* WARNING: Removing unreachable block (ram,0x0148e998) */
/* WARNING: Removing unreachable block (ram,0x0148e63c) */
/* WARNING: Removing unreachable block (ram,0x0148e644) */
/* WARNING: Removing unreachable block (ram,0x0148e650) */
/* WARNING: Removing unreachable block (ram,0x0148e65c) */
/* WARNING: Removing unreachable block (ram,0x0148e794) */
/* WARNING: Removing unreachable block (ram,0x0148e7d8) */
/* WARNING: Removing unreachable block (ram,0x0148e7f8) */
/* WARNING: Removing unreachable block (ram,0x0148e7fc) */
/* WARNING: Removing unreachable block (ram,0x0148e808) */
/* WARNING: Removing unreachable block (ram,0x0148ea6c) */
/* WARNING: Removing unreachable block (ram,0x0148ea74) */
/* WARNING: Removing unreachable block (ram,0x0148e818) */
/* WARNING: Removing unreachable block (ram,0x0148e82c) */
/* WARNING: Removing unreachable block (ram,0x0148e838) */
/* WARNING: Removing unreachable block (ram,0x0148e848) */
/* WARNING: Removing unreachable block (ram,0x0148e864) */
/* WARNING: Removing unreachable block (ram,0x0148e86c) */
/* WARNING: Removing unreachable block (ram,0x0148e870) */
/* WARNING: Removing unreachable block (ram,0x0148e88c) */
/* WARNING: Removing unreachable block (ram,0x0148e890) */
/* WARNING: Removing unreachable block (ram,0x0148e880) */
/* WARNING: Removing unreachable block (ram,0x0148e894) */
/* WARNING: Removing unreachable block (ram,0x0148e8a4) */
/* WARNING: Removing unreachable block (ram,0x0148e8b4) */
/* WARNING: Removing unreachable block (ram,0x0148e8bc) */
/* WARNING: Removing unreachable block (ram,0x0148e8c0) */
/* WARNING: Removing unreachable block (ram,0x0148e8d4) */
/* WARNING: Removing unreachable block (ram,0x0148e8e0) */
/* WARNING: Removing unreachable block (ram,0x0148e888) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0148e52c) */
/* WARNING: Removing unreachable block (ram,0x0148e534) */
/* WARNING: Removing unreachable block (ram,0x0148e540) */
/* WARNING: Removing unreachable block (ram,0x0148e54c) */
/* WARNING: Removing unreachable block (ram,0x0151398c) */
/* WARNING: Removing unreachable block (ram,0x015139b4) */
/* WARNING: Removing unreachable block (ram,0x015139e0) */
/* WARNING: Removing unreachable block (ram,0x015139f0) */
/* WARNING: Removing unreachable block (ram,0x015139f8) */
/* WARNING: Removing unreachable block (ram,0x01513a54) */
/* WARNING: Removing unreachable block (ram,0x01513a10) */
/* WARNING: Removing unreachable block (ram,0x01513a20) */
/* WARNING: Removing unreachable block (ram,0x01513a28) */
/* WARNING: Removing unreachable block (ram,0x01513a64) */
/* WARNING: Removing unreachable block (ram,0x01513a8c) */
/* WARNING: Removing unreachable block (ram,0x01513ab8) */
/* WARNING: Removing unreachable block (ram,0x01513acc) */
/* WARNING: Removing unreachable block (ram,0x01513bdc) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x01513ae4) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x01513a40) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x032d397c) */
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
/* WARNING: Removing unreachable block (ram,0x0148e2a4) */
/* WARNING: Removing unreachable block (ram,0x0148e2b4) */
/* WARNING: Removing unreachable block (ram,0x0148e2bc) */
/* WARNING: Removing unreachable block (ram,0x0148e2e0) */
/* WARNING: Removing unreachable block (ram,0x0148e2e8) */
/* WARNING: Removing unreachable block (ram,0x0148e308) */
/* WARNING: Removing unreachable block (ram,0x0148e340) */
/* WARNING: Removing unreachable block (ram,0x0148e310) */
/* WARNING: Removing unreachable block (ram,0x0148e348) */
/* WARNING: Removing unreachable block (ram,0x0148e314) */
/* WARNING: Removing unreachable block (ram,0x0148e328) */
/* WARNING: Removing unreachable block (ram,0x0148e34c) */
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
/* WARNING: Removing unreachable block (ram,0x032d3938) */
/* WARNING: Removing unreachable block (ram,0x032d3944) */
/* WARNING: Removing unreachable block (ram,0x032d396c) */
/* WARNING: Removing unreachable block (ram,0x032d3958) */
/* WARNING: Removing unreachable block (ram,0x032d3964) */
/* WARNING: Removing unreachable block (ram,0x032d3970) */
/* WARNING: Removing unreachable block (ram,0x032d3688) */
/* WARNING: Removing unreachable block (ram,0x0148e244) */
/* WARNING: Removing unreachable block (ram,0x0148e220) */
/* WARNING: Removing unreachable block (ram,0x0148e22c) */
/* WARNING: Removing unreachable block (ram,0x0148e248) */
/* WARNING: Removing unreachable block (ram,0x0148e250) */
/* WARNING: Removing unreachable block (ram,0x0148e258) */
/* WARNING: Removing unreachable block (ram,0x0148e26c) */
/* WARNING: Removing unreachable block (ram,0x0148e274) */
/* WARNING: Removing unreachable block (ram,0x0148e330) */
/* WARNING: Removing unreachable block (ram,0x0148e27c) */
/* WARNING: Removing unreachable block (ram,0x0148e290) */
/* WARNING: Removing unreachable block (ram,0x0148e298) */
/* WARNING: Removing unreachable block (ram,0x0148e230) */
/* WARNING: Removing unreachable block (ram,0x0148e240) */
/* WARNING: Removing unreachable block (ram,0x0148ea88) */
/* WARNING: Removing unreachable block (ram,0x0148eac0) */
/* WARNING: Removing unreachable block (ram,0x0148eac4) */
/* WARNING: Removing unreachable block (ram,0x0148ead0) */
/* WARNING: Removing unreachable block (ram,0x0148eb10) */
/* WARNING: Removing unreachable block (ram,0x0148eb30) */
/* WARNING: Removing unreachable block (ram,0x0148eb5c) */
/* WARNING: Removing unreachable block (ram,0x0148eb64) */
/* WARNING: Removing unreachable block (ram,0x0148eb68) */
/* WARNING: Removing unreachable block (ram,0x0148ec10) */
/* WARNING: Removing unreachable block (ram,0x0148eb78) */
/* WARNING: Removing unreachable block (ram,0x0148ec38) */
/* WARNING: Removing unreachable block (ram,0x0148ec58) */
/* WARNING: Removing unreachable block (ram,0x0148ec8c) */
/* WARNING: Removing unreachable block (ram,0x0148eca0) */
/* WARNING: Removing unreachable block (ram,0x0148ecac) */
/* WARNING: Removing unreachable block (ram,0x0148ecb4) */
/* WARNING: Removing unreachable block (ram,0x0148ecb8) */
/* WARNING: Removing unreachable block (ram,0x02f8af34) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x0148ec40) */
/* WARNING: Removing unreachable block (ram,0x03211320) */
/* WARNING: Removing unreachable block (ram,0x03211350) */
/* WARNING: Removing unreachable block (ram,0x03211364) */
/* WARNING: Removing unreachable block (ram,0x0321137c) */
/* WARNING: Removing unreachable block (ram,0x03211390) */
/* WARNING: Removing unreachable block (ram,0x0148eb90) */
/* WARNING: Removing unreachable block (ram,0x0148ebd4) */
/* WARNING: Removing unreachable block (ram,0x0148ebdc) */
/* WARNING: Removing unreachable block (ram,0x0148ebe0) */
/* WARNING: Removing unreachable block (ram,0x0148ec18) */
/* WARNING: Removing unreachable block (ram,0x0148ea90) */
/* WARNING: Removing unreachable block (ram,0x03212134) */
/* WARNING: Removing unreachable block (ram,0x03212158) */
/* WARNING: Removing unreachable block (ram,0x0321216c) */

undefined8 *
Atlas_UI_Screens_MaskTransitionScreen__OnBeforeEnter
          (long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar13;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar14;
  undefined *unaff_x30;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 *puVar11;
  
  puVar14 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4985 & 1) == 0) {
    func_0x00f78a20(0x3d5a2b0);
    func_0x00f78a20(0x3d5a2b8);
    func_0x00f78a20(0x3d41178);
    func_0x00f78a20(0x3d41180);
    func_0x00f78a20(0x3d41188);
    func_0x00f78a20(0x3d41628);
    func_0x00f78a20(0x3d1eb50);
    func_0x00f78a20(0x3d41648);
    func_0x00f78a20(0x3d1eb60);
    func_0x00f78a20(0x3d417a0);
    func_0x00f78a20(0x3d417b8);
    bRam0000000003eb4985 = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41180);
  *(long *)(param_1 + 0x70) = lVar4;
  lVar12 = 0x3eb4000;
  uVar5 = 0x3d41180;
  uVar9 = unaff_x22;
  uVar13 = unaff_x23;
  if (lVar4 == 0) {
LAB_0148e11c:
    unaff_x23 = uVar13;
    unaff_x22 = uVar9;
    unaff_x21 = uVar5;
    unaff_x20 = lVar12;
    unaff_x30 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__HideMask;
    lVar4 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x29 = puVar14;
  }
  else {
    lVar12 = *(long *)(lVar4 + 0x10);
    uVar5 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<int, string, Sprite>_TypeInfo*/ uRam0000000003d1eb60);
    param_3 = lRam0000000003d5a2b0;
    param_4 = lRam0000000003d41648;
    /*UnityEngine.Events.UnityAction<int, string, Sprite>$$.ctor*/ func_0x01b817c8(uVar5,param_1);
    uVar9 = 0x3d5a000;
    uVar13 = 0x3d41000;
    if (lVar12 == 0) goto LAB_0148e11c;
    param_3 = lRam0000000003d417b8;
    /*UnityEngine.Events.UnityEvent<int, string, Sprite>$$AddListener*/ func_0x01b85f0c(lVar12,uVar5);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_0148e11c;
    uVar13 = 0x3d41000;
    lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
    uVar5 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<int, Sprite>_TypeInfo*/ uRam0000000003d1eb50);
    param_3 = lRam0000000003d5a2b8;
    param_4 = lRam0000000003d41628;
    /*UnityEngine.Events.UnityAction<int, Sprite>$$.ctor*/ func_0x01b80124(uVar5,param_1);
    uVar9 = 0x3d5a000;
    if (lVar12 == 0) goto LAB_0148e11c;
    param_3 = lRam0000000003d417a0;
    /*UnityEngine.Events.UnityEvent<int, Sprite>$$AddListener*/ func_0x01b854dc(lVar12,uVar5);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41188);
    uVar9 = 0x3d41000;
    if (lVar4 == 0) goto LAB_0148e11c;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar4 + 0x88);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41178);
    if (lVar4 == 0) goto LAB_0148e11c;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  /*Atlas.UI.Screens.MaskTransitionScreenBehaviour$$SetMaskVisible*/ func_0x0148e6ec(lVar4,0);
  lVar12 = *(long *)(lVar4 + 0x58);
  if (lVar12 != 0) {
    puVar14 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar15 = *(undefined **)((long)register0x00000008 + -8);
    auVar17._8_8_ = unaff_x21;
    auVar17._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x20);
    lVar4 = *(long *)((long)register0x00000008 + -0x18);
    goto code_r0x0322ef1c;
  }
  lVar12 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = lVar4;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) =
       &Atlas_UI_Screens_MaskTransitionScreen__OnAfterExit;
  if ((*(long *)(lVar12 + 0x70) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar12 + 0x70) + 0x18), lVar4 = lVar12, lVar6 != 0)) {
    /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar6,0);
    if ((*(long *)(lVar12 + 0x70) != 0) &&
       (lVar6 = *(long *)(*(long *)(lVar12 + 0x70) + 0x10), lVar6 != 0)) {
      puVar10 = (undefined8 *)/*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar6,0);
      *(undefined8 *)(lVar12 + 0x70) = 0;
      return puVar10;
    }
  }
  uVar5 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x60) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x58) = lVar4;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x48) =
       &Atlas_UI_Screens_MaskTransitionScreen__OnUpdate;
  if ((bRam0000000003eb4986 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41178);
    func_0x00f78a20(0x3d41670);
    bRam0000000003eb4986 = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar5,uRam0000000003d41178);
  if (lVar12 == 0) {
    puVar15 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__IsPlaying;
    lVar12 = func_0x00f78af4();
  }
  else {
    puVar15 = &UNK_0148e220;
  }
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar5;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x78) = puVar15;
  if ((bRam0000000003eb498b & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    bRam0000000003eb498b = 1;
  }
  if (*(long *)(lVar12 + 0x50) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)register0x00000008 + -0xe8),*(long *)(lVar12 + 0x50),0,0);
    *(undefined8 *)((long)register0x00000008 + -0xb8) =
         *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) =
         *(undefined8 *)((long)register0x00000008 + -0xe8);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)((long)register0x00000008 + -0xd8);
    *(undefined4 *)((long)register0x00000008 + -0xa0) =
         *(undefined4 *)((long)register0x00000008 + -200);
    iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)register0x00000008 + -0xc0),0);
    if (((*(ushort *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (undefined8 *)(ulong)(iVar3 != **(int **)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xb8));
  }
  auVar16 = func_0x00f78af4();
  lVar8 = auVar16._0_8_;
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x130);
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0x3d41178;
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x108) = lVar12;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0xf8) =
       &Atlas_UI_Screens_MaskTransitionScreen__RequestPlayHide;
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x100);
  uVar5 = 0x3eb4000;
  lVar6 = param_3;
  lVar4 = param_4;
  if ((bRam0000000003eb4987 & 1) == 0) {
    func_0x00f78a20(0x3d41178);
    bRam0000000003eb4987 = 1;
  }
  if (param_3 == 0) {
code_r0x0148e47c:
    uVar5 = 0x3d41178;
    uVar7 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_3,0);
    if ((uVar7 & 1) == 0) {
      *(long *)(lVar8 + 0x80) = param_3;
      *(undefined1 *)(lVar8 + 0x79) = 1;
    }
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41178);
    auVar17._8_8_ = auVar16._8_8_;
    auVar17._0_8_ = lVar12;
    if (lVar12 == 0) goto code_r0x0148e4cc;
    puVar14 = *(undefined1 **)((long)register0x00000008 + -0x100);
    puVar15 = *(undefined **)((long)register0x00000008 + -0xf8);
    param_3 = *(long *)((long)register0x00000008 + -0x120);
    auVar16 = *(undefined1 (*) [16])((long)register0x00000008 + -0x118);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x130);
    uVar5 = *(undefined8 *)((long)register0x00000008 + -0x128);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0xf0);
    lVar4 = param_4;
    param_4 = *(long *)((long)register0x00000008 + -0x108);
  }
  else {
    if (*(long *)(lVar8 + 0x88) != 0) {
      lVar6 = 0;
      param_3 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar8 + 0x88),param_3);
      goto code_r0x0148e47c;
    }
code_r0x0148e4cc:
    puVar15 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayEnter;
    auVar17 = func_0x00f78af4();
  }
  lVar8 = auVar17._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x30);
  *(long *)(puVar1 + -0x30) = param_3;
  *(undefined1 (*) [16])(puVar1 + -0x28) = auVar16;
  *(long *)(puVar1 + -0x18) = param_4;
  *(undefined1 **)(puVar1 + -0x10) = puVar14;
  *(undefined **)(puVar1 + -8) = puVar15;
  puVar14 = puVar1 + -0x10;
  unaff_x22 = 0x3eb4000;
  if ((bRam0000000003eb498a & 1) == 0) {
    func_0x00f78a20(0x3d78ff8);
    bRam0000000003eb498a = 1;
  }
  /*Atlas.UI.Screens.MaskTransitionScreenBehaviour$$SetMaskVisible*/ func_0x0148e6ec(lVar8,1);
  lVar12 = *(long *)(lVar8 + 0x58);
  if (lVar12 == 0) {
    func_0x00f78af4();
    uVar9 = func_0x00f78b24();
    auVar16 = func_0x00f78ac0(uVar9,0);
    puVar2 = puVar1 + -0x70;
    *(undefined8 *)(puVar1 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x68) = uVar5;
    *(undefined8 *)(puVar1 + -0x60) = 0x3eb4000;
    *(long *)(puVar1 + -0x58) = auVar17._8_8_;
    *(long *)(puVar1 + -0x50) = lVar8;
    *(long *)(puVar1 + -0x48) = lVar4;
    *(undefined1 **)(puVar1 + -0x40) = puVar14;
    *(undefined **)(puVar1 + -0x38) = &Atlas_UI_Screens_MaskTransitionScreen__RequestPlayReveal;
    puVar14 = puVar1 + -0x40;
    unaff_x22 = 0x3d41178;
    lVar4 = lVar6;
    if ((bRam0000000003eb4988 & 1) == 0) {
      func_0x00f78a20(0x3d41178);
      bRam0000000003eb4988 = 1;
    }
    *(undefined1 *)(auVar16._0_8_ + 0x78) = 1;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar16._0_8_,uRam0000000003d41178);
    auVar17._8_8_ = auVar16._8_8_;
    auVar17._0_8_ = lVar12;
    if (lVar12 == 0) {
      puVar15 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayExit;
      auVar17 = func_0x00f78af4();
    }
    else {
      puVar14 = *(undefined1 **)(puVar1 + -0x40);
      puVar15 = *(undefined **)(puVar1 + -0x38);
      unaff_x22 = *(undefined8 *)(puVar1 + -0x60);
      auVar16 = *(undefined1 (*) [16])(puVar1 + -0x58);
      puVar2 = puVar1 + -0x30;
      lVar4 = lVar6;
      lVar6 = *(long *)(puVar1 + -0x48);
    }
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x30);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 (*) [16])(puVar2 + -0x28) = auVar16;
    *(long *)(puVar2 + -0x18) = lVar6;
    *(undefined1 **)(puVar2 + -0x10) = puVar14;
    *(undefined **)(puVar2 + -8) = puVar15;
    puVar14 = puVar2 + -0x10;
    lVar12 = *(long *)(auVar17._0_8_ + 0x58);
    if (lVar12 == 0) {
      func_0x00f78af4();
      uVar5 = func_0x00f78b24();
      lVar12 = func_0x00f78ac0(uVar5,0);
      *(undefined8 *)(puVar2 + -0x60) = unaff_x22;
      *(long *)(puVar2 + -0x58) = auVar16._0_8_;
      *(long *)(puVar2 + -0x50) = auVar17._0_8_;
      *(long *)(puVar2 + -0x48) = lVar6;
      *(undefined1 **)(puVar2 + -0x40) = puVar14;
      *(undefined **)(puVar2 + -0x38) = &Atlas_UI_Screens_MaskTransitionScreen___ctor;
      if ((bRam0000000003eb4989 & 1) == 0) {
        func_0x00f78a20(0x3d2c7c8);
        bRam0000000003eb4989 = 1;
      }
      *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x40);
      *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
      if (lVar12 == 0) {
        auVar17 = func_0x00f78af4();
        puVar11 = auVar17._8_8_;
        puVar10 = auVar17._0_8_;
        uVar9 = puVar11[1];
        uVar5 = *puVar11;
        puVar10[2] = puVar11[2];
        puVar10[1] = uVar9;
        *puVar10 = uVar5;
        return puVar10;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar10 = (undefined8 *)
                (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(lRam0000000003d2c7c8 + 0x18) + 0xc0) + 0x38))();
      return puVar10;
    }
    puVar15 = &UNK_0148e63c;
  }
  else {
    puVar15 = &UNK_0148e52c;
  }
code_r0x0322ef1c:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = auVar17._8_8_;
  *(long *)((long)register0x00000008 + -0x20) = auVar17._0_8_;
  *(long *)((long)register0x00000008 + -0x18) = lVar4;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar14;
  *(undefined **)((long)register0x00000008 + -8) = puVar15;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar10 = (undefined8 *)(*pcRam0000000003ebf4c0)(lVar12,0);
  return puVar10;
}



// ============================================================
// RVA: 0x148e158 | Atlas.UI.Screens.MaskTransitionScreen.OnAfterExit
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e9a8) */
/* WARNING: Removing unreachable block (ram,0x0148e9b0) */
/* WARNING: Removing unreachable block (ram,0x0148e9e8) */
/* WARNING: Removing unreachable block (ram,0x0148e9f0) */
/* WARNING: Removing unreachable block (ram,0x0148e9f4) */
/* WARNING: Removing unreachable block (ram,0x0148e9f8) */
/* WARNING: Removing unreachable block (ram,0x0148ea30) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0148e564) */
/* WARNING: Removing unreachable block (ram,0x0151398c) */
/* WARNING: Removing unreachable block (ram,0x015139b4) */
/* WARNING: Removing unreachable block (ram,0x015139e0) */
/* WARNING: Removing unreachable block (ram,0x015139f0) */
/* WARNING: Removing unreachable block (ram,0x015139f8) */
/* WARNING: Removing unreachable block (ram,0x01513a54) */
/* WARNING: Removing unreachable block (ram,0x01513a10) */
/* WARNING: Removing unreachable block (ram,0x01513a20) */
/* WARNING: Removing unreachable block (ram,0x01513a28) */
/* WARNING: Removing unreachable block (ram,0x01513a64) */
/* WARNING: Removing unreachable block (ram,0x01513a8c) */
/* WARNING: Removing unreachable block (ram,0x01513ab8) */
/* WARNING: Removing unreachable block (ram,0x01513acc) */
/* WARNING: Removing unreachable block (ram,0x01513bdc) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x01513ae4) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x01513a40) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x032d397c) */
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
/* WARNING: Removing unreachable block (ram,0x0148e220) */
/* WARNING: Removing unreachable block (ram,0x0148e22c) */
/* WARNING: Removing unreachable block (ram,0x0148e230) */
/* WARNING: Removing unreachable block (ram,0x0148e240) */
/* WARNING: Removing unreachable block (ram,0x0148e248) */
/* WARNING: Removing unreachable block (ram,0x0148e250) */
/* WARNING: Removing unreachable block (ram,0x0148e258) */
/* WARNING: Removing unreachable block (ram,0x0148e26c) */
/* WARNING: Removing unreachable block (ram,0x0148e274) */
/* WARNING: Removing unreachable block (ram,0x0148e330) */
/* WARNING: Removing unreachable block (ram,0x0148e27c) */
/* WARNING: Removing unreachable block (ram,0x0148e290) */
/* WARNING: Removing unreachable block (ram,0x0148e298) */
/* WARNING: Removing unreachable block (ram,0x0148e2b4) */
/* WARNING: Removing unreachable block (ram,0x0148e2bc) */
/* WARNING: Removing unreachable block (ram,0x0148e2e0) */
/* WARNING: Removing unreachable block (ram,0x0148e2e8) */
/* WARNING: Removing unreachable block (ram,0x0148e308) */
/* WARNING: Removing unreachable block (ram,0x0148e340) */
/* WARNING: Removing unreachable block (ram,0x0148e310) */
/* WARNING: Removing unreachable block (ram,0x0148e348) */
/* WARNING: Removing unreachable block (ram,0x0148e314) */
/* WARNING: Removing unreachable block (ram,0x0148e328) */
/* WARNING: Removing unreachable block (ram,0x0148e34c) */
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
/* WARNING: Removing unreachable block (ram,0x032d3938) */
/* WARNING: Removing unreachable block (ram,0x032d3944) */
/* WARNING: Removing unreachable block (ram,0x032d396c) */
/* WARNING: Removing unreachable block (ram,0x032d3958) */
/* WARNING: Removing unreachable block (ram,0x032d3964) */
/* WARNING: Removing unreachable block (ram,0x032d3970) */
/* WARNING: Removing unreachable block (ram,0x032d3688) */
/* WARNING: Removing unreachable block (ram,0x0148ea88) */
/* WARNING: Removing unreachable block (ram,0x0148ea90) */
/* WARNING: Removing unreachable block (ram,0x03212134) */
/* WARNING: Removing unreachable block (ram,0x03212158) */
/* WARNING: Removing unreachable block (ram,0x0321216c) */

undefined8 *
Atlas_UI_Screens_MaskTransitionScreen__OnAfterExit
          (long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong unaff_x22;
  ulong uVar22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar23;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar24;
  undefined1 *puVar25;
  undefined *puVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar33;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  undefined8 *puStack_30;
  undefined *puStack_28;
  
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x18), lVar6 != 0)) {
    /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar6,0);
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x10), lVar6 != 0)) {
      puVar7 = (undefined8 *)/*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar6,0);
      *(undefined8 *)(param_1 + 0x70) = 0;
      return puVar7;
    }
  }
  uVar8 = func_0x00f78af4();
  puStack_28 = &Atlas_UI_Screens_MaskTransitionScreen__OnUpdate;
  puStack_30 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4986 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41178);
    func_0x00f78a20(0x3d41670);
    bRam0000000003eb4986 = 1;
  }
  uVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar8,uRam0000000003d41178);
  if (uVar9 == 0) {
    puVar26 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__IsPlaying;
    uVar9 = func_0x00f78af4();
  }
  else {
    puVar26 = &UNK_0148e220;
  }
  uStack_70 = 0x3eb4000;
  uStack_68 = uVar8;
  ppuStack_60 = &puStack_30;
  puStack_58 = puVar26;
  if ((bRam0000000003eb498b & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    bRam0000000003eb498b = 1;
  }
  if (*(long *)(uVar9 + 0x50) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_c8,*(long *)(uVar9 + 0x50),0,0);
    uStack_98 = uStack_c0;
    uStack_a0 = uStack_c8;
    uStack_88 = uStack_b0;
    uStack_90 = uStack_b8;
    uStack_80 = uStack_a8;
    iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_a0,0);
    if (((*(ushort *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (undefined8 *)(ulong)(iVar4 != **(int **)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xb8));
  }
  auVar34 = func_0x00f78af4();
  lVar6 = auVar34._0_8_;
  puVar1 = &stack0xfffffffffffffef0;
  puStack_d8 = &Atlas_UI_Screens_MaskTransitionScreen__RequestPlayHide;
  ppppuVar24 = &pppuStack_e0;
  uVar16 = param_3;
  uVar14 = param_4;
  pppuStack_e0 = &ppuStack_60;
  if ((bRam0000000003eb4987 & 1) == 0) {
    func_0x00f78a20(0x3d41178);
    bRam0000000003eb4987 = 1;
  }
  if (param_3 == 0) {
code_r0x0148e47c:
    uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_3,0);
    if ((uVar10 & 1) == 0) {
      *(ulong *)(lVar6 + 0x80) = param_3;
      *(undefined1 *)(lVar6 + 0x79) = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41178);
    auVar35._8_8_ = auVar34._8_8_;
    auVar35._0_8_ = lVar6;
    uVar8 = 0x3d41178;
    if (lVar6 == 0) goto code_r0x0148e4cc;
    auVar34._8_8_ = 0x3eb4000;
    auVar34._0_8_ = 0x3d41178;
    puVar1 = auStack_d0;
    uVar14 = param_4;
    param_4 = uVar9;
    ppppuVar24 = (undefined8 ****)pppuStack_e0;
    puVar26 = puStack_d8;
  }
  else {
    uVar8 = 0x3eb4000;
    if (*(long *)(lVar6 + 0x88) != 0) {
      uVar16 = 0;
      param_3 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar6 + 0x88),param_3);
      goto code_r0x0148e47c;
    }
code_r0x0148e4cc:
    unaff_x23 = uVar8;
    unaff_x22 = param_3;
    puVar26 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayEnter;
    auVar35 = func_0x00f78af4();
  }
  lVar6 = auVar35._0_8_;
  puVar2 = puVar1 + -0x30;
  *(ulong *)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 (*) [16])(puVar1 + -0x28) = auVar34;
  *(ulong *)(puVar1 + -0x18) = param_4;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar24;
  *(undefined **)(puVar1 + -8) = puVar26;
  puVar25 = puVar1 + -0x10;
  uVar8 = 0x3eb4000;
  if ((bRam0000000003eb498a & 1) == 0) {
    func_0x00f78a20(0x3d78ff8);
    bRam0000000003eb498a = 1;
  }
  /*Atlas.UI.Screens.MaskTransitionScreenBehaviour$$SetMaskVisible*/ func_0x0148e6ec(lVar6,1);
  if (*(long *)(lVar6 + 0x58) == 0) {
code_r0x0148e57c:
    func_0x00f78af4();
code_r0x0148e580:
    uVar8 = func_0x00f78b24();
    auVar34 = func_0x00f78ac0(uVar8,0);
    puVar2 = puVar1 + -0x70;
    *(undefined8 *)(puVar1 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x68) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x60) = 0x3eb4000;
    *(long *)(puVar1 + -0x58) = auVar35._8_8_;
    *(long *)(puVar1 + -0x50) = lVar6;
    *(ulong *)(puVar1 + -0x48) = uVar14;
    *(undefined1 **)(puVar1 + -0x40) = puVar25;
    *(undefined **)(puVar1 + -0x38) = &Atlas_UI_Screens_MaskTransitionScreen__RequestPlayReveal;
    puVar25 = puVar1 + -0x40;
    unaff_x23 = 0x3eb4000;
    uVar8 = 0x3d41178;
    uVar14 = uVar16;
    if ((bRam0000000003eb4988 & 1) == 0) {
      func_0x00f78a20(0x3d41178);
      bRam0000000003eb4988 = 1;
    }
    *(undefined1 *)(auVar34._0_8_ + 0x78) = 1;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar34._0_8_,uRam0000000003d41178);
    auVar36._8_8_ = auVar34._8_8_;
    auVar36._0_8_ = lVar6;
    if (lVar6 == 0) {
      puVar26 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayExit;
      auVar36 = func_0x00f78af4();
    }
    else {
      puVar25 = *(undefined1 **)(puVar1 + -0x40);
      puVar26 = *(undefined **)(puVar1 + -0x38);
      uVar8 = *(undefined8 *)(puVar1 + -0x60);
      auVar34 = *(undefined1 (*) [16])(puVar1 + -0x58);
      puVar2 = puVar1 + -0x30;
      unaff_x24 = *(undefined8 *)(puVar1 + -0x70);
      unaff_x23 = *(undefined8 *)(puVar1 + -0x68);
      uVar14 = uVar16;
      uVar16 = *(ulong *)(puVar1 + -0x48);
    }
    uVar11 = auVar36._8_8_;
    lVar6 = auVar36._0_8_;
    *(undefined8 *)(puVar2 + -0x30) = uVar8;
    *(undefined1 (*) [16])(puVar2 + -0x28) = auVar34;
    *(ulong *)(puVar2 + -0x18) = uVar16;
    *(undefined1 **)(puVar2 + -0x10) = puVar25;
    *(undefined **)(puVar2 + -8) = puVar26;
    uVar21 = auVar34._0_8_;
    if (*(long *)(lVar6 + 0x58) != 0) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x58),0,0);
      lVar17 = *(long *)(lVar6 + 0x48);
      uVar16 = uVar14;
      uVar21 = uVar11;
      if (lVar17 != 0) {
        if (*(uint *)(lVar17 + 0x18) <= auVar36._8_4_) goto code_r0x0148e67c;
        lVar17 = *(long *)(lVar17 + (long)(int)auVar36._8_4_ * 8 + 0x20);
        if (lVar17 != 0) {
          uVar9 = *(ulong *)(lVar17 + 0x20);
          uVar16 = *(ulong *)(lVar17 + 0x28);
          puVar25 = *(undefined1 **)(puVar2 + -0x10);
          puVar26 = *(undefined **)(puVar2 + -8);
          lVar17 = *(long *)(puVar2 + -0x20);
          uVar10 = *(ulong *)(puVar2 + -0x18);
          uVar8 = *(undefined8 *)(puVar2 + -0x30);
          uVar21 = *(undefined8 *)(puVar2 + -0x28);
          goto code_r0x0148e794;
        }
      }
    }
    func_0x00f78af4();
code_r0x0148e67c:
    uVar11 = func_0x00f78b24();
    lVar17 = func_0x00f78ac0(uVar11,0);
    *(undefined8 *)(puVar2 + -0x60) = uVar8;
    *(undefined8 *)(puVar2 + -0x58) = uVar21;
    *(long *)(puVar2 + -0x50) = lVar6;
    *(ulong *)(puVar2 + -0x48) = uVar16;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x38) = &Atlas_UI_Screens_MaskTransitionScreen___ctor;
    if ((bRam0000000003eb4989 & 1) == 0) {
      func_0x00f78a20(0x3d2c7c8);
      bRam0000000003eb4989 = 1;
    }
    *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x40);
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
    if (lVar17 == 0) {
      auVar34 = func_0x00f78af4();
      puVar15 = auVar34._8_8_;
      puVar7 = auVar34._0_8_;
      uVar21 = puVar15[1];
      uVar8 = *puVar15;
      puVar7[2] = puVar15[2];
      puVar7[1] = uVar21;
      *puVar7 = uVar8;
      return puVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar7 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c7c8 + 0x18) + 0xc0) + 0x38))();
    return puVar7;
  }
  uVar16 = 0;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x58),0);
  lVar17 = *(long *)(lVar6 + 0x48);
  if (lVar17 == 0) goto code_r0x0148e57c;
  if (*(uint *)(lVar17 + 0x18) <= auVar35._8_4_) goto code_r0x0148e580;
  lVar17 = *(long *)(lVar17 + (long)(int)auVar35._8_4_ * 8 + 0x20);
  if (lVar17 == 0) goto code_r0x0148e57c;
  uVar21 = 0x3d78000;
  uVar9 = *(ulong *)(lVar17 + 0x10);
  uVar16 = *(ulong *)(lVar17 + 0x18);
  puVar26 = &UNK_0148e564;
  uVar10 = uVar14;
  lVar17 = lVar6;
code_r0x0148e794:
  puVar3 = puVar2 + -0x90;
  *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar2 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar2 + -0x70) = unaff_d9;
  *(ulong *)(puVar2 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = uVar8;
  *(undefined8 *)(puVar2 + -0x28) = uVar21;
  *(long *)(puVar2 + -0x20) = lVar17;
  *(ulong *)(puVar2 + -0x18) = uVar10;
  *(undefined1 **)(puVar2 + -0x10) = puVar25;
  *(undefined **)(puVar2 + -8) = puVar26;
  puVar25 = puVar2 + -0x10;
  uVar20 = 0x3eb4000;
  uVar10 = uVar9;
  if ((bRam0000000003eb498c & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb498c = 1;
  }
  uVar12 = uVar14;
  uVar22 = uVar16;
  if (uVar16 != 0) {
    *(ulong *)(puVar2 + -0x90) = uVar9;
    lVar17 = *(long *)(lVar6 + 0x40);
    if (lVar17 != 0) {
      iVar4 = *(int *)(lVar17 + 0x18);
      *(int *)(puVar2 + -0x88) = iVar4;
      uVar13 = uVar14;
      if (0 < iVar4) {
        uVar19 = 0;
        uVar13 = 0x3d23990;
        *(undefined4 *)(puVar2 + -0x84) = *(undefined4 *)(uVar16 + 0x18);
code_r0x0148e82c:
        uVar12 = uVar14;
        if ((*(uint *)(lVar17 + 0x18) <= uVar19) || (*(uint *)(uVar16 + 0x18) <= uVar19))
        goto code_r0x0148eac4;
        lVar17 = *(long *)(lVar17 + (long)(int)uVar19 * 8 + 0x20);
        uVar20 = *(ulong *)(uVar16 + (long)(int)uVar19 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = uVar14;
          uVar22 = uVar16;
          if (uVar20 == 0) goto code_r0x0148eac0;
          uVar18 = *(ulong *)(uVar20 + 0x10);
        }
        else {
          uVar18 = uVar14;
          uVar12 = uVar14;
          uVar22 = uVar16;
          if (uVar20 == 0) goto code_r0x0148eac0;
        }
        if (*(char *)(uVar20 + 0x18) != '\0') {
          uVar18 = 0;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = 0;
        uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar18,0);
        uVar9 = uVar16;
        uVar12 = uVar14;
        uVar22 = uVar14;
        if ((lVar17 == 0) || (*(long *)(lVar17 + 0x18) == 0)) goto code_r0x0148eac0;
        uVar12 = 0x3d23990;
        uVar10 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar17 + 0x18),(int)uVar19 < *(int *)(puVar2 + -0x84));
        plVar23 = *(long **)(lVar17 + 0x10);
        /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
        if (plVar23 == (long *)0x0) goto code_r0x0148eac0;
        (**(code **)(*plVar23 + 0x2a8))(plVar23,*(undefined8 *)(*plVar23 + 0x2b0));
        if ((uVar5 & 1) == 0) {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar10 = 0;
          iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar18,0);
          if (iVar4 != 0) goto code_r0x0148e950;
          if (*(int *)(puVar2 + -0x84) <= (int)uVar19) goto code_r0x0148ea48;
        }
        else {
code_r0x0148e950:
          if (*(long *)(lVar17 + 0x10) == 0) goto code_r0x0148eac0;
          uVar10 = 0;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar17 + 0x10),0);
          if (*(int *)(puVar2 + -0x84) <= (int)uVar19) {
code_r0x0148ea48:
            uVar19 = uVar19 + 1;
            if (*(uint *)(puVar2 + -0x88) == uVar19) goto code_r0x0148ea6c;
            lVar17 = *(long *)(lVar6 + 0x40);
            uVar12 = uVar14;
            uVar22 = uVar16;
            if (lVar17 == 0) goto code_r0x0148eac0;
            goto code_r0x0148e82c;
          }
          if (uVar5 == 0) goto code_r0x0148e998;
          if (*(long *)(lVar17 + 0x10) == 0) goto code_r0x0148eac0;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar17 + 0x10),uVar18,0);
        }
code_r0x0148e998:
        fVar27 = *(float *)(uVar20 + 0x2c);
        uVar10 = (ulong)*(uint *)(uVar20 + 0x30);
        puVar26 = &UNK_0148e9a8;
        goto code_r0x0148ead0;
      }
code_r0x0148ea6c:
      lVar6 = *(long *)(lVar6 + 0x50);
      uVar12 = uVar13;
      if (lVar6 != 0) {
        uVar14 = *(ulong *)(puVar2 + -0x90);
        puVar26 = &UNK_0148ea88;
        goto code_r0x03211320;
      }
    }
  }
code_r0x0148eac0:
  func_0x00f78af4();
  uVar16 = uVar22;
code_r0x0148eac4:
  uVar14 = uVar16;
  uVar13 = uVar12;
  uVar16 = uVar9;
  uVar8 = func_0x00f78b24();
  puVar26 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__CalculateScaleAndOffset;
  fVar27 = (float)func_0x00f78ac0(uVar8,0);
  uVar18 = extraout_x1;
code_r0x0148ead0:
  puVar3 = puVar2 + -0x110;
  *(undefined8 *)(puVar2 + -0xf0) = unaff_d13;
  *(undefined8 *)(puVar2 + -0xe8) = unaff_d12;
  *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
  *(undefined8 *)(puVar2 + -0xd8) = unaff_d10;
  *(undefined8 *)(puVar2 + -0xd0) = unaff_d9;
  *(ulong *)(puVar2 + -200) = unaff_d8;
  *(ulong *)(puVar2 + -0xc0) = uVar14;
  *(ulong *)(puVar2 + -0xb8) = uVar13;
  *(ulong *)(puVar2 + -0xb0) = uVar16;
  *(ulong *)(puVar2 + -0xa8) = uVar20;
  *(undefined1 **)(puVar2 + -0xa0) = puVar25;
  *(undefined **)(puVar2 + -0x98) = puVar26;
  puVar25 = puVar2 + -0xa0;
  unaff_d8 = (ulong)(uint)fVar27;
  uVar22 = 0x3eb4000;
  uVar14 = uVar10;
  if ((bRam0000000003eb498d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb498d = 1;
  }
  *(undefined8 *)(puVar2 + -0x100) = 0;
  *(undefined8 *)(puVar2 + -0xf8) = 0;
  uVar30 = 0x3f800000;
  uVar31 = 0;
  uVar32 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,puVar2 + -0x100,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar7 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar18,0);
  if (((ulong)puVar7 & 1) != 0) {
    uVar13 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    iVar4 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
    if (uVar18 == 0) {
      puVar26 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
      func_0x00f78af4();
      if (extraout_x1_00 == 0) {
        *(undefined1 **)(puVar2 + -0x120) = puVar25;
        *(undefined **)(puVar2 + -0x118) =
             &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
        puVar7 = (undefined8 *)func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x150) = 0x3eb4000;
        *(ulong *)(puVar2 + -0x148) = uVar13;
        *(undefined8 *)(puVar2 + -0x140) = 0;
        *(ulong *)(puVar2 + -0x138) = uVar10;
        *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0x120;
        *(undefined **)(puVar2 + -0x128) = &Atlas_UI_Screens_MaskTransitionScreenBehaviour___ctor;
        if ((bRam0000000003eb498e & 1) == 0) {
          func_0x00f78a20(0x3d255d8);
          bRam0000000003eb498e = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(puVar2 + -0x150) = *(undefined8 *)(puVar2 + -0x150);
        *(undefined8 *)(puVar2 + -0x148) = *(undefined8 *)(puVar2 + -0x148);
        *(undefined8 *)(puVar2 + -0x140) = *(undefined8 *)(puVar2 + -0x140);
        *(undefined8 *)(puVar2 + -0x138) = *(undefined8 *)(puVar2 + -0x138);
        *(undefined8 *)(puVar2 + -0x130) = *(undefined8 *)(puVar2 + -0x130);
        *(undefined8 *)(puVar2 + -0x128) = *(undefined8 *)(puVar2 + -0x128);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return puVar7;
      }
      uVar9 = 0;
      lVar6 = extraout_x1_00;
      uVar20 = uVar10;
code_r0x03211320:
      *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
      *(ulong *)(puVar3 + -0x38) = unaff_d8;
      *(ulong *)(puVar3 + -0x30) = uVar22;
      *(ulong *)(puVar3 + -0x28) = uVar13;
      *(ulong *)(puVar3 + -0x20) = uVar9;
      *(ulong *)(puVar3 + -0x18) = uVar20;
      *(undefined1 **)(puVar3 + -0x10) = puVar25;
      *(undefined **)(puVar3 + -8) = puVar26;
      if (pcRam0000000003ebe3c0 == (code *)0x0) {
        pcRam0000000003ebe3c0 =
             (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)",uVar14,0,0)
        ;
      }
      uVar8 = (*pcRam0000000003ebe3c0)(uVar14);
      if (pcRam0000000003ebe318 == (code *)0x0) {
        pcRam0000000003ebe318 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar7 = (undefined8 *)(*pcRam0000000003ebe318)(0,lVar6,uVar8,0);
      return puVar7;
    }
    fVar33 = (float)iVar4;
    uVar28 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(uVar18,0);
    *(undefined4 *)(puVar2 + -0x110) = uVar28;
    *(undefined4 *)(puVar2 + -0x10c) = uVar30;
    *(undefined4 *)(puVar2 + -0x108) = uVar31;
    *(undefined4 *)(puVar2 + -0x104) = uVar32;
    uVar31 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar2 + -0x110,0);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar29 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4((float)(int)uVar13,fVar33,uVar31,uVar30,uVar10,0);
    puVar7 = (undefined8 *)/*Core.UI2.UIUtils$$CalculateCentredSTCoordsForScaleFactor*/ func_0x02f90c74(fVar29 / fVar27,fVar33 / fVar27,0);
  }
  return puVar7;
}



// ============================================================
// RVA: 0x148e1ac | Atlas.UI.Screens.MaskTransitionScreen.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e9a8) */
/* WARNING: Removing unreachable block (ram,0x0148e9b0) */
/* WARNING: Removing unreachable block (ram,0x0148e9e8) */
/* WARNING: Removing unreachable block (ram,0x0148e9f0) */
/* WARNING: Removing unreachable block (ram,0x0148e9f4) */
/* WARNING: Removing unreachable block (ram,0x0148e9f8) */
/* WARNING: Removing unreachable block (ram,0x0148ea30) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0148e564) */
/* WARNING: Removing unreachable block (ram,0x0151398c) */
/* WARNING: Removing unreachable block (ram,0x015139b4) */
/* WARNING: Removing unreachable block (ram,0x015139e0) */
/* WARNING: Removing unreachable block (ram,0x015139f0) */
/* WARNING: Removing unreachable block (ram,0x015139f8) */
/* WARNING: Removing unreachable block (ram,0x01513a54) */
/* WARNING: Removing unreachable block (ram,0x01513a10) */
/* WARNING: Removing unreachable block (ram,0x01513a20) */
/* WARNING: Removing unreachable block (ram,0x01513a28) */
/* WARNING: Removing unreachable block (ram,0x01513a64) */
/* WARNING: Removing unreachable block (ram,0x01513a8c) */
/* WARNING: Removing unreachable block (ram,0x01513ab8) */
/* WARNING: Removing unreachable block (ram,0x01513acc) */
/* WARNING: Removing unreachable block (ram,0x01513bdc) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x01513ae4) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x01513a40) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x032d397c) */
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
/* WARNING: Removing unreachable block (ram,0x0148e220) */
/* WARNING: Removing unreachable block (ram,0x0148e22c) */
/* WARNING: Removing unreachable block (ram,0x0148e230) */
/* WARNING: Removing unreachable block (ram,0x0148e240) */
/* WARNING: Removing unreachable block (ram,0x0148e248) */
/* WARNING: Removing unreachable block (ram,0x0148e250) */
/* WARNING: Removing unreachable block (ram,0x0148e258) */
/* WARNING: Removing unreachable block (ram,0x0148e26c) */
/* WARNING: Removing unreachable block (ram,0x0148e274) */
/* WARNING: Removing unreachable block (ram,0x0148e330) */
/* WARNING: Removing unreachable block (ram,0x0148e27c) */
/* WARNING: Removing unreachable block (ram,0x0148e290) */
/* WARNING: Removing unreachable block (ram,0x0148e298) */
/* WARNING: Removing unreachable block (ram,0x0148e2b4) */
/* WARNING: Removing unreachable block (ram,0x0148e2bc) */
/* WARNING: Removing unreachable block (ram,0x0148e2e0) */
/* WARNING: Removing unreachable block (ram,0x0148e2e8) */
/* WARNING: Removing unreachable block (ram,0x0148e308) */
/* WARNING: Removing unreachable block (ram,0x0148e340) */
/* WARNING: Removing unreachable block (ram,0x0148e310) */
/* WARNING: Removing unreachable block (ram,0x0148e348) */
/* WARNING: Removing unreachable block (ram,0x0148e314) */
/* WARNING: Removing unreachable block (ram,0x0148e328) */
/* WARNING: Removing unreachable block (ram,0x0148e34c) */
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
/* WARNING: Removing unreachable block (ram,0x032d3938) */
/* WARNING: Removing unreachable block (ram,0x032d3944) */
/* WARNING: Removing unreachable block (ram,0x032d396c) */
/* WARNING: Removing unreachable block (ram,0x032d3958) */
/* WARNING: Removing unreachable block (ram,0x032d3964) */
/* WARNING: Removing unreachable block (ram,0x032d3970) */
/* WARNING: Removing unreachable block (ram,0x032d3688) */
/* WARNING: Removing unreachable block (ram,0x0148ea88) */
/* WARNING: Removing unreachable block (ram,0x0148ea90) */
/* WARNING: Removing unreachable block (ram,0x03212134) */
/* WARNING: Removing unreachable block (ram,0x03212158) */
/* WARNING: Removing unreachable block (ram,0x0321216c) */

undefined8 *
Atlas_UI_Screens_MaskTransitionScreen__OnUpdate
          (undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong unaff_x22;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar23;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar24;
  undefined1 *puVar25;
  undefined *puVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar33;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4986 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41178);
    func_0x00f78a20(0x3d41670);
    bRam0000000003eb4986 = 1;
  }
  uVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41178);
  if (uVar6 == 0) {
    puVar26 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__IsPlaying;
    uVar6 = func_0x00f78af4();
  }
  else {
    puVar26 = (undefined *)0x148e220;
  }
  uStack_50 = 0x3eb4000;
  uStack_48 = param_1;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  puStack_38 = puVar26;
  if ((bRam0000000003eb498b & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    bRam0000000003eb498b = 1;
  }
  if (*(long *)(uVar6 + 0x50) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_a8,*(long *)(uVar6 + 0x50),0,0);
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_60 = uStack_88;
    iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_80,0);
    if (((*(ushort *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (undefined8 *)(ulong)(iVar4 != **(int **)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xb8));
  }
  auVar34 = func_0x00f78af4();
  lVar8 = auVar34._0_8_;
  puVar1 = &stack0xffffffffffffff10;
  puStack_b8 = &Atlas_UI_Screens_MaskTransitionScreen__RequestPlayHide;
  ppppuVar24 = &pppuStack_c0;
  uVar15 = param_3;
  uVar13 = param_4;
  pppuStack_c0 = &ppuStack_40;
  if ((bRam0000000003eb4987 & 1) == 0) {
    func_0x00f78a20(0x3d41178);
    bRam0000000003eb4987 = 1;
  }
  if (param_3 == 0) {
code_r0x0148e47c:
    uVar7 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_3,0);
    if ((uVar7 & 1) == 0) {
      *(ulong *)(lVar8 + 0x80) = param_3;
      *(undefined1 *)(lVar8 + 0x79) = 1;
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41178);
    auVar35._8_8_ = auVar34._8_8_;
    auVar35._0_8_ = lVar8;
    uVar21 = 0x3d41178;
    if (lVar8 == 0) goto code_r0x0148e4cc;
    auVar34._8_8_ = 0x3eb4000;
    auVar34._0_8_ = 0x3d41178;
    puVar1 = auStack_b0;
    uVar13 = param_4;
    param_4 = uVar6;
    ppppuVar24 = (undefined8 ****)pppuStack_c0;
    puVar26 = puStack_b8;
  }
  else {
    uVar21 = 0x3eb4000;
    if (*(long *)(lVar8 + 0x88) != 0) {
      uVar15 = 0;
      param_3 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar8 + 0x88),param_3);
      goto code_r0x0148e47c;
    }
code_r0x0148e4cc:
    unaff_x23 = uVar21;
    unaff_x22 = param_3;
    puVar26 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayEnter;
    auVar35 = func_0x00f78af4();
  }
  lVar8 = auVar35._0_8_;
  puVar2 = puVar1 + -0x30;
  *(ulong *)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 (*) [16])(puVar1 + -0x28) = auVar34;
  *(ulong *)(puVar1 + -0x18) = param_4;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar24;
  *(undefined **)(puVar1 + -8) = puVar26;
  puVar25 = puVar1 + -0x10;
  uVar21 = 0x3eb4000;
  if ((bRam0000000003eb498a & 1) == 0) {
    func_0x00f78a20(0x3d78ff8);
    bRam0000000003eb498a = 1;
  }
  /*Atlas.UI.Screens.MaskTransitionScreenBehaviour$$SetMaskVisible*/ func_0x0148e6ec(lVar8,1);
  if (*(long *)(lVar8 + 0x58) == 0) {
code_r0x0148e57c:
    func_0x00f78af4();
code_r0x0148e580:
    uVar21 = func_0x00f78b24();
    auVar34 = func_0x00f78ac0(uVar21,0);
    puVar2 = puVar1 + -0x70;
    *(undefined8 *)(puVar1 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x68) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x60) = 0x3eb4000;
    *(long *)(puVar1 + -0x58) = auVar35._8_8_;
    *(long *)(puVar1 + -0x50) = lVar8;
    *(ulong *)(puVar1 + -0x48) = uVar13;
    *(undefined1 **)(puVar1 + -0x40) = puVar25;
    *(undefined **)(puVar1 + -0x38) = &Atlas_UI_Screens_MaskTransitionScreen__RequestPlayReveal;
    puVar25 = puVar1 + -0x40;
    unaff_x23 = 0x3eb4000;
    uVar21 = 0x3d41178;
    uVar13 = uVar15;
    if ((bRam0000000003eb4988 & 1) == 0) {
      func_0x00f78a20(0x3d41178);
      bRam0000000003eb4988 = 1;
    }
    *(undefined1 *)(auVar34._0_8_ + 0x78) = 1;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar34._0_8_,uRam0000000003d41178);
    auVar36._8_8_ = auVar34._8_8_;
    auVar36._0_8_ = lVar8;
    if (lVar8 == 0) {
      puVar26 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayExit;
      auVar36 = func_0x00f78af4();
    }
    else {
      puVar25 = *(undefined1 **)(puVar1 + -0x40);
      puVar26 = *(undefined **)(puVar1 + -0x38);
      uVar21 = *(undefined8 *)(puVar1 + -0x60);
      auVar34 = *(undefined1 (*) [16])(puVar1 + -0x58);
      puVar2 = puVar1 + -0x30;
      unaff_x24 = *(undefined8 *)(puVar1 + -0x70);
      unaff_x23 = *(undefined8 *)(puVar1 + -0x68);
      uVar13 = uVar15;
      uVar15 = *(ulong *)(puVar1 + -0x48);
    }
    uVar9 = auVar36._8_8_;
    lVar8 = auVar36._0_8_;
    *(undefined8 *)(puVar2 + -0x30) = uVar21;
    *(undefined1 (*) [16])(puVar2 + -0x28) = auVar34;
    *(ulong *)(puVar2 + -0x18) = uVar15;
    *(undefined1 **)(puVar2 + -0x10) = puVar25;
    *(undefined **)(puVar2 + -8) = puVar26;
    uVar20 = auVar34._0_8_;
    if (*(long *)(lVar8 + 0x58) != 0) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x58),0,0);
      lVar16 = *(long *)(lVar8 + 0x48);
      uVar15 = uVar13;
      uVar20 = uVar9;
      if (lVar16 != 0) {
        if (*(uint *)(lVar16 + 0x18) <= auVar36._8_4_) goto code_r0x0148e67c;
        lVar16 = *(long *)(lVar16 + (long)(int)auVar36._8_4_ * 8 + 0x20);
        if (lVar16 != 0) {
          uVar6 = *(ulong *)(lVar16 + 0x20);
          uVar15 = *(ulong *)(lVar16 + 0x28);
          puVar25 = *(undefined1 **)(puVar2 + -0x10);
          puVar26 = *(undefined **)(puVar2 + -8);
          lVar16 = *(long *)(puVar2 + -0x20);
          uVar7 = *(ulong *)(puVar2 + -0x18);
          uVar21 = *(undefined8 *)(puVar2 + -0x30);
          uVar20 = *(undefined8 *)(puVar2 + -0x28);
          goto code_r0x0148e794;
        }
      }
    }
    func_0x00f78af4();
code_r0x0148e67c:
    uVar9 = func_0x00f78b24();
    lVar16 = func_0x00f78ac0(uVar9,0);
    *(undefined8 *)(puVar2 + -0x60) = uVar21;
    *(undefined8 *)(puVar2 + -0x58) = uVar20;
    *(long *)(puVar2 + -0x50) = lVar8;
    *(ulong *)(puVar2 + -0x48) = uVar15;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x38) = &Atlas_UI_Screens_MaskTransitionScreen___ctor;
    if ((bRam0000000003eb4989 & 1) == 0) {
      func_0x00f78a20(0x3d2c7c8);
      bRam0000000003eb4989 = 1;
    }
    *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x40);
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
    if (lVar16 == 0) {
      auVar34 = func_0x00f78af4();
      puVar14 = auVar34._8_8_;
      puVar11 = auVar34._0_8_;
      uVar20 = puVar14[1];
      uVar21 = *puVar14;
      puVar11[2] = puVar14[2];
      puVar11[1] = uVar20;
      *puVar11 = uVar21;
      return puVar11;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c7c8 + 0x18) + 0xc0) + 0x38))();
    return puVar11;
  }
  uVar15 = 0;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x58),0);
  lVar16 = *(long *)(lVar8 + 0x48);
  if (lVar16 == 0) goto code_r0x0148e57c;
  if (*(uint *)(lVar16 + 0x18) <= auVar35._8_4_) goto code_r0x0148e580;
  lVar16 = *(long *)(lVar16 + (long)(int)auVar35._8_4_ * 8 + 0x20);
  if (lVar16 == 0) goto code_r0x0148e57c;
  uVar20 = 0x3d78000;
  uVar6 = *(ulong *)(lVar16 + 0x10);
  uVar15 = *(ulong *)(lVar16 + 0x18);
  puVar26 = &UNK_0148e564;
  uVar7 = uVar13;
  lVar16 = lVar8;
code_r0x0148e794:
  puVar3 = puVar2 + -0x90;
  *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar2 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar2 + -0x70) = unaff_d9;
  *(ulong *)(puVar2 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = uVar21;
  *(undefined8 *)(puVar2 + -0x28) = uVar20;
  *(long *)(puVar2 + -0x20) = lVar16;
  *(ulong *)(puVar2 + -0x18) = uVar7;
  *(undefined1 **)(puVar2 + -0x10) = puVar25;
  *(undefined **)(puVar2 + -8) = puVar26;
  puVar25 = puVar2 + -0x10;
  uVar19 = 0x3eb4000;
  uVar7 = uVar6;
  if ((bRam0000000003eb498c & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb498c = 1;
  }
  uVar10 = uVar13;
  uVar22 = uVar15;
  if (uVar15 != 0) {
    *(ulong *)(puVar2 + -0x90) = uVar6;
    lVar16 = *(long *)(lVar8 + 0x40);
    if (lVar16 != 0) {
      iVar4 = *(int *)(lVar16 + 0x18);
      *(int *)(puVar2 + -0x88) = iVar4;
      uVar12 = uVar13;
      if (0 < iVar4) {
        uVar18 = 0;
        uVar12 = 0x3d23990;
        *(undefined4 *)(puVar2 + -0x84) = *(undefined4 *)(uVar15 + 0x18);
code_r0x0148e82c:
        uVar10 = uVar13;
        if ((*(uint *)(lVar16 + 0x18) <= uVar18) || (*(uint *)(uVar15 + 0x18) <= uVar18))
        goto code_r0x0148eac4;
        lVar16 = *(long *)(lVar16 + (long)(int)uVar18 * 8 + 0x20);
        uVar19 = *(ulong *)(uVar15 + (long)(int)uVar18 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
        if ((uVar10 & 1) == 0) {
          uVar10 = uVar13;
          uVar22 = uVar15;
          if (uVar19 == 0) goto code_r0x0148eac0;
          uVar17 = *(ulong *)(uVar19 + 0x10);
        }
        else {
          uVar17 = uVar13;
          uVar10 = uVar13;
          uVar22 = uVar15;
          if (uVar19 == 0) goto code_r0x0148eac0;
        }
        if (*(char *)(uVar19 + 0x18) != '\0') {
          uVar17 = 0;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = 0;
        uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0);
        uVar6 = uVar15;
        uVar10 = uVar13;
        uVar22 = uVar13;
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x18) == 0)) goto code_r0x0148eac0;
        uVar10 = 0x3d23990;
        uVar7 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar16 + 0x18),(int)uVar18 < *(int *)(puVar2 + -0x84));
        plVar23 = *(long **)(lVar16 + 0x10);
        /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
        if (plVar23 == (long *)0x0) goto code_r0x0148eac0;
        (**(code **)(*plVar23 + 0x2a8))(plVar23,*(undefined8 *)(*plVar23 + 0x2b0));
        if ((uVar5 & 1) == 0) {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = 0;
          iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0);
          if (iVar4 != 0) goto code_r0x0148e950;
          if (*(int *)(puVar2 + -0x84) <= (int)uVar18) goto code_r0x0148ea48;
        }
        else {
code_r0x0148e950:
          if (*(long *)(lVar16 + 0x10) == 0) goto code_r0x0148eac0;
          uVar7 = 0;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar16 + 0x10),0);
          if (*(int *)(puVar2 + -0x84) <= (int)uVar18) {
code_r0x0148ea48:
            uVar18 = uVar18 + 1;
            if (*(uint *)(puVar2 + -0x88) == uVar18) goto code_r0x0148ea6c;
            lVar16 = *(long *)(lVar8 + 0x40);
            uVar10 = uVar13;
            uVar22 = uVar15;
            if (lVar16 == 0) goto code_r0x0148eac0;
            goto code_r0x0148e82c;
          }
          if (uVar5 == 0) goto code_r0x0148e998;
          if (*(long *)(lVar16 + 0x10) == 0) goto code_r0x0148eac0;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar16 + 0x10),uVar17,0);
        }
code_r0x0148e998:
        fVar27 = *(float *)(uVar19 + 0x2c);
        uVar7 = (ulong)*(uint *)(uVar19 + 0x30);
        puVar26 = &UNK_0148e9a8;
        goto code_r0x0148ead0;
      }
code_r0x0148ea6c:
      lVar8 = *(long *)(lVar8 + 0x50);
      uVar10 = uVar12;
      if (lVar8 != 0) {
        uVar13 = *(ulong *)(puVar2 + -0x90);
        puVar26 = &UNK_0148ea88;
        goto code_r0x03211320;
      }
    }
  }
code_r0x0148eac0:
  func_0x00f78af4();
  uVar15 = uVar22;
code_r0x0148eac4:
  uVar13 = uVar15;
  uVar12 = uVar10;
  uVar15 = uVar6;
  uVar21 = func_0x00f78b24();
  puVar26 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__CalculateScaleAndOffset;
  fVar27 = (float)func_0x00f78ac0(uVar21,0);
  uVar17 = extraout_x1;
code_r0x0148ead0:
  puVar3 = puVar2 + -0x110;
  *(undefined8 *)(puVar2 + -0xf0) = unaff_d13;
  *(undefined8 *)(puVar2 + -0xe8) = unaff_d12;
  *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
  *(undefined8 *)(puVar2 + -0xd8) = unaff_d10;
  *(undefined8 *)(puVar2 + -0xd0) = unaff_d9;
  *(ulong *)(puVar2 + -200) = unaff_d8;
  *(ulong *)(puVar2 + -0xc0) = uVar13;
  *(ulong *)(puVar2 + -0xb8) = uVar12;
  *(ulong *)(puVar2 + -0xb0) = uVar15;
  *(ulong *)(puVar2 + -0xa8) = uVar19;
  *(undefined1 **)(puVar2 + -0xa0) = puVar25;
  *(undefined **)(puVar2 + -0x98) = puVar26;
  puVar25 = puVar2 + -0xa0;
  unaff_d8 = (ulong)(uint)fVar27;
  uVar22 = 0x3eb4000;
  uVar13 = uVar7;
  if ((bRam0000000003eb498d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb498d = 1;
  }
  *(undefined8 *)(puVar2 + -0x100) = 0;
  *(undefined8 *)(puVar2 + -0xf8) = 0;
  uVar30 = 0x3f800000;
  uVar31 = 0;
  uVar32 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,puVar2 + -0x100,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar11 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar17,0);
  if (((ulong)puVar11 & 1) != 0) {
    uVar12 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    iVar4 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
    if (uVar17 == 0) {
      puVar26 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
      func_0x00f78af4();
      if (extraout_x1_00 == 0) {
        *(undefined1 **)(puVar2 + -0x120) = puVar25;
        *(undefined **)(puVar2 + -0x118) =
             &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
        puVar11 = (undefined8 *)func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x150) = 0x3eb4000;
        *(ulong *)(puVar2 + -0x148) = uVar12;
        *(undefined8 *)(puVar2 + -0x140) = 0;
        *(ulong *)(puVar2 + -0x138) = uVar7;
        *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0x120;
        *(undefined **)(puVar2 + -0x128) = &Atlas_UI_Screens_MaskTransitionScreenBehaviour___ctor;
        if ((bRam0000000003eb498e & 1) == 0) {
          func_0x00f78a20(0x3d255d8);
          bRam0000000003eb498e = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(puVar2 + -0x150) = *(undefined8 *)(puVar2 + -0x150);
        *(undefined8 *)(puVar2 + -0x148) = *(undefined8 *)(puVar2 + -0x148);
        *(undefined8 *)(puVar2 + -0x140) = *(undefined8 *)(puVar2 + -0x140);
        *(undefined8 *)(puVar2 + -0x138) = *(undefined8 *)(puVar2 + -0x138);
        *(undefined8 *)(puVar2 + -0x130) = *(undefined8 *)(puVar2 + -0x130);
        *(undefined8 *)(puVar2 + -0x128) = *(undefined8 *)(puVar2 + -0x128);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return puVar11;
      }
      uVar6 = 0;
      lVar8 = extraout_x1_00;
      uVar19 = uVar7;
code_r0x03211320:
      *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
      *(ulong *)(puVar3 + -0x38) = unaff_d8;
      *(ulong *)(puVar3 + -0x30) = uVar22;
      *(ulong *)(puVar3 + -0x28) = uVar12;
      *(ulong *)(puVar3 + -0x20) = uVar6;
      *(ulong *)(puVar3 + -0x18) = uVar19;
      *(undefined1 **)(puVar3 + -0x10) = puVar25;
      *(undefined **)(puVar3 + -8) = puVar26;
      if (pcRam0000000003ebe3c0 == (code *)0x0) {
        pcRam0000000003ebe3c0 =
             (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)",uVar13,0,0)
        ;
      }
      uVar21 = (*pcRam0000000003ebe3c0)(uVar13);
      if (pcRam0000000003ebe318 == (code *)0x0) {
        pcRam0000000003ebe318 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar11 = (undefined8 *)(*pcRam0000000003ebe318)(0,lVar8,uVar21,0);
      return puVar11;
    }
    fVar33 = (float)iVar4;
    uVar28 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(uVar17,0);
    *(undefined4 *)(puVar2 + -0x110) = uVar28;
    *(undefined4 *)(puVar2 + -0x10c) = uVar30;
    *(undefined4 *)(puVar2 + -0x108) = uVar31;
    *(undefined4 *)(puVar2 + -0x104) = uVar32;
    uVar31 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar2 + -0x110,0);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar29 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4((float)(int)uVar12,fVar33,uVar31,uVar30,uVar7,0);
    puVar11 = (undefined8 *)/*Core.UI2.UIUtils$$CalculateCentredSTCoordsForScaleFactor*/ func_0x02f90c74(fVar29 / fVar27,fVar33 / fVar27,0);
  }
  return puVar11;
}



// ============================================================
// RVA: 0x148e41c | Atlas.UI.Screens.MaskTransitionScreen.RequestPlayHide
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e9a8) */
/* WARNING: Removing unreachable block (ram,0x0148e9b0) */
/* WARNING: Removing unreachable block (ram,0x0148e9e8) */
/* WARNING: Removing unreachable block (ram,0x0148e9f0) */
/* WARNING: Removing unreachable block (ram,0x0148e9f4) */
/* WARNING: Removing unreachable block (ram,0x0148e9f8) */
/* WARNING: Removing unreachable block (ram,0x0148ea30) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0148e564) */
/* WARNING: Removing unreachable block (ram,0x0151398c) */
/* WARNING: Removing unreachable block (ram,0x015139b4) */
/* WARNING: Removing unreachable block (ram,0x015139e0) */
/* WARNING: Removing unreachable block (ram,0x015139f0) */
/* WARNING: Removing unreachable block (ram,0x015139f8) */
/* WARNING: Removing unreachable block (ram,0x01513a54) */
/* WARNING: Removing unreachable block (ram,0x01513a10) */
/* WARNING: Removing unreachable block (ram,0x01513a20) */
/* WARNING: Removing unreachable block (ram,0x01513a28) */
/* WARNING: Removing unreachable block (ram,0x01513a64) */
/* WARNING: Removing unreachable block (ram,0x01513a8c) */
/* WARNING: Removing unreachable block (ram,0x01513ab8) */
/* WARNING: Removing unreachable block (ram,0x01513acc) */
/* WARNING: Removing unreachable block (ram,0x01513bdc) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x01513ae4) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x01513a40) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x0148ea88) */
/* WARNING: Removing unreachable block (ram,0x0148ea90) */
/* WARNING: Removing unreachable block (ram,0x03212134) */
/* WARNING: Removing unreachable block (ram,0x03212158) */
/* WARNING: Removing unreachable block (ram,0x0321216c) */

undefined8 *
Atlas_UI_Screens_MaskTransitionScreen__RequestPlayHide
          (long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong unaff_x19;
  ulong uVar18;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar19;
  ulong unaff_x22;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar22;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar31;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  puVar23 = &stack0xfffffffffffffff0;
  uVar13 = param_3;
  uVar11 = param_4;
  if ((bRam0000000003eb4987 & 1) == 0) {
    func_0x00f78a20(0x3d41178);
    bRam0000000003eb4987 = 1;
  }
  if (param_3 == 0) {
LAB_0148e47c:
    uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_3,0);
    if ((uVar5 & 1) == 0) {
      *(ulong *)(param_1 + 0x80) = param_3;
      *(undefined1 *)(param_1 + 0x79) = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41178);
    uVar19 = param_2;
    uVar5 = param_4;
    uVar20 = 0x3d41178;
    if (lVar6 == 0) goto LAB_0148e4cc;
  }
  else {
    uVar20 = 0x3eb4000;
    if (*(long *)(param_1 + 0x88) != 0) {
      uVar13 = 0;
      param_3 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_1 + 0x88),param_3);
      goto LAB_0148e47c;
    }
LAB_0148e4cc:
    unaff_x23 = uVar20;
    unaff_x22 = param_3;
    unaff_x30 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayEnter;
    auVar32 = func_0x00f78af4();
    lVar6 = auVar32._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    uVar19 = auVar32._8_8_;
    uVar5 = uVar11;
    unaff_x19 = param_4;
    unaff_x20 = param_2;
    unaff_x21 = param_1;
    unaff_x29 = puVar23;
  }
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar20 = 0x3eb4000;
  if ((bRam0000000003eb498a & 1) == 0) {
    func_0x00f78a20(0x3d78ff8);
    bRam0000000003eb498a = 1;
  }
  /*Atlas.UI.Screens.MaskTransitionScreenBehaviour$$SetMaskVisible*/ func_0x0148e6ec(lVar6,1);
  if (*(long *)(lVar6 + 0x58) == 0) {
code_r0x0148e57c:
    func_0x00f78af4();
code_r0x0148e580:
    uVar20 = func_0x00f78b24();
    auVar32 = func_0x00f78ac0(uVar20,0);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar19;
    *(long *)((long)register0x00000008 + -0x50) = lVar6;
    *(ulong *)((long)register0x00000008 + -0x48) = uVar5;
    *(undefined1 **)((long)register0x00000008 + -0x40) = puVar23;
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_UI_Screens_MaskTransitionScreen__RequestPlayReveal;
    puVar23 = (undefined1 *)((long)register0x00000008 + -0x40);
    unaff_x23 = 0x3eb4000;
    uVar20 = 0x3d41178;
    uVar5 = uVar13;
    if ((bRam0000000003eb4988 & 1) == 0) {
      func_0x00f78a20(0x3d41178);
      bRam0000000003eb4988 = 1;
    }
    *(undefined1 *)(auVar32._0_8_ + 0x78) = 1;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar32._0_8_,uRam0000000003d41178);
    auVar33._8_8_ = auVar32._8_8_;
    auVar33._0_8_ = lVar6;
    if (lVar6 == 0) {
      puVar24 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayExit;
      auVar33 = func_0x00f78af4();
    }
    else {
      puVar23 = *(undefined1 **)((long)register0x00000008 + -0x40);
      puVar24 = *(undefined **)((long)register0x00000008 + -0x38);
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x60);
      auVar32 = *(undefined1 (*) [16])((long)register0x00000008 + -0x58);
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
      unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x70);
      unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x68);
      uVar5 = uVar13;
      uVar13 = *(ulong *)((long)register0x00000008 + -0x48);
    }
    uVar7 = auVar33._8_8_;
    lVar6 = auVar33._0_8_;
    *(undefined8 *)(puVar1 + -0x30) = uVar20;
    *(undefined1 (*) [16])(puVar1 + -0x28) = auVar32;
    *(ulong *)(puVar1 + -0x18) = uVar13;
    *(undefined1 **)(puVar1 + -0x10) = puVar23;
    *(undefined **)(puVar1 + -8) = puVar24;
    uVar19 = auVar32._0_8_;
    if (*(long *)(lVar6 + 0x58) != 0) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x58),0,0);
      lVar15 = *(long *)(lVar6 + 0x48);
      uVar13 = uVar5;
      uVar19 = uVar7;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= auVar33._8_4_) goto code_r0x0148e67c;
        lVar15 = *(long *)(lVar15 + (long)(int)auVar33._8_4_ * 8 + 0x20);
        if (lVar15 != 0) {
          uVar13 = *(ulong *)(lVar15 + 0x20);
          uVar11 = *(ulong *)(lVar15 + 0x28);
          puVar23 = *(undefined1 **)(puVar1 + -0x10);
          puVar24 = *(undefined **)(puVar1 + -8);
          lVar15 = *(long *)(puVar1 + -0x20);
          uVar14 = *(ulong *)(puVar1 + -0x18);
          uVar20 = *(undefined8 *)(puVar1 + -0x30);
          uVar19 = *(undefined8 *)(puVar1 + -0x28);
          goto code_r0x0148e794;
        }
      }
    }
    func_0x00f78af4();
code_r0x0148e67c:
    uVar7 = func_0x00f78b24();
    lVar15 = func_0x00f78ac0(uVar7,0);
    *(undefined8 *)(puVar1 + -0x60) = uVar20;
    *(undefined8 *)(puVar1 + -0x58) = uVar19;
    *(long *)(puVar1 + -0x50) = lVar6;
    *(ulong *)(puVar1 + -0x48) = uVar13;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = &Atlas_UI_Screens_MaskTransitionScreen___ctor;
    if ((bRam0000000003eb4989 & 1) == 0) {
      func_0x00f78a20(0x3d2c7c8);
      bRam0000000003eb4989 = 1;
    }
    *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x40);
    *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x38);
    if (lVar15 == 0) {
      auVar32 = func_0x00f78af4();
      puVar12 = auVar32._8_8_;
      puVar9 = auVar32._0_8_;
      uVar19 = puVar12[1];
      uVar20 = *puVar12;
      puVar9[2] = puVar12[2];
      puVar9[1] = uVar19;
      *puVar9 = uVar20;
      return puVar9;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar9 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c7c8 + 0x18) + 0xc0) + 0x38))();
    return puVar9;
  }
  uVar13 = 0;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x58),0);
  lVar15 = *(long *)(lVar6 + 0x48);
  if (lVar15 == 0) goto code_r0x0148e57c;
  if (*(uint *)(lVar15 + 0x18) <= (uint)uVar19) goto code_r0x0148e580;
  lVar15 = *(long *)(lVar15 + (long)(int)(uint)uVar19 * 8 + 0x20);
  if (lVar15 == 0) goto code_r0x0148e57c;
  uVar19 = 0x3d78000;
  uVar13 = *(ulong *)(lVar15 + 0x10);
  uVar11 = *(ulong *)(lVar15 + 0x18);
  puVar24 = &UNK_0148e564;
  uVar14 = uVar5;
  lVar15 = lVar6;
code_r0x0148e794:
  puVar2 = puVar1 + -0x90;
  *(undefined8 *)(puVar1 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar1 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar1 + -0x70) = unaff_d9;
  *(ulong *)(puVar1 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x30) = uVar20;
  *(undefined8 *)(puVar1 + -0x28) = uVar19;
  *(long *)(puVar1 + -0x20) = lVar15;
  *(ulong *)(puVar1 + -0x18) = uVar14;
  *(undefined1 **)(puVar1 + -0x10) = puVar23;
  *(undefined **)(puVar1 + -8) = puVar24;
  puVar23 = puVar1 + -0x10;
  uVar18 = 0x3eb4000;
  uVar14 = uVar13;
  if ((bRam0000000003eb498c & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb498c = 1;
  }
  uVar8 = uVar5;
  uVar21 = uVar11;
  if (uVar11 != 0) {
    *(ulong *)(puVar1 + -0x90) = uVar13;
    lVar15 = *(long *)(lVar6 + 0x40);
    if (lVar15 != 0) {
      iVar4 = *(int *)(lVar15 + 0x18);
      *(int *)(puVar1 + -0x88) = iVar4;
      uVar10 = uVar5;
      if (0 < iVar4) {
        uVar17 = 0;
        uVar10 = 0x3d23990;
        *(undefined4 *)(puVar1 + -0x84) = *(undefined4 *)(uVar11 + 0x18);
code_r0x0148e82c:
        uVar8 = uVar5;
        if ((*(uint *)(lVar15 + 0x18) <= uVar17) || (*(uint *)(uVar11 + 0x18) <= uVar17))
        goto code_r0x0148eac4;
        lVar15 = *(long *)(lVar15 + (long)(int)uVar17 * 8 + 0x20);
        uVar18 = *(ulong *)(uVar11 + (long)(int)uVar17 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
        if ((uVar8 & 1) == 0) {
          uVar8 = uVar5;
          uVar21 = uVar11;
          if (uVar18 == 0) goto code_r0x0148eac0;
          uVar16 = *(ulong *)(uVar18 + 0x10);
        }
        else {
          uVar16 = uVar5;
          uVar8 = uVar5;
          uVar21 = uVar11;
          if (uVar18 == 0) goto code_r0x0148eac0;
        }
        if (*(char *)(uVar18 + 0x18) != '\0') {
          uVar16 = 0;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar14 = 0;
        uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0);
        uVar13 = uVar11;
        uVar8 = uVar5;
        uVar21 = uVar5;
        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x18) == 0)) goto code_r0x0148eac0;
        uVar8 = 0x3d23990;
        uVar14 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar15 + 0x18),(int)uVar17 < *(int *)(puVar1 + -0x84));
        plVar22 = *(long **)(lVar15 + 0x10);
        /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
        if (plVar22 == (long *)0x0) goto code_r0x0148eac0;
        (**(code **)(*plVar22 + 0x2a8))(plVar22,*(undefined8 *)(*plVar22 + 0x2b0));
        if ((uVar3 & 1) == 0) {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = 0;
          iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar16,0);
          if (iVar4 != 0) goto code_r0x0148e950;
          if (*(int *)(puVar1 + -0x84) <= (int)uVar17) goto code_r0x0148ea48;
        }
        else {
code_r0x0148e950:
          if (*(long *)(lVar15 + 0x10) == 0) goto code_r0x0148eac0;
          uVar14 = 0;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar15 + 0x10),0);
          if (*(int *)(puVar1 + -0x84) <= (int)uVar17) {
code_r0x0148ea48:
            uVar17 = uVar17 + 1;
            if (*(uint *)(puVar1 + -0x88) == uVar17) goto code_r0x0148ea6c;
            lVar15 = *(long *)(lVar6 + 0x40);
            uVar8 = uVar5;
            uVar21 = uVar11;
            if (lVar15 == 0) goto code_r0x0148eac0;
            goto code_r0x0148e82c;
          }
          if (uVar3 == 0) goto code_r0x0148e998;
          if (*(long *)(lVar15 + 0x10) == 0) goto code_r0x0148eac0;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar15 + 0x10),uVar16,0);
        }
code_r0x0148e998:
        fVar25 = *(float *)(uVar18 + 0x2c);
        uVar14 = (ulong)*(uint *)(uVar18 + 0x30);
        puVar24 = &UNK_0148e9a8;
        goto code_r0x0148ead0;
      }
code_r0x0148ea6c:
      lVar6 = *(long *)(lVar6 + 0x50);
      uVar8 = uVar10;
      if (lVar6 != 0) {
        uVar11 = *(ulong *)(puVar1 + -0x90);
        puVar24 = &UNK_0148ea88;
        goto code_r0x03211320;
      }
    }
  }
code_r0x0148eac0:
  func_0x00f78af4();
  uVar11 = uVar21;
code_r0x0148eac4:
  uVar5 = uVar11;
  uVar10 = uVar8;
  uVar11 = uVar13;
  uVar20 = func_0x00f78b24();
  puVar24 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__CalculateScaleAndOffset;
  fVar25 = (float)func_0x00f78ac0(uVar20,0);
  uVar16 = extraout_x1;
code_r0x0148ead0:
  puVar2 = puVar1 + -0x110;
  *(undefined8 *)(puVar1 + -0xf0) = unaff_d13;
  *(undefined8 *)(puVar1 + -0xe8) = unaff_d12;
  *(undefined8 *)(puVar1 + -0xe0) = unaff_d11;
  *(undefined8 *)(puVar1 + -0xd8) = unaff_d10;
  *(undefined8 *)(puVar1 + -0xd0) = unaff_d9;
  *(ulong *)(puVar1 + -200) = unaff_d8;
  *(ulong *)(puVar1 + -0xc0) = uVar5;
  *(ulong *)(puVar1 + -0xb8) = uVar10;
  *(ulong *)(puVar1 + -0xb0) = uVar11;
  *(ulong *)(puVar1 + -0xa8) = uVar18;
  *(undefined1 **)(puVar1 + -0xa0) = puVar23;
  *(undefined **)(puVar1 + -0x98) = puVar24;
  puVar23 = puVar1 + -0xa0;
  unaff_d8 = (ulong)(uint)fVar25;
  uVar21 = 0x3eb4000;
  uVar11 = uVar14;
  if ((bRam0000000003eb498d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb498d = 1;
  }
  *(undefined8 *)(puVar1 + -0x100) = 0;
  *(undefined8 *)(puVar1 + -0xf8) = 0;
  uVar28 = 0x3f800000;
  uVar29 = 0;
  uVar30 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,puVar1 + -0x100,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar9 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
  if (((ulong)puVar9 & 1) != 0) {
    uVar10 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    iVar4 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
    if (uVar16 == 0) {
      puVar24 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
      func_0x00f78af4();
      if (extraout_x1_00 == 0) {
        *(undefined1 **)(puVar1 + -0x120) = puVar23;
        *(undefined **)(puVar1 + -0x118) =
             &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
        puVar9 = (undefined8 *)func_0x00f78af4();
        *(undefined8 *)(puVar1 + -0x150) = 0x3eb4000;
        *(ulong *)(puVar1 + -0x148) = uVar10;
        *(undefined8 *)(puVar1 + -0x140) = 0;
        *(ulong *)(puVar1 + -0x138) = uVar14;
        *(undefined1 **)(puVar1 + -0x130) = puVar1 + -0x120;
        *(undefined **)(puVar1 + -0x128) = &Atlas_UI_Screens_MaskTransitionScreenBehaviour___ctor;
        if ((bRam0000000003eb498e & 1) == 0) {
          func_0x00f78a20(0x3d255d8);
          bRam0000000003eb498e = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(puVar1 + -0x150) = *(undefined8 *)(puVar1 + -0x150);
        *(undefined8 *)(puVar1 + -0x148) = *(undefined8 *)(puVar1 + -0x148);
        *(undefined8 *)(puVar1 + -0x140) = *(undefined8 *)(puVar1 + -0x140);
        *(undefined8 *)(puVar1 + -0x138) = *(undefined8 *)(puVar1 + -0x138);
        *(undefined8 *)(puVar1 + -0x130) = *(undefined8 *)(puVar1 + -0x130);
        *(undefined8 *)(puVar1 + -0x128) = *(undefined8 *)(puVar1 + -0x128);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return puVar9;
      }
      uVar13 = 0;
      lVar6 = extraout_x1_00;
      uVar18 = uVar14;
code_r0x03211320:
      *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
      *(ulong *)(puVar2 + -0x38) = unaff_d8;
      *(ulong *)(puVar2 + -0x30) = uVar21;
      *(ulong *)(puVar2 + -0x28) = uVar10;
      *(ulong *)(puVar2 + -0x20) = uVar13;
      *(ulong *)(puVar2 + -0x18) = uVar18;
      *(undefined1 **)(puVar2 + -0x10) = puVar23;
      *(undefined **)(puVar2 + -8) = puVar24;
      if (pcRam0000000003ebe3c0 == (code *)0x0) {
        pcRam0000000003ebe3c0 =
             (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)",uVar11,0,0)
        ;
      }
      uVar20 = (*pcRam0000000003ebe3c0)(uVar11);
      if (pcRam0000000003ebe318 == (code *)0x0) {
        pcRam0000000003ebe318 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar9 = (undefined8 *)(*pcRam0000000003ebe318)(0,lVar6,uVar20,0);
      return puVar9;
    }
    fVar31 = (float)iVar4;
    uVar26 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(uVar16,0);
    *(undefined4 *)(puVar1 + -0x110) = uVar26;
    *(undefined4 *)(puVar1 + -0x10c) = uVar28;
    *(undefined4 *)(puVar1 + -0x108) = uVar29;
    *(undefined4 *)(puVar1 + -0x104) = uVar30;
    uVar29 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar1 + -0x110,0);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar27 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4((float)(int)uVar10,fVar31,uVar29,uVar28,uVar14,0);
    puVar9 = (undefined8 *)/*Core.UI2.UIUtils$$CalculateCentredSTCoordsForScaleFactor*/ func_0x02f90c74(fVar27 / fVar25,fVar31 / fVar25,0);
  }
  return puVar9;
}



// ============================================================
// RVA: 0x148e58c | Atlas.UI.Screens.MaskTransitionScreen.RequestPlayReveal
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e9a8) */
/* WARNING: Removing unreachable block (ram,0x0148e9b0) */
/* WARNING: Removing unreachable block (ram,0x0148e9e8) */
/* WARNING: Removing unreachable block (ram,0x0148e9f0) */
/* WARNING: Removing unreachable block (ram,0x0148e9f4) */
/* WARNING: Removing unreachable block (ram,0x0148e9f8) */
/* WARNING: Removing unreachable block (ram,0x0148ea30) */
/* WARNING: Removing unreachable block (ram,0x0148ea88) */
/* WARNING: Removing unreachable block (ram,0x0148ea90) */
/* WARNING: Removing unreachable block (ram,0x03212134) */
/* WARNING: Removing unreachable block (ram,0x03212158) */
/* WARNING: Removing unreachable block (ram,0x0321216c) */

undefined8 *
Atlas_UI_Screens_MaskTransitionScreen__RequestPlayReveal(long param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong unaff_x19;
  ulong uVar17;
  long unaff_x20;
  ulong uVar18;
  long unaff_x21;
  undefined8 unaff_x22;
  ulong uVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar30;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar31 [16];
  
  puVar21 = &stack0xfffffffffffffff0;
  uVar11 = param_3;
  if ((bRam0000000003eb4988 & 1) == 0) {
    func_0x00f78a20(0x3d41178);
    bRam0000000003eb4988 = 1;
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41178);
  lVar14 = param_2;
  uVar9 = param_3;
  if (lVar4 == 0) {
    unaff_x30 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayExit;
    auVar31 = func_0x00f78af4();
    lVar4 = auVar31._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    lVar14 = auVar31._8_8_;
    uVar9 = uVar11;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x21 = param_1;
    unaff_x22 = 0x3d41178;
    unaff_x23 = 0x3eb4000;
    unaff_x29 = puVar21;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(long *)(lVar4 + 0x58) != 0) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x58),0,0);
    lVar13 = *(long *)(lVar4 + 0x48);
    unaff_x19 = uVar9;
    unaff_x21 = lVar14;
    if (lVar13 != 0) {
      if (*(uint *)(lVar13 + 0x18) <= (uint)lVar14) goto code_r0x0148e67c;
      lVar14 = *(long *)(lVar13 + (long)(int)(uint)lVar14 * 8 + 0x20);
      if (lVar14 != 0) {
        uVar11 = *(ulong *)(lVar14 + 0x20);
        uVar18 = *(ulong *)(lVar14 + 0x28);
        puVar1 = (undefined1 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
        *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
        *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        puVar21 = (undefined1 *)((long)register0x00000008 + -0x10);
        uVar17 = 0x3eb4000;
        uVar12 = uVar11;
        if ((bRam0000000003eb498c & 1) == 0) {
          func_0x00f78a20(0x3d23230);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb498c = 1;
        }
        uVar5 = uVar9;
        uVar19 = uVar18;
        if (uVar18 != 0) {
          *(ulong *)((long)register0x00000008 + -0x90) = uVar11;
          lVar14 = *(long *)(lVar4 + 0x40);
          if (lVar14 != 0) {
            iVar3 = *(int *)(lVar14 + 0x18);
            *(int *)((long)register0x00000008 + -0x88) = iVar3;
            uVar8 = uVar9;
            if (0 < iVar3) {
              uVar16 = 0;
              uVar8 = 0x3d23990;
              *(undefined4 *)((long)register0x00000008 + -0x84) = *(undefined4 *)(uVar18 + 0x18);
code_r0x0148e82c:
              uVar5 = uVar9;
              if ((*(uint *)(lVar14 + 0x18) <= uVar16) || (*(uint *)(uVar18 + 0x18) <= uVar16))
              goto code_r0x0148eac4;
              lVar14 = *(long *)(lVar14 + (long)(int)uVar16 * 8 + 0x20);
              uVar17 = *(ulong *)(uVar18 + (long)(int)uVar16 * 8 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
              if ((uVar5 & 1) == 0) {
                uVar5 = uVar9;
                uVar19 = uVar18;
                if (uVar17 == 0) goto code_r0x0148eac0;
                uVar15 = *(ulong *)(uVar17 + 0x10);
              }
              else {
                uVar15 = uVar9;
                uVar5 = uVar9;
                uVar19 = uVar18;
                if (uVar17 == 0) goto code_r0x0148eac0;
              }
              if (*(char *)(uVar17 + 0x18) != '\0') {
                uVar15 = 0;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar12 = 0;
              uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0);
              uVar11 = uVar18;
              uVar5 = uVar9;
              uVar19 = uVar9;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) goto code_r0x0148eac0;
              uVar5 = 0x3d23990;
              uVar12 = 0;
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar14 + 0x18),
                              (int)uVar16 < *(int *)((long)register0x00000008 + -0x84));
              plVar20 = *(long **)(lVar14 + 0x10);
              /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
              if (plVar20 == (long *)0x0) goto code_r0x0148eac0;
              (**(code **)(*plVar20 + 0x2a8))(plVar20,*(undefined8 *)(*plVar20 + 0x2b0));
              if ((uVar2 & 1) == 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar12 = 0;
                iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar15,0);
                if (iVar3 != 0) goto code_r0x0148e950;
                if (*(int *)((long)register0x00000008 + -0x84) <= (int)uVar16)
                goto code_r0x0148ea48;
              }
              else {
code_r0x0148e950:
                if (*(long *)(lVar14 + 0x10) == 0) goto code_r0x0148eac0;
                uVar12 = 0;
                /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar14 + 0x10),0);
                if (*(int *)((long)register0x00000008 + -0x84) <= (int)uVar16) {
code_r0x0148ea48:
                  uVar16 = uVar16 + 1;
                  if (*(uint *)((long)register0x00000008 + -0x88) == uVar16) goto code_r0x0148ea6c;
                  lVar14 = *(long *)(lVar4 + 0x40);
                  uVar5 = uVar9;
                  uVar19 = uVar18;
                  if (lVar14 == 0) goto code_r0x0148eac0;
                  goto code_r0x0148e82c;
                }
                if (uVar2 == 0) goto code_r0x0148e998;
                if (*(long *)(lVar14 + 0x10) == 0) goto code_r0x0148eac0;
                /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar14 + 0x10),uVar15,0);
              }
code_r0x0148e998:
              fVar23 = *(float *)(uVar17 + 0x2c);
              uVar12 = (ulong)*(uint *)(uVar17 + 0x30);
              puVar22 = &UNK_0148e9a8;
              goto code_r0x0148ead0;
            }
code_r0x0148ea6c:
            lVar14 = *(long *)(lVar4 + 0x50);
            uVar5 = uVar8;
            if (lVar14 != 0) {
              uVar9 = *(ulong *)((long)register0x00000008 + -0x90);
              puVar22 = &UNK_0148ea88;
              goto code_r0x03211320;
            }
          }
        }
code_r0x0148eac0:
        func_0x00f78af4();
        uVar18 = uVar19;
code_r0x0148eac4:
        uVar9 = uVar18;
        uVar8 = uVar5;
        uVar18 = uVar11;
        uVar6 = func_0x00f78b24();
        puVar22 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__CalculateScaleAndOffset;
        fVar23 = (float)func_0x00f78ac0(uVar6,0);
        uVar15 = extraout_x1;
code_r0x0148ead0:
        puVar1 = (undefined1 *)((long)register0x00000008 + -0x110);
        *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_d13;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = unaff_d12;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_d11;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_d10;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -200) = unaff_d8;
        *(ulong *)((long)register0x00000008 + -0xc0) = uVar9;
        *(ulong *)((long)register0x00000008 + -0xb8) = uVar8;
        *(ulong *)((long)register0x00000008 + -0xb0) = uVar18;
        *(ulong *)((long)register0x00000008 + -0xa8) = uVar17;
        *(undefined1 **)((long)register0x00000008 + -0xa0) = puVar21;
        *(undefined **)((long)register0x00000008 + -0x98) = puVar22;
        puVar21 = (undefined1 *)((long)register0x00000008 + -0xa0);
        unaff_d8 = (ulong)(uint)fVar23;
        uVar19 = 0x3eb4000;
        uVar9 = uVar12;
        if ((bRam0000000003eb498d & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d25608);
          bRam0000000003eb498d = 1;
        }
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
        uVar27 = 0x3f800000;
        uVar28 = 0;
        uVar29 = 0;
        /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,(undefined1 *)((long)register0x00000008 + -0x100),0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar7 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar15,0);
        if (((ulong)puVar7 & 1) != 0) {
          uVar8 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
          iVar3 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
          if (uVar15 == 0) {
            puVar22 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
            func_0x00f78af4();
            if (extraout_x1_00 == 0) {
              *(undefined1 **)((long)register0x00000008 + -0x120) = puVar21;
              *(undefined **)((long)register0x00000008 + -0x118) =
                   &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
              puVar7 = (undefined8 *)func_0x00f78af4();
              *(undefined8 *)((long)register0x00000008 + -0x150) = 0x3eb4000;
              *(ulong *)((long)register0x00000008 + -0x148) = uVar8;
              *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
              *(ulong *)((long)register0x00000008 + -0x138) = uVar12;
              *(undefined1 **)((long)register0x00000008 + -0x130) =
                   (undefined1 *)((long)register0x00000008 + -0x120);
              *(undefined **)((long)register0x00000008 + -0x128) =
                   &Atlas_UI_Screens_MaskTransitionScreenBehaviour___ctor;
              if ((bRam0000000003eb498e & 1) == 0) {
                func_0x00f78a20(0x3d255d8);
                bRam0000000003eb498e = 1;
              }
              if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              *(undefined8 *)((long)register0x00000008 + -0x150) =
                   *(undefined8 *)((long)register0x00000008 + -0x150);
              *(undefined8 *)((long)register0x00000008 + -0x148) =
                   *(undefined8 *)((long)register0x00000008 + -0x148);
              *(undefined8 *)((long)register0x00000008 + -0x140) =
                   *(undefined8 *)((long)register0x00000008 + -0x140);
              *(undefined8 *)((long)register0x00000008 + -0x138) =
                   *(undefined8 *)((long)register0x00000008 + -0x138);
              *(undefined8 *)((long)register0x00000008 + -0x130) =
                   *(undefined8 *)((long)register0x00000008 + -0x130);
              *(undefined8 *)((long)register0x00000008 + -0x128) =
                   *(undefined8 *)((long)register0x00000008 + -0x128);
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return puVar7;
            }
            uVar11 = 0;
            lVar14 = extraout_x1_00;
            uVar17 = uVar12;
code_r0x03211320:
            *(undefined8 *)(puVar1 + -0x40) = unaff_d9;
            *(ulong *)(puVar1 + -0x38) = unaff_d8;
            *(ulong *)(puVar1 + -0x30) = uVar19;
            *(ulong *)(puVar1 + -0x28) = uVar8;
            *(ulong *)(puVar1 + -0x20) = uVar11;
            *(ulong *)(puVar1 + -0x18) = uVar17;
            *(undefined1 **)(puVar1 + -0x10) = puVar21;
            *(undefined **)(puVar1 + -8) = puVar22;
            if (pcRam0000000003ebe3c0 == (code *)0x0) {
              pcRam0000000003ebe3c0 =
                   (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)",uVar9
                                           ,0,0);
            }
            uVar6 = (*pcRam0000000003ebe3c0)(uVar9);
            if (pcRam0000000003ebe318 == (code *)0x0) {
              pcRam0000000003ebe318 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar7 = (undefined8 *)(*pcRam0000000003ebe318)(0,lVar14,uVar6,0);
            return puVar7;
          }
          fVar30 = (float)iVar3;
          uVar24 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(uVar15,0);
          *(undefined4 *)((long)register0x00000008 + -0x110) = uVar24;
          *(undefined4 *)((long)register0x00000008 + -0x10c) = uVar27;
          *(undefined4 *)((long)register0x00000008 + -0x108) = uVar28;
          *(undefined4 *)((long)register0x00000008 + -0x104) = uVar29;
          uVar28 = /*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)register0x00000008 + -0x110),0);
          if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar25 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4((float)(int)uVar8,fVar30,uVar28,uVar27,uVar12,0);
          puVar7 = (undefined8 *)/*Core.UI2.UIUtils$$CalculateCentredSTCoordsForScaleFactor*/ func_0x02f90c74(fVar25 / fVar23,fVar30 / fVar23,0);
        }
        return puVar7;
      }
    }
  }
  func_0x00f78af4();
code_r0x0148e67c:
  uVar6 = func_0x00f78b24();
  lVar14 = func_0x00f78ac0(uVar6,0);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x58) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x50) = lVar4;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_UI_Screens_MaskTransitionScreen___ctor;
  if ((bRam0000000003eb4989 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c8);
    bRam0000000003eb4989 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  if (lVar14 == 0) {
    auVar31 = func_0x00f78af4();
    puVar10 = auVar31._8_8_;
    puVar7 = auVar31._0_8_;
    uVar26 = puVar10[1];
    uVar6 = *puVar10;
    puVar7[2] = puVar10[2];
    puVar7[1] = uVar26;
    *puVar7 = uVar6;
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar7 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c7c8 + 0x18) + 0xc0) + 0x38))();
  return puVar7;
}



// ============================================================
// RVA: 0x148e688 | Atlas.UI.Screens.MaskTransitionScreen..ctor
// ============================================================

void Atlas_UI_Screens_MaskTransitionScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4989 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c8);
    bRam0000000003eb4989 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7c8 + 0x18) + 0xc0) + 0x38))();
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



